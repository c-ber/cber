/****************************************************************************** 

��Ȩ���У�C����2001-2015�꣬����Ƽ��ɷ����޹�˾

******************************************************************************
�ļ���:       util.c
�����ʽ:     ASCII
����:         chenbin
����:         Apr 18, 2016
��ʷ:
    1.����    :Apr 18, 2016
      ����    :cb
      �޸�    :Created file
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
