/****************************************************************************** 

��Ȩ���У�C����2001-2015�꣬����Ƽ��ɷ����޹�˾

******************************************************************************
�ļ���:       shmem.c
�����ʽ:     ASCII
����:         chenbin
����:         Aug 31, 2016
��ʷ:
    1.����    :Aug 31, 2016
      ����    :cb
      �޸�    :Created file
******************************************************************************/

#include "shmem.h"

/*
  shmget(  )  ����һ���µĹ����ڴ�����
              ȡ��һ�������ڴ����ε�������
  shmctl(  )  ȡ��һ�������ڴ����ε���Ϣ
              Ϊһ�������ڴ����������ض�����Ϣ
              �Ƴ�һ�������ڴ�����
  shmat(  )   �ҽ�һ�������ڴ�����
  shmdt(  )   ��һ�������ڴ����εķ���
 */


//����һ�鹲���ڴ�
int hy_shmget(key_t key, size_t shm_size, int shmflg)
{
    if( shm_size == 0 )
    {
        return 0;
    }

    return shmget(key, shm_size, shmflg);
}

//���ù����ڴ�
int hy_shmctl(int __shmid, int __cmd, struct shmid_ds *__buf)
{
    return shmctl(__shmid, __cmd, __buf);
}


//���ӹ����ڴ�
void * hy_shmat(int __shmid, __const void *__shmaddr, int __shmflg)
{
    return shmat(__shmid, __shmaddr, __shmflg);
}

//���빲���ڴ棬����ɾ��
int hy_shmdt(__const void *__shmaddr)
{
    return shmdt(__shmaddr);
}


dpi_shm_t  shm[KEY_MAX] = {
        {-1, 0, NULL, -1},
        {-1, 0, NULL, -1},
        {-1, 0, NULL, -1},
        {-1, 0, NULL, -1},
        {-1, 0, NULL, -1},
        {-1, 0, NULL, -1},
        {-1, 0, NULL, -1},
        {-1, 0, NULL, -1},
        {-1, 0, NULL, -1},
        {-1, 0, NULL, -1},
        {-1, 0, NULL, -1},
        {-1, 0, NULL, -1},
        {-1, 0, NULL, -1},
        {-1, 0, NULL, -1},
        {-1, 0, NULL, -1},
        {-1, 0, NULL, -1},
        {-1, 0, NULL, -1},
        {-1, 0, NULL, -1},
        {-1, 0, NULL, -1},
};

/*���ӹ����ڴ�*/
dpi_code_t _dpi_shm_attach(shm_key_type_t key)
{
    shm[key].addr = shmat(shm[key].id, NULL, 0);
    if( NULL == shm[key].addr)
    {
        return DPI_SHM_ATTACH_FAIL;
    }
    return DPI_OK;
}

/*���ȥ����ʧ�ܣ���Ҫ����ԭ�򣬷���������δ�ͷţ���ɹ����ڴ��޷�ʹ��*/
dpi_code_t _dpi_shm_detach(shm_key_type_t key)
{
    if( shm[key].addr != NULL && shm[key].addr != (void *)-1 )
    {
        if(0 != shmdt( shm[key].addr ))
        {
            return DPI_SHM_DETACH_FAIL;
        }
        //shm[key].id = -1;//���������λ�����޷�������
        shm[key].addr = NULL;
    }
    return DPI_OK;
}


/*�����ڴ��ʼ������*/
dpi_code_t dpi_shm_data_init(shm_key_type_t key, size_t __size)
{
    if( -1 != shm[key].id )
    {
        return DPI_OK;
    }

    //���������ڴ���߻�ȡ�����ڴ�
    shm[key].id = shmget((key_t)key+100, __size, 0666|IPC_CREAT);

    printf("shm[key].id = %d \n", shm[key].id);
    if(shm[key].id == -1)
    {
        printf("shmget failed!\n");
        return DPI_FAIL;
    }

    /*��ʼ���ź���*/
    sem_service_init(key+100, &(shm[key].sem_id));

    _dpi_shm_attach(key);

    return DPI_OK;
}


dpi_code_t _dpi_shm_data_get(shm_key_type_t key, void *pdst, int offset, int dst_len)
{
    if ( (void *) -1 == shm[key].addr )
    {
        return DPI_FAIL;
    }

    if ( NULL == shm[key].addr )
    {
        return DPI_FAIL;
    }

    if( sem_p(shm[key].sem_id) )
    {
        return DPI_FAIL;
    }
    memcpy(pdst, shm[key].addr + offset, dst_len);

    if( sem_v(shm[key].sem_id) )
    {
        return DPI_FAIL;
    }

    return DPI_OK;
}

dpi_code_t dpi_shm_data_get(shm_key_type_t key, void *pdst, int offset, int dst_len)
{
    return _dpi_shm_data_get(key, pdst, offset, dst_len);
}



dpi_code_t _dpi_shm_data_set(shm_key_type_t key, void *psrc, int offset, int src_len)
{
    if ( (void *) -1 == shm[key].addr )
    {
        return DPI_FAIL;
    }

    if ( NULL == shm[key].addr )
    {
        return DPI_FAIL;
    }

    if( sem_p(shm[key].sem_id) )
    {
        return DPI_FAIL;
    }

    memcpy(shm[key].addr + offset, psrc, src_len);

    if( sem_v(shm[key].sem_id) )
    {
        return DPI_FAIL;
    }
    return DPI_OK;
}

dpi_code_t dpi_shm_data_set(shm_key_type_t key, void *psrc, int offset, int src_len)
{
    return _dpi_shm_data_set(key, psrc, offset, src_len);
}


