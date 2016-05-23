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

    ret = dpi_mm_init();

    return ret;
}

void printf_dpi_skb(dpi_skb_t *skb)
{
    int i = 0;
    printf("skb->ptr_len = %d, skb->sap.protocol = %04x \n", skb->ptr_len, skb->sap.protocol);
    for( i = 0 ; i < skb->ptr_len; i++ )
    {
        if(i % 16 == 0)
        {
            printf("\n %04x  ", i);
        }
        printf("%02x ", *(((uint8_t*)skb->sap.network_header)+i));
    }
}

mp_code_t dataplane_dpi_processs(dpi_skb_t *skb)
{
    mp_code_t ret = MP_OK;

    printf_dpi_skb(skb);

    return ret;
}


/*---------------------------sdk function----------------------------------*/

/* 1.   AIE�����ʼ������ */
int AIE_sdk_init(DPI_MALLOC malloc, DPI_FREE free)
{
    return 0;
}

/* 2.   AIE����ȥ��ʼ������ */
void AIE_sdk_uninit()
{

}


/* 3.   AIEʶ���� */
unsigned int AIE_hook(struct sk_buff *skb, void **app_session, unsigned int *uiAppId)
{
    return 0;
}

/* 4.   AIE session�ڴ��ͷź��� */
void AIE_session_delete(void *app_session)
{

}






