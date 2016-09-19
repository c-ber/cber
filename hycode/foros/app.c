/****************************************************************************** 

版权所有（C），2001-2015年，恒扬科技股份有限公司

******************************************************************************
文件名:       app.c
编码格式:     ASCII
作者:         chenbin
创建:         May 26, 2016
历史:
    1.日期    :May 26, 2016
      作者    :cb
      修改    :Created file
******************************************************************************/

typedef enum _app_id_t
{
    APP_QQ                  = 143,
    APP_QQ_MAIL             = 800,
    APP_WEIXIN_WEB          = 426
}app_id_t;


typedef struct _dpi_app_t
{
    app_id_t app_id;
    char    *app_name;
    char    *app_type;
}dpi_app_t;

dpi_app_t da[] = {
        { APP_QQ,           "QQ",            "即时通讯"},
        { APP_QQ_MAIL,      "QQ邮箱",        "电子邮件"},
        { APP_WEIXIN_WEB,   "网页微信",      "即时通讯"},
};

