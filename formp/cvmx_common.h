/****************************************************************************** 

��Ȩ���У�C����2001-2015�꣬����Ƽ��ɷ����޹�˾

******************************************************************************
�ļ���:       cvmx_common.h
�����ʽ:     ASCII
����:         chenbin
����:         Oct 20, 2015
��ʷ:
    1.����    :Oct 20, 2015
      ����    :cb
      �޸�    :Created file
******************************************************************************/
#ifndef CVMX_COMMON_H_
#define CVMX_COMMON_H_
#include <stdint.h>
#include <pthread.h>

#ifndef TRUE
#define FALSE   0
#define TRUE    1
#endif

#ifndef ENABLE
#define ENABLE      1                   /** Symbol of instance control */
#define DISABLE     0         /** Symbol of instance control */
#endif
#define cvmx_likely
#define cvmx_unlikely

#define CVMX_SHARED

#define cvmx_spinlock_lock(t)   pthread_mutex_lock(t)
#define cvmx_spinlock_unlock(t) pthread_mutex_unlock(t)
#define cvmx_spinlock_init(t)   pthread_mutex_init(t,NULL)

#define semp_named_shared_memblock_get(t) ((void*)NULL)
#define cvmx_get_core_num() 2
typedef pthread_mutex_t cvmx_spinlock_t;


typedef struct
{
    uint8_t packet_data[96];
}cvmx_wqe_t;

#endif /* CVMX_COMMON_H_ */
