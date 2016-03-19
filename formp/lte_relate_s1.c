/****************************************************************************** 

版权所有（C），2001-2015年，恒扬科技股份有限公司

******************************************************************************
文件名:       lte_relate_s1.c
编码格式:     ASCII
作者:         chengshuan
创建:         Nov 17, 2015
历史:
    1.日期    :Nov 17, 2015
      作者    :chengshuan
      修改    :Created file
******************************************************************************/

#include "lte_relate_s1.h"




/* 建立imsi表，建立 s1-mme表 */
mp_error_t lte_s1ap_initialUEMessage(parse_s1ap_t *s1ap)
{
    CVMX_MP_POINT_CHECK(s1ap, M_S1, LV_ERROR);

    mp_code_t rv = MP_OK;
    parse_nas_t nas = s1ap->nas;
    /* query s-tmsi to find imsi with guti, result=FALSE indicate failure*/
    uint8_t result = TRUE;

    // 1.if s1ap packet has imsi info, create imsi table by imsi information directly
    // 2.if s1ap packet has old guti info, search imsi from S-TMSI table by old guti, and create imsi table by imsi
    hydra_stat_inc(stat_pkts_s1ap_initialUEMessage);
    
    /* InitialUEMessage 承载的信令中，我们主要关注的有两个: a. Attach Request, b. TAU Request 也就是Tracking Area Update */
    /* Attach Request 信令(NAS层)，其中有可能带有imsi或者old_guti */
    /* TAU Request 信令(NAS层)，一般只带有old_guti，除了这两种报文之外的报文，目前暂时不用处理 */
    /* chengshuan 2016.01.28 */
    if ((EMM_MSG_ATTACH_REQUEST != nas.EMM_message_type) && (EMM_MSG_TAU_REQUEST != nas.EMM_message_type))
    {
        LTE_DEBUG_PRINTF("Not Attach Request and TAU Request packet! \n");
        hydra_stat_inc(stat_pkts_s1ap_invalid_initialUEMessage);
        return MP_E_NONE;
    }
    hydra_stat_inc(stat_pkts_AttachRequest);

    /* step 0. S1-MME */
    hash_table_index_t s1_mme_index             = {};
    lte_table_s1_mme_enodeb_t s1_mme_search_d   = {};
    uint64_t action_s1_mme = 0;

    /* initialUEMessage has only enode_ue_s1ap_id */
    s1_mme_search_d.mme_ip              = s1ap->mme_ip;
    action_s1_mme |= S1_MMET_UPDATE_MME_IP;

    s1_mme_search_d.enode_ip            = s1ap->enode_ip;
    action_s1_mme |= S1_MMET_UPDATE_ENODE_IP;

    s1_mme_search_d.enode_ue_s1ap_id    = s1ap->enode_ue_s1ap_id;
    action_s1_mme |= S1_MMET_UPDATE_ENODE_UE_ID;

    s1_mme_search_d.guti_flag           = FALSE;
    action_s1_mme |= S1_MMET_UPDATE_GUTI_FLAG;

    memcpy(&s1_mme_search_d.tai, s1ap->tai, sizeof(lte_tai_t));
    action_s1_mme |= S1_MMET_UPDATE_TAI;
    

    LTE_DEBUG_PRINTF("initialUEMessage: Check info nas.ciphered_flag = %d, nas.type_of_identity = %d \n", nas.ciphered_flag, nas.type_of_identity);

    if( TRUE == nas.ciphered_flag )
    {
        // Do not support ciphered InitialUEMessage yet
        // Count a statistic and return
        hydra_stat_inc(stat_pkts_s1ap_ciphered_initialUEMessage);
        return MP_E_NONE;
    }

    if( TYPE_IMSI == nas.type_of_identity )
    {
        memcpy(s1_mme_search_d.imsi, nas.init_identify.imsi, sizeof(lte_imsi_t));
        action_s1_mme |= S1_MMET_UPDATE_IMSI;
        hydra_stat_inc(stat_pkts_s1ap_imsi_initialUEMessage);
        PRINTF_IMSI(s1_mme_search_d.imsi);
    }
    else if( TYPE_OLD_GUTI == nas.type_of_identity)
    {
        // s1ap packet has no imsi but old_guti, search from S-TMSI table for imsi info
        s1_mme_search_d.guti_flag           = TRUE;
        memcpy(s1_mme_search_d.old_guti, nas.init_identify.guti, sizeof(lte_guti_t)); 
        action_s1_mme |= S1_MMET_UPDATE_OLD_GUTI;
        hydra_stat_inc(stat_pkts_s1ap_old_guti_initialUEMessage);

        /* Step 0.1 S-TMSI */
        // Search S-TMSI table by old_guti for imsi, fill imsi into S1-MME table
        hash_key_t key_s_tmsi={};
        lte_table_s_tmsi_t s_tmsi_cell      = {};

        PRINTF_GUTI(nas.init_identify.guti);
        PRINTF_S_TMSI(nas.init_identify.guti + LTE_STMSI_OFFSET);

        update_s_tmsi_hash_key((nas.init_identify.guti + LTE_STMSI_OFFSET), &(key_s_tmsi)); // S-TMSI 由MME CODE和M-TMSI组成，是GUTI中的后5个字节
        LTE_DEBUG_PRINTF("key=%lx\n" , key_s_tmsi.data[0]);

        LTE_DEBUG_PRINTF("Search S-TMSI table for imsi! \n");

        rv = hash_cell_get_by_hash(LTE_GET_TABLE_PTR(TABLE_S_TIMSI), &key_s_tmsi, 
                                   (void*)&s_tmsi_cell, sizeof(s_tmsi_cell));
        if(MP_CELL_FOUND != rv)
        {
            // even didn't find the IMSI associated with GUTI, but create a new S1_MME table entry to store tai without imsi
            LTE_DEBUG_PRINTF("Didn't find the related imsi from S-TMSI table!\n");
            hydra_stat_inc(stat_pkts_s1ap_not_found_imsi_from_STMSI);
            result = FALSE;
        }
        else
        {
            // get imsi by s-tmsi
            PRINTF_IMSI(s_tmsi_cell.imsi);
            memcpy(&s1_mme_search_d.imsi, &s_tmsi_cell.imsi, sizeof(lte_imsi_t));
            action_s1_mme |= S1_MMET_UPDATE_IMSI;
        }

    }
    else
    {
        //Invalid identity type
        hydra_stat_inc(stat_pkts_s1ap_invalid_initialUEMessage);
        return MP_E_PARAM;
    }

    s1_mme_search_d.aging = (uint16_t)g_aging_timer_max;
    action_s1_mme |= S1_MMET_UPDATE_AGING;

    // create S1-MME table
    rv = create_update_table_by_hash(TABLE_S1_ENODEB_MME, CREATE_TABLE, action_s1_mme, 
    (void*)&s1_mme_search_d, sizeof(lte_table_s1_mme_enodeb_t), &s1_mme_index);
    if(MP_OK != rv)
    {
        return rv;
    }

    /* step 1. Imsi */
    lte_table_imsi_t imsi_search_d      = {};
    hash_table_index_t imsi_index       = {};
    uint64_t action_imsi = 0;

    // set s1_mme index to imsi table
    if (TRUE == result)
    {
        SET_TABLE_INDEX( (&(imsi_search_d.pos_s1_mme)), s1_mme_index.index, s1_mme_index.node);
        action_imsi |= IMSIT_UPDATE_POS_S1_MME;
        
        UPDATE_IMSIT_FIELD(IMSI, action_imsi, &imsi_search_d.imsi, &s1_mme_search_d.imsi, sizeof(lte_imsi_t));
            
        UPDATE_IMSIT_FIELD(TAI, action_imsi, &imsi_search_d.tai, s1ap->tai, sizeof(lte_tai_t));
        
        imsi_search_d.aging = (uint16_t)g_aging_timer_max;
        action_imsi |= IMSIT_UPDATE_AGING;
        
        // create IMSI table
        rv = create_update_table_by_hash(TABLE_IMSI, CREATE_TABLE, action_imsi, (void*)&imsi_search_d,
        sizeof(lte_table_imsi_t), &imsi_index);
        if(MP_OK != rv)
        {
            LTE_DEBUG_PRINTF("initialUEMessage: create ImsiT <Failed>\n");
            hydra_stat_inc(stat_pkts_imsi_table_failed);
           return rv;
        }

    }
    
    return MP_E_NONE;    

}

