/****************************************************************************** 

版权所有（C），2001-2015年，恒扬科技股份有限公司

******************************************************************************
文件名:       util.c
编码格式:     ASCII
作者:         chenbin
创建:         Nov 24, 2015
历史:
    1.日期    :Nov 24, 2015
      作者    :cb
      修改    :Created file
******************************************************************************/
#ifndef UTIL_C_
#define UTIL_C_
#include "util.h"

uint8_t asc_to_hex(uint8_t ch)
{
    if( ch >= '0' && ch <= '9')
        ch -= '0';
    else if( ch >= 'A' && ch <= 'Z' )//大写字母
        ch -= 0x37;
    else if( ch >= 'a' && ch <= 'z' )//小写字母
        ch -= 0x57;
    else ch = 0xff;
    return ch;
}
cb_code_t str_to_proto(const uint8_t *src, int slen, uint8_t *dst)
{
    uint8_t stmp[128] ={0};
    uint8_t low  = 0;
    uint8_t high = 0;
    int  i       = 0;

    int supply = 0;
    if( NULL == dst || NULL == src || slen > 126)
    {
        return CB_NULL_POINT;
    }
    memcpy(stmp, src, slen);
    if( slen % 2 )
    {
        stmp[slen] = 'f';
    }
    supply = strlen((char *)stmp);
    supply = supply >> 1;
    for( i = 0; i < supply ; i++ )
    {
        low = asc_to_hex(stmp[2*i]);
        high = asc_to_hex(stmp[2*i+1]);
        *(dst+i) = (high << 4) + low;
    }
    return CB_OK;
}

#endif /* UTIL_C_ */
