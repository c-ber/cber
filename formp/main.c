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
#include "packet_gtpv2c.h"
#include "hash_alg.h"
#include "lte_log.h"
#include "kfifo.h"


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
    pktinfo.gtpc.dstip = s11_mme_ip;
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
    pktinfo.gtpu.ot_dstip = s1u_sgw_ip;
    pktinfo.gtpu.teid     = s1u_sgw_teid;
    pktinfo.gtpu.in_dstip = ue_ip;
    ret = lte_gtpu_process(&pktinfo.gtpu);
    if( MP_OK != ret )
    {
        printf("step 5 ,code[%d]\n", ret);
    }

    //下行
    pktinfo.gtpu.ot_dstip = s1u_enode_ip;
    pktinfo.gtpu.teid     = s1u_enode_teid;
    pktinfo.gtpu.in_dstip = ue_ip;
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
    pktinfo.gtpc.fteid[S1U_SGW].ip  = s1u_sgw_ip;
    pktinfo.gtpc.dstip = s11_mme_ip;
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
    pktinfo.gtpc.fteid[S1U_ENODEB].ip  = s1u_enode_ip;
    pktinfo.gtpc.dstip = s11_sgw_ip;
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
    pktinfo.gtpc.fteid[S11_SGW].ip  = s1u_sgw_ip;
    pktinfo.gtpc.dstip = s11_mme_ip;
    pktinfo.gtpc.teid  = s11_mme_teid;
    pktinfo.gtpc.fteid[S1U_SGW].teid = s1u_sgw_teid;
    pktinfo.gtpc.fteid[S1U_SGW].ip  = s1u_sgw_ip;
    pktinfo.gtpc.pdn.pdn_addr  = ue_ip;
    pktinfo.gtpc.dstip =s11_mme_ip;
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
    pktinfo.gtpc.fteid[S11_MME].ip  =  s11_mme_ip;

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
    diameter.hss_ip     = 0x0a471a3a;
    diameter.s6a_mme_ip = 0x0a471b04;
    memcpy( diameter.user_name , imsi, 8);

    diameter.dmt_type = DMT_REQ_PKT;

    ret = lte_dmt_relevance_process(&diameter);
    if( MP_OK != ret )
    {
        printf("step 1 ,code[%d]\n", ret);
    }
}


char * tablename[]={
"TABLE_IMSI",
"TABLE_S11_MME",
"TABLE_S11_SGW",
"TABLE_S1",
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
    for(n = 0 ; n < 4; n++)
    {
        if(n == 3)
        {
            cell_num = cell_num *2;
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
    for( i = 0 ; i < 2; i++)
    {
        printf("*******************************\n");
        printf("cell[%02d]:\n",i);
        printf("*******************************\n");
        test_gtp_u();
        test_gtp_u();
        test32();
        show_memory();

        test33();
        show_memory();


        test34();
        show_memory();

        test35();
        show_memory();

        npcp_show_relate_info(imsi_base);

        test_gtp_u();

//            test_s6a_request();
//            show_memory();
//
//        test_delete();
        /*递增数据*/
        add_data();

    }

//    npcp_update_cell_timer(NULL);

    //test_delete();
    //show_memory();
}

int main(int argc,char * argv[])
{
//    pthread_t pid = -1;
//    pthread_create(&pid, NULL, npcp_update_cell_timer, (void *)NULL);

    dataplane_lte_relate_init();
    test();
    //pthread_join(pid,NULL);

    return 0;
} 



