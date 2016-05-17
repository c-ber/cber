/****************************************************************************** 

版权所有（C），2001-2015年，恒扬科技股份有限公司

******************************************************************************
文件名:       rule.h
编码格式:     ASCII
作者:         chenbin
创建:         May 10, 2016
历史:
    1.日期    :May 10, 2016
      作者    :cb
      修改    :Created file
******************************************************************************/
#ifndef RULE_H_
#define RULE_H_

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <arpa/inet.h>
#include "pub_com.h"
#include <stdint.h>

typedef unsigned char IP6_T[16]; /* 128bit ipv6 address */

#define FS_PORT_MAX 48
#define  PORT_MAX_NUM          65535

#define PAYLOAD_NUM            32    /* payload max number for FS9000 I and FS9000 IFC */
#define V4MASK_RULE_NUM        253   /* ipv4 mask 5-tuple rule max number for FS9000 I */
#define V6MASK_RULE_NUM        125   /* ipv6 mask 5-tuple rule max number for FS9000 I */
#define STR_RULE_NUM           1024   /* string rule max number for FS9000 I and FS9000 IFC */
#define V4_EXTEND_RULE_NUM     766   /* ipv4 extend rule number for FS9000 I */
#define V6_EXTEND_RULE_NUM     254   /* ipv4 extend rule number for FS9000 I*/
#define IF_RULE_NUM            253   /* interface rule max number for FS9000 I */

/*for fs9000 IFC*/
#define V4_EXTEND_IFC_RULE_NUM 1500  /* ipv4 extend rule rule max number for FS9000 IFC */
#define V4MASK_IFC_RULE_NUM    100   /* ipv4 mask 5-tuple rule max number for FS9000 IFC */
#define V4_MASK_6TUP_RULE_NUM  100   /* ipv4 mask 6-tuple rule max number for FS9000 IFC */

/* for fs9000 IV */
#define V4_MASK_7TUP_RULE_NUM  253   /* ipv4 mask 7-tuple rule max number for FS9000 IV */
#define V6_MASK_7TUP_RULE_NUM  125   /* ipv6 mask 7-tuple rule max number for FS9000 IV */


/*for fs9000 II*/
#define PAYLENII_MAX_NUM        2000
#define IIFGRPII_MAX_NUM        32
#define V4_STANDARD_RULE_NUM    1600000  /* ipv4 standard rule number for FS9000 II */
#define V6_STANDARD_RULE_NUM    400000   /* ipv6 standard rule number for FS9000 II */
#define V4_EXTEND_II_RULE_NUM   128   /* ipv4 extend rule number for FS9000 II */
#define V6_EXTEND_II_RULE_NUM   1000    /* ipv4 extend rule number for FS9000 II*/
#define STR_II_RULE_NUM         32768    /* string rule max number for FS9000 II */
#define V4COMP_RULE_NUM         1024     /* ipv4 compsite rule max number for FS9000 II */
#define V6COMP_RULE_NUM         1024     /* ipv6 compsite rule max number for FS9000 II */
#define PACKET_TRUN_LEN         255      /* packet truncate for fs9000 II */
#define IPV6_BITMASK_NUM        128      /* the number of ipv6 bit mask*/
#define MASK_9TUP_II_RULE_NUM   131072   /* mask 9tup rule number for FS9000 II */

#define RULE_NUM_IN_PAGE        20        /* the number of rule in same page */
#define V6_EXTEND_RULE_IN_PAGE  6         /* the number of rule in same page */
#define INET6_ADDRSTRLEN 46

#pragma pack(1)


#endif /* RULE_H_ */
