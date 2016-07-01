#include "nas.h"
#include "packet_entry.h"


#define GUTI_OFFSET_HR  3



inline mp_error_t nas_attach_accept_parse(struct pbuf *p, lte_guti_t guti)
{
    nas_ele_hdr_t *ele_hdr = NULL;
    uint8_t *tai_len = 0;
    uint8_t *p_guti = NULL;
    uint8_t guti_len = 0;
    uint16_t *container_len = 0;

    if ((NULL == p)|| (NULL == guti))
    {
        return MP_E_FAIL;
    }
    
    UPDATE_PBUF_OFFSET(p, EPS_ATTACT_RESULT_LEN);
    UPDATE_PBUF_OFFSET(p, T3412_LEN);

    PBUF_CUR_FORMAT(uint8_t *, tai_len, p);
    printf("nas tai list length : %d\n", *tai_len);
    UPDATE_PBUF_OFFSET(p, (*tai_len +1));

    PBUF_CUR_FORMAT(uint16_t *, container_len, p);
    printf("nas con length : %d\n", *container_len);
    UPDATE_PBUF_OFFSET(p, (*container_len + 2));

    PBUF_CUR_FORMAT(nas_ele_hdr_t *, ele_hdr, p);
    guti_len = ele_hdr->len;

    printf("nas guti length : %d\n", guti_len);

    UPDATE_PBUF_OFFSET(p, GUTI_OFFSET_HR);

    PBUF_CUR_FORMAT(uint8_t*, p_guti, p);

    CHECK_PBUF_LEN(p, guti_len-1);

    if (guti_len - 1 <= LTE_GUTI_LEN)
    {
        memcpy(guti, p_guti, guti_len - 1);
    }

    return MP_E_NONE;

}


inline mp_error_t nas_tau_accept_parse(struct pbuf *p, lte_guti_t guti)
{
    nas_ele_hdr_t *ele_hdr = NULL;
    uint8_t *p_guti = NULL;
    uint8_t guti_len = 0;

    if ((NULL == p)|| (NULL == guti))
    {
        return MP_E_FAIL;
    }

    UPDATE_PBUF_OFFSET(p, EPS_ATTACT_RESULT_LEN);

    CHECK_PBUF_LEN(p, TAU_ACCEPT_T3412_LEN);
    UPDATE_PBUF_OFFSET(p, TAU_ACCEPT_T3412_LEN);

    PBUF_CUR_FORMAT(nas_ele_hdr_t *, ele_hdr, p);
    guti_len = ele_hdr->len;

    CHECK_PBUF_LEN(p, GUTI_OFFSET_HR);
    UPDATE_PBUF_OFFSET(p, GUTI_OFFSET_HR);

    PBUF_CUR_FORMAT(uint8_t *, p_guti, p);
    CHECK_PBUF_LEN(p, guti_len - 1);
    if (guti_len - 1 == LTE_GUTI_LEN)
    {
        memcpy(guti, p_guti, guti_len - 1);
    }
    PRINTF_GUTI(guti);
    return MP_E_NONE;

}

inline mp_error_t nas_guti_realloc_cmd_parse(struct pbuf *p, lte_guti_t guti)
{
    nas_ele_hdr_t *ele_hdr = NULL;
    uint8_t *p_guti = NULL;
    uint8_t guti_len = 0;

    if ((NULL == p)|| (NULL == guti))
    {
        return MP_E_FAIL;
    }

    PBUF_CUR_FORMAT(nas_ele_hdr_t*, ele_hdr, p);
    guti_len = ele_hdr->len;

    UPDATE_PBUF_OFFSET(p, GUTI_OFFSET_HR);

    PBUF_CUR_FORMAT(uint8_t *, p_guti, p);
    CHECK_PBUF_LEN(p, guti_len);
    if (guti_len + 1 < LTE_GUTI_LEN)
    {
        memcpy(guti, p_guti, guti_len + 1);
    }
    
    return MP_E_NONE;

}

mp_error_t nas_pdu_parse_guti(nas_plain_t *code, lte_guti_t guti)
{
    mp_error_t rv = MP_E_NONE;
    struct pbuf pdu;
    struct pbuf *p = NULL;
    nas_common_message_t *nas_msg = NULL;
    uint8_t nas_msg_type = 0;
    uint32_t msg_len = 0;

    if ((NULL == code) || (NULL == code->data)
        || (NULL == guti))
    {
        return MP_E_FAIL;
    }

    pdu.ptr = (void *)code->data;
    pdu.len = code->len;
    pdu.ptr_offset = 0;

    p = &pdu;

    msg_len = sizeof(nas_common_message_t);

    PBUF_CUR_FORMAT(nas_common_message_t *, nas_msg, p);

    nas_msg_type = NAS_MSG_TYPE(nas_msg);

    printf("nas message type : type 0x%x (0x42 or 0x49 )\n", nas_msg_type);

    UPDATE_PBUF_OFFSET(p, msg_len);

    CHECK_PBUF_LEN(p, msg_len);

    switch (nas_msg_type)
    {
        case NAS_MSG_TYPE_ATTACH_ACCEPT:
            rv = nas_attach_accept_parse(p, guti);
            break;
        case NAS_MSG_TYPE_TAU_ACCEPT:
            rv = nas_tau_accept_parse(p, guti);
            break;
            
        case NAS_MSG_GUTI_REALLOCATION_CMD:
            rv = nas_guti_realloc_cmd_parse(p, guti);
            break;
            
        default:
            rv = MP_E_INVALID_PACKET;
            break;
    }
    if (MP_E_NONE != rv)
    {
        printf("nas parse fail : message type %d\n", nas_msg_type);
        return rv;
    }

    return MP_E_NONE;
}
