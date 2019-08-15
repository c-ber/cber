#include <stdlib.h>
#include <stdio.h>
//#include "executive-common.h"

#include "rfc.h"

#define     ACL_RFC_DEBUG   /** Added by tsihang */

void rfc_init_default_rule(rule_t *pst_default)
{
    int i = 0;
    
    for (i = 0; i < CHUNK_TOTAL_SZIE; i++)
    {
        pst_default->rule_item[i][0] = 0;
        pst_default->rule_item[i][1] = 255;
    }
}

void printf_cbm(uint64_t * ptr, int n )
{
    int i = 0 ;
    for( i = 0 ; i < n ; i++)
    {
        printf("=========> cbm value[%02d] = %#x \n",i, *(ptr+i));
    }
}

// before every phase, must init
int rfc_phase_init(uint16_t u_ifgroup)
{
    int i;
    rfc_acl_s        *pst_acl = g_ix_rfc_table_base;
    rfc_phase_set_s  *pst_commit = pst_acl->pst_acl_commit;
    uint32_t    rule_num = pst_acl->commit.rule_num;

    pst_acl->st_acl_phase_data.u_real_size = rule_num / LENGTH64;
    pst_acl->st_acl_phase_data.u_last_pos = rule_num % LENGTH64;
    
    if (pst_acl->st_acl_phase_data.u_last_pos)
        pst_acl->st_acl_phase_data.u_real_size++;
        
    else
        pst_acl->st_acl_phase_data.u_last_pos = LENGTH64 - 1;
        
    pst_acl->st_acl_phase_data.u_real_size32 = rule_num / LENGTH32;
    pst_acl->st_acl_phase_data.u_last_pos32 = rule_num % LENGTH32;
    
    if (pst_acl->st_acl_phase_data.u_last_pos32)
        pst_acl->st_acl_phase_data.u_real_size32++;
        
    else
        pst_acl->st_acl_phase_data.u_last_pos32 = LENGTH64 - 1;
        
    // init hash table
    for (i = 0; i < MPP_MAX_ACL_HASH_SIZE; i++)
        pst_acl->st_acl_phase_data.ul_ces_hash[i] = ACL_END_LINK;
        
    pst_acl->st_acl_phase_data.ul_ces_index = 0;
    pst_acl->st_acl_phase_data.ul_cbm_index = 0;
    pst_commit->ul_free_cell_num = MPP_MAX_ACL_CELLS_NUM;
    return ACL_OK;
}


int rfc_noder_init(rfc_phase_set_s *pst_acl_commit, rfc_phase_data_s *pst_acl_phase_data, rfc_pnoder_s *pst_noder, uint32_t ul_max)
{
    if (pst_acl_commit->ul_free_cell_num < ul_max)
        return ACL_CELL_ERROR;
        
    pst_noder->ul_cell_index = MPP_MAX_ACL_CELLS_NUM - pst_acl_commit->ul_free_cell_num;
    pst_noder->ul_cell_num = ul_max;

    pst_noder->pul_cell_mdu = (uint32_t *)(pst_acl_commit->ul_cells + pst_noder->ul_cell_index);
    pst_noder->pul_cell_md = (uint32_t *)(pst_acl_commit->ul_cells + pst_noder->ul_cell_index);

    pst_acl_commit->ul_free_cell_num -= ul_max;
    pst_noder->ul_eq_id = 0;
    pst_noder->ul_ces_index = pst_acl_phase_data->ul_ces_index;
    return ACL_OK;
}

// Compare two ud_bmp, called by SearchBmp
// return: same -- TRUE ;  different -- RFCFALSE
rfcbool rfc_compare_bmp(uint64_t *pud_abmp, uint64_t *pud_bbmp, uint32_t ul_len)
{
    int i;
    
    if ((pud_abmp == NULL) || (pud_bbmp == NULL))
        return RFCFALSE;
        
    for (i = ul_len; i > 0; i--)
        if ((* (pud_abmp++)) != (* (pud_bbmp++)))
            return RFCFALSE;
            
    return RFCTRUE;
}

