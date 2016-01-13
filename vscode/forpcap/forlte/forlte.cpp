// forlte.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <stdio.h>
#include <string.h>

#include "cb_pcap.h"

//#define PILIAN  // ��������
//#define DEL_CRC // ɾ��crc
//#define ADD_PCAP  // ��ԭʼ���ķ�װΪpcap��ʽ
#define FIND_FTEID //Ѱ��FTEID

int _tmain(int argc, char* argv[])
{
	
	printf("test start\n");
	char input_file[256] = {0};

	printf("input param : argc = %d \n", argc);
	if( argc == 2)
	{
	    strcpy_s(input_file, argv[1]);
	}
	else
	{
	    strcpy_s(input_file, FILE_PATH);
	}
#ifdef FIND_FTEID
	pcap_search_fteid(input_file);
#else

#ifdef ADD_PCAP
	/* �����֡ */
	pcap_add_merge("lte_pkt.log");//pcap_add��ͷ��ʽ��������Ѿ���������
	pcap_add("merge_pkt.tmp");
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
    system("pause");
	return 0;
}

