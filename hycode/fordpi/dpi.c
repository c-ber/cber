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

CVMX_SHARED hash_bucket_t *dpi_buckets = NULL;

mp_code_t dataplane_dpi_init()
{
    mp_code_t ret = MP_OK;

    //ret = dpi_mm_init();

    return ret;
}

void printf_dpi_skb(dpi_skb_t *skb)
{
    int i = 0;
    printf("skb->ptr_len = %d, skb->sap.protocol = %04x",
            skb->network_header_len, skb->l2_proto);
    for( i = 0 ; i < skb->network_header_len; i++ )
    {
        if(i % 16 == 0)
        {
            printf("\n %04x  ", i);
        }
        printf("%02x ", *(((uint8_t*)skb->network_header)+i));
    }
    printf("\n");
}

/******************************************************************************
 * 函数名称    : session_manage
 *
 * 功能        : 根据五元组hash key申请一个自旋锁字段空间，
 *               注意识别完整并发送报文以后要释放整个锁的空间，
 *               否则以五元组的大小，空间是不够的，
 *
 * 参数        : [in]五元组:五元组
 *
 * 返回        : 错误码，创建成功返回MP_OK,失败返回XFAILURE
******************************************************************************/
mp_code_t session_manage_process()
{
    mp_code_t ret = MP_OK;

    return ret;
}

mp_code_t session_manage_init()
{
    mp_code_t ret = MP_OK;

    hash_bucket_t *bucket = NULL;
    int i = 0;
    
    //dpi_buckets = (hash_bucket_t*)semp_named_shared_memblock_get(LTE_HASH_TABLES);
    dpi_buckets = (hash_bucket_t*)malloc( sizeof(hash_bucket_t)*FIVE_TUPLE_BUCKET_MAX_SIZE );

   
    if( NULL == dpi_buckets )
    {
        printf("DPI session init failed\n");
        return MP_TABLE_FULL;
    }


    memset(dpi_buckets, 0x00, sizeof(hash_bucket_t)*FIVE_TUPLE_BUCKET_MAX_SIZE);
    
    for( i = 0; i < FIVE_TUPLE_BUCKET_MAX_SIZE; i++ )
    {
          bucket = dpi_buckets + i;
          cvmx_spinlock_init(&(bucket->lock));
          bucket->index = i;
          INIT_LIST_HEAD(&bucket->head);
    }

    return ret;
}


mp_code_t dataplane_dpi_processs(dpi_skb_t *skb, five_tuple_t *ft)
{
    mp_code_t ret = MP_OK;

    printf_dpi_skb(skb);

    session_manage();


    return ret;
}







