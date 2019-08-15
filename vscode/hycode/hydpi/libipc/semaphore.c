/****************************************************************************** 

��Ȩ���У�C����2001-2015�꣬����Ƽ��ɷ����޹�˾

******************************************************************************
�ļ���:       semaphore.c
�����ʽ:     ASCII
����:         chenbin
����:         Sep 8, 2016
��ʷ:
    1.����    :Sep 8, 2016
      ����    :cb
      �޸�    :Created file
******************************************************************************/

#include "semaphore.h"

typedef struct
{
    int sem_id;         /*��ʼֵΪ-1*/
    key_t sem_key;      /*keyֵΨһ*/
}dpi_sem_t;

dpi_sem_t *dpi_sem = NULL;

 /* �����ź��� */
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

/* ��ȡ�Ѵ������ź���ID */
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

/* ɾ���ź���*/
dpi_code_t destroy(int semid)
{
    semctl(semid, 0, IPC_RMID);
    return DPI_OK;
}

/* �ź�����P������ʹ���ź�����ֵ��1 */
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

/* �ź�����v������ʹ���ź�����ֵ��1 */
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
