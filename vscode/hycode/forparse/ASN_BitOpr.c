/*-----------------------------------------------------------------------------
 �ļ���  : ASN_BitOpr.c
 ����    : ruansong
 �汾    : v1.0
 �������: 2016-01-19
 �ļ�����: ASN.1���ײ�������Ĳ�������
 ��ע    :
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

#include "ASN_BitOpr.h"

#if 0
extern void EOS_GetPureFileName( const char *pchSrcFileName, char **ppchPureFileName );
/*
    ��ȡ����·�����ļ���
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
 ����������  : BP_MakePointer
 ��������    : ASN�����-���ɱ���ָ��ṹ����
 �������    : ���յ�����ָ��, ���ݳ���
 �������    : ��
 ����ֵ      : ���ز����Ľṹָ��
 ��ע        :
 ��Ԫ���Լ�¼:
****************************************************************************/
ST_BITPOINTER* BP_MakePointer( unsigned char *buffer, unsigned int length_in_bytes )
{
    /* ����ṹռ���ڴ� */
    ST_BITPOINTER *ptr = (ST_BITPOINTER *)H323_MALLOC( PID_RANAP, ROS_MEM_ALLOC_OPT_NONE, sizeof(ST_BITPOINTER) );
    if( ptr == NULL_PTR )
    {
        return(NULL_PTR);
    }
    else
    {
        ptr->bytes      = buffer;                   /* �ֽ�ָ��ָ�����������ͷ */
        ptr->bits       = 0;                        /* ��ǰ����ı���λ��Ϊ0 */
        ptr->end        = buffer + length_in_bytes; /* �ֽڽ���ָ��ָ������β�� */
        return(ptr);
    }
}
#endif

/****************************************************************************
 ����������  : BP_SetBitPointer
 ��������    : ASN�����-���ñ���ָ��ṹ����
 �������    : ���ز����Ľṹָ��, ���յ�����ָ��, ���ݳ���
 �������    : ��
 ����ֵ      : ���ز����Ľṹָ��
 ��ע        : �˲������Ѿ����ڵı��ز����Ľṹָ���������, �����������
 ��Ԫ���Լ�¼:
****************************************************************************/
void BP_SetBitPointer( ST_BITPOINTER *bp, unsigned char *buffer, unsigned int length_in_bytes )
{
    if((NULL == bp) || (NULL == buffer))
    {
        return;
    }
    
    bp->bytes       = buffer;                       /* �ֽ�ָ��ָ�����������ͷ */
    bp->bits        = 0;                            /* ��ǰ����ı���λ��Ϊ0 */
    bp->end         = buffer + length_in_bytes;     /* �ֽڽ���ָ��ָ������β�� */
}

/****************************************************************************
 ����������  : BP_Increment
 ��������    : ASN�����-����ָ�����ӵĿ��ƺ���
 �������    : ���ز����Ľṹָ��, ���յ�����ָ��, ���ݳ���
 �������    : ��
 ����ֵ      : 0: ����; ����: ������(����)
 ��ע        : �����ö�,д����ָ�����ݺ�, ���Ե��ô˺���, ʹ����ָ��ָ���µ�λ��
               ָ��ptr->bytes����ǰ�ֽ�������. ��ǰ�ֽ���=(newbits>>3)
               ��ǰ������newbits=ԭ����bits+������by_bits
               ������µ�ptr->bitsֵ
 ��Ԫ���Լ�¼:
****************************************************************************/
int BP_Increment( ST_BITPOINTER *ptr, unsigned int by_bits )
{
    unsigned int    newbits = 0;

    if( NULL == ptr )
    {
        return 0;
    }

    /* ����, �ж��ֽ�ָ���Ƿ�Խ�� */
    if( ptr->bytes == ptr->end )
    {
        CODE_ERROR("RANAP�����-����ָ�����Ӳ���ʱ��¼��ָ��Խ��!");
        return(0);
    }

    /* ��ǰ��������newbits = ԭ����bits + ������by_bits */
    newbits = ptr->bits + by_bits;

    /* ��ǰ�ֽ���= (newbits >> 3) : ��8���� */
    if( (ptr->bytes + (newbits >> 3)) <= ptr->end)
    {
        ptr->bytes += (newbits >> 3);           /* ָ��ptr->bytes����ǰ�ֽ������� */
        ptr->bits  = newbits & (CHAR_BITS - 1);  /* ptr->bits��ʣ�µı�����,�ض�С��CHAR_BIT */
        return(0);
    }
    else
    {
        CODE_ERROR("RANAP�����-����ָ�����Ӳ���ʱ���ӵı������ָ��Խ��!");
    }
    return(0);
}

