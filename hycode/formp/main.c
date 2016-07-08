#include    <stdio.h>
#include    <stdlib.h>
#include    <time.h>
#include    <string.h>
#include    <sys/types.h>
#include    <sys/stat.h>
#include    <stdarg.h>
#include    <signal.h>
#include    <sys/wait.h>
#include    <pthread.h>
#include    <fcntl.h>
#include    <errno.h>
#include    <dirent.h>
#include    <ctype.h>

#include <unistd.h>
#include <errno.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <time.h>
#include <netinet/in.h>
#include <sys/wait.h>
#include <signal.h>
#include <assert.h>
#include "lte_relate.h"
#include "packet_entry.h"

#include "hash_alg.h"
#include "lte_log.h"


//lte_imsi_t imsi_base =  {0x44,0x50,0x14,0x09,0x17,0x02,0x00,0xf8};  /*IMSI*/
  lte_imsi_t imsi_base =  {0x64,0x00,0x78,0x59,0x32,0x50,0x07,0xf6};  /*IMSI*/
int ue_ip        = 0x0a2a7bf0;
int s11_mme_ip   = 0xac143902;
int s11_mme_teid = 0xf100800a;
int s11_sgw_ip   = 0xac143687;
int s11_sgw_teid = 0x10016985;
int s1u_enode_ip = 0xac145619;
int s1u_enode_teid=0x00000042;
int s1u_sgw_ip   = 0xac143687; //sgw ip只有一个，但隧道号有多个
int s1u_sgw_teid = 0x00017469;

/*s1关联 */
lte_tai_t tai = {0x64, 0xf0, 0x00, 0x28, 0xb2};
lte_guti_t guti = {0x64, 0xf0, 0x00, 0x03, 0x6e, 0x84, 0xe5, 0x12, 0x3a, 0x9a};
lte_guti_t guti_new = {0x66, 0xf0, 0x00, 0x03, 0x6e, 0x84, 0xe5, 0x12, 0x3a, 0x99};
uint32_t enode_ue_s1ap_id = 60;
uint32_t mme_ue_s1ap_id   = 1526759438;
lte_rand_t rand_base = {0xd3, 0x63, 0x43, 0xd4, 0xfa, 0xd2, 0x05, 0xef,
                        0x10, 0xe1, 0x09, 0xbd, 0xf6, 0xaa, 0x2a, 0x20};

//IMSI           : 440541907120008
//MME IP         : 2.57.20.172
//MME TEID       : 0xf100800a
//S11-SGW IP     : 135.54.20.172
//S11-SGW TEID   : 0x10016985
//S1U-ENODE IP   : 25.86.20.172
//S1U-ENODE TEID : 0x00000042
//S1U-SGW IP     : 135.54.20.172
//S1U-SGW TEID   : 0x00017469
//UE IP          : 240.123.42.10

