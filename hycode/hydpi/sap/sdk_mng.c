/****************************************************************************** 

版权所有（C），2001-2015年，恒扬科技股份有限公司

******************************************************************************
文件名:       sdk_mng.c
编码格式:     ASCII
作者:         chenbin
创建:         Aug 31, 2016
历史:
    1.日期    :Aug 31, 2016
      作者    :cb
      修改    :Created file
******************************************************************************/

#include "sdk_mng.h"

/*收包端收到报文后，判断是否可以存
 * 处理包端要不断轮询获取资源，可能导致一直占用（暂不考虑）*/
dpi_code_t work_run(int pid)
{
    dpi_code_t   ret    = DPI_OK;
    pkt_buff_t   pb     = {};
    dpi_result_t rlt    = {};

    dpi_shm_data_init(KYE_PKT_BUF01 + pid, sizeof(pb));

    dpi_encap_init();

    while(1)
    {
        ret = dpi_sdk_shm_data_get(KYE_PKT_BUF01 + pid, &pb,
                                   (size_t)(&( ((pkt_buff_t*)0)->ws )),
                                   sizeof(pb));
        if( ret != DPI_OK )
        {
            continue;
        }

        if( WORK_STATUS_USED == pb.ws )
        {
            //调用sdk识别

            //调用识别日志模块
            dpi_identity_result_process(&rlt);
        }
    }

    return DPI_OK;
}



typedef struct fpa_blk
{
    uint64_t low_addr;
    uint64_t hig_addr;
}fpa_blk_t;

fpa_blk_t dpi_fpa[5] = {
        {0, 0},
        {0, 0},
        {0, 0},
        {0, 0},
        {0, 0}
};

void test_fpa_block_low_addr( int block_id)
{
    uint64_t a = 1;
    uint8_t *pret = NULL;
    uint64_t *tmp = &a;

    pret = (uint8_t *)malloc(256);

    *tmp = (uint64_t)pret;

    dpi_fpa[block_id].low_addr = *tmp;
    printf("addr1 = %#lx, addr2 = %p \n", dpi_fpa[block_id].low_addr, pret);

    dpi_fpa[block_id].hig_addr = dpi_fpa[block_id].low_addr + 1024*1024*1024;

}



int main(int argc, char **argv)
{
    test_fpa_block_low_addr(0);
    if(argc != 2)
    {
        printf("Error:Please input only one param.\n");
        exit(-1);
    }

    int pid = atoi(argv[1]);
    if(pid < 0 || pid >= PROC_MAX_NUM)
    {
        printf("The range of sdk manager process id  between 0 to %d\n",PROC_MAX_NUM-1);
        exit(-1);
    }


    work_run(pid);

    printf("hello, world!\n");
}