/****************************************************************************
 ����������  : BP_ReadBits
 ��������    : ASN�����-�ӵ�ǰ����λ�ö�ȡָ�����ȱ��صĴ�����
 �������    : ���ز����Ľṹָ��, ���յ�����ָ��, ���ݳ���(������Ŀ(<=32))
 �������    : ��
 ����ֵ      : ָ�����ص�ȡֵ(ȱʡ�������0)
 ��ע        : ��(UC *)ptr->bytes�ж�ȡnbits����(nbits<= 32��С��һ������),
               ��ȡ��ֵ���ڷ���ֵval��,ָ��ptr->bytes����ǰ��ȡ���ֽ�������
 ��Ԫ���Լ�¼:
****************************************************************************/
unsigned long BP_ReadBits( ST_BITPOINTER *ptr, unsigned int nbits )
{
    if( NULL == ptr )
    {
        return 0;
    }
    
    unsigned long       val=0;                  /* ����ֵ */
    unsigned int        offset = ptr->bits;     /* ԭptr->bits���Ѿ�������bit��, <8bits */
    unsigned int        so_far = 0;                 /* Ҫ��(uchar *)ptr->bytes�ж�ȡ�ı����� = nbits <= 32 */
    unsigned char       *step =  NULL;                  /* ���ƶ�ȡ���ֽ�ָ�� */


    /* �жϼ���ָ�����صĶ�ȡ�Ƿ����ָ��Խ�� */
    if( (unsigned int)( (ptr->end - ptr->bytes + 1)*8 ) < (unsigned int)(nbits+ptr->bits) )
    {
        CODE_ERROR("RANAP�����-����ָ���ȡ����ʱ��ȡ�ı������ָ��Խ��");
        ptr->bytes = ptr->end;
        ptr->bits  = 0;
        return 0;
    }

    /* �ж�ָ�����س�����Ч��, ���ܴ���һ������ */
    if( nbits > 32 )
    {
        CODE_ERROR("RANAP�����-����ָ���ȡ����ʱ��ȡ�ı��س��ȴ���32!");
        return 0;
    }

    if( NULL == ptr->bytes )
    {
        return 0;
    }

    /* ��ȡ����ֵ���� */
    if( offset == 0 )
    {
        /* (1):ԭptr->bits��ʣ�µı�����Ϊ0, �պ��ֽڶ��� */
        step    = ptr->bytes;
        val     = 0;
        so_far  = nbits;
        while( so_far >= CHAR_BITS )
        {
            /* whileѭ�����ᳬ��4�� */
            val = (val << CHAR_BITS) | *step++;      /* val�����(uchar *)ptr->bytes��ֵ */
            so_far -= CHAR_BITS;                     /* Ҫ���ı���������8��(#define CHAR_BITS 8) */
        }
        /* whileѭ��֮��, so_far < CHAR_BITS */
        /* ���so_far=0, val��ֵ���� */
        val = (val << so_far) | LDB(so_far, (CHAR_BITS - so_far), *step);
    }
    else if( nbits <= (CHAR_BITS - offset) )
    {
        /* (2):ԭptr->bits��ʣ�µı�������Ϊ0, �ֽڲ����� */
        /*     Ҫ���ı���nbits��+��ǰ�ı�����С��һ���ֽ� */
        val = LDB( nbits, (CHAR_BITS - offset - nbits), *(ptr->bytes) );
    }
    else
    {
        /* (3):ԭptr->bits��ʣ�µı�������Ϊ0, �ֽڲ����� */
        /*     Ҫ���ı���nbits��+��ǰ�ı���������һ���ֽ� */
        step   = ptr->bytes;
        val    = LDB((CHAR_BITS - offset), 0, *step++);  /* ��ȡ��ǰ�ֽ�ʣ����ص�ֵ */
        so_far = nbits - (CHAR_BITS - offset);           /* Ҫ��ȡ�ı��ؼ�ȥ�Ѷ�ȡ���� */
        while( so_far >= CHAR_BITS )
        {
            val = (val << CHAR_BITS) | *step++;
            so_far -= CHAR_BITS;
        }
        val = (val << so_far) | LDB(so_far, (CHAR_BITS - so_far), *step);
    }
    /* ��¼����ָ����� */
    BP_Increment( ptr, nbits );
    /* ��ָ��ֵptr->bytes����ǰ��ȡ���ֽ�������, ��ǰ�ֽ���=(newbits >> 3)
     ��ǰ������newbits=ԭ����bits+������by_bits, ԭ����bits��: offset = ptr->bits < 8 */
    return(val);
}

