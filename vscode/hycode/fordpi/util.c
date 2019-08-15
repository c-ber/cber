/****************************************************************************** 

版权所有（C），2001-2015年，恒扬科技股份有限公司

******************************************************************************
文件名:       util.c
编码格式:     ASCII
作者:         chenbin
创建:         Apr 18, 2016
历史:
    1.日期    :Apr 18, 2016
      作者    :cb
      修改    :Created file
******************************************************************************/

#include "util.h"


uint16_t ip_checksum_c( uint8_t *ptr, uint32_t size)
{
    int cksum = 0;
    int index = 0;

    *(ptr + 10) = 0;
    *(ptr + 11) = 0;

    if(size % 2 != 0)
        return 0;

    while(index < size)
    {
        cksum += *(ptr + index + 1);
        cksum += *(ptr + index) << 8;

        index += 2;
    }

    while(cksum > 0xffff)
    {
        cksum = (cksum >> 16) + (cksum & 0xffff);
    }
    return ~cksum;
}



void printf_buf(uint8_t *ptr, uint16_t len)
{
    int i = 0;
    printf("printf buf in hex data[len = %d]:", len);
    for( i = 0 ; i < len; i++ )
    {
        if(i % 16 == 0)
        {
            printf("\n    %04x  ", i);
        }
        if(i % 16 == 8 && i > 0)
        {
            printf("- ");
        }
        printf("%02x ", *(ptr+i));
    }
    printf("\n");
}
