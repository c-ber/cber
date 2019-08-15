#ifndef __SEMP_HYDRA_LTE_H__
#define __SEMP_HYDRA_LTE_H__

#include "cvmx-platform.h"
#include "cvmx_common.h"
#define RELATE_AGING      /* 老化模块宏开关 */

#define  LTE_DEBUG_PRINTF1(fmt, _arg...)

#define LTE_DEBUG 1
#if LTE_DEBUG

    #define LTE_DEBUG_PRINTF(fmt, _arg...)   printf("(%s) +%d " fmt ,__func__, __LINE__, ##_arg )


    #define  PRINTF_S_TMSI(_stmsi)  do {\
        printf("S-TMSI=%02x-%02x-%02x-%02x-%02x, (%s) +%d\n",\
        (int)_stmsi[0],_stmsi[1],(int)_stmsi[2],(int)_stmsi[3],(int)_stmsi[4],\
        __func__, __LINE__);\
        }while(0)

    #define  PRINTF_KASME(_kasme)  do {\
        printf("KASME=%02x-%02x-%02x-%02x-%02x-%02x-%02x-%02x-%02x-%02x-%02x-%02x-%02x-%02x-%02x-%02x-%02x-%02x-%02x-%02x-%02x-%02x-%02x-%02x-%02x-%02x-%02x-%02x-%02x-%02x-%02x-%02x, (%s) +%d\n",\
        (int)_kasme[0],_kasme[1],(int)_kasme[2],(int)_kasme[3],(int)_kasme[4],(int)_kasme[5],(int)_kasme[6],(int)_kasme[7],\
        (int)_kasme[8],(int)_kasme[9],(int)_kasme[10],(int)_kasme[11],(int)_kasme[12],(int)_kasme[13],(int)_kasme[14],(int)_kasme[15],\
        (int)_kasme[16],(int)_kasme[17],(int)_kasme[18],(int)_kasme[19],(int)_kasme[20],(int)_kasme[21],(int)_kasme[22],(int)_kasme[23],\
        (int)_kasme[24],(int)_kasme[25],(int)_kasme[26],(int)_kasme[27],(int)_kasme[28],(int)_kasme[29],(int)_kasme[30],(int)_kasme[31],\
        __func__, __LINE__);\
        }while(0)

    #define  PRINTF_GUTI(_guti)  do {\
        printf("GUTI=%02x-%02x-%02x-%02x-%02x-%02x-%02x-%02x-%02x-%02x, (%s) +%d\n",\
        (int)_guti[0],_guti[1],(int)_guti[2],(int)_guti[3],\
        (int)_guti[4],(int)_guti[5],(int)_guti[6],(int)_guti[7],(int)_guti[8],(int)_guti[9],__func__, __LINE__);\
        }while(0)
    #define PRINTF_TAI(_tai)    do {\
        printf("TAI=%02x-%02x-%02x-%02x-%02x, (%s) +%d\n",\
        (int)_tai[0],(int)_tai[1],(int)_tai[2],(int)_tai[3],\
        (int)_tai[4],__func__, __LINE__);\
        }while(0)

    #define  PRINTF_RAND(_rand)  do {\
        printf("RAND=%02x-%02x-%02x-%02x-%02x-%02x-%02x-%02x-%02x-%02x-%02x-%02x, (%s) +%d\n",\
        (int)_rand[0],_rand[1],(int)_rand[2],(int)_rand[3],\
        (int)_rand[4],(int)_rand[5],(int)_rand[6],(int)_rand[7],(int)_rand[8],(int)_rand[9],(int)_rand[10],(int)_rand[11],__func__, __LINE__);\
        }while(0)

    #define  PRINTF_IMSI(_imsi)  do {\
        printf("IMSI=%02x-%02x-%02x-%02x-%02x-%02x-%02x-%02x, (%s) +%d\n",\
        (int)_imsi[0],_imsi[1],(int)_imsi[2],(int)_imsi[3],\
        (int)_imsi[4],(int)_imsi[5],(int)_imsi[6],(int)_imsi[7],__func__, __LINE__);\
        }while(0)

     #define  PRINTF_IMEI(_imei)  do {\
        printf("IMEI=%02x-%02x-%02x-%02x-%02x-%02x-%02x-%02x, (%s) +%d\n",\
        (int)_imei[0],_imei[1],(int)_imei[2],(int)_imei[3],\
        (int)_imei[4],(int)_imei[5],(int)_imei[6],(int)_imei[7], __func__, __LINE__);\
        }while(0)

     #define  PRINTF_MSISDN(_msisdn)  do {\
        printf("MSISDN=%02x-%02x-%02x-%02x-%02x-%02x-%02x-%02x, (%s) +%d\n",\
        (int)_msisdn[0],_msisdn[1],(int)_msisdn[2],(int)_msisdn[3],\
        (int)_msisdn[4],(int)_msisdn[5],(int)_msisdn[6],(int)_msisdn[7], __func__, __LINE__);\
        }while(0)
    #define PRINTF_KEY(key)     do{\
                                    char print_buf[1024]="";\
                                    uint32_t count = 0;\
                                    uint32_t n = 0;\
                                    for(count=0;count<key.size;count++)\
                                    {\
                                        n += sprintf(print_buf+n,"%02x-%02x-%02x-%02x-%02x-%02x-%02x-%02x\n"   ,*((uint8_t *)key.data+count*8)\
                                                                                                        ,*((uint8_t *)key.data+count*8+1)\
                                                                                                        ,*((uint8_t *)key.data+count*8+2)\
                                                                                                        ,*((uint8_t *)key.data+count*8+3)\
                                                                                                        ,*((uint8_t *)key.data+count*8+4)\
                                                                                                        ,*((uint8_t *)key.data+count*8+5)\
                                                                                                        ,*((uint8_t *)key.data+count*8+6)\
                                                                                                        ,*((uint8_t *)key.data+count*8+7));\
                                    }\
                                    printf("KEY=%s\n",print_buf);\
                                  }while(0);
    #define PRINTF_BUF(buf,len)   {\
                                    uint32_t i = 0;\
                                    uint8_t *ptr = NULL;\
                                    ptr = (uint8_t *)buf;\
                                    printf("%s.%d:\n",__FUNCTION__,__LINE__);\
                                    for(i = 0;i<len;i++)\
                                    {\
                                      if(i%8 == 7)\
                                      {\
                                        printf("%x\n",ptr[i]);\
                                      }\
                                      else\
                                      {\
                                        printf("%x ",ptr[i]);\
                                      }\
                                    }\
                                  }
                                    
                                    
