/****************************************************************************** 

��Ȩ���У�C����2001-2015�꣬����Ƽ��ɷ����޹�˾

******************************************************************************
�ļ���:       hash_alg.c
�����ʽ:     ASCII
����:         chenbin
����:         Oct 20, 2015
��ʷ:
    1.����    :Oct 20, 2015
      ����    :cb
      �޸�    :Created file
******************************************************************************/

#include "hash_alg.h"


unsigned int RSHash(void * str, unsigned int len)
{
    unsigned int b    = 378551;
    unsigned int a    = 63689;
    unsigned int hash = 0;
    unsigned int i    = 0;

    char * data = (char *)str;
    for(i = 0; i < len; data++, i++)
    {
        hash = hash * a + (*data);
        a    = a * b;
    }

    return hash;
}

int semp_hash_data64(uint64_t data, int mask)
{
    return RSHash((char *)&data, 8);
}
