/*-----------------------------------------------------------------------------
 文件名  : ASN_SpeCode.c
 作者    : ruansong
 版本    : v1.0
 完成日期: 2016-01-19
 文件描述: ASN.1－ASN特殊的编解码处理部分
 备注    : 特殊类型的编解码实现
 修改历史:
 1.修改者: ruansong
 时间    : 2016.01.19
 版本    : v1.0
 修改原因: 创建此文件
 2...
-----------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*/
/*  函数实现部分开始                                                         */
/*---------------------------------------------------------------------------*/
#include <stdio.h>

#ifdef  __cplusplus
extern "C" {
#endif
/*---------------------------------------------------------------------------*/

#include "ASN_SpeCode.h"
/*lint -e774 -e506 -e534*/

#define _______________________________________________________________________ASN_SPECODESOLOSTART
/* -----------------------------编解码函数------------------------------------*/
/****************************************************************************
 函数名名称  : BER_EncodeSubidentifier
 函数功能    : ASN编解码-BER规则子标识类型数据编码函数
 输入参数    : 比特操作的结构指针, 子标识值
 输出参数    : 无
 返回值      : 无
 备注        : X.691-23, 编码采用了X.690中8.19规则
 单元测试记录:
****************************************************************************/
void BER_EncodeSubidentifier( _U32 value, ST_BITPOINTER *buffer )
{
    if( NULL == buffer )
    {
        return;
    }
    
    int             started = 0;

    /* 子标识的数据编码每字节最多占用7位, 首比特标识是否是结束字节 */
    /* 因此对32位整数编码, 首先判断高4位是否有值 */
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
    /* 填最后一个字节, 首比特为0 */
    BP_WriteBits(buffer, LDB(7, 0, value), 8);
    return;
}

/****************************************************************************
 函数名名称  : PER_EncodeObjectIdentifier
 函数功能    : ASN编解码-对象标识类型数据编码函数
 输入参数    : 比特操作的结构指针, 对象标识数据指针
 输出参数    : 无
 返回值      : 无
 备注        : X.691-23, 编码采用了X.690中8.19规则
 单元测试记录:
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
        /* 前两个子标识按照公式:(X*40) + Y 计算的值编码 */
        first_two = (40 * object->subidentifiers[0]) + object->subidentifiers[1];
        len = (unsigned long)PER_GetSubIDOctetsLen(first_two);//lint !e571
        for (i = 2;  i < object->ulLength;  i++)
        {
            len += (unsigned long)PER_GetSubIDOctetsLen(object->subidentifiers[i]);//lint !e571
        }

        /* 对整个对象标识长度域编码 */
        PER_EncodeLengthDeterminant(buffer, len);
        /* 前两个子标识编码 */
        BER_EncodeSubidentifier(first_two, buffer);
        /* 之后的子标识编码 */
        for( i = 2;  i < object->ulLength; i++ )
        {
            BER_EncodeSubidentifier(object->subidentifiers[i], buffer);
        }
    }
    else
    {
        /* 长度0标识对象标识为空 */
        PER_EncodeLengthDeterminant(buffer,object->ulLength);
    }
    return;
}

/****************************************************************************
 函数名名称  : BER_DecodeSubidentifier
 函数功能    : ASN编解码-BER规则子标识类型数据解码函数
 输入参数    : 比特操作的结构指针
 输出参数    : 无
 返回值      : 解码子标识值
 备注        : X.691-23, 编码采用了X.690中8.19规则
 单元测试记录:
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
        /* 直到等到标识是最后一个字节子标识才退出循环 */
        if ((octet & 0x80) == 0)
        {
            break;
        }
    }
    return(result);
}

