#include "usr_info_pack.h"


#define TLV_TYPE_LEN    1           //tlv的type占用的长度
#define TLV_LENGH_LEN   1           //tlv的legth占用的长度

struct signal_log_hd
{
    uint16_t  p_evevnt_type;        //事件类型
    uint16_t  p_tlv_total_size;     //用户信息的tlv总长度
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
  函数名称      : debug_msg_pack
  描述          : 这是一个调试函数，构造一个用户信息然后打包并且把打包之后的buf打印出来
  调用          : 
  被调用        : 
  被访问的表    : 
  被修改的表    : 
  输入          : buf数据，buf_len是buf的长度
  输出          : packed_len打包之后的数据用了多少字节
  返回          : 成功返回MP_E_NONE
  其他          : 
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
  函数名称      : lte_signal_log_pkt_payload_pack
  描述          : 打包信令日志报文的payload部分
  调用          : 
  被调用        : 
  被访问的表    : 
  被修改的表    : 
  输入          : msg打包信息包括用户信息和类型，buf数据，buf_len是buf的长度
  输出          : packed_len打包之后的数据用了多少字节
  返回          : MP_E_PARAM参数错误， MP_E_MEMORY空间不够，MP_E_INTERNAL打包出错 
  其他          : 
*****************************************************************************/
mp_error_t lte_signal_log_pkt_payload_pack(pack_info_t msg,uint8_t *buf,uint16_t buf_len,uint16_t *packed_len)
{
    //lte信令日志报文是要把msg里面的全部用户信息都进行打包
    return signal_log_usr_info_pack(msg,buf,buf_len,packed_len,PACK_LTE);
}
/*****************************************************************************
  函数名称      : usr_evnent_msg_pack
  描述          : 将msg提供的信息按照信令日志的数据包格式去打包数据包，打包好之后就是
                  信令日志报文的payload部分
  调用          : 
  被调用        : 
  被访问的表    : 
  被修改的表    : 
  输入          : msg打包信息包括用户信息和类型，，buf_len是buf的长度
                  pack_msg_mask需要打包哪些用户信息
  输出          : packed_len打包之后的数据用了多少字节,buf打包好的数据存放地址
  返回          : MP_E_PARAM参数错误， MP_E_MEMORY空间不够，MP_E_INTERNAL打包出错 
  其他          : 
*****************************************************************************/
mp_error_t signal_log_usr_info_pack(pack_info_t msg,uint8_t *buf,uint16_t buf_len,uint16_t *packed_len,int64_t pack_msg_mask)
{
    struct signal_log_hd *event_pkt         = (struct signal_log_hd *)buf;
    uint8_t *p_tlv                          = buf + sizeof(struct signal_log_hd); //指向用户信息tlv开始的地址
    int32_t remain_buf_sapce                = buf_len;                               //buf里剩余可用的空间
    uint8_t *next_tlv_ptr                   = NULL;                                 //下一个用户信息tlv的地址
    if((NULL == buf)||(NULL == packed_len)||(0 >= buf_len))
    {
        return MP_E_PARAM;
    }
    if(buf_len < sizeof(struct signal_log_hd))
    {
        return MP_E_MEMORY;
    }    
    event_pkt->p_evevnt_type = msg.event_type;                              //打包用户事件类型
    remain_buf_sapce -= sizeof(event_pkt ->p_evevnt_type);                  //更新buf剩余空间              
    remain_buf_sapce -= sizeof(event_pkt ->p_tlv_total_size);               //为tlv总长度保留空间
    next_tlv_ptr = p_tlv;                                                   //第一个tlv的指针
    do
    {   
        if(pack_msg_mask & PACK_IMSI)                                       //检查是否打包imsi                                                   
        {
            if(ENABLE == msg.imsi_en)
            {
                if((remain_buf_sapce -= (TLV_TYPE_LEN + TLV_LENGH_LEN + IMSI_LEN))<0)   //检查buf剩余的空间是否足够
                {
                    LTE_DEBUG_PRINTF("can not pack imsi\n");
                    break;
                }
                buff_add_tlv(next_tlv_ptr,IMSI_TYPE,IMSI_LEN,msg.imsi);     //把imsi信息按照tlv格式打包到buf里面
                pack_msg_mask &= ~PACK_IMSI;                                    //imsi打包完成
                next_tlv_ptr += TLV_TYPE_LEN + TLV_LENGH_LEN + IMSI_LEN;    // 设置下一个tlv的首地址
            }
            else
            {
                if((remain_buf_sapce -= (TLV_TYPE_LEN + TLV_LENGH_LEN))<0)   //检查buf剩余的空间是否足够
                {
                    LTE_DEBUG_PRINTF("can not pack imsi\n");
                    break;
                }
                buff_add_tlv(next_tlv_ptr,IMSI_TYPE,0,msg.imsi);
                pack_msg_mask &= ~PACK_IMSI;                                    //imsi打包完成
                next_tlv_ptr += TLV_TYPE_LEN + TLV_LENGH_LEN;                   // 设置下一个tlv的首地址
            }
        }
        
        if(pack_msg_mask & PACK_IMEI)                                       //检查是否打包imei
        {
            if(ENABLE == msg.imei_en)
            {
                if((remain_buf_sapce -= (TLV_TYPE_LEN + TLV_LENGH_LEN + IMEI_LEN))<0)   //检查剩余空间是否足够
                {
                    LTE_DEBUG_PRINTF("can not pack imei\n");
                    break;
                }
                buff_add_tlv(next_tlv_ptr,IMEI_TYPE,IMEI_LEN,msg.imei);     //将imei按照tlv形式打包
                pack_msg_mask &= ~PACK_IMEI;                                    //imsei打包完成
                next_tlv_ptr += TLV_TYPE_LEN + TLV_LENGH_LEN + IMEI_LEN;
            }
            else
            {
                if((remain_buf_sapce -= (TLV_TYPE_LEN + TLV_LENGH_LEN))<0)   //检查剩余空间是否足够
                {
                    LTE_DEBUG_PRINTF("can not pack imei\n");
                    break;
                }
                buff_add_tlv(next_tlv_ptr,IMEI_TYPE,0,msg.imei);     //将imei按照tlv形式打包
                pack_msg_mask &= ~PACK_IMEI;                                    //imsei打包完成
                next_tlv_ptr += TLV_TYPE_LEN + TLV_LENGH_LEN ;
            }
        }

         
        if(pack_msg_mask & PACK_MSISDN)                                     //检查是否打包msisdn
        {
            if(ENABLE == msg.msisdn_en)
            {
                if((remain_buf_sapce -= (TLV_TYPE_LEN + TLV_LENGH_LEN + msg.st_msisdn.msisdn_len))<0)   //检查剩余空间是否足够
                {
                    LTE_DEBUG_PRINTF("can not pack msisdn\n");
                    break;
                }
                buff_add_tlv(next_tlv_ptr,MSISDN_TYPE,msg.st_msisdn.msisdn_len,msg.st_msisdn.msisdn);   //将msisdn按照tlv形式打包
                pack_msg_mask &= ~PACK_MSISDN;
                next_tlv_ptr += msg.st_msisdn.msisdn_len+2;
            }
            else
            {
                if((remain_buf_sapce -= (TLV_TYPE_LEN + TLV_LENGH_LEN))<0)   //检查剩余空间是否足够
                {
                    LTE_DEBUG_PRINTF("can not pack msisdn\n");
                    break;
                }
                buff_add_tlv(next_tlv_ptr,MSISDN_TYPE,0,msg.st_msisdn.msisdn);   //将msisdn按照tlv形式打包
                pack_msg_mask &= ~PACK_MSISDN;
                next_tlv_ptr += TLV_TYPE_LEN + TLV_LENGH_LEN;
            }
        }

        
        if(pack_msg_mask & PACK_ECGI)   //检查是否需要打包ecgi
        {
            if(msg.ecgi_en)
            {
                if((remain_buf_sapce -= (TLV_TYPE_LEN + TLV_LENGH_LEN + sizeof(lte_ecgi_t)))<0) //检查剩下空间是否足够给ecgi
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
                 if((remain_buf_sapce -= (TLV_TYPE_LEN + TLV_LENGH_LEN))<0) //检查剩下空间是否足够给ecgi
                {
                    LTE_DEBUG_PRINTF("can not pack ecgi\n");
                    break;
                }
                buff_add_tlv(next_tlv_ptr,ECGI_TYPE,0,&msg.ecgi);
                pack_msg_mask &= ~PACK_ECGI;
                next_tlv_ptr += TLV_TYPE_LEN + TLV_LENGH_LEN;
            }

        }
        
        if(pack_msg_mask & PACK_MNC)//检查是否需要打包mnc
        {
            if(ENABLE == msg.mnc_en)
            {
                if((remain_buf_sapce -= (TLV_TYPE_LEN + TLV_LENGH_LEN + sizeof(lte_mnc_t)))<0)//检查剩下空间是否足够给mnc
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
                if((remain_buf_sapce -= (TLV_TYPE_LEN + TLV_LENGH_LEN))<0)//检查剩下空间是否足够给mnc
                {
                    LTE_DEBUG_PRINTF("can not pack mnc\n");
                    break;
                }
                buff_add_tlv(next_tlv_ptr,MNC_TYPE,0,msg.mnc);
                pack_msg_mask &= ~PACK_MNC;
                next_tlv_ptr += TLV_TYPE_LEN + TLV_LENGH_LEN;
            }
            
        }
        if(pack_msg_mask & PACK_RAI)//检查是否需要打包ULI
        {
            if(ENABLE == msg.rai_en)
            {
                if((remain_buf_sapce -= (TLV_TYPE_LEN + TLV_LENGH_LEN + sizeof(rai_t)))<0)//检查剩下空间是否足够给ULI
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
                if((remain_buf_sapce -= (TLV_TYPE_LEN + TLV_LENGH_LEN))<0)//检查剩下空间是否足够给ULI
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
    event_pkt->p_tlv_total_size = (uint8_t *)next_tlv_ptr - (uint8_t *)p_tlv;    //计算tlv的总长度
    *packed_len = (uint8_t *)next_tlv_ptr - (uint8_t *)buf; //计算打包一共用了多少个字节
    PRINTF_BUF(buf,*packed_len);
    return MP_E_NONE;
}
