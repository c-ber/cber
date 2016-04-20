/****************************************************************************** 

版权所有（C），2001-2015年，恒扬科技股份有限公司

******************************************************************************
文件名:       packet_diameter.c
编码格式:     ASCII
作者:         chenbin
创建:         Jan 29, 2016
历史:
    1.日期    :Jan 29, 2016
      作者    :cb
      修改    :Created file
******************************************************************************/

#include "packet_diameter.h"

/*
这是diameter报文的头结构
*/
typedef struct {
    uint32_t version:8;
    uint32_t msg_len:24;
    uint32_t cmd_flag:8;
    uint32_t cmd_code:24;
    uint32_t app_id;
    uint32_t hop_by_hop;
    uint32_t end_to_end;
}__attribute__((packed)) dmt_hdr_t;
/*
检查diamter的版本号对不对
*/


#define DMT_CHECK_VERSION(hdr)  if(VALID_DMT_VERSION != hdr->version)\
                                {\
                                    hydra_stat_inc(stat_business_dmt_version_err_pkts);\
                                    mpp->pktinfo.diameter.dmt_type = DMT_VERSION_ER;\
                                    return MP_E_NONE;\
                                }
/*
检查diameter的cmd是否是认证的请求
*/

#define DMT_CHECK_CMD(hdr)      if(DMT_AUTH_CMD != hdr->cmd_code)\
                                {\
                                    hydra_stat_inc(stat_business_dmt_cmd_not_318_pkts);\
                                    mpp->pktinfo.diameter.dmt_type = DMT_CMD_NOT_318; \
                                    return MP_E_NONE;\
                                }


/*
检查application 是否是3GPP的
*/
#define DMT_CHECK_APPID(hdr)    if(DMT_3GPP_APP_ID != hdr->app_id)\
                                {\
                                    hydra_stat_inc(stat_business_dmt_not_3gpp_app_pkts);\
                                    mpp->pktinfo.diameter.dmt_type = DMT_APP_NOT_3GPP;\
                                    return MP_E_NONE;\
                                }

/*
判断是否是diameter请求报文
*/
#define IF_REQ_DMT_PKT(hdr)     if(DMT_REQUEST_PKTS&hdr->cmd_flag)
/*
判断是否是diameter的应答报文
*/
#define REP_DMT_PKT(hdr)        if(DMT_REQUEST_PKTS&(~(hdr->cmd_flag)))

/*
从一个avp里面找出数据段，avp_ptr是avp的首地址，data_ptr是数据段的首地址，data_len是数据段的长度
*/
#define AVP_DATA_INFO(avp_ptr,data_ptr,data_len)    {\
                                                    if((avp_ptr->avp_flag)&AVP_V_FLAG_SET)\
                                                    {\
                                                        data_ptr = (uint8_t *)avp_ptr+AVP_COMMON_HDR_LEN+AVP_VENDOR_SEG_LEN;\
                                                        data_len = avp_ptr->avp_length - (AVP_COMMON_HDR_LEN+AVP_VENDOR_SEG_LEN);\
                                                    }\
                                                    else\
                                                    {\
                                                        data_ptr = (uint8_t *)avp_ptr+AVP_COMMON_HDR_LEN;\
                                                        data_len = avp_ptr->avp_length-AVP_COMMON_HDR_LEN;\
                                                    }\
                                                   }






