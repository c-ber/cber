/*-----------------------------------------------------------------------------
 文件名  : ASN_BitOpr.c
 作者    : ruansong
 版本    : v1.0
 完成日期: 2016-01-19
 文件描述: ASN.1－底层比特流的操作处理
 备注    :
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

#include "ASN_BitOpr.h"

#if 0
extern void EOS_GetPureFileName( const char *pchSrcFileName, char **ppchPureFileName );
/*
    获取不带路径的文件名
*/
char*  H323APP_CurFileName(const char *pchSrcFileName)
{
    char *pchPureFileName = NULL_PTR;
    EOS_GetPureFileName( pchSrcFileName, &pchPureFileName );
    return pchPureFileName;
}

void* TEMP_Malloc( _U16 usPid, _U32 ulOption, _U32 ulSize, const _S8 *pFileName, _U32 ulLine)
{
    void    *pRet = NULL_PTR;

    #if  H323_CHECK_CODE
        pRet = malloc( ulSize );
    #else
        pRet = ROS_MemDynAlloc_X(ulSize, ulOption, pFileName, ulLine);
    #endif
    if(pRet == NULL_PTR)
    {
        return pRet;
    }
    TEMP_MemSet(pRet, 0, ulSize);
    usPid = usPid;
    return  pRet;
}


/*lint -e774 -e506 -e534*/
/****************************************************************************
 函数名名称  : BP_MakePointer
 函数功能    : ASN编解码-生成比特指针结构函数
 输入参数    : 接收的数据指针, 数据长度
 输出参数    : 无
 返回值      : 比特操作的结构指针
 备注        :
 单元测试记录:
****************************************************************************/
ST_BITPOINTER* BP_MakePointer( unsigned char *buffer, unsigned int length_in_bytes )
{
    /* 申请结构占用内存 */
    ST_BITPOINTER *ptr = (ST_BITPOINTER *)H323_MALLOC( PID_RANAP, ROS_MEM_ALLOC_OPT_NONE, sizeof(ST_BITPOINTER) );
    if( ptr == NULL_PTR )
    {
        return(NULL_PTR);
    }
    else
    {
        ptr->bytes      = buffer;                   /* 字节指针指向输入的数据头 */
        ptr->bits       = 0;                        /* 当前处理的比特位置为0 */
        ptr->end        = buffer + length_in_bytes; /* 字节结束指针指向数据尾部 */
        return(ptr);
    }
}
#endif

/****************************************************************************
 函数名名称  : BP_SetBitPointer
 函数功能    : ASN编解码-设置比特指针结构函数
 输入参数    : 比特操作的结构指针, 接收的数据指针, 数据长度
 输出参数    : 无
 返回值      : 比特操作的结构指针
 备注        : 此操作对已经存在的比特操作的结构指针进行设置, 加入控制数据
 单元测试记录:
****************************************************************************/
void BP_SetBitPointer( ST_BITPOINTER *bp, unsigned char *buffer, unsigned int length_in_bytes )
{
    if((NULL == bp) || (NULL == buffer))
    {
        return;
    }
    
    bp->bytes       = buffer;                       /* 字节指针指向输入的数据头 */
    bp->bits        = 0;                            /* 当前处理的比特位置为0 */
    bp->end         = buffer + length_in_bytes;     /* 字节结束指针指向数据尾部 */
}