#else /*LTE_DEBUG*/

    #define  LTE_DEBUG_PRINTF(_arg...)
    #define  PRINTF_S_TMSI(_stmsi)
    #define  PRINTF_KASME(_kasme)
    #define  PRINTF_GUTI(_guti)
    #define  PRINTF_TAI(_tai) 
    #define  PRINTF_RAND(_rand)
    #define  PRINTF_IMSI(_imsi)
    #define  PRINTF_IMEI(_imei)
    #define  PRINTF_MSISDN(_msisdn)
    #define  PRINTF_KEY(key)
    #define  PRINTF_BUF(buf,len)
#endif /*LTE_DEBUG*/






typedef enum {
	S11_MME, /*contorl cell MME*/
	S11_SGW, /*contorl cell SGW*/
	S1U_SGW,  
	S1U_ENODEB,
	S_MAX,
}lte_ne_tunnel_t;


/*BCD Code*/
#define LTE_IMEI_LEN  8
#define LTE_IMSI_LEN  8 
#define LTE_MSISDN_LEN 8

typedef   uint32_t    lte_teid_t;
typedef   uint8_t    lte_imsi_t [LTE_IMSI_LEN] ;
typedef   uint8_t    lte_imei_t [LTE_IMEI_LEN];
typedef   uint8_t    lte_msisdn_t [LTE_MSISDN_LEN];

#define LTE_KASME_LEN 32
typedef   uint8_t   lte_kasme_t[LTE_KASME_LEN];

#define LTE_RAND_LEN  16
typedef   uint8_t    lte_rand_t[LTE_RAND_LEN] ;

#define LTE_GUTI_LEN  10
typedef   uint8_t    lte_guti_t[LTE_GUTI_LEN] ;

#define LTE_TAI_MAX_LEN 5
typedef   uint8_t   lte_tai_t[LTE_TAI_MAX_LEN];