// Function to search ud_bmp in listEqs, called by SetPhase0_Cell
// call form : SearchBmp(phase0_Nodes[i].listEqs,ud_bmp)
// Return: if pud_bmp not exist in listEqs, return -1
// else return eqID of CES whose cbm matches pud_bmp
uint32_t rfc_search_bmp(uint64_t *pud_bmp, uint32_t ul_table)
{
    uint32_t i;
    uint32_t ul_hash_index = 0, ul_index;
    rfc_phase_data_s *pst_acl_phase_data = &g_ix_rfc_table_base->st_acl_phase_data;
    uint32_t     *pul_hash = pst_acl_phase_data->ul_ces_hash;
    rfc_ces_s    *pst_ces = pst_acl_phase_data->st_ces;
    rfc_ces_s    *ces_tmp;   //指向 pst_ces结构体变量   临时变量
    uint64_t     *cbm_tmp;   //指向 pst_acl_phase_data->ud_cbm_data的临时变量
    uint32_t     ul_same_cbm = ACL_END_LINK;
    
    //tCES = ptrlistEqs->head;
    
    // get hashindex
    for (i = 0; i < pst_acl_phase_data->u_real_size; i++)
        ul_hash_index = (ul_hash_index + pud_bmp[i]) % MPP_MAX_ACL_HASH_SIZE;
      
    if (pul_hash[ul_hash_index] != ACL_END_LINK)
    {
        ul_index = pul_hash[ul_hash_index];
        
        while (ul_index != ACL_END_LINK)
        {
            ces_tmp = &pst_ces[ul_index];

            if (ul_same_cbm != ACL_END_LINK)
            {
                if (ul_same_cbm == ces_tmp->ul_cbm_index)
                {
                    if (ces_tmp->ul_table == ul_table)
                        return ces_tmp->ul_eq_id;
                }
            }
            else
            {
                // find same ud_bmp from hash table
                if (rfc_compare_bmp(pud_bmp, &pst_acl_phase_data->ud_cbm_data[ces_tmp->ul_cbm_index], pst_acl_phase_data->u_real_size) == RFCTRUE)
                {
                    if (ces_tmp->ul_table == ul_table)
                    {
                        return ces_tmp->ul_eq_id;
                    }
                        
                    else
                    {
                        ul_same_cbm = ces_tmp->ul_cbm_index;
                    }
                }
            }
            
            ul_index = ces_tmp->ul_next;
        }
    }
   
    if (pst_acl_phase_data->ul_ces_index + 1 >= MPP_MAX_ACL_CES_NUM)
    {
        return ACL_END_LINK;
    }
        
    if ((ul_same_cbm == ACL_END_LINK) && (pst_acl_phase_data->ul_cbm_index + pst_acl_phase_data->u_real_size >= MPP_MAX_ACL_CBM_NUM))
    {
        MC_PRINT (" (ul_same_cbm : %d, pst_acl_phase_data->ul_cbm_index : %d, pst_acl_phase_data->u_real_size : %d) &&\n", 
                ul_same_cbm, pst_acl_phase_data->ul_cbm_index, pst_acl_phase_data->u_real_size);
        return ACL_END_LINK;
    }

    ces_tmp = &pst_ces[pst_acl_phase_data->ul_ces_index];
    ces_tmp->ul_hash_index = ul_hash_index;
    ces_tmp->ul_next = pul_hash[ul_hash_index];
    ces_tmp->ul_eq_id = g_ix_rfc_table_base->pst_acl_commit->st_phase_nodes[ul_table].ul_eq_id++;
    ces_tmp->ul_table = ul_table;
    pul_hash[ul_hash_index] = pst_acl_phase_data->ul_ces_index++;
    if (ul_same_cbm == ACL_END_LINK)
    {
        ces_tmp->ul_cbm_index = pst_acl_phase_data->ul_cbm_index;
        pst_acl_phase_data->ul_cbm_index += pst_acl_phase_data->u_real_size;
        cbm_tmp = &pst_acl_phase_data->ud_cbm_data[ces_tmp->ul_cbm_index];
        for (i = 0; i < pst_acl_phase_data->u_real_size; i++)
            cbm_tmp[i] = pud_bmp[i];
    }
    else
    {
        ces_tmp->ul_cbm_index = ul_same_cbm;
    }
        
    return ces_tmp->ul_eq_id;
}


