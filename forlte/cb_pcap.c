#include "cb_pcap.h"


uint8_t mme_ip[4]   = {0};
uint8_t mme_teid[4] = {0};
int p_id = 1;
int have_found = 0;



#define IE_IMSI 12
/*这个功能暂时不许要了，用wireshark可以做到 */
cb_code_t gtpc_msg_check(uint8_t * pbuf, int slen, int msg, int vlan_vir)
{
    uint8_t str_imsi[32] = "460028891556126";
    uint8_t d_imsi[IE_IMSI] = {0x01,0x00,0x8,0x00};
    int pos = 0;
    str_to_proto(str_imsi, strlen(str_imsi), d_imsi+4);
    int l5_cur = L2_ALL_LEN + vlan_vir + L3_ALL_LEN + L4_ALL_LEN;
    //只要全部导出来就好了
    int sy = slen - l5_cur;//剩余长度
    if( msg == 32)
    {
        if( sy < IE_IMSI)
        {
            LOG_DEBUG("not lte gtpc, slen[%d] < 48\n", slen);
            return CB_E_FAIL;
        }
        if( CB_NOT_FOUND == KMPSearch(d_imsi, IE_IMSI,pbuf+l5_cur, sy,&pos) )
        {
            LOG_DEBUG("imsi cmp not same\n");
            return CB_E_FAIL;
        }
//        printf("the %d packet\n",p_id);
//        PRINTF_IMSI( (pbuf+L2_ALL_LEN + vlan_vir +
//                L3_ALL_LEN + L4_ALL_LEN+IMSI_OFFSET) );
//        if( 0 != memcmp(d_imsi, (pbuf+L2_ALL_LEN + vlan_vir +
//                L3_ALL_LEN + L4_ALL_LEN+IMSI_OFFSET), 8) )
//        {
//            LOG_DEBUG("imsi cmp not same\n");
//            return CB_E_FAIL;
//        }
//        memcpy(mme_teid, pbuf+0x89, 4);
//        memcpy(mme_ip, pbuf+0x85, 4);

    }
//    else if( msg == 33)
//    {
//        if( slen < 0x46)
//        {
//            printf("not lte gtpc, slen[%d] < 48\n", slen);
//            return CB_FAIL;
//        }
//        IMSI_CMP_NOT_SAME(d_imsi, pbuf+0x3e)
//        {
//            printf("imsi cmp not same\n");
//            return CB_FAIL;
//        }
//    }
    else
    {
        LOG_DEBUG("not lte gtpc, msgtype[%d] error\n", msg );
        return CB_E_FAIL;
    }
    return CB_OK;
}

