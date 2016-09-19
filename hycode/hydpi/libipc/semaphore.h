/****************************************************************************** 

��Ȩ���У�C����2001-2015�꣬����Ƽ��ɷ����޹�˾

******************************************************************************
�ļ���:       semaphore.h
�����ʽ:     ASCII
����:         chenbin
����:         Sep 8, 2016
��ʷ:
    1.����    :Sep 8, 2016
      ����    :cb
      �޸�    :Created file
******************************************************************************/
#ifndef LIBIPC_SEMAPHORE_H_
#define LIBIPC_SEMAPHORE_H_

#include "../common/dpi_errno.h"
#include <sys/sem.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define  RESOURCE_COUNT  1    /* ��Դ�� */

union semun
{
    int val;                  /* value for SETVAL */
    struct semid_ds *buf;     /* buffer for IPC_STAT, IPC_SET */
    unsigned short *array;    /* array for GETALL, SETALL */
                              /* Linux specific part: */
    struct seminfo *__buf;    /* buffer for IPC_INFO */
};

/* �����ź��� */
dpi_code_t sem_service_init(key_t  key, int *sem_id);

/* ��ȡ�Ѵ������ź���ID */
dpi_code_t sem_client_init(key_t  key, int *sem_id);

/* ɾ���ź���*/
dpi_code_t destroy(int semid);

/* �ź�����P������ʹ���ź�����ֵ��1 */
dpi_code_t sem_p(int sem_id);

/* �ź�����v������ʹ���ź�����ֵ��1 */
dpi_code_t sem_v(int sem_id);

#endif /* LIBIPC_SEMAPHORE_H_ */
