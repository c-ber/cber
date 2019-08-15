/*-----------------------------------------------------------------------------
 �ļ���  : ASN_PrimCode.c
 ����    : ruansong
 �汾    : v1.0
 �������: 2016-01-19
 �ļ�����: ASN.1��ASN�����ı���봦����
 ��ע    : �������͵ı����ʵ��: H323ʹ��PER����
 �޸���ʷ:
 1.�޸���: ruansong
 ʱ��    : 2016.01.19
 �汾    : v1.0
 �޸�ԭ��: �������ļ�
 2...
-----------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*/
/*  ����ʵ�ֲ��ֿ�ʼ                                                         */
/*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*/

#include "ASN_PrimCode.h"
/*lint -e774 -e506 -e534*/

#include "packet_entry.h"
/* -----------------------------����뺯��------------------------------------*/
/****************************************************************************
 ����������  : PER_EncodeBoolean
 ��������    : ASN�����-�����������ݱ��뺯��
 �������    : ���ز����Ľṹָ��, ֵ
 �������    : ��
 ����ֵ      : ��
 ��ע        : X.691-11
 ��Ԫ���Լ�¼:
****************************************************************************/
void PER_EncodeBoolean( ST_BITPOINTER *ptr, int value )
{
    if( NULL == ptr )
    {
        return;
    }
    
    if( value )
    {
        BP_WriteBits( ptr, 1, 1 );
    }
    else
    {
        BP_WriteBits( ptr, 0, 1 );
    }
    return;
}

/****************************************************************************
 ����������  : PER_DecodeBoolean
 ��������    : ASN�����-�����������ݽ��뺯��
 �������    : ���ز����Ľṹָ��
 �������    : ��
 ����ֵ      : ����ֵ
 ��ע        : X.691-11
 ��Ԫ���Լ�¼:
****************************************************************************/
int PER_DecodeBoolean( ST_BITPOINTER *ptr )
{
    if( NULL == ptr )
    {
        return 0;
    }
    
    int             n = 0;

    n = (int)BP_ReadBits( ptr, 1 );
    return(n);
}

/****************************************************************************
 ����������  : PER_EncodeConstrainedWhole
 ��������    : ASN�����-���������������ݱ��뺯��
 �������    : ���ز����Ľṹָ��, ���޷�Χֵ, ����ֵ
 �������    : ��
 ����ֵ      : ��
 ��ע        : X.691-10.5:::range = ("ub" - "lb" + 1)
 ��Ԫ���Լ�¼:
****************************************************************************/
void PER_EncodeConstrainedWhole( ST_BITPOINTER *ptr, unsigned long range, unsigned long value )
{
    if( NULL == ptr )
    {
        return;
    }
    
    if( range < 256 )
    {
        if( range < 2 )
        {
            BP_WriteBits(ptr, value, 0);
        }
        else if( range < 3 )
        {
            BP_WriteBits(ptr, value, 1);
        }
        else if( range < 5 )
        {
            BP_WriteBits(ptr, value, 2);
        }
        else if( range < 9 )
        {
            BP_WriteBits(ptr, value, 3);
        }
        else if( range < 17 )
        {
            BP_WriteBits(ptr, value, 4);
        }
        else if( range < 33 )
        {
            BP_WriteBits(ptr, value, 5);
        }
        else if( range < 65 )
        {
            BP_WriteBits(ptr, value, 6);
        }
        else if( range < 129 )
        {
            BP_WriteBits(ptr, value, 7);
        }
        else
        {
            BP_WriteBits(ptr, value, 8);
        }
    }
    else if( range == 256 )
    {
        BP_Pad(ptr);
        BP_WriteBits(ptr, value, 8);
    }
    else if( range <= 65536 )
    {
        BP_Pad(ptr);
        BP_WriteBits(ptr, value, 16);
    }
    else if( range <= 16777216 )    /* С�ڵ���3�ֽ� */
    {
        /* ������������д������ range: 0..2 */
        if( value < 256 )
        {
            PER_EncodeConstrainedWhole(ptr, 3, 0);
            BP_Pad(ptr);
            BP_WriteBits(ptr, value, 8);
        }
        else if( value < 65536 )
        {
            PER_EncodeConstrainedWhole(ptr, 3, 1);
            BP_Pad(ptr);
            BP_WriteBits(ptr, value, 16);
        }
        else
        {
            PER_EncodeConstrainedWhole(ptr, 3, 2);
            BP_Pad(ptr);
            BP_WriteBits(ptr, value, 24);
        }
    }
    else
    {
        /* ���������������ֵΪ32���ر��� */
        /* ������������д������ range: 0..3 */
        if( value < 256 )
        {
            PER_EncodeConstrainedWhole(ptr, 4, 0);
            BP_Pad(ptr);
            BP_WriteBits(ptr, value, 8);
        }
        else if( value < 65536 )
        {
            PER_EncodeConstrainedWhole(ptr, 4, 1);
            BP_Pad(ptr);
            BP_WriteBits(ptr, value, 16);
        }
        else if ( value < 0xFFFFFF )
        {
            PER_EncodeConstrainedWhole(ptr, 4, 2);
            BP_Pad(ptr);
            BP_WriteBits(ptr, value, 24);
        }
        else
        {
            PER_EncodeConstrainedWhole(ptr, 4 , 3);
            BP_Pad(ptr);
            BP_WriteBits(ptr, value, 32);
        }
    }
    return;
}

