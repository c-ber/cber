#include "packet_entry.h"
#include "packet_ranap.h"
#include "ranap_asn1_decode.h"

/******************************************************************************
 * 函数名称    : semp_ranap_parse
 * 描述        : 解析RANAP报文
 * 输入        : RANAP协议数据指针,RANAP报文长度
 * 输出        : pstIuPs_Info:IuPs结构体指针,用于存放IuPs输出数据
 * 返回        : 成功返回MP_E_NONE，
 *               失败返回错误码
******************************************************************************/
mp_error_t semp_ranap_parse(uint8_t *data, uint16_t data_lenth, parse_IuPS_t *pstIuPs_Info)
{
    ST_BITPOINTER st_Bp = {0};
    mp_error_t ret      = 0;
    
    LOG_PRINT(M_PARSE, LV_INFO, "--------->enter semp_ranap_parse<------\n");
    
    if((NULL == data) || (NULL == pstIuPs_Info))
    {
        LOG_PRINT(M_PARSE, LV_ERROR, LOG_CONTENT_NULL_POINT);
        return MP_NULL_POINT;
    }

    st_Bp.bytes = (unsigned char*)data;
    st_Bp.end   = (unsigned char*)(data + data_lenth - 1);
    st_Bp.bits  = 0;

    ret = ranap_pdu_decode(&st_Bp, pstIuPs_Info);
    return ret;
}
