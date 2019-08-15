/****************************************************************************** 

版权所有（C），2001-2015年，恒扬科技股份有限公司

******************************************************************************
文件名:       dpi_memory.c
编码格式:     ASCII
作者:         chenbin
创建:         Apr 19, 2016
历史:
    1.日期    :Apr 19, 2016
      作者    :cb
      修改    :Created file
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
