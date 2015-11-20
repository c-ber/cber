/*
 * global.h
 *
 * history：
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


//#define    DEBUG                           //调试日志，条件编译变量


//下载到本地的临时压缩包名
#define    ZIPNAME               "/tmp/uptmp.zip"

//本地参数配置文件路径
#define    FM_CONF_PATH          "/etc/fm_server_url"

//日志文件
#define    FMPROCLOG             "/var/log/fm/fm.log"
#define    FMDATALOG             "/var/log/fm/fmdata.log"

//升级结果文件路径，内容格式 0:升级失败或未完成 1:成功
#define    UPDATE_RESULT          "/etc/fm_update_rlt"

//参数设置标志
#define    SET_SUCCESS                0
#define    SET_FAIL                   1

#define    DEFAULT_INIT_TRYNUM        1     //重试次数的初始值
#define    SETRLT_RETRY_MAX_NUM       3     //参数设置结果上报重试次数
#define    INIT_RETRY_MAX_NUM         60    //上报设备信息重试次数

#define    NV_TMP_LEN                 32
#define    PKT_HEAD_FIELD_LEN         32
#define    XML_NODE_STR_LEN           64
#define    POSIX_STR_LEN              128
#define    PLAIN_TEXT_LEN             128

#define    ICCID_MAX_LEN              20
#define    IMEI_MAX_LEN               15
#define    IMSI_MAX_LEN               16    //MCC[3]+MNC[2/3]+MIN[10]
#define    MCC_MAX_LEN                3
#define    MNC_MAX_LEN                3     //有些国家运营商是2位，有些是3位
#define    MNC_MIN_LEN                2     //有些国家运营商是2位，有些是3位


/*----------------type define------------------------------*/
typedef unsigned char *POINTER;
typedef unsigned short int UINT2;
typedef unsigned int UINT4;

#ifndef _T_BYTE
#define _T_BYTE
typedef unsigned char   BYTE;
#endif
/*----------------------------------------------------------*/

//升级结果
typedef enum
{
    FM_FINISH = 0,     //文件更新已完成
    FM_UNFINISH,       //文件更新未完成，需要重新更新
    FM_NONEED          //没有升级操作，不需要上报结果
}FM_UPDATE_RLT;

//错误码
typedef enum _fm_code
{
    FM_NEED_DEAL_PARA = -1,         //有参数要设置
    FM_OK = 0,                      //正常
    FM_ERR,                         //其他错误
    FM_INPUT_PARA_ERR,              //输入参数错误
    FM_XMLNODE_ERR,                 //解析xml节点错误
    FM_OPEN_FILE_ERR,               //文件打开失败
    FM_NO_FILE,                     //没有这个文件
    FM_NO_DATA,                     //服务器没有body,一种正常情况
    FM_NO_SIMCARD,                  //没有找到sim卡
    FM_ALLOC_ERR,                   //内存分配失败
    FM_HTTP_ERR,                    //http传输错误
    FM_INIT_URL_ERR,                //获取服务器地址的为空
    FM_GET_NVPARA_ERR,              //读取nv参数失败
    FM_SET_NVPARA_ERR               //设置nv参数失败
}fm_code_t;

//消息类型
typedef enum _message_type
{
    MSG_DEV_STATUS = 1,   //开机或换卡上报报文
    MSG_FLOW_LIMIT1,      //上报流量
    MSG_SET_PARAM,        //参数设置结果上报
    MSG_UPDATE,           //请求程序更新报文
    MSG_UPDATE_RLT        //上报升级结果
}MSGTYPE, message_type_t;


typedef enum _fm_step
{
    eSTEP_IDLE = 1,       //系统空闲状态
    eSTEP_INIT,           //初始态,发送程序更新信息
    eSTEP_REPORT,         //初始态,发送设备位置信息
    eSTEP_CALLBACK        //回调处理参数
}FM_STEP, fm_step_t;

//设备租借状态
typedef enum _device_rent_status
{
    eSTATUS_RENT = 1,             //租借状态
    eSTATUS_RETURN                //归还
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
    char    url[256];                 //访问服务器的URL
    FM_STEP eStep;                    //当前流程
    bool    bFirstRunFlag;            //首次运行标志
    bool    bQueryReportMsg;          //租赁状态下开启飞猫业务
    bool    bhaveRigster;             //已经向服务器上报设备信息标志
    bool    bReportStart;             //开机上报流量
    bool    bIsSimChange;             //sim卡是否更改
    int     iRptRetry;                //上报设备信息重试次数
    int     iRltRetry;                //上报设置参数结果重试次数
    int     iRupRetry;                //请求更新文件重试次数
}FM, fm_t, *pFM;


sim_info_t sim_info;     //sim卡信息

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
