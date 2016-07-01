#include "packet_entry.h"
#include "packet_s1ap.h"
#include "packet_nas.h"
#include "nas.h"



typedef struct
{
    uint8_t resv0:1;
    uint8_t cipher_alg:3;
    uint8_t resv1:1;
    uint8_t inter_alg:3;
}nas_alg_hdr_t;

//#if S1AP 
mp_error_t semp_nas_parse(struct pbuf *pt, parse_nas_t *nas)
{
    nas_head_t *nas_hdr = NULL;
    emm_emi_t *emi = NULL;
    uint8_t   *emi_len = NULL;
    nas_alg_hdr_t *nas_secur = NULL;
    nas_innerhead_t *nas_innerhdr = NULL;
    uint8_t* ptr = NULL;
    struct pbuf pbuf;
    struct pbuf *p= &pbuf;
    mp_error_t rv = MP_E_NONE;
    nas_plain_t nas_pdu_buf;

    if((NULL == pt) || NULL == nas)
    {
        LOG_PRINT(M_PARSE, LV_ERROR, LOG_CONTENT_NULL_POINT);
        return MP_E_PARAM;
    }

    memcpy(p, pt ,sizeof(struct pbuf));
    
    CHECK_PBUF_LEN(p, sizeof(nas_head_t));
    
    PBUF_CUR_FORMAT(nas_head_t *, nas_hdr, p);

    LOG_PRINT(M_PARSE, LV_INFO, "Prase NAS: security=%d, EMM=%d.\n",
                         nas_hdr->securhdr, nas_hdr->emm_type);

    UPDATE_PBUF_OFFSET(p, sizeof(nas_head_t));

    /* The protected NAS message header is 6 octets long, and the NAS message header is at least 2 octets long. */
    /* If the length of the tvbuffer is less than 8 octets, we can safely conclude the message is not protected. */
    nas->submit_flag = ENABLE;  //默认都转给控制核
    switch(nas_hdr->securhdr)
    {
        case  NAS_NOT_PROTECT:
            UPDATE_PBUF_REVERSE_OFFSET(p ,sizeof(nas_head_t));
            break;

        case  NAS_CIPHER_PROTECT:
        case  NAS_CIPHER_WITH_NEW_EPS:
            nas->ciphered_flag  = ENABLE;
            nas->nas_cipher_ptr = p->ptr + PBUF_OFF_OFFSET(p, MESSGA_AND_SEQ_LEN);
            nas->nas_cipher_len = p->len - sizeof(nas_head_t) - MESSGA_AND_SEQ_LEN;

            PBUF_OFF_FORMAT(uint8_t *, ptr, p, PBUF_OFF_OFFSET(p, MESSGA_AND_SEQ_LEN));
            nas->sequence_no = *(ptr - 1);

            if(*ptr == 0x07)  //判断第二层头是不是加密的
            {
                //skip message_authcode sequence
                UPDATE_PBUF_OFFSET(p, MESSGA_AND_SEQ_LEN);
                nas->ciphered_flag  = DISABLE;
            }

            LOG_PRINT(M_PARSE, LV_INFO, "Prase NAS: cipher sequence_no=%02x length=%d cipher=%02x%02x.\n",
                    nas->sequence_no,nas->nas_cipher_len, ptr[0],  ptr[1]);

            if(ENABLE == nas->ciphered_flag) //加密的转到关联模块解密
            {
                return MP_E_NONE;
            }

            break;

       case   NAS_INTERAG_PROTECT:
       case   NAS_INTERAG_PROTECT_WITH_EPS:
             //skip message_authcode sequence  
             UPDATE_PBUF_OFFSET(p, MESSGA_AND_SEQ_LEN);
            break;

       case  NAS_SECURITY_SERVICE_REQUEST:
       default: 
            nas->submit_flag = DISABLE;
            nas->EMM_message_type = EMM_MSG_SERVICE_REQUEST;
            return MP_E_NONE;  
    }


    CHECK_PBUF_LEN(p, sizeof(nas_innerhead_t)); 
    PBUF_CUR_FORMAT(nas_innerhead_t *, nas_innerhdr, p); 
    UPDATE_PBUF_OFFSET(p, sizeof(nas_innerhead_t));

    LOG_PRINT(M_PARSE, LV_INFO, "Prase NAS: InnerHeader security=%d, EMM=%d, MsgCode=%d.\n",
                       nas_innerhdr->securhdr, nas_innerhdr->emm_type,  nas_innerhdr->emm_msg_code);
    nas->EMM_message_type = nas_innerhdr->emm_msg_code;
    switch(nas_innerhdr->emm_msg_code)
    {
        case  EMM_MSG_ATTACH_REQUEST:
        case  EMM_MSG_TAU_REQUEST:
            UPDATE_PBUF_OFFSET(p, sizeof(emm_msg_attach_request_t));

            //获取emi长度，并检查
            CHECK_PBUF_LEN(p, sizeof(uint8_t));
            PBUF_CUR_FORMAT(uint8_t *, emi_len, p);
            UPDATE_PBUF_OFFSET(p, sizeof(emm_emi_t));
            if( 0 == *emi_len )
            {
                return MP_E_EXCEED;
            }

            //获取emi头
            CHECK_PBUF_LEN(p, sizeof(emm_emi_t));
            PBUF_CUR_FORMAT(emm_emi_t *, emi, p);
            UPDATE_PBUF_OFFSET(p, sizeof(emm_emi_t));
            
            switch(emi->type_of_identity)
            {
                case TYPE_OLD_GUTI:
                    if( *emi_len < (sizeof(lte_guti_t) +  sizeof(emm_emi_t) ) )
                    {
                        return MP_E_EXCEED;
                    }
                    nas->type_of_identity = TYPE_OLD_GUTI;  
                    memcpy(nas->init_identify.guti, PBUF_VOID_CUR_PTR(p), sizeof(lte_guti_t));
                    if(EMM_MSG_ATTACH_REQUEST== nas_innerhdr->emm_msg_code)
                    {
                        hydra_stat_inc(stat_nas_attach_request_oldGuti);
                    }
                    else if(EMM_MSG_TAU_REQUEST== nas_innerhdr->emm_msg_code)
                    {
                        hydra_stat_inc(stat_nas_tau_request_oldGuti);
                    }
                    break;

                case TYPE_IMSI:
                     nas->type_of_identity =  TYPE_IMSI;
                     PBUF_CUR_FORMAT(uint8_t*, ptr, p);
                     if( *emi_len <= (LTE_IMSI_LEN + sizeof(emm_emi_t)) )
                     {    
                        nas->init_identify.imsi[0] = (emi->resv & 0xf) | ((ptr[0]&0xf)<<4);
                        nas->init_identify.imsi[1] = ((ptr[0]&0xf0)>>4)|((ptr[1]&0xf)<<4);
                        nas->init_identify.imsi[2] = ((ptr[1]&0xf0)>>4)|((ptr[2]&0xf)<<4);
                        nas->init_identify.imsi[3] = ((ptr[2]&0xf0)>>4)|((ptr[3]&0xf)<<4);
                        nas->init_identify.imsi[4] = ((ptr[3]&0xf0)>>4)|((ptr[4]&0xf)<<4);
                        nas->init_identify.imsi[5] = ((ptr[4]&0xf0)>>4)|((ptr[5]&0xf)<<4);
                        nas->init_identify.imsi[6] = ((ptr[5]&0xf0)>>4)|((ptr[6]&0xf)<<4);
                        nas->init_identify.imsi[7] = 0xf0|((ptr[6]&0xf0)>>4);
                        
                        PARSE_PRINTF_IMSI(ptr);
                        PARSE_PRINTF_IMSI(nas->init_identify.imsi);
                     }   
                     if(EMM_MSG_ATTACH_REQUEST== nas_innerhdr->emm_msg_code)
                     {
                        hydra_stat_inc(stat_nas_attach_request_imsi);
                     }
                     else if(EMM_MSG_TAU_REQUEST== nas_innerhdr->emm_msg_code)
                     {
                        hydra_stat_inc(stat_nas_tau_request_imsi);
                     }
                     break;

                 default: //FIXME compare The ID
                  LOG_PRINT(M_PARSE, LV_INFO, "Not support indetify.\n");
                  break;
            }
            break;

        case EMM_MSG_IDENTIFY_RESPONSE:
            //获取emi长度，并检查
            CHECK_PBUF_LEN(p, sizeof(uint8_t));
            PBUF_CUR_FORMAT(uint8_t *, emi_len, p);
            UPDATE_PBUF_OFFSET(p, sizeof(emm_emi_t));
            if( 0 == *emi_len )
            {
                return MP_E_EXCEED;
            }

            //获取emi头
            CHECK_PBUF_LEN(p, sizeof(emm_emi_t));
            PBUF_CUR_FORMAT(emm_emi_t *, emi, p);
            UPDATE_PBUF_OFFSET(p, sizeof(emm_emi_t));

            PBUF_CUR_FORMAT(uint8_t*, ptr, p);
            /*identity response 不一定携带的都是imsi*/
            if(( *emi_len <= (LTE_IMSI_LEN + sizeof(emm_emi_t)) )
                && ( TYPE_IMSI == emi->type_of_identity ) )
            {
                nas->type_of_identity = TYPE_IMSI;
                nas->init_identify.imsi[0] = (emi->resv & 0xf) | ((ptr[0]&0xf)<<4);
                nas->init_identify.imsi[1] = ((ptr[0]&0xf0)>>4)|((ptr[1]&0xf)<<4);
                nas->init_identify.imsi[2] = ((ptr[1]&0xf0)>>4)|((ptr[2]&0xf)<<4);
                nas->init_identify.imsi[3] = ((ptr[2]&0xf0)>>4)|((ptr[3]&0xf)<<4);
                nas->init_identify.imsi[4] = ((ptr[3]&0xf0)>>4)|((ptr[4]&0xf)<<4);
                nas->init_identify.imsi[5] = ((ptr[4]&0xf0)>>4)|((ptr[5]&0xf)<<4);
                nas->init_identify.imsi[6] = ((ptr[5]&0xf0)>>4)|((ptr[6]&0xf)<<4);
                nas->init_identify.imsi[7] = 0xf0|((ptr[6]&0xf0)>>4);

                PARSE_PRINTF_IMSI(ptr);
                PARSE_PRINTF_IMSI(nas->init_identify.imsi);
                hydra_stat_inc(stat_nas_identity_response_imsi);
            }
            else
            {
                nas->submit_flag = DISABLE;
            }
            break;

        case EMM_MSG_AUTH_REQUEST:
            PBUF_CUR_FORMAT(uint8_t*, ptr, p);
            memcpy(nas->rand, ptr+1, sizeof(lte_rand_t));
            LOG_PRINT(M_PARSE, LV_INFO, "Prase NAS: Rand=%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x.\n",
                            nas->rand[0],nas->rand[1],nas->rand[2],nas->rand[3],
                            nas->rand[4],nas->rand[5],nas->rand[6],nas->rand[7],
                            nas->rand[8],nas->rand[9],nas->rand[10],nas->rand[11],
                            nas->rand[12],nas->rand[13],nas->rand[14],nas->rand[15]);
            hydra_stat_inc(stat_nas_authentication_request);
            break;

        case EMM_SECURITE_COMMAND:
            PBUF_CUR_FORMAT(nas_alg_hdr_t*, nas_secur, p);
            nas->cipher_alg_type = nas_secur->cipher_alg;
            LOG_PRINT(M_PARSE, LV_INFO, "Prase NAS: Cipher Alog is %d.\n", nas->cipher_alg_type);
            hydra_stat_inc(stat_nas_security_command);
            break;

        case EMM_MSG_TAU_ACCEPT:            
        case EMM_MSG_ATTACH_ACCEPT:
            nas_pdu_buf.data = nas->nas_cipher_ptr;
            nas_pdu_buf.len = nas->nas_cipher_len;
            rv = nas_pdu_parse_guti(&nas_pdu_buf, nas->guti);
            if( MP_E_NONE != rv )
            {
                LOG_PRINT(M_PARSE, LV_INFO, "Prase NAS:Parse GUTI failed ! rv = %d.\n", rv);
                hydra_stat_inc(stat_parse_guti_failed);
                return rv;
            }
            hydra_stat_inc(stat_nas_attach_accept);
            break;

        default:
            nas->submit_flag = DISABLE;
            LOG_PRINT(M_PARSE, LV_INFO, "Prase NAS: Emm unkown support Msg.\n");
            break;
    }
    
    return MP_E_NONE;                                     
}
//#endif 

