
#include "se_npcp.h"


char *send_buff = NULL;



char *npcp_cmd_pack(char *p, npcp_pkt_t *pkt)
{
	char *pdata = NULL;

	PACK_MAC(p, pkt->dmac);
	PACK_MAC(p, pkt->smac);

	PACK_U16(p, pkt->ethertype);
	PACK_U16(p, pkt->pkt_type);
	PACK_U32(p, pkt->magic_key);
	PACK_U16(p, pkt->version);
	PACK_U16(p, pkt->flag);

	PACK_U32(p, pkt->seq);
	PACK_U16(p, pkt->cmd);
	PACK_U16(p, pkt->len);

	PACK_U16(p, pkt->ret);
	PACK_U16(p, pkt->res1);

	PACK_U32(p, pkt->res2);

	pdata = (char *)pkt->data;
	PACK_BYTES(p, pdata, pkt->len);

	return p;
}


char *npcp_cmd_unpack(char *p, npcp_pkt_t *pkt)
{
	char *pdata = NULL;

	UNPACK_MAC(p, pkt->dmac);
	UNPACK_MAC(p, pkt->smac);

	UNPACK_U16(p, pkt->ethertype);
	if(pkt->ethertype != ETH_NPCP)
	{
		return NULL;
	}

	UNPACK_U16(p, pkt->pkt_type);
	UNPACK_U32(p, pkt->magic_key);
	UNPACK_U16(p, pkt->version);
	UNPACK_U16(p, pkt->flag);

	UNPACK_U32(p, pkt->seq);
	UNPACK_U16(p, pkt->cmd);
	UNPACK_U16(p, pkt->len);

	UNPACK_U16(p, pkt->ret);
	UNPACK_U16(p, pkt->res1);

	UNPACK_U32(p, pkt->res2);

	pdata = (char *)pkt->data;
	UNPACK_BYTES(p, pdata, pkt->len);

	return p;
}

char *npcp_pkt_pack(char *p, npcp_pkt_t *pkt)
{
	char *pdata = NULL;

	PACK_MAC(p, pkt->dmac);
	PACK_MAC(p, pkt->smac);

	PACK_U16(p, pkt->ethertype);
	PACK_U16(p, pkt->pkt_type);
	PACK_U32(p, pkt->magic_key);
	PACK_U16(p, pkt->version);
	PACK_U16(p, pkt->flag);

	PACK_U32(p, pkt->seq);
	PACK_U16(p, pkt->cmd);
	PACK_U16(p, pkt->len);

	PACK_U16(p, pkt->ret);
	PACK_U16(p, pkt->res1);

	PACK_U32(p, pkt->res2);

	pdata = (char *)pkt->data;
	PACK_BYTES(p, pdata, pkt->len);

	return p;
}

char *npcp_pkt_unpack(char *p, npcp_pkt_t *pkt)
{
	char *pdata = NULL;

	UNPACK_MAC(p, pkt->dmac);
	UNPACK_MAC(p, pkt->smac);

	UNPACK_U16(p, pkt->ethertype);
	UNPACK_U16(p, pkt->pkt_type);
	UNPACK_U32(p, pkt->magic_key);
	UNPACK_U16(p, pkt->version);
	UNPACK_U16(p, pkt->flag);

	UNPACK_U32(p, pkt->seq);
	UNPACK_U16(p, pkt->cmd);
	UNPACK_U16(p, pkt->len);

	UNPACK_U16(p, pkt->ret);
	UNPACK_U16(p, pkt->res1);

	UNPACK_U32(p, pkt->res2);

	pdata = (char *)pkt->data;
	UNPACK_BYTES(p, pdata, pkt->len);

	return p;
}

static int npcp_cmd_probe(uint16_t ilen, void *idata, uint16_t *olen, void *odata)
{
    strcpy(odata, "hello  world , this is semptian fc7002 se plane , welcome come to our plane");
    *olen = strlen("hello  world , this is semptian fc7002 se plane , welcome come to our plane");


    return XSUCCESS;
}

static int npcp_cmd_resv(uint16_t ilen, void *idata, uint16_t *olen, void *odata)
{
	*olen = 0;
	return XSUCCESS;
}

static int npcp_cmd_test(uint16_t ilen, void *idata, uint16_t *olen, void *odata)
{
    //printf("ilen : %d \n", ilen);
	*olen = ilen;
	memcpy(odata, idata, ilen); 

	return XSUCCESS;
}

