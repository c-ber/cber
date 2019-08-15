#include "packet_entry.h"
#include "packet_ranap.h"
#include "ranap_asn1_decode.h"

/******************************************************************************
 * ��������    : semp_ranap_parse
 * ����        : ����RANAP����
 * ����        : RANAPЭ������ָ��,RANAP���ĳ���
 * ���        : pstIuPs_Info:IuPs�ṹ��ָ��,���ڴ��IuPs�������
 * ����        : �ɹ�����MP_E_NONE��
 *               ʧ�ܷ��ش�����
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
