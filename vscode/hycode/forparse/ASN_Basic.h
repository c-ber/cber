/*-----------------------------------------------------------------------------
 �ļ���  : Asn_Basic.h
 ����    : ruansong
 �汾    : v1.0
 �������: 2016-01-19
 �ļ�����: ASN.1 �� �������ͣ�ֵ�Ķ���( X.680-X.683, X.691 )
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
#ifndef _ASN_BASIC_H__
#define _ASN_BASIC_H__


/*---------------------------------------------------------------------------*/

/*--------------���ܱ��뿪��--------------*/
#define H323_CHECK_CODE         0               /* �Ƿ񱣴��ļ���Э������ļ�� */

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
/*---------------------------ͨ�����Ͳ�����������----------------------------*/
/*---------------------------����ͨ�Ų�������--------------------------------*/
//    #define PID_H323_MAIN                           PID_H323MAIN
//    #define PID_H323_COM                            PID_H323COM
/*---------------------------����ͨ�Ų�����������----------------------------*/
/*---------------------------�ڴ����������--------------------------------*/


/*=================================���Ͷ���==================================*/
typedef unsigned char       NullType;       /*  ������: X.680:3.6.44 */
typedef unsigned long	    INTEGER;        /* ��������,�����Ʋ����ʾ: X.680:3.6.41 */
typedef struct                              /* ��λ�ֽ��ַ���: X.680:3.6.49 */
{
    unsigned int            ulLength;       /* ���� */
    char                    *octets;        /* �ֽ����� */
}OctetString;
typedef struct                              /* �����ʶ: X.680:3.6.47 */
{
    unsigned int            ulLength;       /* ���� */
    unsigned long           *subidentifiers;/* ����ֵ���� */
}ObjectIdentifier;
typedef struct                              /* ��ͨ�ַ���: X.680:37.1 */
{
    unsigned int            ulLength;       /* ���� */
    char                    *octets;        /* �ַ����� */
}GeneralString;
typedef struct                              /* BMP�ַ���: X.680:37.15 */
{
    unsigned int            ulLength;       /* ���� */
    unsigned short          *octets;        /* �ֽ����� */
}BMPString;

typedef OctetString         IA5String;      /* IA5�ַ���: X.680:37.1 */
typedef OctetString         NumericString;  /* �������ַ���: X.680:37.1 ��7 */
typedef OctetString         PrintableString;/* printable���ַ���: X.680:37.1 ��8 */
typedef OctetString         BitString;      /* bit���ַ���: X.680:3.6.6 */

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
