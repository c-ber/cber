/*-----------------------------------------------------------------------------
 文件名  : ASN_PrimCode.c
 作者    : ruansong
 版本    : v1.0
 完成日期: 2016-01-19
 文件描述: ASN.1－ASN基本的编解码处理部分
 备注    : 基本类型的编解码实现: H323使用PER规则
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
/*---------------------------------------------------------------------------*/

#include "ASN_PrimCode.h"
/*lint -e774 -e506 -e534*/

#include "packet_entry.h"
/* -----------------------------编解码函数------------------------------------*/
/****************************************************************************
 函数名名称  : PER_EncodeBoolean
 函数功能    : ASN编解码-布尔类型数据编码函数
 输入参数    : 比特操作的结构指针, 值
 输出参数    : 无
 返回值      : 无
 备注        : X.691-11
 单元测试记录:
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
 函数名名称  : PER_DecodeBoolean
 函数功能    : ASN编解码-布尔类型数据解码函数
 输入参数    : 比特操作的结构指针
 输出参数    : 无
 返回值      : 解码值
 备注        : X.691-11
 单元测试记录:
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
 函数名名称  : PER_EncodeConstrainedWhole
 函数功能    : ASN编解码-受限整数类型数据编码函数
 输入参数    : 比特操作的结构指针, 受限范围值, 整数值
 输出参数    : 无
 返回值      : 无
 备注        : X.691-10.5:::range = ("ub" - "lb" + 1)
 单元测试记录:
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
    else if( range <= 16777216 )    /* 小于等于3字节 */
    {
        /* 按受限整数填写长度域 range: 0..2 */
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
        /* 这里我们限制最大值为32比特编码 */
        /* 按受限整数填写长度域 range: 0..3 */
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
 函数名名称  : PER_DecodeConstrainedWhole
 函数功能    : ASN编解码-受限整数类型数据解码函数
 输入参数    : 比特操作的结构指针, 受限范围值
 输出参数    : 无
 返回值      : 解码值
 备注        : X.691-10.5:::range = ("ub" - "lb" + 1)
 单元测试记录:
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
            /* 范围小于2,只有一个固定的值,不编码,因此返回0 */
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
    else if( range <= 16777216 )        /* 小于等于3字节 */
    {
        /* 按受限整数读出长度域 range: 0..2 */
        Length = PER_DecodeConstrainedWhole(ptr, 3);
        BP_ReadPad(ptr);    /* 后面的编码要对齐 */
        if( Length == 0 )
            n = BP_ReadBits(ptr, 8);
        if( Length == 1 )
            n = BP_ReadBits(ptr, 16);
        if( Length == 2)
            n = BP_ReadBits(ptr, 24);
    }
    else
    {
        /* 这里我们限制最大值为32比特编码 */
        /* 按受限整数读取长度域 range: 0..3 */
        Length = PER_DecodeConstrainedWhole(ptr, 4);
        BP_ReadPad(ptr);    /* 后面的编码要对齐 */
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
 函数名名称  : PER_EncodeUnConstrainedWhole
 函数功能    : ASN编解码-不受限整数类型数据编码函数
 输入参数    : 比特操作的结构指针, 值
 输出参数    : 无
 返回值      : 无
 备注        : X.691-10.8
 单元测试记录:
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
    /* 长度编码 */
    PER_EncodeLengthDeterminant(ptr, ulLength);
    /* 值编码 */
    BP_WriteBits(ptr, (_U32)value, 8 * ulLength);//lint !e571
    return;
}

/****************************************************************************
 函数名名称  : PER_DecodeUnConstrainedWhole
 函数功能    : ASN编解码-不受限整数类型数据解码函数
 输入参数    : 比特操作的结构指针
 输出参数    : 无
 返回值      : 解码值
 备注        : X.691-10.8
 单元测试记录:
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
        /* 负数 */
        n = (n | (UINT_MAX << (8 * (_U16)ulLength)));
    }
    return(n);
}

