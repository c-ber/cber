/*-----------------------------------------------------------------------------
 文件名  : ASN_PrimCode.h
 作者    : ruansong
 版本    : v1.0
 完成日期: 2016-01-19
 文件描述: ASN.1－ASN基本的编解码处理部分头文件
 备注    : 基本类型的编解码实现: S1-AP使用PER规则
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
#ifndef _ASN_PRIMCODE_H__
#define _ASN_PRIMCODE_H__
/*---------------------------------------------------------------------------*/

#include "ASN_BitOpr.h"

/*=================================类型定义==================================*/

/*==================================宏定义===================================*/
/* 基本类型的PER编解码需要申请内存操作的宏定义 */
//#define ASN_PrimMalloc(ID, SIZE)    H323_MALLOC( PID_RANAP, ROS_MEM_ALLOC_OPT_NONE, SIZE )
/* 内存申请参数说明:    P1 = 模块ID | 类型ID            */
/*                      P2 = 申请内存长度               */
/* 模块ID[32位高16位]:  基本PER编解码模块 : 0X02000000  */
/*                      特殊PER编解码模块 : 0X03000000  */
/*                      H245编解码模块    : 0X01000000  */
/* 类型ID[32位低16位]:  各模块自己分配                  */

/* 基本编解码模块占用的申请内存标识: 模块ID+类型ID的宏定义 */
#define mid_ctr_prim            0x02000000          /* 基本PER编解码模块标识 */
#define sid_ctr_ROCTETS         0x0001              /* 基本PER编解码模块-字节串类型 */
#define sid_ctr_RDTMFS          0x0002              /* 基本PER编解码模块-DTMF串类型 */
#define sid_ctr_RBMPS           0x0003              /* 基本PER编解码模块-BMP串类型 */
#define sid_ctr_RIA5S           0x0004              /* 基本PER编解码模块-IA5串类型 */
#define sid_ctr_RSOCTETS        0x0005              /* 基本PER编解码模块-短字节串类型 */

/*===============================函数原型定义================================*/
void PER_EncodeBoolean(
        IN      ST_BITPOINTER       *ptr,
        IN      int                 value );

int PER_DecodeBoolean(
        IN      ST_BITPOINTER       *ptr );

void PER_EncodeConstrainedWhole(
        IN      ST_BITPOINTER       *ptr,
        IN      unsigned long       range,
        IN      unsigned long       value );

unsigned int PER_DecodeConstrainedWhole(
        IN      ST_BITPOINTER       *ptr,
        IN      unsigned long       range );

void PER_EncodeLengthDeterminant(
        IN      ST_BITPOINTER       *ptr,
        IN      unsigned long       ulLength );

unsigned int PER_DecodeLengthDeterminant(
        IN      ST_BITPOINTER       *ptr  );

void PER_EncodeNormallySmallWhole(
        IN      ST_BITPOINTER       *ptr,
        IN      unsigned long       value );

unsigned int PER_DecodeNormallySmallWhole(
        IN      ST_BITPOINTER       *ptr );

void PER_EncodeSemiConstrainedWhole(
        IN      ST_BITPOINTER       *ptr,
        IN      unsigned long       value );

unsigned int PER_DecodeSemiConstrainedWhole(
        IN      ST_BITPOINTER       *ptr );

#if 0
void PER_EncodeRawOctetString(
        IN      ST_BITPOINTER       *ptr,
        IN      char                *octets,
        IN      unsigned int        ulLength );

char *PER_DecodeRawOctetString(
        IN      ST_BITPOINTER       *ptr,
        IN      unsigned int        ulLength );

void PER_EncodeRawDTMFString(
        IN      ST_BITPOINTER       *ptr,
        IN      char                *octets,
        IN      unsigned int        ulLength );

char* PER_DecodeRawDTMFString(
        IN      ST_BITPOINTER       *ptr,
        IN      unsigned int        ulLength );

void PER_EncodeRawBMPString(
        IN      ST_BITPOINTER       *ptr,
        IN      unsigned short      *octets,
        IN      unsigned int        ulLength );

unsigned short* PER_DecodeRawBMPString(
        IN      ST_BITPOINTER       *ptr,
        IN      unsigned int        ulLength );

void PER_EncodeRawIA5String(
        IN      ST_BITPOINTER       *ptr,
        IN      char                *octets,
        IN      unsigned int        ulLength,
        IN      unsigned int        bit_length );

char* PER_DecodeRawIA5String(
        IN      ST_BITPOINTER       *ptr,
        IN      unsigned int        ulLength,
        IN      unsigned int        bit_length );

void PER_EncodeRawShortOctetString(
        IN      ST_BITPOINTER       *ptr,
        IN      char                *octets,
        IN      unsigned int        ulLength );

char *PER_DecodeRawShortOctetString(
        IN      ST_BITPOINTER       *ptr,
        IN      unsigned int        ulLength );

void PER_EncodeOctetString(
        IN      ST_BITPOINTER       *ptr,
        IN      char                *octets,
        IN      unsigned int        ulLength );

char *PER_DecodeOctetString(
        IN      ST_BITPOINTER       *ptr,
        OUT     unsigned int        *ulLength );

void PER_EncodeConstrainedOctetString(
        IN      ST_BITPOINTER       *ptr,
        IN      char                *octets,
        IN      unsigned int        ulLength,
        IN      unsigned int        range,
        IN      unsigned int        bottom );

char *PER_DecodeConstrainedOctetString(
        IN      ST_BITPOINTER       *ptr,
        OUT     unsigned int        *ulLength,
        IN      unsigned int        range,
        IN      unsigned int        bottom );

int PER_DecodeExtendConstrainedWhole(
        IN      ST_BITPOINTER       *ptr,
        IN      int                 lb,
        IN      int                 ub );

void PER_EncodeExtendConstrainedWhole(
        IN      ST_BITPOINTER       *ptr,
        IN      int                 lb,
        IN      int                 ub,
        IN      int                 value );

int PER_DecodeUnConstrainedWhole(
        IN      ST_BITPOINTER       *ptr );

void PER_EncodeUnConstrainedWhole(
        IN      ST_BITPOINTER       *ptr,
        IN      int                 value );
#endif
unsigned int PER_FuncGetOctetsLen(
        IN      unsigned long       value );

/*---------------------------------------------------------------------------*/
#endif  /* _ASN_PRIMCODE_H__ */
/*---------------------------------------------------------------------------*/
#ifdef __cplusplus
}
#endif
/*---------------------------------------------------------------------------*/