uint32_t rfc_get_rule_cost(uint64_t *pud_bmp)
{
    uint32_t k, pos, c;
    uint32_t ul_temp;
    uint32_t *pul_temp;
    uint16_t u_real_size = g_ix_rfc_table_base->st_acl_phase_data.u_real_size;

    // first compare the 64 bit
    for (k = 0; k < u_real_size; k ++)
    {
        if (pud_bmp[k] != 0)
        {
            pul_temp = (uint32_t *) &pud_bmp[k];
            if (pul_temp[1] > 0)
            {
                ul_temp = pul_temp[1];
                pos = 0;
            }
            else
            {
                ul_temp = pul_temp[0];
                pos = 32;
            }

            if ((ul_temp & 0x0000ffff) > 0)
            {
                if ((ul_temp & 0x000000ff) > 0)
                {
                    if ((ul_temp & 0x0000000f) > 0)
                    {
                        if ((ul_temp & 0x00000003) > 0)
                        {
                            if ((ul_temp & 0x00000001) > 0)
                                c = 0;
                            else
                                c = 1;
                        }
                        else
                        {
                            if ((ul_temp & 0x00000004) > 0)
                                c = 2;
                            else
                                c = 3;
                        }
                    }
                    else
                    {
                        if ((ul_temp & 0x00000030) > 0)
                        {
                            if ((ul_temp & 0x00000010) > 0)
                                c = 4;
                            else
                                c = 5;
                        }
                        else
                        {
                            if ((ul_temp & 0x00000040) > 0)
                                c = 6;
                            else
                                c = 7;
                        }
                    }
                }
                else
                {
                    if ((ul_temp & 0x00000f00) > 0)
                    {
                        if ((ul_temp & 0x00000300) > 0)
                        {
                            if ((ul_temp & 0x00000100) > 0)
                                c = 8;
                            else
                                c = 9;
                        }
                        else
                        {
                            if ((ul_temp & 0x00000400) > 0)
                                c = 10;
                             else
                                c = 11;
                        }
                    }
                    else
                    {
                        if ((ul_temp & 0x00003000) > 0)
                        {
                            if ((ul_temp & 0x00001000) > 0)
                                c = 12;
                            else
                                c = 13;
                        }
                        else
                        {
                            if ((ul_temp & 0x00004000) > 0)
                                c = 14;
                            else
                                c = 15;
                        }
                    }
                }
            }
            else
            {
                if ((ul_temp & 0x00ff0000) > 0)
                {
                    if ((ul_temp & 0x000f0000) > 0)
                    {
                        if ((ul_temp & 0x00030000) > 0)
                        {
                            if ((ul_temp & 0x00010000) > 0)
                                c = 16;
                            else
                                c = 17;
                        }
                        else
                        {
                            if ((ul_temp & 0x00040000) > 0)
                                c = 18;
                            else
                                c = 19;
                        }
                    }
                    else
                    {
                        if ((ul_temp & 0x00300000) > 0)
                        {
                            if ((ul_temp & 0x00100000) > 0)
                                c = 20;
                            else
                                c = 21;
                        }
                        else
                        {
                            if ((ul_temp & 0x00400000) > 0)
                                c = 22;
                            else
                                c = 23;
                        }
                    }
                }
                else
                {
                    if ((ul_temp & 0x0f000000) > 0)
                    {
                        if ((ul_temp & 0x03000000) > 0)
                        {
                            if ((ul_temp & 0x01000000) > 0)
                                c = 24;
                            else
                                c = 25;
                        }
                        else
                        {
                            if ((ul_temp & 0x04000000) > 0)
                                c = 26;
                            else
                                c = 27;
                        }
                    }
                    else
                    {
                        if ((ul_temp & 0x30000000) > 0)
                        {
                            if ((ul_temp & 0x10000000) > 0)
                                c = 28;
                            else
                                c = 29;
                        }
                        else
                        {
                            if ((ul_temp & 0x40000000)>0)
                                c = 30;
                            else
                                c = 31;
                        }
                    }
                }
            }
            
            return (k * LENGTH64 + pos + c);
        }
    }
    //printf("!!! Lack of default rule!\nThere is no rule matched!\n");
    // return -1;
    return CHUNK_TOTAL_SZIE;
}



