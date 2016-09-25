/****************************************************************************** 

版权所有（C），2001-2015年，恒扬科技股份有限公司

******************************************************************************
文件名:       watch.c
编码格式:     ASCII
作者:         chenbin
创建:         Sep 1, 2016
历史:
    1.日期    :Sep 1, 2016
      作者    :cb
      修改    :Created file
******************************************************************************/
#ifndef DAEMON_WATCH_C_
#define DAEMON_WATCH_C_

#include "watch.h"

#define DPI_PROC_NUM   16                     /* dpi进程个数 */
static pid_t dpi_proc[DPI_PROC_NUM] = {0};    /* dpi进程id */

static pid_t flow_proc = 0;    /* flow进程id */
static pid_t stat_proc = 0;    /* stat进程id */
static pid_t npcp_proc = 0;    /* npcp进程id */

/******************************************************************************
 * 函数名称    : running_dpi
 * 功能        : 启动一个dpi进程
 * 参数        :
 * 说明        :
 * 返回        :
******************************************************************************/
void running_dpi ( int pid )
{
    char  argv1[5]      = {0};
    char *pSubArgv[2]   = {NULL};

    sprintf(argv1, "%d", pid);
    pSubArgv[0] = (char *)"dpi";
    pSubArgv[1] = argv1;

    dpi_proc[pid] = vfork ();
    if (dpi_proc[pid] < 0)
    {
        //进程分配失败
        return;
    }
    else if (dpi_proc[pid] == 0)
    {
        execv("/storage/bin/dpi", pSubArgv);
        exit (1);
    }
    return;
}


/******************************************************************************
 * 函数名称    : running_flow
 * 功能        : 启动一个流管理进程
 * 参数        :
 * 说明        :
 * 返回        :
******************************************************************************/
void running_flow()
{
    char *pSubArgv[1]   = {NULL};
    pSubArgv[0] = (char *)"flow";

    flow_proc = vfork ();
    if ( flow_proc < 0 )
    {
        //进程分配失败
        return;
    }
    else if (flow_proc == 0)
    {
        execv("/storage/bin/flow", pSubArgv);
        exit (1);
    }
    return;
}


void running_npcp()
{
    char *pSubArgv[1]   = {NULL};
    pSubArgv[0] = (char *)"npcp";

    npcp_proc = vfork ();
    if ( npcp_proc < 0 )
    {
        //进程分配失败
        printf("npcp init fail.\n");
        return;
    }
    else if (npcp_proc == 0)
    {
        execv("/storage/bin/npcp", pSubArgv);
        exit (1);
    }
    return;
}


/******************************************************************************
 * 函数名称    : check_proc_running
 * 功能        : 轮询检查各个进程运行状态
 * 参数        :
 * 说明        :
 * 返回        :
******************************************************************************/
static void check_proc_running ()
{
    int i = 0;

    for (; i < DPI_PROC_NUM; i++ )
    {
        if (dpi_proc[i] != 0)
        {
            //如果不在意结束状态值,则参数 status 可以设成 NULL
            //WNOHANG 若pid指定的子进程没有结束，则waitpid()函数返回0，不予以等待。若结束，则返回该子进程的ID。
            if (waitpid (dpi_proc[i], NULL, WNOHANG) != 0)
            {
                if ( i > 0 )//进程结束了，要重新起来一个
                {
                    running_dpi(i);
                }
            }
        }
    }

    if(flow_proc != 0)
    {
        if (waitpid (flow_proc, NULL, WNOHANG) != 0)
        {
            running_flow(i);
        }
    }

    if(npcp_proc != 0)
    {
        if (waitpid (npcp_proc, NULL, WNOHANG) != 0)
        {
            running_npcp(i);
        }
    }


    return;
}


static void sig_int1(int number)
{
    return;
}

static void sig_hup( int number )
{
    return;
}

static void sig_term( int number )
{
    return;
}

static void sig_usr1(int number)
{
    return ;
}

static void sig_usr2(int number)
{
    return;
}

#define SIGNAL(s, handler)                  \
do { \
    sa.sa_handler = handler;                \
    if (sigaction(s, &sa, NULL) < 0)        \
    ;\
} while (0)


/******************************************************************************
 * 函数名称    : init_signal
 * 功能        : 信号初始化
 * 参数        :
 * 说明        :
 * 返回        :
******************************************************************************/
static void init_signal( void )
{
    struct sigaction sa = {};
    sigset_t mask       = {};

    sigemptyset(&mask);
    sigaddset(&mask, SIGHUP);
    sigaddset(&mask, SIGINT);
    sigaddset(&mask, SIGTERM);
    sigaddset(&mask,SIGALRM);
    sigaddset(&mask,SIGUSR1);
    sigaddset(&mask,SIGUSR2);

    sa.sa_mask  = mask;
    sa.sa_flags = 0;
    SIGNAL(SIGHUP, sig_hup);
    SIGNAL(SIGINT, sig_int1);
    SIGNAL(SIGTERM,sig_term);
    SIGNAL(SIGUSR1,sig_usr1);
    SIGNAL(SIGUSR2,sig_usr2);
    alarm(0);
    return;
}


int main()
{
    int i = 0;
    printf("daemon proc init and start !\n");

    init_signal();

    running_npcp();

    running_flow();

    for(i = 0 ; i < DPI_PROC_NUM; i++)
    {
        running_dpi(i);
    }
    printf("dpi process init success!\n");

    while(1)
    {
        check_proc_running();
        sleep(1);
    }

    return 0;
}

#endif /* DAEMON_WATCH_C_ */
