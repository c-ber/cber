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







