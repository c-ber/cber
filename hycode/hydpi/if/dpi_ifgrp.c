#include "dpi_ifgrp.h"
#include "../npcp/dpi_npcp.h"

#define DEF_MAX_PKT_LEN 2048

#ifndef USE_SHM
ifgrp_st *gpst_if_grp_base = NULL;
uint32_t max_pkt_len = DEF_MAX_PKT_LEN;
#endif


static void  inline __dpi_do_iifgrp_initialize(void)
{
    iifgrp_st        iifgrp     =     {};
    uint64_t i;

#ifndef USE_SHM
    if (!gpst_if_grp_base)
    {
    	ifgrp_uprint("uninitialized <gpst_if_grp_base>\n");
        return;
    }
#endif
    
    for (i = 0; i < MAX_IIF_GROUP_NUMBER; i++)
    {
        iifgrp.if_grp_id = i + 1;
        iifgrp.grp_member.if_grp_port_num = 0;
        memset((void *) iifgrp.grp_member.ifmask, 0, sizeof(iifgrp.grp_member.ifmask));

#ifndef USE_SHM
        memcpy(gpst_if_grp_base->iif_group + i, &iifgrp, sizeof(iifgrp_st));
#else
        SHM_SET_DATA(OFFSET_IIFGRP+i*sizeof(iifgrp_st), &iifgrp, sizeof(iifgrp));
#endif
    }
}


static void  inline __dpi_do_oifgrp_initialize(void)
{
    oifgrp_st        oifgrp     =     {};
    uint32_t  k = 0;
    uint64_t i = 0;
    
#ifndef USE_SHM
    if (!gpst_if_grp_base)
    {
    	ifgrp_uprint("uninitialized <gpst_if_grp_base>\n");
        return;
    }
#endif
    
    for (i = 0; i < MAX_OIF_GROUP_NUMBER; i++)
    {
        oifgrp.if_grp_id = i + 1;
        oifgrp.port_num = 0;
        oifgrp.dn_port_num = 0;
        oifgrp.mode = OIF_GRP_LOAD_BALANCE_DEFAULT_MODE;
        oifgrp.hash = OIF_GRP_LOAD_BALANCE_DEFAULT_HASH_MODE;
        oifgrp.logic_record     =  (uint32_t) -1;
        memset((void *) oifgrp.ifmask, 0, sizeof(oifgrp.ifmask));
        memset((void *) oifgrp.up_ifmask, 0, sizeof(oifgrp.up_ifmask));
           
        oifgrp.all_port.up_port_num = 0;

        for (k = 0; k < OIF_GRP_UP_PORT_MEMBER_MAX; k++)
        {
            oifgrp.all_port.up_port[k] = INVALID_PORT_NUMBER;
        }

        oifgrp.up_port.up_port_num = 0;

        for (k = 0; k < OIF_GRP_UP_PORT_MEMBER_MAX; k++)
        {
            oifgrp.up_port.up_port[k] = INVALID_PORT_NUMBER;
        }

#ifndef USE_SHM
        memcpy(gpst_if_grp_base->oif_group + i, &oifgrp, sizeof(oifgrp_st));
#else
        SHM_SET_DATA(OFFSET_OIFGRP+i*sizeof(oifgrp_st), &oifgrp, sizeof(oifgrp));
#endif
    }

    
}


void dpi_ifgrp_global_initialize(void)
{

#ifndef USE_SHM
    gpst_if_grp_base = (ifgrp_st *) calloc(1, sizeof(ifgrp_st));
    if (!gpst_if_grp_base)
    {
        ifgrp_sprint("<Calloc for gpst_if_grp_base>\n");
        return;
    }
#else
    dpi_shm_data_init(KEY_IFGRP, sizeof(ifgrp_global_var_t));
#endif
    
    ifgrp_uprint("\r\nDEBUG: initializing interface group ...   ");

    __dpi_do_iifgrp_initialize();
    __dpi_do_oifgrp_initialize();
    ifgrp_uprint("successfully, done!!!");
}



/*========================================npcp====================================*/

static int oifgrp_keepalive_config(uint32_t oifgrp_index,uint8_t  en)
{
#ifndef USE_SHM
    oifgrp_st *grp = NULL;
#endif
    /* check parameter */
    if (oifgrp_index > MAX_OIF_GROUP_NUMBER)
    {
        return DPI_PARAM_ERR;
    }

#ifndef USE_SHM
    grp = ifgrp_get_oifgrp(oifgrp_index);
    if(NULL == grp)
    {
        ifgrp_uprint("get oifgrp error\n");
        return  DPI_FAIL;  
    }

    grp->keepalive_en = en;
#else
    SHM_SET_DATA(OFFSET_OIFGRP+sizeof(oifgrp_st)*(oifgrp_index-1), &en, sizeof(en));
#endif
    
    return DPI_OK;
    
}


/*
 * 1. iifgrp <1-%u> add Slot/Card/Port
 * 2. iifgrp <1-%u> del Slot/Card/Port
 * 3. iifgrp del all
 * 4. iifgrp del <1-%u>
 * 5. iifgrp del <1-%u> to <1-%u>
 */
