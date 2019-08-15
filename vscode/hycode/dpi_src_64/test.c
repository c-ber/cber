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

#include "sapl_dpi_sdk.h"


int g_decode_count = 0;

void decode(const struct pcap_pkthdr * pkthdr, const unsigned char *raw_pkt)
{
    struct ethhdr *eth_header = (struct ethhdr *)(raw_pkt);
    u_int8_t   *pucEth_payload = NULL;
	u_int16_t  usEth_payload_len = 0;
	u_int16_t  usEth_proto = 0;
	u_int16_t   proto_id = 0;
	u_int16_t  proto_tmp;
	struct sk_buff skbuf;
    void *app_session = NULL;
    u_int32_t usAppid = 0;
	//struct _VlanHdr *vlanhdr;	/* for VLAN */
	u_int16_t syn = 0;
	u_int16_t ack = 0;

	int care_pkt = 0;
	struct iphdr *p_iphdr;
	struct tcphdr *p_tcphdr;
    struct udphdr *p_udphdr;
	struct flow_element tmp_ele = {0};
    struct flow_element *tpe;


	/* sanity check */
	if (pkthdr->len < sizeof(struct ethhdr)) {
		return;
	}

	/*packet->eth_length = packet->raw_pkt_len;
	packet->eth_hdr = (struct ethhdr *)packet->raw_pkt;
	packet->eth_smac = packet->eth_hdr->h_source;
	packet->eth_dmac = packet->eth_hdr->h_dest;
	packet->eth_smaclen = ETH_ALEN;
	packet->eth_dmaclen = ETH_ALEN;*/

	proto_tmp = ntohs(eth_header->h_proto);

	switch (proto_tmp) {
	case 0x8100:		/* ETH_TYPE_8021Q */
		//pucEth_payload = (u_int8_t *) (eth_header + 1) + sizeof(struct _VlanHdr);
		//usEth_payload_len = pkthdr->len - sizeof(struct ethhdr) - sizeof(struct _VlanHdr);
		//usEth_proto = ntohs(vlanhdr->vh_proto);
		break;
	default:
		pucEth_payload = (u_int8_t *) (eth_header + 1);
		usEth_payload_len = pkthdr->len - sizeof(struct ethhdr);
		usEth_proto = ntohs(eth_header->h_proto);
		break;
	}

	switch (usEth_proto) {
    	case 0x0800:			/* ipv4 0x0800 */
    		proto_id = 0x0800;
    		break;
		case 0x0866:
			proto_id = 0x0866;   /* ipv6 ±¨ÎÄ */
    	default:
    		return;
	}

	p_iphdr = (struct iphdr *)(raw_pkt + 14);

    if( ntohs(p_iphdr->tot_len) + 14 > pkthdr->len)
    {
            syslog(LOG_INFO, "ip header wrong ? fragment ?.\n");
            return ;   
    }

	if( p_iphdr->protocol == 6)
    {
        p_tcphdr = (struct tcphdr *)( ((char *)p_iphdr) + p_iphdr->ihl*4 );

        if( ((char *)p_tcphdr) + 20 > raw_pkt + pkthdr->len)
        {
            syslog(LOG_INFO, "TCP,  bad header ? \n");
            return ;    
        }

        //all in network endian.
        tmp_ele.sip = p_iphdr->saddr;
        tmp_ele.dip = p_iphdr->daddr;
        tmp_ele.sp = p_tcphdr->source;
        tmp_ele.dp = p_tcphdr->dest;
        tmp_ele.proto = 6;
        tmp_ele.athx = 0;

        care_pkt = 1;

		skbuf.mac_header = eth_header;
		skbuf.network_header = raw_pkt + 14;
		skbuf.network_header_len = pkthdr->len - 14;
		skbuf.pktdir = 0;
		skbuf.protocol = ntohs(p_iphdr->protocol);
		skbuf.tail = raw_pkt + pkthdr->len;
		skbuf.len  = pkthdr->len;
    }
    else if(p_iphdr->protocol == 17 )
    {
        p_udphdr = (struct udphdr *)( ((char *)p_iphdr) + p_iphdr->ihl*4 );
        
        if( ((char *)p_udphdr) + sizeof(struct udphdr) > raw_pkt + pkthdr->len)
        {
            syslog(LOG_INFO, "UDP,  bad header ? \n");
            return ;    
        }

        //all in network endian.
        tmp_ele.sip = p_iphdr->saddr;
        tmp_ele.dip = p_iphdr->daddr;
        tmp_ele.sp = p_udphdr->source;
        tmp_ele.dp = p_udphdr->dest;
        tmp_ele.proto = 17;
        tmp_ele.athx = 0;
        
        care_pkt = 1;

		skbuf.mac_header = eth_header;
		skbuf.network_header = raw_pkt + 14;
		skbuf.network_header_len = pkthdr->len - 14;
		skbuf.pktdir = 0;
		skbuf.protocol = ntohs(p_iphdr->protocol);
		skbuf.tail = raw_pkt + pkthdr->len;
		skbuf.len  = pkthdr->len;
    }
    else
    {
        //TCP or UDP may be include in ICMP, but we didn't process it.
        syslog(LOG_INFO, "IP protocol:%d [ICMP=1] \n", p_iphdr->protocol );
        //dbg_show_pktcontent(buf, len);
    }

	if (!care_pkt)
		return;
	skbuf.ct = tpe;

    g_decode_count++;
	printf("g_decode_count++:%d\r\n", g_decode_count);
	printf("app_session:%p\r\n", &app_session);
    AIE_hook(&skbuf, &app_session, &usAppid);
    g_decode_count--;
	printf("g_decode_count--:%d\r\n", g_decode_count);
	if (usAppid)
		printf("app id:%d\r\n", usAppid);
}

