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

#include "semp-errno.h"
#include "stdio.h"
#include "string.h"
#include "stdlib.h"
#include "stdint.h"

///* ���ݿ��������� */
//typedef enum
//{
//    OP_TABLE_INSERT,   /* �� */
//    OP_TABLE_DELETE,   /* ɾ */
//    OP_TABLE_UPDATE,   /* �� */
//    OP_TABLE_SELECT    /* �� */
//}db_opera_t;
//
//typedef  uint8_t table_key_t;
//
//
//typedef mp_code_t (*table_opera_cb)(void data, table_key_t key);
//
//
//typedef struct
//{
//    table_opera_cb toc_select;
//    table_opera_cb toc_insert;
//    table_opera_cb toc_update;
//    table_opera_cb toc_delete;
//}tbl_handler_t;
//
//typedef struct
//{
//    uint8_t imsi;
//    uint8_t point_mme;
//    uint8_t point_sgw;
//}imsi_cell_t;
//
//typedef imsi_cell_t imsi_table_t[10];
//
//imsi_table_t imsi_table;
//tbl_handler_t tbl_cb[1]; //1����һ����
//
//mp_code_t lte_table_select(void data, table_key_t key);
//mp_code_t lte_table_insert(void data, table_key_t key);
//mp_code_t lte_table_update(void data, table_key_t key);
//mp_code_t lte_table_delete(void data, table_key_t key);
//
//mp_code_t lte_table_opera_register();
//mp_code_t lte_table_opera_unregister();
//
//mp_code_t lte_table_opera_process();
#endif /* DB_H_ */
