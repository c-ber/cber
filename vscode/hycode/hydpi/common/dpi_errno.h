/*
**  semp-errno.h
**  Copyright (c) 2014-2020  Semptian Inc.
**  KEYWORDS: {result code definitions}
*/
#ifndef __SEMP_GENERIC_ERRNO_BASE_H__
#define __SEMP_GENERIC_ERRNO_BASE_H__


typedef enum {
    DPI_OK                       = 0, /* �ɹ� */
    DPI_ERROR                    = 1, /* ���� */
                                 
    DPI_OUT_RANGE                = 3, /* ������Χ*/  
    DPI_PARAM_ERR                = 4, /* �������� */
                                 
    DPI_READ_ONLY                = 5, /* �ļ�ֻ�� */
    DPI_NO_PERM                  = 6, /* û�з���Ȩ�� */
    DPI_LOCKED                   = 7, /* ���ʿռ䱻�� */
    DPI_CANT_OPEN                = 8, /* ���ܴ� */
    DPI_TIMEOUT                  = 9, /* ������ʱ */
    DPI_BUSY                     = 10,/* ������������ */
    DPI_FAIL                     = 11,/* ����ʧ�� */
                                
    DPI_TABLE_EMPTY              = 12,/* �ձ���� */
    DPI_TABLE_FULL               = 13,/* �������� */
    DPI_NOT_FOUND                = 14,/* ����δ�ҵ� */
    DPI_CELL_FOUND               = 15,/* �������ҵ� */
                                   
    DPI_MEM_ERR                  = 16, /* �ڴ����*/
    DPI_NULL_POINT               = 17, /* ��ָ����� */
    DPI_MEM_FAIL                 = 18, /* �ڴ����ʧ�� */  
    DPI_SPACE_NOT_ENOUGH         = 19, /* ָ��ָ��Ŀռ䲻�� */
                                 
    DPI_INTERNAT                 = 20, /* �ڲ����� */
    DPI_INIT_ERR                 = 21, /* ��ʼ������ */
    DPI_NO_LOG_READ              = 22, /* û�пɶ���־ */
    DPI_HDWARE_ERR               = 23, /* Ӳ������ */   
    DPI_INTERRUPT                = 24, /* IO���� */
    DPI_NOTICE                   = 25, /* ��ʾ */
    DPI_WARNING                  = 26, /* �澯 */
    DPI_INVALID_PACKET           = 27, /* �����ǵı��� */
    DPI_UNSUPPORT                = 28, /* ��֧�� */ 

    DPI_E_PARAM                  = 29, /* Invalid parameter */
    DPI_E_NOT_VLAN_PKT           = 30,

    DPI_SHM_ATTACH_FAIL          = 31, /*���ӹ����ڴ�ʧ��*/
    DPI_SHM_DETACH_FAIL          = 32  /*�ͷŹ����ڴ�ʧ��*/

}dpi_code_t;


#endif