/****************************************************************************
 函数名名称  : BP_Increment
 函数功能    : ASN编解码-比特指针增加的控制函数
 输入参数    : 比特操作的结构指针, 接收的数据指针, 数据长度
 输出参数    : 无
 返回值      : 0: 正常; 其它: 错误码(保留)
 备注        : 当调用读,写比特指针数据后, 可以调用此函数, 使比特指针指向新的位置
               指针ptr->bytes按当前字节数后移. 当前字节数=(newbits>>3)
               当前比特数newbits=原来的bits+新增的by_bits
               计算出新的ptr->bits值
 单元测试记录:
****************************************************************************/
int BP_Increment( ST_BITPOINTER *ptr, unsigned int by_bits )
{
    unsigned int    newbits = 0;

    if( NULL == ptr )
    {
        return 0;
    }

    /* 保护, 判断字节指针是否越界 */
    if( ptr->bytes == ptr->end )
    {
        CODE_ERROR("RANAP编解码-比特指针增加操作时记录的指针越界!");
        return(0);
    }

    /* 当前比特数：newbits = 原来的bits + 新增的by_bits */
    newbits = ptr->bits + by_bits;

    /* 当前字节数= (newbits >> 3) : 除8操作 */
    if( (ptr->bytes + (newbits >> 3)) <= ptr->end)
    {
        ptr->bytes += (newbits >> 3);           /* 指针ptr->bytes按当前字节数后移 */
        ptr->bits  = newbits & (CHAR_BITS - 1);  /* ptr->bits中剩下的比特数,必定小于CHAR_BIT */
        return(0);
    }
    else
    {
        CODE_ERROR("RANAP编解码-比特指针增加操作时增加的比特造成指针越界!");
    }
    return(0);
}

/****************************************************************************
 函数名名称  : BP_ReadBits
 函数功能    : ASN编解码-从当前比特位置读取指定长度比特的处理函数
 输入参数    : 比特操作的结构指针, 接收的数据指针, 数据长度(比特数目(<=32))
 输出参数    : 无
 返回值      : 指定比特的取值(缺省情况返回0)
 备注        : 从(UC *)ptr->bytes中读取nbits比特(nbits<= 32，小于一个长字),
               读取的值放在返回值val中,指针ptr->bytes按当前读取的字节数后移
 单元测试记录:
****************************************************************************/
unsigned long BP_ReadBits( ST_BITPOINTER *ptr, unsigned int nbits )
{
    if( NULL == ptr )
    {
        return 0;
    }
    
    unsigned long       val=0;                  /* 返回值 */
    unsigned int        offset = ptr->bits;     /* 原ptr->bits中已经读出的bit数, <8bits */
    unsigned int        so_far = 0;                 /* 要从(uchar *)ptr->bytes中读取的比特数 = nbits <= 32 */
    unsigned char       *step =  NULL;                  /* 控制读取的字节指针 */


    /* 判断加上指定比特的读取是否造成指针越界 */
    if( (unsigned int)( (ptr->end - ptr->bytes + 1)*8 ) < (unsigned int)(nbits+ptr->bits) )
    {
        CODE_ERROR("RANAP编解码-比特指针读取操作时读取的比特造成指针越界");
        ptr->bytes = ptr->end;
        ptr->bits  = 0;
        return 0;
    }

    /* 判断指定比特长度有效性, 不能大于一个长字 */
    if( nbits > 32 )
    {
        CODE_ERROR("RANAP编解码-比特指针读取操作时读取的比特长度大于32!");
        return 0;
    }

    if( NULL == ptr->bytes )
    {
        return 0;
    }

    /* 读取比特值操作 */
    if( offset == 0 )
    {
        /* (1):原ptr->bits中剩下的比特数为0, 刚好字节对齐 */
        step    = ptr->bytes;
        val     = 0;
        so_far  = nbits;
        while( so_far >= CHAR_BITS )
        {
            /* while循环不会超过4次 */
            val = (val << CHAR_BITS) | *step++;      /* val获得了(uchar *)ptr->bytes的值 */
            so_far -= CHAR_BITS;                     /* 要读的比特数减少8个(#define CHAR_BITS 8) */
        }
        /* while循环之后, so_far < CHAR_BITS */
        /* 如果so_far=0, val的值不变 */
        val = (val << so_far) | LDB(so_far, (CHAR_BITS - so_far), *step);
    }
    else if( nbits <= (CHAR_BITS - offset) )
    {
        /* (2):原ptr->bits中剩下的比特数不为0, 字节不对齐 */
        /*     要读的比特nbits数+当前的比特数小于一个字节 */
        val = LDB( nbits, (CHAR_BITS - offset - nbits), *(ptr->bytes) );
    }
    else
    {
        /* (3):原ptr->bits中剩下的比特数不为0, 字节不对齐 */
        /*     要读的比特nbits数+当前的比特数大于一个字节 */
        step   = ptr->bytes;
        val    = LDB((CHAR_BITS - offset), 0, *step++);  /* 先取当前字节剩余比特的值 */
        so_far = nbits - (CHAR_BITS - offset);           /* 要读取的比特减去已读取的数 */
        while( so_far >= CHAR_BITS )
        {
            val = (val << CHAR_BITS) | *step++;
            so_far -= CHAR_BITS;
        }
        val = (val << so_far) | LDB(so_far, (CHAR_BITS - so_far), *step);
    }
    /* 记录比特指针更新 */
    BP_Increment( ptr, nbits );
    /* 将指针值ptr->bytes按当前读取的字节数后移, 当前字节数=(newbits >> 3)
     当前比特数newbits=原来的bits+新增的by_bits, 原来的bits数: offset = ptr->bits < 8 */
    return(val);
}

