/****************************************************************************** 

��Ȩ���У�C����2001-2015�꣬����Ƽ��ɷ����޹�˾

******************************************************************************
�ļ���:       dpi_memory.c
�����ʽ:     ASCII
����:         chenbin
����:         Apr 19, 2016
��ʷ:
    1.����    :Apr 19, 2016
      ����    :cb
      �޸�    :Created file
******************************************************************************/

#include "dpi_mm.h"

mp_code_t dpi_mm_init()
{
    mp_code_t ret = MP_OK;

    return ret;
}


void* dpi_mm_alloc(unsigned int size)
{
    return malloc(size);
}


void  dpi_mm_free(void *p)
{
    free(p);
}
