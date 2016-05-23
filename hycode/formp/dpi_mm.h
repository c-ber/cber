/****************************************************************************** 

版权所有（C），2001-2015年，恒扬科技股份有限公司

******************************************************************************
文件名:       dpi_memory.h
编码格式:     ASCII
作者:         chenbin
创建:         Apr 19, 2016
历史:
    1.日期    :Apr 19, 2016
      作者    :cb
      修改    :Created file
      描述    :DPI内存管理
******************************************************************************/
#ifndef MODULES_DPI_DPI_MEMORY_H_
#define MODULES_DPI_DPI_MEMORY_H_


#include "semp_comm_dpi.h"
#include "cvmx_common.h"
#include "util.h"



#define DPI_ALLOC_BLOCK_NUM     10

/* 内存初始化 */
mp_code_t dpi_mm_init();

/* 内存申请 */
void* dpi_mm_alloc(unsigned int size);

/* 内存释放 */
void  dpi_mm_free(void *p);


/*------------------------------内部定义使用---------------------------------*/

/*fpa分配的128字节空间*/
typedef struct
{
    uint64_t block_data[8];
}fpa_block_t;


/* fpa申请 */
#define DPI_MEM_ALLOC() (cvmx_fpa_alloc(CVMX_FPA_DPI_POOL))

/* fpa释放 */
#define DPI_MEM_FREE(_ptr_)                                 \
        do                                                  \
        {                                                   \
            cvmx_fpa_free(_ptr_,  CVMX_FPA_DPI_POOL, 0 );   \
            _ptr_ = NULL;                                   \
        }while(0)


#endif /* MODULES_DPI_DPI_MEMORY_H_ */
