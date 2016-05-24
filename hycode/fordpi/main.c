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

#include "semp_comm_dpi.h"
#include "dpi.h"

void test()
{
    five_tuple_t ft = {};
    ft.dip.ip.v4 = 0x1;
    ft.sip.ip.v4 = 0x1;
    ft.dst_port = 1;
    ft.dst_port = 1;
    ft.protocol = 6;

    dpi_skb_t skb = {};
    skb.care_pkt = PKT_CARE;
    skb.network_header = NULL;
    skb.network_header_len = 1;



    dataplane_dpi_processs(&skb, &ft);
}

int main(int argc,char * argv[])
{

    printf(">>>>>>>>>>>>>test start :\n");
    test();

    return 0;
} 



