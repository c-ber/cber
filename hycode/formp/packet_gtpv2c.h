/*
 * packet_gtpv2c.h
 *
 *  Created on: Oct 19, 2015
 *      Author: root
 */

#ifndef PACKET_GTPV2C_H_
#define PACKET_GTPV2C_H_

#include "stdint.h"
#include "semp_hydra_lte.h"

typedef enum
{
    PDN_TYPE_NULL,
    PDN_TYPE_IPV4,
    PDN_TYPE_IPV6,
    PDN_TYPE_IPV4V6,
}gtp_ie_pdn_type_t;

typedef enum
{
    IE_TYPE_IS_IMSI=1,
    IE_TYPE_IS_CAUSE=2,
    IE_TYPE_IS_APN=71,
    IE_TYPE_IS_EBI=73,
    IE_TYPE_IS_EMI=75,
    IE_TYPE_IS_MSISDN=76,
    IE_TYPE_IS_PAA=79,
    IE_TYPE_IS_FTEID=87,
    IE_TYPE_IS_BEARER_CONTEXT=93,
} gtp_ie_type_t;


struct ie_common_hdr
{
    uint32_t ie_type:8;
    uint32_t ie_len:16;
    uint32_t crflag:4;
    uint32_t instance:4;
} ;


typedef struct parse_gtpc_t
{
    lte_imsi_t          imsi;  /*IMSI*/
    lte_imei_t          imei;  /*IMEI*/
    lte_msisdn_t        msisdn;/*phone number*/
    uint16_t            imsi_len;
    uint16_t            imei_len;
    uint16_t            msisdn_len;
    uint8_t     message_type;
    uint8_t     gtp_version;
    uint8_t     cause;    /*check response*/
    uint8_t     bearerid;
    uint16_t    message_len;
    uint32_t    sequence_number;
    uint32_t    dstip;
    uint32_t    srcip;
    uint32_t    teid;
    lte_pdn_t   pdn;
    lte_fteid_t fteid[S_MAX];
}parse_gtpc_t;


struct gtpv2c_hdr
{
#if defined(__LITTLE_ENDIAN_BITFIELD)
    uint8_t resv:3;
    uint8_t Teidflag:1;
    uint8_t pigpack:1;
    uint8_t vesion:3;
#elif defined(__BIG_ENDIAN_BITFIELD)
    uint8_t version:3;
    uint8_t pigpack:1;
    uint8_t Teidflag:1;
    uint8_t resv:3;
#endif
    uint8_t message_type;
    uint16_t length;
    uint32_t teid;
    uint32_t sequence_no:24;
    uint32_t spare:8;
};

#define GTPv1_VERSION_IN_HDR  1
#define GTPv2_VERSION_IN_HDR  2


#define GTP_TEID_LEN                     (4)
//#define GTP_HDR_LEN                      (sizeof(struct gtpv2c_hdr))
#define GTP_HDR_LEN                      (12)
#define GTP_HDR_WITHOUT_TEID_LEN            (GTP_HDR_LEN - GTP_TEID_LEN)

#define GTPv2C_VERSION(gtpv2c_hdr)  (gtpv2c_hdr->version)
#define GTPv2C_TEIDFLAG(gtpv2c_hdr)  (gtpv2c_hdr->Teidflag)
#define GTPv2C_MESG_TYPE(gtpv2c_hdr)  (gtpv2c_hdr->message_type)
#define GTPv2C_LENGTH(gtpv2c_hdr)  (gtpv2c_hdr->length)
#define GTPv2C_TEID(gtpv2c_hdr)  (gtpv2c_hdr->teid)
#define GTPv2C_SEQNO(gtpv2c_hdr)  (gtpv2c_hdr->sequence_no)
#define GTPv2C_SPARE(gtpv2c_hdr)  (gtpv2c_hdr->spare)

#define GTPC_IE_COMMON_HDR_LEN            (4)
//#define GTPC_IE_COMMON_HDR_LEN            (sizeof(struct gtpc_ie_common_hdr))

#define GTPC_IE_TYPE(ie_common_hdr)           (ie_common_hdr->ie_type)
#define GTPC_IE_LEN(ie_common_hdr)           (ie_common_hdr->ie_len)

#define PDN_TYPE_LEN 1
#define PDN_ADDR_LEN 4


typedef enum
{
    GTP_FTEID_IP_NULL,
    GTP_FTEID_IPV6,
    GTP_FTEID_IPV4,
    GTP_FTEID_IPV4V6,
} ie_fteid_ip_type_t;

typedef enum
{
    GTP_S1_U_ENODEB = 0,
    GTP_S1_U_SGW = 1,
    GTP_S11_MME = 10,
    GTP_S11_SGW = 11,
} ie_fteid_if_ype_t;

typedef enum
{
    REUQEST_ACCEPT = 16
}ie_cause_em_t;




#pragma pack(1)
typedef struct
{
#if defined(__LITTLE_ENDIAN_BITFIELD)
    uint8_t if_type:6;
    uint8_t ip_type:2;
#elif defined(__BIG_ENDIAN_BITFIELD)
    uint8_t ip_type:2;
    uint8_t if_type:6;
#endif
    uint32_t teid;
    uint32_t ip;
} ie_fteid_data_t;
#pragma pack()


typedef struct
{
    uint8_t spare:4;
    uint8_t ebi:4;
} ie_ebi_t;






#endif /* PACKET_GTPV2C_H_ */