/*****************************************************************************
  函数名称      : avp_search
  描述          : 从一段数据中去查找avp code 对应的avp
  调用          :
  被调用        :
  被访问的表    :
  被修改的表    :
  输入          : 数据的起始地址
  输出          : 无
  返回          :MP_E_PARAM参数错误， MP_E_NOT_FOUND没有找到，MP_E_AVP_EINVAL
                错误的avp
  其他          :
*****************************************************************************/
int32_t avp_search(uint8_t *start_ptr,uint32_t len,uint8_t **addr,uint32_t avp_code)
{
    avp_common_hdr_t *avp_hdr = NULL;
    int32_t buf_len = len;
    uint32_t offset = 0;

    if(NULL == start_ptr)
    {
        return MP_E_PARAM;
    }
    while(buf_len > 0)
    {
        /*
        数据的长度必须大于avp的头部长度
        */
        if(buf_len < AVP_COMMON_HDR_LEN)
        {
            return MP_E_NOT_FOUND;
        }
        /*
        格式化这段内存为avp头
        */
        avp_hdr = (avp_common_hdr_t *)(start_ptr+offset);
        /*
        判断avp code是否是我们要找的
        */
        if(avp_code == avp_hdr->avp_code)
        {
            /*
            avp标识的长度是头部加数据段的长度所以这个长度必须小于len
            同时不能小于avp的头部长度
            */
            if(avp_hdr->avp_length > len\
            ||avp_hdr->avp_length<AVP_COMMON_HDR_LEN)
            {
                return MP_E_AVP_EINVAL ;
            }
            *addr = (uint8_t *)avp_hdr;
            return MP_E_NONE;
        }
        else
        {
            dmt_print("buf_len=%d,offset=%d,avp_len = %d\n",buf_len,offset,avp_hdr->avp_length);
            /*
            一个avp占的长度是4的倍数不足就会有padding字段补齐，padding字段不会计入avp length内
            */
            if(avp_hdr->avp_length%4)
            {
                buf_len -= avp_hdr->avp_length+(4-avp_hdr->avp_length%4);
                offset  += avp_hdr->avp_length+(4-avp_hdr->avp_length%4);
            }
            else
            {
                buf_len -= avp_hdr->avp_length;
                offset += avp_hdr->avp_length;
            }

        }
    }
    return MP_E_NOT_FOUND;

}
/*****************************************************************************
  函数名称      : usr_name_asc2bcd
  描述          :将asc编码的数据转化为bcd编码
  调用          :
  被调用        :
  被访问的表    :
  被修改的表    :
  输入          : asc_data数据的起始地址，len长度
  输出          : bcd_data转化好了bcd码，*olen是bcd码的长度
  返回          :MP_E_PARAM参数错误， MP_E_NOT_FOUND没有找到，MP_E_AVP_EINVAL
                错误的avp
  其他          :
*****************************************************************************/
int32_t usr_name_asc2bcd(const uint8_t *asc_data,const uint32_t len,uint8_t *bcd_data,uint32_t *olen)
{
    uint32_t i_loop = 0;
    uint32_t ddata_count = 0;
    if(NULL == asc_data\
       ||NULL == bcd_data\
       ||NULL == olen\
       )
    {
        return MP_E_PARAM;
    }
    memset(bcd_data,0xff,*olen);
    for(i_loop = 0;i_loop < len;i_loop++)
    {
        if(ddata_count >= *olen)
        {
            break;
        }
        if(i_loop%2)
        {
            bcd_data[ddata_count] &= (((asc_data[i_loop]-'0')<<4)|0x0f);
            ddata_count ++;
        }
        else
        {
            bcd_data[ddata_count] &= ((asc_data[i_loop]-'0'))|0xf0;

        }
    }
    *olen = ddata_count+1 ;
    return MP_E_NONE;
}
/*****************************************************************************
  函数名称      : usr_name_asc2bcd
  描述          :从一段数据中去查找rand ,kamsme对
  调用          :
  被调用        :
  被访问的表    :
  被修改的表    :
  输入          :数据的指针，len数据的长度
  输出          :odata查找出来的rand kasme,rand_kasme_count是
                 rand kasme的组数
  返回          :MP_E_PARAM参数错误， MP_E_NOT_FOUND没有找到，MP_E_AVP_EINVAL
                错误的avp
  其他          :
*****************************************************************************/
mp_error_t get_rand_kasme_info(uint8_t *ptr,uint32_t len,kasme_info_t *odata,uint8_t *rand_kasme_count)
{
    avp_common_hdr_t  *avp_ptr = NULL;
    uint8_t count = 0;
    /*
    avp的数据段的长度
    */
    uint32_t avp_data_len = 0;
    /*
    avp的数据段的指针
    */
    uint8_t *avp_data_ptr = NULL;
    uint32_t offset = 0;
    /*
    rand avp的数据段长度即rand的长度
    */
    uint32_t rand_avp_data_len = 0;
    /*
    rand avp数据的指针即rand
    */
    uint8_t *rand_avp_data_ptr = NULL;
    /*
    kaseme avp数据段的长度
    */
    uint32_t kasme_avp_data_len = 0;
    /*
    kaseme avp数据段的指针
    */
    uint8_t *kasme_avp_data_ptr = NULL;
    uint32_t buf_len = len;
    /*
    rand,kasme最大组数
    */
    uint32_t max_rand_kasme_pair = *rand_kasme_count;
    if(NULL == ptr\
       ||NULL == odata\
       ||NULL == rand_kasme_count\
       ||0 == *rand_kasme_count\
        )
    {
        return MP_E_PARAM;
    }
    /*
    扫描这段内存
    */
    while(len > 0)
    {
        /*
        查找认证信息的avp
        */
        if(MP_E_NONE != avp_search(ptr+offset,buf_len,(uint8_t **)&avp_ptr,AVP_CODE_EUTRAN_VEC))
        {
            dmt_print("%s\n","not find auth AVP_CODE_EUTRAN_VEC");
            *rand_kasme_count = count;
            return MP_E_NONE;
        }
        /*
        提取EUTRAN_VEC的数据
        */
        AVP_DATA_INFO(avp_ptr,avp_data_ptr,avp_data_len);
        do
        {
            /*
            从EUTRAN_VEC的数据中去查找rand
            */
            if(MP_E_NONE != avp_search(avp_data_ptr,avp_data_len,(uint8_t **)&avp_ptr,AVP_CODE_RAND))
            {
                dmt_print("%s\n","no rand");
                break;
            }
            AVP_DATA_INFO(avp_ptr,rand_avp_data_ptr,rand_avp_data_len);
            if(DMT_RAND_LEN < rand_avp_data_len)
            {
                hydra_stat_inc(stat_diameter_pkt_rand_too_long);
                return MP_E_RAND_EINVAL;
            }
            if(DMT_RAND_LEN > rand_avp_data_len)
            {
                hydra_stat_inc(stat_diameter_pkt_rand_too_short);
                return MP_E_RAND_EINVAL;
            }
            /*
            从EUTRAN_VEC的数据段中去查找kasme
            */
            if(MP_E_NONE != avp_search(avp_data_ptr,avp_data_len,(uint8_t **)&avp_ptr,AVP_CODE_KASME))
            {
                dmt_print("%s\n","no kasme");
                break;
            }
            AVP_DATA_INFO(avp_ptr,kasme_avp_data_ptr,kasme_avp_data_len);
            if(DMT_KASME_LEN < kasme_avp_data_len)
            {
                hydra_stat_inc(stat_diameter_pkt_kasme_too_long);
                return MP_E_KASME_EINVAL;
            }
            if(DMT_KASME_LEN > kasme_avp_data_len)
            {
                hydra_stat_inc(stat_diameter_pkt_kasme_too_short);
                return MP_E_KASME_EINVAL;
            }
            if(count >= max_rand_kasme_pair)
            {

                hydra_stat_inc(stat_business_dmt_too_many_kasme_rand_pair);
                return MP_E_NONE;
            }
            memcpy(odata[count].rand,rand_avp_data_ptr,rand_avp_data_len);
            memcpy(odata[count].kasme,kasme_avp_data_ptr,kasme_avp_data_len);
            count ++ ;
        }while(0);
        offset += avp_ptr->avp_length;
        buf_len -= avp_ptr->avp_length;
        if(buf_len <= 0)
        {
            break;
        }
    }
    return MP_E_NONE;
}