void test_delete()
{
    mp_code_t ret;
    parse_pkt_info_t   pktinfo;
    memset(&pktinfo, 0,  sizeof(pktinfo));
    pktinfo.protocol = PARSE_PROTOCOL_GTPCV2;
    pktinfo.result   = PARSE_SUCCESS;


    pktinfo.gtpc.message_type = GTP_MSG_DELETE_SES_RSP;
    pktinfo.gtpc.dstip.ip.v4 = s11_mme_ip;
    pktinfo.gtpc.teid  = s11_mme_teid;
    pktinfo.gtpc.cause = REUQEST_ACCEPT;

   ret = lte_gtpc_process(&pktinfo.gtpc);

   if( MP_E_NONE != ret )
   {
       printf("step 5 ,code[%d]\n", ret);
   }
}
void test_gtp_u()
{
    mp_code_t ret;
    parse_pkt_info_t   pktinfo;

    memset(&pktinfo, 0,  sizeof(pktinfo));
    pktinfo.protocol = PARSE_PROTOCOL_GTPU;
    pktinfo.result   = PARSE_SUCCESS;

    //pktinfo.gtpu.message_type = GTP_MSG_PDU;\
    //上行
    pktinfo.gtpu.ot_dstip.ip.v4 = s1u_sgw_ip;
    pktinfo.gtpu.teid     = s1u_sgw_teid;
    pktinfo.gtpu.in_dstip.ip.v4 = ue_ip;
    ret = lte_gtpu_process(&pktinfo.gtpu);
    if( MP_OK != ret )
    {
        printf("step 5 ,code[%d]\n", ret);
    }

    //下行
    pktinfo.gtpu.ot_dstip.ip.v4 = s1u_enode_ip;
    pktinfo.gtpu.teid     = s1u_enode_teid;
    pktinfo.gtpu.in_dstip.ip.v4 = ue_ip;
    ret = lte_gtpu_process(&pktinfo.gtpu);
    if( MP_OK != ret )
    {
        printf("step 5 ,code[%d]\n", ret);
    }

}
void test35()
{
    mp_code_t ret;
    parse_pkt_info_t   pktinfo;

    memset(&pktinfo, 0,  sizeof(pktinfo));
    pktinfo.protocol = PARSE_PROTOCOL_GTPCV2;
    pktinfo.result   = PARSE_SUCCESS;

    pktinfo.gtpc.message_type = GTP_MSG_MODIFY_BEARER_RSP;
    pktinfo.gtpc.fteid[S1U_SGW].teid = s1u_sgw_teid;
    pktinfo.gtpc.fteid[S1U_SGW].ip.ip.v4  = s1u_sgw_ip;
    pktinfo.gtpc.dstip.ip.v4 = s11_mme_ip;
    pktinfo.gtpc.teid  = s11_mme_teid;

    ret = lte_gtpc_process(&pktinfo.gtpc);

    if( MP_OK != ret )
    {
        printf("step 4,code[%d]\n", ret);
    }
}
void test34()
{
    mp_code_t ret;
    parse_pkt_info_t   pktinfo;

    memset(&pktinfo, 0,  sizeof(pktinfo));
    pktinfo.protocol = PARSE_PROTOCOL_GTPCV2;
    pktinfo.result   = PARSE_SUCCESS;

    pktinfo.gtpc.message_type = GTP_MSG_MODIFY_BEARER_REQ;
    pktinfo.gtpc.fteid[S1U_ENODEB].teid = s1u_enode_teid;
    pktinfo.gtpc.fteid[S1U_ENODEB].ip.ip.v4  = s1u_enode_ip;
    pktinfo.gtpc.dstip.ip.v4 = s11_sgw_ip;
    pktinfo.gtpc.teid  = s11_sgw_teid;

    ret = lte_gtpc_process(&pktinfo.gtpc);

    if( MP_OK != ret )
    {
        printf("step 3,code[%d]\n", ret);
    }
}
void test33()
{
    mp_code_t ret;
    parse_pkt_info_t   pktinfo;

    memset(&pktinfo, 0,  sizeof(pktinfo));

    pktinfo.protocol = PARSE_PROTOCOL_GTPCV2;
    pktinfo.result   = PARSE_SUCCESS;

    pktinfo.gtpc.message_type = GTP_MSG_CREATE_SES_RSP;
    pktinfo.gtpc.fteid[S11_SGW].teid = s11_sgw_teid;
    pktinfo.gtpc.fteid[S11_SGW].ip.ip.v4  = s1u_sgw_ip;
    pktinfo.gtpc.dstip.ip.v4 = s11_mme_ip;
    pktinfo.gtpc.teid  = s11_mme_teid;
    pktinfo.gtpc.fteid[S1U_SGW].teid = s1u_sgw_teid;
    pktinfo.gtpc.fteid[S1U_SGW].ip.ip.v4  = s1u_sgw_ip;
    pktinfo.gtpc.pdn.pdn_addr.ip.v4  = ue_ip;
    pktinfo.gtpc.dstip.ip.v4 =s11_mme_ip;
    pktinfo.gtpc.teid = s11_mme_teid;
    ret = lte_gtpc_process(&pktinfo.gtpc);

    if( MP_OK != ret )
    {
        printf("step 2 ,code[%d]\n", ret);
    }
}
void test32()
{
    mp_code_t ret;
    parse_pkt_info_t   pktinfo;
    memset(&pktinfo, 0,  sizeof(pktinfo));

    lte_imsi_t          imsi =  {};  /*IMSI*/
    lte_imei_t          imei =  {0x53,0x61,0x20,0x00,0x31,0x16,0x12,0x00};  /*IMEI*/
    lte_msisdn_t        msisdn= {0x18,0x09,0x73,0x21,0x00,0x80};/*phone number*/

    memcpy(imsi, imsi_base, sizeof(lte_imsi_t));
    pktinfo.protocol = PARSE_PROTOCOL_GTPCV2;
    pktinfo.result   = PARSE_SUCCESS;

    memcpy(pktinfo.gtpc.imsi, imsi, sizeof(lte_imsi_t) );
    memcpy(pktinfo.gtpc.imei, imei, sizeof(lte_imei_t) );
    memcpy(pktinfo.gtpc.msisdn, msisdn, sizeof(lte_msisdn_t) );
    pktinfo.gtpc.msisdn_len = 6;
    pktinfo.gtpc.fteid[S11_MME].teid = s11_mme_teid;
    pktinfo.gtpc.fteid[S11_MME].ip.ip.v4  =  s11_mme_ip;

    pktinfo.gtpc.message_type = GTP_MSG_CREATE_SES_REQ;
    ret = lte_gtpc_process(&pktinfo.gtpc);
    if( MP_OK != ret )
    {
        printf("step 1 ,code[%d]\n", ret);
    }
}


