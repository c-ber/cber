/****************************************************************************** 

��Ȩ���У�C����2001-2015�꣬����Ƽ��ɷ����޹�˾

******************************************************************************
�ļ���:       relate_aging.c
�����ʽ:     ASCII
����:         chenbin
����:         Oct 13, 2015
��ʷ:
    1.����    :Oct 13, 2015
      ����    :cb
      �޸�    :Created file
******************************************************************************/

#include "relate_aging.h"


/* �ϻ�����ɨ����ʱ��        */
CVMX_SHARED uint64_t g_scan_interval       = AGING_SCAN_INTE;

/* ��������ʼֵ<����:1��65535> */
CVMX_SHARED uint64_t g_aging_timer_max     = AGING_INIT_TIME;

/* �ṩ���û����õ��ϻ�ʱ��, ��λΪ�� <����:10s��100000s>       */
CVMX_SHARED uint64_t g_max_relate_lifetime = AGING_SCAN_INTE * AGING_INIT_TIME;


/******************************************************************************
 * ��������    : lte_aging_clear_relate_by_imsi
 * ����        : ����imsi��ɾ����Ӧ������Ϣ,
 * ��ע        ����Ҫ�ӿں�����ɾ��ĳ�����������Ψһ����
 *               ר�ż���ɾ����
 * ����        : �����ʽ��imsiֵ
 * ����        : MP_OK--ɾ���ɹ�, MP_FAIL--imsi��Ӧ�ı������
******************************************************************************/
mp_code_t lte_aging_clear_relate_by_imsi(lte_imsi_t imsi)
{
    mp_code_t ret = MP_OK;

    hash_key_t       key       = {};
    lte_table_imsi_t imsi_cell = {};


    /* ���ù�ϣ��ѯ�ӿڣ���ѯimsi�� */
    update_imsi_hash_key(imsi, &(key));
    ret = hash_cell_get_by_hash( LTE_GET_TABLE_PTR(TABLE_IMSI),
                                 &(key), &imsi_cell, sizeof(lte_table_imsi_t) );
    if(MP_CELL_FOUND != ret)
    {
        return MP_FAIL;
    }

    // locate s1u table entry(include default/dedicated uplink/downlink) with imsi then delete them
    lte_delete_s1u_by_imsi(&imsi_cell, 0);


    /* ɾ��s11-sgw,s11-mme��ɾ������s1u�� */
    hash_table_remove_entry_by_index(LTE_GET_TABLE_PTR(TABLE_S11_SGW), &(imsi_cell.pos_s11_sgw));
    hash_table_remove_entry_by_index(LTE_GET_TABLE_PTR(TABLE_S11_MME), &(imsi_cell.pos_s11_mme));
    hash_table_remove_entry_by_index(LTE_GET_TABLE_PTR(TABLE_S6A), &(imsi_cell.pos_s6a));
    hash_table_remove_entry_by_index(LTE_GET_TABLE_PTR(TABLE_S1_ENODEB_MME), &(imsi_cell.pos_s1_mme));

    /*���ù�ϣ��ʽɾ��imsi�ܱ�*/
    hash_cell_delete_by_hash(LTE_GET_TABLE_PTR(TABLE_IMSI),&(key));

    return MP_OK;
}

#ifdef RELATE_AGING
/* ����s1u����imsi,sgw,s11-mme,s1-mme,s6a������� ,
 * ������imsi���������������ͬʱcell��ɾҲû�� */
mp_code_t lte_aging_relate_update_timer_by_imsi(lte_imsi_t imsi)
{
    mp_code_t ret = MP_OK;
    hash_key_t key = {};
    lte_table_imsi_t     tb_imsi    = {};

    CVMX_MP_POINT_CHECK(imsi, M_AGING, LV_ERROR);

    update_imsi_hash_key(imsi, &key);
    ret = hash_cell_get_by_hash(LTE_GET_TABLE_PTR(TABLE_IMSI),
                                &key, &tb_imsi, sizeof(tb_imsi));
    if(MP_CELL_FOUND != ret)
    {
        return ret;
    }

    hash_cell_update_timer_by_hash (LTE_GET_TABLE_PTR(TABLE_IMSI),
                                    &key,                   g_aging_timer_max);

    hash_cell_update_timer_by_index(LTE_GET_TABLE_PTR(TABLE_S11_SGW),
                                    &(tb_imsi.pos_s11_sgw), g_aging_timer_max);

    hash_cell_update_timer_by_index(LTE_GET_TABLE_PTR(TABLE_S11_MME),
                                    &(tb_imsi.pos_s11_mme), g_aging_timer_max);

    hash_cell_update_timer_by_index(LTE_GET_TABLE_PTR(TABLE_S1_ENODEB_MME),
                                    &(tb_imsi.pos_s1_mme),  g_aging_timer_max);

    hash_cell_update_timer_by_index(LTE_GET_TABLE_PTR(TABLE_S6A),
                                    &(tb_imsi.pos_s6a),     g_aging_timer_max);

    return ret;
}


