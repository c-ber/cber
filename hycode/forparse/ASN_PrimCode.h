/*-----------------------------------------------------------------------------
 �ļ���  : ASN_PrimCode.h
 ����    : ruansong
 �汾    : v1.0
 �������: 2016-01-19
 �ļ�����: ASN.1��ASN�����ı���봦����ͷ�ļ�
 ��ע    : �������͵ı����ʵ��: S1-APʹ��PER����
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
#ifndef _ASN_PRIMCODE_H__
#define _ASN_PRIMCODE_H__
/*---------------------------------------------------------------------------*/

#include "ASN_BitOpr.h"

/*=================================���Ͷ���==================================*/

/*==================================�궨��===================================*/
/* �������͵�PER�������Ҫ�����ڴ�����ĺ궨�� */
//#define ASN_PrimMalloc(ID, SIZE)    H323_MALLOC( PID_RANAP, ROS_MEM_ALLOC_OPT_NONE, SIZE )
/* �ڴ��������˵��:    P1 = ģ��ID | ����ID            */
/*                      P2 = �����ڴ泤��               */
/* ģ��ID[32λ��16λ]:  ����PER�����ģ�� : 0X02000000  */
/*                      ����PER�����ģ�� : 0X03000000  */
/*                      H245�����ģ��    : 0X01000000  */
/* ����ID[32λ��16λ]:  ��ģ���Լ�����                  */

/* ���������ģ��ռ�õ������ڴ��ʶ: ģ��ID+����ID�ĺ궨�� */
#define mid_ctr_prim            0x02000000          /* ����PER�����ģ���ʶ */
#define sid_ctr_ROCTETS         0x0001              /* ����PER�����ģ��-�ֽڴ����� */
#define sid_ctr_RDTMFS          0x0002              /* ����PER�����ģ��-DTMF������ */
#define sid_ctr_RBMPS           0x0003              /* ����PER�����ģ��-BMP������ */
#define sid_ctr_RIA5S           0x0004              /* ����PER�����ģ��-IA5������ */
#define sid_ctr_RSOCTETS        0x0005              /* ����PER�����ģ��-���ֽڴ����� */

/*===============================����ԭ�Ͷ���================================*/
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