dpi_code_t _dpi_shm_data_inc(shm_key_type_t key, int offset, int src_len, int va)
{
    if ( (void *) -1 == shm[key].addr )
    {
        return DPI_FAIL;
    }

    if ( NULL == shm[key].addr )
    {
        return DPI_FAIL;
    }

    if( sem_p(shm[key].sem_id) )
    {
        return DPI_FAIL;
    }

    switch(src_len)
    {
        case 1:
            (*(((uint8_t *)(((uint8_t *)shm[key].addr) + offset)))) += va;
            break;
        case 2:
            (*(((uint16_t *)(((uint8_t *)shm[key].addr) + offset)))) += va;
            break;
        case 4:
            (*(((uint32_t *)(((uint8_t *)shm[key].addr) + offset)))) += va;
            break;
        case 8:
            (*(((uint64_t *)(((uint8_t *)shm[key].addr) + offset)))) += va;
            break;
        default:
            break;
    }

    if( sem_v(shm[key].sem_id) )
    {
        return DPI_FAIL;
    }
    return DPI_OK;
}

dpi_code_t dpi_shm_data_inc(shm_key_type_t key, int offset, int src_len, int va)
{
    if( src_len != sizeof(uint8_t) &&
        src_len != sizeof(uint16_t) &&
        src_len != sizeof(uint32_t) &&
        src_len != sizeof(uint64_t) )
    {
        return DPI_PARAM_ERR;
    }
    return _dpi_shm_data_inc(key, offset, src_len, va);
}

/*****************************************************************************/
/**********************��sdkר�ŵ��õĻ�ȡ���ݰ��Ľӿ�**************************/
/*****************************************************************************/
typedef enum
{
    PKT_INIT_DEFAULT  = 0,     /*��ʼ��Ĭ��ֵ*/
    PKT_STATUS_ARRIVE = 1,     /*���µ����ݵ���*/
    PKT_STATUS_USED   = 2,     /*�����Ѿ�������ȡ��ʹ��*/
}pkt_status_t;

/*�ڲ���������*/
dpi_code_t _dpi_sdk_shm_data_set(shm_key_type_t key, void *psrc, int offset, int src_len)
{
    if ( (void *) -1 == shm[key].addr )
    {
        return DPI_FAIL;
    }

    if ( NULL == shm[key].addr )
    {
        return DPI_FAIL;
    }

    if( sem_p(shm[key].sem_id) )
    {
        return DPI_FAIL;
    }

    /* ��ȡ���ݱ�־��ȡ�겢�ñ�־λ */
    pkt_status_t *ps = (pkt_status_t *)(((char*)shm[key].addr) + offset);

    /*�����һ�����Ļ�ûȡ�ߣ��Ͷ��������*/
    if(PKT_STATUS_USED == *ps)
    {
        *ps = PKT_STATUS_ARRIVE;
        memcpy(shm[key].addr + offset, psrc, src_len);
    }

    if( sem_v(shm[key].sem_id) )
    {
        return DPI_FAIL;
    }
    return DPI_OK;
}

/*�����offset��ר�����ڱ�־λ��ƫ�ƣ���ǰ���������*/
dpi_code_t dpi_sdk_shm_data_set(shm_key_type_t key, void *psrc, int offset, int src_len)
{
    return _dpi_shm_data_set(key, psrc, offset, src_len);
}

/*�ڲ���������*/
dpi_code_t _dpi_sdk_shm_data_get(shm_key_type_t key, void *pdst, int offset, int dst_len)
{
    if ( (void *) -1 == shm[key].addr )
    {
        return DPI_FAIL;
    }

    if ( NULL == shm[key].addr )
    {
        return DPI_FAIL;
    }

    if( sem_p(shm[key].sem_id) )
    {
        return DPI_FAIL;
    }

    /* ��ȡ���ݱ�־��ȡ�겢�ñ�־λ */
    pkt_status_t *ps = (pkt_status_t *)(((char*)shm[key].addr) + offset);
    if(PKT_STATUS_ARRIVE == *ps)
    {
        *ps = PKT_STATUS_USED;
        memcpy(pdst, shm[key].addr, dst_len);
    }

    if( sem_v(shm[key].sem_id) )
    {
        return DPI_FAIL;
    }

    return DPI_OK;
}

/*�����offset��ר�����ڱ�־λ��ƫ�ƣ���ǰ���������*/
dpi_code_t dpi_sdk_shm_data_get(shm_key_type_t key, void *pdst, int offset, int dst_len)
{
    return _dpi_sdk_shm_data_get(key, pdst, offset, dst_len);
}


dpi_code_t dpi_shm_data_destory(int shm_id)
{
    shmctl( shm_id, IPC_RMID, 0 );
    return DPI_OK;
}

int test_main1()
{
    int a = 0x22;
    dpi_shm_data_init(KEY_IFGRP, sizeof(int));
    dpi_shm_data_set(KEY_IFGRP, &a, 0, sizeof(a));
    return 0;
}

int test_client1()
{
    int a = 0;
    dpi_shm_data_init(KEY_IFGRP, sizeof(a));
    dpi_shm_data_get(KEY_IFGRP, &a, 0, sizeof(a));
    //dpi_shm_data_destory(  131072);
    return 0;
}
int test_client2()
{
    int a = 0x55;
    dpi_shm_data_init(KEY_IFGRP, sizeof(a));
    dpi_shm_data_set(KEY_IFGRP, &a, 0, sizeof(a));
    //dpi_shm_data_destory(  131072);
    return 0;
}



int test_ipc(int argc,char * argv[])
{
    int value = 0;
    if( argc == 2)
    {
        sscanf(argv[1], "%d", &value);
    }

    switch(value)
    {
        case 0:
            test_main1();
            break;
        case 1:
            test_client1();
            break;
        case 2:
            test_client2();
            break;
        default:
            break;
    }

    return 0;
}
