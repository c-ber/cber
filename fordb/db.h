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

#include "semp-errno.h"
#include "stdio.h"
#include "string.h"
#include "stdlib.h"
#include "stdint.h"

///* 数据库表操作类型 */
//typedef enum
//{
//    OP_TABLE_INSERT,   /* 增 */
//    OP_TABLE_DELETE,   /* 删 */
//    OP_TABLE_UPDATE,   /* 改 */
//    OP_TABLE_SELECT    /* 查 */
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
//tbl_handler_t tbl_cb[1]; //1代表一个表
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