mp_error_t parse_dmt_pkt(cvmx_wqe_t *work, struct pbuf *p, mpp_control_st *mpp)
{
    dmt_hdr_t *dmt_hdr = NULL;
    avp_common_hdr_t *avp_ptr=NULL;
    uint16_t real_avp_data_len = 0;//真实的avp数据段的长度
    uint8_t *avp_data_ptr = NULL;
    lte_imsi_t  user_name;
    uint32_t len=0;
    uint8_t kasme_count = MAX_KASME_RAND_PAIR;
    mp_error_t rv = MP_E_NONE;
    //MASTER_PARAM_CHECK(work, p, mpp);
    CHECK_PBUF_LEN(p,DMT_HDR_LEN);
    PBUF_CUR_FORMAT(dmt_hdr_t *,dmt_hdr,p);
    //DMT_CHECK_VERSION(dmt_hdr);
    //DMT_CHECK_CMD(dmt_hdr);
   // DMT_CHECK_APPID(dmt_hdr);
    mpp->pktinfo.diameter.hop_by_hop=dmt_hdr->hop_by_hop;
    mpp->pktinfo.diameter.valid_mask |= DMT_HOP_BY_HOP_VALID;


    IF_REQ_DMT_PKT(dmt_hdr)
    {
        mpp->pktinfo.diameter.dmt_type = DMT_REQ_PKT;
        hydra_stat_inc(stat_business_dmt_auth_request_pkts);
        UPDATE_PBUF_OFFSET(p,DMT_HDR_LEN);
        if(MP_E_NONE == avp_search((uint8_t *)PBUF_VOID_CUR_PTR(p),\
         PBUF_LEFT_LEN(p),\
        (uint8_t **)&avp_ptr,\
        AVP_CODE_USER))
        {

            AVP_DATA_INFO(avp_ptr,avp_data_ptr,real_avp_data_len);
           /*
                diameter里面的user即是imsi,在diameter数据包中采用的是asc码存放的
                而我们是采用bcd码存放的相当于做了一个2倍压缩
            */
            if(real_avp_data_len > 2*LTE_IMEI_LEN)
            {
                hydra_stat_inc(stat_business_dmt_usr_too_long);
                return MP_E_NONE;
            }
            len = sizeof(user_name);
            usr_name_asc2bcd(avp_data_ptr,real_avp_data_len,user_name,&len);
            memcpy((uint8_t *)mpp->pktinfo.diameter.user_name,user_name,len);
            mpp->pktinfo.diameter.valid_mask |= DMT_USER_NAME_VALID;

        }
        return MP_E_NONE;
    }
    else
    {
        hydra_stat_inc(stat_business_dmt_auth_response_pkts);
        mpp->pktinfo.diameter.dmt_type = DMT_RES_PKT;
        UPDATE_PBUF_OFFSET(p,DMT_HDR_LEN);
        if(MP_E_NONE == avp_search((uint8_t *)PBUF_PTR(p,p->ptr_offset),\
        (p->len-p->ptr_offset),\
        (uint8_t **)&avp_ptr,\
        AVP_CODE_AUTH_INFO))
        {
            AVP_DATA_INFO(avp_ptr,avp_data_ptr,real_avp_data_len);
            rv = get_rand_kasme_info(avp_data_ptr,real_avp_data_len,mpp->pktinfo.diameter.kasme_info,&kasme_count);
            if(MP_E_NONE != rv)
            {
                return rv;
            }

            if(kasme_count > 0)
            {
                mpp->pktinfo.diameter.valid_mask |= DMT_KASME_RAND_PAIR_VALID;
                mpp->pktinfo.diameter.valid_kasme_rand_pair_num = kasme_count;
            }
            else
            {
                dmt_print("%s\n","not find auth info");
                hydra_stat_inc(stat_diameter_auth_ans_pkt_without_key);
                return MP_E_NOT_FOUND;
            }
            return MP_E_NONE;
        }
        return MP_E_NONE;

    }
}


