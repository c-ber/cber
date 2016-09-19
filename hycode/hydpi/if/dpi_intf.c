#include "dpi_ifgrp.h"
#include "../npcp/dpi_npcp.h"


#ifndef USE_SHM
interface_set_st *gpst_epif_base = NULL;
#endif

int dpi_interface_global_initialize(void)
{
    int rv;
    int i = 0;
    interface_entry_st port_entry = {};
    
#ifndef USE_SHM
    gpst_epif_base = (interface_set_st *)calloc(1, sizeof(interface_set_st));
    if (!gpst_epif_base)
    {
        ifgrp_sprint("calloc for gpst_epif_base\n");
        return DPI_FAIL;
    }
    else
    {
        ifgrp_uprint("\r\nDEBUG: initializing interface table ...   ");
    }
#endif


    for (i = 0; i < MAX_SLOT_PORT_NUMBER; i++)
    {
        port_entry.valid           =   1;
        port_entry.logic_index     =   i;
        port_entry.slot            =   1;
        port_entry.card            =   0; /** Physical index */
        port_entry.index           =   i; /* have problem */
        port_entry.ipd_port        =   2352;
        port_entry.if_type         =   INTERFACE_TYPE_XE;
        port_entry.mode            =   MODE_LAN;
        port_entry.iifgrp          =   1;
        port_entry.link_status     =   LINKDOWN;
        port_entry.rx_en           =   ENABLE;
        port_entry.tx_en           =   ENABLE;
        port_entry.linkforced_en   =   DISABLE;
        port_entry.iifgrp          =   INVALID_GROUP;
        port_entry.vlan            =   port_entry.logic_index + 2;
        port_entry.eport           =   i;
        sprintf(port_entry.if_name,"%d/%d/%d", port_entry.slot, port_entry.card, port_entry.index);

#ifndef USE_SHM
        memcpy(&gpst_epif_base->epif_data[i], &port_entry, sizeof(interface_entry_st));
#else
        SHM_SET_DATA(OFFSET_INTF(i), &port_entry, sizeof(interface_entry_st));
#endif
    }

    ifgrp_uprint("done !\r\n");
    return DPI_OK;
}


/*===========================================npcp========================================================*/

static int interface_table_entry_get(npcp_interface_entry_data_st *if_entry)
{
    uint32_t index;
    interface_entry_st port_entry = {};
    index = if_entry->epif_index;

#ifndef USE_SHM
    if (gpst_epif_base == NULL) 
    {
    	ifgrp_uprint("uninitialized <gpst_epif_base>\n");
        return DPI_NULL_POINT;
    }
    
    port_entry = gpst_epif_base->epif_data[index];
#else
    SHM_GET_DATA(&port_entry, OFFSET_INTF(index), sizeof(interface_entry_st));
#endif

    if_entry->epif_data.valid =	1;
    if_entry->epif_data.logic_index	    =	    port_entry.logic_index;
    if_entry->epif_data.slot			=		port_entry.slot;
    if_entry->epif_data.card			=		port_entry.card;
    if_entry->epif_data.index			=		port_entry.index;
    if_entry->epif_data.ipd_port		=		port_entry.ipd_port;
    if_entry->epif_data.if_type		    =		port_entry.if_type;
    if_entry->epif_data.mode			=		port_entry.mode;
    if_entry->epif_data.physical_mode	=		port_entry.physical_mode;
    if_entry->epif_data.speed			=		port_entry.speed;
    if_entry->epif_data.mtu	            =       port_entry.mtu;
    if_entry->epif_data.have_vlan		=		port_entry.have_vlan;
    if_entry->epif_data.card_type		=		port_entry.card_type;
    if_entry->epif_data.iifgrp 		    =		port_entry.iifgrp;
    if_entry->epif_data.link_status	    =		port_entry.link_status;
    if_entry->epif_data.rx_en			=		port_entry.rx_en;
    if_entry->epif_data.tx_en			=		port_entry.tx_en;
    if_entry->epif_data.linkforced_en	=		port_entry.linkforced_en;
    if_entry->epif_data.vlan			=		port_entry.vlan;
    if_entry->epif_data.eport			=		port_entry.eport;

    if_entry->epif_data.stream_direction        =    port_entry.stream_direction;

    return DPI_OK;
}


