/*
*   semp-errno.h
*   Created by Tsihang < qihang@semptian.com >
*   Copyright (c) 2014-2020  Semptian Inc.
*/

#ifndef __SEMP_GENERIC_ERRNO_BASE_H__
#define __SEMP_GENERIC_ERRNO_BASE_H__


typedef enum {
    MP_OK                   = 0,           /* 正常返回 */
    MP_PARSE_RLT            = 100,         /* 协议解析结果错误 */
    MP_TABLE_EMPTY          = 101,         /* 空表操作 */
    MP_TABLE_FULL           = 102,         /* 表项已满 */
    MP_NOT_FOUND            = 103,         /* 表项未找到 */
    MP_CELL_FOUND           = 104,         /* 表项已找到 */
    MP_FUN_PARAM_ERR        = 105,         /* 函数参数非法 */
    MP_NULL_POINT           = 106,         /* 空指针错误 */
    MP_SPACE_NOT_ENOUGH     = 107,         /* 指针指向的地址空间不够 */
    MP_NON_BCD_FORMAT       = 108,         /* 非BCD格式 */
    MP_NO_LOG_READ          = 109,         /* 当前没有可读日志 */
    MP_RELATE_SUCCESS       = 110,         /* gtpu关联成功 */
    MP_EXCEPTION_STAT       = 111,         /* 未建表的异常关联情况 */
    MP_FAIL                 = 255          /* 正常处理中的错误返回 */
}mp_code_t;


typedef enum mp_error_e{
    MP_E_NONE                 = 0,          /* OK */
    MP_E_INTERNAL             = -1,         /* Internal error */ 
    MP_E_MEMORY               = -2,         /* Out of memory */
    MP_E_UNIT                 = -3,         /* Invalid unit */
    MP_E_PARAM                = -4,         /* Invalid parameter */
    MP_E_EMPTY                = -5,         /* Table empty */
    MP_E_FULL                 = -6,         /* Table full */
    MP_E_NOT_FOUND            = -7,         /* Entry not found */
    MP_E_EXISTS               = -8,         /* Entry exists */
    MP_E_TIMEOUT              = -9,         /* Operation timed out */
    MP_E_BUSY                 = -10,        /* Operation still running */
    MP_E_FAIL                 = -11,        /* Operation failed */
    MP_E_DISABLED             = -12,        /* Operation disabled */
    MP_E_BADID                = -13,        /* Invalid identifier */
    MP_E_RESOURCE             = -14,        /* No resources for operation */
    MP_E_CONFIG               = -15,        /* Invalid configuration */
    MP_E_UNAVAIL              = -16,        /* Feature unavailable */
    MP_E_INIT                 = -17,        /* Feature not initialized */
    MP_E_PORT                 = -18,        /* Invalid port */
    MP_E_EXCEED               = -19,        /* exceed range */
    MP_E_EINVAL               = -20,        /* Invalid argument */
    MP_E_AVP_EINVAL           = -21,        /*invalid avp*/
    MP_E_RAND_EINVAL          = -22,        /*invalid rand */
    MP_E_KASME_EINVAL         = -23,        /*invalid kasme */
    MP_E_NOT_VLAN_PKT         = -24,        /*in packet without vlan tag*/
    MP_E_LIMIT                = -25 ,       /* Unknown error, Must come last */ 
    MP_E_INVALID_PACKET       = -26,        /*The packet we don't care*/
} mp_error_t;

#define MP_E_SUCCESS(rv)              ((rv) >= 0)
#define MP_E_FAILURE(rv)              ((rv) < 0)


#define STDIO_RENDERING_STD_ERROR(func) \
{ \
    int rv; \
    rv = func;\
    if (rv)\
    {   \
        return rv; \
    } \
}
#endif

