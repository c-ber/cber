/*
 * global.h
 *
 * history��
 *      Created on: 2015-3-12 Author: cb
 *
 * Copyright 2014 - Shenzhen MifiData technology Co.,Ltd. All rights reserved
 *
 *  No Part of this file may be reproduced, stored in a retrieval system, or
 *  transmitted, in any form, or by any means,electronic, mechanical, photocopying,
 *  recording, or otherwise,without the prior consent of MifiData Tech.
 */

#ifndef GLOBAL_H_
#define GLOBAL_H_

#include    <stdio.h>
#include    <stdlib.h>
#include    <time.h>
#include    <string.h>
#include    <sys/types.h>
#include    <sys/stat.h>
#include    <stdarg.h>
#include    <signal.h>
#include    <sys/wait.h>
#include    <pthread.h>
#include    <fcntl.h>
#include    <errno.h>
#include    <dirent.h>
#include    <unistd.h>
#include    <stdbool.h>

#include    "httpclient.h"
#include    "er_string.h"
#include    "cb_time.h"


//#define    DEBUG                           //������־�������������


//���ص����ص���ʱѹ������
#define    ZIPNAME               "/tmp/uptmp.zip"

//���ز��������ļ�·��
#define    FM_CONF_PATH          "/etc/fm_server_url"

//��־�ļ�
#define    FMPROCLOG             "/var/log/fm/fm.log"
#define    FMDATALOG             "/var/log/fm/fmdata.log"

//��������ļ�·�������ݸ�ʽ 0:����ʧ�ܻ�δ��� 1:�ɹ�
#define    UPDATE_RESULT          "/etc/fm_update_rlt"

//�������ñ�־
#define    SET_SUCCESS                0
#define    SET_FAIL                   1

#define    DEFAULT_INIT_TRYNUM        1     //���Դ����ĳ�ʼֵ
#define    SETRLT_RETRY_MAX_NUM       3     //�������ý���ϱ����Դ���
#define    INIT_RETRY_MAX_NUM         60    //�ϱ��豸��Ϣ���Դ���

#define    NV_TMP_LEN                 32
#define    PKT_HEAD_FIELD_LEN         32
#define    XML_NODE_STR_LEN           64
#define    POSIX_STR_LEN              128
#define    PLAIN_TEXT_LEN             128

#define    ICCID_MAX_LEN              20
#define    IMEI_MAX_LEN               15
#define    IMSI_MAX_LEN               16    //MCC[3]+MNC[2/3]+MIN[10]
#define    MCC_MAX_LEN                3
#define    MNC_MAX_LEN                3     //��Щ������Ӫ����2λ����Щ��3λ
#define    MNC_MIN_LEN                2     //��Щ������Ӫ����2λ����Щ��3λ


/*----------------type define------------------------------*/
typedef unsigned char *POINTER;
typedef unsigned short int UINT2;
typedef unsigned int UINT4;

#ifndef _T_BYTE
#define _T_BYTE
typedef unsigned char   BYTE;
#endif
/*----------------------------------------------------------*/

//�������
typedef enum
{
    FM_FINISH = 0,     //�ļ����������
    FM_UNFINISH,       //�ļ�����δ��ɣ���Ҫ���¸���
    FM_NONEED          //û����������������Ҫ�ϱ����
}FM_UPDATE_RLT;

//������
typedef enum _fm_code
{
    FM_NEED_DEAL_PARA = -1,         //�в���Ҫ����
    FM_OK = 0,                      //����
    FM_ERR,                         //��������
    FM_INPUT_PARA_ERR,              //�����������
    FM_XMLNODE_ERR,                 //����xml�ڵ����
    FM_OPEN_FILE_ERR,               //�ļ���ʧ��
    FM_NO_FILE,                     //û������ļ�
    FM_NO_DATA,                     //������û��body,һ���������
    FM_NO_SIMCARD,                  //û���ҵ�sim��
    FM_ALLOC_ERR,                   //�ڴ����ʧ��
    FM_HTTP_ERR,                    //http�������
    FM_INIT_URL_ERR,                //��ȡ��������ַ��Ϊ��
    FM_GET_NVPARA_ERR,              //��ȡnv����ʧ��
    FM_SET_NVPARA_ERR               //����nv����ʧ��
}fm_code_t;

//��Ϣ����
typedef enum _message_type
{
    MSG_DEV_STATUS = 1,   //�����򻻿��ϱ�����
    MSG_FLOW_LIMIT1,      //�ϱ�����
    MSG_SET_PARAM,        //�������ý���ϱ�
    MSG_UPDATE,           //���������±���
    MSG_UPDATE_RLT        //�ϱ��������
}MSGTYPE, message_type_t;


typedef enum _fm_step
{
    eSTEP_IDLE = 1,       //ϵͳ����״̬
    eSTEP_INIT,           //��ʼ̬,���ͳ��������Ϣ
    eSTEP_REPORT,         //��ʼ̬,�����豸λ����Ϣ
    eSTEP_CALLBACK        //�ص��������
}FM_STEP, fm_step_t;

//�豸���״̬
typedef enum _device_rent_status
{
    eSTATUS_RENT = 1,             //���״̬
    eSTATUS_RETURN                //�黹
}DEVSTATUS, device_rent_status_t;


typedef struct _sim_info
{
    char iccid[ICCID_MAX_LEN];
    char imei[IMEI_MAX_LEN];
    char mcc[MCC_MAX_LEN];
    char mnc[MNC_MAX_LEN];
}sim_info_t;


typedef struct _fm
{
    char    url[256];                 //���ʷ�������URL
    FM_STEP eStep;                    //��ǰ����
    bool    bFirstRunFlag;            //�״����б�־
    bool    bQueryReportMsg;          //����״̬�¿�����èҵ��
    bool    bhaveRigster;             //�Ѿ���������ϱ��豸��Ϣ��־
    bool    bReportStart;             //�����ϱ�����
    bool    bIsSimChange;             //sim���Ƿ����
    int     iRptRetry;                //�ϱ��豸��Ϣ���Դ���
    int     iRltRetry;                //�ϱ����ò���������Դ���
    int     iRupRetry;                //��������ļ����Դ���
}FM, fm_t, *pFM;


sim_info_t sim_info;     //sim����Ϣ

//---------data translation-----------------------
extern unsigned char BCDtoDEC(unsigned char n);
extern unsigned char DECtoBCD( unsigned char n );
extern char * UpperToLower(char *src);

//---------time relational------------------------
extern time_t GetCurTime(unsigned char *buf, int n);             // n =0,1,2... correspond "year month day hour minuter second week"
extern time_t From_tmTotime_t(unsigned char *buf);               //"year month day hour minuter second
extern long long Comptime( time_t curtime, time_t lasttime );    //return value : second
extern long int  FGetSysRunTime( void );                         //get system running time

extern void *fm_malloc(size_t length);

extern void LogFile(char *pFileName, const char *format, ...);

extern int f_line_get_value(const char *path,
                            const char *match,
                            const char split,
                            char *value);

#define WHILE_FALSE  while(0)

#define fm_safefree(ptr) \
    do {if((ptr)) {free((ptr)); (ptr) = NULL;}} WHILE_FALSE

#endif /* GLOBAL_H_ */
