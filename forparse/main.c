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

#include "packet_entry.h"
#include "cvmx_common.h"

#define    PCAP_HEADER_LEN    24
#define    DATA_HEADER_LEN    16
#define    ACL_LEN_OFFSET     8

int pcap_read(char *input_file, uint8_t *data)
{
    FILE *fp = NULL;
    FILE *fout = NULL;

    uint32_t data_acl_len = 0;

    uint8_t pcap_header[PCAP_HEADER_LEN] = {0};
    uint8_t pcap_data_header[DATA_HEADER_LEN] = {0};

    printf("Start   to open file [%s]\n", input_file);

    if(( fp = fopen( input_file, "rb" ) ) == NULL )
    {
        printf("source pcap file cann't open!\n");
        return 0;
    }

    fread(pcap_header, PCAP_HEADER_LEN, 1, fp);

    do
    {
        fread(pcap_data_header, DATA_HEADER_LEN, 1, fp);
        memcpy(&data_acl_len, pcap_data_header + ACL_LEN_OFFSET, 4);


        if( data_acl_len > 2048 )
        {
            return 0;
        }

        fread(data, data_acl_len, 1, fp);

        if( feof(fp) )
        {
            break;
        }
    }while(0);

    fclose( fp );
    return data_acl_len;
}


void test_gtpv1(uint8_t * ptr, int len)
{
    mp_error_t rv ;
    cvmx_wqe_t work;
    mpp_control_st mpp;
    mpp.packet = ptr;
    mpp.pkt_len = len;

    rv = semp_packet_entry_parse(&work, &mpp);//报文协议的统计和分析
}

int main(int argc,char * argv[])
{
    uint8_t data[2048] = {0};
    int len = pcap_read("lte.pcap", data);
    if(len == 0 )
    {
        printf("len must > 0, error!");
    }
    else
    {
        test_gtpv1(data, len);
    }

    return 0;
} 