/****************************************************************************
 ����������  : PER_DecodeConstrainedWhole
 ��������    : ASN�����-���������������ݽ��뺯��
 �������    : ���ز����Ľṹָ��, ���޷�Χֵ
 �������    : ��
 ����ֵ      : ����ֵ
 ��ע        : X.691-10.5:::range = ("ub" - "lb" + 1)
 ��Ԫ���Լ�¼:
****************************************************************************/
unsigned int PER_DecodeConstrainedWhole( ST_BITPOINTER *ptr, unsigned long range )
{
    if( NULL == ptr )
    {
        return 0;
    }
    
    unsigned int        n = 0;
    unsigned int        Length = 0;
    if( range < 256 )
    {
        if( range < 2 )
        {
            /* ��ΧС��2,ֻ��һ���̶���ֵ,������,��˷���0 */
            n = 0;
        }
        else if( range < 3 )
        {
            n = BP_ReadBits(ptr, 1);
        }
        else if( range < 5 )
        {
            n = BP_ReadBits(ptr, 2);
        }
        else if( range < 9 )
        {
            n = BP_ReadBits(ptr, 3);
        }
        else if( range < 17 )
        {
            n = BP_ReadBits(ptr, 4);
        }
        else if( range < 33 )
        {
            n = BP_ReadBits(ptr, 5);
        }
        else if( range < 65 )
        {
            n = BP_ReadBits(ptr, 6);
        }
        else if( range < 129 )
        {
            n = BP_ReadBits(ptr, 7);
        }
        else
        {
            n = BP_ReadBits(ptr, 8);
        }
    }
    else if( range == 256 )
    {
        BP_ReadPad(ptr);
        n = BP_ReadBits(ptr, 8);
    }
    else if( range <= 65536 )
    {
        BP_ReadPad(ptr);
        n = BP_ReadBits(ptr, 16);
    }
    else if( range <= 16777216 )        /* С�ڵ���3�ֽ� */
    {
        /* �������������������� range: 0..2 */
        Length = PER_DecodeConstrainedWhole(ptr, 3);
        BP_ReadPad(ptr);    /* ����ı���Ҫ���� */
        if( Length == 0 )
            n = BP_ReadBits(ptr, 8);
        if( Length == 1 )
            n = BP_ReadBits(ptr, 16);
        if( Length == 2)
            n = BP_ReadBits(ptr, 24);
    }
    else
    {
        /* ���������������ֵΪ32���ر��� */
        /* ������������ȡ������ range: 0..3 */
        Length = PER_DecodeConstrainedWhole(ptr, 4);
        BP_ReadPad(ptr);    /* ����ı���Ҫ���� */
        if( Length == 0 )
            n = BP_ReadBits(ptr, 8);
        if( Length == 1 )
            n = BP_ReadBits(ptr, 16);
        if( Length == 2 )
            n = BP_ReadBits(ptr, 24);
        if( Length == 3 )
            n = BP_ReadBits(ptr, 32);
    }
    return(n);
}

/****************************************************************************
 ����������  : PER_EncodeUnConstrainedWhole
 ��������    : ASN�����-�����������������ݱ��뺯��
 �������    : ���ز����Ľṹָ��, ֵ
 �������    : ��
 ����ֵ      : ��
 ��ע        : X.691-10.8
 ��Ԫ���Լ�¼:
****************************************************************************/
void PER_EncodeUnConstrainedWhole( ST_BITPOINTER *ptr, int value )
{
    if( NULL == ptr )
    {
        return;
    }
    
    unsigned int    ulLength = 0;
    int             value_temp = 0;

    if( value < 0 )
    {
        value_temp = (-value+1);
    }
    else
    {
        value_temp = (value);
    }

    ulLength = (_U32)PER_FuncGetOctetsLen((unsigned long)value_temp);//lint !e571
    /* ���ȱ��� */
    PER_EncodeLengthDeterminant(ptr, ulLength);
    /* ֵ���� */
    BP_WriteBits(ptr, (_U32)value, 8 * ulLength);//lint !e571
    return;
}

