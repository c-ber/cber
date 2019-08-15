#ifndef __USR_INFO_PACK_H__
#define __USR_INFO_PACK_H__
#include "semp_hydra_lte.h"
#include "semp-errno.h"
#include <stdio.h>



//�û��¼�����ö��
typedef enum
{
    USR_ENENT_NONE        = (0),      //��
    USR_ONLINE            = (1<<0),   //�û�����
    USR_OFFLINE           = (1<<1),   //�û�����
    USR_ENB_SWITCH        = (1<<2),   //��վ�л�
    USR_TAU               = (1<<3),   //�����������
    USR_GUTI_RALOCATION   = (1<<4),   //guti�ط���
    USR_RAU               = (1<<5),   //RAU�¼�                 
}usr_event_e;

//�û���Ϣ���ѡ��
typedef enum 
{
    PACK_NONE               = (0),      //������κ���Ϣ
    PACK_IMSI               = (1<<0),   //���imsi
    PACK_IMEI               = (1<<1),   //���imei
    PACK_MSISDN             = (1<<2),   //���msisdn
    PACK_ECGI               = (1<<3),   //���ecgi
    PACK_MNC                = (1<<4),   //���mnc
    PACK_RAI                = (1<<5),   //���RAI
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
    lte_signal_submit_msisdn st_msisdn;     //�ֻ���
    lte_ecgi_t  ecgi;
    lte_mnc_t   mnc;                //��Ӫ����
    rai_t       rai;                //RAI
    uint8_t     imsi_en:1;
    uint8_t     imei_en:1;
    uint8_t     msisdn_en:1;
    uint8_t     mnc_en:1;
    uint8_t     ecgi_en:1;
    uint8_t     rai_en:1;
    uint8_t     rsv:2;
    uint64_t event_type;            //�û��¼�
}pack_info_t;
/*���Ժ���*/
mp_error_t debug_msg_pack(uint8_t *buf,int16_t buf_len,uint16_t *used_len);

/*���û���Ϣ����������־Ҫ��ĸ�ʽ���д��*/
mp_error_t signal_log_usr_info_pack(pack_info_t msg,uint8_t *buf,uint16_t buf_len,uint16_t *packed_len,int64_t pack_msg_mask);

#endif
