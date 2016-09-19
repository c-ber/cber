/****************************************************************************** 

版权所有（C），2001-2015年，恒扬科技股份有限公司

******************************************************************************
文件名:       dpi.h
编码格式:     ASCII
作者:         chenbin
创建:         Apr 18, 2016
历史:
    1.日期    :Apr 18, 2016
      作者    :cb
      修改    :Created file
******************************************************************************/
#ifndef MODULES_DPI_DPI_H_
#define MODULES_DPI_DPI_H_

#include "encap.h"
#include "util.h"
#include "r2_list.h"
#include "list.h"
#include "semp_comm_dpi.h"
#include "sapl_dpi_sdk.h"
#include <pthread.h>


mp_code_t sapl_sdk_init();
mp_code_t dataplane_dpi_processs(dpi_skb_t *skb, five_tuple_t *ft,
                                 char * sbuf, uint16_t *slen);




/*配置文件内存位置*/
typedef struct _config_info_t
{
    uint8_t  *pstr;               /* 指向文件内存的首地址 */
    uint32_t  cur_wirte_index;    /* 当前已写的字节数 */
    flag_t    is_complete_file;   /* 是否为完整的文件 */
    uint32_t  file_size;          /* 文件大小 */
}config_info_t;


#endif /* MODULES_DPI_DPI_H_ */
