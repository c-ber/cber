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

    hash_key_t key={};
    uint64_t entry[ENTRY_CELL_DATA_SIZE] = {0};
    lte_table_imsi_t     imsi_cell = {};
    lte_table_ctrl_sgw_t sgw_cell  = {};
    lte_table_ctrl_mme_t mme_cell  = {};
    hash_table_index_t   imsi_pos  = {};

    LTE_DEBUG_PRINTF("Start to delete table according by imsi !\n");
    /* ���ù�ϣ��ѯ�ӿڣ���ѯimsi�� */
    memcpy(imsi_cell.imsi, imsi, sizeof(lte_table_imsi_t));
    update_imsi_hash_key(imsi, &(key));
    LTE_IMSI_TABLE_DELETE_LOCK;
    ret = hash_cell_get_by_hash( LTE_GET_TABLE_PTR(TABLE_IMSI),
                                 &(key), entry, sizeof(entry) );
    memcpy(&imsi_cell, entry, sizeof(lte_table_imsi_t));
    if(MP_CELL_FOUND != ret)
    {
        LTE_IMSI_TABLE_DELETE_UNLOCK;
        return MP_FAIL;
    }

    /* ����������ѯ�ӿڣ���ѯs11-sgw��ɾ������s1u�� */
    ret = hash_cell_get_by_index( LTE_GET_TABLE_PTR(TABLE_S11_SGW),
                                  &(imsi_cell.pos_sgw),entry, sizeof(entry));
    memcpy(&sgw_cell, entry, sizeof(lte_table_ctrl_sgw_t));
    if(MP_CELL_FOUND == ret)
    {
        lte_sgw_delete_s1u(&sgw_cell, 0);
    }

    /* ����������ѯ�ӿڣ���ѯs11-mme��ɾ������s1u�� */
    ret = hash_cell_get_by_index(LTE_GET_TABLE_PTR(TABLE_S11_MME),
                                  &(imsi_cell.pos_mme),entry, sizeof(entry));
    memcpy(&mme_cell, entry, sizeof(lte_table_ctrl_mme_t));
    if(MP_CELL_FOUND == ret)
    {
        lte_mme_delete_s1u(&mme_cell, 0);
    }

    /* ɾ��s11-sgw,s11-mme��ɾ������s1u�� */
    hash_table_remove_entry_by_index(LTE_GET_TABLE_PTR(TABLE_S11_SGW), &(imsi_cell.pos_sgw));
    hash_table_remove_entry_by_index(LTE_GET_TABLE_PTR(TABLE_S11_MME), &(imsi_cell.pos_mme));

    /*���ù�ϣ��ʽɾ��imsi�ܱ�*/
    hash_cell_delete_by_hash(LTE_GET_TABLE_PTR(TABLE_IMSI),&(key));
    LTE_IMSI_TABLE_DELETE_UNLOCK;
    LTE_DEBUG_PRINTF("Delete table according by imsi finish!!!!\n");
    return MP_OK;
}