/****************************************************************************
 ����������  : PER_DecodeUnConstrainedWhole
 ��������    : ASN�����-�����������������ݽ��뺯��
 �������    : ���ز����Ľṹָ��
 �������    : ��
 ����ֵ      : ����ֵ
 ��ע        : X.691-10.8
 ��Ԫ���Լ�¼:
****************************************************************************/
int PER_DecodeUnConstrainedWhole( ST_BITPOINTER *ptr )
{
    if( NULL == ptr )
    {
        return 0;
    }
    
    int         n = 0;

    unsigned int ulLength = PER_DecodeLengthDeterminant(ptr);
    n = (int)BP_ReadBits(ptr, 8 * ulLength);
    if((n&(1<<((8*ulLength)-1))) != 0)
    {
        /* ���� */
        n = (n | (UINT_MAX << (8 * (_U16)ulLength)));
    }
    return(n);
}

/****************************************************************************
 ����������  : PER_EncodeExtendConstrainedWhole
 ��������    : ASN�����-����չ�����������������ݱ��뺯��
 �������    : ���ز����Ľṹָ��
 �������    : ��
 ����ֵ      : ����ֵ
 ��ע        : X.691-10.8
 ��Ԫ���Լ�¼:
****************************************************************************/
void PER_EncodeExtendConstrainedWhole( ST_BITPOINTER *ptr, int lb, int ub, int value )
{
    if( NULL == ptr )
    {
        return;
    }
    
    int         range = 0;

    if((range = (ub-lb))<0)
    {
        range = 0;
    }

    if(( value > ub )||(value < lb))
    {
        BP_WriteBits(ptr, 1, 1);
        PER_EncodeUnConstrainedWhole(ptr, value);
    }
    else
    {
        BP_WriteBits(ptr, 0, 1);
        if(value<lb)
        {
            value = 0;
        }
        else
        {
            value = value - lb;
        }
        PER_EncodeConstrainedWhole(ptr, (_U32)range, (unsigned long)value);//lint !e571
    }
    return;
}

/****************************************************************************
 ����������  : PER_DecodeExtendConstrainedWhole
 ��������    : ASN�����-����չ�����������������ݽ��뺯��
 �������    : ���ز����Ľṹָ��
 �������    : ��
 ����ֵ      : ����ֵ
 ��ע        : X.691-10.8
 ��Ԫ���Լ�¼:
****************************************************************************/
int PER_DecodeExtendConstrainedWhole( ST_BITPOINTER *ptr, int lb, int ub )
{
    if( NULL == ptr )
    {
        return 0;
    }
    
    int         value = 0;
    int         range = 0;
    int         n = 0;

    if((range = (ub-lb))<0)
    {
        range = 0;
    }

    value = (int)BP_ReadBits(ptr, 1);

    if(value)
    {
        n = PER_DecodeUnConstrainedWhole(ptr);
    }
    else
    {
        n = (int)PER_DecodeConstrainedWhole(ptr,(_U32)range)+lb;//lint !e571
    }
    return(n);
}

/****************************************************************************
 ����������  : PER_EncodeLengthDeterminant
 ��������    : ASN�����-���Ⱦ����������ݱ��뺯��
 �������    : ���ز����Ľṹָ��, ����ֵ
 �������    : ��
 ����ֵ      : ��
 ��ע        : X.691-10.9
               ���Ⱦ��������е�������������, ������һЩ��־���غʹ���������
               �������޳���.
               ��ϵͳ�ݲ�������32���ص�����
 ��Ԫ���Լ�¼:
****************************************************************************/
void PER_EncodeLengthDeterminant(ST_BITPOINTER *ptr, unsigned long ulLength)
{
    if( NULL == ptr )
    {
        return;
    }
    
    if( ulLength <= 127 )
    {
        /* ��������������, ռ��һ�������ֽ�, ��8����λΪ0 */
        PER_EncodeConstrainedWhole(ptr, 256, ulLength);
    }
    else if( ulLength < 16384 )   /* С��16K */
    {
        /* ��������������, ռ�����������ֽ�, ��һ�����ֽڵ�8,7����Ϊ10 */
        PER_EncodeConstrainedWhole(ptr, 65536, (ulLength | 0x8000));
    }
    else
    {
        /* ��X.691�����ķֶα���, �ݲ�ִ�� */
        CODE_ERROR("RANAP�����-����ֶδ������֧��ִ��!");
    }
    return;
}