/****************************************************************************
 函数名名称  : PER_EncodeExtendConstrainedWhole
 函数功能    : ASN编解码-带扩展的受限整数类型数据编码函数
 输入参数    : 比特操作的结构指针
 输出参数    : 无
 返回值      : 解码值
 备注        : X.691-10.8
 单元测试记录:
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
 函数名名称  : PER_DecodeExtendConstrainedWhole
 函数功能    : ASN编解码-带扩展的受限整数类型数据解码函数
 输入参数    : 比特操作的结构指针
 输出参数    : 无
 返回值      : 解码值
 备注        : X.691-10.8
 单元测试记录:
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
 函数名名称  : PER_EncodeLengthDeterminant
 函数功能    : ASN编解码-长度决定类型数据编码函数
 输入参数    : 比特操作的结构指针, 长度值
 输出参数    : 无
 返回值      : 无
 备注        : X.691-10.9
               长度决定类型有点类似受限整数, 但它有一些标志比特和处理以允许
               编码无限长度.
               本系统暂不处理超过32比特的整数
 单元测试记录:
****************************************************************************/
void PER_EncodeLengthDeterminant(ST_BITPOINTER *ptr, unsigned long ulLength)
{
    if( NULL == ptr )
    {
        return;
    }
    
    if( ulLength <= 127 )
    {
        /* 按受限整数编码, 占用一个对齐字节, 高8比特位为0 */
        PER_EncodeConstrainedWhole(ptr, 256, ulLength);
    }
    else if( ulLength < 16384 )   /* 小于16K */
    {
        /* 按受限整数编码, 占用两个对齐字节, 第一个高字节的8,7比特为10 */
        PER_EncodeConstrainedWhole(ptr, 65536, (ulLength | 0x8000));
    }
    else
    {
        /* 按X.691描述的分段编码, 暂不执行 */
        CODE_ERROR("RANAP编解码-编码分段处理程序不支持执行!");
    }
    return;
}

/****************************************************************************
 函数名名称  : PER_DecodeLengthDeterminant
 函数功能    : ASN编解码-长度决定类型数据解码函数
 输入参数    : 比特操作的结构指针
 输出参数    : 无
 返回值      : 解码值
 备注        : X.691-10.9
               长度决定类型有点类似受限整数, 但它有一些标志比特和处理以允许
               编码无限长度.
               本系统暂不处理超过32比特的整数
 单元测试记录:
****************************************************************************/
unsigned int PER_DecodeLengthDeterminant( ST_BITPOINTER *ptr )
{
    if( NULL == ptr )
    {
        return 0;
    }
    
    unsigned int        n = 0;

    BP_ReadPad(ptr);    /* 肯定要字节对齐 */
    if( BP_ReadBits(ptr, 1) == 0 )
    {
        /* 首比特为0, 一个字节长度类型 */
        n = BP_ReadBits(ptr, 7);
    }
    else if( BP_ReadBits(ptr, 1) == 0 )
    {
        /* 首比特为1, 第二比特为0, 两个字节长度类型 */
        n = BP_ReadBits(ptr, 14);
    }
    else
    {
        /* 否则为分段编码类型, 暂不执行 */
        CODE_ERROR("S1AP编解码-解码分段处理程序不支持执行!");
    }
    return(n);
}

/****************************************************************************
 函数名名称  : PER_EncodeNormallySmallWhole
 函数功能    : ASN编解码-通常小整数类型数据编码函数
 输入参数    : 比特操作的结构指针, 值
 输出参数    : 无
 返回值      : 无
 备注        : X.691-10.6
               通常小整数类型是指其值非常小, 但是可以扩展为无限大, 即没有上限,
               通常的应用是代扩展标记的CHOICE类型编解码
 单元测试记录:
****************************************************************************/
void PER_EncodeNormallySmallWhole( ST_BITPOINTER *ptr, unsigned long value )
{
    if( NULL == ptr )
    {
        return;
    }
    
    if( value < 64 )
    {
        /* 附加一个比特为0, 然后用6比特编码值 */
        BP_WriteBits(ptr, 0, 1);
        BP_WriteBits(ptr, value, 6);
    }
    else
    {
        /* 否则, 附加一个比特为1, 值作为最低限为0的半受限整数编码 */
        BP_WriteBits(ptr, 1, 1);
        PER_EncodeSemiConstrainedWhole(ptr, value);
    }
    return;
}