/* 查询S1-MME表项，通过NAS接口解密出GUTI以及TAI信息，更新到imsi表中 */
mp_error_t lte_s1ap_InitialContextSetup(void *packet_ptr, parse_s1ap_t *s1ap)
{
    mp_code_t rv = MP_E_NONE;

    CVMX_MP_POINT_CHECK(s1ap, M_S1, LV_ERROR);
    CVMX_MP_POINT_CHECK(packet_ptr, M_S1, LV_ERROR);

    parse_nas_t nas = s1ap->nas;
    lte_guti_t  guti = {};

    /* Attach Accept (NAS层)报文是由InitialContextSetup承载，我们需要的GUTI是在Attach Accept中，非Attach Accept报文不用处理 */
    /* chengshuan 2016.01.28 */
    hydra_stat_inc(stat_pkts_InitialContextSetup);
    if ((EMM_MSG_ATTACH_ACCEPT != nas.EMM_message_type) 
                                 && (nas.ciphered_flag == FALSE))
    {
        LTE_DEBUG_PRINTF("Not Attach Accept packet! \n");
        hydra_stat_inc(stat_pkts_NotAttachAccept);
        return MP_E_NONE;
    }

    if (nas.ciphered_flag == FALSE)
    {
        // InitialContextSetup Message is not ciphered  
        LTE_DEBUG_PRINTF("ciphered_flag: %d \n", nas.ciphered_flag);
        hydra_stat_inc(stat_pkts_InitialContextSetup_no_ciphered);
    }

    // 1.0 search s1_mme table for imsi and cipher Algorithm type
    hash_key_t key_s1_mme={};
    lte_table_s1_mme_enodeb_t   s1_mme_cell     = {};

    update_s1_mme_hash_key(s1ap->enode_ip, s1ap->enode_ue_s1ap_id, &(key_s1_mme));
    LTE_DEBUG_PRINTF("key=%lx\n" , key_s1_mme.data[0]);

    LTE_DEBUG_PRINTF("Search S1-MME table for imsi! \n");
    rv = hash_cell_get_by_hash(LTE_GET_TABLE_PTR(TABLE_S1_MME), &key_s1_mme, 
                               (void*)&s1_mme_cell, sizeof(s1_mme_cell));
    if(MP_CELL_FOUND != rv)
    {
        LTE_DEBUG_PRINTF("The S1-MME table search failed ! rv = %d\n", rv);
        hydra_stat_inc(stat_search_imsi_failed_1);
        return rv;
    }    
    
    PRINTF_IMSI(s1_mme_cell.imsi);

    IMSI_IS_0(&(s1_mme_cell.imsi));

    hash_key_t                  key_imsi        = {};
    lte_table_imsi_t            imsi_cell       = {};
    lte_table_imsi_t            imsi_table_d    = {};
    uint64_t                    action_imsi     = 0;

    lte_table_s1u_sgw_t s1u_sgw_search_d = {};
    uint64_t action_s1u_sgw = 0;
    lte_table_s1u_sgw_t   s1u_sgw_cell     = {};
    hash_table_index_t    index_s1u_sgw = {};
    
    // if s1_mme table entry is valid, then query imsi table with s1_mme_cell->imsi
    if (s1_mme_cell.mask & S1_MMET_IMSI_VALID)
    {
        update_imsi_hash_key(s1_mme_cell.imsi, &(key_imsi));
        
        LTE_DEBUG_PRINTF("Search imsi table for kasme! \n");
        rv = hash_cell_get_by_hash(LTE_GET_TABLE_PTR(TABLE_IMSI), &key_imsi, 
        (void*)&imsi_cell, sizeof(imsi_cell));
        if(MP_CELL_FOUND != rv)
        {
            LTE_DEBUG_PRINTF("The imsi table search failed ! rv = %d\n", rv);
            hydra_stat_inc(stat_search_kasme_failed_1);
            return rv;
        }    
    }
    // if imsi is no exist in s1-mme, then query imsi table with s1u-sgw->imsi
    else 
    {
        // query s1u_sgw table with s1ap->rab_info then re-write
        
        hash_key_t key_s1u_sgw = {};
        
        update_fteid_hash_key(s1ap->rab_info.tip, s1ap->rab_info.teid, &key_s1u_sgw);
        
        rv = hash_cell_get_by_hash(LTE_GET_TABLE_PTR(TABLE_S1U_SGW), &key_s1u_sgw, 
                                   (void*)&s1u_sgw_cell, sizeof(s1u_sgw_cell));
        if(MP_CELL_FOUND != rv)
        {
            hydra_stat_inc(stat_pkts_s1u_table_failed_2);
            LTE_DEBUG_PRINTF("The S1U_SGW table search failed ! rv = %d\n", rv);
            return rv;
        }   


        // query imsi table with s1u_sgw table
        update_imsi_hash_key(s1u_sgw_cell.imsi, &(key_imsi));
        
        LTE_DEBUG_PRINTF("Search imsi table for kasme! \n");
        rv = hash_cell_get_by_hash(LTE_GET_TABLE_PTR(TABLE_IMSI), &key_imsi, 
                                   (void*)&imsi_cell, sizeof(imsi_cell));
        if(MP_CELL_FOUND != rv)
        {
            LTE_DEBUG_PRINTF("The imsi table search failed ! rv = %d\n", rv);
            hydra_stat_inc(stat_search_kasme_failed_1);
            return rv;
        }    
    
        // re-write s1_mme imsi field
        uint64_t action_s1_mme = 0;
        lte_table_s1_mme_t s1_mme_table_d = {};
        hash_table_index_t index_s1_mme = {};

        s1_mme_table_d.enode_ip = s1ap->enode_ip;
        s1_mme_table_d.enode_ue_s1ap_id = s1ap->enode_ue_s1ap_id;
        
        memcpy(s1_mme_table_d.imsi, imsi_cell.imsi, sizeof(lte_imsi_t));
        action_s1_mme |= S1_MMET_UPDATE_IMSI;
        
        s1_mme_table_d.aging = (uint16_t)g_aging_timer_max;
        action_s1_mme |= S1_MMET_UPDATE_AGING;
        
        rv = create_update_table_by_hash(TABLE_S1_ENODEB_MME, UPDATE_TABLE, action_s1_mme, 
                                         (void*)&s1_mme_table_d, sizeof(lte_table_s1_mme_enodeb_t), &index_s1_mme);
        if(MP_OK != rv)
        {
            return rv;
        }  
    
        // update pos_s1_mme and tai field into imsi table entry
        CHECK_UPDATE_IMSI_OF_POS_S1_MME(imsi_cell, imsi_table_d, index_s1_mme, action_imsi);
        CHECK_UPDATE_IMSI_OF_TAI(imsi_cell, imsi_table_d, s1_mme_cell.tai, action_imsi);    
        
        // re-write s1u-sgw tai field
        CHECK_UPDATE_S1U_OF_TAI(s1u_sgw_cell, s1u_sgw_search_d, s1_mme_cell.tai, action_s1u_sgw);
    }
    
    // 1.1 Search imsi table for kasme

    PRINTF_KASME(imsi_cell.kasme);
    PRINTF_IMSI(imsi_cell.imsi);


    // 1. calling NAS API for GUTI
    // 2.0 decrypt the NAS PDU
    //LTE_DEBUG_PRINTF("NAS data offset: nas.nas_cipher_off = %d !\n",nas.nas_cipher_off);

    nas_info_t nas_src = {};
    nas_plain_t nas_dst = {};
    uint8_t dst_data[MAX_CIPHER_LEN] = {};

    nas_src.sequence_no = nas.sequence_no;
    nas_src.bear_id = s1ap->bear_id;
    nas_src.dir = s1ap->direction;
    nas_src.data_len = nas.nas_cipher_len;
    //nas_src.data = (uint8_t*)(packet_ptr + nas.nas_cipher_off);
    nas_src.data = nas.nas_cipher_ptr;
    nas_src.type = s1_mme_cell.cipher_alg_type;
    memcpy(nas_src.kasme, imsi_cell.kasme, sizeof(lte_kasme_t));
    LTE_DEBUG_PRINTF("NAS data  nas.nas_cipher_len = %d !\n",nas.nas_cipher_len);
    LTE_DEBUG_PRINTF("NAS src data structure: sequence_no = %d, bear_id = %d, dir = %d, data_len = %d, data = %p, type = %d !\n",
                             nas_src.sequence_no, nas_src.bear_id, nas_src.dir, nas_src.data_len, nas_src.data, nas_src.type);
#if LTE_DEBUG
    LTE_DEBUG_PRINTF("NAS data cipher data dump !\n");
    uint8_t i = 0;
    for(i = 0; i < nas_src.data_len; i ++)
    {
        printf("NAS ciphered data[%d]:%02x \n",i,  *(unsigned int*)(nas_src.data + i));
    }
#endif


    if(ENABLE == nas.ciphered_flag)
    {
        nas_dst.data = dst_data;
        nas_dst.len = 0;

        rv = nas_pdu_decrypt(&nas_src, &nas_dst); //解密报文
        if( MP_OK != rv )
        {
            LTE_DEBUG_PRINTF("Decrypt failed ! rv = %d\n", rv);
            hydra_stat_inc(stat_decrypt_failed);
            return rv;
        } 
        // 2.1 parse guti from the plain data
        mp_error_t result = MP_E_NONE;
        result = nas_pdu_parse_guti(&nas_dst, &guti);
        if(MP_E_INVALID_PACKET == result)
        {
            LTE_DEBUG_PRINTF("We don't care the packet! rv = %d\n", rv);
            hydra_stat_inc(stat_pkts_NotAttachAccept);
            return MP_E_NONE; /*不直接返回rv是这种包我们不关心，不用计入到关联失败的计数中*/
        }
        else if( MP_E_NONE != result )
        {
            hydra_stat_inc(stat_pkts_AttachAccept); /*虽然解析失败，但还是attach accept报文*/
            LTE_DEBUG_PRINTF("relate s1:Parse GUTI failed ! rv = %d\n", rv);
            hydra_stat_inc(stat_parse_guti_failed);
            return result;
        }
    }
    else
    {
        memcpy(&guti, &nas.guti, sizeof(lte_guti_t));
    }

    hydra_stat_inc(stat_pkts_AttachAccept);/*放在这里可以防止加密报文中有不是attach accept报文的*/
    PRINTF_GUTI(guti);

    lte_guti_t guti_null = {0};
    memset(guti_null, 0, sizeof(lte_guti_t));
    if (0 == memcmp(guti, guti_null, sizeof(lte_guti_t)))
    {
        hydra_stat_inc(stat_pkts_s1ap_guti_invalid);
        return MP_E_INTERNAL;
    }
    
    // 3. update imsi table, fill GUTI
    hash_table_index_t imsi_index       = {};
    
    // update guti field
    memcpy(imsi_table_d.guti, guti, sizeof(lte_guti_t));
    action_imsi |= IMSIT_UPDATE_GUTI;

    memcpy(imsi_table_d.imsi, imsi_cell.imsi, sizeof(lte_imsi_t));

    imsi_table_d.aging = (uint16_t)g_aging_timer_max;
    action_imsi |= IMSIT_UPDATE_AGING;
    
    rv = create_update_table_by_hash(TABLE_IMSI, UPDATE_TABLE, action_imsi, 
                                     (void*)&imsi_table_d, sizeof(lte_table_imsi_t), &imsi_index);
    if (MP_OK != rv)
    {
        LTE_DEBUG_PRINTF("Update imsi table guti failed! \n");
        return rv;
    }
    
    CHECK_UPDATE_S1U_OF_GUTI(s1u_sgw_cell, s1u_sgw_search_d, imsi_cell.guti, action_s1u_sgw);
    s1u_sgw_search_d.fteid.ip = s1ap->rab_info.tip;
    s1u_sgw_search_d.fteid.teid = s1ap->rab_info.teid;
    
    rv = create_update_table_by_hash(TABLE_S1U_SGW, CREATE_TABLE, action_s1u_sgw, (void *)&s1u_sgw_search_d,
                                     sizeof(lte_table_s1u_t), &index_s1u_sgw);
    if (MP_OK != rv)
    {
        LTE_DEBUG_PRINTF("Create Session response: Search S1U table <Failed>\n");
        hydra_stat_inc(stat_pkts_s1u_table_failed_2);
        return rv;
    }
    
    

    /* Step 1. Compare the old GUTI with the GUTI get from the NAS PDU */
    /* if it's not same, delete old_GUTI in S-TMSI table */
    /* and create the S-TMSI table with the new GUTI value */

    PRINTF_GUTI(s1_mme_cell.old_guti);
    LTE_DEBUG_PRINTF("s1_mme_cell.guti_flag = %d! \n", s1_mme_cell.guti_flag);

    if( (TRUE == s1_mme_cell.guti_flag) && (NULL != s1_mme_cell.old_guti) )
    {
        LTE_DEBUG_PRINTF("Compare the old_guti with the guti !\n");
        rv = memcmp((void*)guti, (void*)s1_mme_cell.old_guti, sizeof(lte_guti_t));
        if(0 == rv)   
        {
            /* guti are the same */
            LTE_DEBUG_PRINTF("The old_guti in S1-MME table is the same as which InitialContextSetup message take !\n");
            return MP_E_NONE;
        }
        else
        {
            // 1. delete old_guti in S-TMSI table
            LTE_DEBUG_PRINTF("Delete old_guti from S-TMSI !\n");
            hash_key_t key_s_tmsi = {};
            
            PRINTF_S_TMSI(s1_mme_cell.old_guti + LTE_STMSI_OFFSET);// S-TMSI 由MME CODE和M-TMSI组成，是GUTI中的后5个字节
            
            update_s_tmsi_hash_key(s1_mme_cell.old_guti + LTE_STMSI_OFFSET, &(key_s_tmsi));
            LTE_DEBUG_PRINTF("key=%lx\n" , key_s_tmsi.data[0]);
            
            LTE_DEBUG_PRINTF("Search S-TMSI table for imsi! \n");

            rv = hash_cell_delete_by_hash(LTE_GET_TABLE_PTR(TABLE_S_TIMSI), &key_s_tmsi);
            if (MP_OK != rv)
            {
                LTE_DEBUG_PRINTF("Didn't find the related imsi from S-TMSI table! \n");
                return MP_E_INTERNAL;
            }
        }
    }

    // 2. create the S-TMSI table with the new GUTI value
    hash_table_index_t s_tmsi_index     = {};
    lte_table_s_tmsi_t s_tmsi_table_d   = {};
    uint64_t action_tmsi = 0;
    
    memcpy(s_tmsi_table_d.s_tmsi, (guti + LTE_STMSI_OFFSET), sizeof(lte_s_tmsi_t)); // S-TMSI 由MME CODE和M-TMSI组成，是GUTI中的后5个字节
    action_tmsi |= S_TMSIT_UPDATE_S_TMSI;
    memcpy(&s_tmsi_table_d.imsi, &s1_mme_cell.imsi, sizeof(lte_imsi_t));
    action_tmsi |= S_TMSIT_UPDATE_IMSI;

    // create S-TMSI table
    LTE_DEBUG_PRINTF("Create S-TMSI table!\n");
    PRINTF_S_TMSI( s_tmsi_table_d.s_tmsi );
    PRINTF_IMSI( s_tmsi_table_d.imsi );
    hydra_stat_inc(stat_pkts_create_stmsi_table);

    rv = create_update_table_by_hash(TABLE_S_TIMSI, CREATE_TABLE, action_tmsi, (void*)&s_tmsi_table_d, sizeof(lte_table_s_tmsi_t), &s_tmsi_index);
    if(MP_OK != rv)
    {
        LTE_DEBUG_PRINTF("Create S-TMSI table failed!\n");
        hydra_stat_inc(stat_pkts_stmsi_table_failed);
       return rv;
    }

    return MP_E_NONE;    
}