#define DATA64_BITMASK_SET(pud_mask,n)\
	{\
		uint32_t *__mask32 = (uint32_t*)pud_mask;\
		if ((n & (LENGTH64 - 1)) < 32)\
		{\
		    __mask32[0] = 0;\
			__mask32[1] = 1 << (n & (LENGTH64 - 1));\
		}\
		else \
		{\
			__mask32[0] = 1 << ((n & (LENGTH64 - 1)) - 32);\
			__mask32[1] = 0;\
		}\
	}


// Function to fill the table of Phase 0
// return : void
int rfc_phase0(rfc_phase_set_s *pst_acl_commit, rule_set_t *pst_filter_set, rule_comit_t *pst_filter_index)
{
    uint32_t i     = 0;
    uint32_t n     = 0;
    uint32_t com   = 0;
    uint32_t index = 0;//存放当前chunk中的有效的索引值
    uint64_t ud_bmp[RFC_SIZE64];
    uint32_t ul_action_num, ul_eq_id;

    rule_action_t *pst_filter_action[MPP_MAX_PHASE0_CELL] = {NULL};
    rule_action_t *pst_action_temp                        = NULL;

    rule_action_t  st_filter_action[2 * CHUNK_TOTAL_SZIE] = {};

    rfc_phase_data_s *pst_acl_phase_data = &g_ix_rfc_table_base->st_acl_phase_data;
    
    // Chunk[0] to Chunk[5] of Phase 0
    for (com = 0; com < CHUNK_TOTAL_SZIE; com++)
    {
        printf("sizeof(pst_filter_action) = %d \n", sizeof(pst_filter_action));
        memset (pst_filter_action, 0, sizeof(pst_filter_action));
        memset (st_filter_action, 0, sizeof(st_filter_action));
        
        // Initialize ud_bmp = 0
        for (i = 0; i < pst_acl_phase_data->u_real_size; i++)
            ud_bmp[i] = 0;
            
        ul_action_num = 0;
        ul_eq_id      = 0;
        
        // Initialize phase0_Nodes[com]->listEqs
        if (rfc_noder_init(pst_acl_commit, pst_acl_phase_data, pst_acl_commit->st_phase_nodes + com, MPP_MAX_PHASE0_CELL) != ACL_OK)
        {
            MC_PRINT("  cell alloc failure in table %d, need is %d, free is %d\n", com, MPP_MAX_PHASE0_CELL, pst_acl_commit->ul_free_cell_num);
            //          Phase_Free();
            return ACL_CELL_ERROR;
        }
        
        // Pre scan for action
        //13个chunk都有各自的一个ces表，里面cbm是用链表串起来的长度，单个是64位
        for (n = 0; n < pst_filter_index->rule_num; n++)
        {
            st_filter_action[ul_action_num].rid = n / LENGTH64;
            st_filter_action[ul_action_num].action = 1;

            /**/
            DATA64_BITMASK_SET (&st_filter_action[ul_action_num].bitmask, n);
            index = pst_filter_set->rule[pst_filter_index->rule_status[n]].rule_item[com][0];
            st_filter_action[ul_action_num].ck_index = index;
            st_filter_action[ul_action_num].next = pst_filter_action[index];

            /*这里赋值了，就说明这个chunk项的index项不为空*/
            pst_filter_action[index] = &st_filter_action[ul_action_num];
            ul_action_num++;
            // second is high+1, the clear bit
            index = pst_filter_set->rule[pst_filter_index->rule_status[n]].rule_item[com][1] + 1;
            
            if (index <= MPP_MAX_PHASE0_CELL)
            {
                st_filter_action[ul_action_num].rid = n / LENGTH64;
                st_filter_action[ul_action_num].action = 0;
                //st_filter_action[ul_action_num].ud_bitmask = 1 << (n & (LENGTH64 - 1));
                DATA64_BITMASK_SET (&st_filter_action[ul_action_num].bitmask, n);
                st_filter_action[ul_action_num].next = pst_filter_action[index];
                st_filter_action[ul_action_num].ck_index = index;

                pst_filter_action[index] = &st_filter_action[ul_action_num];
                ul_action_num++;
            }
        }
        
        //  first the cbm is 0
        if (pst_filter_action[0] == NULL)
        {
            if ((ul_eq_id = rfc_search_bmp(ud_bmp, com)) == ACL_END_LINK)
            {
                MC_PRINT("  EQM ID search failure in table %d\n", com);
                //Phase_Free();
                return ACL_CES_ERROR;
            }
        }
        //预处理表赋值，action为空时候, eq_id为0, 否则填对应的值
        for (i = 0; i < MPP_MAX_PHASE0_CELL; i++)
        {
            if (pst_filter_action[i] != NULL)
            {
                pst_action_temp = pst_filter_action[i];
                
                while (pst_action_temp != NULL)
                {
                    if (pst_action_temp->action)
                        ud_bmp[pst_action_temp->rid] |= pst_action_temp->bitmask;
                        
                    else
                        ud_bmp[pst_action_temp->rid] &= ~pst_action_temp->bitmask;
                        
                    pst_action_temp = pst_action_temp->next;
                }
                
                if ((ul_eq_id = rfc_search_bmp(ud_bmp, com)) == ACL_END_LINK)
                {
                    MC_PRINT("  EQM ID search failure in table %d\n", com);
                    return ACL_CES_ERROR;
                }
            }

            pst_acl_commit->st_phase_nodes[com].pul_cell_mdu[i] = ul_eq_id;
        }
        
        for (i = 0; i < ul_action_num; i++)
            pst_filter_action[st_filter_action[i].ck_index] = NULL;
    }
    
    return ACL_OK;
}

