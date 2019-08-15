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

#include "encap.h"
#include "util.h"
#include "r2_list.h"
#include "list.h"
#include "semp_comm_dpi.h"
#include "sapl_dpi_sdk.h"
#include <pthread.h>


mp_code_t sapl_sdk_init();
mp_code_t dataplane_dpi_processs(dpi_skb_t *skb, five_tuple_t *ft,
                                 char * sbuf, uint16_t *slen);




/*�����ļ��ڴ�λ��*/
typedef struct _config_info_t
{
    uint8_t  *pstr;               /* ָ���ļ��ڴ���׵�ַ */
    uint32_t  cur_wirte_index;    /* ��ǰ��д���ֽ��� */
    flag_t    is_complete_file;   /* �Ƿ�Ϊ�������ļ� */
    uint32_t  file_size;          /* �ļ���С */
}config_info_t;


#endif /* MODULES_DPI_DPI_H_ */