/****************************************************************************
 函数名名称  : BP_WriteBits
 函数功能    : ASN编解码-向比特指针结构的数据区写入指定长度比特值的处理函数
 输入参数    : 比特操作的结构指针, 写入的数据值, 数据长度(比特数目(<=32))
 输出参数    : 无
 返回值      : 无
 备注        : 向(UC *)ptr->bytes写入nbits比特(nbits<= 32, 小于一个长字),要
               写入的值放在value中,指针ptr->bytes按当前写入的字节数后
 单元测试记录:
****************************************************************************/
void BP_WriteBits(ST_BITPOINTER *ptr, unsigned long value, unsigned int nbits)
{
    if( NULL == ptr )
    {
        return;
    }
   
    unsigned int        offset = ptr->bits;         /* 原ptr->bits中剩下的比特数, < 8bits */
    unsigned int        so_far = 0;                     /* 要向(UC *)ptr->bytes中写入的比特数, =nbits <= 32 */
    unsigned char       *step = NULL;                      /* 控制写入的字节指针 */

    /* 判断指定比特长度有效性, 不能大于一个长字 */
    if( nbits > 32 )
    {
        CODE_ERROR("RANAP编解码-比特指针写入操作时写入的比特长度大于32!");
        return;
    }

    /* 判断加上指定比特的写入是否造成指针越界 */
    if( (unsigned int)( (ptr->end - ptr->bytes)*8 ) < (unsigned int)(nbits+ptr->bits) )
    {
        CODE_ERROR("RANAP编解码-比特指针写入操作时写入的比特造成指针越界!");
        ptr->bytes = ptr->end;
        ptr->bits  = 0;
        return;
    }

    if( NULL == ptr->bytes )
    {
        return;
    }

    /* 写入比特值操作 */
    if( offset == 0 )
    {
        /* (1):原ptr->bits中剩下的比特数为0, 刚好字节对齐 */
        step   = ptr->bytes;    /* 指向当前字节 */
        so_far = nbits;         /* 要向(UC *)ptr->bytes中写入的比特数=nbits<=32, 这样,下面的while循环不会超过4次 */
        while( so_far >= CHAR_BITS )
        {
            /* 从value的高位字节开始, 每次向ptr->bytes所指的buffer中写入一个字节,
               并将指针step后移一个字节 */
            *step++ = (unsigned char)LDB( CHAR_BITS, (so_far - CHAR_BITS), value );
            so_far -= CHAR_BITS;     /* 要写的比特数减少了8 */
        }
        /* 如果so_far=0, 写入一个零值字节到下一个字节区 */
        *step++ = (unsigned char)(LDB(so_far, 0, value) << (CHAR_BITS - so_far));
    }
    else if (nbits <= (CHAR_BITS - offset))
    {
        /* (2):原ptr->bits中剩下的比特数不为0, 字节不对齐 */
        /*     要写的比特nbits数+当前的比特数小于一个字节 */
        *(ptr->bytes) = (unsigned char) ((*(ptr->bytes) & ~MASK(CHAR_BITS - offset))
                        | ((value & MASK(CHAR_BITS - offset)) << (CHAR_BITS - offset - nbits)));
    }
    else
    {
        /* (3):原ptr->bits中剩下的比特数不为0, 字节不对齐 */
        /*     要写的比特nbits数+当前的比特数大于一个字节 */
        *(ptr->bytes) = (unsigned char) ((*(ptr->bytes) & ~MASK(CHAR_BITS - offset))
                        | (LDB(CHAR_BITS - offset, (nbits - (CHAR_BITS - offset)), value)));
        step   = ptr->bytes + 1;
        so_far = nbits - (CHAR_BITS - offset);
        while( so_far >= CHAR_BITS )
        {
            *step++ = (unsigned char)LDB(CHAR_BITS, (so_far - CHAR_BITS), value);
            so_far -= CHAR_BITS;
        }
        *step++ = (unsigned char)(LDB(so_far, 0, value) << (CHAR_BITS - so_far));
    }
    /* 记录比特指针更新 */
    BP_Increment(ptr, nbits);
    /* 将指针值ptr->bytes按当前写入的字节数后移
       当前字节数=(newbits>>3); 当前比特数newbits=原来的bits+新增的nbits;
       原来的bits数: offset=ptr->bits<8 */
    return;
}

