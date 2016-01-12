/****************************************************************************** 

版权所有（C），2001-2015年，恒扬科技股份有限公司

******************************************************************************
文件名:       util.h
编码格式:     ASCII
作者:         chenbin
创建:         Nov 24, 2015
历史:
    1.日期    :Nov 24, 2015
      作者    :cb
      修改    :Created file
******************************************************************************/
#ifndef UTIL_H_
#define UTIL_H_

#include    <stdio.h>
#include    <stdlib.h>
#include    <time.h>
#include    <string.h>
#include    <sys/types.h>
#include    <sys/stat.h>
#include    <stdarg.h>
#include    <signal.h>
#include    <sys/wait.h>
#include    <pthread.h>
#include    <fcntl.h>
#include    <errno.h>
#include    <dirent.h>
#include    <unistd.h>
#include    <stdbool.h>
#include    <stdint.h>
#include    <cb_code.h>
#include    <alg_kmp.h>

typedef struct
{
    uint16_t len:14;
    uint16_t fir:1;
    uint16_t fin:1;
}pkt_head_t;

uint8_t asc_to_hex(uint8_t ch);
cb_code_t str_to_proto(const uint8_t *src, int slen, uint8_t *dst);

cb_code_t exchange(uint8_t * buf, int n);
cb_code_t parse_head(uint8_t src[],pkt_head_t *head);


#endif /* UTIL_H_ */