int hydra_interface_table_set(char *name, npcp_interface_entry_data_st *npcp_epif_data)
{
    uint32_t index;
    interface_entry_st port_entry = {};
    
#ifndef USE_SHM
    if (gpst_epif_base == NULL)
    {
    	ifgrp_uprint("uninitialized <gpst_epif_base>\n");
        return DPI_NULL_POINT;
    }
#endif

    index = npcp_epif_data->epif_index;

    port_entry.iifgrp = INVALID_GROUP;

    switch (npcp_epif_data->epif_data.stream_direction)
    {
        case 0:
           port_entry.stream_direction = 0;
           break;
        case 1:
           port_entry.stream_direction = 1;
           break;
        case 2:
           port_entry.stream_direction = 2;
           break;
    } 
    
    port_entry.mtu  =  npcp_epif_data->epif_data.mtu;
    port_entry.valid           =  1; 
    port_entry.logic_index     =   npcp_epif_data->epif_data.logic_index;
    port_entry.slot            =   1;
    port_entry.card            =   0; /** Physical index */
    port_entry.index           =   index;
    port_entry.ipd_port        =   npcp_epif_data->epif_data.ipd_port;
    port_entry.if_type         =   npcp_epif_data->epif_data.if_type;
    port_entry.mode            =   npcp_epif_data->epif_data.mode;
    port_entry.physical_mode   =   npcp_epif_data->epif_data.physical_mode;
    port_entry.speed           =   npcp_epif_data->epif_data.speed;
    port_entry.mtu             =   npcp_epif_data->epif_data.mtu;
    port_entry.have_vlan       =   npcp_epif_data->epif_data.have_vlan;
    port_entry.card_type       =   npcp_epif_data->epif_data.card_type;
    port_entry.iifgrp          =   npcp_epif_data->epif_data.iifgrp;
    port_entry.link_status     =   npcp_epif_data->epif_data.link_status;
    port_entry.rx_en           =   npcp_epif_data->epif_data.rx_en;
    port_entry.tx_en           =   npcp_epif_data->epif_data.tx_en;
    port_entry.linkforced_en   =   npcp_epif_data->epif_data.linkforced_en;
    port_entry.iifgrp          =   npcp_epif_data->epif_data.iifgrp;
    port_entry.vlan            =   npcp_epif_data->epif_data.vlan;
    port_entry.eport           =   npcp_epif_data->epif_data.eport;

#ifndef USE_SHM
    memcpy(&gpst_epif_base->epif_data[index], &port_entry, sizeof(interface_entry_st));
#else
    SHM_SET_DATA(OFFSET_INTF(index), &port_entry, sizeof(interface_entry_st));
#endif

    return DPI_OK;
}

static int npcp_cmd_interface_alias_set(uint16_t ilen, void *idata, uint16_t *olen, void *odata)
{
    int rv = DPI_OK;
    intf_name_t *iname = (intf_name_t *)idata;
    interface_entry_st port_entry = {};


    if (iname->index < 0 || iname->index >= MAX_SLOT_PORT_NUMBER || iname->len > MAX_LEN_IF_NAME)
    {
        return DPI_PARAM_ERR;
    }

#ifndef USE_SHM
    if (gpst_epif_base == NULL)
    {
    	ifgrp_uprint("uninitialized <gpst_epif_base>\n");
        return DPI_NULL_POINT;
    }
    
    port_entry = gpst_epif_base->epif_data[iname->index];

    memset(port_entry.if_name, 0, sizeof(port_entry.if_name));
    memcpy(port_entry.if_name, iname->name, sizeof(port_entry.if_name));
#else
    SHM_SET_DATA(OFFSET_INTF(iname->index)+offsetof(interface_entry_st, if_name), iname->name, sizeof(port_entry.if_name));
#endif

    return rv;
}


/* show interface Slot/Card/Port */
static int npcp_cmd_interface_table_get(uint16_t ilen, void *idata, uint16_t *olen, void *odata)
{
    int rv = 0;
    npcp_interface_entry_data_st *idata_epif_base = NULL;

    npcp_interface_entry_data_st *npcp_epif_base = NULL;

    idata_epif_base = (npcp_interface_entry_data_st *)idata;

    npcp_epif_base = (npcp_interface_entry_data_st *)odata;

    npcp_epif_base->epif_index = idata_epif_base->epif_index;

    rv = interface_table_entry_get(npcp_epif_base);
    if (rv) 
    {
        ifgrp_uprintv(" rv = %d \n",rv);
        return rv;
    }

    *olen = sizeof(npcp_interface_entry_data_st);

    return DPI_OK;
}

/* cmd: interface Slot/Card/Port rx direction {upstream|downstream|bidstream} */
static int npcp_cmd_hydra_stream_set(uint16_t ilen, void *idata, uint16_t *olen, void *odata)
{
    int rv;
    npcp_interface_entry_data_st *npcp_epif_base = NULL;

    npcp_epif_base = (npcp_interface_entry_data_st *)idata;
    rv = hydra_interface_table_set("stream", npcp_epif_base);

    return rv;
}



int dpi_interface_npcp_cmd_init(void)
{
    int rv;
    
    NPCP_CMD_REGISTER(NPCP_CMD_INTERFACE_TABLE_GET,   npcp_cmd_interface_table_get);
    NPCP_CMD_REGISTER(NPCP_CMD_HYDRA_STREAM_SET, npcp_cmd_hydra_stream_set);
    NPCP_CMD_REGISTER(NPCP_CMD_INTERFACE_CPU_STAT_CLEAR, npcp_cmd_interface_alias_set);
    
    return rv;
}