/* 获取identity response 消息，检查imsi信息 */
mp_error_t lte_s1ap_uplinkNASTransport(parse_s1ap_t *s1ap)
{
    CVMX_MP_POINT_CHECK(s1ap, M_S1, LV_ERROR);

    mp_code_t rv = MP_OK;
    // NAS EPS Mobility Management Message Type: 
    // 1. Identity response (0x56)
    //    parse imsi from the packet, compare with the value in S1-MME table
    // 2. Other
    //    not support


    parse_nas_t nas = s1ap->nas;
    if( TRUE == nas.ciphered_flag )
    {
        // Do not support ciphered upLinkNASTransport Message yet
        return MP_E_NONE;
    }

    if (EMM_MSG_IDENTIFY_RESPONSE == nas.EMM_message_type)
    {
        // identity_response message would take imsi information

        LTE_DEBUG_PRINTF("Searching S1-MME table for imsi!\n");
        uint8_t cell_len = 0;
        hash_key_t key_s1_mme={};
        lte_table_s1_mme_enodeb_t   s1_mme_table_d  = {};
        lte_table_s1_mme_enodeb_t   s1_mme_cell     = {};
        uint64_t action_s1_mme = 0;

        s1_mme_table_d.enode_ip            = s1ap->enode_ip;
        action_s1_mme |= S1_MMET_UPDATE_ENODE_IP;
        s1_mme_table_d.enode_ue_s1ap_id    = s1ap->enode_ue_s1ap_id;
        action_s1_mme |= S1_MMET_UPDATE_ENODE_UE_ID;
        s1_mme_table_d.mme_ip              = s1ap->mme_ip;
        action_s1_mme |= S1_MMET_UPDATE_MME_IP;
        s1_mme_table_d.mme_ue_s1ap_id      = s1ap->mme_ue_s1ap_id;
        action_s1_mme |= S1_MMET_UPDATE_MME_UE_ID;
        memcpy(&s1_mme_table_d.tai, s1ap->tai, sizeof(lte_tai_t));
        action_s1_mme |= S1_MMET_UPDATE_TAI;

        
        if( TYPE_IMSI == nas.type_of_identity )
        {
            memcpy(s1_mme_table_d.imsi, nas.init_identify.imsi, sizeof(lte_imsi_t));
            action_s1_mme |= S1_MMET_UPDATE_IMSI;
            PRINTF_IMSI(s1_mme_table_d.imsi);
            hydra_stat_inc(stat_relate_identity_response_imsi);
        }
        else
        {
            LTE_DEBUG_PRINTF("The Identity_response Message has no imsi !\n");
            return MP_E_INTERNAL;
        }

        update_s1_mme_hash_key(s1ap->enode_ip, s1ap->enode_ue_s1ap_id, &(key_s1_mme));

        LTE_DEBUG_PRINTF("Search S1-MME table for imsi! \n");

        rv = hash_cell_get_by_hash(LTE_GET_TABLE_PTR(TABLE_S1_ENODEB_MME), &key_s1_mme, 
                                   &s1_mme_cell, sizeof(s1_mme_cell));
        if(MP_CELL_FOUND == rv)
        {
            //Found the related imsi from S1-MME table
            if( cell_len != sizeof(lte_table_s1_mme_enodeb_t) )
            {
                LTE_DEBUG_PRINTF("The table size searched is wrong! rv = %d\n", rv);
                return MP_E_INTERNAL;
            }

            // Compare if S1-MME has the same imsi as identity_response message take 
            rv = memcmp((void*)s1_mme_cell.imsi, (void*)nas.init_identify.imsi, sizeof(lte_imsi_t));
            if(0 == rv)   
            {
                /* imsi are the same */
                LTE_DEBUG_PRINTF("The imsi saved is the same as which Identity_response message take !\n");
                return MP_E_NONE;
            }
            else
            {
                LTE_DEBUG_PRINTF("The imsi saved is not same as which Identity_response message take! Create new imsi table and delete old one\n");
                PRINTF_IMSI(s1_mme_cell.imsi);
                PRINTF_IMSI(nas.init_identify.imsi);

                /* count a statistic and delete the old imsi info , create new imsi table */
                hydra_stat_inc(stat_pkts_s1ap_uplinkNASTransport_update_imsi);

                // delete old imsi related tables
                rv = lte_aging_clear_relate_by_imsi(s1_mme_cell.imsi);
                if( MP_OK != rv )
                {
                    LTE_DEBUG_PRINTF("Clear relate imsi table failed! rv = %d\n", rv);
                    return rv;
                }
                // calling diamter API to delete s6a related tables.
                rv = del_s6a_node_by_imsi(s1_mme_cell.imsi, sizeof(s1_mme_cell.imsi));
                if( MP_OK != rv )
                {
                    LTE_DEBUG_PRINTF("Clear relate s6a table failed! rv = %d\n", rv);
                    return rv;
                }
            }
        }

        //update imsi of S1-MME and create imsi table
        LTE_DEBUG_PRINTF("Update S1-MME table about imsi!\n");
        // step 1.update S1-MME table
        hash_table_index_t s1_mme_index             = {};

        s1_mme_table_d.aging = (uint16_t)g_aging_timer_max;
        action_s1_mme |= S1_MMET_UPDATE_AGING;
        
        // The old S1-MME table has already been deleted by imsi related tabels. so create a new one by s1_mme_cell value.
        rv = create_update_table_by_hash(TABLE_S1_ENODEB_MME, CREATE_TABLE, action_s1_mme, 
        (void*)&s1_mme_table_d, sizeof(lte_table_s1_mme_enodeb_t), &s1_mme_index);
        if(MP_OK != rv)
        {
            LTE_DEBUG_PRINTF("Update S1-MME table imsi: <Failed>\n");
            return rv;
        }

        /* step 2. Imsi */
        lte_table_imsi_t imsi_search_d      = {};
        hash_table_index_t imsi_index       = {};
        uint64_t action_imsi = 0;
        
        // set s1_mme index to imsi table
        SET_TABLE_INDEX( (&(imsi_search_d.pos_s1_mme)), s1_mme_index.index, s1_mme_index.node);
        action_imsi |= IMSIT_UPDATE_POS_S1_MME;
        
        UPDATE_IMSIT_FIELD(IMSI, action_imsi, imsi_search_d.imsi, s1_mme_table_d.imsi, sizeof(lte_imsi_t));
            
        UPDATE_IMSIT_FIELD(TAI, action_imsi, imsi_search_d.tai, s1ap->tai, sizeof(lte_tai_t));

        imsi_search_d.aging = (uint16_t)g_aging_timer_max;
        action_imsi |= IMSIT_UPDATE_AGING;
        
        // create IMSI table
        rv = create_update_table_by_hash(TABLE_IMSI, CREATE_TABLE, action_imsi, 
        (void*)&imsi_search_d, sizeof(lte_table_imsi_t), &imsi_index);
        if(MP_OK != rv)
        {
            LTE_DEBUG_PRINTF("Create Imsi table <Failed>\n");
            hydra_stat_inc(stat_pkts_imsi_table_failed);
            return rv;
        }

    }

    return MP_E_NONE;    
}