/******************************************************************************
 * ��������    : lte_aging_search_s1u_table
 * ����        : ɨ��s1u��,������±�־�仯����Ҫͬ��imsi��mme,sgw��ļ�����,
 *               ����ֻ����s1u�ļ�������ɾ��s1u��
 * ����        :
 * ����        : �����룬�������붨��
******************************************************************************/
static mp_code_t lte_aging_search_s1u_table( hash_table_t *table )
{
    int i = 0;
    uint16_t tim = 0;
    hash_bucket_t    *bucket    = NULL;
    hash_cell_t *hash_cell = NULL;
    struct list_head *pos = NULL, *next = NULL;

    CVMX_MP_POINT_CHECK(table, M_AGING, LV_ERROR);
    CVMX_MP_POINT_CHECK(table->first_bucket, M_AGING, LV_ERROR);

    for ( i = 0; i < table->max_bucket; i++ )
    {
        bucket = table->first_bucket + i;
        CVMX_MP_POINT_CHECK(bucket, M_AGING, LV_ERROR);

        LTE_HASH_TABLE_LOCK(bucket); /*��סs1uͰ�ӣ������Ǳ���cell����*/
        list_for_each_safe( pos, next, &(bucket->head) )
        {
            hash_cell = list_entry(pos, hash_cell_t, node);
            CVMX_MP_POINT_CHECK_UNLOCK(hash_cell, M_AGING, LV_ERROR);

            lte_table_s1u_t *s1u_cell = (lte_table_s1u_t *)(hash_cell->entry);
            CVMX_MP_POINT_CHECK_UNLOCK(s1u_cell, M_AGING, LV_ERROR);

            if ( true == s1u_cell->ex_field.updt_tim )
            {
                //ͨ��imsi������������
                //���¹���������cell�ļ�����ֵ
                lte_aging_relate_update_timer_by_imsi(s1u_cell->imsi);
                s1u_cell->ex_field.updt_tim = false;//����Ҫ�ָ����¼�����ֵ�ı�־
            }

#ifdef RELATE_AGING
            CVMX_MP_POINT_CHECK_UNLOCK(table->set_timer, M_AGING, LV_ERROR);

            tim = table->set_timer((void *)hash_cell->entry, TIMER_REDUCE, 1);
            if( tim <= LTE_AGING_TIMER_LOWER_LIMIT )
            {
                /* ɾ��cell,����Ҫ��ͳһ�ӿڣ����Ż� */
                __list_del( hash_cell->node.prev, hash_cell->node.next);
                HASH_CELL_FREE(bucket, table->pool, hash_cell);
            }
#endif
        }

        LTE_HASH_TABLE_UNLOCK(bucket);
    }
    return MP_OK;
}



