/****************************************************************************** 

��Ȩ���У�C����2001-2015�꣬����Ƽ��ɷ����޹�˾

******************************************************************************
�ļ���:       alg_kmp.h
�����ʽ:     ASCII
����:         chenbin
����:         Nov 26, 2015
��ʷ:
    1.����    :Nov 26, 2015
      ����    :cb
      �޸�    :Created file
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