/****************************************************************************
 函数名名称  : PER_DecodeNormallySmallWhole
 函数功能    : ASN编解码-通常小整数类型数据解码函数
 输入参数    : 比特操作的结构指针
 输出参数    : 无
 返回值      : 解码值
 备注        : X.691-10.6
               通常小整数类型是指其值非常小, 但是可以扩展为无限大, 即没有上限,
               通常的应用是代扩展标记的CHOICE类型编解码
 单元测试记录:
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
        /* 附加比特为0, 用6比特解码 */
        n = BP_ReadBits(ptr, 6);
    }
    else
    {
        /* 由于半受限整数编码时进行字节对齐, 因此首先解出长度决定类型值 */
        unsigned int ulLength = PER_DecodeLengthDeterminant(ptr);
        n = BP_ReadBits(ptr, 8 * ulLength);
    }
    return(n);
}

/****************************************************************************
 函数名名称  : PER_EncodeSemiConstrainedWhole
 函数功能    : ASN编解码-半受限整数类型数据编码函数
 输入参数    : 比特操作的结构指针, 值
 输出参数    : 无
 返回值      : 无
 备注        : X.691-10.7
               半受限整数类型是指有下限但没有上限的整数, 通常用字节串长度
 单元测试记录:
****************************************************************************/
void PER_EncodeSemiConstrainedWhole( ST_BITPOINTER *ptr, unsigned long value )
{
    if( NULL == ptr )
    {
        return;
    }
    
    unsigned int    ulLength = 0;

    /* 取长度域占用的字节数, 超过4的不处理 */
    ulLength = PER_FuncGetOctetsLen(value);
    /* 长度编码 */
    PER_EncodeLengthDeterminant(ptr, ulLength);
    /* 值编码 */
    BP_WriteBits(ptr, value, 8 * ulLength);
    return;
}

/****************************************************************************
 函数名名称  : PER_DecodeSemiConstrainedWhole
 函数功能    : ASN编解码-半受限整数类型数据解码函数
 输入参数    : 比特操作的结构指针
 输出参数    : 无
 返回值      : 解码值
 备注        : X.691-10.7
               半受限整数类型是指有下限但没有上限的整数, 通常用字节串长度
 单元测试记录:
****************************************************************************/
unsigned int PER_DecodeSemiConstrainedWhole( ST_BITPOINTER *ptr )
{
    if( NULL == ptr )
    {
        return 0;
    }
    
    unsigned int        n = 0;
    unsigned int        ulLength = 0;

    /* 解码长度域 */
    ulLength = PER_DecodeLengthDeterminant(ptr);
    /* 解码值域 */
    n = BP_ReadBits(ptr, 8 * ulLength);
    return(n);
}

#if 0
/****************************************************************************
 函数名名称  : PER_EncodeRawOctetString
 函数功能    : ASN编解码-原始字节串数据编码函数
 输入参数    : 比特操作的结构指针, 编码字节串指针, 长度
 输出参数    : 无
 返回值      : 无
 备注        : X.691-16
               原始字节串数据是不包含长度域的字节串
 单元测试记录:
****************************************************************************/
void PER_EncodeRawOctetString( ST_BITPOINTER *ptr, char *octets, unsigned int ulLength )
{
    BP_Pad(ptr);    /* 注意: X691规定长度小于等于两字节的字节串类型不用字节对齐,
                       但H325协议定义中不存在不对齐情况, 因此这里做对齐处理
                       单独提供函数实现小于两字节情况编解码函数 */

    while( ulLength-- > 0 )
    {
        BP_WriteBits(ptr, (unsigned long)(*(_U8*)octets), 8);
        octets++;
    }
    return;
}

/****************************************************************************
 函数名名称  : PER_EncodeRawOctetString
 函数功能    : ASN编解码-原始字节串数据解码函数
 输入参数    : 比特操作的结构指针, 长度
 输出参数    : 无
 返回值      : 解码字节串指针
 备注        : X.691-16
               原始字节串数据是不包含长度域的字节串, 本函数需申请内存
 单元测试记录:
****************************************************************************/
char *PER_DecodeRawOctetString( ST_BITPOINTER *ptr, unsigned int ulLength )
{
    char            *result = NULL_PTR;
    char            *walker = NULL_PTR;

    if(ulLength == 0)
    {
		CODE_ERROR("RANAP编解码-输入参数长度错误!" );
    	return NULL_PTR;
    }
    result = (char *)ASN_PrimMalloc( mid_ctr_prim | sid_ctr_ROCTETS, (ulLength*sizeof(char)));
    if( result == NULL_PTR )
    {
		CODE_ERROR("S1AP编解码-申请内存失败!" );
		ptr->bytes = ptr->end;
    	return NULL_PTR;
    }
    else
    {
    	walker = result;
    }

    /* 字节对齐 */
    BP_ReadPad(ptr);

    while( ulLength-- > 0 )
    {
        *walker++ = (char)LDB(8, 0, BP_ReadBits(ptr, 8));
    }
    return(result);
}

