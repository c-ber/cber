#ifndef __SE_NPCP_H__
#define __SE_NPCP_H__

#include "executive-common.h"  /** executive-common.h, include all executive header files of CVM* */
#include "semp-ctypes.h"       /** system C types definition */
#include "semp-types-base.h"
#include "semp-npcp.h"

#define NPCP_VERSION  0
#define NPCP_MGMT_MODE   1

//typedef unsigned char uint8_t;
//typedef unsigned short int uint16_t;
//typedef unsigned int uint32_t;
//typedef unsigned long long uint64_t;

#define PACK_U8(_buf, _var) \
	*_buf++ = (_var) & 0xff
#define UNPACK_U8(_buf, _var) \
	_var = *_buf++ & 0xff

#define PACK_U16(_buf, _var) \
	*_buf++ = ((_var) >> 8) & 0xff; \
*_buf++ = (_var) & 0xff;
#define UNPACK_U16(_buf, _var) \
	_var  = (*_buf++ & 0xff) << 8; \
_var |= (*_buf++ & 0xff);

#define PACK_U24(_buf, _var) \
	*_buf++ = ((_var) >> 16) & 0xff; \
*_buf++ = ((_var) >> 8) & 0xff; \
*_buf++ = (_var) & 0xff;

#define UNPACK_U24(_buf, _var) \
	_var = 0; \
_var |= (*_buf++ & 0xff) << 16; \
_var |= (*_buf++ & 0xff) << 8; \
_var |= (*_buf++ & 0xff);

#define PACK_U32(_buf, _var) \
	*_buf++ = ((_var) >> 24) & 0xff; \
*_buf++ = ((_var) >> 16) & 0xff; \
*_buf++ = ((_var) >> 8) & 0xff; \
*_buf++ = (_var) & 0xff;

#define UNPACK_U32(_buf, _var) \
	_var = 0; \
_var |= (*_buf++ & 0xff) << 24; \
_var |= (*_buf++ & 0xff) << 16; \
_var |= (*_buf++ & 0xff) << 8; \
_var |= (*_buf++ & 0xff);

#define PACK_BYTES(_buf, _var, _len) \
{ \
	int b; \
	for (b = 0; b < _len; b++) { \
		PACK_U8(_buf, (_var)[b]); \
	} \
}

#define UNPACK_BYTES(_buf, _var, _len) \
{ \
	int b; \
	for (b = 0; b < _len; b++) { \
		UNPACK_U8(_buf, (_var)[b]); \
	} \
}

#define PACK_MAC(_buf, _mac) \
	*_buf++ = _mac[0] & 0xff; \
*_buf++ = _mac[1] & 0xff; \
*_buf++ = _mac[2] & 0xff; \
*_buf++ = _mac[3] & 0xff; \
*_buf++ = _mac[4] & 0xff; \
*_buf++ = _mac[5] & 0xff;
#define UNPACK_MAC(_buf, _mac) \
	_mac[0] = *_buf++ & 0xff; \
_mac[1] = *_buf++ & 0xff; \
_mac[2] = *_buf++ & 0xff; \
_mac[3] = *_buf++ & 0xff; \
_mac[4] = *_buf++ & 0xff; \
_mac[5] = *_buf++ & 0xff;

#define U64_HI(src)             ((uint32_t) ((src) >> 32))
#define U64_LO(src)             ((uint32_t) (src))

#define U64_SET(dst, src_hi, src_lo)                \
	((dst) = (((uint64_t) ((uint32_t)(src_hi))) << 32) | ((uint64_t) ((uint32_t)(src_lo))))




char* u8_pack(char *buf, uint8_t *var);
char* u8_unpack(char *buf, uint8_t *var);

char* u16_pack(char *buf, uint16_t *var);
char* u16_unpack(char *buf, uint16_t *var);

char* u32_pack(char *buf, uint32_t *var);
char* u32_unpack(char *buf, uint32_t *var);

char* u64_pack(char *buf, uint64_t *var);
char* u64_unpack(char *buf, uint64_t *var);

#define PACK_U64(_buf, _var) \
	_buf = u64_pack(_buf, &(_var))

#define UNPACK_U64(_buf, _var) \
	_buf = u64_unpack(_buf, &(_var))

//#define DATE_LEN_MAX 256

int npcp_process_pkt(cvmx_wqe_t *work, mac_t npcp_mac);

int npcp_cmd_register(uint16_t cmdno, npcp_cmd_func_t func);

#define NPCP_CMD_REGISTER(CMD, FUNC) \
    rv = npcp_cmd_register(CMD, FUNC); \
    if (rv) \
    { \
        printf("%s %d rv=%d\n", __func__, __LINE__, rv); \
        return rv; \
    }

int npcp_wqe_process(cvmx_wqe_t *work);

int npcp_client_init(mac_t mac);

#if NPCP_MGMT_MODE
int npcp_mgmt_port_initialize();
void npcp_main_loop();
#endif

#endif

