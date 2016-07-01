/*-----------------------------------------------------------------------------
 �ļ���  : ASN_SpeCode.c
 ����    : ruansong
 �汾    : v1.0
 �������: 2016-01-19
 �ļ�����: ASN.1��ASN����ı���봦����
 ��ע    : �������͵ı����ʵ��
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
#include <stdio.h>

#ifdef  __cplusplus
extern "C" {
#endif
/*---------------------------------------------------------------------------*/

#include "ASN_SpeCode.h"
/*lint -e774 -e506 -e534*/

#define _______________________________________________________________________ASN_SPECODESOLOSTART
/* -----------------------------����뺯��------------------------------------*/
/****************************************************************************
 ����������  : BER_EncodeSubidentifier
 ��������    : ASN�����-BER�����ӱ�ʶ�������ݱ��뺯��
 �������    : ���ز����Ľṹָ��, �ӱ�ʶֵ
 �������    : ��
 ����ֵ      : ��
 ��ע        : X.691-23, ���������X.690��8.19����
 ��Ԫ���Լ�¼:
****************************************************************************/
void BER_EncodeSubidentifier( _U32 value, ST_BITPOINTER *buffer )
{
    if( NULL == buffer )
    {
        return;
    }
    
    int             started = 0;

    /* �ӱ�ʶ�����ݱ���ÿ�ֽ����ռ��7λ, �ױ��ر�ʶ�Ƿ��ǽ����ֽ� */
    /* ��˶�32λ��������, �����жϸ�4λ�Ƿ���ֵ */
    if( LDB(4, 28, value) )
    {
        BP_WriteBits(buffer, LDB(4, 28, value) | 0x80, 8);
        started = 1;
    }
    if( started || (LDB(7, 21, value)))
    {
        BP_WriteBits(buffer, LDB(7, 21, value) | 0x80, 8);
        started = 1;
    }
    if(started || (LDB(7, 14, value)))
    {
        BP_WriteBits(buffer, LDB(7, 14, value) | 0x80, 8);
        started = 1;
    }
    if(started || (LDB(7, 7, value)))
    {
        BP_WriteBits(buffer, LDB(7, 7, value) | 0x80, 8);
    }
    /* �����һ���ֽ�, �ױ���Ϊ0 */
    BP_WriteBits(buffer, LDB(7, 0, value), 8);
    return;
}

/****************************************************************************
 ����������  : PER_EncodeObjectIdentifier
 ��������    : ASN�����-�����ʶ�������ݱ��뺯��
 �������    : ���ز����Ľṹָ��, �����ʶ����ָ��
 �������    : ��
 ����ֵ      : ��
 ��ע        : X.691-23, ���������X.690��8.19����
 ��Ԫ���Լ�¼:
****************************************************************************/
void PER_EncodeObjectIdentifier( ObjectIdentifier *object, ST_BITPOINTER *buffer )
{
    if( (NULL == buffer) || (NULL == object) )
    {
        return;
    }
    
    _U32            i = 0;
    _U32            len = 0;
    _U32            first_two = 0;

    if( object->ulLength )
    {
        /* ǰ�����ӱ�ʶ���չ�ʽ:(X*40) + Y �����ֵ���� */
        first_two = (40 * object->subidentifiers[0]) + object->subidentifiers[1];
        len = (unsigned long)PER_GetSubIDOctetsLen(first_two);//lint !e571
        for (i = 2;  i < object->ulLength;  i++)
        {
            len += (unsigned long)PER_GetSubIDOctetsLen(object->subidentifiers[i]);//lint !e571
        }

        /* �����������ʶ��������� */
        PER_EncodeLengthDeterminant(buffer, len);
        /* ǰ�����ӱ�ʶ���� */
        BER_EncodeSubidentifier(first_two, buffer);
        /* ֮����ӱ�ʶ���� */
        for( i = 2;  i < object->ulLength; i++ )
        {
            BER_EncodeSubidentifier(object->subidentifiers[i], buffer);
        }
    }
    else
    {
        /* ����0��ʶ�����ʶΪ�� */
        PER_EncodeLengthDeterminant(buffer,object->ulLength);
    }
    return;
}

