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

/* 1.   AIE引擎初始化函数 */
int AIE_sdk_init(DPI_MALLOC malloc, DPI_FREE free)
{
    return 0;
}

/* 2.   AIE引擎去初始化函数 */
void AIE_sdk_uninit()
{

}


/* 3.   AIE识别函数 */
unsigned int AIE_hook(struct sk_buff *skb, void **app_session, unsigned int *uiAppId)
{
    return 0;
}

/* 4.   AIE session内存释放函数 */
void AIE_session_delete(void *app_session)
{

}






