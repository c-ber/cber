#include "usr_info_pack.h"


#define TLV_TYPE_LEN    1           //tlv��typeռ�õĳ���
#define TLV_LENGH_LEN   1           //tlv��legthռ�õĳ���

struct signal_log_hd
{
    uint16_t  p_evevnt_type;        //�¼�����
    uint16_t  p_tlv_total_size;     //�û���Ϣ��tlv�ܳ���
}__attribute__((packed));

inline mp_error_t buff_add_tlv(uint8_t *buf,int type,int len,void *value)
{
    typedef struct {
        uint8_t type;
        uint8_t len;
        uint8_t data[0];
    }tlv_t;
    if((NULL == buf)||(NULL == value))
    {
        return MP_E_PARAM;
    }
    tlv_t *tlv = (tlv_t *)buf;
    tlv->type = type;
    tlv->len = len;
    if(len >0 )
    {
        memcpy(tlv->data,value,len);
    }
    return MP_E_NONE;

}

/*****************************************************************************
  ��������      : debug_msg_pack
  ����          : ����һ�����Ժ���������һ���û���ϢȻ�������ҰѴ��֮���buf��ӡ����
  ����          : 
  ������        : 
  �����ʵı�    : 
  ���޸ĵı�    : 
  ����          : buf���ݣ�buf_len��buf�ĳ���
  ���          : packed_len���֮����������˶����ֽ�
  ����          : �ɹ�����MP_E_NONE
  ����          : 
*****************************************************************************/
mp_error_t debug_msg_pack(uint8_t *buf,int16_t buf_len,uint16_t *used_len)
{
    pack_info_t debug =
    {
        .imsi={0x46,0x00,0x01,0x02,0x03,0x04,0x05,0x06},
        .imei ={0x54,0x00,0x11,0x12,0x13,0x14,0x15,0x16},
        .st_msisdn = {7,{0x81,0x13,0x52,0x52,0x65,0xf1}},
        .ecgi = {{0x46,0x00,0x21},{0x22,0x23,0x24,0x25}},
        .mnc = {0xf0,0x00},
        .event_type = USR_ONLINE,
    };
    if(MP_E_NONE != signal_log_usr_info_pack(debug,buf,buf_len,used_len,PACK_IMSI|PACK_IMEI|PACK_MSISDN))
    {
        LTE_DEBUG_PRINTF("pack data error");
    }
    LTE_DEBUG_PRINTF("used %d\n",*used_len);
    return MP_E_NONE;
    
}
/*****************************************************************************
  ��������      : lte_signal_log_pkt_payload_pack
  ����          : ���������־���ĵ�payload����
  ����          : 
  ������        : 
  �����ʵı�    : 
  ���޸ĵı�    : 
  ����          : msg�����Ϣ�����û���Ϣ�����ͣ�buf���ݣ�buf_len��buf�ĳ���
  ���          : packed_len���֮����������˶����ֽ�
  ����          : MP_E_PARAM�������� MP_E_MEMORY�ռ䲻����MP_E_INTERNAL������� 
  ����          : 
*****************************************************************************/
mp_error_t lte_signal_log_pkt_payload_pack(pack_info_t msg,uint8_t *buf,uint16_t buf_len,uint16_t *packed_len)
{
    //lte������־������Ҫ��msg�����ȫ���û���Ϣ�����д��
    return signal_log_usr_info_pack(msg,buf,buf_len,packed_len,PACK_LTE);
}
/*****************************************************************************
  ��������      : usr_evnent_msg_pack
  ����          : ��msg�ṩ����Ϣ����������־�����ݰ���ʽȥ������ݰ��������֮�����
                  ������־���ĵ�payload����
  ����          : 
  ������        : 
  �����ʵı�    : 
  ���޸ĵı�    : 
  ����          : msg�����Ϣ�����û���Ϣ�����ͣ���buf_len��buf�ĳ���
                  pack_msg_mask��Ҫ�����Щ�û���Ϣ
  ���          : packed_len���֮����������˶����ֽ�,buf����õ����ݴ�ŵ�ַ
  ����          : MP_E_PARAM�������� MP_E_MEMORY�ռ䲻����MP_E_INTERNAL������� 
  ����          : 
*****************************************************************************/
mp_error_t signal_log_usr_info_pack(pack_info_t msg,uint8_t *buf,uint16_t buf_len,uint16_t *packed_len,int64_t pack_msg_mask)
{
    struct signal_log_hd *event_pkt         = (struct signal_log_hd *)buf;
    uint8_t *p_tlv                          = buf + sizeof(struct signal_log_hd); //ָ���û���Ϣtlv��ʼ�ĵ�ַ
    int32_t remain_buf_sapce                = buf_len;                               //buf��ʣ����õĿռ�
    uint8_t *next_tlv_ptr                   = NULL;                                 //��һ���û���Ϣtlv�ĵ�ַ
    if((NULL == buf)||(NULL == packed_len)||(0 >= buf_len))
    {
        return MP_E_PARAM;
    }
    if(buf_len < sizeof(struct signal_log_hd))
    {
        return MP_E_MEMORY;
    }    
    event_pkt->p_evevnt_type = msg.event_type;                              //����û��¼�����
    remain_buf_sapce -= sizeof(event_pkt ->p_evevnt_type);                  //����bufʣ��ռ�              
    remain_buf_sapce -= sizeof(event_pkt ->p_tlv_total_size);               //Ϊtlv�ܳ��ȱ����ռ�
    next_tlv_ptr = p_tlv;                                                   //��һ��tlv��ָ��
    do
    {   
        if(pack_msg_mask & PACK_IMSI)                                       //����Ƿ���imsi                                                   
        {
            if(ENABLE == msg.imsi_en)
            {
                if((remain_buf_sapce -= (TLV_TYPE_LEN + TLV_LENGH_LEN + IMSI_LEN))<0)   //���bufʣ��Ŀռ��Ƿ��㹻
                {
                    LTE_DEBUG_PRINTF("can not pack imsi\n");
                    break;
                }
                buff_add_tlv(next_tlv_ptr,IMSI_TYPE,IMSI_LEN,msg.imsi);     //��imsi��Ϣ����tlv��ʽ�����buf����
                pack_msg_mask &= ~PACK_IMSI;                                    //imsi������
                next_tlv_ptr += TLV_TYPE_LEN + TLV_LENGH_LEN + IMSI_LEN;    // ������һ��tlv���׵�ַ
            }
            else
            {
                if((remain_buf_sapce -= (TLV_TYPE_LEN + TLV_LENGH_LEN))<0)   //���bufʣ��Ŀռ��Ƿ��㹻
                {
                    LTE_DEBUG_PRINTF("can not pack imsi\n");
                    break;
                }
                buff_add_tlv(next_tlv_ptr,IMSI_TYPE,0,msg.imsi);
                pack_msg_mask &= ~PACK_IMSI;                                    //imsi������
                next_tlv_ptr += TLV_TYPE_LEN + TLV_LENGH_LEN;                   // ������һ��tlv���׵�ַ
            }
        }
        
        if(pack_msg_mask & PACK_IMEI)                                       //����Ƿ���imei
        {
            if(ENABLE == msg.imei_en)
            {
                if((remain_buf_sapce -= (TLV_TYPE_LEN + TLV_LENGH_LEN + IMEI_LEN))<0)   //���ʣ��ռ��Ƿ��㹻
                {
                    LTE_DEBUG_PRINTF("can not pack imei\n");
                    break;
                }
                buff_add_tlv(next_tlv_ptr,IMEI_TYPE,IMEI_LEN,msg.imei);     //��imei����tlv��ʽ���
                pack_msg_mask &= ~PACK_IMEI;                                    //imsei������
                next_tlv_ptr += TLV_TYPE_LEN + TLV_LENGH_LEN + IMEI_LEN;
            }
            else
            {
                if((remain_buf_sapce -= (TLV_TYPE_LEN + TLV_LENGH_LEN))<0)   //���ʣ��ռ��Ƿ��㹻
                {
                    LTE_DEBUG_PRINTF("can not pack imei\n");
                    break;
                }
                buff_add_tlv(next_tlv_ptr,IMEI_TYPE,0,msg.imei);     //��imei����tlv��ʽ���
                pack_msg_mask &= ~PACK_IMEI;                                    //imsei������
                next_tlv_ptr += TLV_TYPE_LEN + TLV_LENGH_LEN ;
            }
        }

         
        if(pack_msg_mask & PACK_MSISDN)                                     //����Ƿ���msisdn
        {
            if(ENABLE == msg.msisdn_en)
            {
                if((remain_buf_sapce -= (TLV_TYPE_LEN + TLV_LENGH_LEN + msg.st_msisdn.msisdn_len))<0)   //���ʣ��ռ��Ƿ��㹻
                {
                    LTE_DEBUG_PRINTF("can not pack msisdn\n");
                    break;
                }
                buff_add_tlv(next_tlv_ptr,MSISDN_TYPE,msg.st_msisdn.msisdn_len,msg.st_msisdn.msisdn);   //��msisdn����tlv��ʽ���
                pack_msg_mask &= ~PACK_MSISDN;
                next_tlv_ptr += msg.st_msisdn.msisdn_len+2;
            }
            else
            {
                if((remain_buf_sapce -= (TLV_TYPE_LEN + TLV_LENGH_LEN))<0)   //���ʣ��ռ��Ƿ��㹻
                {
                    LTE_DEBUG_PRINTF("can not pack msisdn\n");
                    break;
                }
                buff_add_tlv(next_tlv_ptr,MSISDN_TYPE,0,msg.st_msisdn.msisdn);   //��msisdn����tlv��ʽ���
                pack_msg_mask &= ~PACK_MSISDN;
                next_tlv_ptr += TLV_TYPE_LEN + TLV_LENGH_LEN;
            }
        }

        
        if(pack_msg_mask & PACK_ECGI)   //����Ƿ���Ҫ���ecgi
        {
            if(msg.ecgi_en)
            {
                if((remain_buf_sapce -= (TLV_TYPE_LEN + TLV_LENGH_LEN + sizeof(lte_ecgi_t)))<0) //���ʣ�¿ռ��Ƿ��㹻��ecgi
                {
                    LTE_DEBUG_PRINTF("can not pack ecgi\n");
                    break;
                }
                buff_add_tlv(next_tlv_ptr,ECGI_TYPE,sizeof(lte_ecgi_t),&msg.ecgi);
                pack_msg_mask &= ~PACK_ECGI;
                next_tlv_ptr += sizeof(lte_ecgi_t)+2;
            }
            else
            {
                 if((remain_buf_sapce -= (TLV_TYPE_LEN + TLV_LENGH_LEN))<0) //���ʣ�¿ռ��Ƿ��㹻��ecgi
                {
                    LTE_DEBUG_PRINTF("can not pack ecgi\n");
                    break;
                }
                buff_add_tlv(next_tlv_ptr,ECGI_TYPE,0,&msg.ecgi);
                pack_msg_mask &= ~PACK_ECGI;
                next_tlv_ptr += TLV_TYPE_LEN + TLV_LENGH_LEN;
            }

        }
        
        if(pack_msg_mask & PACK_MNC)//����Ƿ���Ҫ���mnc
        {
            if(ENABLE == msg.mnc_en)
            {
                if((remain_buf_sapce -= (TLV_TYPE_LEN + TLV_LENGH_LEN + sizeof(lte_mnc_t)))<0)//���ʣ�¿ռ��Ƿ��㹻��mnc
                {
                    LTE_DEBUG_PRINTF("can not pack mnc\n");
                    break;
                }
                buff_add_tlv(next_tlv_ptr,MNC_TYPE,sizeof(lte_mnc_t),msg.mnc);
                pack_msg_mask &= ~PACK_MNC;
                next_tlv_ptr += TLV_TYPE_LEN + TLV_LENGH_LEN + sizeof(lte_mnc_t);
            }
            else
            {
                if((remain_buf_sapce -= (TLV_TYPE_LEN + TLV_LENGH_LEN))<0)//���ʣ�¿ռ��Ƿ��㹻��mnc
                {
                    LTE_DEBUG_PRINTF("can not pack mnc\n");
                    break;
                }
                buff_add_tlv(next_tlv_ptr,MNC_TYPE,0,msg.mnc);
                pack_msg_mask &= ~PACK_MNC;
                next_tlv_ptr += TLV_TYPE_LEN + TLV_LENGH_LEN;
            }
            
        }
        if(pack_msg_mask & PACK_RAI)//����Ƿ���Ҫ���ULI
        {
            if(ENABLE == msg.rai_en)
            {
                if((remain_buf_sapce -= (TLV_TYPE_LEN + TLV_LENGH_LEN + sizeof(rai_t)))<0)//���ʣ�¿ռ��Ƿ��㹻��ULI
                {
                    LTE_DEBUG_PRINTF("can not pack mnc\n");
                    break;
                }
                buff_add_tlv(next_tlv_ptr,ULI_TYPE,sizeof(rai_t),&msg.rai);
                pack_msg_mask &= ~PACK_RAI;
                next_tlv_ptr += TLV_TYPE_LEN + TLV_LENGH_LEN + sizeof(rai_t);
            }
            else
            {
                if((remain_buf_sapce -= (TLV_TYPE_LEN + TLV_LENGH_LEN))<0)//���ʣ�¿ռ��Ƿ��㹻��ULI
                {
                    LTE_DEBUG_PRINTF("can not pack mnc\n");
                    break;
                }
                buff_add_tlv(next_tlv_ptr,ULI_TYPE,0,&msg.rai);
                pack_msg_mask &= ~PACK_RAI;
                next_tlv_ptr += TLV_TYPE_LEN + TLV_LENGH_LEN;
            }
        }
        
    }while(0);
    event_pkt->p_tlv_total_size = (uint8_t *)next_tlv_ptr - (uint8_t *)p_tlv;    //����tlv���ܳ���
    *packed_len = (uint8_t *)next_tlv_ptr - (uint8_t *)buf; //������һ�����˶��ٸ��ֽ�
    PRINTF_BUF(buf,*packed_len);
    return MP_E_NONE;
}