void test_s6a_request()
{
    mp_code_t ret;
    parse_diameter_t diameter;
    uint8_t imsi[8] =  {0x53,0x61,0x20,0x00,0x31,0x16,0x12,0x00};  /*IMEI*/;
    diameter.valid_kasme_rand_pair_num = 1;
    diameter.hop_by_hop = 0x0d700959;
    diameter.valid_mask = ~0;
    diameter.hss_ip.ip.v4     = 0x0a471a3a;
    diameter.s6a_mme_ip.ip.v4 = 0x0a471b04;
    memcpy( diameter.user_name , imsi, 8);

    diameter.dmt_type = DMT_REQ_PKT;

    ret = lte_dmt_relevance_process(&diameter);
    if( MP_OK != ret )
    {
        printf("step 1 ,code[%d]\n", ret);
    }
}

void test_s6a_response()
{
    mp_code_t ret;
    parse_diameter_t diameter;
    uint8_t imsi[8] =  {0x53,0x61,0x20,0x00,0x31,0x16,0x12,0x00};  /*IMEI*/;
    uint8_t kasme[32] = {0xa5,0xc7,0x7d,0x4b,0x80,0xf2,0xf7,0xa6,
                         0xd9,0x15,0x9b,0x2f,0x3a,0xa9,0x43,0xa9,
                         0x4f,0x43,0x51,0xbf,0x66,0xe8,0x1f,0xb1,
                         0x81,0x20,0x79,0x3d,0x88,0x99,0x55,0x28};

    uint8_t rand[16]  = {0x7a,0x43,0xe6,0x33,0xcd,0x34,0xba,0x50,
                         0x55,0xc9,0x77,0x12,0x68,0x64,0x07,0xdc};
    diameter.valid_kasme_rand_pair_num = 1;
    diameter.hop_by_hop = 0x0d700959;
    diameter.valid_mask = ~0;
    diameter.hss_ip.ip.v4     = 0x0a471a3a;
    diameter.s6a_mme_ip.ip.v4 = 0x0a471b04;
    memcpy( diameter.user_name , imsi, 8);
    diameter.dmt_type = DMT_RES_PKT;
    memcpy(diameter.kasme_info[0].kasme, kasme, sizeof(kasme));
    memcpy(diameter.kasme_info[0].rand, rand, sizeof(rand));

    ret = lte_dmt_relevance_process(&diameter);
    if( MP_OK != ret )
    {
        printf("step 1 ,code[%d]\n", ret);
    }
}