/****************************************************************************
 函数名名称  : PER_EncodeRawDTMFString
 函数功能    : ASN编解码-原始DTMF字节串数据编码函数
 输入参数    : 比特操作的结构指针, DTMF字节串指针, 长度
 输出参数    : 无
 返回值      : 无
 备注        : X.691-16
               原始DTMF串数据是不包含长度域的DTMF类型字节串, DTMFString
               一个字符占4位
 单元测试记录:
****************************************************************************/
void PER_EncodeRawDTMFString( ST_BITPOINTER *ptr, char *octets, unsigned int ulLength )
{
    /* 字节对齐 */
    BP_Pad(ptr);

    while( ulLength-- > 0 )
    {
        BP_WriteBits(ptr, (unsigned long)(*(_U8*)octets), 4);
        octets++;
    }
    return;
}

/****************************************************************************
 函数名名称  : PER_DecodeRawDTMFString
 函数功能    : ASN编解码-原始DTMF字节串数据解码函数
 输入参数    : 比特操作的结构指针, 长度
 输出参数    : 无
 返回值      : 解码DTMF字节串指针
 备注        : X.691-16
               原始DTMF串数据是不包含长度域的DTMF类型字节串, DTMFString
               一个字符占4位, 本函数需申请内存
 单元测试记录:
****************************************************************************/
char* PER_DecodeRawDTMFString( ST_BITPOINTER *ptr, unsigned int ulLength )
{
    char                *result = NULL_PTR;
    char                *walker = NULL_PTR;

    if(ulLength == 0)
    {
		CODE_ERROR("RANAP编解码-输入参数长度错误!" );
    	return NULL_PTR;
    }
    result = (char *)ASN_PrimMalloc(mid_ctr_prim | sid_ctr_RDTMFS, (ulLength*sizeof(char)));
    if (result == NULL_PTR)
    {
            CODE_ERROR("RANAP编解码-申请内存失败!" );
            ptr->bytes = ptr->end;
            return NULL_PTR;
    }
    else
    {
            walker = result;
    }

    /* 字节对齐 */
    BP_ReadPad(ptr);

    while( ulLength-- > 0 )
    {
        *walker++ = (char)LDB(4, 0, BP_ReadBits(ptr, 4));
    }
    return(result);
}

/****************************************************************************
 函数名名称  : PER_EncodeRawBMPString
 函数功能    : ASN编解码-原始BMP字节串数据编码函数
 输入参数    : 比特操作的结构指针, BMP字节串指针, 长度
 输出参数    : 无
 返回值      : 无
 备注        : X.691-16
               原始BMP串数据是不包含长度域的BMP类型字节串
 单元测试记录:
****************************************************************************/
void PER_EncodeRawBMPString( ST_BITPOINTER *ptr, unsigned short *octets, unsigned int ulLength )
{
    /* 字节对齐 */
    BP_Pad(ptr);

    while( ulLength-- > 0 )
    {
        BP_WriteBits(ptr, *octets++, 16);
    }
    return;
}

/****************************************************************************
 函数名名称  : PER_DecodeRawBMPString
 函数功能    : ASN编解码-原始BMP字节串数据解码函数
 输入参数    : 比特操作的结构指针, 长度
 输出参数    : 无
 返回值      : 解码BMP字节串指针
 备注        : X.691-16
               原始BMP串数据是不包含长度域的BMP类型字节串, 本函数需申请内存
 单元测试记录:
****************************************************************************/
unsigned short* PER_DecodeRawBMPString( ST_BITPOINTER *ptr, unsigned int ulLength )
{
    unsigned short      *result = NULL_PTR;
    unsigned short      *walker = NULL_PTR;

    if(ulLength == 0)
    {
		CODE_ERROR("RANAP编解码-输入参数长度错误!" );
    	return NULL_PTR;
    }
    result = (unsigned short *)ASN_PrimMalloc(mid_ctr_prim | sid_ctr_RBMPS, (ulLength*sizeof(unsigned short)));
    if( result == NULL_PTR )
    {
        CODE_ERROR("RANAP编解码-申请内存失败!" );
        ptr->bytes = ptr->end;
        return NULL_PTR;
    }
    else
    {
        walker = result;
    }

    /* 字节对齐 */
    BP_ReadPad(ptr);

    while( ulLength-- > 0 )
    {
        *walker++ = (_U16)LDB(16, 0, BP_ReadBits(ptr, 16));
    }
    return(result);
}