/****************************************************************************
 函数名名称  : BP_Pad
 函数功能    : ASN编解码-向比特指针结构的数据区填充0值比特的处理函数
 输入参数    : 比特操作的结构指针
 输出参数    : 无
 返回值      : 无
 备注        : 在ptr->bits中补上若干个零值比特,从而使之字节对齐,并使ptr->bits=0
 单元测试记录:
****************************************************************************/
void BP_Pad( ST_BITPOINTER *ptr )
{
    if( NULL == ptr )
    {
        return;
    }
    
    /* 原ptr->bits中剩下的比特数不为0, 字节没有对齐 */
    if( ptr->bits != 0 )
    {
        /* 将原ptr->bits中剩下的比特数补上若干个零值比特,以使总的比特数达到CHAR_BIT,从而字节对齐 */
        BP_WriteBits( ptr, 0, (CHAR_BITS - ptr->bits) );
    }
    return;
}

/****************************************************************************
 函数名名称  : BP_ReadPad
 函数功能    : ASN编解码-读取比特指针结构的数据区时跳过填充0值比特的处理函数
 输入参数    : 比特操作的结构指针
 输出参数    : 无
 返回值      : 无
 备注        : 如果ptr->bits!=0,则补齐比特,将指针ptr->bytes后移一个字节,
               并使ptr->bits=0
 单元测试记录:
****************************************************************************/
void BP_ReadPad( ST_BITPOINTER *ptr )
{
    if( NULL == ptr )
    {
        return;
    }
    /* 原ptr->bits中剩下的比特数不为0, 字节没有对齐 */
    if( ptr->bits != 0 )
    {
        /* 补齐比特数,以使总的比特数达到CHAR_BIT,从而字节对齐 */
        /* 再将指针值ptr->bytes后移一个字节 */
        BP_Increment( ptr, (CHAR_BITS - ptr->bits) );
    }
    return;
}

/*---------------------------------------------------------------------------*/
#ifdef  __cplusplus
}
#endif
/*---------------------------------------------------------------------------*/
/*  函数实现部分结束                                                         */
/*---------------------------------------------------------------------------*/
