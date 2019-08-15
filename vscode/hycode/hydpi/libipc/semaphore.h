/****************************************************************************** 

版权所有（C），2001-2015年，恒扬科技股份有限公司

******************************************************************************
文件名:       semaphore.h
编码格式:     ASCII
作者:         chenbin
创建:         Sep 8, 2016
历史:
    1.日期    :Sep 8, 2016
      作者    :cb
      修改    :Created file
******************************************************************************/
#ifndef LIBIPC_SEMAPHORE_H_
#define LIBIPC_SEMAPHORE_H_

#include "../common/dpi_errno.h"
#include <sys/sem.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define  RESOURCE_COUNT  1    /* 资源数 */

union semun
{
    int val;                  /* value for SETVAL */
    struct semid_ds *buf;     /* buffer for IPC_STAT, IPC_SET */
    unsigned short *array;    /* array for GETALL, SETALL */
                              /* Linux specific part: */
    struct seminfo *__buf;    /* buffer for IPC_INFO */
};

/* 创建信号量 */
dpi_code_t sem_service_init(key_t  key, int *sem_id);

/* 获取已创建的信号量ID */
dpi_code_t sem_client_init(key_t  key, int *sem_id);

/* 删除信号量*/
dpi_code_t destroy(int semid);

/* 信号量的P操作，使得信号量的值加1 */
dpi_code_t sem_p(int sem_id);

/* 信号量的v操作，使得信号量的值减1 */
dpi_code_t sem_v(int sem_id);

#endif /* LIBIPC_SEMAPHORE_H_ */