/* 查询S1-MME表项，更新KASME以及算法类型到imsi表项 */
mp_error_t lte_s1ap_downlinkNASTransport(parse_s1ap_t *s1ap)
{
    CVMX_MP_POINT_CHECK(s1ap, M_S1, LV_ERROR);

    // TODO
    // NAS EPS Mobility Management Message Type :
    // 1. Security mode command (0x5d)
    //    parse Type of ciphering algorithm: EPS encryption algorithm 128-EEA2 (2) from the packet and fill it into imsi table
    // 2. Authentication request (0x52)
    //    parse RAND value, and search S6-a table by RAND for KASME. Fill KASME into imsi table
    
    mp_code_t rv = MP_E_NONE;
    bool update_kasme = false;

    hash_key_t key_s1_mme                   = {};
    hash_key_t key_imsi                     = {};
    lte_table_s1_mme_enodeb_t s1_mme_table_d   = {};
    lte_table_s1_mme_enodeb_t   s1_mme_cell = {};

    uint64_t action_s1_mme = 0;
    hash_table_index_t s1_mme_index             = {};
    // search s1_mme table for imsi 

    s1_mme_table_d.enode_ip            = s1ap->enode_ip;
    s1_mme_table_d.enode_ue_s1ap_id    = s1ap->enode_ue_s1ap_id;
    s1_mme_table_d.guti_flag           = FALSE;
    parse_nas_t nas                    = s1ap->nas;


    LTE_DEBUG_PRINTF("ip=%d,id=%d\n" , s1_mme_table_d.enode_ip , s1_mme_table_d.enode_ue_s1ap_id );
    
    update_s1_mme_hash_key(s1_mme_table_d.enode_ip, s1_mme_table_d.enode_ue_s1ap_id, &key_s1_mme);
    LTE_DEBUG_PRINTF("key=%lx\n" , key_s1_mme.data[0]);
    LTE_DEBUG_PRINTF("EMM_message_type=%x\n" , nas.EMM_message_type);

    if (EMM_SECURITE_COMMAND == nas.EMM_message_type)
    {
        hydra_stat_inc(stat_relate_security_command);
        //Security mode command, parse type of ciphering algorithm
        s1_mme_table_d.cipher_alg_type = nas.cipher_alg_type;
        action_s1_mme |= S1_MMET_UPDATE_ALG_TYPE;
        LTE_DEBUG_PRINTF("Update cipher Algorithm type of S1-MME to %d!\n" , nas.cipher_alg_type);
        hydra_stat_inc(stat_pkts_s1ap_alg_type_set);

        // update the Ciphering Algorithm type into S1-MME table
        rv = create_update_table_by_hash(TABLE_S1_ENODEB_MME, UPDATE_TABLE, action_s1_mme, 
        (void*)&s1_mme_table_d, sizeof(lte_table_s1_mme_enodeb_t), &s1_mme_index);
        if (MP_OK != rv)
        {
            LTE_DEBUG_PRINTF("Update S1-MME table cipher alg type failed! \n");
            return rv;
        }
    }
    else if (EMM_MSG_AUTH_REQUEST == nas.EMM_message_type)
    {
        hydra_stat_inc(stat_relate_auth_request);
        //Authentication request, parse rand and fill into s1_mme table
        memcpy(&(s1_mme_table_d.rand), &nas.rand, sizeof(lte_rand_t));
        action_s1_mme |= S1_MMET_UPDATE_RAND;
        // update rand into S1-MME table at the same time search imsi info from s1_mme
        rv = create_update_table_by_hash(TABLE_S1_ENODEB_MME, UPDATE_TABLE, action_s1_mme,
        (void*)&s1_mme_table_d, sizeof(lte_table_s1_mme_enodeb_t), &s1_mme_index);
        if (MP_OK != rv)
        {
            LTE_DEBUG_PRINTF("Update S1-MME table rand failed! \n");
            return rv;
        }

        // Search  S1-MME table for imsi info 
        // Search S1-MME table and imsi table to check if kasme has been update successfully
        LTE_DEBUG_PRINTF("Search S1-MME table for imsi! \n");
        rv = hash_cell_get_by_hash(LTE_GET_TABLE_PTR(TABLE_S1_ENODEB_MME), &key_s1_mme, 
                                   (void *)&s1_mme_cell, sizeof(s1_mme_cell));
        if(MP_CELL_FOUND != rv)
        {
            LTE_DEBUG_PRINTF("Didn't find S1-MME table! rv = %d\n", rv);
            return rv;
        }       
        PRINTF_IMSI(s1_mme_cell.imsi);
        
        update_kasme = true;
    }
    else
    {
        //we do not need to parse other packet yet
        LTE_DEBUG_PRINTF("Didn't find the match EMM message, EMM_message_type=%x\n" , nas.EMM_message_type);
        return MP_E_NONE;
    }

    if ( true == update_kasme )
    {
        
        /* get kasme */
        lte_kasme_t kasme = {};
        uint32_t len = 0;
        imsi_rand_info_t indata;
        memset(&indata, 0x00, sizeof(imsi_rand_info_t));

        memcpy(indata.imsi, s1_mme_cell.imsi, sizeof(lte_imsi_t));
        memcpy(indata.rand, s1_mme_cell.rand, sizeof(lte_rand_t));
        PRINTF_IMSI(indata.imsi);
        PRINTF_RAND(indata.rand);

        // get kasme by imsi and rand from S6A table
        rv = (mp_error_t)get_kasme_by_imsi((const imsi_rand_info_t *)&indata, &kasme, &len);
        if(MP_OK != rv)
        {
            LTE_DEBUG_PRINTF("get_kasme_by_imsi failed <rv=%d>!\n", rv);
            hydra_stat_inc(stat_pkts_s1ap_get_kasme_failed);
            return rv;
        }
        if (( sizeof(lte_kasme_t) != len ) || ( NULL == kasme ))
        {
            return MP_E_INTERNAL;
        }
        update_imsi_hash_key(s1_mme_cell.imsi, &(key_imsi));

        lte_table_imsi_t imsi_cell = {};
        hash_table_index_t imsi_index       = {};
        uint64_t action_imsi = 0;

        memcpy(imsi_cell.imsi, s1_mme_cell.imsi, sizeof(lte_imsi_t));
        memcpy(imsi_cell.kasme, kasme, sizeof(lte_kasme_t));
        action_imsi |= IMSIT_UPDATE_KASME;

        LTE_DEBUG_PRINTF("lte_s1ap_downlinkNASTransport Will update kasme!\n");
        PRINTF_IMSI(imsi_cell.imsi);
        PRINTF_KASME(imsi_cell.kasme);
        
        imsi_cell.aging = (uint16_t)g_aging_timer_max;
        action_imsi |= IMSIT_UPDATE_AGING;

        /* update kasme into imsi table */
        rv = create_update_table_by_hash(TABLE_IMSI, CREATE_TABLE, action_imsi, 
                                         (void*)&imsi_cell, sizeof(lte_table_imsi_t), &imsi_index);
        if (MP_OK != rv)
        {
            LTE_DEBUG_PRINTF("Update IMSI table kasme failed! \n");
            hydra_stat_inc(stat_pkts_s1ap_update_imsi_kasme_failed);
            return rv;
        }
        hydra_stat_inc(stat_pkts_s1ap_update_imsi_kasme_success);
    }

    return MP_E_NONE;    
}

