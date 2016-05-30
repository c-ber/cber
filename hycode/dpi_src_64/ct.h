#ifndef CT_H
#define CT_H

#include <time.h>
#include <sys/time.h>
#include "r2_list.h"

struct flow_element
{
    struct cmb_list_head list;
    int create_type; // 1 flow crated by pkt,  2. by statistic report.
        
    unsigned int sip;
    unsigned sp;
    
    unsigned int dip;    
    unsigned dp;
    
    unsigned char proto;
    unsigned char dir;

	unsigned int appid;

    int packet_cnt;     //first 20 pkts.
    int bytes;
	void *app_session;
	void *user_session;

	void *tcp_rsm;

    unsigned char athx;
};

/*struct nf_conn {
    struct flow_element tuplehash[IP_CT_DIR_MAX];

	struct nf_conn *master;

	void *tcp_rsm;
	void *app_session;
	struct list_head rsm_list;
    unsigned int appid;
	struct nf_conn_counter acct;

	unsigned int create_seconds;
};*/

#endif

