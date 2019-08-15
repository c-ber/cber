/****************************************************************************** 

��Ȩ���У�C����2001-2015�꣬����Ƽ��ɷ����޹�˾

******************************************************************************
�ļ���:       shmem.h
�����ʽ:     ASCII
����:         chenbin
����:         Aug 31, 2016
��ʷ:
    1.����    :Aug 31, 2016
      ����    :cb
      �޸�    :Created file
******************************************************************************/
#ifndef LIBIPC_SHMEM_H_
#define LIBIPC_SHMEM_H_


#include <sys/shm.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include "semaphore.h"


typedef struct{
    int     id;         /*�����ڴ��ʶ����ÿ�������ڴ��������ʱ���л�ȡ*/
    int     size;       /*shm��С*/
    void   *addr;       /*shm�׵�ַ*/
    int    sem_id;      /*��Ӧ���ź���id*/
}dpi_shm_t;

typedef enum
{
    KEY_IFGRP     = 0,
    KEY_STAT      = 1,
    KEY_DPI_RLT   = 2,
    KYE_PKT_BUF01 = 3,
    KYE_PKT_BUF02 = 4,
    KYE_PKT_BUF03 = 5,
    KYE_PKT_BUF04 = 6,
    KYE_PKT_BUF05 = 7,
    KYE_PKT_BUF06 = 8,
    KYE_PKT_BUF07 = 9,
    KYE_PKT_BUF08 = 10,
    KYE_PKT_BUF09 = 11,
    KYE_PKT_BUF10 = 12,
    KYE_PKT_BUF11 = 13,
    KYE_PKT_BUF12 = 14,
    KYE_PKT_BUF13 = 15,
    KYE_PKT_BUF14 = 16,
    KYE_PKT_BUF15 = 17,
    KYE_PKT_BUF16 = 18,
    KEY_MAX
}shm_key_type_t;

/*ͨ�õĹ����ڴ���ýӿ�*/



/******************************************************************************
 * ��������    : dpi_shm_data_init
 * ����        : �����ڴ��ʼ��
 * ����        : key  : �����ڴ�keyֵ�����shm_key_type_tö�����ͣ�
 *                     ����ģ����ж����Լ���keyֵ
 *               __size  :�����ڴ���ܳ��ȣ�һ��ȡ�ṹ������ֽ���
 *
 * ����        : �����룬���ҳɹ�����DPI_OK,ʧ�ܷ���DPI_FAIL
******************************************************************************/
dpi_code_t dpi_shm_data_init(shm_key_type_t key, size_t __size);





/******************************************************************************
 * ��������    : dpi_shm_data_set
 * ����        : ���ù����ڴ���ָ�����ֶ�ֵ
 * ����        : key  : �����ڴ�keyֵ�����shm_key_type_tö�����ͣ�
 *                     ����ģ����ж����Լ���keyֵ
 *               psrc  :Ҫ�޸ĵ����ݵĵ�ַ
 *               offset : Ҫ�޸ĵ����������������ڴ��е�ƫ��λ��
 *               dst_len: Ҫ�޸ĵ����ݵĳ���
 * ����        : �����룬���ҳɹ�����DPI_OK,ʧ�ܷ���DPI_FAIL
******************************************************************************/
dpi_code_t dpi_shm_data_set(shm_key_type_t key, void *psrc, int offset, int src_len);






/******************************************************************************
 * ��������    : dpi_shm_data_get
 * ����        : ��ȡ�����ڴ���ָ�����ֶ�ֵ
 * ����        : key  : �����ڴ�keyֵ�����shm_key_type_tö�����ͣ�
 *                     ����ģ����ж����Լ���keyֵ
 *               pdst  :��Ŵӹ����ڴ��ȡ���ݵĿռ��ַ
 *               offset : Ҫ��ȡ�����������������ڴ��е�ƫ��λ��
 *               dst_len: Ҫ��ȡ�����ݵĳ���
 * ����        : �����룬���ҳɹ�����DPI_OK,ʧ�ܷ���DPI_FAIL
******************************************************************************/
dpi_code_t dpi_shm_data_get(shm_key_type_t key, void *pdst, int offset, int dst_len);



/******************************************************************************
 * ��������    : dpi_shm_data_inc
 * ����        : �Թ����ڴ���ָ�����ֶ�ֵ���м�N����
 * ����        : key  : �����ڴ�keyֵ�����shm_key_type_tö�����ͣ�
 *                     ����ģ����ж����Լ���keyֵ
 *               offset : Ҫ��ȡ�����������������ڴ��е�ƫ��λ��
 *               src_len: ���õ����ݵĳ��ȣ���֧��1�ֽڣ�2�ֽڣ�4,�ֽڣ�8�ֽڵ�����
  *              va     :  Nֵ
 * ����        : �����룬���ҳɹ�����DPI_OK,ʧ�ܷ���DPI_FAIL
******************************************************************************/
dpi_code_t dpi_shm_data_inc(shm_key_type_t key, int offset, int src_len, int va);

/*��sdkר�ŵ��õĻ�ȡ���ݰ��Ľӿ�*/
dpi_code_t dpi_sdk_shm_data_set(shm_key_type_t key, void *psrc, int offset, int src_len);
dpi_code_t dpi_sdk_shm_data_get(shm_key_type_t key, void *pdst, int offset, int dst_len);

#endif /* LIBIPC_SHMEM_H_ */
