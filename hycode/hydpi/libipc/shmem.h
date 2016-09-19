/****************************************************************************** 

版权所有（C），2001-2015年，恒扬科技股份有限公司

******************************************************************************
文件名:       shmem.h
编码格式:     ASCII
作者:         chenbin
创建:         Aug 31, 2016
历史:
    1.日期    :Aug 31, 2016
      作者    :cb
      修改    :Created file
******************************************************************************/
#ifndef LIBIPC_SHMEM_H_
#define LIBIPC_SHMEM_H_


#include <sys/shm.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "semaphore.h"


typedef struct{
    int     id;         /*共享内存标识符，每个进程在创建或挂载时候都有获取*/
    int     size;       /*shm大小*/
    void   *addr;       /*shm首地址*/
    int    sem_id;      /*对应的信号量id*/
}dpi_shm_t;

typedef enum
{
    KEY_IFGRP     = 0,
    KEY_STAT      = 1,
    KEY_DPI_RLT   = 2,
    KYE_PKT_BUF01 = 3,
    KYE_PKT_BUF02 = 4,
    KYE_PKT_BUF03 = 5,
    KYE_PKT_BUF04 = 6,
    KYE_PKT_BUF05 = 7,
    KYE_PKT_BUF06 = 8,
    KYE_PKT_BUF07 = 9,
    KYE_PKT_BUF08 = 10,
    KYE_PKT_BUF09 = 11,
    KYE_PKT_BUF10 = 12,
    KYE_PKT_BUF11 = 13,
    KYE_PKT_BUF12 = 14,
    KYE_PKT_BUF13 = 15,
    KYE_PKT_BUF14 = 16,
    KYE_PKT_BUF15 = 17,
    KYE_PKT_BUF16 = 18,
    KEY_MAX
}shm_key_type_t;

/*通用的共享内存调用接口*/
dpi_code_t dpi_shm_data_init(shm_key_type_t key, size_t __size);
dpi_code_t dpi_shm_data_set(shm_key_type_t key, void *psrc, int offset, int src_len);
dpi_code_t dpi_shm_data_get(shm_key_type_t key, void *pdst, int offset, int dst_len);

/*给sdk专门调用的获取数据包的接口*/
dpi_code_t dpi_sdk_shm_data_set(shm_key_type_t key, void *psrc, int offset, int src_len);
dpi_code_t dpi_sdk_shm_data_get(shm_key_type_t key, void *pdst, int offset, int dst_len);

#endif /* LIBIPC_SHMEM_H_ */