static char *buff[16] = {0};
static int npcp_cmd_mutli_test(uint16_t ilen, void *idata, uint16_t *olen, void *odata)
{
	*olen = ilen;
	memcpy(buff, idata, ilen);
	memcpy(odata, buff, ilen);
	return XSUCCESS;
}


#define NPCP_MAC_DEBUG(_mac) \
{ \
    int _i; \
    printf("%s:%d: %s", __func__, __LINE__, #_mac); \
    for (_i=0 ; _i < 6; _i ++) { \
        printf("%.2x:", _mac[_i]); \
    } \
    printf("\n"); \
}



CVMX_SHARED npcp_cmd_t *npcp_client_cmd_list = NULL;
CVMX_SHARED mac_t npcp_smac;

npcp_cmd_t*
npcp_cmd_lookup(uint16_t cmd)
{
    if (NULL == npcp_client_cmd_list)
    {
        return NULL;
    }

    if (cmd >= NPCP_CMD_MAX)
    {
        return NULL;
    }

    if (0 == (npcp_client_cmd_list[cmd].flags & NPCP_CMD_FLAGS_REGISTERED))
    {
        return NULL;
    }

    return &npcp_client_cmd_list[cmd];
}


int npcp_cmd_register(uint16_t cmdno, npcp_cmd_func_t func)
{
    npcp_cmd_t *cmd = NULL;
    if (NULL == npcp_client_cmd_list)
    {
        return XEINIT;
    }

    if (NPCP_CMD_MAX <= cmdno)
    {
        return XERANGE;
    }

    cmd = npcp_cmd_lookup(cmdno);
    if (NULL != cmd)
    {
        return XEEXIST;
    }

    cmd = &npcp_client_cmd_list[cmdno];

    cmd->func = func;
    cmd->flags |= NPCP_CMD_FLAGS_REGISTERED;

    NPCP_DEBUG("cmdno = %d, cmd=%p, cmd->flags = 0x%x\n", cmdno, cmd, cmd->flags);

    return XSUCCESS;
}


#if  NPCP_MGMT_MODE
int npcp_process_cmd(char *buff, mac_t smac)
{
    int rv = 0;
    uint16_t tlen = 0;
    uint16_t olen = 0;
    char *tp = NULL, *rp= NULL;

    npcp_pkt_t rpkt, tpkt;

    npcp_cmd_t *cmd = NULL;

    memset (&rpkt, 0,  sizeof(npcp_pkt_t));
    memset (&tpkt, 0,  sizeof(npcp_pkt_t));

    if (NULL == buff)
    {
        return XEINVAL;
    }
    
    rp = (char *)buff;
    rp = npcp_cmd_unpack(rp, &rpkt);
    if (NULL == rp)
    {
        return XEINVAL;
    }

    if (NPCP_MAGIC_KEY != rpkt.magic_key)
    {
        return XEINVAL;
    }

    if (NPCP_VERSION_T != rpkt.version )
    {
        return XEINVAL;
    }

    if (rpkt.len > DATE_LEN_MAX)
    {
        NPCP_DEBUG("invalid data length: %d", rpkt.len);
        return XEINVAL;
    }

    cmd = npcp_cmd_lookup(rpkt.cmd);

    if (NULL == cmd) {
        NPCP_DEBUG("CMD %d, unregistered!", rpkt.cmd);
        HYDRA_STAT_INC(stat_npcp_unregistered_pkt);
        return XENOENT;
    } else {
        rv = (*cmd->func)(rpkt.len, rpkt.data, &olen, tpkt.data);
        if (olen > DATE_LEN_MAX)
        {
            NPCP_DEBUG("npcp return invalid data length: %d", olen);
            return XEUNKOWN;
        }        
    }
    
    memcpy(tpkt.dmac, smac, MAC_LEN);
    memcpy(tpkt.smac, npcp_smac, MAC_LEN);

    //Debug info.
#if 0
    NPCP_MAC_DEBUG(tpkt.smac);
    NPCP_MAC_DEBUG(tpkt.dmac);
#endif

    tpkt.ethertype = ETH_NPCP;
    tpkt.pkt_type  = rpkt.pkt_type;
    tpkt.magic_key = NPCP_MAGIC_KEY;
    tpkt.version   = NPCP_VERSION;
    tpkt.flag      = NPCP_PKT_FLAG_REPLY;
    tpkt.seq       = rpkt.seq;
    tpkt.cmd       = rpkt.cmd;
    tpkt.len       = olen;
    tpkt.ret       = rv;
    tpkt.res1      = 0;
    tpkt.res2      = 0;

    if (send_buff == NULL ) {
        send_buff = cvmx_bootmem_alloc(NPCP_FRMAE_SIZE, 0);
        if (cvmx_unlikely(send_buff == NULL )) {
            HYDRA_STAT_INC(stat_npcp_send_buff_null);
            return XEMEM;
        }
    }

    memset(send_buff, 0, NPCP_FRMAE_SIZE);

    tp = (char *)send_buff;
    tp = npcp_cmd_pack(tp, &tpkt);

    tlen = tp - send_buff;

    rv = cvmx_mgmt_port_send(1, tlen, send_buff);
    if (rv)
    {
        HYDRA_STAT_INC(stat_npcp_tx_fail_pkt);
        return rv;
    }
    HYDRA_STAT_INC(stat_npcp_tx_pkt);

    return rv;
}

#define MGMT_BUF_SIZE  1700
int npcp_recv()
{
    unsigned int len = 0;
    int rv = 0;
    mac_t smac, dmac;
    char buffer[MGMT_BUF_SIZE] = {0};
#if HYDRA_CYCLE_TEST
    uint64_t start = 0;
    uint64_t stop  = 0;

#endif
    /**********change by yzr2015.4.27*************/
    //npcp_pkt_t  npcp_pkt;
    /**********************end*********************/
    len = cvmx_mgmt_port_receive(1, MGMT_BUF_SIZE, buffer);
    

    if (len < 40){
        return -1;
    } else {
        HYDRA_STAT_INC(stat_npcp_rx_pkt);
        HYDRA_STAT_INC(stat_npcp_core0_pkt + cvmx_get_core_num());
        
        HYDRA_CYCLE_START(start);
        
        memcpy(dmac, buffer, 6);
        memcpy(smac, buffer+6, 6);

        //NPCP_MAC_DEBUG(dmac);
        //NPCP_MAC_DEBUG(smac);

        rv = npcp_process_cmd(buffer, smac);
        
        HYDRA_CYCLE_END(start, stop);

        return rv;
    }
}

/** initialize mgmt for SE */
int npcp_mgmt_port_initialize()
{
    int ret = 0;
    cvmx_helper_link_info_t link;

    memset(&link, 0, sizeof(cvmx_helper_link_info_t));

    ret = cvmx_mgmt_port_initialize(0x910);
    if (ret) {
        //printf("[ERR]: %s() failed: %d\n", __func__, ret);
        return -1; 
    }   
    
    link.u64 = 0;
    link.s.link_up = 1;
    link.s.full_duplex = 1;
    link.s.speed = 1000;

    cvmx_mgmt_port_link_set(1, link);
    cvmx_mgmt_port_enable(1);

    return 0;
}

void npcp_main_loop()
{
    int rv = 0;

    while (1)
    {
        rv = npcp_recv();
        if (rv)
        {
            continue;
        }
        cvmx_wait_usec(100);
    }

    return ;
}

#else
int npcp_process_cmd(cvmx_wqe_t * work, uint8_t *rx_ptr, mac_t smac)
{
    int rv = 0;
    uint16_t tlen = 0;
    uint16_t olen = 0;
    char *tp = NULL, *rp= NULL;
    npcp_pkt_t rpkt, tpkt;
   // char send_buff[NPCP_FRMAE_SIZE];
    npcp_cmd_t *cmd = NULL;

    memset (&rpkt, 0,  sizeof(npcp_pkt_t));
    memset (&tpkt, 0,  sizeof(npcp_pkt_t));
    
    rp = (char *)rx_ptr;
    rp = npcp_cmd_unpack(rp, &rpkt);
    if (rpkt.len > DATE_LEN_MAX)
    {
        NPCP_DEBUG("invalid data length: %d", rpkt.len);
        return XEINVAL;
    }
    cmd = npcp_cmd_lookup(rpkt.cmd);

    if (NULL == cmd)
    {
        NPCP_DEBUG("CMD %d, unregistered!", rpkt.cmd);
        HYDRA_STAT_INC(stat_npcp_unregistered_pkt);
        return XENOENT;
    }
    else
    {
        rv = (*cmd->func)(rpkt.len, rpkt.data, &olen, tpkt.data);
        if (olen > DATE_LEN_MAX)
        {
            NPCP_DEBUG("npcp return invalid data length: %d", olen);
            return XEUNKOWN;
        }        
    }
    
    NPCP_DEBUG("cmd %d: ilen %d olen %d(0x%x) rv = %d\n", rpkt.cmd, rpkt.len, olen, olen, rv);

    memcpy(tpkt.dmac, smac, MAC_LEN);
    memcpy(tpkt.smac, npcp_smac, MAC_LEN);

    //NPCP_MAC_DEBUG(tpkt.smac);
    //NPCP_MAC_DEBUG(tpkt.dmac);

    tpkt.ethertype = ETH_NPCP;
    tpkt.pkt_type  = rpkt.pkt_type;
    tpkt.magic_key = NPCP_MAGIC_KEY;
    tpkt.version   = NPCP_VERSION;
    tpkt.flag      = NPCP_PKT_FLAG_REPLY;
    tpkt.seq       = rpkt.seq;
    tpkt.cmd       = rpkt.cmd;
    tpkt.len       = olen;
    tpkt.ret       = rv;
    tpkt.res1      = 0;
    tpkt.res2      = 0;

    if (send_buff == NULL )
    {
        send_buff = cvmx_bootmem_alloc(NPCP_FRMAE_SIZE, 0);
        if (send_buff == NULL )
        {
            printf("alloc npcp send buff failed!\n");
            HYDRA_STAT_INC(stat_npcp_send_buff_null);
            return XEMEM;
        }
    }

    memset(send_buff, 0, NPCP_FRMAE_SIZE);
    tp = (char *)send_buff;
    tp = npcp_cmd_pack(tp, &tpkt);

    tlen = tp - send_buff;

    //dump_buff(send_buff, tlen);
    rv = npcp_packet_transmitter((void *)send_buff,  tlen);
    if (rv)
    {
        HYDRA_STAT_INC(stat_npcp_tx_fail_pkt);
        return rv;
    }
    HYDRA_STAT_INC(stat_npcp_tx_pkt);

    return XSUCCESS;
}

int npcp_wqe_process(cvmx_wqe_t *work)
{
    uint8_t *eth_ptr = NULL;
    cvmx_buf_ptr_t  packet_ptr;
    mac_t smac, dmac;

    int rv = 0; 
    uint64_t start = 0;
    
    start = cvmx_get_cycle();

    if (cvmx_wqe_get_rcv_err(work)) 
    {    
        //NPCP_DROP_CNT(rx_error);
        // Add a counter
        HYDRA_STAT_INC(stat_npcp_rx_err_pkt);
        return XEINVAL;
    }    

#if 0
    if (work->word2.s.bufs == 0)
    {    
        eth_ptr = work->packet_data;
    }    
    else 
    {    
        eth_ptr = cvmx_phys_to_ptr(work->packet_ptr.s.addr);
    }    
#endif

    packet_ptr = cvmx_wqe_get_packet_ptr(work);
    eth_ptr = cvmx_phys_to_ptr(packet_ptr.s.addr);
 
    memcpy(dmac, eth_ptr, 6);
    memcpy(smac, eth_ptr+6, 6);

    //NPCP_MAC_DEBUG(dmac);
    //NPCP_MAC_DEBUG(smac);

    rv = npcp_process_cmd(work, eth_ptr, smac);

#if 0
    printf("%s Cycle: %llu \n",__func__, (unsigned long long int)(cvmx_get_cycle()-start));
#endif
    return rv;
}
#endif

int npcp_client_init(mac_t mac)
{
    int rv;

    NPCP_DEBUG("MAC=%p\n", mac);
    npcp_client_cmd_list = cvmx_bootmem_alloc(sizeof(npcp_cmd_t) * NPCP_CMD_MAX, 16);

    NPCP_DEBUG("npcp_client_cmd_list=%p\n", npcp_client_cmd_list);
    if (NULL == npcp_client_cmd_list)
    {
        return XEMEM;
    }

    memset(npcp_client_cmd_list, 0, sizeof(npcp_cmd_t) * NPCP_CMD_MAX);

    memcpy(npcp_smac, mac, 6);

    rv = npcp_cmd_register(NPCP_CMD_RESV, npcp_cmd_resv);
    rv = npcp_cmd_register(NPCP_CMD_PROBE, npcp_cmd_probe);
    rv = npcp_cmd_register(NPCP_CMD_TEST, npcp_cmd_test);
    rv = npcp_cmd_register(NPCP_CMD_MULTI_TEST, npcp_cmd_mutli_test);

    return rv;
}


/* End of file */
