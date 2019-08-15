#include "nas.h"
#include "aes.h"
#include "f8.h"
#include "hmac_sha2.h"




#define GUTI_OFFSET_HR  3

inline mp_error_t nas_f8_decrypt(nas_info_t *src, nas_plain_t *dst, uint8_t mac_128[128])
{

    return MP_E_NONE;
}

inline mp_error_t nas_aes_decrypt(nas_info_t *src, nas_plain_t *dst, uint8_t mac_128[128])
{

    return MP_E_NONE;
}



mp_error_t nas_pdu_decrypt(nas_info_t *src, nas_plain_t *dst)
{

    return MP_E_NONE;
}



inline mp_error_t nas_attach_accept_parse(struct pbuf *p, lte_guti_t guti)
{

    return MP_E_NONE;

}


inline mp_error_t nas_tau_accept_parse(struct pbuf *p, lte_guti_t *guti)
{

    return MP_E_NONE;

}

mp_error_t nas_pdu_parse_guti(nas_plain_t *code, lte_guti_t *guti)
{


    return MP_E_NONE;
}
