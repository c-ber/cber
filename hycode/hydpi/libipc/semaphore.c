/****************************************************************************** 

版权所有（C），2001-2015年，恒扬科技股份有限公司

******************************************************************************
文件名:       semaphore.c
编码格式:     ASCII
作者:         chenbin
创建:         Sep 8, 2016
历史:
    1.日期    :Sep 8, 2016
      作者    :cb
      修改    :Created file
******************************************************************************/

#include "semaphore.h"

typedef struct
{
    int sem_id;         /*初始值为-1*/
    key_t sem_key;      /*key值唯一*/
}dpi_sem_t;

dpi_sem_t *dpi_sem = NULL;

 /* 创建信号量 */
dpi_code_t sem_service_init(key_t  key, int *sem_id)
{
    union semun sem_union;
    sem_union.val = RESOURCE_COUNT;

    *sem_id = semget(key, 1, IPC_CREAT | 0666);
    if (-1 == *sem_id)
    {
        printf("Create semaphore error\n");
        return DPI_FAIL;
    }

    if( -1 != semctl(*sem_id, 0, SETVAL, sem_union))
    {
        return DPI_OK;
    }
    else
    {
        return DPI_FAIL;
    }
}

/* 获取已创建的信号量ID */
dpi_code_t sem_client_init(key_t  key, int *sem_id)
{
   *sem_id = semget(key, 0, 0);
   if (-1 == *sem_id)
   {
       printf("Get semaphore ID error\n");
       return DPI_FAIL;
   }

   return DPI_OK;
}

/* 删除信号量*/
dpi_code_t destroy(int semid)
{
    semctl(semid, 0, IPC_RMID);
    return DPI_OK;
}

/* 信号量的P操作，使得信号量的值加1 */
dpi_code_t sem_p(int sem_id)
{
    struct sembuf sem_b= { 0, -1, SEM_UNDO };

    if( -1 != semop(sem_id, &sem_b, 1) )
    {
        return DPI_OK;
    }
    else
    {
        return DPI_FAIL;
    }
}

/* 信号量的v操作，使得信号量的值减1 */
dpi_code_t sem_v(int sem_id)
{
    int source = -1;
    source = semctl( sem_id, 0, GETVAL,NULL );
    if(source >= RESOURCE_COUNT)
    {
        return DPI_OK;
    }
    struct sembuf sem_b = {0, +1, SEM_UNDO};

    if( -1 != semop(sem_id, &sem_b, 1))
    {
        return DPI_OK;
    }
    else
    {
        return DPI_FAIL;
    }
}