int  rfc_phase(rfc_pnoder_s *pst_node1, rfc_pnoder_s *pst_node2, rfc_pnoder_s *pst_node3, uint32_t ul_table)
{
    uint32_t i, j, m;
    uint32_t ul_cell_num, ul_eq_id, ul_cell_index;
    uint64_t ud_bmp[RFC_SIZE64], *pud_bmp1, *pud_bmp2;
    rfc_ces_s *pst_ces1, *pst_ces2;
    rfc_phase_set_s *pst_acl_commit = g_ix_rfc_table_base->pst_acl_commit;
    rfc_phase_data_s *pst_acl_phase_data = &g_ix_rfc_table_base->st_acl_phase_data;

    ul_cell_num = pst_node1->ul_eq_id * pst_node2->ul_eq_id;
    
    // Initialize phase0_Nodes[com]->listEqs
    if (rfc_noder_init(pst_acl_commit, pst_acl_phase_data, pst_node3, ul_cell_num) != ACL_OK)
    {
        MC_PRINT("  cell alloc failure in table %d, need is %d, free is %d\n", ul_table, ul_cell_num, pst_acl_commit->ul_free_cell_num);
        return ACL_CELL_ERROR;
    }
    
    // generate phase1_Nodes[com]->listEqs
    pst_ces1 = &pst_acl_phase_data->st_ces[pst_node1->ul_ces_index];
    pst_ces2 = &pst_acl_phase_data->st_ces[pst_node2->ul_ces_index];
    ul_cell_index = 0;
    
    for (i = 0; i < pst_node1->ul_eq_id; i++)
    {
        pud_bmp1 = &pst_acl_phase_data->ud_cbm_data[pst_ces1[i].ul_cbm_index];
        
        for (j = 0; j < pst_node2->ul_eq_id; j++)
        {
            pud_bmp2 = &pst_acl_phase_data->ud_cbm_data[pst_ces2[j].ul_cbm_index];
            
            for (m = 0; m < pst_acl_phase_data->u_real_size; m++)
                ud_bmp[m] = pud_bmp1[m] & pud_bmp2[m];
                
            if ((ul_eq_id = rfc_search_bmp(ud_bmp, ul_table)) == ACL_END_LINK)
            {
                MC_PRINT("  EQM ID search failure in table %d\n", ul_table);
                return ACL_CES_ERROR;
            }
            
            MPP_GET_MDU_VAR(pst_node3->pul_cell) [ul_cell_index++] = ul_eq_id;
        }
    }
    
    return ACL_OK;
}

int rfc_phase1(rfc_pnoder_s *pst_prev_phase_nodes,
        rfc_pnoder_s *pst_phase_nodes, uint32_t ul_len, uint32_t ul_table)
{
    uint32_t com;
    int result = 0;

    // Chunk[0] ~ Chunk[2] of Phase 1
    for (com = 0; com < ul_len; com++)
    {
        if ( (result = rfc_phase(&pst_prev_phase_nodes[com << 1],
              &pst_prev_phase_nodes[(com << 1) + 1],
              pst_phase_nodes + com, ul_table + com)) != ACL_OK)
        {
            return result;
        }
    }
    
    return ACL_OK;
}

