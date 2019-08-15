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
#include    <ctype.h>
#include    <unistd.h>


#include    <dirent.h>//不支持
#include    <sys/socket.h>


#include <sys/types.h>
#include <time.h>
#include <sys/wait.h>
#include <signal.h>
#include <assert.h>
#include <arpa/inet.h>


#include <syslog.h>
#include <netinet/in.h>
#include <netinet/ip.h>
#include <netinet/tcp.h>
#include <netinet/udp.h>
#include <netinet/if_ether.h>
#include <sys/ioctl.h>
#include <net/if.h>
#include <netpacket/packet.h>

#include "dpi.h"

#define DEBUG
#ifdef DEBUG
#define DEBUG_LOG(fmt, _arg...)   printf(fmt , ##_arg )
#else
#define DEBUG_LOG(fmt, _arg...)
#endif

#define SOCKET_BUF_MAX_SIZE  2048

int tcp_fd = 0;

char rcv_buf[SOCKET_BUF_MAX_SIZE] = {0};
uint16_t rcv_len = 0;

void printf_buf_1(unsigned char *ptr, uint16_t len)
{
    int i = 0;
    DEBUG_LOG("printf buf in hex data[len = %d]:", len);
    for( i = 0 ; i < len; i++ )
    {
        if(i % 16 == 0)
        {
            DEBUG_LOG("\n    %04x  ", i);
        }
        if(i % 16 == 8 && i > 0)
        {
            DEBUG_LOG("- ");
        }
        DEBUG_LOG("%02x ", *(ptr+i));
    }
    DEBUG_LOG("\n");
}



/* arp请求 */
//void arp_request(const char *if_name, const char *dst_ip)
//{
//    struct sockaddr_ll saddr_ll;
//    struct ether_header *eth_header;
//    struct ether_arp *arp_packet;
//    struct ifreq ifr;
//    char buf[ETHER_ARP_PACKET_LEN];
//    unsigned char src_mac_addr[ETH_ALEN];
//    unsigned char dst_mac_addr[ETH_ALEN] = BROADCAST_ADDR;
//    char *src_ip;
//    int sock_raw_fd, ret_len, i;
//
//    if ((sock_raw_fd = socket(PF_PACKET, SOCK_RAW, htons(ETH_P_ARP))) == -1)
//        err_exit("socket()");
//
//    bzero(&saddr_ll, sizeof(struct sockaddr_ll));
//    bzero(&ifr, sizeof(struct ifreq));
//    /* 网卡接口名 */
//    memcpy(ifr.ifr_name, if_name, strlen(if_name));
//
//    /* 获取网卡接口索引 */
//    if (ioctl(sock_raw_fd, SIOCGIFINDEX, &ifr) == -1)
//        err_exit("ioctl() get ifindex");
//    saddr_ll.sll_ifindex = ifr.ifr_ifindex;
//    saddr_ll.sll_family = PF_PACKET;
//
//    /* 获取网卡接口IP */
//    if (ioctl(sock_raw_fd, SIOCGIFADDR, &ifr) == -1)
//        err_exit("ioctl() get ip");
//    src_ip = inet_ntoa(((struct sockaddr_in *)&(ifr.ifr_addr))->sin_addr);
//    printf("local ip:%s\n", src_ip);
//
//    /* 获取网卡接口MAC地址 */
//    if (ioctl(sock_raw_fd, SIOCGIFHWADDR, &ifr))
//        err_exit("ioctl() get mac");
//    memcpy(src_mac_addr, ifr.ifr_hwaddr.sa_data, ETH_ALEN);
//    printf("local mac");
//    for (i = 0; i < ETH_ALEN; i++)
//        printf(":%02x", src_mac_addr[i]);
//    printf("\n");
//
//    bzero(buf, ETHER_ARP_PACKET_LEN);
//    /* 填充以太首部 */
//    eth_header = (struct ether_header *)buf;
//    memcpy(eth_header->ether_shost, src_mac_addr, ETH_ALEN);
//    memcpy(eth_header->ether_dhost, dst_mac_addr, ETH_ALEN);
//    eth_header->ether_type = htons(ETHERTYPE_ARP);
//    /* arp包 */
//    arp_packet = fill_arp_packet(src_mac_addr, src_ip, dst_ip);
//    memcpy(buf + ETHER_HEADER_LEN, arp_packet, ETHER_ARP_LEN);
//
//    /* 发送请求 */
//    ret_len = sendto(sock_raw_fd, buf, ETHER_ARP_PACKET_LEN, 0, (struct sockaddr *)&saddr_ll, sizeof(struct sockaddr_ll));
//    if ( ret_len > 0)
//        printf("sendto() ok!!!\n");
//
//    close(sock_raw_fd);
//}

