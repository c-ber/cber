#ifndef __RANAP_H__
#define __RANAP_H__


#include "semp_hydra_lte.h"
#include "semp-errno.h"

#include "hydra_stat.h"
#include "lte_hash.h"
#include "packet_entry.h"

#ifdef __cplusplus
#if __cplusplus
extern "C"{
#endif
#endif /* __cplusplus */


mp_code_t ranap_process(cvmx_wqe_t *work, mpp_control_st *mpp);

#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif /* __cplusplus */


#endif /* __S1AP_H__ */