#if 0
/****************************************************************************
 函数名名称  : PER_DecodeObjectIdentifier
 函数功能    : ASN编解码-对象标识类型数据解码函数
 输入参数    : 比特操作的结构指针
 输出参数    : 解码对象标识数据指针
 返回值      : 无
 备注        : X.691-23, 编码采用了X.690中8.19规则
 单元测试记录:
****************************************************************************/
void PER_DecodeObjectIdentifier( ObjectIdentifier *object, ST_BITPOINTER *buffer )
{
    _U32            i, len;
    _U32            first_two;
    _U8             *BufferPos ;

    H323_StackFprintf("ObjectId:",NULL_PTR);

    /* 解码长度域 */
    object->ulLength = 1;
    if( (len = PER_DecodeLengthDeterminant(buffer)) > 0 )
    {
        BufferPos = buffer->bytes;
        for( i = 0; i < len ; i++ )
        {
            if( BufferPos[i] > 0x7F )   /* 这标识这一个子标识还没有完全 */
                continue;
            object->ulLength += 1 ;
        }
        object->subidentifiers = (_U32 *)Lothertps_malloc( mid_ctr_othertps | sid_ctr_OBJID, (object->ulLength * sizeof(_U32)));
        if( object->subidentifiers == NULL_PTR )
        {
            CODE_ERROR( 1, "RANAP编解码-申请内存失败!   [[%s(%u)]]" );
            buffer->bytes = buffer->end;
            return;
        }

        /* 前两个子标识解码 */
        first_two = BER_DecodeSubidentifier(buffer);
        object->subidentifiers[0] = first_two / 40;
        object->subidentifiers[1] = first_two % 40;
        /* 之后的子标识解码 */
        for( i = 2;  i < object->ulLength; i++ )
        {
            object->subidentifiers[i] = BER_DecodeSubidentifier(buffer);
        }
    }
    else
    {
        /* 标识空的对象标识 */
        object->ulLength = 0;
    }
    return;
}


/****************************************************************************
 函数名名称  : PER_EncodeGeneralString
 函数功能    : ASN编解码-通用字符串类型数据编码函数
 输入参数    : 比特操作的结构指针, 通用字符串指针
 输出参数    : 无
 返回值      : 无
 备注        : X.691-26
 单元测试记录:
****************************************************************************/
void PER_EncodeGeneralString( GeneralString *object, ST_BITPOINTER *buffer )
{
    PER_EncodeLengthDeterminant(buffer, object->ulLength);
    PER_EncodeRawOctetString(buffer, object->octets, object->ulLength);
    return;
}

/****************************************************************************
 函数名名称  : PER_DecodeGeneralString
 函数功能    : ASN编解码-通用字符串类型数据解码函数
 输入参数    : 比特操作的结构指针
 输出参数    : 通用字符串指针
 返回值      : 无
 备注        : X.691-26
 单元测试记录:
****************************************************************************/
void PER_DecodeGeneralString( GeneralString *object, ST_BITPOINTER *buffer )
{
    object->ulLength = PER_DecodeLengthDeterminant(buffer);
    object->octets = PER_DecodeRawOctetString(buffer, object->ulLength);
    return;
}
#endif
#define _______________________________________________________________________ASN_SPECODESOLO01
/* -------------------------------功能函数------------------------------------*/
/****************************************************************************
 函数名名称  : PER_UnderOpenType
 函数功能    : ASN编解码-处理开放类型数据的长度编码和移位函数
 输入参数    : 开始比特操作的结构指针, 结束比特操作的结构指针
 输出参数    : 无
 返回值      : 无
 备注        : 允许嵌套的应用
 单元测试记录:
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
        /* 按X.691描述的分段编码, 暂不执行 */
        CODE_ERROR("RANAP编解码-编码分段处理程序不支持执行!");
    }

    /* 移位 由于BP_WriteBits（）函数对于对齐情况总向下一字节写一个0
            因此，先向右多移一位，写完长度后在左移一位 */
    for( i = ulLength; i > 0; i-- )
    {
        *(buf_start->bytes+i+buf_off)=*(buf_start->bytes+i-1);
    }

    /*添加长度*/
    PER_EncodeLengthDeterminant(buf_start,ulLength);

    for( i = 0; i < ulLength; i++ )
    {
        *(buf_start->bytes+i)=*(buf_start->bytes+i+1);
    }

    /* 设置实际buffer */
    buf_end->bytes      = buf_end->bytes + buf_off;
    buf_end->bytes[0]   = 0;
    return;
}

/****************************************************************************
 函数名名称  : PER_DecodeLeftedOpenType
 函数功能    : ASN编解码-处理开放类型数据扩展项中不在协议中的项函数
 输入参数    : 比特操作的结构指针, 开发类型元素数目
 输出参数    : 无
 返回值      : 无
 备注        : 允许嵌套的应用
 单元测试记录:
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
 函数名名称  : PER_GetSubIDOctetsLen
 函数功能    : ASN编解码-功能函数:根据子标识值取其编码占用字节数目
 输入参数    : 子标识值
 输出参数    : 无
 返回值      : 编码占用字节数目
 备注        :
 单元测试记录:
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
/*  函数实现部分结束                                                         */
/*---------------------------------------------------------------------------*/