/**/
void test_s1_1()
{
    mp_code_t ret = MP_OK;
    parse_s1ap_t s1ap;
    memset(&s1ap, 0 , sizeof(parse_s1ap_t));

    s1ap.nas.EMM_message_type = EMM_MSG_ATTACH_REQUEST;
//    s1ap.enode_ue_s1ap_id = enode_ue_s1ap_id;
//    s1ap.mme_ip = s11_mme_ip;
//    s1ap.enode_ip = s1u_enode_ip;
    memcpy(s1ap.tai, tai, sizeof(tai));
    //s1ap.nas.type_of_identity = TYPE_OLD_GUTI;
    s1ap.nas.type_of_identity = TYPE_IMSI;

    memcpy(s1ap.nas.init_identify.imsi, imsi_base, sizeof(lte_imsi_t));
    //memcpy(s1ap.nas.init_identify.guti, guti, sizeof(lte_guti_t));

    ret = lte_s1ap_initialUEMessage(&s1ap);
    if( MP_OK != ret )
    {
        printf("s1 step 1 ,code[%d]\n", ret);
    }

}
void test_s1_1_old()
{
    mp_code_t ret = MP_OK;
    parse_s1ap_t s1ap;
    memset(&s1ap, 0 , sizeof(parse_s1ap_t));

    s1ap.nas.EMM_message_type = EMM_MSG_ATTACH_REQUEST;
//    s1ap.enode_ue_s1ap_id = enode_ue_s1ap_id;
//    s1ap.mme_ip = s11_mme_ip;
//    s1ap.enode_ip = s1u_enode_ip;
    memcpy(s1ap.tai, tai, sizeof(tai));
    s1ap.nas.type_of_identity = TYPE_OLD_GUTI;
    //s1ap.nas.type_of_identity = TYPE_IMSI;

    //memcpy(s1ap.nas.init_identify.imsi, imsi_base, sizeof(lte_imsi_t));
    memcpy(s1ap.nas.init_identify.guti, guti, sizeof(lte_guti_t));

    ret = lte_s1ap_initialUEMessage(&s1ap);
    if( MP_OK != ret )
    {
        printf("s1 step 1 ,code[%d]\n", ret);
    }

}
void test_s1_2()
{
    mp_code_t ret = MP_OK;
    parse_s1ap_t s1ap;
    char packet_ptr[5] = {0};
    memset(&s1ap, 0 , sizeof(parse_s1ap_t));

    s1ap.nas.EMM_message_type = 0x42;
    s1ap.nas.ciphered_flag = false;
//    s1ap.enode_ue_s1ap_id = enode_ue_s1ap_id;
//
//    s1ap.enode_ip = s1u_enode_ip;
//    s1ap.mme_ip   = s11_mme_ip;

    memcpy(s1ap.nas.guti, guti, sizeof(lte_guti_t));
    ret = lte_s1ap_InitialContextSetup(packet_ptr, &s1ap);
    if( MP_OK != ret )
    {
        printf("s1 step 2 ,code[%d]\n", ret);
    }
}

void test_s1_2_new_guti()
{
    mp_code_t ret = MP_OK;
    parse_s1ap_t s1ap;
    char packet_ptr[5] = {0};
    memset(&s1ap, 0 , sizeof(parse_s1ap_t));

    s1ap.nas.EMM_message_type = 0x42;
    s1ap.nas.ciphered_flag = false;
//    s1ap.enode_ue_s1ap_id = enode_ue_s1ap_id;
//
//    s1ap.enode_ip = s1u_enode_ip;
//    s1ap.mme_ip   = s11_mme_ip;

    memcpy(s1ap.nas.guti, guti_new, sizeof(lte_guti_t));
    ret = lte_s1ap_InitialContextSetup(packet_ptr, &s1ap);
    if( MP_OK != ret )
    {
        printf("s1 step 2 ,code[%d]\n", ret);
    }
}