/****************************************************************************
 ����������  : PER_DecodeLengthDeterminant
 ��������    : ASN�����-���Ⱦ����������ݽ��뺯��
 �������    : ���ز����Ľṹָ��
 �������    : ��
 ����ֵ      : ����ֵ
 ��ע        : X.691-10.9
               ���Ⱦ��������е�������������, ������һЩ��־���غʹ���������
               �������޳���.
               ��ϵͳ�ݲ�������32���ص�����
 ��Ԫ���Լ�¼:
****************************************************************************/
unsigned int PER_DecodeLengthDeterminant( ST_BITPOINTER *ptr )
{
    if( NULL == ptr )
    {
        return 0;
    }
    
    unsigned int        n = 0;

    BP_ReadPad(ptr);    /* �϶�Ҫ�ֽڶ��� */
    if( BP_ReadBits(ptr, 1) == 0 )
    {
        /* �ױ���Ϊ0, һ���ֽڳ������� */
        n = BP_ReadBits(ptr, 7);
    }
    else if( BP_ReadBits(ptr, 1) == 0 )
    {
        /* �ױ���Ϊ1, �ڶ�����Ϊ0, �����ֽڳ������� */
        n = BP_ReadBits(ptr, 14);
    }
    else
    {
        /* ����Ϊ�ֶα�������, �ݲ�ִ�� */
        CODE_ERROR("S1AP�����-����ֶδ������֧��ִ��!");
    }
    return(n);
}

/****************************************************************************
 ����������  : PER_EncodeNormallySmallWhole
 ��������    : ASN�����-ͨ��С�����������ݱ��뺯��
 �������    : ���ز����Ľṹָ��, ֵ
 �������    : ��
 ����ֵ      : ��
 ��ע        : X.691-10.6
               ͨ��С����������ָ��ֵ�ǳ�С, ���ǿ�����չΪ���޴�, ��û������,
               ͨ����Ӧ���Ǵ���չ��ǵ�CHOICE���ͱ����
 ��Ԫ���Լ�¼:
****************************************************************************/
void PER_EncodeNormallySmallWhole( ST_BITPOINTER *ptr, unsigned long value )
{
    if( NULL == ptr )
    {
        return;
    }
    
    if( value < 64 )
    {
        /* ����һ������Ϊ0, Ȼ����6���ر���ֵ */
        BP_WriteBits(ptr, 0, 1);
        BP_WriteBits(ptr, value, 6);
    }
    else
    {
        /* ����, ����һ������Ϊ1, ֵ��Ϊ�����Ϊ0�İ������������� */
        BP_WriteBits(ptr, 1, 1);
        PER_EncodeSemiConstrainedWhole(ptr, value);
    }
    return;
}

/****************************************************************************
 ����������  : PER_DecodeNormallySmallWhole
 ��������    : ASN�����-ͨ��С�����������ݽ��뺯��
 �������    : ���ز����Ľṹָ��
 �������    : ��
 ����ֵ      : ����ֵ
 ��ע        : X.691-10.6
               ͨ��С����������ָ��ֵ�ǳ�С, ���ǿ�����չΪ���޴�, ��û������,
               ͨ����Ӧ���Ǵ���չ��ǵ�CHOICE���ͱ����
 ��Ԫ���Լ�¼:
****************************************************************************/
unsigned int PER_DecodeNormallySmallWhole( ST_BITPOINTER *ptr )
{
    if( NULL == ptr )
    {
        return 0;
    }
    
    unsigned int        n = 0;
    if( BP_ReadBits(ptr, 1 ) == 0 )
    {
        /* ���ӱ���Ϊ0, ��6���ؽ��� */
        n = BP_ReadBits(ptr, 6);
    }
    else
    {
        /* ���ڰ�������������ʱ�����ֽڶ���, ������Ƚ�����Ⱦ�������ֵ */
        unsigned int ulLength = PER_DecodeLengthDeterminant(ptr);
        n = BP_ReadBits(ptr, 8 * ulLength);
    }
    return(n);
}

