/*
*   semp-errno.h
*   Created by Tsihang < qihang@semptian.com >
*   Copyright (c) 2014-2020  Semptian Inc.
*/

#ifndef __SEMP_GENERIC_ERRNO_BASE_H__
#define __SEMP_GENERIC_ERRNO_BASE_H__


typedef enum {
    MP_OK                   = 0,          /* �������� */
    MP_PARSE_RLT            = 36,         /* Э������������ */
    MP_TABLE_EMPTY          = 37,         /* �ձ���� */
    MP_TABLE_FULL           = 38,         /* �������� */
    MP_NOT_FOUND            = 39,         /* ����δ�ҵ� */
    MP_CELL_FOUND           = 40,         /* �������ҵ� */
    MP_FUN_PARAM_ERR        = 41,         /* ���������Ƿ� */
    MP_NULL_POINT           = 42,         /* ��ָ����� */
    MP_SPACE_NOT_ENOUGH     = 43,         /* ָ��ָ��ĵ�ַ�ռ䲻�� */
    MP_NON_BCD_FORMAT       = 44,         /* ��TBCD��ʽ */
    MP_FAIL                 = 0xff        /* ���������еĴ��󷵻� */
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

    MP_E_LIMIT                = -21 ,          /* Unknown error, Must come last */
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