int rfc_phase2(rfc_pnoder_s *pst_prev_phase_nodes, rfc_pnoder_s *pst_phase_nodes, uint32_t ul_table)
{
    int result = 0;
    // Chunk[0] ~ Chunk[2] of Phase 1
    if ((result = rfc_phase(&pst_prev_phase_nodes[0], &pst_prev_phase_nodes[3], pst_phase_nodes, ul_table)) != ACL_OK)
    {
        return result;
    }

    if ((result = rfc_phase(&pst_prev_phase_nodes[1], &pst_prev_phase_nodes[2], pst_phase_nodes + 1, ul_table + 1)) != ACL_OK)
    {
        return result;
    }
    return ACL_OK;
}

// Function to fill the table of Phase 2, called by main
// return : void
int rfc_phase3(rfc_pnoder_s *pst_prev_phase_nodes, rfc_pnoder_s *pst_phase_nodes, uint16_t u_ifgroup)
{
    rfc_pnoder_s *pst_node1, *pst_node2;
    uint64_t ud_bmp[RFC_SIZE64], *pud_bmp1, *pud_bmp2;
    uint32_t ul_cell_num, ul_cell_index;
    uint32_t ul_cost;                               // cost number with highest priority
    rfc_ces_s *pst_ces1, *pst_ces2;
    rfc_phase_set_s *pst_acl_commit = g_ix_rfc_table_base->pst_acl_commit;
    rfc_phase_data_s *pst_acl_phase_data = &g_ix_rfc_table_base->st_acl_phase_data;
    rule_comit_t *pst_filter_index = &g_ix_rfc_table_base->commit;
    uint32_t i, j, m;
    pst_node1 = &pst_prev_phase_nodes[0];
    pst_node2 = &pst_prev_phase_nodes[1];

    // alloc memory for Phase2 cell
    ul_cell_num = pst_node1->ul_eq_id * pst_node2->ul_eq_id;
    
    // Initialize phase0_Nodes[com]->listEqs
    if (rfc_noder_init(pst_acl_commit, pst_acl_phase_data, pst_phase_nodes, ul_cell_num) != ACL_OK)
    {
        MC_PRINT("  cell alloc failure in table %u, need is %u, free is %u\n", 12, ul_cell_num, pst_acl_commit->ul_free_cell_num);
        return ACL_CELL_ERROR;
    }
    
    // generate phase1_Nodes[com]->listEqs
    pst_ces1 = &pst_acl_phase_data->st_ces[pst_node1->ul_ces_index];
    pst_ces2 = &pst_acl_phase_data->st_ces[pst_node2->ul_ces_index];
    ul_cell_index = 0;
    
    for (i = 0; i < pst_node1->ul_eq_id; i++)
    {
        pud_bmp1 = &pst_acl_phase_data->ud_cbm_data[pst_ces1[i].ul_cbm_index];
        
        for (j = 0; j < pst_node2->ul_eq_id; j++)
        {
            pud_bmp2 = &pst_acl_phase_data->ud_cbm_data[pst_ces2[j].ul_cbm_index];
            
            for (m = 0; m < pst_acl_phase_data->u_real_size; m++)
                ud_bmp[m] = pud_bmp1[m] & pud_bmp2[m];
                
            ul_cost = rfc_get_rule_cost(ud_bmp);
            
            if (ul_cost == CHUNK_TOTAL_SZIE)
                pst_phase_nodes->pul_cell_mdu[ul_cell_index++] = CHUNK_TOTAL_SZIE;
                
            else
                pst_phase_nodes->pul_cell_mdu[ul_cell_index++] = pst_filter_index[u_ifgroup].rule_status[ul_cost];
        }
    }
    
    return ACL_OK;
}

