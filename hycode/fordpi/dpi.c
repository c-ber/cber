/****************************************************************************** 

��Ȩ���У�C����2001-2015�꣬����Ƽ��ɷ����޹�˾

******************************************************************************
�ļ���:       dpi.c
�����ʽ:     ASCII
����:         chenbin
����:         Apr 18, 2016
��ʷ:
    1.����    :Apr 18, 2016
      ����    :cb
      �޸�    :Created file
******************************************************************************/

#include "dpi.h"

CVMX_SHARED dpi_hash_bucket_t *dpi_buckets = NULL;
#define HASH_TABLE_BASE  (dpi_buckets)



void printf_dpi_skb(dpi_skb_t *skb)
{
    printf("skb->ptr_len = %d, skb->sap.protocol = %04x",
            skb->network_header_len, skb->l2_proto);
    printf_buf((uint8_t*)skb->network_header, skb->network_header_len);
}


mp_code_t five_tuple_compare(void *src, void* dst, dpi_hash_cmp_em_t *cmp)
{
    five_tuple_table_t * sentry = (five_tuple_table_t *)src;
    five_tuple_table_t * dentry = (five_tuple_table_t *)dst;

    int ret = memcmp(&(sentry->ft), &(dentry->ft), sizeof(five_tuple_t));
    if(0 == ret)
    {
       *cmp = DPI_HASH_CMP_SAME;
    }
    else
    {
       *cmp = DPI_HASH_CMP_DIFF;
    }

    return MP_OK;
}

mp_code_t five_tuple_hash(dpi_hash_key_t *key, uint32_t *hash_result)
{
    CVMX_MP_POINT_CHECK(key, M_SE, LV_ERROR);
    CVMX_MP_POINT_CHECK(hash_result, M_SE, LV_ERROR);

    uint32_t index = 0;
    index = semp_hash_data64(key->data[0], 0xFFFFFFFF);
    *hash_result = index;
    return MP_OK;
}

inline mp_code_t update_five_tuple_hash_key(five_tuple_t *ft, dpi_hash_key_t *key)
{
    int i = 0;
    key->size = 5;
    for(i = 0 ; i < key->size; i++)
    {
        key->data[i] = ft->data64[i];
    }
    return MP_OK;
}


/******************************************************************************
 * ��������    : dpi_result_analysis
 * ����        : ʶ����������������ֻ��Ӧ��ʶ�𣬼�ʶ��appid
 *               ������Ҫ��ȡ��־
 * ����        :
 * ˵��        :
 * ����        : ������
******************************************************************************/
mp_code_t dpi_result_analysis(dpi_result_t *rlt)
{
    mp_code_t ret = MP_OK;

    if(rlt->app_id == 0)
    {
        return MP_FAIL;
    }

    if(rlt->have_audit_log)
    {
        //�������־�ͷ���
    }

    //��ʶ�������д��

    return ret;
}


/******************************************************************************
 * ��������    : dpi_packet_indentify
 * ����        : �Ա��ĵ���sdk����ʶ��
 * ����        : skb:ʶ���Ľṹ��
 * ˵��        :
 * ����        : ������
******************************************************************************/
mp_code_t dpi_packet_indentify(dpi_skb_t *skb)
{
    mp_code_t ret = MP_OK;

    struct sk_buff skbuf = {};
    void *app_session    = NULL;

    uint32_t app_id    = 0;
    uint32_t action_id = 0;

    skbuf.network_header     = skb->network_header;
    skbuf.network_header_len = skb->network_header_len;
    skbuf.pktdir = skb->pktdir;

    AIE_hook(&skbuf, &app_session, &app_id, &action_id);

    return ret;
}

#define  CVMX_FPA_DPI_128_POOL 1

