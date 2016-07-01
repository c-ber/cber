/*-----------------------------------------------------------------------------
 �ļ���  : ASN_BitOpr.h
 ����    : ruansong
 �汾    : v1.0
 �������: 2016-01-19
 �ļ�����: ASN.1���ײ�������Ĳ�������������ͷ�ļ�
 ��ע    :
 �޸���ʷ:
 1.�޸���: ruansong
 ʱ��    : 2016.01.19
 �汾    : v1.0
 �޸�ԭ��: �������ļ�
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

/*=================================���Ͷ���==================================*/

/*==================================�궨��===================================*/
#define CHAR_BITS    8                               /* �ַ����ͱ�����Ŀ */
/* ����ȡ����Ϊwidth��ֵ������ */
#define MASK(width) (((width) == 0 || (width) > 32 ) ? 0 : (0xFFFFFFFFUL >> (32 - (width))))
#define LDB(width,position,word) (((word) >> (position)) & (MASK(width)))

/*===============================���ݽṹ����================================*/
/* ���ز���ָ��ṹ���� */
typedef struct tag_ST_BITPOINTER
{
    unsigned char           *bytes;                 /* �ֽ�ָ�� */
    unsigned int            bits;                   /* ����λ�� */
    unsigned char           *end;                   /* �ֽڽ���ָ�� */
}ST_BITPOINTER;

/*===============================����ԭ�Ͷ���================================*/
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