void test_s1_3()
{
    mp_code_t ret = MP_OK;
    parse_s1ap_t s1ap;
    memset(&s1ap, 0 , sizeof(parse_s1ap_t));

    s1ap.nas.EMM_message_type = EMM_MSG_IDENTIFY_RESPONSE;
    s1ap.access_node_ip.ip.v4 = s1u_enode_ip;
    s1ap.access_node_id       = enode_ue_s1ap_id;
    s1ap.cn_ip.ip.v4          = s11_mme_ip;
    s1ap.cn_id                = mme_ue_s1ap_id;
    s1ap.nas.type_of_identity = TYPE_IMSI;

    memcpy(s1ap.nas.init_identify.imsi, imsi_base, sizeof(imsi_base));
    memcpy(s1ap.tai, tai, sizeof(tai));


    ret = lte_s1ap_uplinkNASTransport(&s1ap);
    if( MP_OK != ret )
    {
        printf("s1 step 3 ,code[%d]\n", ret);
    }

}

void test_s1_4()
{
    mp_code_t ret = MP_OK;
    parse_s1ap_t s1ap;
    memset(&s1ap, 0 , sizeof(parse_s1ap_t));

    //s1ap.nas.EMM_message_type = EMM_SECURITE_COMMAND;
    s1ap.nas.EMM_message_type = EMM_MSG_AUTH_REQUEST;
    s1ap.access_node_ip.ip.v4 = s1u_enode_ip;
    s1ap.access_node_id       = enode_ue_s1ap_id;

    memcpy( s1ap.nas.rand, rand_base, sizeof(rand_base));

    ret = lte_s1ap_downlinkNASTransport(NULL, &s1ap);
    if( MP_OK != ret )
    {
        printf("s1 step 4 ,code[%d]\n", ret);
    }
}

void test_s1_5()
{
    mp_code_t ret = MP_OK;
    parse_s1ap_t s1ap;
}


void test_3g_2()
{
    mp_code_t ret;
    parse_IuPS_t IuPS_info;
    memset(&IuPS_info, 0,  sizeof(IuPS_info));

    lte_imsi_t          imsi =  {};  /*IMSI*/
    memcpy(imsi, imsi_base, sizeof(lte_imsi_t));

    IuPS_info.sccp_info.dlr_indic = 0;
    IuPS_info.gmm_info.valid_ie_mask |= P_TMSI_VALID;
    IuPS_info.sccp_info.dpc = 1;

    p_tmsi_t p_tmsi = {0x11, 0x22, 0x33, 0x44};
    memcpy(IuPS_info.gmm_info.p_tmsi, p_tmsi, sizeof(p_tmsi_t));

    ret = dt_gmm_relate_attach_accept(&IuPS_info);
    if( MP_OK != ret )
    {
        printf("step 3g 1 ,code[%d]\n", ret);
    }

}


void test_3g_1(int flag_with_imsi)
{
    mp_code_t ret;
    parse_IuPS_t IuPS_info;
    memset(&IuPS_info, 0,  sizeof(IuPS_info));

    IuPS_info.sccp_info.message_type = EN_SCCP_MESSAGE_CR;
    IuPS_info.sccp_info.slr_indic = 1;
    IuPS_info.sccp_info.dpc = 1;

    if(flag_with_imsi)
    {
        IuPS_info.gmm_info.valid_ie_mask |= IMSI_VALID;
        lte_imsi_t imsi = {0x64, 0x00, 0x00, 0x00, 0x32, 0x05, 0x07, 0xf7};
        memcpy(IuPS_info.gmm_info.imsi, imsi, sizeof(lte_imsi_t));
    }
    else
    {
        IuPS_info.gmm_info.valid_ie_mask |= P_TMSI_VALID;
        p_tmsi_t p_tmsi = {0x19, 0xdc, 0x3e, 0x44};
        memcpy(IuPS_info.gmm_info.p_tmsi, p_tmsi, sizeof(p_tmsi_t));
    }

    IuPS_info.ranap_info.mask |= RANAP_IE_RAI_VALID;
    uint8_t rai[6] = {0x00, 0x64, 0xf0, 0x00, 0x26, 0xaf};
    memcpy(&IuPS_info.ranap_info.rai, rai, sizeof(rai_t));


    IuPS_info.gmm_info.message_type = GMM_MSG_ATTACH_REQUEST;



    ret = umts_IuPS_relate_init_ue_msg(&IuPS_info);
    if( MP_OK != ret )
    {
        printf("step 3g 1 ,code[%d]\n", ret);
    }

}

