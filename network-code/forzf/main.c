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

#include <pcap.h>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <syslog.h>
#include <netinet/in.h>
#include <netinet/ip.h>
#include <netinet/tcp.h>
#include <netinet/udp.h>
#include <netinet/if_ether.h>


#define SOCKET_BUF_MAX_SIZE  2048

int tcp_fd = 0;

char rcv_buf[SOCKET_BUF_MAX_SIZE] = {0};
uint16_t rcv_len = 0;

void printf_buf(char *ptr, uint16_t len)
{
    int i = 0;
    printf("printf buf in hex data[len = %d]:", len);
    for( i = 0 ; i < len; i++ )
    {
        if(i % 16 == 0)
        {
            printf("\n    %04x  ", i);
        }
        if(i % 16 == 8 && i > 0)
        {
            printf("- ");
        }
        printf("%02x ", *(ptr+i));
    }
    printf("\n");
}



int create_tcp_client(int *sockfd)
{
    struct    sockaddr_in remote_addr = {};

    *sockfd = socket(AF_INET, SOCK_STREAM, 0);
    if(*sockfd < 0)
    {
        perror("Init socket error!");
        return -1;
    }

    remote_addr.sin_family      = AF_INET;
    remote_addr.sin_port        = htons(6001);
    remote_addr.sin_addr.s_addr = inet_addr("192.168.20.86");

    char pcIFname[] = "eth1";
    setsockopt(*sockfd, SOL_SOCKET, SO_BINDTODEVICE, pcIFname, strlen(pcIFname)+1);

    int res =  connect(*sockfd, (struct sockaddr*) &remote_addr, sizeof(remote_addr));
    if (res < 0)
    {
        perror("Connect server fail!");
        return -1;
    }
    else
    {
        return 0;
    }
}

int snd_tcp_data(int *sockfd)
{
    int ret = 0;
    ret = send(*sockfd, rcv_buf, rcv_len, 0);
    if(ret <= 0)
    {
        perror("Send data fail, should be reconnect!");
        close(*sockfd);
        create_tcp_client(sockfd);
    }
     return ret;
}

int create_udp_service(int *sockfd)
{
    struct sockaddr_in local_addr = {};

    local_addr.sin_family      = AF_INET;
    local_addr.sin_addr.s_addr = inet_addr("192.168.80.10");
    local_addr.sin_port        = htons(6002);

    char pcIFname[] = "eth1";
    setsockopt(*sockfd, SOL_SOCKET, SO_BINDTODEVICE, pcIFname, strlen(pcIFname) + 1);

    /* 创建socket */
    *sockfd = socket(AF_INET, SOCK_DGRAM, 0);
    if(*sockfd < 0)
    {
        perror("Create Socket Failed:");
        exit(1);
    }

    int ret = bind (*sockfd, (struct sockaddr *) &local_addr, sizeof(local_addr));
    if( ret == -1 )
    {
        perror("bind UDP Socket fail! \n");
        return -1;
    }

    fcntl (*sockfd, F_SETFL, O_NONBLOCK);//设置为非阻塞的

    return 0;
}


int recv_udp_data(int *sockfd)
{
    int retval = 0;
    struct timeval      tv              = {};
    struct sockaddr_in  stRHostAddr     = {};
    fd_set              readfds         = {};
    socklen_t           istSockLen      = sizeof(struct sockaddr_in);
    sigset_t            intmask         = {};

    tv.tv_sec  = 0;
    tv.tv_usec = 500000;

    FD_ZERO( &readfds );
    FD_SET( *sockfd, &readfds );

    sigfillset(&intmask);
    sigprocmask(SIG_BLOCK, &intmask, NULL);

    if (select( *sockfd + 1, &readfds, NULL, NULL, &tv) )
    {
        sigprocmask(SIG_UNBLOCK, &intmask, NULL);
        if( FD_ISSET(*sockfd, &readfds) )
        {
            retval = recvfrom( *sockfd, rcv_buf, SOCKET_BUF_MAX_SIZE,
                               0, (struct sockaddr *)&stRHostAddr, &istSockLen );
            if(retval == -1)
            {
                perror("receive udp data faile \n");
                return -1;
            }
            else // retval > 0
            {
                rcv_len = retval;
                printf_buf(rcv_buf, rcv_len); //写log
                return 0;
            }
        }
    }
    sigprocmask(SIG_UNBLOCK, &intmask, NULL);
    return -1;
}

void decode(const struct pcap_pkthdr * pkthdr, const unsigned char *raw_pkt)
{
    //struct ethhdr *eth_header = (struct ethhdr *)(raw_pkt);
    struct iphdr  *p_iphdr  = (struct iphdr *) (raw_pkt + 14);
    struct udphdr *p_udphdr = (struct udphdr  *)(raw_pkt + 14 + 20);

    if (pkthdr->len < sizeof(struct ethhdr))
    {
        return;
    }

    if(p_iphdr->protocol != 17 )
    {
        return;
    }

    uint8_t * payload = (uint8_t *)(raw_pkt + 14 + 20 + 8);
    rcv_len =  htons(p_udphdr->len) - sizeof(struct udphdr);
    memcpy(rcv_buf, payload, rcv_len);
    if (payload[0] == 0x64 || payload[1] == 0x70 || payload[2] == 0x69)
    {
        snd_tcp_data(&tcp_fd);
    }
    
}

void getPacket(u_char * arg, const struct pcap_pkthdr * pkthdr, const u_char * packet)
{
    int * id = (int *)arg;

    printf("id: %d\n", ++(*id));
    printf("Packet length: %d\n", pkthdr->len);
    printf("Number of bytes: %d\n", pkthdr->caplen);
    printf("Recieved time: %s", ctime((const time_t *)&pkthdr->ts.tv_sec));

    int i;
    for(i=0; i<pkthdr->len; ++i)
    {
        printf(" %02x", packet[i]);
        if( (i + 1) % 16 == 0 )
        {
          printf("\n");
        }
    }
    printf("\ndecode start...\r\n");
    decode(pkthdr, packet);
    printf("decode finish...\r\n");
}
int main(int argc,char * argv[])
{
    printf(">>>>>>>>>>>>>test start :\n");
    //int udp_fd = -1;
    create_tcp_client(&tcp_fd);

    //create_udp_service(&udp_fd);

    char errBuf[PCAP_ERRBUF_SIZE], * devStr;


    /* get a device */
    devStr = pcap_lookupdev(errBuf);

    if(devStr)
    {
        //printf("success: device: %s\n", devStr);
    }
    else
    {
        printf("error: %s\n", errBuf);
        exit(1);
    }

    /* open a device, wait until a packet arrives */
    char ifdev[] = "eth3";
    pcap_t * device = pcap_open_live(ifdev, 65535, 1, 0, errBuf);
    //pcap_t * device = pcap_open_live(devStr, 65535, 1, 0, errBuf);
    if(!device)
    {
        printf("error: pcap_open_live(): %s\n", errBuf);
        exit(1);
    }

    /* wait loop forever */
    int id = 0;
    pcap_loop(device, -1, getPacket, (u_char*)&id);

    close(tcp_fd);
    return 0;
} 



