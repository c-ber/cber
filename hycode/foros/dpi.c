/****************************************************************************** 

版权所有（C），2001-2015年，恒扬科技股份有限公司

******************************************************************************
文件名:       dpi.c
编码格式:     ASCII
作者:         chenbin
创建:         Apr 18, 2016
历史:
    1.日期    :Apr 18, 2016
      作者    :cb
      修改    :Created file
******************************************************************************/

#include "dpi.h"

#define HASH_TABLE_BASE  (dpi_buckets)



void printf_dpi_skb(dpi_skb_t *skb)
{
    printf("skb->ptr_len = %d, skb->sap.protocol = %04x\n",
            skb->network_header_len, skb->l2_proto);
    printf_buf((uint8_t*)skb->network_header, skb->network_header_len);
}

/******************************************************************************
 * 函数名称    : dpi_result_analysis
 * 功能        : 识别结果分析处理，初步只有应用识别，即识别appid
 *               后续需要获取日志
 * 参数        :
 * 说明        :
 * 返回        : 错误码
******************************************************************************/
mp_code_t dpi_result_analysis(dpi_result_t *rlt)
{
    mp_code_t ret = MP_OK;

    if(rlt->app_id == 0)
    {
        return MP_FAIL;
    }

    if(rlt->have_audit_log)
    {
        //有审计日志就发送
    }

    //对识别结果进行打包

    return ret;
}



/******************************************************************************
 * 函数名称    : dpi_packet_indentify
 * 功能        : 对报文调用sdk进行识别
 * 参数        : skb:识别报文结构体
 * 说明        :
 * 返回        : 错误码
******************************************************************************/
mp_code_t dpi_packet_indentify(dpi_skb_t *skb, dpi_result_t *rlt)
{
    mp_code_t ret = MP_OK;

#ifdef old
    struct sk_buff skbuf      = {};
    void *pas = NULL;

    skbuf.network_header     = skb->network_header;
    skbuf.network_header_len = skb->network_header_len;
    skbuf.pktdir = skb->pktdir;

    int result = AIE_hook(&skbuf, &pas, &(rlt->app_id), &(rlt->action_id));

    printf("result = %d , app id = %d , act id = %d \n",
            result, rlt->app_id, rlt->action_id);
#else
    unsigned char pkt_id = 1;
    //printf_buf(skb->mac_header, skb->pkt_len);
    //printf_buf(skb->network_header, skb->network_header_len);
    //int result = 0;

    AIE_hook(pkt_id, skb->network_header, skb->network_header_len);
    //printf("result = %d \n", result);

//    if(g_dpi_result.have_ident_log)
//    {
//        printf("\ntest----> app_id     = %u \n", g_dpi_result.app_id);
//        printf("test----> app_cat_name = %s \n", g_dpi_result.app_cat_name);
//        printf("test----> action_id    = %u \n", g_dpi_result.action_id);
//        printf("test----> action_name  = %s \n", g_dpi_result.action_name);
//    }
//
//    if(g_dpi_result.have_audit_log)
//    {
//        printf("\ntest----> content      = %s \n\n", g_dpi_result.content);
//    }

#endif

    return ret;
}

#define  CVMX_FPA_DPI_128_POOL 1



void* mp_malloc(unsigned int size)
{
    return malloc(size);
}
void mp_free(void *p)
{
    free(p);
}


#define CONFIG_FILE_1    "sap_apps_sigs.conf"
#define CONFIG_FILE_2    "webmail_cn.html"
#define CONFIG_FILE_3    "sap_category_behavior.conf"

typedef int (*p_func)(char *);

void load_file(char *filename,  int  (*p_func)(char *))
{
    int ret = 0;
    FILE * fp = NULL;

    char * fbuf = (char *)malloc(5*1024*1024);
    char *ptr = fbuf;
    int rlen = 0;
    fp = fopen("CONFIG_FILE_1", "rb");
    if( NULL == fp)
    {
        perror(CONFIG_FILE_1" open fail!");
    }

    /*读文件*/
    do
    {
        ptr += rlen;
        rlen = fread(ptr, 1, 1500, fp);
    }while(1500 == rlen);

    ptr = fbuf;
    ret = p_func((char *)(ptr));
    printf(CONFIG_FILE_1" ret = %d\n", ret);

    free(fbuf);
}
mp_code_t sapl_sdk_init()
{

    DPI_MALLOC new = mp_malloc;
    DPI_FREE   del = mp_free;


    load_file(CONFIG_FILE_1, AIE_set_app_lib);
    load_file(CONFIG_FILE_2, AIE_set_webmail);
    load_file(CONFIG_FILE_3, AIE_set_app_type);


    AIE_sdk_init(new, del);
//        dp_debug_file_rsm = 1;
//        dp_debug_audit = 1;
//        dp_debug_decode = 1;
//        dp_debug_flow = 1;

    //dp_debug_decode  = 1; // 主要和识别相关
   // dp_debug_tcp_rsm = 1; // 主要和tcp重组相关
   // dp_debug_flow    = 1; // 主要和会话管理相关

    return MP_OK;
}


mp_code_t dataplane_dpi_processs(dpi_skb_t *skb, five_tuple_t *ft,
                                 char * sbuf, uint16_t *slen)
{
    mp_code_t ret = MP_OK;
    dpi_result_t rlt = {0};

    //printf_dpi_skb(skb);

    dpi_packet_indentify(skb, &rlt);

    if(skb->pktdir == DIR_REQUEST)
    {
        g_dpi_result.user_ip = ft->sip.ip.v4;
    }
    else
    {
        g_dpi_result.user_ip = ft->dip.ip.v4;
    }

    if( g_dpi_result.have_audit_log | g_dpi_result.have_ident_log )
    {
        packet_identity_result_process(&g_dpi_result, sbuf, slen);
    }

    return ret;
}


