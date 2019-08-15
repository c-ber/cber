#ifndef __NAS_H__111
#define __NAS_H__111

#include "cvmx_common.h"

#define MAC_256_SIZE  32
#define MAC_128_SIZE  16
#define NAS_KEY_LEN 32

typedef enum _AlgorithmType_E
{
    EEA0_TYPE,
    EEA1_TYPE, /*snow 3g*/
    EEA2_TYPE, /*AES*/
    MAX_TYPE,
}AlgorithmType_E;

#define NAS_MSG_TYPE(common_message)           (common_message->message_type)


typedef struct _nas_common_message_t
{
    uint8_t sec_header_type:4;
    uint8_t proto_disc:4;
    uint8_t message_type;
}__attribute__((packed)) nas_common_message_t;

typedef struct _nas_ele_hdr
{
    uint8_t len;
    uint8_t elmid;
}__attribute__((packed)) nas_ele_hdr_t;


#define EPS_ATTACT_RESULT_LEN  1
#define T3412_LEN 1
#define TAU_ACCEPT_T3412_LEN 2

#endif /* __NAS_H__ */

