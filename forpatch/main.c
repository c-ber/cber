/****************************************************************************** 

版权所有（C），2001-2015年，恒扬科技股份有限公司

******************************************************************************
文件名:       main.c
编码格式:     ASCII
作者:         chenbin
创建:         Jan 2, 2017
历史:
    1.日期    :Jan 2, 2017
      作者    :cb
      修改    :Created file
******************************************************************************/

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
#include    <ctype.h>

#include <unistd.h>
#include <errno.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <time.h>
#include <netinet/in.h>
#include <sys/wait.h>
#include <signal.h>
#include <assert.h>


#include <sys/ptrace.h>
#include <sys/user.h>

int add(int x, int y)
{
    return x+y;
}


const int long_size = sizeof(long);

void getdata(pid_t child, long addr,
             char *str, int len)
{
    char *laddr;
    int i, j;
    union u {
            long val;
            char chars[long_size];
    }data;

    i = 0;
    j = len / long_size;
    laddr = str;

    while(i < j) {
        data.val = ptrace(PTRACE_PEEKDATA, child,
                          addr + i * 4, NULL);
        memcpy(laddr, data.chars, long_size);
        ++i;
        laddr += long_size;
    }
    j = len % long_size;
    if(j != 0) {
        data.val = ptrace(PTRACE_PEEKDATA, child,
                          addr + i * 4, NULL);
        memcpy(laddr, data.chars, j);
    }
    str[len] = '\0';
}

void putdata(pid_t child, long addr,
             char *str, int len)
{
    char *laddr;
    int i, j;
    union u {
            long val;
            char chars[long_size];
    }data;

    i = 0;
    j = len / long_size;
    laddr = str;
    while(i < j) {
        memcpy(data.chars, laddr, long_size);
        ptrace(PTRACE_POKEDATA, child,
               addr + i * 4, data.val);
        ++i;
        laddr += long_size;
    }
    j = len % long_size;
    if(j != 0) {
        memcpy(data.chars, laddr, j);
        ptrace(PTRACE_POKEDATA, child,
               addr + i * 4, data.val);
    }
}


int main(int argc,char * argv[])
{
    pid_t traced_process;
    struct user_regs_struct regs, newregs;
    long ins;
    /* int 0x80, int3 */
    char code[] = {0xcd,0x80,0xcc,0};
    char backup[4];


    traced_process = 26227;
#ifdef Fir
    ptrace(PTRACE_ATTACH, traced_process,  NULL, NULL);
    wait(NULL);

    ptrace(PTRACE_GETREGS, traced_process, NULL, &regs);

    ins = ptrace(PTRACE_PEEKTEXT, traced_process, regs.rip, NULL);
    printf("EIP: %lx Instruction executed: %lx ", regs.rip, ins);

    ptrace(PTRACE_DETACH, traced_process, NULL, NULL);
#else
    ptrace(PTRACE_ATTACH, traced_process,
           NULL, NULL);
    wait(NULL);
    ptrace(PTRACE_GETREGS, traced_process,
           NULL, &regs);
    /* Copy instructions into a backup variable */
    getdata(traced_process, regs.rip, backup, 3);
    /* Put the breakpoint */
    putdata(traced_process, regs.rip, code, 3);
    /* Let the process continue and execute
       the int 3 instruction */
    ptrace(PTRACE_CONT, traced_process, NULL, NULL);
    wait(NULL);
    printf("The process stopped, putting back "
           "the original instructions ");
    printf("Press <enter> to continue ");
    getchar();
    putdata(traced_process, regs.rip, backup, 3);
    /* Setting the eip back to the original
       instruction to let the process continue */
    ptrace(PTRACE_SETREGS, traced_process,
           NULL, &regs);
    ptrace(PTRACE_DETACH, traced_process,
           NULL, NULL);
#endif
    return 0;
}

