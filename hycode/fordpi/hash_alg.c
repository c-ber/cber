/****************************************************************************** 

版权所有（C），2001-2015年，恒扬科技股份有限公司

******************************************************************************
文件名:       hash_alg.c
编码格式:     ASCII
作者:         chenbin
创建:         Oct 20, 2015
历史:
    1.日期    :Oct 20, 2015
      作者    :cb
      修改    :Created file
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