int protocol_identity(dpi_skb_t *skb, five_tuple_t *ft,
                       const unsigned char *raw_pkt, int pkt_len)
{
    struct ethhdr *eth_header = (struct ethhdr *)(raw_pkt);
    u_int8_t   *pucEth_payload = NULL;
    u_int16_t  usEth_payload_len = 0;
    u_int16_t  usEth_proto = 0;

    struct _VlanHdr *vlanhdr; /* for VLAN 要处理这个*/

    int care_pkt = 0;
    struct iphdr *p_iphdr;
    struct tcphdr *p_tcphdr;
    struct udphdr *p_udphdr;


    /* sanity check */
    if (pkt_len < sizeof(struct ethhdr)) {
        return -1;
    }

    switch (ntohs(eth_header->h_proto))
    {
        case 0x8100:        /* ETH_TYPE_8021Q */
            break;
        default:
            pucEth_payload = (u_int8_t *) (eth_header + 1);
            usEth_payload_len = pkt_len - sizeof(struct ethhdr);
            usEth_proto = ntohs(eth_header->h_proto);
            break;
    }

    switch (usEth_proto) {
        case 0x0800:            /* ipv4 0x0800 */
            skb->l2_proto = usEth_proto;
            break;
        default:
            return -1;
    }

    p_iphdr = (struct iphdr *)(raw_pkt + 14);

    if( ntohs(p_iphdr->tot_len) + 14 > pkt_len)
    {
            syslog(LOG_INFO, "ip header wrong ? fragment ?.\n");
            return -1;
    }

    ft->sip.ip.v4 = p_iphdr->saddr;
    ft->dip.ip.v4 = p_iphdr->daddr;
    ft->protocol = p_iphdr->protocol;
    if( p_iphdr->protocol == 6)
    {
        p_tcphdr = (struct tcphdr *)( ((char *)p_iphdr) + p_iphdr->ihl*4 );

        if( ((char *)p_tcphdr) + 20 > raw_pkt + pkt_len)
        {
            syslog(LOG_INFO, "TCP,  bad header ? \n");
            return -1;
        }

        ft->dst_port = p_tcphdr->dest;
        ft->src_port = p_tcphdr->source;
        skb->care_pkt = 1;
        skb->mac_header = eth_header;
        skb->network_header = raw_pkt + 14;
        skb->network_header_len = pkt_len - 14;
        skb->pktdir = 0;
        skb->l3_proto = ntohs(p_iphdr->protocol);
        skb->pkt_tail = raw_pkt + pkt_len;
        skb->pkt_len  = pkt_len;
    }
    else if(p_iphdr->protocol == 17 )
    {
        p_udphdr = (struct udphdr *)( ((char *)p_iphdr) + p_iphdr->ihl*4 );

        if( ((char *)p_udphdr) + sizeof(struct udphdr) > raw_pkt + pkt_len)
        {
            syslog(LOG_INFO, "UDP,  bad header ? \n");
            return -1;
        }

        ft->dst_port = p_udphdr->dest;
        ft->src_port = p_udphdr->source;
        skb->care_pkt = 1;
        skb->mac_header = eth_header;
        skb->network_header = raw_pkt + 14;
        skb->network_header_len = pkt_len - 14;
        skb->pktdir = 0;
        skb->l3_proto = ntohs(p_iphdr->protocol);
        skb->pkt_tail = raw_pkt + pkt_len;
        skb->pkt_len  = pkt_len;
    }
    else
    {
        //TCP or UDP may be include in ICMP, but we didn't process it.
        syslog(LOG_INFO, "IP protocol:%d [ICMP=1] \n", p_iphdr->protocol );
    }

    return 0;
}

char sbuf[2048] = {0};
uint16_t slen = 0;
int listen_raw_socket(int *sockfd, char *eth_name)
{
    dpi_skb_t skb = {};
    five_tuple_t ft = {};

    int ret      = 0;
    int read_len = 0;
    struct sockaddr_in rcvaddr;
    struct sockaddr_ll saddr_ll;
    struct ifreq ifr;

    setuid(0);

    *sockfd = socket(PF_PACKET, SOCK_RAW, htons(ETH_P_ALL));
    if(*sockfd < 0)
    {
        perror("Init socket error!");
        return -1;
    }


    bzero(&saddr_ll, sizeof(struct sockaddr_ll));
    bzero(&ifr, sizeof(struct ifreq));
    /* 网卡接口名 */
    memcpy(ifr.ifr_name, eth_name, strlen(eth_name));

    /* 获取网卡接口索引 */
    if (ioctl(*sockfd, SIOCGIFINDEX, &ifr) == -1)
    {
        perror("ioctl() get ifindex");
        return 0;
    }

    saddr_ll.sll_ifindex = ifr.ifr_ifindex;
    saddr_ll.sll_family = PF_PACKET;
    //new add
    saddr_ll.sll_protocol = htons(ETH_P_ALL);
    if(bind(*sockfd, (struct sockaddr *) &saddr_ll, sizeof ( saddr_ll) ) == - 1) 
    {
        perror("bind()"); 
        return 0;
    }


//    setsockopt(*sockfd, SOL_SOCKET, SO_BINDTODEVICE, pcIFname, strlen(pcIFname)+1);

    while(1)
    {
        //read_len = recv(*sockfd, rcv_buf, SOCKET_BUF_MAX_SIZE, 0);

        read_len = recvfrom(*sockfd, rcv_buf, sizeof(rcv_buf), 0, NULL, NULL);

        if(read_len > 0)
        {
            DEBUG_LOG("read_len = %d \n", read_len);
            printf_buf(rcv_buf, read_len);

            protocol_identity(&skb, &ft, rcv_buf, read_len);
            dataplane_dpi_processs(&skb, &ft, sbuf, &slen);
            if(slen > 0)
            {
                slen = sendto(*sockfd, sbuf, slen, 0,
                        (struct sockaddr *)&saddr_ll, sizeof(struct sockaddr_ll));
                if(slen <= 0)
                {
                    perror("Send data fail!");
                }
                else
                {
                    DEBUG_LOG("send data success!\n");
                }
            }
        }
        else if(read_len < 0)
        {
            perror("recv error!");
        }
    }

    return 0;
}


int main(int argc,char * argv[])
{
    char device_name[128] ={0};
    //test();
    if(argc == 2)
    {
        printf("set eth name = %s \n", argv[1]);

#ifdef DEBUG
        printf("debug log is open!\n");
#else
        printf("debug log is closed!\n");
#endif

    }
    else
    {
        printf("please input eth device name! \n");
        return 0;
    }
    strncpy(device_name, argv[1], sizeof(device_name));

    sapl_sdk_init();
    listen_raw_socket(&tcp_fd, device_name);
    return 0;
} 



