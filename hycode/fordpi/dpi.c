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
mp_code_t session_manage()
{
    mp_code_t ret = MP_OK;

    return ret;
}

mp_code_t dataplane_dpi_processs(dpi_skb_t *skb)
{
    mp_code_t ret = MP_OK;

    printf_dpi_skb(skb);

    session_manage();


    return ret;
}