void getPacket(u_char * arg, const struct pcap_pkthdr * pkthdr, const u_char * packet)
{
    int * id = (int *)arg;

    //printf("id: %d\n", ++(*id));
    //printf("Packet length: %d\n", pkthdr->len);
    //printf("Number of bytes: %d\n", pkthdr->caplen);
    //printf("Recieved time: %s", ctime((const time_t *)&pkthdr->ts.tv_sec));

    /*int i;
    for(i=0; i<pkthdr->len; ++i)
    {
        printf(" %02x", packet[i]);
        if( (i + 1) % 16 == 0 )
        {
          printf("\n");
        }
    }*/
	//printf("decode start...\r\n");
	decode(pkthdr, packet);
	//printf("decode finish...\r\n");
}

int main(int argc , char *argv[])
{
    char errBuf[PCAP_ERRBUF_SIZE], * devStr;

    int ret = 0;
	DPI_MALLOC new;
	DPI_FREE   del;
    ret = AIE_sdk_init(new, del);
	if(ret != 0)
		return 1;
	//app_obj_init();
	printf("app_engine_init finished.\n");
    /* get a device */
    devStr = pcap_lookupdev(errBuf);

    if(devStr)
    {
        printf("success: device: %s\n", devStr);
    }
    else
    {
        printf("error: %s\n", errBuf);
        exit(1);
    }

    /* open a device, wait until a packet arrives */
    pcap_t * device = pcap_open_live(devStr, 65535, 1, 0, errBuf);

    if(!device)
    {
        printf("error: pcap_open_live(): %s\n", errBuf);
        exit(1);
    }

    /* construct a filter */
    //struct bpf_program filter;
   // pcap_compile(device, &filter, "dst port 80", 1, 0);
    //pcap_setfilter(device, &filter);

    /* wait loop forever */
    int id = 0;
    pcap_loop(device, -1, getPacket, (u_char*)&id);

    pcap_close(device);

    AIE_sdk_uninit();

    return 0;
}
