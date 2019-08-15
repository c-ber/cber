
#include "packet_entry.h"
#include "packet_s1ap.h"
#include "s1ap_asn1_decode.h"

#define INIT_S1AP_ID_LOCATION_FIELDS(mpp)\
    memset(mpp->pktinfo.s1ap.tai, 0xFF, sizeof(mpp->pktinfo.s1ap.tai));\
    memset(&mpp->pktinfo.s1ap.ecgi, 0xFF, sizeof(mpp->pktinfo.s1ap.ecgi));\
    memset(mpp->pktinfo.s1ap.nas.guti, 0xFF, sizeof(mpp->pktinfo.s1ap.nas.guti));\
    memset(mpp->pktinfo.s1ap.nas.init_identify.guti, 0xFF, sizeof(mpp->pktinfo.s1ap.nas.init_identify.guti))


void S1_DataPrint(uint8_t *pucData, uint16_t usDataLength)
{
    if( NULL == pucData)
    {
        return;
    }

    uint16_t                        usMaxByteNum = 0;
    char                            szOut[1024] = {0};
    char                            szTemp[36] = {0};
    int32_t                         i = 0;

    usMaxByteNum = 200;

    if(0 == usDataLength)
    {
        return;
    }

    /* 打印信息单元名称，打印的话要区分公共协议还是私有协议 */
    sprintf(szOut, "\r\n%8sLEN=%3u,"," ",
                usDataLength);

    if(usDataLength < usMaxByteNum)
    {
         usMaxByteNum = usDataLength;
    }

    sprintf(szTemp, "[");
    strcat(szOut, szTemp);

    for(i = 0; i < usMaxByteNum; i++)
    {
        if(i%16 == 0 && i != 0)
        {
            sprintf(szTemp, "\r\n%16s[%02X ", " ", *(pucData+i));
        }
        else
        {
            sprintf(szTemp, "%02X ", *(pucData+i));
        }
        strcat(szOut, szTemp);
    }

    if(usMaxByteNum < 200)
    {
        sprintf(szTemp, "]");
    }
    else
    {
        sprintf(szTemp, "...]");
    }

    strcat(szOut, szTemp);
    printf("%s\n", szOut);
}

mp_error_t semp_s1ap_parse(cvmx_wqe_t *work, struct pbuf *p, mpp_control_st *mpp)
{

    parse_s1ap_t    *s1ap = NULL;
    ST_BITPOINTER   st_Bp = {0};
    ST_S1AP_EP      st_s1ap_ep = {0};

    MASTER_PARAM_CHECK(work, p, mpp);

    /* initial fields associated with identity and location into 0xFF
     * because these fields is encoded by BCD, then F indicates end.
     * if don't fill a field, it keeps 0xFF
     */
    INIT_S1AP_ID_LOCATION_FIELDS(mpp);

    LOG_PRINT(M_PARSE, LV_INFO, "--------->enter semp_s1ap_parse<------\n");
    s1ap = &(mpp->pktinfo.s1ap);

    st_Bp.bytes = (unsigned char*)(p->ptr_offset + (char *)p->ptr);
    st_Bp.end   = (unsigned char*)((p->len - 1) + (char *)p->ptr);
    st_Bp.bits  = 0;
    s1ap_pdu_decode(&st_Bp, &st_s1ap_ep, s1ap, mpp->pktinfo.ip.srcip, mpp->pktinfo.ip.dstip); //支持IPV4和IPV6
    return MP_E_NONE;
}