/****************************************************************************
 ����������  : PER_EncodeSemiConstrainedWhole
 ��������    : ASN�����-�����������������ݱ��뺯��
 �������    : ���ز����Ľṹָ��, ֵ
 �������    : ��
 ����ֵ      : ��
 ��ע        : X.691-10.7
               ����������������ָ�����޵�û�����޵�����, ͨ�����ֽڴ�����
 ��Ԫ���Լ�¼:
****************************************************************************/
void PER_EncodeSemiConstrainedWhole( ST_BITPOINTER *ptr, unsigned long value )
{
    if( NULL == ptr )
    {
        return;
    }
    
    unsigned int    ulLength = 0;

    /* ȡ������ռ�õ��ֽ���, ����4�Ĳ����� */
    ulLength = PER_FuncGetOctetsLen(value);
    /* ���ȱ��� */
    PER_EncodeLengthDeterminant(ptr, ulLength);
    /* ֵ���� */
    BP_WriteBits(ptr, value, 8 * ulLength);
    return;
}

/****************************************************************************
 ����������  : PER_DecodeSemiConstrainedWhole
 ��������    : ASN�����-�����������������ݽ��뺯��
 �������    : ���ز����Ľṹָ��
 �������    : ��
 ����ֵ      : ����ֵ
 ��ע        : X.691-10.7
               ����������������ָ�����޵�û�����޵�����, ͨ�����ֽڴ�����
 ��Ԫ���Լ�¼:
****************************************************************************/
unsigned int PER_DecodeSemiConstrainedWhole( ST_BITPOINTER *ptr )
{
    if( NULL == ptr )
    {
        return 0;
    }
    
    unsigned int        n = 0;
    unsigned int        ulLength = 0;

    /* ���볤���� */
    ulLength = PER_DecodeLengthDeterminant(ptr);
    /* ����ֵ�� */
    n = BP_ReadBits(ptr, 8 * ulLength);
    return(n);
}

#if 0
/****************************************************************************
 ����������  : PER_EncodeRawOctetString
 ��������    : ASN�����-ԭʼ�ֽڴ����ݱ��뺯��
 �������    : ���ز����Ľṹָ��, �����ֽڴ�ָ��, ����
 �������    : ��
 ����ֵ      : ��
 ��ע        : X.691-16
               ԭʼ�ֽڴ������ǲ�������������ֽڴ�
 ��Ԫ���Լ�¼:
****************************************************************************/
void PER_EncodeRawOctetString( ST_BITPOINTER *ptr, char *octets, unsigned int ulLength )
{
    BP_Pad(ptr);    /* ע��: X691�涨����С�ڵ������ֽڵ��ֽڴ����Ͳ����ֽڶ���,
                       ��H325Э�鶨���в����ڲ��������, ������������봦��
                       �����ṩ����ʵ��С�����ֽ��������뺯�� */

    while( ulLength-- > 0 )
    {
        BP_WriteBits(ptr, (unsigned long)(*(_U8*)octets), 8);
        octets++;
    }
    return;
}

/****************************************************************************
 ����������  : PER_EncodeRawOctetString
 ��������    : ASN�����-ԭʼ�ֽڴ����ݽ��뺯��
 �������    : ���ز����Ľṹָ��, ����
 �������    : ��
 ����ֵ      : �����ֽڴ�ָ��
 ��ע        : X.691-16
               ԭʼ�ֽڴ������ǲ�������������ֽڴ�, �������������ڴ�
 ��Ԫ���Լ�¼:
****************************************************************************/
char *PER_DecodeRawOctetString( ST_BITPOINTER *ptr, unsigned int ulLength )
{
    char            *result = NULL_PTR;
    char            *walker = NULL_PTR;

    if(ulLength == 0)
    {
		CODE_ERROR("RANAP�����-����������ȴ���!" );
    	return NULL_PTR;
    }
    result = (char *)ASN_PrimMalloc( mid_ctr_prim | sid_ctr_ROCTETS, (ulLength*sizeof(char)));
    if( result == NULL_PTR )
    {
		CODE_ERROR("S1AP�����-�����ڴ�ʧ��!" );
		ptr->bytes = ptr->end;
    	return NULL_PTR;
    }
    else
    {
    	walker = result;
    }

    /* �ֽڶ��� */
    BP_ReadPad(ptr);

    while( ulLength-- > 0 )
    {
        *walker++ = (char)LDB(8, 0, BP_ReadBits(ptr, 8));
    }
    return(result);
}

