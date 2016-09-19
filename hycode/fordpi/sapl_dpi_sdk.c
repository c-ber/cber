/****************************************************************************** 

版权所有（C），2001-2015年，恒扬科技股份有限公司

******************************************************************************
文件名:       sapi_dpi_sdk.c
编码格式:     ASCII
作者:         chenbin
创建:         May 24, 2016
历史:
    1.日期    :May 24, 2016
      作者    :cb
      修改    :Created file
******************************************************************************/

#include "sapl_dpi_sdk.h"

/* 1.   AIE引擎初始化函数 */
int AIE_sdk_init(DPI_MALLOC malloc, DPI_FREE free)
{
    return 0;
}

/* 2.   AIE引擎去初始化函数 */
void AIE_sdk_uninit()
{

}

int AIE_set_app_lib(char *filecontent)
{
    return 0;
}


int AIE_set_webmail(char *filecontent)
{
    return 0;
}


/* 3.   AIE识别函数 */
int AIE_hook(struct sk_buff *skb, void **app_session, uint32_t *app_id, uint32_t *action_id)
{
    return 0;
}

/* 4.   AIE session内存释放函数 */
void AIE_session_delete(void *app_session)
{
    return;
}
