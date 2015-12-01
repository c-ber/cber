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


//lte_imsi_t imsi_base =  {0x44,0x50,0x14,0x09,0x17,0x02,0x00,0xf8};  /*IMSI*/
  lte_imsi_t imsi_base =  {0x64,0x00,0x78,0x59,0x32,0x50,0x07,0xf6};  /*IMSI*/
int ue_ip        = 0x0a2a7bf0;
int s11_mme_ip   = 0xac143902;
int s11_mme_teid = 0xf100800a;
int s11_sgw_ip   = 0xac143687;
int s11_sgw_teid = 0x10016985;
int s1u_enode_ip = 0xac145619;
int s1u_enode_teid=0x00000042;
int s1u_sgw_ip   = 0xac143687;
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

    //pktinfo.gtpu.message_type = GTP_MSG_PDU;
    pktinfo.gtpu.ot_dstip = s1u_enode_ip;
    pktinfo.gtpu.teid     = s1u_enode_teid;
    pktinfo.gtpu.in_dstip = ue_ip;


    ret = lte_gtpu_process(&pktinfo.gtpu);

    if( MP_OK != ret )
    {
        printf("step 4 ,code[%d]\n", ret);
    }
    else
    {
    PRINTF_IMSI( (pktinfo.gtpu.imsi));
    PRINTF_IMEI( (pktinfo.gtpu.imei));
    PRINTF_MSISDN((pktinfo.gtpu.msisdn));
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
    pktinfo.gtpc.dstip = s1u_sgw_ip;
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

//lte_table_imsi_t     imsi_cell = {};
//hash_key_t key={};
///* 调用哈希查询接口，查询imsi表 */
//memcpy(imsi_cell.imsi, imsi_base, sizeof(lte_table_imsi_t));
//update_imsi_hash_key(imsi_base, &(key));
//hash_cell_delete_by_hash(LTE_GET_TABLE_PTR(TABLE_IMSI),&(key));

void test()
{
    int i = 0;
    lte_aging_t ag;
    ag.rt_min_time = 0;
    for( i = 0 ; i < 1; i++)
    {
        printf("*******************************\n");
        printf("cell[%02d]:\n",i);
        printf("*******************************\n");

        test32();
        test32();
        show_memory();

        test33();
        show_memory();

        test34();
        show_memory();

        npcp_show_relate_info(imsi_base);

        test_gtp_u();
//
//        test_delete();
//        /*递增数据*/
//        add_data();

    }
//    printf("Debug---->%s , %s: %d\n",__FILE__,__FUNCTION__ , __LINE__);
//    npcp_update_cell_timer(NULL);

    //test_delete();
    show_memory();

//    hash_key_t key={};
//    uint64_t entry[ENTRY_CELL_DATA_SIZE] = {0};
//    lte_table_imsi_t     imsi_cell = {};
//    lte_imsi_t imsi = {0x64,0x00,0x78,0x59,0x32,0x50,0x07,0xf6};
//
//    memcpy(imsi_cell.imsi, imsi, sizeof(lte_table_imsi_t));
//    update_imsi_hash_key(imsi, &(key));
//
//    hash_cell_get_by_hash( LTE_GET_TABLE_PTR(TABLE_IMSI),
//                          &(key), &imsi_cell, sizeof(lte_table_imsi_t) );

}

static inline uint64_t cvmx_read_csr(uint64_t csr_addr)
{
    //return cvmx_read64_uint64(csr_addr);
    //printf("test----->%016lx,   %p\n",csr_addr, (volatile uint64_t *)(long)(csr_addr));
    return *((volatile uint64_t *)(long)(csr_addr));
}

inline bool not_empty_array(uint8_t *src, int len)
{
    int i = 0;
    for( i = 0; i < len; i++ )
    {
        if( 0x00 != *(src+i) )
        {
            return true;
        }
    }
    return false;
}

// LV_INFO = (1 << 0),
// LV_WARN = (1 << 1),
// LV_ERROR = (1 << 2),

//#define M_AGING        MODULE_LTE_AGING       /* 老化模块       */
//#define M_S11          MODULE_LTE_S11         /* s11关联模块    */
//#define M_S1           MODULE_LTE_S1          /* s1关联模块     */
//#define M_S6A          MODULE_LTE_S6A         /* s6a关联模块    */
//#define M_TRNSF        MODULE_LTE_TRNSF       /* 转发模块       */
int main(int argc,char * argv[])
{
    write_lte_log_flag(M_AGING, LV_INFO, true);
    write_lte_log_flag(M_AGING, LV_WARN, true);
    write_lte_log_flag(M_AGING, LV_ERROR, true);
    write_lte_log_flag(M_AGING, LV_ERROR, false);
    write_lte_log_flag(M_AGING, LV_INFO, false);
    write_lte_log_flag(M_AGING, LV_WARN, false);
    LOG_PRINT(M_AGING, LV_INFO, "aging, info\n");
    LOG_PRINT(M_AGING, LV_WARN, "aging, warnning\n");
    LOG_PRINT(M_AGING, LV_ERROR, "aging, error\n");


//	uint64_t data = 0;
//	lte_imsi_t  rlt_imsi = {0x44, 0x50, 0x14, 0x09, 0x17, 0x02, 0x00, 0xf8};
//	data = *(uint64_t*)(( &(rlt_imsi[0])));
//	for(i = 0 ; i < 20; i++)
//	{
//	    printf("%d,   %d\n", data, semp_hash_data64(data, 0));
//	    data++;
//	}

//    pthread_t pid = -1;
//    pthread_create(&pid, NULL, npcp_update_cell_timer, (void *)NULL);

//    dataplane_lte_relate_init();
//    test();
    //pthread_join(pid,NULL);

    return 0;
} 



