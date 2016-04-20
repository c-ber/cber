/****************************************************************************** 

��Ȩ���У�C����2001-2015�꣬����Ƽ��ɷ����޹�˾

******************************************************************************
�ļ���:       packet_diameter.c
�����ʽ:     ASCII
����:         chenbin
����:         Jan 29, 2016
��ʷ:
    1.����    :Jan 29, 2016
      ����    :cb
      �޸�    :Created file
******************************************************************************/

#include "packet_diameter.h"

/*
����diameter���ĵ�ͷ�ṹ
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
���diamter�İ汾�ŶԲ���
*/


#define DMT_CHECK_VERSION(hdr)  if(VALID_DMT_VERSION != hdr->version)\
                                {\
                                    hydra_stat_inc(stat_business_dmt_version_err_pkts);\
                                    mpp->pktinfo.diameter.dmt_type = DMT_VERSION_ER;\
                                    return MP_E_NONE;\
                                }
/*
���diameter��cmd�Ƿ�����֤������
*/

#define DMT_CHECK_CMD(hdr)      if(DMT_AUTH_CMD != hdr->cmd_code)\
                                {\
                                    hydra_stat_inc(stat_business_dmt_cmd_not_318_pkts);\
                                    mpp->pktinfo.diameter.dmt_type = DMT_CMD_NOT_318; \
                                    return MP_E_NONE;\
                                }


/*
���application �Ƿ���3GPP��
*/
#define DMT_CHECK_APPID(hdr)    if(DMT_3GPP_APP_ID != hdr->app_id)\
                                {\
                                    hydra_stat_inc(stat_business_dmt_not_3gpp_app_pkts);\
                                    mpp->pktinfo.diameter.dmt_type = DMT_APP_NOT_3GPP;\
                                    return MP_E_NONE;\
                                }

/*
�ж��Ƿ���diameter������
*/
#define IF_REQ_DMT_PKT(hdr)     if(DMT_REQUEST_PKTS&hdr->cmd_flag)
/*
�ж��Ƿ���diameter��Ӧ����
*/
#define REP_DMT_PKT(hdr)        if(DMT_REQUEST_PKTS&(~(hdr->cmd_flag)))

/*
��һ��avp�����ҳ����ݶΣ�avp_ptr��avp���׵�ַ��data_ptr�����ݶε��׵�ַ��data_len�����ݶεĳ���
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
  ��������      : avp_search
  ����          : ��һ��������ȥ����avp code ��Ӧ��avp
  ����          :
  ������        :
  �����ʵı�    :
  ���޸ĵı�    :
  ����          : ���ݵ���ʼ��ַ
  ���          : ��
  ����          :MP_E_PARAM�������� MP_E_NOT_FOUNDû���ҵ���MP_E_AVP_EINVAL
                �����avp
  ����          :
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
        ���ݵĳ��ȱ������avp��ͷ������
        */
        if(buf_len < AVP_COMMON_HDR_LEN)
        {
            return MP_E_NOT_FOUND;
        }
        /*
        ��ʽ������ڴ�Ϊavpͷ
        */
        avp_hdr = (avp_common_hdr_t *)(start_ptr+offset);
        /*
        �ж�avp code�Ƿ�������Ҫ�ҵ�
        */
        if(avp_code == avp_hdr->avp_code)
        {
            /*
            avp��ʶ�ĳ�����ͷ�������ݶεĳ�������������ȱ���С��len
            ͬʱ����С��avp��ͷ������
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
            һ��avpռ�ĳ�����4�ı�������ͻ���padding�ֶβ��룬padding�ֶβ������avp length��
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
  ��������      : usr_name_asc2bcd
  ����          :��asc���������ת��Ϊbcd����
  ����          :
  ������        :
  �����ʵı�    :
  ���޸ĵı�    :
  ����          : asc_data���ݵ���ʼ��ַ��len����
  ���          : bcd_dataת������bcd�룬*olen��bcd��ĳ���
  ����          :MP_E_PARAM�������� MP_E_NOT_FOUNDû���ҵ���MP_E_AVP_EINVAL
                �����avp
  ����          :
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
  ��������      : usr_name_asc2bcd
  ����          :��һ��������ȥ����rand ,kamsme��
  ����          :
  ������        :
  �����ʵı�    :
  ���޸ĵı�    :
  ����          :���ݵ�ָ�룬len���ݵĳ���
  ���          :odata���ҳ�����rand kasme,rand_kasme_count��
                 rand kasme������
  ����          :MP_E_PARAM�������� MP_E_NOT_FOUNDû���ҵ���MP_E_AVP_EINVAL
                �����avp
  ����          :
*****************************************************************************/
mp_error_t get_rand_kasme_info(uint8_t *ptr,uint32_t len,kasme_info_t *odata,uint8_t *rand_kasme_count)
{
    avp_common_hdr_t  *avp_ptr = NULL;
    uint8_t count = 0;
    /*
    avp�����ݶεĳ���
    */
    uint32_t avp_data_len = 0;
    /*
    avp�����ݶε�ָ��
    */
    uint8_t *avp_data_ptr = NULL;
    uint32_t offset = 0;
    /*
    rand avp�����ݶγ��ȼ�rand�ĳ���
    */
    uint32_t rand_avp_data_len = 0;
    /*
    rand avp���ݵ�ָ�뼴rand
    */
    uint8_t *rand_avp_data_ptr = NULL;
    /*
    kaseme avp���ݶεĳ���
    */
    uint32_t kasme_avp_data_len = 0;
    /*
    kaseme avp���ݶε�ָ��
    */
    uint8_t *kasme_avp_data_ptr = NULL;
    uint32_t buf_len = len;
    /*
    rand,kasme�������
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
    ɨ������ڴ�
    */
    while(len > 0)
    {
        /*
        ������֤��Ϣ��avp
        */
        if(MP_E_NONE != avp_search(ptr+offset,buf_len,(uint8_t **)&avp_ptr,AVP_CODE_EUTRAN_VEC))
        {
            dmt_print("%s\n","not find auth AVP_CODE_EUTRAN_VEC");
            *rand_kasme_count = count;
            return MP_E_NONE;
        }
        /*
        ��ȡEUTRAN_VEC������
        */
        AVP_DATA_INFO(avp_ptr,avp_data_ptr,avp_data_len);
        do
        {
            /*
            ��EUTRAN_VEC��������ȥ����rand
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
            ��EUTRAN_VEC�����ݶ���ȥ����kasme
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
    uint16_t real_avp_data_len = 0;//��ʵ��avp���ݶεĳ���
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
                diameter�����user����imsi,��diameter���ݰ��в��õ���asc���ŵ�
                �������ǲ���bcd���ŵ��൱������һ��2��ѹ��
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


