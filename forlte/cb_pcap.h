/****************************************************************************** 

版权所有（C），2001-2015年，恒扬科技股份有限公司

******************************************************************************
文件名:       cb_pcap.h
编码格式:     ASCII
作者:         chenbin
创建:         Nov 23, 2015
历史:
    1.日期    :Nov 23, 2015
      作者    :cb
      修改    :Created file
******************************************************************************/
#ifndef FORMP_CB_PCAP_H_
#define FORMP_CB_PCAP_H_
#include    <util.h>

//#define DEBUG


#define PROTOCOL_TCP      6
#define PROTOCOL_UDP      17
#define PROTOCOL_SCTP     132


/*802.1Q Virtual LAN, PRI, 链路层多的一层 0x0c : 81 00, 无 80 00*/
#define VLAN_PRI_LEN      0x04

#define L2_ALL_LEN        0x0E
#define L3_ALL_LEN        0X14
#define L4_ALL_LEN        0X08

#define L4_SCTP_ALL_LEN   0X0C


#define IMSI_OFFSET       0x10
#define PROTOCAL_OFFSET   0X09
#define PORT_OFFSET       0x00
#define ETH_TYPE_OFFSET   0X0C
#define MSG_TYPE_OFFSET   0x01

#define ETH_TYPE_VLAN     0x81
#define ETH_TYPE_IP       0x80


#define GTPC_PORT         2123


#define S1AP_PORT         0x3c8e
#define CHUNK_TYPE_DATA   0
#define CHUNK_SIZE        0x10
#define PPI_OFFSET        0x0c
#define PPI_TYPE_S1AP     0x12000000




//#define FILE_PATH           "1eth0.50gb.pcap"
//#define FILE_PATH            "eth0.50gb.pcap"
#define FILE_PATH           "lte.pcap"
#define FILE_OUT_PATH       "gtpc_output.pcap"


#define    PCAP_HEADER_LEN    24
#define    DATA_HEADER_LEN    16
#define    ACL_LEN_OFFSET     8

#define DEBUG

#ifdef DEBUG
#define LOG_DEBUG(fmt, _arg...)   printf(fmt, ##_arg)
#else
#define LOG_DEBUG(fmt, _arg...)
#endif

#define  PRINTF_IMSI(_imsi)  do {\
    printf("IMSI = 0x%02x%02x%02x%02x%02x%02x%02x%02x (%s) +%d\n",\
    (int)_imsi[0],_imsi[1],(int)_imsi[2],(int)_imsi[3],\
    (int)_imsi[4],(int)_imsi[5],(int)_imsi[6],(int)_imsi[7],__func__, __LINE__);\
    }while(0)


void pcap_search();


typedef struct  {
        uint32_t     tv_sec;         /* seconds (XXX should be time_t) */
        uint32_t     tv_usec;        /* and microseconds */
        uint32_t caplen;     /* length of portion present */
        uint32_t len;        /* length this packet (off wire) */
}pcap_pkthdr;


#endif /* FORMP_CB_PCAP_H_ */
