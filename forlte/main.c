#include    <stdio.h>
#include    <stdlib.h>
#include    <time.h>
#include    <string.h>
#include    <stdarg.h>
#include    <signal.h>
#include    <pthread.h>
#include    <fcntl.h>
#include    <errno.h>
#include    <dirent.h>
#include    <ctype.h>
#include    <unistd.h>


#include    <sys/socket.h>
#include    <sys/types.h>
#include    <netinet/in.h>
#include    <sys/wait.h>
#include    <sys/stat.h>
#include    <assert.h>

#include "cb_pcap.h"

//#define PILIAN  // ��������ɸѡgptc�����
//#define DEL_CRC // ɾ��crc
//#define ADD_PCAP  // ��ԭʼ���ķ�װΪpcap��ʽ
//#define FIND_FTEID //Ѱ��FTEID

int pox_system(const char *format, ...);

void test()
{

}
int main(int argc,char * argv[])
{
//    test();
//    return 0;
	printf("test start\n");
	char input_file[256] = {0};

	printf("input param : argc = %d \n", argc);
	if( argc == 2)
	{
	    strcpy(input_file, argv[1]);
	}
	else
	{
	    strcpy(input_file, "lte.pcap");//FILE_PATH);
	}

#ifdef FIND_FTEID
	pcap_search_fteid(input_file);
#else

#ifdef ADD_PCAP
    #ifdef add_ori
	/* �����֡ */
	pcap_add_merge("lte_pkt.log");//pcap_add��ͷ��ʽ��������Ѿ���������
	pcap_add("merge_pkt.tmp");
    #else
	    pcap_add("core.pkt");
    #endif
#else

#ifdef DEL_CRC
//    pcap_delete_crc4("lte.pcap");

    int i = 0;
    for( i = 1 ; i < 11; i++)
    {
        sprintf(input_file, "st%d.pcap",i);
        pcap_delete_crc4(input_file);
        pox_system("mv gtpc_output.pcap crc_src/crc_op%d.pcap", i);
    }
#else
    #ifdef PILIAN
        int i = 0;
        for( i = 1 ; i < 11; i++)
        {
            sprintf(input_file, "crc_src/crc_op%d.pcap",i);
            pcap_search(input_file);
            pox_system("mv gtpc_output.pcap crc_src/gtpc%d.pcap", i);
        }

    #else
        pcap_search(input_file);
    #endif


        #endif
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

