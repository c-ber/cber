/****************************************************************************** 

��Ȩ���У�C����2001-2015�꣬����Ƽ��ɷ����޹�˾

******************************************************************************
�ļ���:       packet_recv.c
�����ʽ:     ASCII
����:         chenbin
����:         Sep 9, 2016
��ʷ:
    1.����    :Sep 9, 2016
      ����    :cb
      �޸�    :Created file
******************************************************************************/

#include "packet_recv.h"


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


/* �������ݵ������ڴ� Ҫ�Ż����ڴ濽���Ĳ��� */
dpi_code_t send_data_to_shm(pkt_buff_t *pb)
{
    dpi_code_t ret = DPI_OK;

    work_status_t ws = 1;

    ret = dpi_sdk_shm_data_set(KYE_PKT_BUF01 + pb->thread_id,
                               pb,
                               0,
                               sizeof(pkt_buff_t));

    return ret;
}

void * listen_raw_socket(void * args)
{
    dpi_code_t ret = DPI_OK;

    recv_thread_args_t * rtargs = (recv_thread_args_t * )args;
    dpi_skb_t     skb = {};
    five_tuple_t   ft = {};

    pkt_buff_t pb = {};
    pb.thread_id  = rtargs->thread_id;

    static pbuf                packet_buf = {0};
    static parse_pkt_info_t    packet_info = {0};

    struct sockaddr_ll saddr_ll;
    struct ifreq ifr;

    setuid(0);
    rtargs->sockfd = socket(PF_PACKET, SOCK_RAW, htons(ETH_P_ALL));
    if(rtargs->sockfd < 0)
    {
        perror("Init socket error!");
        return NULL;
    }


    bzero(&saddr_ll, sizeof(struct sockaddr_ll));
    bzero(&ifr, sizeof(struct ifreq));


    /* �����ӿ��� */
    memcpy(ifr.ifr_name, rtargs->eth_name, strlen(rtargs->eth_name));
    printf("net eth name = %s \n", ifr.ifr_name);


    /* ��ȡ�����ӿ����� */
    if (ioctl(rtargs->sockfd, SIOCGIFINDEX, &ifr) == -1)
    {
        perror("ioctl() get ifindex");
        return NULL;
    }

    saddr_ll.sll_ifindex = ifr.ifr_ifindex;
    saddr_ll.sll_family = PF_PACKET;

    saddr_ll.sll_protocol = htons(ETH_P_ALL);
    if(bind(rtargs->sockfd, (struct sockaddr *) &saddr_ll, sizeof ( saddr_ll) ) == - 1)
    {
        perror("bind()");
        return NULL;
    }

    while(1)
    {
        pb.len = recvfrom(rtargs->sockfd, pb.buf, sizeof(pb.buf), 0, NULL, NULL);
        if(pb.len > 0)
        {
            printf("thread[%02d][%s] :read_len = %d \n",
                    rtargs->thread_id, ifr.ifr_name, pb.len);
            printf_buf((unsigned char*)(pb.buf), pb.len);

            /*������������*/
            packet_buf.len = pb.len;
            packet_buf.ptr = pb.buf;
            packet_buf.ptr_offset = 0;
            if(DPI_OK != flow_process(&packet_buf, &packet_info))
            {
                printf("flow process fail!!!\n");
            }
            printf("packet_info.is_send_to_sdk = %d\n", packet_info.is_send_to_sdk);


            /*�ύ��������̣���Ҫ���Ͻ��̺ţ�����1��3�Ĺ�ϵ��3������Ҫ�ж����ֵ*/
            pb.ws = WORK_STATUS_ARRIVE;
            pb.proc_id = 1;//����������
            ret = send_data_to_shm(&pb);
            if(DPI_OK != ret)
            {
                //��¼��־
            }

//sendto(rtargs->sockfd, sbuf, slen, 0, (struct sockaddr *)&saddr_ll, sizeof(struct sockaddr_ll));

        }
        else if(pb.len < 0)
        {
            perror("recv error!");
        }
    }

    return NULL;
}


void test_main_flow()
{
    int i = 0;
    pthread_t             pid[THREAD_MAX_NUM] = {-1};
    recv_thread_args_t rtargs[THREAD_MAX_NUM] = {};

    for(i = 0 ; i < THREAD_MAX_NUM; i++ )
    {
        //Ϊ16���̷߳���һ�������������ڴ洢���ģ��ɶ���̸�����ѯ����
        dpi_shm_data_init(KYE_PKT_BUF01 + i, sizeof(pkt_buff_t));

        sprintf(rtargs[i].eth_name, "eth%d", i);
        rtargs[i].sockfd    = -1;
        rtargs[i].thread_id = i;
        pthread_create(&(pid[i]), NULL, listen_raw_socket, (void *)&(rtargs[i]));
    }

    for(i = 0 ; i < THREAD_MAX_NUM; i++ )
    {
        pthread_join(pid[i], NULL);
    }
}
int main(int argc,char * argv[])
{
    int value = 0;
    if( argc == 2)
    {
        sscanf(argv[1], "%d", &value);
    }

    if(DPI_OK != dataplane_session_mng_init())
    {
        printf("init data fail!!!\n");
        return 0;
    }

    aging_scan_timer_init();

    switch(value)
    {
        case 0:
            test_main_flow();
            break;
//        case 1:
//            test_client1();
//            break;
//        case 2:
//            test_client2();
            break;
        default:
            break;
    }

    return 0;
}