#define LTE_STMSI_LEN  5
#define LTE_STMSI_OFFSET 5
typedef   uint8_t    lte_s_tmsi_t[LTE_STMSI_LEN] ;


#if 0
typedef union
{
    uint8_t  imsi[LTE_IMSI_LEN];
    uint64_t data;
}lte_imsi_t;
#endif


#pragma pack(1)
typedef struct
{
    uint8_t  pdn_type;          /*IP版本: 0x01:IPV4,0x02:IPV6*/
    uint32_t pdn_addr;          /*UE IP*/
} lte_pdn_t;
#pragma pack()

typedef union
{
		struct
        {
			uint32_t ip;
			uint32_t teid;
		};
        uint64_t data;
}lte_fteid_t;

typedef enum 
{
	FS_LTE_GTPV1C,
	FS_LTE_GTPV2C,
	FS_LTE_GTPV1U,
	FS_LTE_S1AP,
	FS_LTE_DIAMETER,
	FS_LTE_MAX,
}LTE_CONTROL_TYPE_EM; 

typedef struct
{
	unsigned char action;       /* action type */
    /* oifgrp mask, every bit correspond one oifgrp */
    unsigned long long oifgrpMask;
	LTE_CONTROL_TYPE_EM type;    
}fs_lte_control_acl_t;

typedef struct lte_hit_t
{
    int64_t pkt;           /* packet counter */             
    int64_t byte;          /* byte counter */             
}LTE_HIT_T;

typedef struct hydra_lte_stat_t
{
	LTE_CONTROL_TYPE_EM type;
	LTE_HIT_T Stat;
}HYDRA_LTE_STAT_T;
typedef struct 
{
    uint16_t ppid;
}dmt_addr_t;

typedef struct lte_attr_t
{
    HYDRA_LTE_STAT_T stat;
    fs_lte_control_acl_t acl;               /* s1ap acl */
    uint16_t port;
    union
    {
        int gtpuIpMatch;                /* gtp-u ip match */
        dmt_addr_t dmt_attr;        
    };
}LTE_ATTR_T;

typedef struct hydra_lte_port_set
{
    LTE_CONTROL_TYPE_EM type;
    uint16_t port;
}HYDRA_LTE_PORT_SET;



#define GET_ATTR_BY_PRO(_pro) (pGtpAttr + _pro)

#define SET_LTE_IDENTIFY_PROTOCOL(_mpp, _v) (_mpp->pktinfo.protocol = (_v))

//diameter

#define DMT_ST_PORT                 (3868)
#define DMT_RAND_LEN                (16)
#define DMT_XRES_LEN                (8)
#define DMT_AUTN_LEN                (16)
#define DMT_KASME_LEN               (32)
#define MAX_KASME_RAND_PAIR         (4)

typedef struct
{
    lte_rand_t rand;
    lte_kasme_t kasme;
}__attribute__((packed)) rand_kasme_pair_t;
typedef enum
{
    DMT_REQ_PKT,
    DMT_RES_PKT,
    DMT_VERSION_ER,
    DMT_CMD_NOT_318,
    DMT_APP_NOT_3GPP,
    DMT_ERR_PKT,
}dmt_type_em;
typedef struct {
    lte_rand_t rand;
    lte_imsi_t imsi;
    }imsi_rand_info_t;

typedef struct {
    uint32_t hss_ip;
    uint32_t mme_ip;
    uint32_t hop_by_hop;
}ip_hbh_t;

typedef struct{
    uint8_t valid_flag:1;
    uint32_t hss_ip;
    uint32_t mme_ip;
    uint32_t hop_by_hop;
    lte_imsi_t username;
    uint8_t valid_key_num;
    rand_kasme_pair_t key_info[MAX_KASME_RAND_PAIR];
}s6a_table_node_info_t;


typedef enum {
    EMM_MSG_SERVICE_REQUEST   = 0x0,
    EMM_MSG_ATTACH_REQUEST    = 0x41,
    EMM_MSG_TRACK_AREA_UPDATE = 0x48,    
    EMM_MSG_AUTH_REQUEST      = 0x52,
    EMM_MSG_IDENTIFY_RESPONSE = 0x56,
    EMM_SECURITE_COMMAND      = 0x5d,
}EMM_Message_Type_enum;

#endif /* end of__SEMP_HYDRA_LTE_H__ */
