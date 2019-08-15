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

#include "ipv4Mask6Tup.h"

#define rule_mask_item_num 30
int main(int argc,char * argv[])
{
   printf("test start! \n");
   int c_argc = 10;
   char tmp[rule_mask_item_num][32] = {
       "add", "1","10.21.71.210", "120.198.232.105", "1373", "80", "tcp", "1", "forward", "1"
    };
   char *c_argv[rule_mask_item_num];
   int i = 0;
   for( i = 0 ; i < rule_mask_item_num; i++)
   {
       c_argv[i] = tmp[i];
   }

   rule_mask_init();
   cmdV4Mask6TupAdd(c_argc, c_argv);
   cmdV4Mask6TupCommit();

   uint8_t uc_iifgrp = 1;
   V4_5TUP_T tp;
   tp.sip = 0x0a1547d2;
   tp.dip = 0x78c6e869;
   tp.sp = 0x055d;
   tp.dp = 0x0050;
   tp.proto = 0x06;
   rule_rfc_match(uc_iifgrp, &tp);
    return 0;
}