/******************************************************************************
 * ��������    : session_manage
 *
 * ����        : ������Ԫ��hash key����һ���������ֶοռ䣬
 *               ע��ʶ�����������ͱ����Ժ�Ҫ�ͷ��������Ŀռ䣬
 *               ��������Ԫ��Ĵ�С���ռ��ǲ����ģ�
 *
 * ����        : [in]��Ԫ��:��Ԫ��
 *
 * ����        : �����룬�����ɹ�����MP_OK,ʧ�ܷ���XFAILURE
******************************************************************************/
mp_code_t dpi_session_manage_process(dpi_skb_t *skb, five_tuple_t *ft)
{
    mp_code_t ret = MP_OK;
    struct list_head *pos  = NULL;
    struct list_head *next = NULL;

    dpi_hash_key_t           key          = {};
    five_tuple_table_t      *ft_cell      = NULL;
    dpi_hash_bucket_t       *bucket       = HASH_TABLE_BASE;
    dpi_hash_cell_t         *src_cell     = NULL;
    dpi_hash_cmp_em_t        cmp_rlt      = DPI_HASH_CMP_DIFF;
    uint32_t                hash_result  = 0;

    uint8_t              entry[DPI_TABLE_CELL_MAX_LEN] = {0};

    update_five_tuple_hash_key(ft, &key);

    if( BYTE_GET_UINT64(key.size) > sizeof(entry) )
    {
        LOG_PRINT(M_SE, LV_ERROR, "Error: The key size exceeds the entry size.\n");
        return MP_SPACE_NOT_ENOUGH;
    }
    memcpy(entry, &key, BYTE_GET_UINT64(key.size) );

    /* ��ϣ�����ȡͰƫ��ֵ */
    MP_ERR_PRT(five_tuple_hash(&key, &hash_result));
    hash_result = hash_result % DPI_BUCKET_MAX_SIZE;

    bucket = bucket + hash_result;
    CVMX_MP_POINT_CHECK(bucket, M_SE, LV_ERROR);

    /*����˫�������Ƚ�cell��key�Ƿ�һ��,��ȷ����*/
    HASH_TABLE_BUCKET_LOCK(bucket);
    list_for_each_safe(pos, next, &(bucket->head))
    {
        src_cell = list_entry(pos, dpi_hash_cell_t, node);
        if( NULL  == src_cell)
        {
            HASH_TABLE_BUCKET_UNLOCK(bucket);
            LOG_PRINT(M_SE, LV_ERROR, LOG_CONTENT_NULL_POINT);
            return MP_NULL_POINT;
        }

        ret = five_tuple_compare((void *)src_cell->entry, entry, &cmp_rlt);
        if (ret != MP_OK)
        {
            break;
        }
        if(DPI_HASH_CMP_SAME == cmp_rlt)
        {
            //get lock or wait for lock
            ft_cell = (five_tuple_table_t *)(src_cell->entry);
            FIVE_TUPLE_LOCK(ft_cell->lock);
            HASH_TABLE_BUCKET_UNLOCK(bucket);//�Ա������������ͷ�Ͱ����
            //���Խ���ʶ�������
            dpi_packet_indentify(skb);
            FIVE_TUPLE_UNLOCK(ft_cell->lock);
            return MP_OK;
        }
    }

    if( DPI_HASH_CMP_DIFF == cmp_rlt)
    {
        /*new The cell*/
        src_cell = (dpi_hash_cell_t *)DPI_HASH_CELL_NEW(CVMX_FPA_DPI_128_POOL);
        if( NULL  == src_cell)
        {
            HASH_TABLE_BUCKET_UNLOCK(bucket);
            LOG_PRINT(M_SE, LV_ERROR, LOG_CONTENT_ALLOC_FAIL);
            return MP_NULL_POINT;
        }

        memset( src_cell, 0, sizeof(dpi_hash_cell_t) );
        list_add( &(src_cell->node),&bucket->head );
        bucket->bucket_depth++;

        //��ʼ���½�����Ԫ��cell
        ft_cell = (five_tuple_table_t *)(src_cell->entry);
        memcpy(&(ft_cell->ft), &ft, sizeof(five_tuple_t));
        cvmx_spinlock_init(&(ft_cell->lock));

        //����ʶ�����
        FIVE_TUPLE_LOCK(ft_cell->lock);
        HASH_TABLE_BUCKET_UNLOCK(bucket);//�Ա������������ͷ�Ͱ����
        dpi_packet_indentify(skb);
        FIVE_TUPLE_UNLOCK(ft_cell->lock);
        return MP_OK;
    }


    HASH_TABLE_BUCKET_UNLOCK(bucket);
    return ret;
}