/******************************************************************************
 * ��������    : lte_aging_search_table
 * ����        : ͨ�õ�ֱ��ɨ�跽ʽ, ���¼��������ϻ�ɾ����
 * ����        :
 * ����        : �����룬�������붨��
******************************************************************************/
static mp_code_t lte_aging_search_table( hash_table_t *table )
{
    int i = 0;
    uint16_t tim = 0;
    hash_bucket_t    *bucket    = NULL;
    hash_cell_t *hash_cell = NULL;
    struct list_head *pos = NULL, *next = NULL;

    CVMX_MP_POINT_CHECK(table, M_AGING, LV_ERROR);
    CVMX_MP_POINT_CHECK(table->first_bucket, M_AGING, LV_ERROR);

    for ( i = 0; i < table->max_bucket; i++ )
    {
        bucket = table->first_bucket + i;
        CVMX_MP_POINT_CHECK(bucket, M_AGING, LV_ERROR);

        LTE_HASH_TABLE_LOCK(bucket); /*��סͰ�ӣ������Ǳ���cell����*/
        list_for_each_safe( pos, next, &(bucket->head) )
        {
            hash_cell = list_entry(pos, hash_cell_t, node);

            CVMX_MP_POINT_CHECK_UNLOCK(hash_cell,        M_AGING, LV_ERROR);
            CVMX_MP_POINT_CHECK_UNLOCK(table->set_timer, M_AGING, LV_ERROR);

            tim = table->set_timer((void *)hash_cell->entry, TIMER_REDUCE, 1);
            if( tim <= LTE_AGING_TIMER_LOWER_LIMIT)//ɾ��cell
            {
                __list_del( hash_cell->node.prev, hash_cell->node.next);
                HASH_CELL_FREE(bucket, table->pool, hash_cell);
            }
        }

        LTE_HASH_TABLE_UNLOCK(bucket);
    }
    return MP_OK;
}
/******************************************************************************
 * ��������    : lte_full_table_update_timer
 * ����        : ͨ�õ�ֱ��ɨ�跽ʽ, ���¼�����
 * ����        :
 * ����        : �����룬�������붨��
******************************************************************************/
mp_code_t lte_full_table_update_timer( hash_table_t *table,
                                       uint16_t      tm)
{
    int i = 0;
    hash_bucket_t    *bucket    = NULL;
    hash_cell_t *hash_cell = NULL;
    struct list_head *pos = NULL, *next = NULL;

    CVMX_MP_POINT_CHECK(table, M_AGING, LV_ERROR);
    CVMX_MP_POINT_CHECK(table->first_bucket, M_AGING, LV_ERROR);

    for ( i = 0; i < table->max_bucket; i++ )
    {
        bucket = table->first_bucket + i;
        CVMX_MP_POINT_CHECK(bucket, M_AGING, LV_ERROR);

        LTE_HASH_TABLE_LOCK(bucket); /*��סͰ�ӣ������Ǳ���cell����*/
        list_for_each_safe( pos, next, &(bucket->head) )
        {
            hash_cell = list_entry(pos, hash_cell_t, node);
            CVMX_MP_POINT_CHECK_UNLOCK(hash_cell,        M_AGING, LV_ERROR);
            CVMX_MP_POINT_CHECK_UNLOCK(table->set_timer, M_AGING, LV_ERROR);
            table->set_timer((void *)hash_cell->entry, TIMER_REPLACE, tm);
        }

        LTE_HASH_TABLE_UNLOCK(bucket);
    }
    return MP_OK;
}

/******************************************************************************
 * ��������    : lte_aging_process_check
 * ����        : �ϻ������⣬��������ֵ�Ƿ������ϻ�����
 * ����        :
 * ����        : �����룬�������붨��
******************************************************************************/
mp_code_t lte_aging_process_check()
{
    /* ����������ϻ�ʱ��Ϊ0�� ��ر��ϻ����� */
    if( 0 != g_max_relate_lifetime  &&  true == g_lte_start_flag )
    {
        /*��������������*/
        lte_aging_search_s1u_table( LTE_GET_TABLE_PTR(TABLE_S1U) );
        lte_aging_search_table(LTE_GET_TABLE_PTR(TABLE_IMSI) );
        //lte_aging_search_table( LTE_GET_TABLE_PTR(TABLE_IMSI) );
        lte_aging_search_table( LTE_GET_TABLE_PTR(TABLE_S11_SGW) );
        lte_aging_search_table( LTE_GET_TABLE_PTR(TABLE_S11_MME) );
        lte_aging_search_table(LTE_GET_TABLE_PTR(TABLE_S1_ENODEB_MME) );
        lte_aging_search_table(LTE_GET_TABLE_PTR(TABLE_S6A));
    }
    return MP_OK;
}

/******************************************************************************
 * ��������    : npcp_update_cell_timer
 * ����        : ������ѯ�����������cell�ļ�����
 * ����        : ilen-�������ݳ���,idata-�������ݿ�
 * ���        : olen-������ݳ���,odata-������ݿ�
 * ����        : �����룬�������붨��
******************************************************************************/
void *npcp_update_cell_timer(void *thread_data)
{
    int i = AGING_INIT_TIME;
    while(i--)
    {
        lte_aging_process_check();
    }
    return NULL;
}

#endif