/****************************************************************************
 ����������  : PER_EncodeRawDTMFString
 ��������    : ASN�����-ԭʼDTMF�ֽڴ����ݱ��뺯��
 �������    : ���ز����Ľṹָ��, DTMF�ֽڴ�ָ��, ����
 �������    : ��
 ����ֵ      : ��
 ��ע        : X.691-16
               ԭʼDTMF�������ǲ������������DTMF�����ֽڴ�, DTMFString
               һ���ַ�ռ4λ
 ��Ԫ���Լ�¼:
****************************************************************************/
void PER_EncodeRawDTMFString( ST_BITPOINTER *ptr, char *octets, unsigned int ulLength )
{
    /* �ֽڶ��� */
    BP_Pad(ptr);

    while( ulLength-- > 0 )
    {
        BP_WriteBits(ptr, (unsigned long)(*(_U8*)octets), 4);
        octets++;
    }
    return;
}

/****************************************************************************
 ����������  : PER_DecodeRawDTMFString
 ��������    : ASN�����-ԭʼDTMF�ֽڴ����ݽ��뺯��
 �������    : ���ز����Ľṹָ��, ����
 �������    : ��
 ����ֵ      : ����DTMF�ֽڴ�ָ��
 ��ע        : X.691-16
               ԭʼDTMF�������ǲ������������DTMF�����ֽڴ�, DTMFString
               һ���ַ�ռ4λ, �������������ڴ�
 ��Ԫ���Լ�¼:
****************************************************************************/
char* PER_DecodeRawDTMFString( ST_BITPOINTER *ptr, unsigned int ulLength )
{
    char                *result = NULL_PTR;
    char                *walker = NULL_PTR;

    if(ulLength == 0)
    {
		CODE_ERROR("RANAP�����-����������ȴ���!" );
    	return NULL_PTR;
    }
    result = (char *)ASN_PrimMalloc(mid_ctr_prim | sid_ctr_RDTMFS, (ulLength*sizeof(char)));
    if (result == NULL_PTR)
    {
            CODE_ERROR("RANAP�����-�����ڴ�ʧ��!" );
            ptr->bytes = ptr->end;
            return NULL_PTR;
    }
    else
    {
            walker = result;
    }

    /* �ֽڶ��� */
    BP_ReadPad(ptr);

    while( ulLength-- > 0 )
    {
        *walker++ = (char)LDB(4, 0, BP_ReadBits(ptr, 4));
    }
    return(result);
}

/****************************************************************************
 ����������  : PER_EncodeRawBMPString
 ��������    : ASN�����-ԭʼBMP�ֽڴ����ݱ��뺯��
 �������    : ���ز����Ľṹָ��, BMP�ֽڴ�ָ��, ����
 �������    : ��
 ����ֵ      : ��
 ��ע        : X.691-16
               ԭʼBMP�������ǲ������������BMP�����ֽڴ�
 ��Ԫ���Լ�¼:
****************************************************************************/
void PER_EncodeRawBMPString( ST_BITPOINTER *ptr, unsigned short *octets, unsigned int ulLength )
{
    /* �ֽڶ��� */
    BP_Pad(ptr);

    while( ulLength-- > 0 )
    {
        BP_WriteBits(ptr, *octets++, 16);
    }
    return;
}

/****************************************************************************
 ����������  : PER_DecodeRawBMPString
 ��������    : ASN�����-ԭʼBMP�ֽڴ����ݽ��뺯��
 �������    : ���ز����Ľṹָ��, ����
 �������    : ��
 ����ֵ      : ����BMP�ֽڴ�ָ��
 ��ע        : X.691-16
               ԭʼBMP�������ǲ������������BMP�����ֽڴ�, �������������ڴ�
 ��Ԫ���Լ�¼:
****************************************************************************/
unsigned short* PER_DecodeRawBMPString( ST_BITPOINTER *ptr, unsigned int ulLength )
{
    unsigned short      *result = NULL_PTR;
    unsigned short      *walker = NULL_PTR;

    if(ulLength == 0)
    {
		CODE_ERROR("RANAP�����-����������ȴ���!" );
    	return NULL_PTR;
    }
    result = (unsigned short *)ASN_PrimMalloc(mid_ctr_prim | sid_ctr_RBMPS, (ulLength*sizeof(unsigned short)));
    if( result == NULL_PTR )
    {
        CODE_ERROR("RANAP�����-�����ڴ�ʧ��!" );
        ptr->bytes = ptr->end;
        return NULL_PTR;
    }
    else
    {
        walker = result;
    }

    /* �ֽڶ��� */
    BP_ReadPad(ptr);

    while( ulLength-- > 0 )
    {
        *walker++ = (_U16)LDB(16, 0, BP_ReadBits(ptr, 16));
    }
    return(result);
}