cb_code_t parse_gtpc(uint8_t * pbuf, int slen)
{
    uint8_t ctmp = 0;
    uint16_t sport = 0;
    uint16_t dport = 0;

    int vlan_vir = 0;
    if(slen < 48)
    {
        LOG_DEBUG("not lte gtpc, slen[%d] < 48\n", slen);
        return CB_E_FAIL;
    }

    //判断eth_type
    if( (*(pbuf + ETH_TYPE_OFFSET)) == ETH_TYPE_VLAN )
    {
        vlan_vir = VLAN_PRI_LEN;
    }

    //判断udp
    ctmp = *(pbuf + L2_ALL_LEN + vlan_vir + PROTOCAL_OFFSET);
    if( ctmp != PROTOCOL_UDP )
    {
        LOG_DEBUG("not udpn");
        return CB_E_FAIL;
    }

    //判断端口
    memcpy(&sport, pbuf+ L2_ALL_LEN + vlan_vir + L3_ALL_LEN, 2);
    memcpy(&dport, pbuf+ L2_ALL_LEN + vlan_vir + L3_ALL_LEN + 2, 2);
    if( sport == GTPC_PORT || dport == GTPC_PORT )
    {
        LOG_DEBUG("not gtpc\n");
        return CB_E_FAIL;
    }

    ctmp = *(pbuf + L2_ALL_LEN + vlan_vir + L3_ALL_LEN + L4_ALL_LEN + MSG_TYPE_OFFSET);
    //if( CB_OK != gtpc_msg_check(pbuf, slen, ctmp, vlan_vir) )
    if( ctmp < 32 || ctmp > 37 )
    {
        return CB_E_FAIL;
    }



    return CB_OK;
}
cb_code_t parse_s1ap(uint8_t * pbuf, int slen)
{
    uint8_t ctmp = 0;
    uint16_t sport = 0;
    uint16_t dport = 0;
    uint32_t ppi = 0;

    int vlan_vir = 0;
    if(slen <= 0x42 || slen == 110)
    {
        LOG_DEBUG("not lte s1ap, slen[%d] < 0x42\n", slen);
        return CB_E_FAIL;
    }

    //判断eth_type
    if( (*(pbuf + ETH_TYPE_OFFSET)) == ETH_TYPE_VLAN )
    {
        vlan_vir = VLAN_PRI_LEN;
    }

    //判断sctp
    ctmp = *(pbuf + L2_ALL_LEN + vlan_vir + PROTOCAL_OFFSET);
    if( ctmp != PROTOCOL_SCTP )
    {
        LOG_DEBUG("not sctp");
        return CB_E_FAIL;
    }

    //判断端口
    memcpy(&sport, pbuf+ L2_ALL_LEN + vlan_vir + L3_ALL_LEN, 2);
    memcpy(&dport, pbuf+ L2_ALL_LEN + vlan_vir + L3_ALL_LEN + 2, 2);
    if( !(sport == S1AP_PORT || dport == S1AP_PORT) )
    {
        LOG_DEBUG("not S1AP\n");
        return CB_E_FAIL;
    }


    int chunk_start = L2_ALL_LEN + vlan_vir + L3_ALL_LEN + L4_SCTP_ALL_LEN;
    int chunk_num = 1;
    while(slen > chunk_start + CHUNK_SIZE*chunk_num)
    {
        if(CHUNK_TYPE_DATA ==  *(pbuf + chunk_start + CHUNK_SIZE*(chunk_num-1)) )
        {
            memcpy(&ppi, pbuf + chunk_start + CHUNK_SIZE*(chunk_num-1) + PPI_OFFSET, 4);
            if(ppi == PPI_TYPE_S1AP)
            {
                LOG_DEBUG("find s1ap ok. \n");
                return CB_OK;
            }
        }
        chunk_num++;
    }

    return CB_E_FAIL;
}
void pcap_search(char *input_file)
{
    FILE *fp = NULL;
    FILE *fout = NULL;

    uint32_t data_acl_len = 0;
    uint8_t data[2048] = {0};

    uint8_t pcap_header[PCAP_HEADER_LEN] = {0};
    uint8_t pcap_data_header[DATA_HEADER_LEN] = {0};

    printf("Start   to open file [%s]\n", input_file);

    if(( fp = fopen( input_file, "r" ) ) == NULL )
    {
        printf("source pcap file cann't open!\n");
        return;
    }
    if(( fout = fopen( FILE_OUT_PATH, "wb" ) ) == NULL )
    {
        printf("dst pcap file cann't create!\n");
        return;
    }

    printf("Open file Success.\n\n");
    printf("Analyzing packet now, please wait....... \n");

    //写入头
    fread(pcap_header, PCAP_HEADER_LEN, 1, fp);
    fwrite(pcap_header, PCAP_HEADER_LEN, 1, fout);
    //fseek(fp, PCAP_HEADER_LEN, SEEK_SET);
    //fseek(fp, PCAP_HEADER_LEN, SEEK_CUR);


    long int tell_last = 0;
    long int tell_cur = 0;
    while( 1 )
    {
        LOG_DEBUG("the %d packet\n",p_id);
        LOG_DEBUG("------------------------------------\n");
        LOG_DEBUG("cur offset = 0x%x\n", ftell(fp));

        fread(pcap_data_header, DATA_HEADER_LEN, 1, fp);
        memcpy(&data_acl_len, pcap_data_header + ACL_LEN_OFFSET, 4);


        LOG_DEBUG("cur offset = 0x%x, data_acl_len = 0x%x\n", ftell(fp), data_acl_len);

        if( data_acl_len > 2048 )
        {
            LOG_DEBUG("too long data length [%d]\n", data_acl_len);
            return;
        }

        fread(data, data_acl_len, 1, fp);
        LOG_DEBUG("cur offset = 0x%x\n", ftell(fp));

        if( feof(fp) )
        {
            break;
        }
#define PARSE_S1AP
        //协议解析
#ifdef PARSE_GTPC
        if(data_acl_len > 250 || data_acl_len < 360)
        {
            if( CB_OK == parse_gtpc(data, data_acl_len) )
            {
                have_found++;
                fwrite(pcap_data_header, DATA_HEADER_LEN, 1, fout);
                fwrite(data, data_acl_len, 1, fout);
            }
        }
#endif
#ifdef PARSE_S1AP
        if( CB_OK == parse_s1ap(data, data_acl_len) )
        {
            have_found++;
            fwrite(pcap_data_header, DATA_HEADER_LEN, 1, fout);
            fwrite(data, data_acl_len, 1, fout);
        }
#endif
        p_id++;
        LOG_DEBUG("\n\n");
    }
    fclose( fout );
    fclose( fp );
    printf("%d packets have finded.",have_found);
    printf("Packet search  finished!\n");
}

