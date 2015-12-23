/****************************************************************************** 

版权所有（C），2001-2015年，恒扬科技股份有限公司

******************************************************************************
文件名:       hash_alg.h
编码格式:     ASCII
作者:         chenbin
创建:         Oct 20, 2015
历史:
    1.日期    :Oct 20, 2015
      作者    :cb
      修改    :Created file
******************************************************************************/
#ifndef HASH_ALG_H_
#define HASH_ALG_H_

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>


int semp_hash_data64(uint64_t data, int mask);

#endif /* HASH_ALG_H_ */
