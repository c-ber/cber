/****************************************************************************** 

��Ȩ���У�C����2001-2015�꣬����Ƽ��ɷ����޹�˾

******************************************************************************
�ļ���:       semp_comm_dpi.h
�����ʽ:     ASCII
����:         chenbin
����:         Apr 18, 2016
��ʷ:
    1.����    :Apr 18, 2016
      ����    :cb
      �޸�    :Created file
******************************************************************************/
#ifndef INCLUDE_SEMP_COMM_DPI_H_
#define INCLUDE_SEMP_COMM_DPI_H_

#include <stdio.h>
#include <stdint.h>

#include "cvmx_common.h"
#include "semp-errno.h"



/* ʶ��״̬ */
typedef enum
{
    ID_STATUS_SUCC   = 0,  //�ɹ�
    ID_STATUS_FAIL   = 1,  //δʶ��
    ID_STATUS_UNDONE = 2   //����ʶ����
}id_status_t;

/* ������Ϣ�ṹ��, ��Ҫ���汨����ص�����*/
typedef struct sk_buff
{
    uint16_t    protocol;       /* ��ʾ�������ͣ� IPV4����IPV6����
                                   0x0800:IPV4��0x86DD:IPV6 */
    void       *network_header; /* ָ�������ͷ��������ָ�� */
}sk_buff_t;

typedef struct _dpi_skb
{
    sk_buff_t sap;
    uint16_t ptr_len;
}dpi_skb_t;

typedef struct
{
    uint8_t rlt; //
}app_session_t;
#endif /* INCLUDE_SEMP_COMMON_DPI_H_ */
