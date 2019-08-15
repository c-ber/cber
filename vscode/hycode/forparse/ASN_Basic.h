/*-----------------------------------------------------------------------------
 文件名  : Asn_Basic.h
 作者    : ruansong
 版本    : v1.0
 完成日期: 2016-01-19
 文件描述: ASN.1 － 基本类型，值的定义( X.680-X.683, X.691 )
 备注    :
 修改历史:
 1.修改者: ruansong
 时间    : 2016.01.19
 版本    : v1.0
 修改原因: 创建此文件
 2...
-----------------------------------------------------------------------------*/
#ifdef __cplusplus
extern "C" {
#endif
/*---------------------------------------------------------------------------*/
#ifndef _ASN_BASIC_H__
#define _ASN_BASIC_H__


/*---------------------------------------------------------------------------*/

/*--------------功能编译开关--------------*/
#define H323_CHECK_CODE         0               /* 是否保存文件做协议编解码的检查 */

typedef int                      BooL;
typedef unsigned int            _UINT;
typedef int                     _INT;

typedef unsigned long           _U32;
typedef unsigned short          _U16;
typedef unsigned char           _U8;
typedef int                     _BOOL;

#define NULL_PTR                NULL
#define NULL_BYTE               0xFF
#define NULL_WORD               0xFFFF
#define NULL_DWORD              0xFFFFFFFF
#ifndef  UINT_MAX
#define UINT_MAX                0xFFFFFFFF
#endif

#ifndef IN
#define  IN
#endif

#ifndef OUT
#define  OUT
#endif

//extern char*  H323APP_CurFileName(const char *pchSrcFileName);
//extern void* TEMP_Malloc( _U16 usPid, _U32 ulOption, _U32 ulSize, const _S8 *pFileName, _U32 ulLine);
/*---------------------------通用类型部分声明结束----------------------------*/
/*---------------------------进程通信部分声明--------------------------------*/
//    #define PID_H323_MAIN                           PID_H323MAIN
//    #define PID_H323_COM                            PID_H323COM
/*---------------------------进程通信部分声明结束----------------------------*/
/*---------------------------内存管理部分声明--------------------------------*/


/*=================================类型定义==================================*/
typedef unsigned char       NullType;       /*  空类型: X.680:3.6.44 */
typedef unsigned long	    INTEGER;        /* 整数类型,二进制补码表示: X.680:3.6.41 */
typedef struct                              /* 八位字节字符串: X.680:3.6.49 */
{
    unsigned int            ulLength;       /* 长度 */
    char                    *octets;        /* 字节内容 */
}OctetString;
typedef struct                              /* 对象标识: X.680:3.6.47 */
{
    unsigned int            ulLength;       /* 长度 */
    unsigned long           *subidentifiers;/* 对象值内容 */
}ObjectIdentifier;
typedef struct                              /* 普通字符串: X.680:37.1 */
{
    unsigned int            ulLength;       /* 长度 */
    char                    *octets;        /* 字符内容 */
}GeneralString;
typedef struct                              /* BMP字符串: X.680:37.15 */
{
    unsigned int            ulLength;       /* 长度 */
    unsigned short          *octets;        /* 字节内容 */
}BMPString;

typedef OctetString         IA5String;      /* IA5字符串: X.680:37.1 */
typedef OctetString         NumericString;  /* 数字型字符串: X.680:37.1 表7 */
typedef OctetString         PrintableString;/* printable型字符串: X.680:37.1 表8 */
typedef OctetString         BitString;      /* bit型字符串: X.680:3.6.6 */

#define ASN1_DEBUG 0
#if ASN1_DEBUG
#define CODE_ERROR(fmt, _arg...)   printf("(%s) .%d :" fmt ,__func__, __LINE__, ##_arg )
#else
#define CODE_ERROR(fmt, _arg...)
#endif

/*---------------------------------------------------------------------------*/
#endif  /* _ASN_BASIC_H__ */
/*---------------------------------------------------------------------------*/
#ifdef __cplusplus
}
#endif
/*---------------------------------------------------------------------------*/
