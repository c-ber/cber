/****************************************************************************** 

��Ȩ���У�C����2001-2015�꣬����Ƽ��ɷ����޹�˾

******************************************************************************
�ļ���:       dpi.c
�����ʽ:     ASCII
����:         chenbin
����:         Apr 18, 2016
��ʷ:
    1.����    :Apr 18, 2016
      ����    :cb
      �޸�    :Created file
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
 * ��������    : session_manage
 *
 * ����        : ������Ԫ��hash key����һ���������ֶοռ䣬
 *               ע��ʶ�����������ͱ����Ժ�Ҫ�ͷ��������Ŀռ䣬
 *               ��������Ԫ��Ĵ�С���ռ��ǲ����ģ�
 *
 * ����        : [in]��Ԫ��:��Ԫ��
 *
 * ����        : �����룬�����ɹ�����MP_OK,ʧ�ܷ���XFAILURE
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







