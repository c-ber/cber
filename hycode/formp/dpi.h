/****************************************************************************** 

版权所有（C），2001-2015年，恒扬科技股份有限公司

******************************************************************************
文件名:       dpi.h
编码格式:     ASCII
作者:         chenbin
创建:         Apr 18, 2016
历史:
    1.日期    :Apr 18, 2016
      作者    :cb
      修改    :Created file
******************************************************************************/
#ifndef MODULES_DPI_DPI_H_
#define MODULES_DPI_DPI_H_


#include "util.h"
#include "dpi_mm.h"


mp_code_t dataplane_dpi_init();
mp_code_t dataplane_dpi_processs(dpi_skb_t *skb);

/*---------------------------sdk declare----------------------------------*/
typedef void* (*DPI_MALLOC)(unsigned int size);
typedef void  (*DPI_FREE)(void *p);


/* 1.   AIE引擎初始化函数 */
int AIE_sdk_init(DPI_MALLOC malloc, DPI_FREE free);

/* 2.   AIE引擎去初始化函数 */
void AIE_sdk_uninit();

/* 3.   AIE识别函数 */
unsigned int AIE_hook(struct sk_buff *skb, void **app_session, unsigned int *uiAppId);

/* 4.   AIE session内存释放函数 */
void AIE_session_delete(void *app_session);




#endif /* MODULES_DPI_DPI_H_ */
