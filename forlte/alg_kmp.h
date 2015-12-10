/****************************************************************************** 

版权所有（C），2001-2015年，恒扬科技股份有限公司

******************************************************************************
文件名:       alg_kmp.h
编码格式:     ASCII
作者:         chenbin
创建:         Nov 26, 2015
历史:
    1.日期    :Nov 26, 2015
      作者    :cb
      修改    :Created file
******************************************************************************/
#ifndef ALG_KMP_H_
#define ALG_KMP_H_

#include    <stdio.h>
#include    <string.h>
#include    <stdlib.h>
#include    <cb_code.h>

cb_code_t KMPSearch(char *pat,int len_pat,
                    char *txt, int len_txt,
                    int  *pos);

#endif /* ALG_KMP_H_ */