/****************************************************************************
 函数名名称  : PER_EncodeRawIA5String
 函数功能    : ASN编解码-原始IA5字节串数据编码函数
 输入参数    : 比特操作的结构指针, IA5字节串指针, 长度, IA5占用字节比特长度
 输出参数    : 无
 返回值      : 无
 备注        : X.691-16
               原始IA5串数据是不包含长度域的IA5类型字节串
 单元测试记录:
****************************************************************************/
void PER_EncodeRawIA5String( ST_BITPOINTER *ptr, char *octets, unsigned int ulLength, unsigned int bit_length )
{
    /* 字节对齐 */
    BP_Pad(ptr);

    while( ulLength-- > 0 )
    {
        BP_WriteBits(ptr, (unsigned long)(*(_U8*)octets), bit_length);
        octets++;
    }
    return;
}

/****************************************************************************
 函数名名称  : PER_DecodeRawIA5String
 函数功能    : ASN编解码-原始IA5字节串数据解码函数
 输入参数    : 比特操作的结构指针, 长度, IA5占用字节比特长度
 输出参数    : 无
 返回值      : 解码IA5字节串指针
 备注        : X.691-16
               原始IA5串数据是不包含长度域的IA5类型字节串
 单元测试记录:
****************************************************************************/
char* PER_DecodeRawIA5String( ST_BITPOINTER *ptr, unsigned int ulLength, unsigned int bit_length )
{
    char                *result = NULL_PTR;
    char                *walker = NULL_PTR;

    if(ulLength == 0)
    {
		CODE_ERROR("RANAP编解码-输入参数长度错误!" );
    	return NULL_PTR;
    }
    result = (char *)ASN_PrimMalloc(mid_ctr_prim | sid_ctr_RIA5S, (ulLength*sizeof(char)));
    if( result == NULL_PTR )
    {
        CODE_ERROR("RANAP编解码-申请内存失败!" );
        ptr->bytes = ptr->end;
        return NULL_PTR;
    }
    else
    {
        walker = result;
    }

    /* 字节对齐 */
    BP_ReadPad(ptr);

    while( ulLength-- > 0 )
    {
        *walker++ = (char)LDB(bit_length, 0, BP_ReadBits(ptr, bit_length));
    }
    return(result);
}

