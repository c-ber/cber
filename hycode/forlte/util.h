/****************************************************************************** 

��Ȩ���У�C����2001-2015�꣬����Ƽ��ɷ����޹�˾

******************************************************************************
�ļ���:       util.h
�����ʽ:     ASCII
����:         chenbin
����:         Nov 24, 2015
��ʷ:
    1.����    :Nov 24, 2015
      ����    :cb
      �޸�    :Created file
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