mp_code_t dpi_session_manage_init()
{
    mp_code_t ret = MP_OK;

    dpi_hash_bucket_t *bucket = NULL;
    int i = 0;
    
    //dpi_buckets = (hash_bucket_t*)semp_named_shared_memblock_get(LTE_HASH_TABLES);
    dpi_buckets = (dpi_hash_bucket_t*)malloc( sizeof(dpi_hash_bucket_t)*
            DPI_BUCKET_MAX_SIZE );

   
    if( NULL == dpi_buckets )
    {
        printf("DPI session init failed\n");
        return MP_TABLE_FULL;
    }


    memset(dpi_buckets, 0x00, sizeof(dpi_hash_bucket_t)*DPI_BUCKET_MAX_SIZE);
    
    for( i = 0; i < DPI_BUCKET_MAX_SIZE; i++ )
    {
          bucket = dpi_buckets + i;
          cvmx_spinlock_init(&(bucket->lock));
          bucket->index = i;
          INIT_LIST_HEAD(&bucket->head);
    }

    return ret;
}



CVMX_SHARED uint8_t *config_file_base  = NULL;
CVMX_SHARED config_info_t config_file1 = {}; /* sap_apps_sigs.conf */
CVMX_SHARED config_info_t config_file2 = {}; /* webmail_cn.html */

#define CONFIG_FILE1_MAX_SIZE (4*1024*1024)  //4M
#define CONFIG_FILE2_MAX_SIZE (1*1024*1024)  //1M

mp_code_t dataplane_dpi_init()
{
    //config_file_base = (uint8_t *)semp_named_shared_memblock_get(DPI_HASH_TABLE);
    config_file_base = (uint8_t *)malloc(CONFIG_FILE1_MAX_SIZE + CONFIG_FILE2_MAX_SIZE);
    config_file1.pstr = config_file_base;
    config_file1.cur_wirte_index = 0;

    config_file2.pstr = config_file_base + CONFIG_FILE1_MAX_SIZE;
    config_file2.cur_wirte_index = 0;

    return MP_OK;
}

/*��Ҫ��init����һ��ȫ�ֿ��Ʊ�������ֻ֤��һ��core���޸ľͲ���Ҫ������
 * ��Ϊ��Ҫ�ȵ������е�core�����Ժ󣬲��ܿ�ʼ��ʼ��AIE����*/
volatile CVMX_SHARED flag_t g_dpi_start = FALSE; /* DPIģ��������־ */

mp_code_t sapl_sdk_init()
{
    DPI_MALLOC new = NULL;
    DPI_FREE   del = NULL;

    //if(config_file1.is_complete_file && config_file2.is_complete_file)
    {
        AIE_set_app_lib((char *)(config_file1.pstr));

        AIE_set_webmail((char *)(config_file2.pstr));

        AIE_sdk_init(new, del);
        printf("[sap_apps_sigs]filesize = %d bytes, "
               "[webmail_cn]filesize = %d bytes\n",
               config_file1.file_size, config_file2.file_size);
        g_dpi_start = TRUE;
        return MP_OK;
    }
    //dpi_session_manage_init();

    return MP_FAIL;
}

//May 23 16:40:04 localhost other_app: user_name=;user_group_name=grp_name;term_platform=;term_device=;pid=0;src_mac=00:50:56:c0:00:08;src_ip=0.0.0.0;dst_ip=192.168.80.1;dst_port=5355;app_name=��Ѷ��Դ;app_cat_name=P2P���;handle_action=0;account=;action_name=����;content=;msg=

mp_code_t dataplane_dpi_processs(dpi_skb_t *skb, five_tuple_t *ft)
{
    mp_code_t ret = MP_OK;
    dpi_result_t rlt = {0};
    rlt.user_ip = 0xc0a81456;
    uint8_t str1[] = "58ͬ��";
    uint8_t str2[] = "��ҳ���";
    uint8_t str3[] = "chenbin";
    uint8_t str4[] = "һ���������վ��һ��λ���й������е�������񼰷�����Ϣ��վ��"
                    "�ɱ��������Ϣ�������޹�˾ӵ�У���ʼ����Ҧ������������2005��12��12��";

    rlt.app_name = str1;
    rlt.app_name_len = strlen((char *)str1);

    rlt.action_name = str2;
    rlt.action_name_len = strlen((char *)str2);

    rlt.account = str3;
    rlt.account_len = strlen((char *)str3);

    rlt.content = str4;
    rlt.content_len = strlen((char *)str4);


    printf_dpi_skb(skb);

    //dpi_session_manage_process(skb, ft);
    dpi_packet_indentify(skb);

    packet_identity_result_process(&rlt);
    printf("--------------> test finish \n");
    return ret;
}