/* 会话结束，删除相关表项，触发老化操作 */
mp_error_t lte_s1ap_UEContextRelease(parse_s1ap_t *s1ap)
{
    CVMX_MP_POINT_CHECK(s1ap, M_S1, LV_ERROR);

    mp_code_t rv = MP_E_NONE;

    // S1AP-PDU: has two type initiatingMessage(0) and successfulOutcome (1)
    // we only trigger the delete operation when receive successfulOutcome (1) message

    // search s1_mme table for imsi 
    // del related tables by imsi
    hash_key_t key_s1_mme={};
    lte_table_s1_mme_enodeb_t   s1_mme_cell     = {};

    hydra_stat_inc(stat_relate_UeContxtRelease);//只统计UEContextReleaseComplete
    update_s1_mme_hash_key(s1ap->enode_ip, s1ap->enode_ue_s1ap_id, &(key_s1_mme));
    LTE_DEBUG_PRINTF("key=%lx\n" , key_s1_mme.data[0]);

    LTE_DEBUG_PRINTF("Search S1-MME table for imsi! \n");
    rv = hash_cell_get_by_hash(LTE_GET_TABLE_PTR(TABLE_S1_ENODEB_MME), &key_s1_mme, 
                               &s1_mme_cell, sizeof(s1_mme_cell));
    if(MP_CELL_FOUND != rv)
    {
        LTE_DEBUG_PRINTF("Didn't find S1-MME table! rv = %d\n", rv);
        return rv;
    }    
    
    PRINTF_IMSI(s1_mme_cell.imsi);
    LTE_DEBUG_PRINTF("Start to delete table according by imsi !\n");

    // delete old imsi related tables
    rv = lte_aging_clear_relate_by_imsi(s1_mme_cell.imsi);
    if( MP_OK != rv )
    {
        LTE_DEBUG_PRINTF("Clear relate imsi table failed! rv = %d\n", rv);
        return rv;
    }
    // calling diamter API to delete s6a related tables.
    rv = del_s6a_node_by_imsi(s1_mme_cell.imsi, sizeof(s1_mme_cell.imsi));
    if( MP_OK != rv )
    {
        LTE_DEBUG_PRINTF("Clear relate s6a table failed! rv = %d\n", rv);
        return rv;
    }

    return MP_E_NONE;
}