/****************************************************************************
 ����������  : PER_EncodeRawIA5String
 ��������    : ASN�����-ԭʼIA5�ֽڴ����ݱ��뺯��
 �������    : ���ز����Ľṹָ��, IA5�ֽڴ�ָ��, ����, IA5ռ���ֽڱ��س���
 �������    : ��
 ����ֵ      : ��
 ��ע        : X.691-16
               ԭʼIA5�������ǲ������������IA5�����ֽڴ�
 ��Ԫ���Լ�¼:
****************************************************************************/
void PER_EncodeRawIA5String( ST_BITPOINTER *ptr, char *octets, unsigned int ulLength, unsigned int bit_length )
{
    /* �ֽڶ��� */
    BP_Pad(ptr);

    while( ulLength-- > 0 )
    {
        BP_WriteBits(ptr, (unsigned long)(*(_U8*)octets), bit_length);
        octets++;
    }
    return;
}

/****************************************************************************
 ����������  : PER_DecodeRawIA5String
 ��������    : ASN�����-ԭʼIA5�ֽڴ����ݽ��뺯��
 �������    : ���ز����Ľṹָ��, ����, IA5ռ���ֽڱ��س���
 �������    : ��
 ����ֵ      : ����IA5�ֽڴ�ָ��
 ��ע        : X.691-16
               ԭʼIA5�������ǲ������������IA5�����ֽڴ�
 ��Ԫ���Լ�¼:
****************************************************************************/
char* PER_DecodeRawIA5String( ST_BITPOINTER *ptr, unsigned int ulLength, unsigned int bit_length )
{
    char                *result = NULL_PTR;
    char                *walker = NULL_PTR;

    if(ulLength == 0)
    {
		CODE_ERROR("RANAP�����-����������ȴ���!" );
    	return NULL_PTR;
    }
    result = (char *)ASN_PrimMalloc(mid_ctr_prim | sid_ctr_RIA5S, (ulLength*sizeof(char)));
    if( result == NULL_PTR )
    {
        CODE_ERROR("RANAP�����-�����ڴ�ʧ��!" );
        ptr->bytes = ptr->end;
        return NULL_PTR;
    }
    else
    {
        walker = result;
    }

    /* �ֽڶ��� */
    BP_ReadPad(ptr);

    while( ulLength-- > 0 )
    {
        *walker++ = (char)LDB(bit_length, 0, BP_ReadBits(ptr, bit_length));
    }
    return(result);
}

/****************************************************************************
 ����������  : PER_EncodeRawShortOctetString
 ��������    : ASN�����-ԭʼ���ֽڴ����ݱ��뺯��
 �������    : ���ز����Ľṹָ��, �����ֽڴ�ָ��, ����
 �������    : ��
 ����ֵ      : ��
 ��ע        : X.691-16
               ԭʼ���ֽڴ������ǲ�������������ֽڴ�
 ��Ԫ���Լ�¼:
****************************************************************************/
void PER_EncodeRawShortOctetString( ST_BITPOINTER *ptr, char *octets, unsigned int ulLength )
{
    if( ulLength > 2)
    {
        /* ���ȴ���2Ҫ���ж��� */
        BP_Pad(ptr);
    }

    while( ulLength-- > 0 )
    {
        BP_WriteBits(ptr, (unsigned long)(*(_U8*)octets), 8);
        octets++;
    }
    return;
}

/****************************************************************************
 ����������  : PER_DecodeRawShortOctetString
 ��������    : ASN�����-ԭʼ���ֽڴ����ݽ��뺯��
 �������    : ���ز����Ľṹָ��, ����
 �������    : ��
 ����ֵ      : �����ֽڴ�ָ��
 ��ע        : X.691-16
               ԭʼ���ֽڴ������ǲ�������������ֽڴ�
 ��Ԫ���Լ�¼:
****************************************************************************/
char *PER_DecodeRawShortOctetString( ST_BITPOINTER *ptr, unsigned int ulLength )
{
    char                *result = NULL_PTR;
    char                *walker = NULL_PTR;

    if(ulLength == 0)
    {
		CODE_ERROR("RANAP�����-����������ȴ���!" );
    	return NULL_PTR;
    }
    result = (char *)ASN_PrimMalloc(mid_ctr_prim | sid_ctr_RSOCTETS, (ulLength*sizeof(char)));
    if( result == NULL_PTR )
    {
        CODE_ERROR("RANAP�����-�����ڴ�ʧ��!" );
        ptr->bytes = ptr->end;
        return NULL_PTR;
    }
    else
    {
        walker = result;
    }

    if( ulLength > 2 )
    {
        /* ���ȴ���2Ҫ���ж��� */
        BP_ReadPad(ptr);
    }

    while( ulLength-- > 0 )
    {
        *walker++ = (char)LDB(8, 0, BP_ReadBits(ptr, 8));
    }
    return(result);
}