static int npcp_cmd_interface_set_iifgrp(uint16_t ilen, void *idata, uint16_t *olen, void *odata)
{
    npcp_interface_set_iifgrp_st *if_set_iifgrp = (npcp_interface_set_iifgrp_st *) idata;

    if ( ilen != sizeof(npcp_interface_set_iifgrp_st))
    {
        return DPI_PARAM_ERR;
    }

#ifndef USE_SHM
    ((interface_entry_st *)PortEntry( if_set_iifgrp->if_id))->iifgrp = if_set_iifgrp->iifgrp;
#else
    SHM_SET_DATA(OFFSET_INTF(if_set_iifgrp->if_id)+offsetof(interface_entry_st, iifgrp), &if_set_iifgrp->iifgrp, sizeof(if_set_iifgrp->iifgrp));
#endif
    return DPI_OK;
}

/*
 * 1. oifgrp <1-%d> add Slot/Card/Port
 * 2. oifgrp <1-%d> del Slot/Card/Port
 * 3. oifgrp <1-%d> hash {sip|dip|sdip|broadcast|five-tuple}
 * 4. oifgrp del all
 * 5. oifgrp del <1-%d>
 * 6. oifgrp del <1-%d> to <1-%d>
 */
static int npcp_cmd_oifgrp_pull(uint16_t ilen, void *idata, uint16_t *olen, void *odata)
{
    uint8_t grp_id = *((uint8_t *)idata);
#ifndef USE_SHM
    oifgrp_st  *s_grp =  NULL;
    
    s_grp = gpst_if_grp_base->oif_group + (grp_id - 1);
    memcpy(odata, s_grp, sizeof (oifgrp_st));
#else
    SHM_GET_DATA(odata, OFFSET_OIF(grp_id-1), sizeof(oifgrp_st));
#endif
    
    *olen = sizeof(oifgrp_st);
    return DPI_OK;
}

static int npcp_cmd_oifgrp_issued(uint16_t ilen, void *idata, uint16_t *olen, void *odata)
{
    oifgrp_st  *s_grp = (oifgrp_st *)idata;
    uint8_t    grp_id = s_grp->if_grp_id;
    
    oifgrp_st  *d_grp =  NULL;

    if (ilen != sizeof(oifgrp_st))
    {
        return DPI_PARAM_ERR;
    }
    
#ifndef USE_SHM
    d_grp = gpst_if_grp_base->oif_group + (grp_id - 1);
    memcpy(d_grp, s_grp, sizeof (oifgrp_st));
#else
    SHM_SET_DATA(OFFSET_OIF(grp_id-1), s_grp, sizeof(oifgrp_st));
#endif

    return DPI_OK;
}

/*
 * oifgrp <1-%d> keepalive {enable|disable}
 */
static int npcp_cmd_oifgrp_keepalive_config(uint16_t ilen, void *idata, uint16_t *olen, void *odata)
{
    oifgrp_keepalive_config_t keepalive;
    memset(&keepalive,0,sizeof(keepalive));
    if(ilen != sizeof(oifgrp_lte_check_mask_config_t))
    {
        ifgrp_uprint("expect input ilen is %ld,but get %d\n",sizeof(oifgrp_lte_check_mask_en_t),ilen);
        return DPI_FAIL;
    }
    keepalive = *(oifgrp_keepalive_config_t *)idata;
    if(DPI_OK != oifgrp_keepalive_config(keepalive.oifgrp_index,keepalive.en))
    {
        ifgrp_uprint("Error:configuration oifgrp keepalive error\n");
        return DPI_FAIL;
    }
    return DPI_OK;
}

int npcp_cmd_max_pkt_len_set(uint16_t ilen, void *idata, uint16_t *olen, void *odata)
{
    uint32_t len = 0;;
    if(sizeof(uint32_t) != ilen || NULL == idata)
    {
        return DPI_FAIL;
    }
    len  = *(uint32_t *)idata;
    if(len>DEF_MAX_PKT_LEN)
    {
        return DPI_FAIL;
    }

#ifndef USE_SHM
    max_pkt_len = len;
#else
    SHM_SET_DATA(OFFSET_MTU, &len, sizeof(len));
#endif
    
    return DPI_OK;
}

int npcp_cmd_hydra_weight_set(uint16_t ilen, void *idata, uint16_t *olen, void *odata)
{
    int rv;
    npcp_interface_entry_data_st *npcp_epif_base = NULL;

    npcp_epif_base = (npcp_interface_entry_data_st *)idata;
    rv = hydra_interface_table_set("weight", npcp_epif_base);
    return rv;
}


int dpi_ifgrp_npcp_init(void)
{
    int rv;

    NPCP_CMD_REGISTER(NPCP_CMD_INTERFACE_SET_IIFGRP, npcp_cmd_interface_set_iifgrp);
    NPCP_CMD_REGISTER(NPCP_CMD_OIFGRP_PULL, npcp_cmd_oifgrp_pull);
    NPCP_CMD_REGISTER(NPCP_CMD_OIFGRP_ISSUED, npcp_cmd_oifgrp_issued);
    NPCP_CMD_REGISTER(NPCP_CMD_OIFGRP_KEEPALIVE_CONFIG, npcp_cmd_oifgrp_keepalive_config);
    NPCP_CMD_REGISTER(NPCP_CMD_HYDRA_MP_PKT_MAX_LEN,npcp_cmd_max_pkt_len_set);
    NPCP_CMD_REGISTER(NPCP_CMD_HYDRA_WEIGHT_SET, npcp_cmd_hydra_weight_set);
    
    return rv;
}