/****************************************************************************
 ����������  : BER_DecodeSubidentifier
 ��������    : ASN�����-BER�����ӱ�ʶ�������ݽ��뺯��
 �������    : ���ز����Ľṹָ��
 �������    : ��
 ����ֵ      : �����ӱ�ʶֵ
 ��ע        : X.691-23, ���������X.690��8.19����
 ��Ԫ���Լ�¼:
****************************************************************************/
_U32 BER_DecodeSubidentifier( ST_BITPOINTER *buffer )
{
    if( NULL == buffer )
    {
        return 0;
    }
    
    unsigned long       octet = 0;
    _U32                result = 0;

    result = 0;
    for(;;)
    {
        octet = BP_ReadBits(buffer, 8);
        result = (result << 7) | (octet & 0x7f);
        /* ֱ���ȵ���ʶ�����һ���ֽ��ӱ�ʶ���˳�ѭ�� */
        if ((octet & 0x80) == 0)
        {
            break;
        }
    }
    return(result);
}

#if 0
/****************************************************************************
 ����������  : PER_DecodeObjectIdentifier
 ��������    : ASN�����-�����ʶ�������ݽ��뺯��
 �������    : ���ز����Ľṹָ��
 �������    : ��������ʶ����ָ��
 ����ֵ      : ��
 ��ע        : X.691-23, ���������X.690��8.19����
 ��Ԫ���Լ�¼:
****************************************************************************/
void PER_DecodeObjectIdentifier( ObjectIdentifier *object, ST_BITPOINTER *buffer )
{
    _U32            i, len;
    _U32            first_two;
    _U8             *BufferPos ;

    H323_StackFprintf("ObjectId:",NULL_PTR);

    /* ���볤���� */
    object->ulLength = 1;
    if( (len = PER_DecodeLengthDeterminant(buffer)) > 0 )
    {
        BufferPos = buffer->bytes;
        for( i = 0; i < len ; i++ )
        {
            if( BufferPos[i] > 0x7F )   /* ���ʶ��һ���ӱ�ʶ��û����ȫ */
                continue;
            object->ulLength += 1 ;
        }
        object->subidentifiers = (_U32 *)Lothertps_malloc( mid_ctr_othertps | sid_ctr_OBJID, (object->ulLength * sizeof(_U32)));
        if( object->subidentifiers == NULL_PTR )
        {
            CODE_ERROR( 1, "RANAP�����-�����ڴ�ʧ��!   [[%s(%u)]]" );
            buffer->bytes = buffer->end;
            return;
        }

        /* ǰ�����ӱ�ʶ���� */
        first_two = BER_DecodeSubidentifier(buffer);
        object->subidentifiers[0] = first_two / 40;
        object->subidentifiers[1] = first_two % 40;
        /* ֮����ӱ�ʶ���� */
        for( i = 2;  i < object->ulLength; i++ )
        {
            object->subidentifiers[i] = BER_DecodeSubidentifier(buffer);
        }
    }
    else
    {
        /* ��ʶ�յĶ����ʶ */
        object->ulLength = 0;
    }
    return;
}


/****************************************************************************
 ����������  : PER_EncodeGeneralString
 ��������    : ASN�����-ͨ���ַ����������ݱ��뺯��
 �������    : ���ز����Ľṹָ��, ͨ���ַ���ָ��
 �������    : ��
 ����ֵ      : ��
 ��ע        : X.691-26
 ��Ԫ���Լ�¼:
****************************************************************************/
void PER_EncodeGeneralString( GeneralString *object, ST_BITPOINTER *buffer )
{
    PER_EncodeLengthDeterminant(buffer, object->ulLength);
    PER_EncodeRawOctetString(buffer, object->octets, object->ulLength);
    return;
}

