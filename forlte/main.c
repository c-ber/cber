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


#include "cb_pcap.h"

//#define PILIAN  // 批量处理
#define DEL_CRC // 删除crc

int pox_system(const char *format, ...);

int main(int argc,char * argv[])
{
	printf("test start\n");
	char input_file[256] = {0};

	printf("input param : argc = %d \n", argc);
	if( argc == 2)
	{
	    strcpy(input_file, argv[1]);
	}
	else
	{
	    strcpy(input_file, FILE_PATH);
	}
#ifdef DEL_CRC
    int i = 0;
    for( i = 1 ; i < 11; i++)
    {
        sprintf(input_file, "s1ap/op%d.pcap",i);
        pcap_delete_crc4(input_file);
        pox_system("mv gtpc_output.pcap crc_s1ap/crc_op%d.pcap", i);
    }
#else
    #ifdef PILIAN
        int i = 0;
        for( i = 1 ; i < 11; i++)
        {
            sprintf(input_file, "st%d.pcap",i);
            pcap_search(input_file);
            pox_system("mv gtpc_output.pcap s1ap/op%d.pcap", i);
        }
    #else
        pcap_search(input_file);
    #endif
#endif
    return 0;
} 

int pox_system(const char *format, ...)
{
    int ret = 0;
    unsigned char cmd[256] = {0};

    va_list ap;
    va_start( ap, format);
    vsprintf(cmd,format, ap);
    ret = system(cmd);
    va_end( ap );
    return ret;
}

