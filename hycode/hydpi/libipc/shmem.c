/****************************************************************************** 

版权所有（C），2001-2015年，恒扬科技股份有限公司

******************************************************************************
文件名:       shmem.c
编码格式:     ASCII
作者:         chenbin
创建:         Aug 31, 2016
历史:
    1.日期    :Aug 31, 2016
      作者    :cb
      修改    :Created file
******************************************************************************/

#include "shmem.h"

/*
  shmget(  )  创建一个新的共享内存区段
              取得一个共享内存区段的描述符
  shmctl(  )  取得一个共享内存区段的信息
              为一个共享内存区段设置特定的信息
              移除一个共享内存区段
  shmat(  )   挂接一个共享内存区段
  shmdt(  )   于一个共享内存区段的分离
 */


//开辟一块共享内存
int hy_shmget(key_t key, size_t shm_size, int shmflg)
{
    if( shm_size == 0 )
    {
        return 0;
    }

    return shmget(key, shm_size, shmflg);
}

//设置共享内存
int hy_shmctl(int __shmid, int __cmd, struct shmid_ds *__buf)
{
    return shmctl(__shmid, __cmd, __buf);
}


//连接共享内存
void * hy_shmat(int __shmid, __const void *__shmaddr, int __shmflg)
{
    return shmat(__shmid, __shmaddr, __shmflg);
}

//分离共享内存，并不删除
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

/*连接共享内存*/
dpi_code_t _dpi_shm_attach(shm_key_type_t key)
{
    shm[key].addr = shmat(shm[key].id, NULL, 0);
    if( NULL == shm[key].addr)
    {
        return DPI_SHM_ATTACH_FAIL;
    }
    return DPI_OK;
}

/*如果去连接失败，需要查明原因，否则导致连接未释放，造成共享内存无法使用*/
dpi_code_t _dpi_shm_detach(shm_key_type_t key)
{
    if( shm[key].addr != NULL && shm[key].addr != (void *)-1 )
    {
        if(0 != shmdt( shm[key].addr ))
        {
            return DPI_SHM_DETACH_FAIL;
        }
        //shm[key].id = -1;//这里如果置位导致无法再连接
        shm[key].addr = NULL;
    }
    return DPI_OK;
}


/*共享内存初始化函数*/
dpi_code_t dpi_shm_data_init(shm_key_type_t key, size_t __size)
{
    if( -1 != shm[key].id )
    {
        return DPI_OK;
    }

    //创建共享内存或者获取共享内存
    shm[key].id = shmget((key_t)key+100, __size, 0666|IPC_CREAT);

    printf("shm[key].id = %d \n", shm[key].id);
    if(shm[key].id == -1)
    {
        printf("shmget failed!\n");
        return DPI_FAIL;
    }

    /*初始化信号量*/
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
/**********************给sdk专门调用的获取数据包的接口**************************/
/*****************************************************************************/
typedef enum
{
    PKT_INIT_DEFAULT  = 0,     /*初始化默认值*/
    PKT_STATUS_ARRIVE = 1,     /*有新的数据到来*/
    PKT_STATUS_USED   = 2,     /*数据已经被进程取走使用*/
}pkt_status_t;

/*内部函数处理*/
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

    /* 获取数据标志，取完并置标志位 */
    pkt_status_t *ps = (pkt_status_t *)(((char*)shm[key].addr) + offset);

    /*如果上一个报文还没取走，就丢弃这个包*/
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

/*这里的offset是专门用于标志位的偏移，与前面的有区别*/
dpi_code_t dpi_sdk_shm_data_set(shm_key_type_t key, void *psrc, int offset, int src_len)
{
    return _dpi_shm_data_set(key, psrc, offset, src_len);
}

/*内部函数处理*/
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

    /* 获取数据标志，取完并置标志位 */
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

/*这里的offset是专门用于标志位的偏移，与前面的有区别*/
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
