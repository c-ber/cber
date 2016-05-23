/****************************************************************************** 

��Ȩ���У�C����2001-2015�꣬����Ƽ��ɷ����޹�˾

******************************************************************************
�ļ���:       dpi_memory.h
�����ʽ:     ASCII
����:         chenbin
����:         Apr 19, 2016
��ʷ:
    1.����    :Apr 19, 2016
      ����    :cb
      �޸�    :Created file
      ����    :DPI�ڴ����
******************************************************************************/
#ifndef MODULES_DPI_DPI_MEMORY_H_
#define MODULES_DPI_DPI_MEMORY_H_


#include "semp_comm_dpi.h"
#include "cvmx_common.h"
#include "util.h"



#define DPI_ALLOC_BLOCK_NUM     10

/* �ڴ��ʼ�� */
mp_code_t dpi_mm_init();

/* �ڴ����� */
void* dpi_mm_alloc(unsigned int size);

/* �ڴ��ͷ� */
void  dpi_mm_free(void *p);


/*------------------------------�ڲ�����ʹ��---------------------------------*/

/*fpa�����128�ֽڿռ�*/
typedef struct
{
    uint64_t block_data[8];
}fpa_block_t;


/* fpa���� */
#define DPI_MEM_ALLOC() (cvmx_fpa_alloc(CVMX_FPA_DPI_POOL))

/* fpa�ͷ� */
#define DPI_MEM_FREE(_ptr_)                                 \
        do                                                  \
        {                                                   \
            cvmx_fpa_free(_ptr_,  CVMX_FPA_DPI_POOL, 0 );   \
            _ptr_ = NULL;                                   \
        }while(0)


#endif /* MODULES_DPI_DPI_MEMORY_H_ */
