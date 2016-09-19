/****************************************************************************** 

版权所有（C），2001-2015年，恒扬科技股份有限公司

******************************************************************************
文件名:       watch.h
编码格式:     ASCII
作者:         chenbin
创建:         Sep 1, 2016
历史:
    1.日期    :Sep 1, 2016
      作者    :cb
      修改    :Created file
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