char * tablename[]={
"TABLE_IMSI",
"TABLE_S11_MME",
"TABLE_S11_SGW",
"TABLE_S1",
"TABLE_S6A",
"TABLE_S1_ENODEB_MME",
"TABLE_S_TIMSI",
"TABLE_MAX"
};

/*输出整个内存分布情况*/
void show_memory()
{
    int i = 0;
    int n = 0;
    int cell_num = TABLE_MAGNITUDE;
    hash_bucket_t    *bucket    = NULL;
    hash_cell_t *hash_cell = NULL;
    struct list_head *pos = NULL, *next = NULL;
    printf("---------------------------------> memory use list:\n");
    for(n = 0 ; n < 7; n++)
    {
        if(n == 3)
        {
            cell_num = cell_num *2;
        }
        else
        {
            cell_num = TABLE_MAGNITUDE;
        }
        hash_table_t *table = LTE_GET_TABLE_PTR(n);
        printf("\n%s:\n", tablename[n]);
        for(i = 0 ; i < cell_num; i++)
        {
            bucket = table->first_bucket + i;
            printf("test---------->%08x", &(bucket->lock.__data.__lock));
            if(cvmx_unlikely(NULL == bucket ))
            {
                return;
            }

            LTE_HASH_TABLE_LOCK(bucket); /*锁住桶子，下面是遍历cell链表*/
            printf(" [%d] cell list addr : ", i);
            list_for_each_safe( pos, next, &(bucket->head) )
            {
                printf(" ---> ");
                hash_cell = list_entry(pos, hash_cell_t, node);
                printf("0x%08x", hash_cell);
            }
            printf("\n");

            LTE_HASH_TABLE_UNLOCK(bucket);
        }
    }
}
void add_data()
{
    /*递增数据*/
    imsi_base[6]++;
    ue_ip++;
    s11_mme_ip++;
    s11_mme_teid++;
    s11_sgw_ip++;
    s11_sgw_teid++;
    s1u_enode_ip++;
    s1u_enode_teid++;
    s1u_sgw_ip++;
    s1u_sgw_teid++;
}

void test()
{
    int i = 0, j = 0;
    lte_aging_t ag;
    ag.rt_min_time = 0;

    for( i = 0 ; i < 1; i++)
    {
        printf("*******************************\n");
        printf("cell[%02d]:\n",i);
        printf("*******************************\n");

        test_3g_1(1);
        test_3g_1(0);

        //test_s1_1();
        //test_s1_2();
//        test_s1_1_old();
//        test_s1_2_new_guti();
        //test_s1_3();
        //test_s1_4();
//        test_s6a_response();

//        show_memory();
//        test32();
//        //show_memory();
//
//        test33();
//        show_memory();
//
//
//        test34();
//        //show_memory();
//
//        test35();
//        //show_memory();
//
//        npcp_show_relate_info(imsi_base);

//        test_gtp_u();

//            test_s6a_request();
//            show_memory();
//
//        test_delete();
        /*递增数据*/
//        add_data();

    }

    //npcp_update_cell_timer(NULL);

    //test_delete();
    //show_memory();
}

int main(int argc,char * argv[])
{

//    pthread_t pid = -1;
//    pthread_create(&pid, NULL, npcp_update_cell_timer, (void *)NULL);

    int i = -5;
    uint32_t x = 5;
    if(x > i )
        printf("fdlkjfkl");


//    dataplane_lte_relate_init();
//    test();


    //pthread_join(pid,NULL);

    return 0;
} 



