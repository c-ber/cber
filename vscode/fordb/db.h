/****************************************************************************** 

��Ȩ���У�C����2001-2015�꣬����Ƽ��ɷ����޹�˾

******************************************************************************
�ļ���:       db.h
�����ʽ:     ASCII
����:         chenbin
����:         Dec 15, 2015
��ʷ:
    1.����    :Dec 15, 2015
      ����    :cb
      �޸�    :Created file
******************************************************************************/
#ifndef DB_H_
#define DB_H_

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

#include "semp-errno.h"
#include "lte_relate.h"
#include "cvmx_common.h"
#include "semp-errno.h"
#include "list.h"
#include "semp_hydra_relate.h"

typedef  uint64_t item_mask_t;

/*�������*/
enum
{
    CELL_NEW,
    CELL_VISIT,
    CELL_INSERT,    /*�ҵ��͸��£�û�ҵ���new*/
    CELL_DELETE,
};


typedef mp_code_t (*db_handler)(void *src, void *dst, item_mask_t mask);




#endif /* DB_H_ */
