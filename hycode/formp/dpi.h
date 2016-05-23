/****************************************************************************** 

��Ȩ���У�C����2001-2015�꣬����Ƽ��ɷ����޹�˾

******************************************************************************
�ļ���:       dpi.h
�����ʽ:     ASCII
����:         chenbin
����:         Apr 18, 2016
��ʷ:
    1.����    :Apr 18, 2016
      ����    :cb
      �޸�    :Created file
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


/* 1.   AIE�����ʼ������ */
int AIE_sdk_init(DPI_MALLOC malloc, DPI_FREE free);

/* 2.   AIE����ȥ��ʼ������ */
void AIE_sdk_uninit();

/* 3.   AIEʶ���� */
unsigned int AIE_hook(struct sk_buff *skb, void **app_session, unsigned int *uiAppId);

/* 4.   AIE session�ڴ��ͷź��� */
void AIE_session_delete(void *app_session);




#endif /* MODULES_DPI_DPI_H_ */
