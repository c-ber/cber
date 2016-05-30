#ifndef SAPL_DPI_SDK
#define SAPL_DPI_SDK

#include "stdio.h"
#include "stdlib.h"
#include "ct.h"
//memory manage function type
typedef void* (*DPI_MALLOC)(unsigned int size);
typedef void (*DPI_FREE)(void *p);
/* dir */
#define DIR_REQUEST	0
#define DIR_ANSWER	1

//packet data
struct sk_buff
{
	struct sk_buff		*next;
	struct sk_buff		*prev;
	unsigned short       protocol;
	unsigned char 		 pktdir;  // request dir is DIR_REQUEST, reponse dir is DIR_ANSWER
	void *network_header;
	void *mac_header;
	void *tail;
	u_int16_t network_header_len;
	struct flow_element  *ct;

	unsigned int 		len;
	char			cb[48] /*__aligned(8) */;
};

int AIE_sdk_init(DPI_MALLOC malloc, DPI_FREE free);
void AIE_sdk_uninit();
unsigned int AIE_hook(struct sk_buff *skb, void **app_session, unsigned int *uiAppId);

void AIE_session_delete(void *app_session);


#endif
