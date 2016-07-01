/*-----------------------------------------------------------------------------
 �ļ���  : ASN_SpeCode.h
 ����    : ruansong
 �汾    : v1.0
 �������: 2016-01-19
 �ļ�����: ASN.1��ASN����ı���봦���ֵ�ͷ�ļ�
 ��ע    : �������͵ı����ʵ��
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
#ifndef _ASN_SPECODE_H__
#define _ASN_SPECODE_H__

#include "ASN_BitOpr.h"
#include "ASN_PrimCode.h"


/*=================================���Ͷ���==================================*/

/*==================================�궨��===================================*/
/*---------------------------------------------------------------------------*/
/* �������͵�PER�������Ҫ�����ڴ�����ĺ궨�� */
//#define Lothertps_malloc(ID, SIZE)  H323_MALLOC( PID_RANAP, ROS_MEM_ALLOC_OPT_NONE, SIZE )
/* �ڴ��������˵��:    P1 = ģ��ID | ����ID            */
/*                      P2 = �����ڴ泤��               */
/* ģ��ID[32λ��16λ]:  ����PER�����ģ�� : 0X02000000  */
/*                      ����PER�����ģ�� : 0X03000000  */
/*                      H245�����ģ��    : 0X01000000  */
/* ����ID[32λ��16λ]:  ��ģ���Լ�����                  */

/* ����PER�����ģ��ռ�õ������ڴ��ʶ: ģ��ID+����ID�ĺ궨�� */
#define mid_ctr_othertps        0x03000000          /* ����PER�����ģ���ʶ */
#define sid_ctr_OBJID           0x0001              /* ����PER�����ģ��-�����ʶ���� */

/*===============================����ԭ�Ͷ���================================*/
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
