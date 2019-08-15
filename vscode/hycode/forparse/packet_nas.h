#ifndef __PRASE_NAS_H
#define __PRASE_NAS_H


typedef struct
{
    uint8_t  emm_type:4;
    uint8_t  securhdr:4;
}__attribute__((packed)) nas_head_t;
#define MESSGA_AND_SEQ_LEN 5

typedef struct
{
    uint8_t  securhdr:4;
    uint8_t  emm_type:4;
    uint8_t  emm_msg_code;
}__attribute__((packed)) nas_innerhead_t;



typedef struct 
{
    uint8_t tsc:1;
    uint8_t key_iden:3;
    uint8_t spare:1;
    uint8_t eps_attach_type:3;
}__attribute__((packed)) emm_msg_attach_request_t;



//#define IMEI_OLD_GUTI 6
typedef struct
{
    uint8_t type_of_identity:3;
    uint8_t odd_even:1;
    uint8_t resv:4;
 }__attribute__((packed)) emm_emi_t;


#endif