/****************************************************************************
 ����������  : PER_EncodeOctetString
 ��������    : ASN�����-�ֽڴ��������ݱ��뺯��
 �������    : ���ز����Ľṹָ��, �����ֽڴ�ָ��, ����
 �������    : ��
 ����ֵ      : ��
 ��ע        : X.691-16
 ��Ԫ���Լ�¼:
****************************************************************************/
void PER_EncodeOctetString( ST_BITPOINTER *ptr, char *octets, unsigned int ulLength )
{
    /* ���볤���� */
    PER_EncodeLengthDeterminant(ptr, ulLength);
    if(ulLength > 0)
    {
        /* ���������� */
        PER_EncodeRawOctetString(ptr, octets, ulLength);
    }
    return;
}

/****************************************************************************
 ����������  : PER_DecodeOctetString
 ��������    : ASN�����-�ֽڴ��������ݽ��뺯��
 �������    : ���ز����Ľṹָ��
 �������    : ����
 ����ֵ      : �����ֽڴ�ָ��
 ��ע        : X.691-16
 ��Ԫ���Լ�¼:
****************************************************************************/
char *PER_DecodeOctetString( ST_BITPOINTER *ptr, unsigned int *ulLength )
{
    unsigned int        len;

    /* ���볤�� */
    len = PER_DecodeLengthDeterminant(ptr);
    if( ulLength )
    {
        *ulLength = len;
    }

    if( len == 0 )
    {
        return NULL_PTR;
    }
    /* �������� */
    return(PER_DecodeRawOctetString(ptr, len));
}


/****************************************************************************
 ����������  : PER_EncodeConstrainedOctetString
 ��������    : ASN�����-���޵��ֽڴ��������ݱ��뺯��
 �������    : ���ز����Ľṹָ��, �����ֽڴ�ָ��, ����, ��Χ, ����
 �������    : ��
 ����ֵ      : ��
 ��ע        : X.691-16
 ��Ԫ���Լ�¼:
****************************************************************************/
void PER_EncodeConstrainedOctetString( ST_BITPOINTER *ptr, char *octets,
                                                     unsigned int ulLength, unsigned int range,
                                                     unsigned int bottom )
{
    /* ���볤���� */
    PER_EncodeConstrainedWhole(ptr,range,ulLength-bottom);
    /* ���������� */
    PER_EncodeRawOctetString(ptr,octets,ulLength);
    return;
}

/****************************************************************************
 ����������  : PER_DecodeConstrainedOctetString
 ��������    : ASN�����-���޵��ֽڴ��������ݽ��뺯��
 �������    : ���ز����Ľṹָ��, ����, ��Χ, ����
 �������    : ��
 ����ֵ      : �����ֽڴ�ָ��
 ��ע        : X.691-16
 ��Ԫ���Լ�¼:
****************************************************************************/
char *PER_DecodeConstrainedOctetString( ST_BITPOINTER *ptr, unsigned int *ulLength,
									                  unsigned int range, unsigned int bottom )
{
    unsigned int        len;

    /* ���볤�� */
    len = PER_DecodeConstrainedWhole(ptr, range)+bottom;
    if( ulLength )
    {
        *ulLength = len;
    }
    /* �������� */
    return(PER_DecodeRawOctetString(ptr, len));
}
#endif

/* -------------------------------���ܺ���------------------------------------*/
/****************************************************************************
 ����������  : PER_FuncGetOctetsLen
 ��������    : ASN�����-���ܺ���:�õ����������ĳ��ȱ����ռ���ֽ���
 �������    : ����ֵ
 �������    : ��
 ����ֵ      : ���ȱ����ռ���ֽ���
 ��ע        :
 ��Ԫ���Լ�¼:
****************************************************************************/
unsigned int PER_FuncGetOctetsLen( unsigned long value )
{
#if 0
    if( value < 256 )
    {
        return(1);
    }
    else if( value < 65536 )
    {
        return(2);
    }
    else if( value < 16777216 )
    {
        return(3);
    }
    else
    {
        return(4);
    }
#endif
    if( value < 128 )
    {
        return(1);
    }
    else if( value < 32768 )
    {
        return(2);
    }
    else if( value < 8388608 )
    {
        return(3);
    }
    else
    {
        return(4);
    }
    /* ����32���صĳ��Ȳ�֧�� */
}

/*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*/
/*  ����ʵ�ֲ��ֽ���                                                         */
/*---------------------------------------------------------------------------*/