/****************************************************************************
 ����������  : PER_DecodeGeneralString
 ��������    : ASN�����-ͨ���ַ����������ݽ��뺯��
 �������    : ���ز����Ľṹָ��
 �������    : ͨ���ַ���ָ��
 ����ֵ      : ��
 ��ע        : X.691-26
 ��Ԫ���Լ�¼:
****************************************************************************/
void PER_DecodeGeneralString( GeneralString *object, ST_BITPOINTER *buffer )
{
    object->ulLength = PER_DecodeLengthDeterminant(buffer);
    object->octets = PER_DecodeRawOctetString(buffer, object->ulLength);
    return;
}
#endif
#define _______________________________________________________________________ASN_SPECODESOLO01
/* -------------------------------���ܺ���------------------------------------*/
/****************************************************************************
 ����������  : PER_UnderOpenType
 ��������    : ASN�����-�������������ݵĳ��ȱ������λ����
 �������    : ��ʼ���ز����Ľṹָ��, �������ز����Ľṹָ��
 �������    : ��
 ����ֵ      : ��
 ��ע        : ����Ƕ�׵�Ӧ��
 ��Ԫ���Լ�¼:
****************************************************************************/
void PER_UnderOpenType( ST_BITPOINTER *buf_start, ST_BITPOINTER *buf_end )
{
    _U32            ulLength = 0;
    _U32            i = 0;
    _U8             buf_off = 0;

    if( (NULL == buf_start) || (NULL == buf_end) )
    {
        return;
    }
    
    ulLength = (unsigned long)(buf_end->bytes - buf_start->bytes);
    if( ulLength < 128 )
    {
        buf_off = 1;
    }
    else if( ulLength < 16384 )
    {
        buf_off = 2;
    }
    else
    {
        /* ��X.691�����ķֶα���, �ݲ�ִ�� */
        CODE_ERROR("RANAP�����-����ֶδ������֧��ִ��!");
    }

    /* ��λ ����BP_WriteBits�����������ڶ������������һ�ֽ�дһ��0
            ��ˣ������Ҷ���һλ��д�곤�Ⱥ�������һλ */
    for( i = ulLength; i > 0; i-- )
    {
        *(buf_start->bytes+i+buf_off)=*(buf_start->bytes+i-1);
    }

    /*��ӳ���*/
    PER_EncodeLengthDeterminant(buf_start,ulLength);

    for( i = 0; i < ulLength; i++ )
    {
        *(buf_start->bytes+i)=*(buf_start->bytes+i+1);
    }

    /* ����ʵ��buffer */
    buf_end->bytes      = buf_end->bytes + buf_off;
    buf_end->bytes[0]   = 0;
    return;
}

/****************************************************************************
 ����������  : PER_DecodeLeftedOpenType
 ��������    : ASN�����-����������������չ���в���Э���е����
 �������    : ���ز����Ľṹָ��, ��������Ԫ����Ŀ
 �������    : ��
 ����ֵ      : ��
 ��ע        : ����Ƕ�׵�Ӧ��
 ��Ԫ���Լ�¼:
****************************************************************************/
void PER_DecodeLeftedOpenType( ST_BITPOINTER *buffer, int number )
{
    if( NULL == buffer)
    {
        return;
    }
    
    for( ; number > 0; number-- )
    {
        _U32    ulLength;
        ulLength = PER_DecodeLengthDeterminant(buffer);
        buffer->bytes=buffer->bytes+ulLength;
    }
    return;
}

/****************************************************************************
 ����������  : PER_GetSubIDOctetsLen
 ��������    : ASN�����-���ܺ���:�����ӱ�ʶֵȡ�����ռ���ֽ���Ŀ
 �������    : �ӱ�ʶֵ
 �������    : ��
 ����ֵ      : ����ռ���ֽ���Ŀ
 ��ע        :
 ��Ԫ���Լ�¼:
****************************************************************************/
int PER_GetSubIDOctetsLen( _U32 value )
{
    if(LDB(4, 28, value))
    {
        return(5);
    }
    else if (LDB(7, 21, value))
    {
        return(4);
    }
    else if (LDB(7, 14, value))
    {
        return(3);
    }
    else if (LDB(7, 7, value))
    {
        return(2);
    }
    else
    {
        return(1);
    }
}
#define _______________________________________________________________________ASN_SPECODESOLOEND


/*---------------------------------------------------------------------------*/
#ifdef  __cplusplus
}
#endif
/*---------------------------------------------------------------------------*/
/*  ����ʵ�ֲ��ֽ���                                                         */
/*---------------------------------------------------------------------------*/
