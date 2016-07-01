/*-----------------------------------------------------------------------------
 文件名  : ASN_SpeCode.h
 作者    : ruansong
 版本    : v1.0
 完成日期: 2016-01-19
 文件描述: ASN.1－ASN特殊的编解码处理部分的头文件
 备注    : 特殊类型的编解码实现
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
#ifndef _ASN_SPECODE_H__
#define _ASN_SPECODE_H__

#include "ASN_BitOpr.h"
#include "ASN_PrimCode.h"


/*=================================类型定义==================================*/

/*==================================宏定义===================================*/
/*---------------------------------------------------------------------------*/
/* 特殊类型的PER编解码需要申请内存操作的宏定义 */
//#define Lothertps_malloc(ID, SIZE)  H323_MALLOC( PID_RANAP, ROS_MEM_ALLOC_OPT_NONE, SIZE )
/* 内存申请参数说明:    P1 = 模块ID | 类型ID            */
/*                      P2 = 申请内存长度               */
/* 模块ID[32位高16位]:  基本PER编解码模块 : 0X02000000  */
/*                      特殊PER编解码模块 : 0X03000000  */
/*                      H245编解码模块    : 0X01000000  */
/* 类型ID[32位低16位]:  各模块自己分配                  */

/* 特殊PER编解码模块占用的申请内存标识: 模块ID+类型ID的宏定义 */
#define mid_ctr_othertps        0x03000000          /* 特殊PER编解码模块标识 */
#define sid_ctr_OBJID           0x0001              /* 特殊PER编解码模块-对象标识类型 */

/*===============================函数原型定义================================*/
int PER_GetSubIDOctetsLen(
        IN      _U32                value );

void BER_EncodeSubidentifier(
        IN      _U32                value,
        IN      ST_BITPOINTER       *buffer );

void PER_EncodeObjectIdentifier(
        IN      ObjectIdentifier    *object,
        IN      ST_BITPOINTER       *buffer );

_U32 BER_DecodeSubidentifier(
        IN      ST_BITPOINTER       *buffer );

#if 0
void PER_DecodeObjectIdentifier(
        OUT     ObjectIdentifier    *object,
        IN      ST_BITPOINTER       *buffer );


void PER_EncodeGeneralString(
        IN      GeneralString       *object,
        IN      ST_BITPOINTER       *buffer );

void PER_DecodeGeneralString(
        OUT     GeneralString       *object,
        IN      ST_BITPOINTER       *buffer );
#endif

void PER_UnderOpenType(
        IN      ST_BITPOINTER       *buf_start,
        IN      ST_BITPOINTER       *buf_end );

void PER_DecodeLeftedOpenType(
        IN      ST_BITPOINTER       *buffer,
        IN      int                 number );

/*---------------------------------------------------------------------------*/
#endif  /* _ASN_SPECODE_H__ */
/*---------------------------------------------------------------------------*/
#ifdef __cplusplus
}
#endif
/*---------------------------------------------------------------------------*/
