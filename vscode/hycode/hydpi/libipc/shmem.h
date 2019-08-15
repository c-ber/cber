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
#include <stdint.h>
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



/******************************************************************************
 * 函数名称    : dpi_shm_data_init
 * 功能        : 共享内存初始化
 * 参数        : key  : 共享内存key值，详见shm_key_type_t枚举类型，
 *                     各个模块均有定义自己的key值
 *               __size  :共享内存的总长度，一般取结构体的总字节数
 *
 * 返回        : 错误码，查找成功返回DPI_OK,失败返回DPI_FAIL
******************************************************************************/
dpi_code_t dpi_shm_data_init(shm_key_type_t key, size_t __size);





/******************************************************************************
 * 函数名称    : dpi_shm_data_set
 * 功能        : 设置共享内存中指定的字段值
 * 参数        : key  : 共享内存key值，详见shm_key_type_t枚举类型，
 *                     各个模块均有定义自己的key值
 *               psrc  :要修改的内容的地址
 *               offset : 要修改的内容在整个共享内存中的偏移位置
 *               dst_len: 要修改的内容的长度
 * 返回        : 错误码，查找成功返回DPI_OK,失败返回DPI_FAIL
******************************************************************************/
dpi_code_t dpi_shm_data_set(shm_key_type_t key, void *psrc, int offset, int src_len);






/******************************************************************************
 * 函数名称    : dpi_shm_data_get
 * 功能        : 获取共享内存中指定的字段值
 * 参数        : key  : 共享内存key值，详见shm_key_type_t枚举类型，
 *                     各个模块均有定义自己的key值
 *               pdst  :存放从共享内存获取内容的空间地址
 *               offset : 要获取的内容在整个共享内存中的偏移位置
 *               dst_len: 要获取的内容的长度
 * 返回        : 错误码，查找成功返回DPI_OK,失败返回DPI_FAIL
******************************************************************************/
dpi_code_t dpi_shm_data_get(shm_key_type_t key, void *pdst, int offset, int dst_len);



/******************************************************************************
 * 函数名称    : dpi_shm_data_inc
 * 功能        : 对共享内存中指定的字段值进行加N操作
 * 参数        : key  : 共享内存key值，详见shm_key_type_t枚举类型，
 *                     各个模块均有定义自己的key值
 *               offset : 要获取的内容在整个共享内存中的偏移位置
 *               src_len: 设置的内容的长度，仅支持1字节，2字节，4,字节，8字节的类型
  *              va     :  N值
 * 返回        : 错误码，查找成功返回DPI_OK,失败返回DPI_FAIL
******************************************************************************/
dpi_code_t dpi_shm_data_inc(shm_key_type_t key, int offset, int src_len, int va);

/*给sdk专门调用的获取数据包的接口*/
dpi_code_t dpi_sdk_shm_data_set(shm_key_type_t key, void *psrc, int offset, int src_len);
dpi_code_t dpi_sdk_shm_data_get(shm_key_type_t key, void *pdst, int offset, int dst_len);

#endif /* LIBIPC_SHMEM_H_ */
