/*-----------------------------------------------------------------------------
 文件名  : ASN_BitOpr.h
 作者    : ruansong
 版本    : v1.0
 完成日期: 2016-01-19
 文件描述: ASN.1－底层比特流的操作处理声明的头文件
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
#ifndef _ASN_BITOPR_H__
#define _ASN_BITOPR_H__
/*---------------------------------------------------------------------------*/

#include "ASN_Basic.h"

/*=================================类型定义==================================*/

/*==================================宏定义===================================*/
#define CHAR_BITS    8                               /* 字符类型比特数目 */
/* 计算取长度为width的值的掩码 */
#define MASK(width) (((width) == 0 || (width) > 32 ) ? 0 : (0xFFFFFFFFUL >> (32 - (width))))
#define LDB(width,position,word) (((word) >> (position)) & (MASK(width)))

/*===============================数据结构定义================================*/
/* 比特操作指针结构定义 */
typedef struct tag_ST_BITPOINTER
{
    unsigned char           *bytes;                 /* 字节指针 */
    unsigned int            bits;                   /* 比特位置 */
    unsigned char           *end;                   /* 字节结束指针 */
}ST_BITPOINTER;

/*===============================函数原型定义================================*/
//ST_BITPOINTER *BP_MakePointer( unsigned char *buffer, unsigned int ulLength );
void BP_SetBitPointer(ST_BITPOINTER *bp, unsigned char *buffer, unsigned int length_in_bytes);
void BP_WriteBits(ST_BITPOINTER *ptr, unsigned long value, unsigned int nbits);
unsigned long BP_ReadBits(ST_BITPOINTER *ptr, unsigned int nbits);
void BP_Pad(ST_BITPOINTER *ptr);
void BP_ReadPad(ST_BITPOINTER *ptr);
int BP_Increment( ST_BITPOINTER *ptr, unsigned int by_bits );
/*---------------------------------------------------------------------------*/
#endif  /* _ASN_BITOPR_H__ */
/*---------------------------------------------------------------------------*/
#ifdef __cplusplus
}
#endif
/*---------------------------------------------------------------------------*/
