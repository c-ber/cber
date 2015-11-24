#include "cb_pcap.h"


uint8_t mme_ip[4]   = {0};
uint8_t mme_teid[4] = {0};
int p_id = 1;




/*这个功能暂时不许要了，用wireshark可以做到 */
cb_code_t gtpc_msg_check(uint8_t * pbuf, int slen, int msg)
{
    uint8_t str_imsi[32] = "440541907120008";
    uint8_t d_imsi[8] = {0};

    str_to_proto(str_imsi, strlen(str_imsi), d_imsi);

    //只要全部导出来就好了
    if( msg == 32)
    {
        if( slen < 0x46)
        {
            LOG_DEBUG("not lte gtpc, slen[%d] < 48\n", slen);
            return CB_E_FAIL;
        }
        printf("the %d packet\n",p_id);
        PRINTF_IMSI( (pbuf+0x3e) );
//        if( 0 != memcmp(d_imsi, pbuf+0x3e, 8) )
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
    if( sport == GTPC_PORT || dport == GTPC_PORT)
    {
        LOG_DEBUG("not UDP\n");
        return CB_E_FAIL;
    }

    ctmp = *(pbuf + L2_ALL_LEN + vlan_vir + L3_ALL_LEN + L4_ALL_LEN + MSG_TYPE_OFFSET);
    //if( CB_OK != gtpc_msg_check(pbuf, slen, ctmp) )
    if( ctmp < 32 || ctmp > 35 )
    {
        return CB_E_FAIL;
    }



    return CB_OK;
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

    printf("Success to open file [%s]\n\n", FILE_PATH);
    printf("Being analyzed, please wait....... \n");

    //写入头
    fread(pcap_header, PCAP_HEADER_LEN, 1, fp);
    fwrite(pcap_header, PCAP_HEADER_LEN, 1, fout);
    //fseek(fp, PCAP_HEADER_LEN, SEEK_SET);
    //fseek(fp, PCAP_HEADER_LEN, SEEK_CUR);


    int p_id = 1;
    printf("\n\n");
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

        //协议解析
        if(data_acl_len > 250 || data_acl_len < 360)
        {
            if( CB_OK == parse_gtpc(data, data_acl_len) )
            {
                fwrite(pcap_data_header, DATA_HEADER_LEN, 1, fout);
                fwrite(data, data_acl_len, 1, fout);
            }
        }

        p_id++;
        LOG_DEBUG("\n\n");
    }
    fclose( fout );
    fclose( fp );

    printf("Congratulations to you, packet search  finished!\n");
}