#ifdef RELATE_AGING
/* ����s1u����imsi,sgw,mme������� ,������imsi���������������ͬʱcell��ɾҲû�� */
mp_code_t lte_aging_relate_update_timer_by_imsi(lte_imsi_t imsi)
{
    mp_code_t ret = MP_OK;

    lte_table_imsi_t     *table_imsi_e= NULL;
    lte_table_ctrl_sgw_t *table_sgw_e = NULL;
    lte_table_ctrl_mme_t *table_mme_e = NULL;

    lte_table_imsi_t imsi_search_d = {};
    hash_table_control_t imsi_control = {};


    imsi_control.d_compare = (void *)&imsi_search_d;
    imsi_control.d_update  = (void *)&imsi_search_d;
    imsi_control.compare_enable = ENABLE;
    imsi_control.new_enable    =  DISABLE;
    imsi_control.update_enable =  DISABLE;

    memcpy(imsi_search_d.imsi, imsi, sizeof(lte_imsi_t));
    PRINTF_IMSI(imsi_search_d.imsi);
    LTE_DEBUG_PRINTF("Start to update aging according by imsi !\n");

    update_imsi_hash_key(imsi_search_d.imsi, &(imsi_control.key));

    ret = hash_table_search_update(LTE_GET_TABLE_PTR(TABLE_IMSI), &imsi_control);
    if(MP_OK != ret)
    {
       return ret;
    }

    if(HASH_CMP_DIFF  == imsi_control.search)
    {
       return MP_NOT_FOUND;
    }

    table_imsi_e = NODE2ENTRY(imsi_control.node, lte_table_imsi_t);
    table_imsi_e->aging = g_aging_timer_max;

    table_sgw_e = (lte_table_ctrl_sgw_t*)hash_table_index_to_entry
                   (LTE_GET_TABLE_PTR(TABLE_S11_SGW), &(table_imsi_e->pos_sgw));
    if(NULL != table_sgw_e )
    {
       table_sgw_e->aging = g_aging_timer_max;
    }

    table_mme_e = (lte_table_ctrl_mme_t*)hash_table_index_to_entry
                   (LTE_GET_TABLE_PTR(TABLE_S11_MME), &(table_imsi_e->pos_mme));
    if(NULL != table_mme_e)
    {
       table_mme_e->aging = g_aging_timer_max;
    }
    LTE_DEBUG_PRINTF("Finish to update aging according by imsi !\n");
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
    uint8_t tim = 0;
    hash_bucket_t    *bucket    = NULL;
    hash_cell_t *hash_cell = NULL;
    struct list_head *pos = NULL, *next = NULL;

    if (cvmx_unlikely(NULL == table))
    {
        return MP_NULL_POINT;
    }

    for ( i = 0; i < table->max_bucket; i++ )
    {
        bucket = table->first_bucket + i;
        if(cvmx_unlikely(NULL == bucket ))
        {
            return MP_NULL_POINT;
        }

        LTE_HASH_TABLE_LOCK(bucket); /*��סs1uͰ�ӣ������Ǳ���cell����*/
        list_for_each_safe( pos, next, &(bucket->head) )
        {
            hash_cell = list_entry(pos, hash_cell_t, node);
            if(cvmx_unlikely(NULL == hash_cell ))
            {
                return MP_NULL_POINT;
            }

            lte_table_s1u_t *s1u_cell = (lte_table_s1u_t *)(hash_cell->entry);
            if(cvmx_unlikely(NULL == s1u_cell ))
            {
                return MP_NULL_POINT;
            }

            if ( true == s1u_cell->ex_field.updt_tim )
            {
                //ͨ��imsi������������
                //���¹���������cell�ļ�����ֵ
                lte_aging_relate_update_timer_by_imsi(s1u_cell->imsi);
                s1u_cell->ex_field.updt_tim = false;//����Ҫ�ָ����¼�����ֵ�ı�־
            }

            tim = table->set_timer((void *)hash_cell->entry, TIMER_REDUCE, 1);
            if( tim <= LTE_AGING_TIMER_LOWER_LIMIT )
            {
                /* ɾ��cell,����Ҫ��ͳһ�ӿڣ����Ż� */
                __list_del( hash_cell->node.prev, hash_cell->node.next);
                MP_MEMSET_P( hash_cell_t, hash_cell );
                HASH_CELL_FREE(table->pool, hash_cell);
                bucket->bucket_depth--;
            }
        }

        LTE_HASH_TABLE_UNLOCK(bucket);
    }
    return MP_OK;
}

/******************************************************************************
 * ��������    : lte_aging_search_imsi_table
 * ����        : ɨ��imsi��,���¼��������ϻ�ɾ����
 * ����        :
 * ����        : �����룬�������붨��
******************************************************************************/
static mp_code_t lte_aging_search_imsi_table( hash_table_t *table )
{
    int i = 0;
    uint8_t tim = 0;
    hash_bucket_t    *bucket    = NULL;
    hash_cell_t *hash_cell = NULL;
    struct list_head *pos  = NULL;
    struct list_head *next = NULL;
    lte_table_imsi_t  imsi_cell={};
//    lte_imsi_t imsi = {0x64,0x00,0x78,0x59,0x32,0x50,0x07,0xf6};

    if (cvmx_unlikely(NULL == table))
    {
        return MP_NULL_POINT;
    }

    for ( i = 0; i < table->max_bucket; i++ )
    {
        bucket = table->first_bucket + i;
        if(cvmx_unlikely(NULL == bucket ))
        {
            return MP_NULL_POINT;
        }

        list_for_each_safe( pos, next, &(bucket->head) )
        {
            hash_cell = list_entry(pos, hash_cell_t, node);
            if(cvmx_unlikely(NULL == hash_cell ))
            {
                return MP_NULL_POINT;
            }

            tim = table->set_timer((void *)hash_cell->entry, TIMER_REDUCE, 1);
            memcpy(&imsi_cell, (hash_cell->entry), sizeof(lte_table_imsi_t));

            if( tim <= LTE_AGING_TIMER_LOWER_LIMIT)//ɾ�������ӱ�
            {
                lte_aging_clear_relate_by_imsi(imsi_cell.imsi);
            }
        }
    }
    LTE_DEBUG_PRINTF("End to  search imsi table!\n");
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
    uint8_t tim = 0;
    hash_bucket_t    *bucket    = NULL;
    hash_cell_t *hash_cell = NULL;
    struct list_head *pos = NULL, *next = NULL;

    LTE_DEBUG_PRINTF("LTE DEBUG LOG :" "Entry to [%s] search\n",table->name);
    if (cvmx_unlikely(NULL == table))
    {
        return MP_NULL_POINT;
    }

    for ( i = 0; i < table->max_bucket; i++ )
    {
        bucket = table->first_bucket + i;
        if(cvmx_unlikely(NULL == bucket ))
        {
            return MP_NULL_POINT;
        }

        LTE_HASH_TABLE_LOCK(bucket); /*��סͰ�ӣ������Ǳ���cell����*/
        list_for_each_safe( pos, next, &(bucket->head) )
        {
            hash_cell = list_entry(pos, hash_cell_t, node);
            if(cvmx_unlikely(NULL == hash_cell ))
            {
                return MP_NULL_POINT;
            }

            tim = table->set_timer((void *)hash_cell->entry, TIMER_REDUCE, 1);
            if( tim <= LTE_AGING_TIMER_LOWER_LIMIT)//ɾ��cell
            {
                __list_del( hash_cell->node.prev, hash_cell->node.next);
                MP_MEMSET_P( hash_cell_t, hash_cell );
                HASH_CELL_FREE(table->pool, hash_cell);
            }
        }

        LTE_HASH_TABLE_UNLOCK(bucket);
    }
    return MP_OK;
}

