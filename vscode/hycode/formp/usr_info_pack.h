#ifndef __USR_INFO_PACK_H__
#define __USR_INFO_PACK_H__
#include "semp_hydra_lte.h"
#include "semp-errno.h"
#include <stdio.h>



//用户事件类型枚举
typedef enum
{
    USR_ENENT_NONE        = (0),      //无
    USR_ONLINE            = (1<<0),   //用户上线
    USR_OFFLINE           = (1<<1),   //用户下线
    USR_ENB_SWITCH        = (1<<2),   //基站切换
    USR_TAU               = (1<<3),   //跟踪区域更新
    USR_GUTI_RALOCATION   = (1<<4),   //guti重分配
    USR_RAU               = (1<<5),   //RAU事件                 
}usr_event_e;

//用户信息打包选项
typedef enum 
{
    PACK_NONE               = (0),      //不打包任何信息
    PACK_IMSI               = (1<<0),   //打包imsi
    PACK_IMEI               = (1<<1),   //打包imei
    PACK_MSISDN             = (1<<2),   //打包msisdn
    PACK_ECGI               = (1<<3),   //打包ecgi
    PACK_MNC                = (1<<4),   //打包mnc
    PACK_RAI                = (1<<5),   //打包RAI
    PACK_LTE                = (PACK_IMSI|PACK_IMEI|PACK_MSISDN|PACK_ECGI|PACK_MNC)
    
}usr_msg_pack_opt;
typedef struct tag_lte_signal_submit_msisdn
{
    uint8_t         msisdn_len;
    lte_msisdn_t    msisdn;
}lte_signal_submit_msisdn;
typedef struct
{
    imsi_t imsi;                    //imsi
    imei_t imei;                    //imei
    lte_signal_submit_msisdn st_msisdn;     //手机号
    lte_ecgi_t  ecgi;
    lte_mnc_t   mnc;                //运营商码
    rai_t       rai;                //RAI
    uint8_t     imsi_en:1;
    uint8_t     imei_en:1;
    uint8_t     msisdn_en:1;
    uint8_t     mnc_en:1;
    uint8_t     ecgi_en:1;
    uint8_t     rai_en:1;
    uint8_t     rsv:2;
    uint64_t event_type;            //用户事件
}pack_info_t;
/*调试函数*/
mp_error_t debug_msg_pack(uint8_t *buf,int16_t buf_len,uint16_t *used_len);

/*将用户信息按照信令日志要求的格式进行打包*/
mp_error_t signal_log_usr_info_pack(pack_info_t msg,uint8_t *buf,uint16_t buf_len,uint16_t *packed_len,int64_t pack_msg_mask);

#endif