static mp_error_t lte_s1ap_ERABSetupRequest(parse_s1ap_t * s1ap)
{
    CVMX_MP_POINT_CHECK(s1ap, M_S1, LV_ERROR); 

    mp_code_t rv = MP_OK;
    
    // query s1_mme table entry and rewrite imsi field
    hash_key_t            key_s1_mme      = {};
    hash_table_index_t    index_s1_mme    = {};
    lte_table_s1_mme_t    s1_mme_cell     = {};
    lte_table_s1_mme_t    s1_mme_search_d = {};

    if (cvmx_unlikely( 0 == s1ap->rab_info.tip
                    || 0 == s1ap->rab_info.teid))
    {
        hydra_stat_inc(stat_pkts_info_incompelte_erab_rst);
        return MP_OK;
    }

    update_s1_mme_hash_key(s1ap->enode_ip, s1ap->enode_ue_s1ap_id, &key_s1_mme);

    s1_mme_search_d.enode_ip = s1ap->enode_ip;
    s1_mme_search_d.enode_ue_s1ap_id = s1ap->enode_ue_s1ap_id;

    rv = hash_cell_get_by_hash(LTE_GET_TABLE_PTR(TABLE_S1_MME), &key_s1_mme, 
                               &s1_mme_cell, sizeof(s1_mme_cell));
    if(MP_CELL_FOUND != rv)
    {
        LTE_DEBUG_PRINTF("The S1_MME table search failed ! rv = %d\n", rv);
        return rv;
    }    
    
    // re-write imsi into s1-mme table entry, if imsi field of s1-mme table is valid, then return 
    if (s1_mme_cell.mask & S1_MMET_IMSI_VALID)
    {
        return MP_OK;
    }

    // query s1u-sgw table entry with fteid located in s1ap
    hash_key_t key_s1u_sgw = {};
    hash_table_index_t index_s1u_sgw = {};
    lte_table_s1u_sgw_t   s1u_sgw_cell     = {};
    lte_table_s1u_sgw_t s1u_sgw_search_d = {};

    update_fteid_hash_key(s1ap->rab_info.tip, s1ap->rab_info.teid, &key_s1u_sgw);

    s1u_sgw_search_d.fteid.ip = s1ap->rab_info.tip;
    s1u_sgw_search_d.fteid.teid = s1ap->rab_info.teid;

    rv = hash_cell_get_by_hash(LTE_GET_TABLE_PTR(TABLE_S1U_SGW), &key_s1u_sgw, 
                               &s1u_sgw_cell, sizeof(s1u_sgw_cell));
    if(MP_CELL_FOUND != rv)
    {
        LTE_DEBUG_PRINTF("The S1U_SGW table search failed ! rv = %d\n", rv);
        return rv;
    }    
    
    
    // query imsi table entry with imsi value located in s1u-sgw
    hash_key_t key_imsi = {};
    hash_table_index_t index_imsi = {};
    lte_table_imsi_t   imsi_cell     = {};
    lte_table_imsi_t imsi_search_d = {};

    update_imsi_hash_key(s1u_sgw_cell.imsi, &key_imsi);

    rv = hash_cell_get_by_hash(LTE_GET_TABLE_PTR(TABLE_IMSI), &key_imsi, 
                               &imsi_cell, sizeof(imsi_cell));
    if(MP_CELL_FOUND != rv)
    {
        LTE_DEBUG_PRINTF("The IMSI table search failed ! rv = %d\n", rv);
        return rv;
    }    
    
    //rewrite s1-mme imsi
    uint64_t action_s1_mme = 0;
    
    memcpy(s1_mme_search_d.imsi, imsi_cell.imsi, sizeof(lte_imsi_t));
    action_s1_mme |= S1_MMET_UPDATE_IMSI;
    
    rv = create_update_table_by_hash(TABLE_S1_MME, UPDATE_TABLE, action_s1_mme, 
                                     (void*)&s1_mme_search_d, sizeof(lte_table_s1_mme_t), &index_s1_mme);
    if (MP_OK != rv)
    {
        return rv;
    }

    // update imsi table entry field: TAI, s1-mme index
    uint64_t action_imsi = 0;
    
    memcpy(imsi_search_d.imsi, imsi_cell.imsi, sizeof(lte_imsi_t));
    
    if (!(imsi_cell.mask & IMSIT_POS_S1_MME_VALID))
    {
        CHECK_UPDATE_IMSI_OF_TAI(imsi_cell, imsi_search_d, s1_mme_cell.tai, action_imsi);

        SET_TABLE_INDEX((&(imsi_search_d.pos_s1_mme)), index_s1_mme.index, index_s1_mme.node);
        action_imsi |= IMSIT_UPDATE_POS_S1_MME;
        
        imsi_search_d.aging = (uint16_t)g_aging_timer_max;
        action_imsi |= IMSIT_UPDATE_AGING;
        
        rv = create_update_table_by_hash(TABLE_IMSI, UPDATE_TABLE, action_imsi, (void*)&imsi_search_d,
                                         sizeof(lte_table_imsi_t), &index_imsi);
        if(MP_OK != rv)
        {
            return rv;
        }

        // update s1u_sgw TAI field
        if (!(s1u_sgw_cell.mask & S1UT_TAI_VALID))
        {
            uint64_t action_s1_sgw = 0;

            memcpy(&s1u_sgw_search_d.tai, s1_mme_cell.tai, sizeof(lte_tai_t));
            action_s1_sgw |= S1UT_UPDATE_TAI;

            rv = create_update_table_by_hash(TABLE_S1U_SGW, UPDATE_TABLE, action_s1_sgw, (void*)&s1u_sgw_search_d,
                                             sizeof(lte_table_s1u_sgw_t), &index_s1u_sgw);
            if(MP_OK != rv)
            {
                return rv;
            }
        }


        // update s1u_eNB TAI field
        uint64_t action_s1u_eNB = 0;
        lte_table_s1u_t s1u_eNB_cell = {};
        hash_table_index_t index_s1u_eNB = {};
        
        rv = hash_cell_get_by_index(LTE_GET_TABLE_PTR(TABLE_S1U_ENB), &imsi_cell.pos_s1u_eNB[BEAR_DEFAULT], 
                                                      (void *)&s1u_eNB_cell, sizeof(lte_table_s1u_eNB_t));        
        if (MP_NOT_FOUND == rv)
        {
            return rv;
        }        
        
        if (!(s1u_eNB_cell.mask & S1UT_TAI_VALID))
        {
        
            memcpy(&s1u_eNB_cell.tai, s1_mme_cell.tai, sizeof(lte_tai_t));
            action_s1u_eNB |= S1UT_UPDATE_TAI;
        
            rv = create_update_table_by_hash(TABLE_S1U_ENB, UPDATE_TABLE, action_s1u_eNB, (void*)&s1u_eNB_cell,
                                             sizeof(lte_table_s1u_eNB_t), &index_s1u_eNB);
            if(MP_OK != rv)
            {
                return rv;
            }
        }
        
    }

    return  MP_E_NONE;   
}