/****************************************************************************
 ����������  : BP_WriteBits
 ��������    : ASN�����-�����ָ��ṹ��������д��ָ�����ȱ���ֵ�Ĵ�����
 �������    : ���ز����Ľṹָ��, д�������ֵ, ���ݳ���(������Ŀ(<=32))
 �������    : ��
 ����ֵ      : ��
 ��ע        : ��(UC *)ptr->bytesд��nbits����(nbits<= 32, С��һ������),Ҫ
               д���ֵ����value��,ָ��ptr->bytes����ǰд����ֽ�����
 ��Ԫ���Լ�¼:
****************************************************************************/
void BP_WriteBits(ST_BITPOINTER *ptr, unsigned long value, unsigned int nbits)
{
    if( NULL == ptr )
    {
        return;
    }
   
    unsigned int        offset = ptr->bits;         /* ԭptr->bits��ʣ�µı�����, < 8bits */
    unsigned int        so_far = 0;                     /* Ҫ��(UC *)ptr->bytes��д��ı�����, =nbits <= 32 */
    unsigned char       *step = NULL;                      /* ����д����ֽ�ָ�� */

    /* �ж�ָ�����س�����Ч��, ���ܴ���һ������ */
    if( nbits > 32 )
    {
        CODE_ERROR("RANAP�����-����ָ��д�����ʱд��ı��س��ȴ���32!");
        return;
    }

    /* �жϼ���ָ�����ص�д���Ƿ����ָ��Խ�� */
    if( (unsigned int)( (ptr->end - ptr->bytes)*8 ) < (unsigned int)(nbits+ptr->bits) )
    {
        CODE_ERROR("RANAP�����-����ָ��д�����ʱд��ı������ָ��Խ��!");
        ptr->bytes = ptr->end;
        ptr->bits  = 0;
        return;
    }

    if( NULL == ptr->bytes )
    {
        return;
    }

    /* д�����ֵ���� */
    if( offset == 0 )
    {
        /* (1):ԭptr->bits��ʣ�µı�����Ϊ0, �պ��ֽڶ��� */
        step   = ptr->bytes;    /* ָ��ǰ�ֽ� */
        so_far = nbits;         /* Ҫ��(UC *)ptr->bytes��д��ı�����=nbits<=32, ����,�����whileѭ�����ᳬ��4�� */
        while( so_far >= CHAR_BITS )
        {
            /* ��value�ĸ�λ�ֽڿ�ʼ, ÿ����ptr->bytes��ָ��buffer��д��һ���ֽ�,
               ����ָ��step����һ���ֽ� */
            *step++ = (unsigned char)LDB( CHAR_BITS, (so_far - CHAR_BITS), value );
            so_far -= CHAR_BITS;     /* Ҫд�ı�����������8 */
        }
        /* ���so_far=0, д��һ����ֵ�ֽڵ���һ���ֽ��� */
        *step++ = (unsigned char)(LDB(so_far, 0, value) << (CHAR_BITS - so_far));
    }
    else if (nbits <= (CHAR_BITS - offset))
    {
        /* (2):ԭptr->bits��ʣ�µı�������Ϊ0, �ֽڲ����� */
        /*     Ҫд�ı���nbits��+��ǰ�ı�����С��һ���ֽ� */
        *(ptr->bytes) = (unsigned char) ((*(ptr->bytes) & ~MASK(CHAR_BITS - offset))
                        | ((value & MASK(CHAR_BITS - offset)) << (CHAR_BITS - offset - nbits)));
    }
    else
    {
        /* (3):ԭptr->bits��ʣ�µı�������Ϊ0, �ֽڲ����� */
        /*     Ҫд�ı���nbits��+��ǰ�ı���������һ���ֽ� */
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
    /* ��¼����ָ����� */
    BP_Increment(ptr, nbits);
    /* ��ָ��ֵptr->bytes����ǰд����ֽ�������
       ��ǰ�ֽ���=(newbits>>3); ��ǰ������newbits=ԭ����bits+������nbits;
       ԭ����bits��: offset=ptr->bits<8 */
    return;
}

/****************************************************************************
 ����������  : BP_Pad
 ��������    : ASN�����-�����ָ��ṹ�����������0ֵ���صĴ�����
 �������    : ���ز����Ľṹָ��
 �������    : ��
 ����ֵ      : ��
 ��ע        : ��ptr->bits�в������ɸ���ֵ����,�Ӷ�ʹ֮�ֽڶ���,��ʹptr->bits=0
 ��Ԫ���Լ�¼:
****************************************************************************/
void BP_Pad( ST_BITPOINTER *ptr )
{
    if( NULL == ptr )
    {
        return;
    }
    
    /* ԭptr->bits��ʣ�µı�������Ϊ0, �ֽ�û�ж��� */
    if( ptr->bits != 0 )
    {
        /* ��ԭptr->bits��ʣ�µı������������ɸ���ֵ����,��ʹ�ܵı������ﵽCHAR_BIT,�Ӷ��ֽڶ��� */
        BP_WriteBits( ptr, 0, (CHAR_BITS - ptr->bits) );
    }
    return;
}

/****************************************************************************
 ����������  : BP_ReadPad
 ��������    : ASN�����-��ȡ����ָ��ṹ��������ʱ�������0ֵ���صĴ�����
 �������    : ���ز����Ľṹָ��
 �������    : ��
 ����ֵ      : ��
 ��ע        : ���ptr->bits!=0,�������,��ָ��ptr->bytes����һ���ֽ�,
               ��ʹptr->bits=0
 ��Ԫ���Լ�¼:
****************************************************************************/
void BP_ReadPad( ST_BITPOINTER *ptr )
{
    if( NULL == ptr )
    {
        return;
    }
    /* ԭptr->bits��ʣ�µı�������Ϊ0, �ֽ�û�ж��� */
    if( ptr->bits != 0 )
    {
        /* ���������,��ʹ�ܵı������ﵽCHAR_BIT,�Ӷ��ֽڶ��� */
        /* �ٽ�ָ��ֵptr->bytes����һ���ֽ� */
        BP_Increment( ptr, (CHAR_BITS - ptr->bits) );
    }
    return;
}

/*---------------------------------------------------------------------------*/
#ifdef  __cplusplus
}
#endif
/*---------------------------------------------------------------------------*/
/*  ����ʵ�ֲ��ֽ���                                                         */
/*---------------------------------------------------------------------------*/
