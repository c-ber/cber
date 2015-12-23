#ifndef __NAS_H__
#define __NAS_H__

#include "lte_relate.h"
#include "semp-errno.h"


#define MAC_256_SIZE  32
#define MAC_128_SIZE  16
#define NAS_KEY_LEN 32


struct pbuf
{

};
typedef enum
{
    EEA0_TYPE,
    EEA1_TYPE, /*snow 3g*/
    EEA2_TYPE, /*AES*/
    MAX_TYPE,
}AlgorithmType_E;

typedef struct
{
    uint32_t sequence_no;  /*sequence count*/
    uint8_t bear_id;      /*EPS bearer identity*/
    uint8_t dir;         /*direction*/
    uint32_t data_len;      /*ciphered message length*/
    uint8_t *data;             /* pointer to ciphered message*/
    lte_kasme_t kasme;      /*key*/
    uint8_t type;           /*algorithm type*/
} nas_info_t;


typedef struct
{
    uint8_t *data;         /*output plain code*/
    uint32_t len;          /*output plaine code length*/
} nas_plain_t;


#pragma pack(1)
struct nas_common_message
{
#if defined(__LITTLE_ENDIAN_BITFIELD)
    uint8_t sec_header_type:4;
    uint8_t proto_disc:4;
#elif defined(__BIG_ENDIAN_BITFIELD)	
    uint8_t proto_disc:4;
    uint8_t sec_header_type:4;
#endif
    uint8_t message_type;
};
#pragma pack()

#define NAS_MSG_TYPE(common_message)           (common_message->message_type)


typedef enum
{
    NAS_MSG_TYPE_ATTACH_ACCEPT = 0x42,
    NAS_MSG_TYPE_TAU_ACCEPT = 0x49,
    NAS_MSG_TYPE_MAX
}NAS_MSG_TYPE_E;


#pragma pack(1)
struct nas_ele_hdr
{
#if defined(__LITTLE_ENDIAN_BITFIELD)
    uint8_t len;
    uint8_t elmid;
#elif defined(__BIG_ENDIAN_BITFIELD)	
    uint8_t elmid;
    uint8_t len;
#endif
};
#pragma pack()

#define EPS_ATTACT_RESULT_LEN  1
#define T3412_LEN 1


mp_error_t nas_pdu_decrypt(nas_info_t *src, nas_plain_t *dst);

mp_error_t nas_pdu_parse_guti(nas_plain_t *code,  lte_guti_t *guti);

#endif /* __NAS_H__ */

