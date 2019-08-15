/****************************************************************************** 

版权所有（C），2001-2015年，恒扬科技股份有限公司

******************************************************************************
文件名:       util.h
编码格式:     ASCII
作者:         chenbin
创建:         Apr 18, 2016
历史:
    1.日期    :Apr 18, 2016
      作者    :cb
      修改    :Created file
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
