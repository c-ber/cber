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
#include <arpa/inet.h>


#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <syslog.h>
#include <netinet/in.h>
#include <netinet/ip.h>
#include <netinet/tcp.h>
#include <netinet/udp.h>
#include <netinet/if_ether.h>
#include <sys/ioctl.h>
#include <net/if.h>
#include <netpacket/packet.h>

//#define DEBUG
#ifdef DEBUG
#define DEBUG_LOG(fmt, _arg...)   printf(fmt , ##_arg )
#else
#define DEBUG_LOG(fmt, _arg...)
#endif

#define SOCKET_BUF_MAX_SIZE  2048

int tcp_fd = 0;

char rcv_buf[SOCKET_BUF_MAX_SIZE] = {0};
uint16_t rcv_len = 0;

void printf_buf(unsigned char *ptr, uint16_t len)
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

int listen_raw_socket(int *sockfd, char *eth_name)
{
    int ret      = 0;
    int read_len = 0;
    int send_len = 0;
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
        perror("ioctl() get ifindex");
    saddr_ll.sll_ifindex = ifr.ifr_ifindex;
    saddr_ll.sll_family = PF_PACKET;


//    setsockopt(*sockfd, SOL_SOCKET, SO_BINDTODEVICE, pcIFname, strlen(pcIFname)+1);

    while(1)
    {
        //read_len = recv(*sockfd, rcv_buf, SOCKET_BUF_MAX_SIZE, 0);

        read_len = recvfrom(*sockfd, rcv_buf, sizeof(rcv_buf), 0, NULL, NULL);

        if(read_len > 0)
        {
            DEBUG_LOG("read_len = %d \n", read_len);
            printf_buf(rcv_buf, read_len);
            send_len = sendto(*sockfd, rcv_buf, read_len, 0,
                    (struct sockaddr *)&saddr_ll, sizeof(struct sockaddr_ll));
            if(send_len <= 0)
            {
                perror("Send data fail!");
            }
            else
            {
                DEBUG_LOG("send data success!\n");
            }
        }
        else if(read_len < 0)
        {
            perror("recv error!");
        }
    }

    return 0;
}

int snd_tcp_data(int *sockfd)
{
    int ret = 0;
    ret = send(*sockfd, rcv_buf, rcv_len, 0);
    if(ret <= 0)
    {
        perror("Send data fail, should be reconnect!");
        close(*sockfd);
        //create_tcp_client(sockfd);//导致重发数据包
    }
     return ret;
}

void test()
{
    int sock, n;
    char buffer[2048];
    struct ethhdr *eth;
    struct iphdr *iph;

    if (0>(sock=socket(PF_PACKET, SOCK_RAW, htons(ETH_P_IP)))) {
      perror("socket");
      exit(1);
    }

    while (1) {
      DEBUG_LOG("=====================================\n");
      n = recvfrom(sock,buffer,2048,0,NULL,NULL);
      DEBUG_LOG("%d bytes read\n",n);

      //接收到的数据帧头6字节是目的MAC地址，紧接着6字节是源MAC地址。
      eth=(struct ethhdr*)buffer;
      DEBUG_LOG("Dest MAC addr:%02x:%02x:%02x:%02x:%02x:%02x\n",eth->h_dest[0],eth->h_dest[1],eth->h_dest[2],eth->h_dest[3],eth->h_dest[4],eth->h_dest[5]);
      DEBUG_LOG("Source MAC addr:%02x:%02x:%02x:%02x:%02x:%02x\n",eth->h_source[0],eth->h_source[1],eth->h_source[2],eth->h_source[3],eth->h_source[4],eth->h_source[5]);

      iph=(struct iphdr*)(buffer+sizeof(struct ethhdr));
      //我们只对IPV4且没有选项字段的IPv4报文感兴趣
      if(iph->version ==4 && iph->ihl == 5){
          char ipstr[50] = {0};
          inet_ntop(AF_INET, (char *)&iph->saddr, (char *)ipstr, INET6_ADDRSTRLEN);
              DEBUG_LOG("Source host:%s\n",ipstr);
              inet_ntop(AF_INET, (char *)&iph->daddr, (char *)ipstr, INET6_ADDRSTRLEN);
              DEBUG_LOG("Dest host:%s\n",ipstr);
      }
    }
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
    listen_raw_socket(&tcp_fd, device_name);
    return 0;
} 



