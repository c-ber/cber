/****************************************************************************** 

��Ȩ���У�C����2001-2015�꣬����Ƽ��ɷ����޹�˾

******************************************************************************
�ļ���:       watch.c
�����ʽ:     ASCII
����:         chenbin
����:         Sep 1, 2016
��ʷ:
    1.����    :Sep 1, 2016
      ����    :cb
      �޸�    :Created file
******************************************************************************/
#ifndef DAEMON_WATCH_C_
#define DAEMON_WATCH_C_

#include "watch.h"

#define DPI_PROC_NUM   16                     /* dpi���̸��� */
static pid_t dpi_proc[DPI_PROC_NUM] = {0};    /* dpi����id */

static pid_t flow_proc = 0;    /* flow����id */
static pid_t stat_proc = 0;    /* stat����id */
static pid_t npcp_proc = 0;    /* npcp����id */

/******************************************************************************
 * ��������    : running_dpi
 * ����        : ����һ��dpi����
 * ����        :
 * ˵��        :
 * ����        :
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
        //���̷���ʧ��
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
 * ��������    : running_flow
 * ����        : ����һ�����������
 * ����        :
 * ˵��        :
 * ����        :
******************************************************************************/
void running_flow()
{
    char *pSubArgv[1]   = {NULL};
    pSubArgv[0] = (char *)"flow";

    flow_proc = vfork ();
    if ( flow_proc < 0 )
    {
        //���̷���ʧ��
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
        //���̷���ʧ��
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
 * ��������    : check_proc_running
 * ����        : ��ѯ��������������״̬
 * ����        :
 * ˵��        :
 * ����        :
******************************************************************************/
static void check_proc_running ()
{
    int i = 0;

    for (; i < DPI_PROC_NUM; i++ )
    {
        if (dpi_proc[i] != 0)
        {
            //������������״ֵ̬,����� status ������� NULL
            //WNOHANG ��pidָ�����ӽ���û�н�������waitpid()��������0�������Եȴ������������򷵻ظ��ӽ��̵�ID��
            if (waitpid (dpi_proc[i], NULL, WNOHANG) != 0)
            {
                if ( i > 0 )//���̽����ˣ�Ҫ��������һ��
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
 * ��������    : init_signal
 * ����        : �źų�ʼ��
 * ����        :
 * ˵��        :
 * ����        :
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
