/******************************************************************************

 版权所有（C），2001-2015年，恒扬科技股份有限公司 
 
 ****************************************************************************** 
  文件名       : ranap.c 
  编码格式     ：ASCII
  版本         : Initial Draft 
  作者         : ruanxiangwei
  创建         : 2016/4/1
  上次修改     :  
  描述         : ranap业务管理过程
  功能列表     : ranap模块初始化、动作的设置、npcp的初始化
  历史         : 
  1.日期       : 2016/4/1
    作者       : ruanxiangwei
    修改       : Created file 
 ******************************************************************************/ 

#include "ranap.h"



/**********************************************************************************************
  函数名称      : ranap_process
  描述          : ranap报文处理
  调用          : 
  被调用        : 
  被访问的表    : 
  被修改的表    : 
  输入          : void
  输出          : 无
  返回          : 返回值为XSUCCESS或XFAILURE或XENOMEM
  其他          : 
**********************************************************************************************/
mp_code_t ranap_process(cvmx_wqe_t *work, mpp_control_st *mpp)
{
    return MP_OK;
}


