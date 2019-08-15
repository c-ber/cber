/*
**  semp-errno.h
**  Copyright (c) 2014-2020  Semptian Inc.
**  KEYWORDS: {result code definitions}
*/
#ifndef __SEMP_GENERIC_ERRNO_BASE_H__
#define __SEMP_GENERIC_ERRNO_BASE_H__


typedef enum {
    DPI_OK                       = 0, /* 成功 */
    DPI_ERROR                    = 1, /* 错误 */
                                 
    DPI_OUT_RANGE                = 3, /* 超过范围*/  
    DPI_PARAM_ERR                = 4, /* 参数错误 */
                                 
    DPI_READ_ONLY                = 5, /* 文件只读 */
    DPI_NO_PERM                  = 6, /* 没有访问权限 */
    DPI_LOCKED                   = 7, /* 访问空间被锁 */
    DPI_CANT_OPEN                = 8, /* 不能打开 */
    DPI_TIMEOUT                  = 9, /* 操作超时 */
    DPI_BUSY                     = 10,/* 操作正在运行 */
    DPI_FAIL                     = 11,/* 操作失败 */
                                
    DPI_TABLE_EMPTY              = 12,/* 空表操作 */
    DPI_TABLE_FULL               = 13,/* 表项已满 */
    DPI_NOT_FOUND                = 14,/* 表项未找到 */
    DPI_CELL_FOUND               = 15,/* 表项已找到 */
                                   
    DPI_MEM_ERR                  = 16, /* 内存错误*/
    DPI_NULL_POINT               = 17, /* 空指针错误 */
    DPI_MEM_FAIL                 = 18, /* 内存分配失败 */  
    DPI_SPACE_NOT_ENOUGH         = 19, /* 指针指向的空间不够 */
                                 
    DPI_INTERNAT                 = 20, /* 内部错误 */
    DPI_INIT_ERR                 = 21, /* 初始化错误 */
    DPI_NO_LOG_READ              = 22, /* 没有可读日志 */
    DPI_HDWARE_ERR               = 23, /* 硬件错误 */   
    DPI_INTERRUPT                = 24, /* IO错误 */
    DPI_NOTICE                   = 25, /* 提示 */
    DPI_WARNING                  = 26, /* 告警 */
    DPI_INVALID_PACKET           = 27, /* 不考虑的报文 */
    DPI_UNSUPPORT                = 28, /* 不支持 */ 

    DPI_E_PARAM                  = 29, /* Invalid parameter */
    DPI_E_NOT_VLAN_PKT           = 30,

    DPI_SHM_ATTACH_FAIL          = 31, /*连接共享内存失败*/
    DPI_SHM_DETACH_FAIL          = 32  /*释放共享内存失败*/

}dpi_code_t;


#endif