/******************************************************************************
 * ��������    : lte_aging_get_relate_num
 * ����        : ��ȡ�ɹ���������
 * ����        : relate_total_num�����������ֵ
 * ����        : �����룬�������붨��
******************************************************************************/
static mp_code_t lte_aging_get_relate_num(uint32_t *relate_total_num)
{
    int i, j;
    bool flag = false;
    uint32_t relate_num = 0;

    hash_table_t *imsi_table= LTE_GET_TABLE_PTR(TABLE_IMSI);
    hash_bucket_t *bucket = NULL;
    struct list_head *pos = NULL, *next = NULL;

    hash_cell_t*hash_cell   = NULL;
    lte_table_imsi_t     *imsi_entry  = NULL;
    lte_table_ctrl_sgw_t *table_sgw_e = NULL;
    lte_table_ctrl_mme_t *table_mme_e = NULL;
    lte_table_s1u_t      *table_s1u   = NULL;

    for(i=0; i<imsi_table->max_bucket; i++)
    {
        bucket = imsi_table->first_bucket+i;
        LTE_HASH_TABLE_LOCK(bucket);

        list_for_each_safe(pos, next, &(bucket->head))
        {
            hash_cell = list_entry(pos, hash_cell_t, node);
            if(cvmx_unlikely(NULL == hash_cell ))
            {
                return MP_NULL_POINT;
            }

            /*check compare  same or diff(new)*/
            imsi_entry = (lte_table_imsi_t *)hash_cell->entry;
            if(cvmx_unlikely(NULL == imsi_entry ))
            {
                return MP_NULL_POINT;
            }

            uint64_t imsi_d = *((uint64_t *)(&imsi_entry->imsi[0]));
            if(imsi_d == 0){
                continue;
            }

            table_sgw_e = (lte_table_ctrl_sgw_t*)hash_table_index_to_entry
                    (LTE_GET_TABLE_PTR(TABLE_S11_SGW), &(imsi_entry->pos_sgw));

            table_mme_e = (lte_table_ctrl_mme_t*)hash_table_index_to_entry
                    (LTE_GET_TABLE_PTR(TABLE_S11_MME), &(imsi_entry->pos_mme));

            if(NULL  == table_sgw_e || NULL  == table_mme_e)
            {
                 continue;
            }

            flag = false;
            for(j=0;j<MAX_PDN;j++)
            {
                table_s1u= (lte_table_s1u_t*)hash_table_index_to_entry
                            (LTE_GET_TABLE_PTR(TABLE_S1), &(table_mme_e->pos_s1u[j]));
                if(NULL != table_s1u  )
                {
                    flag = true;
                    break;
                }
            }
            if(false == flag)
            {
                continue;
            }
            flag = false;
            for(j=0;j<MAX_PDN;j++)
            {
                table_s1u = (lte_table_s1u_t*)hash_table_index_to_entry
                        (LTE_GET_TABLE_PTR(TABLE_S1), &(table_sgw_e->pos_s1u[j]));
                if(NULL != table_s1u  )
                {
                    flag = true;
                    break;
                }
            }

            if(false == flag)
            {
                continue;
            }
            relate_num++;

        }
        LTE_HASH_TABLE_UNLOCK(bucket);
    }
    *relate_total_num = relate_num;

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
    LTE_DEBUG_PRINTF("LTE DEBUG LOG :" "Entry to aging process!\n");

    /*��������������*/
    lte_aging_search_s1u_table( LTE_GET_TABLE_PTR(TABLE_S1) );
    lte_aging_search_imsi_table(LTE_GET_TABLE_PTR(TABLE_IMSI) );
    //lte_aging_search_table( LTE_GET_TABLE_PTR(TABLE_IMSI) );
    lte_aging_search_table( LTE_GET_TABLE_PTR(TABLE_S11_SGW) );
    lte_aging_search_table( LTE_GET_TABLE_PTR(TABLE_S11_MME) );

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


