/****************************************************************************** 

版权所有（C），2001-2015年，恒扬科技股份有限公司

******************************************************************************
文件名:       db.h
编码格式:     ASCII
作者:         chenbin
创建:         Dec 15, 2015
历史:
    1.日期    :Dec 15, 2015
      作者    :cb
      修改    :Created file
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

/*四类操作*/
enum
{
    CELL_NEW,
    CELL_VISIT,
    CELL_INSERT,    /*找到就更新，没找到就new*/
    CELL_DELETE,
};


typedef mp_code_t (*db_handler)(void *src, void *dst, item_mask_t mask);




#endif /* DB_H_ */
