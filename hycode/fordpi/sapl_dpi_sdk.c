/****************************************************************************** 

��Ȩ���У�C����2001-2015�꣬����Ƽ��ɷ����޹�˾

******************************************************************************
�ļ���:       sapi_dpi_sdk.c
�����ʽ:     ASCII
����:         chenbin
����:         May 24, 2016
��ʷ:
    1.����    :May 24, 2016
      ����    :cb
      �޸�    :Created file
******************************************************************************/

#include "sapl_dpi_sdk.h"

/* 1.   AIE�����ʼ������ */
int AIE_sdk_init(DPI_MALLOC malloc, DPI_FREE free)
{
    return 0;
}

/* 2.   AIE����ȥ��ʼ������ */
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


/* 3.   AIEʶ���� */
int AIE_hook(struct sk_buff *skb, void **app_session, uint32_t *app_id, uint32_t *action_id)
{
    return 0;
}

/* 4.   AIE session�ڴ��ͷź��� */
void AIE_session_delete(void *app_session)
{
    return;
}
