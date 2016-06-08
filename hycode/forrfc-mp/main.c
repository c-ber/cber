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

#include "stream.h"

#define rule_mask_item_num 30

int iptoint( const char *ip )
{
    return inet_addr( ip );
}

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

    dataplane_stream_global_initialize();

    rule_mask_t  rule = {};
    rule.ul_rule_id = 2;
    rule.ul_src_ip_start = 0xd247160a;
    rule.ul_src_ip_end   = 0xd247160a;
    rule.ul_dst_ip_start = 0x69e8c578;
    rule.ul_dst_ip_end   = 0x69e8c578;
    rule.us_src_port_start = 21373;
    rule.us_src_port_end   = 21373;
    rule.us_dst_port_start = 0;
    rule.us_dst_port_end   = 65535;

    rule.uc_protocol_start = 0;
    rule.uc_protocol_end   = 0;
    rule.uc_iifgrp_start = 1;
    rule.uc_iifgrp_end   = 1;


   npcp_cmd_mask_rule_add(&rule);

   npcp_cmd_mask_rule_commit();


   uint8_t uc_iifgrp = 1;
   V4_5TUP_T tp;
   tp.sip = iptoint("10.22.71.210");
   tp.dip = iptoint("120.197.232.105");

   tp.sp = 0x537d;
   tp.dp = 0x8;
   tp.proto = 0x06;
   printf("find rule id = %d \n",rule_rfc_match(uc_iifgrp, &tp));
    return 0;
}