void pcap_delete_crc4(char *input_file)
{
    FILE *fp = NULL;
    FILE *fout = NULL;

    uint32_t data_acl_len = 0;
    uint32_t modify_len = 0;
    uint8_t data[2048] = {0};

    uint8_t pcap_header[PCAP_HEADER_LEN] = {0};
    uint8_t pcap_data_header[DATA_HEADER_LEN] = {0};
    uint8_t pacap_data_head_modify[DATA_HEADER_LEN] = {0};

    printf("Start   to open file [%s]\n", input_file);

    if(( fp = fopen( input_file, "r" ) ) == NULL )
    {
        printf("source pcap file cann't open!\n");
        return;
    }
    if(( fout = fopen( FILE_OUT_PATH, "wb" ) ) == NULL )
    {
        printf("dst pcap file cann't create!\n");
        return;
    }

    printf("Open file Success.\n\n");
    printf("Analyzing packet now, please wait....... \n");

    //写入头
    fread(pcap_header, PCAP_HEADER_LEN, 1, fp);
    fwrite(pcap_header,PCAP_HEADER_LEN, 1, fout);
    //fseek(fp, PCAP_HEADER_LEN, SEEK_SET);
    //fseek(fp, PCAP_HEADER_LEN, SEEK_CUR);


    long int tell_last = 0;
    long int tell_cur = 0;
    while( 1 )
    {
        LOG_DEBUG("the %d packet\n",p_id);
        LOG_DEBUG("------------------------------------\n");
        LOG_DEBUG("cur offset = 0x%x\n", ftell(fp));

        fread(pcap_data_header, DATA_HEADER_LEN, 1, fp);
        memcpy(&data_acl_len, pcap_data_header + ACL_LEN_OFFSET, 4);
        modify_len = data_acl_len - 4;
        memcpy(pacap_data_head_modify, pcap_data_header, DATA_HEADER_LEN);
        memcpy(pacap_data_head_modify + ACL_LEN_OFFSET , &modify_len, 4);
//        memcpy(pacap_data_head_modify + ACL_LEN_OFFSET , &modify_len, 4);

        LOG_DEBUG("cur offset = 0x%x, data_acl_len = 0x%x\n", ftell(fp), data_acl_len);

        if( data_acl_len > 2048 )
        {
            LOG_DEBUG("too long data length [%d]\n", data_acl_len);
            return;
        }

        fread(data, data_acl_len, 1, fp);
        LOG_DEBUG("cur offset = 0x%x\n", ftell(fp));

        if( feof(fp) )
        {
            break;
        }

        fwrite(pacap_data_head_modify, DATA_HEADER_LEN, 1, fout);
        fwrite(data, data_acl_len-4, 1, fout);

        p_id++;
        have_found++;
        LOG_DEBUG("\n\n");
    }
    fclose( fout );
    fclose( fp );
    printf("%d packets have finded.",have_found);
    printf("Packet search  finished!\n");
}

