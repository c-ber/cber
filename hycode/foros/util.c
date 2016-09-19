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

uint16_t ip_checksum(uint8_t *iph, uint32_t ihl)
{

    unsigned int csum = 0;
    register char *arg1 asm ("$4") = (char*)iph;
    register unsigned int arg2 asm ("$5") = ihl;

    asm volatile (
            "    .set push                 # ip_fast_csum\n"
            "    cins   $5,$5,2,0x1f       # end pointer offset    \n"
            "    lw     $2,0($4)           # load first word       \n"
            "    lw     $6,4($4)           # load 2nd word         \n"
            "    lw     $3,8($4)           # load 3rd word         \n"
            "    daddu  $8,$4,$5           # end pointer           \n"
            "    lw     $5,12($4)          # load 4th word         \n"
            "    addu   $2,$6,$2           # csum = fist + 2nd     \n"
            "    sltu   $6,$2,$6           # check for carry       \n"
            "    addu   $2,$2,$3           # csum += 3rd           \n"
            "    addu   $2,$2,$6           # csum += carry         \n"
            "    sltu   $3,$2,$3           # check for carry       \n"
            "    addu   $2,$2,$5           # csum += 4th           \n"
            "    addu   $2,$2,$3           # csum += carry         \n"
            "    sltu   $5,$2,$5           # check for carry       \n"
            "    addu   $3,$5,$2           # csum += carry         \n"
            "    daddiu $7,$4,16           # offset to next        \n"
            "2:  lw     $2,0($7)           # load next word        \n"
            "    daddiu $7,$7,4            # offset of next word   \n"
            "    addu   $3,$3,$2           # csum += next_word     \n"
            "    sltu   $2,$3,$2           # check for carry       \n"
            "    bne    $7,$8,2b           # check for end ptr     \n"
            "    addu   $3,$2,$3           # csum += carry         \n"
            "                              # Now fold the csum     \n"
            "    move   $2,$3                                      \n"
            "    sll    $3,$2,0x10                                 \n"
            "    addu   $2,$2,$3                                   \n"
            "    sltu   $3,$2,$3                                   \n"
            "    srl    $2,$2,0x10                                 \n"
            "    addu   $2,$2,$3                                   \n"
            "    xori   $2,$2,0xffff                               \n"
            "    andi   $2,$2,0xffff                               \n"
            "    move   %0,$2                                      \n"
            "    nop                                               \n"
            : "=r" (csum)
            : "r" (arg1), "r" (arg2), "0" (csum)
                   : "$2", "$3", "$6", "$7", "$8", "memory");

    return csum;
}
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