static mp_error_t lte_s1ap_ERABSetupResponse(parse_s1ap_t * s1ap)
{
    CVMX_MP_POINT_CHECK(s1ap, M_S1, LV_ERROR); 

    mp_code_t rv = MP_OK;
    
    // query s1_mme table entry with s1ap->enode_ip and s1ap->enode_ue_s1ap_id
    hash_key_t            key_s1_mme  = {};
    lte_table_s1_mme_t    s1_mme_cell = {};

    if (cvmx_unlikely( 0 == s1ap->rab_info.tip
                    || 0 == s1ap->rab_info.teid))
    {
        hydra_stat_inc(stat_pkts_info_incompelte_erab_rsp);
        return MP_OK;
    }

    update_s1_mme_hash_key(s1ap->enode_ip, s1ap->enode_ue_s1ap_id, &key_s1_mme);

    rv = hash_cell_get_by_hash(LTE_GET_TABLE_PTR(TABLE_S1_MME), &key_s1_mme, 
                               &s1_mme_cell, sizeof(s1_mme_cell));
    if(MP_CELL_FOUND != rv)
    {
        LTE_DEBUG_PRINTF("The S1_MME table search failed ! rv = %d\n", rv);
        return rv;
    }    
    
    // query imsi table entry with s1_mme->imsi
    hash_key_t key_imsi = {};
    lte_table_imsi_t   imsi_cell     = {};

    update_imsi_hash_key(s1_mme_cell.imsi, &key_imsi);

    rv = hash_cell_get_by_hash(LTE_GET_TABLE_PTR(TABLE_IMSI), &key_imsi, 
                               &imsi_cell, sizeof(imsi_cell));
    if(MP_CELL_FOUND != rv)
    {
        LTE_DEBUG_PRINTF("The IMSI table search failed ! rv = %d\n", rv);
        return rv;
    }
    

    if (imsi_cell.mask & IMSIT_POS_S1U_ENB_VALID)
    {
        return MP_OK;
    }

    // create s1u_eNB table entry
    uint64_t action_s1u_enodeb = 0;
    lte_table_s1u_t s1u_search_d = {};
    hash_table_index_t s1u_enodeb_index = {};

    s1u_search_d.fteid.ip   =  s1ap->rab_info.tip;
    s1u_search_d.fteid.teid =  s1ap->rab_info.teid;
    action_s1u_enodeb |=  S1UT_UPDATE_FTEID;

    s1u_search_d.ue_ip   =      imsi_cell.pdn.pdn_addr;
    action_s1u_enodeb |= S1UT_UPDATE_UE_IP;
    

    if (imsi_cell.mask & IMSIT_IMSI_VALID)
    {
        memcpy(s1u_search_d.imsi , imsi_cell.imsi, sizeof(lte_imsi_t));
        action_s1u_enodeb |= S1UT_UPDATE_IMSI;
    }
    
    if (imsi_cell.mask & IMSIT_IMEI_VALID)
    {
        memcpy(s1u_search_d.imei , imsi_cell.imei, sizeof(lte_imei_t));
        action_s1u_enodeb |= S1UT_UPDATE_IMEI;
    }
    
    if (imsi_cell.mask & IMSIT_MSISDN_VALID)
    {
        memcpy(s1u_search_d.msisdn , imsi_cell.msisdn, sizeof(lte_msisdn_t));
        action_s1u_enodeb |= S1UT_UPDATE_MSISDN;
    }
    
    if (imsi_cell.mask & IMSIT_GUTI_VALID)
    {
        memcpy(s1u_search_d.guti, imsi_cell.guti, sizeof(lte_guti_t));
        action_s1u_enodeb |= S1UT_UPDATE_GUTI;
    }
    
    if (imsi_cell.mask & IMSIT_IMSI_VALID)
    {
        memcpy(s1u_search_d.tai,  imsi_cell.tai,  sizeof(lte_tai_t));
        action_s1u_enodeb |= S1UT_UPDATE_TAI;
    }
    
    if (imsi_cell.mask & IMSIT_EX_FIELD_VALID)
    {
        s1u_search_d.ex_field.msisdn_len = imsi_cell.ex_field.msisdn_len;
        action_s1u_enodeb |= S1UT_UPDATE_EX_FIELD;
    }
    
#ifdef RELATE_AGING
    s1u_search_d.aging = (uint16_t)g_aging_timer_max;
    action_s1u_enodeb |= S1UT_UPDATE_AGING;
#endif
    
#ifdef STAT_TEST
    s1u_search_d.is_create_relate = 1;
    s1u_search_d.b0_relate_gtpu_num = 0;
    s1u_search_d.b1_relate_gtpu_num = 0;
    action_s1u_enodeb |= S1UT_UPDATE_CREATE_REALTE;
    action_s1u_enodeb |= S1UT_UPDATE_B0_NUM;
    action_s1u_enodeb |= S1UT_UPDATE_B1_NUM;
#endif

    rv = create_update_table_by_hash(TABLE_S1U, CREATE_TABLE, action_s1u_enodeb, 
                                     (void *)&s1u_search_d, sizeof(lte_table_s1u_t), &s1u_enodeb_index);
    if(MP_OK != rv)
    {
        hydra_stat_inc(stat_pkts_s1u_table_failed_3);
        return rv;
    } 

    // update s1u_eNB index into imsi table
    uint64_t action_imsi = 0;
    lte_table_imsi_t imsi_search_d = {};
    hash_table_index_t imsi_index = {};

    memcpy(imsi_search_d.imsi, imsi_cell.imsi, sizeof(lte_imsi_t));

    rv = lte_update_s1u_bearer(imsi_search_d.pos_s1u_eNB, s1u_enodeb_index.index, 
                               s1u_enodeb_index.node, s1ap->bear_id);
    if(MP_OK != rv)
    {
        return rv;
    }
    action_imsi |= IMSIT_UPDATE_POS_S1U_ENB;

    imsi_search_d.aging = (uint16_t)g_aging_timer_max;
    action_imsi |= IMSIT_UPDATE_AGING;
    
    rv = create_update_table_by_hash(TABLE_IMSI, UPDATE_TABLE, action_imsi, (void *)&imsi_search_d, 
                                     sizeof(lte_table_imsi_t), &imsi_index);
    if(MP_OK != rv)
    {
        LTE_DEBUG_PRINTF("Create Session request: update imsi table <Failed>\n");
        hydra_stat_inc(stat_pkts_imsi_table_failed);
        return rv;
    }
    
    return  MP_E_NONE;   
}

mp_error_t lte_s1ap_ERABSetup(parse_s1ap_t *s1ap)
{
    if (DOWN_LINK == s1ap->direction)
    {
        lte_s1ap_ERABSetupRequest(s1ap);
    }
    else if (UP_LINK == s1ap->direction)
    {
        lte_s1ap_ERABSetupResponse(s1ap);
    }

    return MP_E_INVALID_PACKET;
}

