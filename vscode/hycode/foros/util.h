/****************************************************************************** 

��Ȩ���У�C����2001-2015�꣬����Ƽ��ɷ����޹�˾

******************************************************************************
�ļ���:       util.h
�����ʽ:     ASCII
����:         chenbin
����:         Apr 18, 2016
��ʷ:
    1.����    :Apr 18, 2016
      ����    :cb
      �޸�    :Created file
******************************************************************************/
#ifndef MODULES_DPI_UTIL_H_
#define MODULES_DPI_UTIL_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>



uint16_t ip_checksum(uint8_t *iph, uint32_t ihl);

uint16_t ip_checksum_c( uint8_t *ptr, uint32_t size);

void printf_buf(uint8_t *ptr, uint16_t len);







#endif /* MODULES_DPI_UTIL_H_ */