/****************************************************************************
 函数名名称  : PER_EncodeRawShortOctetString
 函数功能    : ASN编解码-原始短字节串数据编码函数
 输入参数    : 比特操作的结构指针, 编码字节串指针, 长度
 输出参数    : 无
 返回值      : 无
 备注        : X.691-16
               原始短字节串数据是不包含长度域的字节串
 单元测试记录:
****************************************************************************/
void PER_EncodeRawShortOctetString( ST_BITPOINTER *ptr, char *octets, unsigned int ulLength )
{
    if( ulLength > 2)
    {
        /* 长度大于2要进行对齐 */
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
 函数名名称  : PER_DecodeRawShortOctetString
 函数功能    : ASN编解码-原始短字节串数据解码函数
 输入参数    : 比特操作的结构指针, 长度
 输出参数    : 无
 返回值      : 解码字节串指针
 备注        : X.691-16
               原始短字节串数据是不包含长度域的字节串
 单元测试记录:
****************************************************************************/
char *PER_DecodeRawShortOctetString( ST_BITPOINTER *ptr, unsigned int ulLength )
{
    char                *result = NULL_PTR;
    char                *walker = NULL_PTR;

    if(ulLength == 0)
    {
		CODE_ERROR("RANAP编解码-输入参数长度错误!" );
    	return NULL_PTR;
    }
    result = (char *)ASN_PrimMalloc(mid_ctr_prim | sid_ctr_RSOCTETS, (ulLength*sizeof(char)));
    if( result == NULL_PTR )
    {
        CODE_ERROR("RANAP编解码-申请内存失败!" );
        ptr->bytes = ptr->end;
        return NULL_PTR;
    }
    else
    {
        walker = result;
    }

    if( ulLength > 2 )
    {
        /* 长度大于2要进行对齐 */
        BP_ReadPad(ptr);
    }

    while( ulLength-- > 0 )
    {
        *walker++ = (char)LDB(8, 0, BP_ReadBits(ptr, 8));
    }
    return(result);
}

/****************************************************************************
 函数名名称  : PER_EncodeOctetString
 函数功能    : ASN编解码-字节串类型数据编码函数
 输入参数    : 比特操作的结构指针, 编码字节串指针, 长度
 输出参数    : 无
 返回值      : 无
 备注        : X.691-16
 单元测试记录:
****************************************************************************/
void PER_EncodeOctetString( ST_BITPOINTER *ptr, char *octets, unsigned int ulLength )
{
    /* 编码长度域 */
    PER_EncodeLengthDeterminant(ptr, ulLength);
    if(ulLength > 0)
    {
        /* 编码数据域 */
        PER_EncodeRawOctetString(ptr, octets, ulLength);
    }
    return;
}

/****************************************************************************
 函数名名称  : PER_DecodeOctetString
 函数功能    : ASN编解码-字节串类型数据解码函数
 输入参数    : 比特操作的结构指针
 输出参数    : 长度
 返回值      : 解码字节串指针
 备注        : X.691-16
 单元测试记录:
****************************************************************************/
char *PER_DecodeOctetString( ST_BITPOINTER *ptr, unsigned int *ulLength )
{
    unsigned int        len;

    /* 解码长度 */
    len = PER_DecodeLengthDeterminant(ptr);
    if( ulLength )
    {
        *ulLength = len;
    }

    if( len == 0 )
    {
        return NULL_PTR;
    }
    /* 解码数据 */
    return(PER_DecodeRawOctetString(ptr, len));
}


/****************************************************************************
 函数名名称  : PER_EncodeConstrainedOctetString
 函数功能    : ASN编解码-受限的字节串类型数据编码函数
 输入参数    : 比特操作的结构指针, 编码字节串指针, 长度, 范围, 底限
 输出参数    : 无
 返回值      : 无
 备注        : X.691-16
 单元测试记录:
****************************************************************************/
void PER_EncodeConstrainedOctetString( ST_BITPOINTER *ptr, char *octets,
                                                     unsigned int ulLength, unsigned int range,
                                                     unsigned int bottom )
{
    /* 编码长度域 */
    PER_EncodeConstrainedWhole(ptr,range,ulLength-bottom);
    /* 编码数据域 */
    PER_EncodeRawOctetString(ptr,octets,ulLength);
    return;
}

/****************************************************************************
 函数名名称  : PER_DecodeConstrainedOctetString
 函数功能    : ASN编解码-受限的字节串类型数据解码函数
 输入参数    : 比特操作的结构指针, 长度, 范围, 底限
 输出参数    : 无
 返回值      : 解码字节串指针
 备注        : X.691-16
 单元测试记录:
****************************************************************************/
char *PER_DecodeConstrainedOctetString( ST_BITPOINTER *ptr, unsigned int *ulLength,
									                  unsigned int range, unsigned int bottom )
{
    unsigned int        len;

    /* 解码长度 */
    len = PER_DecodeConstrainedWhole(ptr, range)+bottom;
    if( ulLength )
    {
        *ulLength = len;
    }
    /* 解码数据 */
    return(PER_DecodeRawOctetString(ptr, len));
}
#endif

/* -------------------------------功能函数------------------------------------*/
/****************************************************************************
 函数名名称  : PER_FuncGetOctetsLen
 函数功能    : ASN编解码-功能函数:得到输入整数的长度编解码占用字节数
 输入参数    : 整数值
 输出参数    : 无
 返回值      : 长度编解码占用字节数
 备注        :
 单元测试记录:
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
    /* 超过32比特的长度不支持 */
}

/*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*/
/*  函数实现部分结束                                                         */
/*---------------------------------------------------------------------------*/