int rfc_phase_commit(void)
{
    int i, j, result;
    uint16_t u_ifgroup;

    rfc_phase_set_s     *pst_acl_commit = g_ix_rfc_table_base->pst_acl_commit;
    rfc_phase_set_s     *pst_acl_temp = NULL;

    rule_set_t          *pst_filter_set = g_ix_rfc_table_base->bak_rs;
    rule_set_t          *pst_backup_set = NULL;

    rule_comit_t        *pst_filter_index = &g_ix_rfc_table_base->commit;


    pst_filter_index->rule_num = 0;


    for (i = 0; i < CHUNK_TOTAL_SZIE; i++)
    {
        if (pst_filter_set->rule[i].u_state == ACL_ENABLE)
        {
            u_ifgroup = pst_filter_set->rule[i].u_ifgroup;
            pst_filter_index->rule_status[pst_filter_index->rule_num++] = i;
        }
    }
    

    if (pst_filter_index->rule_num > 0)
    {
        if (pst_filter_index->changed == ACL_CHANGED)
        {
            rfc_phase_init(0);

            if ((result = rfc_phase0(pst_acl_commit, pst_filter_set, pst_filter_index)) != ACL_OK)
            {
                return result;
            }
            printf_cbm(g_ix_rfc_table_base->st_acl_phase_data.ud_cbm_data, 16);
            if ((result = rfc_phase1(&pst_acl_commit->st_phase_nodes[0],
                                     &pst_acl_commit->st_phase_nodes[7], 3, 7)) != ACL_OK)
            {
                return result;
            }

            if ((result = rfc_phase2(&pst_acl_commit->st_phase_nodes[6],
                                     &pst_acl_commit->st_phase_nodes[10], 10)) != ACL_OK)
            {
                return result;
            }

            if ((result = rfc_phase3(&pst_acl_commit->st_phase_nodes[10],
                                     &pst_acl_commit->st_phase_nodes[12], 0)) != ACL_OK)
            {
                return result;
            }

            pst_acl_commit->ul_enabled = ENABLE;
            pst_acl_temp = g_ix_rfc_table_base->pst_acl_ptr_mdu;

            g_ix_rfc_table_base->pst_acl_ptr_md = pst_filter_set;

            /** removed by tsihang below */
            /** MPP_ASSIGN_ARR(g_ix_rfc_table_base->pst_acl_ptr, [i], rfc_phase_set_s *, pst_acl_commit); */
            /** below instead */

            g_ix_rfc_table_base->pst_acl_ptr_mdu = (rfc_phase_set_s *)pst_acl_commit;
            g_ix_rfc_table_base->pst_acl_ptr_md  = (rfc_phase_set_s *) pst_acl_commit;

            pst_acl_commit = pst_acl_temp;
            g_ix_rfc_table_base->pst_acl_commit = &pst_acl_commit;

            pst_filter_index->changed = ACL_NOT_CHANGED;
        }

        else
        {
            g_ix_rfc_table_base->pst_acl_ptr_md = pst_filter_set;
        }
    }
    else
        {
             g_ix_rfc_table_base->pst_acl_ptr_md = pst_filter_set;
             g_ix_rfc_table_base->pst_acl_ptr_mdu->ul_enabled = 0;
        }


    // add spinlock
    pst_backup_set = g_ix_rfc_table_base->main_rs;
    g_ix_rfc_table_base->bak_rs = g_ix_rfc_table_base->main_rs;
    g_ix_rfc_table_base->main_rs = pst_filter_set;

    pst_backup_set->rule_num = g_ix_rfc_table_base->main_rs->rule_num;
    
    // assign the main set to backup set
    for (i = 0; i < CHUNK_TOTAL_SZIE; i++)
    {
        if (pst_filter_set->rule[i].b_newitem == ACL_NEW)
        {
            pst_filter_set->rule[i].b_newitem = ACL_NOT_NEW;

            if (pst_filter_set->rule[i].u_state == ACL_DISABLE)
            {
                pst_filter_set->rule[i].u_state = ACL_UNSET;
            }
            
            for (j = 0; j < RFC_FILTER_SIZE_64 - 1; j++)
            {
                pst_backup_set->rule[i].rule[j] = pst_filter_set->rule[i].rule[j];
            }
            
            // assign the statistics
            pst_filter_set->rule[i].ud_statistics += pst_backup_set->rule[i].ud_statistics;       // need atmic operator
            pst_backup_set->rule[i].ud_statistics = 0;
        }
    }

    return ACL_OK;
}



