/****************************************************************************** 

��Ȩ���У�C����2001-2015�꣬����Ƽ��ɷ����޹�˾

******************************************************************************
�ļ���:       watch.h
�����ʽ:     ASCII
����:         chenbin
����:         Sep 1, 2016
��ʷ:
    1.����    :Sep 1, 2016
      ����    :cb
      �޸�    :Created file
******************************************************************************/
#ifndef DAEMON_WATCH_H_
#define DAEMON_WATCH_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <signal.h>
#include <unistd.h>
#include <sys/wait.h>


#define LOG_PRINT(fmt, _arg...) printf("(%s) +%d " fmt ,__func__, __LINE__, ##_arg );


#endif /* DAEMON_WATCH_H_ */