int rfc_phase_move(uint16_t u_start, int32_t l_num)
{
    int i, j, k, count = 0, index = l_num;
    rule_set_t    *pst_filter_set   = g_ix_rfc_table_base->bak_rs;
    rule_comit_t  *pst_filter_index = &g_ix_rfc_table_base->commit;
    
    if (l_num > 0)
    {
        // find enough position
        for (i = u_start; i < CHUNK_TOTAL_SZIE; i++)
            if (pst_filter_set->rule[i].u_state == ACL_UNSET)
            {
                if (!--index)
                    break;
            }
            
            else
                count++;
                
        if (index)
            // no enough position
            return ACL_ERROR;
            
        if (count)
        {
            // move item, from back to front
            for (j = i - 1; j >= u_start; j--)
                if (pst_filter_set->rule[i].u_state == ACL_UNSET)
                {
                    for (k = 0; k < RFC_FILTER_SIZE_64; k++)
                        pst_filter_set->rule[i].rule[k] = pst_filter_set->rule[j].rule[k];
                        
                    pst_filter_set->rule[j].u_state = ACL_UNSET;
                    pst_filter_set->rule[j].b_newitem = ACL_NEW;
                    pst_filter_set->rule[i].u_tagid = i;
                    pst_filter_set->rule[i].b_newitem = ACL_NEW;
                    pst_filter_index[pst_filter_set->rule[i].u_ifgroup].changed = ACL_CHANGED;
                    i--;
                    
                    if (!--count)
                        break;
                }
        }
    }
    
    else
    {
        // find enough position
        for (i = u_start; i >= 0; i--)
            if (pst_filter_set->rule[i].u_state == ACL_UNSET)
            {
                if (!++index)
                    break;
            }
            
            else
                count++;
                
        if (index)
            // no enough position
            return ACL_ERROR;
            
        if (count)
        {
            // move item, from back to front
            for (j = i + 1; j <= u_start; j++)
                if (pst_filter_set->rule[i].u_state == ACL_UNSET)
                {
                    for (k = 0; k < RFC_FILTER_SIZE_64; k++)
                        pst_filter_set->rule[i].rule[k] = pst_filter_set->rule[j].rule[k];
                        
                    pst_filter_set->rule[j].u_state = ACL_UNSET;
                    pst_filter_set->rule[j].b_newitem = ACL_NEW;
                    pst_filter_set->rule[i].u_tagid = i;
                    pst_filter_set->rule[i].b_newitem = ACL_NEW;
                    pst_filter_index[pst_filter_set->rule[i].u_ifgroup].changed = ACL_CHANGED;
                    i++;
                    
                    if (!--count)
                        break;
                }
        }
    }
    
    return ACL_OK;
}

int rfc_init(void)
{
    int i;

    g_ix_rfc_table_base->main_rs = g_ix_rfc_table_base->rule_set;
    g_ix_rfc_table_base->bak_rs = g_ix_rfc_table_base->rule_set + 1;
    rfc_init_default_rule(&g_ix_rfc_table_base->main_rs->rule[CHUNK_TOTAL_SZIE]);
    rfc_init_default_rule(&g_ix_rfc_table_base->bak_rs->rule[CHUNK_TOTAL_SZIE]);


    for (i = 0; i < CHUNK_TOTAL_SZIE + 1; i ++)
    {
        g_ix_rfc_table_base->main_rs->rule[i].u_state = ACL_UNSET;
        g_ix_rfc_table_base->main_rs->rule[i].b_newitem = ACL_NOT_NEW;
        g_ix_rfc_table_base->bak_rs->rule[i].u_state = ACL_UNSET;
        g_ix_rfc_table_base->bak_rs->rule[i].b_newitem = ACL_NOT_NEW;
    }
    
         g_ix_rfc_table_base->pst_acl_ptr_md = g_ix_rfc_table_base->main_rs;
        

        g_ix_rfc_table_base->commit.rule_num = 0;


        g_ix_rfc_table_base->st_phase.ul_enabled = 0;
        g_ix_rfc_table_base->pst_acl_ptr_mdu = &g_ix_rfc_table_base->st_phase + i;
        g_ix_rfc_table_base->pst_acl_ptr_md = &g_ix_rfc_table_base->st_phase + i;

    
        g_ix_rfc_table_base->pst_acl_commit = &g_ix_rfc_table_base->st_phase + MPP_MAX_ACL_NUM - 1;
    
    return ACL_OK;
}



