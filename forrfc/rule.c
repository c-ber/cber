/****************************************************************************** 

版权所有（C），2001-2015年，恒扬科技股份有限公司

******************************************************************************
文件名:       rule.c
编码格式:     ASCII
作者:         chenbin
创建:         May 10, 2016
历史:
    1.日期    :May 10, 2016
      作者    :cb
      修改    :Created file
******************************************************************************/

#include "rule.h"


const char *actStr[ACT_NUM] =
{
    "permit",
    "forward",
    "drop",
    "redirect",
    "session",
    "truncate",
    "sample",
    "setlink",
    "direction"

};

const char *protoStr[PROTO_NUM] =
{
    "tcp",
    "udp",
    "icmp",
    "igmp",
    "sctp",
    "all",
    "any"
};

const uint8_t protoNum[PROTO_NUM] =
{
    0x01,       /* 1, */
    0x02,       /* 2, */
    0x04,       /* 6, */
    0x08,       /* 17, */
    0x10,       /* 132, */
    0x1f,       /* 0xff, */
    0x0,       /* 0x0, */
};

const char *tcpflagStr[TCPFLAG_NUM] =
{
    "fin",
    "syn",
    "rst",
    "psh",
    "ack",
    "urg",
    "all"
};

const uint8_t tcpflagNum[TCPFLAG_NUM] =
{
    0x1,
    0x2,
    0x4,
    0x8,
    0x10,
    0x20,
    0x3f
};

/*===============================静态变量定义================================*/

static const uint8_t s_ucEndMask[]     = { 0xf0, 0xf };/*掩码标志*/
static const uint8_t s_ucBitOffset[]   = { 4   , 0   };/*字段偏移位数，用于取bcd码的高四位和低四位*/

#define  IPV4_MASK_RAGE     "255.255.255.255"
#define  IPV4_BIT_NUM       32
#define  MAX_BCD_LEN        1024 /*用于缓存bcd码的长度*/


mp_code_t checkFormat(const char *str)
{
    if (str == NULL)
    {
        return MP_FAIL;
    }

    while (*str != '\0')
    {
        if (*str < '0' || *str > '9')
        {
            if (*str == ',' || *str == '-')
            {
                str++;
                continue;
            }
            else
            {
                return MP_FAIL;
            }
        }
        str++;
    }

    return MP_OK;
}

mp_code_t parsePbmp(char *str, semp_pbmp_t *pbmp, uint8_t *cnt, int startPort, int maxPort)
{
    char *token = NULL;
    int start = 0;
    int end = 0;
    int i = 0;
    char pos = 0;

    SEMP_PBMP_CLEAR(pbmp);

    *cnt = 0;
    if (checkFormat(str))
    {
        return MP_FAIL;
    }

    if (startPort != 0 && startPort != 1)
    {
        return MP_FAIL;
    }

    if (maxPort > FS_PORT_MAX)
    {
        return MP_FAIL;
    }

    token = strtok(str, ",");
    while (token != NULL)
    {
        if ((pos = strstr(token, "-") != NULL))
        {
            if (sscanf(token, "%d-%d", &start, &end) != 2)
            {
                return MP_FAIL;
            }
            else
            {
                for (i = start; i <= end; i++)
                {
                    if ((i >= (maxPort + startPort)) || (i < (0 + startPort)))
                    {
                        return MP_FAIL;
                    }
                    else
                    {
                        SEMP_PBMP_PORT_ADD(pbmp, i - startPort);
                        *cnt = *cnt + 1;
                    }
                }
            }
        }
        else
        {
            if (sscanf(token, "%d", &i) != 1)
            {
                return MP_FAIL;
            }
            else
            {
                if (i >= (maxPort + startPort) || i < (0 + startPort))
                {
                    return MP_FAIL;
                }
                else
                {
                    SEMP_PBMP_PORT_ADD(pbmp, i - startPort);
                    *cnt = *cnt + 1;
                }
            }
        }

        token = strtok(NULL, ",");
    }

    return MP_OK;
}

mp_code_t pbmp2Desc(semp_pbmp_t *pMask, char *desc, int len, int start)
{
    int i = 0, j = 0;
    int arry[FS_PORT_MAX + 1] = {0};
    int arrayMax = FS_PORT_MAX;

    if (pMask == NULL || desc == NULL || len <= 2)
    {
        return MP_FAIL;
    }

    if (start != 0 && start != 1)
    {
        return MP_FAIL;
    }

    memset(desc, 0, len);

    if (SEMP_PBMP_IS_NULL(pMask))
    {
        desc[0] = '\0';
        return MP_OK;
    }

    memset(arry, 0x00, sizeof(arry));
    for (i = 0; i < arrayMax; i++)
    {
        if (SEMP_PBMP_MEMBER(pMask, i))
        {
            arry[i] = 1;
        }
        else
        {
            arry[i] = 0;
        }
    }

    i = 0;
    /*convert to string*/
    while (1)
    {
        if (j >= arrayMax)
        {
            if (arry[i] == 0)
            {
                break;
            }
            else if (arry[j] != 0)
            {
                if (i == j - 1)
                {
                    snprintf((desc + strlen(desc)), (len - strlen(desc)), "%d,", i + start);
                }
                else
                {
                    snprintf((desc + strlen(desc)), (len - strlen(desc)), "%d-%d,", i + start, j - 1 + start);
                }
                break;
            }
        }

        if (arry[i] == 0)
        {
            i++;
            j++;
            continue;
        }

        /*loop until no 1*/
        if (arry[j] != 0)
        {
            j++;
            continue;
        }

        if (i == j - 1)
        {
            snprintf((desc + strlen(desc)), (len - strlen(desc)), "%d,", i + start);
        }
        else
        {
            snprintf((desc + strlen(desc)), (len - strlen(desc)), "%d-%d,", i + start, j - 1 + start);
        }
        i = j;
    }

    desc[strlen(desc) - 1] = 0;
    return MP_OK;
}

/*****************************************************************************
 Prototype    : str2action
 Description  : convert action string to action number
 Input        : char *pString
                uint8_t *action
 Output       : None
 Return Value : mp_code_t
 Calls        :
 Called By    :

  History        :
  1.Date         : 2013/5/10
    Author       : chenli
    Modification : Created function

*****************************************************************************/
mp_code_t str2action( char *pString, uint8_t *action )
{
    int i = 0;

    if ((pString == NULL) || (action == NULL))
    {
        return MP_FAIL;
    }

    for (i = ACT_NULL; i < ACT_NUM ; i++)
    {
        if (!strcmp(pString, actStr[i]))
        {
            break;
        }
    }

    if (i >= ACT_NUM)
    {
        return MP_FAIL;
    }

    *action = i;
    return MP_OK;
}

/*****************************************************************************
 Prototype    : action2str
 Description  : convert action value to string
 Input        : uint8_t action
 Output       : None
 Return Value : char *
 Calls        :
 Called By    :

  History        :
  1.Date         : 2013/5/13
    Author       : huxiaojuan
    Modification : Created function

*****************************************************************************/
const char * action2str( uint8_t action )
{
    if (action < ACT_NULL || action >= ACT_NUM)
    {
        return "unknown";
    }

    return actStr[action];
}

/*****************************************************************************
 Prototype    : str2proto
 Description  : convert protocol string to protocol number
 Input        : char *pString
                uint8_t *proto
 Output       : None
 Return Value : mp_code_t
 Calls        :
 Called By    :

  History        :
  1.Date         : 2013/5/10
    Author       : chenli
    Modification : Created function

*****************************************************************************/
mp_code_t str2proto( char *pString, uint8_t *proto )
{
    int i = 0;

    if ((pString == NULL) || (proto == NULL))
    {
        return MP_FAIL;
    }

    for (i = 0; i < PROTO_NUM ; i++)
    {
        if (!strcmp(pString, protoStr[i]))
        {
            break;
        }
    }

    if (i >= PROTO_NUM)
    {
        return MP_FAIL;
    }

    *proto = protoNum[i];
    return MP_OK;
}

/*****************************************************************************
 Prototype    : proto2str
 Description  : convert protocol value to string
 Input        : uint8_t proto
 Output       : None
 Return Value : char *
 Calls        :
 Called By    :

  History        :
  1.Date         : 2013/5/13
    Author       : huxiaojuan
    Modification : Created function

*****************************************************************************/
const char *proto2str( uint8_t proto )
{
    int i = 0;
    for (i = 0; i < PROTO_NUM ; i++)
    {
        if (proto == protoNum[i])
        {
            break;
        }
    }

    if (i >= PROTO_NUM)
    {
        return "unknown";
    }

    return protoStr[i];
}

/*****************************************************************************
 Prototype    : parseStr2NumMask
 Description  : convert P/M format string to number and mask for common
 Input        : char *pString
                uint32_t *port
                uint32_t *mask
 Output       : None
 Return Value : mp_code_t
 Calls        :
 Called By    :

  History        :
  1.Date         : 2014/04/07
    Author       : huhejuan
    Modification : Created function

*****************************************************************************/
mp_code_t parseStr2NumMask( char *pString, uint32_t *num, uint32_t *mask )
{
    char *pDelim = NULL;
    char tmp = 0;

    if (pString == NULL || num == NULL || mask == NULL)
    {
        return MP_FAIL;
    }

    if ((pDelim = strchr(pString, '/')) == NULL)  /* no mask */
    {
        *mask = -1;
        *num = strtoul(pString, NULL, 0);
        return MP_OK;
    }

    tmp = *pDelim;
    *pDelim = 0;
    *num = strtoul(pString, NULL, 0);
    *mask = strtoul(pDelim + 1, NULL, 0);
    *pDelim = tmp;
    return MP_OK;
}

/*****************************************************************************
 Prototype    : str2ipv4Mask
 Description  : convert A.B.C.D/A.B.C.D format ip and mask string to  separ-
                ate ip and mask
 Input        : char *pString
                unsigned int *ip
                unsigned int *mask
 Output       : None
 Return Value : mp_code_t
 Calls        :
 Called By    :

  History        :
  1.Date         : 2013/5/10
    Author       : chenli
    Modification : Created function

*****************************************************************************/
mp_code_t str2ipv4Mask( char *pString, uint32_t *ip, uint32_t *mask )
{
    char *pDelim = NULL;
    uint32_t inetMaskAddr = 0;
    uint32_t bitNum = 0;
    char tmp = 0;

    if (pString == NULL || ip == NULL || mask == NULL)
    {
        return MP_FAIL;
    }

    if (!strcmp(pString, "*"))
    {
        *ip = *mask = 0;
        return MP_OK;
    }

    if ((pDelim = strchr(pString, '/')) == NULL)    /* no mask */
    {
        *mask = -1;
        *ip = inet_addr(pString);
        return MP_OK;
    }

    tmp = *pDelim;
    *pDelim = 0;
    *ip = inet_addr(pString);

    if ((strchr(pDelim + 1, '.')) == NULL)  /* A.B.C.D/M */
    {
        inetMaskAddr = inet_addr(IPV4_MASK_RAGE);
        bitNum = strtoul(pDelim + 1, NULL, 0);
        if (bitNum == 0)
        {
            *mask  = 0;
        }
        else
        {
            *mask  = inetMaskAddr << (IPV4_BIT_NUM - bitNum);
        }
    }
    else  /* A.B.C.D/A.B.C.D */
    {
        *mask = inet_addr(pDelim + 1);
    }

    *pDelim = tmp;
    return MP_OK;
}

mp_code_t str2ipv4Range( char *pString, uint32_t *ip, uint32_t *mask )
{
    char *pDelim = NULL;
    char tmp = 0;

    if (pString == NULL || ip == NULL || mask == NULL)
    {
        return MP_FAIL;
    }

    if (!strcmp(pString, "*"))
    {
        *mask =
        *ip = 0;
        return MP_OK;
    }

    if ((pDelim = strchr(pString, '-')) == NULL)    /* no mask */
    {
        *mask =
        *ip = inet_addr(pString);
        return MP_OK;
    }

    tmp = *pDelim;
    *pDelim = 0;
    *ip = inet_addr(pString);
    *mask = inet_addr(pDelim + 1);

    *pDelim = tmp;

    if (*ip > *mask)
    {
        return MP_FAIL;
    }

    return MP_OK;
}

mp_code_t str2ipv4Num( char *pString, uint32_t *ip, uint32_t *num )
{
    char *pDelim = NULL;
    char tmp = 0;

    if (pString == NULL || ip == NULL || num == NULL)
    {
        return MP_FAIL;
    }

    if (!strcmp(pString, "*"))
    {
        *ip = 0;
        *num = 1;
        return MP_OK;
    }

    if ((pDelim = strchr(pString, '+')) == NULL)    /* no mask */
    {
        *ip = inet_addr(pString);
        *num = 1;
        return MP_OK;
    }

    tmp = *pDelim;
    *pDelim = 0;
    *ip = inet_addr(pString);
    *num = strtoul(pDelim + 1, NULL, 0);

    *pDelim = tmp;

    if (*num == 0)
    {
        return MP_FAIL;
    }

    return MP_OK;
}

/*****************************************************************************
 Prototype    : str2portMask
 Description  : convert P/M format port and mask string to port and mask
 Input        : char *pString
                uint16_t *port
                uint16_t *mask
 Output       : None
 Return Value : mp_code_t
 Calls        :
 Called By    :

  History        :
  1.Date         : 2013/5/10
    Author       : chenli
    Modification : Created function

*****************************************************************************/
mp_code_t str2portMask( char *pString, uint16_t *port, uint16_t *mask )
{
    char *pDelim = NULL;
    char tmp = 0;

    if (pString == NULL || port == NULL || mask == NULL)
    {
        return MP_FAIL;
    }

    if (!strcmp(pString, "*"))
    {
        *port = *mask = 0;
        return MP_OK;
    }

    if ((pDelim = strchr(pString, '/')) == NULL)  /* no mask */
    {
        *mask = 0xFFFF;
        *port = strtoul(pString, NULL, 0);
        return MP_OK;
    }

    tmp = *pDelim;
    *pDelim = 0;
    *port = strtoul(pString, NULL, 0);
    *mask = strtoul(pDelim + 1, NULL, 0);
    *pDelim = tmp;
    return MP_OK;
}


/*****************************************************************************
 Prototype    : str2ipv6Mask
 Description  : convert X:X::X:X/X:X::X:X format ip and mask string to separ-
                ate ip and mask
 Input        : char *str
                IP6_T ip
                IP6_T mask
 Output       : None
 Return Value : mp_code_t
 Calls        :
 Called By    :

  History        :
  1.Date         : 2013/5/10
    Author       : huxiaojuan
    Modification : Created function
*****************************************************************************/
mp_code_t str2ipv6Mask( char *str, IP6_T ip, IP6_T mask ) /* parasoft-suppress CODSTA-15 "IP_T is a struct type" */
{
    char *pDelim = NULL;
    IP6_T inetMaskAddr;
    uint32_t bitNum = 0;
    uint32_t div = 0, mod = 0, i = 0;
    char tmp = 0;

    if (str == NULL || ip == NULL || mask == NULL)
    {
        return MP_FAIL;
    }

    if (!strcmp(str, "*"))
    {
        memset(ip, 0, sizeof(IP6_T));
        memset(mask, 0, sizeof(IP6_T));
        return MP_OK;
    }

    if ((pDelim = strstr(str, "/")) == NULL)    /* X:X::X:X */
    {
        if (inet_pton(AF_INET6, str, ip) <= 0)
        {
            return MP_FAIL;
        }

        memset(mask, 0xff, sizeof(IP6_T));
        return MP_OK;
    }

    tmp = *pDelim;
    *pDelim = 0;
    if (inet_pton(AF_INET6, str, ip) <= 0)
    {
        return MP_FAIL;
    }

    if ((strchr(pDelim + 1, ':')) == NULL)  /* X:X::X:X/M */
    {
        bitNum = strtoul(pDelim + 1, NULL, 0);
        memset(inetMaskAddr, 0xff, sizeof(IP6_T));
        div = bitNum / 8; /* find IP6_T array */
        mod = bitNum % 8; /* find bit in IP6_T array */
        for (i = 0; i < (16 - div); i++)
        {
            if ((mod != 0) && ((16 - i - 1) == div))
            {
                inetMaskAddr[div] = inetMaskAddr[div] << (8 - mod);
                break;
            }

            inetMaskAddr[16 - i - 1] = 0;
        }

        memcpy(mask, inetMaskAddr, sizeof(IP6_T));
    }
    else /* X:X::X:X/X:X::X:X */
    {
        if (inet_pton(AF_INET6, pDelim + 1, mask) <= 0)
        {
            return MP_FAIL;
        }
    }

    *pDelim = tmp;
    return MP_OK;
}

mp_code_t str2ipv6Range( char *str, IP6_T ip, IP6_T mask ) /* parasoft-suppress CODSTA-15 "IP_T is a struct type" */
{
    char *pDelim = NULL;
    char tmp = 0;
    int i = 0;

    if (str == NULL || ip == NULL || mask == NULL)
    {
        return MP_FAIL;
    }

    if (!strcmp(str, "*"))
    {
        memset(ip, 0, sizeof(IP6_T));
        memset(mask, 0, sizeof(IP6_T));
        return MP_OK;
    }

    if ((pDelim = strstr(str, "-")) == NULL)    /* X:X::X:X */
    {
        if (inet_pton(AF_INET6, str, ip) <= 0)
        {
            return MP_FAIL;
        }

        if (inet_pton(AF_INET6, str, mask) <= 0)
        {
            return MP_FAIL;
        }

        return MP_OK;
    }

    tmp = *pDelim;
    *pDelim = 0;
    if (inet_pton(AF_INET6, str, ip) <= 0)
    {
        return MP_FAIL;
    }

    /* X:X::X:X-X:X::X:X */
    if (inet_pton(AF_INET6, pDelim + 1, mask) <= 0)
    {
        return MP_FAIL;
    }

    *pDelim = tmp;

    /* check ip */
    for (i = 0; i < 15; i++)
    {
        if (ip[i] != mask[i])
        {
            return MP_FAIL;
        }
    }

    if (ip[i] > mask[i])
    {
        return MP_FAIL;
    }


    return MP_OK;
}


/*****************************************************************************
 Prototype    : str2tcpflag
 Description  : convert string to uint8 tcpflag value
 Input        : char *str
                uint8_t *tcpflag : access tpcflag value
 Output       : None
 Return Value : mp_code_t
 Calls        :
 Called By    :

  History        :
  1.Date         : 2013/5/16
    Author       : huxiaojuan
    Modification : Created function

*****************************************************************************/
mp_code_t str2tcpflag( char *str, uint8_t *tcpflag )
{
    int i = 0;
    uint8_t tmp = 0;
    char *token = NULL, *sep = NULL;
    char strTmp[256] = {0};

    if ((str == NULL) || (tcpflag == NULL))
    {
        return MP_FAIL;
    }

    memset(strTmp, 0, sizeof(strTmp));
    strncpy(strTmp, str, strlen(str) + 1);

    if (!strcmp(strTmp, "any"))
    {
        *tcpflag = 0;
        return MP_OK;
    }

    if (strchr(strTmp, ',') == NULL)
    {
        for (i = TCPFLAG_FIN; i < TCPFLAG_NUM; i++)
        {
            if (!strcmp(strTmp, tcpflagStr[i]))
            {
                tmp = tcpflagNum[i];
            }
        }
    }
    else
    {
        sep = strTmp;
        while ((token = strsep(&sep, ",")) != NULL)
        {
            for (i = TCPFLAG_FIN; i < TCPFLAG_ALL; i++)
            {
                if (!strcmp(token, tcpflagStr[i]))
                {
                    tmp |= tcpflagNum[i];
                }
            }
        }
    }

    if (tmp == 0)
    {
        return MP_FAIL;
    }

    *tcpflag = tmp;
    return MP_OK;
}

/*****************************************************************************
 Prototype    : tcpflag2str
 Description  : convert uint8 tcpflag to string
 Input        : uint8_t tcpflag
                char *str : access tcpflag string
 Output       : None
 Return Value : mp_code_t
 Calls        :
 Called By    :

  History        :
  1.Date         : 2013/5/16
    Author       : huxiaojuan
    Modification : Created function

*****************************************************************************/
mp_code_t tcpflag2str( uint8_t tcpflag, char *str )
{
    int i = 0;
    char strTmp[128] = {0};

    if (str == NULL)
    {
        return MP_FAIL;
    }

    memset(str, 0, strlen(str));
    memset(strTmp, 0x00, sizeof(strTmp));

    if (tcpflag == 0)
    {
        strcpy(str, "any");
        return MP_OK;
    }

    for (i = TCPFLAG_FIN; i < TCPFLAG_ALL; i++)
    {
        if (tcpflag & tcpflagNum[i])
        {
            sprintf(strTmp+strlen(strTmp), "%s,", tcpflagStr[i]);
        }
    }

    strTmp[strlen(strTmp)-1] = 0;
    sprintf(str, "%s", strTmp);
    return MP_OK;
}

/*****************************************************************************
 Prototype    : str2range
 Description  : convert string to range value
 Input        : char *str
                uint16_t *start : start value
                uint16_t *end   : end value
 Output       : None
 Return Value : mp_code_t
 Calls        :
 Called By    :

  History        :
  1.Date         : 2013/5/21
    Author       : huxiaojuan
    Modification : Created function

*****************************************************************************/
mp_code_t str2range( char *str, uint16_t *start, uint16_t *end )
{
    char *pDelim = NULL;
    unsigned short tmpStart = 0;
    unsigned short tmpEnd = 0;

    if ((str == NULL) || (start == NULL) || (end == NULL))
    {
        return MP_FAIL;
    }

    if ((pDelim = strchr(str, '-')) == NULL)
    {
        tmpStart = atoi(str);
        if ((tmpStart < 0) || (tmpStart > 1500))
        {
            return MP_FAIL;
        }

        *start = *end = tmpStart;
        return MP_OK;
    }

    *pDelim = 0;
    tmpStart = atoi(str);
    tmpEnd = atoi(pDelim + 1);
    if ((tmpStart < 0) || (tmpStart > 1500) || (tmpEnd < 0) || (tmpEnd > 1500))
    {
        return MP_FAIL;
    }

    if (tmpStart > tmpEnd)
    {
        return MP_FAIL;
    }


    *start = tmpStart;
    *end = tmpEnd;
    *pDelim = '-';

    return MP_OK;
}

/*****************************************************************************
 Prototype    : range2str
 Description  : convert range value to string
 Input        : uint16_t start : start value
                uint16_t end   : end value
                char *str : output string
 Output       : None
 Return Value : mp_code_t
 Calls        :
 Called By    :

  History        :
  1.Date         : 2013/5/21
    Author       : huxiaojuan
    Modification : Created function

*****************************************************************************/
mp_code_t range2str( uint16_t start, uint16_t end, char *str )
{
    if (str == NULL)
    {
        return MP_FAIL;
    }

    if (start == end)
    {
        sprintf(str, "%d", start);
    }
    else if (start < end)
    {
        sprintf(str, "%d-%d", start, end);
    }
    else
    {
        return MP_FAIL;
    }

    return MP_OK;
}
/*****************************************************************************
 Prototype    : convert protocol string to protocol number
 Description  :
 Input        : char *pString,
                unsigned char *proto
 Output       : None
 Return Value : int
 Calls        :
 Called By    :

  History        :
  1.Date         : 2013/7/17
    Author       : huhejuan
    Modification : Created function

*****************************************************************************/
int proStr2Num( char *pString, unsigned char *proto )
{
    int i = 0;
    unsigned char tmp = 0;
    char *token = NULL, *sep = NULL;
    char strTmp[256] = {0};

    if (pString == NULL || proto == NULL )
    {
        return MP_FAIL;
    }

    memset(strTmp, 0, sizeof(strTmp));
    strcpy(strTmp, pString);

    if (strchr(strTmp, ',') == NULL)
    {
        for (i = PROTO_TCP; i < PROTO_NUM; i++)
        {
            if (!strcmp(strTmp, protoStr[i]))
            {
                tmp = protoNum[i];
            }
        }
    }
    else
    {
        sep = strTmp;
        while ((token = strsep(&sep, ",")) != NULL)
        {
            for (i = PROTO_TCP; i < PROTO_ALL; i++)
            {
                if (!strcmp(token, protoStr[i]))
                {
                    tmp |= protoNum[i];
                }
            }
        }
    }

    if (tmp == 0)
    {
        return -1;
    }

    *proto = tmp;
    return MP_OK;
}

/*****************************************************************************
 Prototype    : str2protoMask8Tup
 Description  : convert protocol string to protocol number and mask
 Input        : None
 Output       : None
 Return Value : int
 Calls        :
 Called By    :

  History        :
  1.Date         : 2013/7/17
    Author       : huhejuan
    Modification : Created function

*****************************************************************************/
mp_code_t str2protoMask(  char *pString, uint8_t *proto, uint8_t * mask )
{
    char *pDelim = NULL;
    mp_code_t ret = MP_OK;

    if (pString == NULL || proto == NULL || mask == NULL)
    {
        return MP_FAIL;
    }

    if (!strcmp(pString, "any"))
    {
        *proto = *mask = 0;
        return 0;
    }

    if ((pDelim = strchr(pString, '/')) == NULL)    /* no mask */
    {
        ret = str2proto(pString, proto);
        if (ret != MP_OK)
        {
            return MP_FAIL;
        }

        *mask = 0xff;

        return MP_OK;
    }

    *pDelim = 0;
    ret = str2proto(pString, proto);
    if (ret != MP_OK)
    {
        return MP_FAIL;
    }
    *mask = strtoul(pDelim + 1, NULL, 0);
    *pDelim = '/';

    return MP_OK;
}

/*****************************************************************************
 Prototype    : str2TcpflagMask
 Description  : congver string to tcpflag and mask
 Input        : char *psring, unstring int tcpflag, unsigned int mask
 Output       : None
 Return Value : int
 Calls        :
 Called By    :

  History        :
  1.Date         : 2013/7/17
    Author       : huhejuan
    Modification : Created function

*****************************************************************************/
mp_code_t str2TcpflagMask( char *pString, uint8_t *tcpflag, uint8_t *mask )
{
     char *pDelim = NULL;
     mp_code_t ret = MP_OK;

     if ((pString == NULL) || (tcpflag == NULL) || (mask == NULL))
     {
        return MP_FAIL;
     }

    if (!strcmp(pString, "any") || !strcmp(pString, "*"))
    {
        *tcpflag = *mask = 0;
        return 0;
    }

    if ((pDelim = strchr(pString, '/')) == NULL)    /* no mask */
    {
        ret = str2tcpflag(pString, tcpflag);
        if (ret != MP_OK)
        {
            return MP_FAIL;
        }

        *mask = 0x3f;
        return MP_OK;
    }

    *pDelim = 0;
   // str2tcpflag(pString, tcpflag);
    *tcpflag = strtoul(pString, NULL, 0);/*add  tcpflag in number and number mask */
    *mask = strtoul(pDelim + 1, NULL, 0);

    *pDelim = '/';
    return MP_OK;
}

/*****************************************************************************
 Prototype    : str2PayLenMask
 Description  : convert payload length string to payload length number and mask
 Input        : char *pString,
                uint8_t *payLenRng,
                uint8_t *payLenRng,
                uint8_t *mask

 Output       : None
 Return Value : mp_code_t
 Calls        :
 Called By    :

  History        :
  1.Date         : 2013/8/11
    Author       : huhejuan
    Modification : Created function

*****************************************************************************/
mp_code_t str2PayLenMask( char *pString, uint16_t *payLenRng, uint16_t *mask )
{
    char *pDelim = NULL;
    char *pStr = NULL;
    uint32_t tmpPayLenRng = 0;
   // uint32_t tmpPayLenMask = 0;

    if (pString == NULL || payLenRng == NULL || mask == NULL)
    {
        return MP_FAIL;
    }

    if (!strcmp(pString, "*"))
    {
        *payLenRng = *mask = 0;
        return MP_OK;
    }

    if ((pDelim = strchr(pString, '/')) == NULL)    /* no mask */
    {
        tmpPayLenRng = strtoul(pString, &pStr, 0);
        if ((tmpPayLenRng < 1) || (tmpPayLenRng > PAYLOAD_NUM ))
        {
            return MP_FAIL;
        }
        *payLenRng = (uint16_t)tmpPayLenRng;
        *mask = 0xffff;
        return MP_OK;
    }
#if 0
    *pDelim = 0;
    tmpPayLenRng = strtoul(pString, &pStr, 0);
    tmpPayLenMask = strtoul(pDelim + 1, &pStr, 0);
    /* check payload length value */
    if ((tmpPayLenRng < 1) || (tmpPayLenRng > PAYLOAD_NUM ))
    {
        return MP_FAIL;
    }
    /* check mask value */
    if ((tmpPayLenMask < 1) || (tmpPayLenMask > 0xffff ))
    {
        return MP_FAIL;
    }
    *payLenRng = (uint16_t)tmpPayLenRng;
    *mask = (uint16_t)tmpPayLenMask;
    *pDelim = '/';
 #endif
    return MP_OK;
}

/*****************************************************************************
 Prototype    : str2PayLenRange
 Description  : convert string to number
 Input        : char *pString ,uint8_t *portStr, uint8_t *portEnd
 Output       : None
 Return Value : mp_code_t
 Calls        :
 Called By    :

  History        :
  1.Date         : 2013/7/29
    Author       : huhejuan
    Modification : Created function

*****************************************************************************/
mp_code_t str2PayLenRange( char *pString ,uint16_t *startNum, uint16_t *endNum )
{
    uint32_t tmpStart = 0;
    uint32_t tmpEnd = 0;
    char *pDelim = NULL;

    if ((pString == NULL) || (startNum == NULL) || (endNum == NULL))
    {
        return MP_FAIL;
    }

    if (!strcmp(pString, "*"))
    {
        *startNum = 0;
        *endNum = -1;
        return MP_OK;
    }

    if ((pDelim = strchr(pString, '-')) == NULL)
    {
        tmpStart = strtoul(pString, NULL, 0);
        if ((tmpStart < 0) || (tmpStart > PAYLENII_MAX_NUM))
        {
            return MP_FAIL;
        }

        *startNum = *endNum = tmpStart;
        return MP_OK;
    }

    *pDelim = 0;
    tmpStart = strtoul(pString, NULL, 0);
    tmpEnd = strtoul(pDelim + 1, NULL, 0);
    if ((tmpStart < 0) || (tmpStart > PAYLENII_MAX_NUM) || (tmpEnd < 0) || (tmpEnd > PAYLENII_MAX_NUM))
    {
        return MP_FAIL;
    }
    if (tmpStart > tmpEnd)
    {
        return MP_FAIL;
    }

    *startNum = (uint16_t)tmpStart;
    *endNum = (uint16_t)tmpEnd;
    *pDelim = '-';

    return MP_OK;
}

/*****************************************************************************
 Prototype    : str2IifGrpRange
 Description  : convert string to number
 Input        : char *pString ,uint8_t *portStr, uint8_t *portEnd
 Output       : None
 Return Value : mp_code_t
 Calls        :
 Called By    :

  History        :
  1.Date         : 2013/7/29
    Author       : huhejuan
    Modification : Created function

*****************************************************************************/
mp_code_t str2IifGrpRange( char *pString ,uint32_t *startNum, uint32_t *endNum )
{
    uint32_t tmpStart = 0;
    uint32_t tmpEnd = 0;
    char *pDelim = NULL;

    if ((pString == NULL) || (startNum == NULL) || (endNum == NULL))
    {
        return MP_FAIL;
    }

    if (!strcmp(pString, "*"))
    {
        *startNum = 0;
        *endNum = -1;
        return MP_OK;
    }

    if ((pDelim = strchr(pString, '-')) == NULL)
    {
        tmpStart = strtoul(pString, NULL, 0);
        if ((tmpStart < 1) || (tmpStart > IIFGRP_MAX))
        {
            return MP_FAIL;
        }

        *startNum = *endNum = tmpStart;
        return MP_OK;
    }

    *pDelim = 0;
    tmpStart = strtoul(pString, NULL, 0);
    tmpEnd = strtoul(pDelim + 1, NULL, 0);
    if ((tmpStart < 1) || (tmpStart > IIFGRP_MAX) || (tmpEnd < 1) || (tmpEnd > IIFGRP_MAX))
    {
        return MP_FAIL;
    }
    if (tmpStart > tmpEnd)
    {
        return MP_FAIL;
    }

    *startNum = tmpStart;
    *endNum = tmpEnd;
    *pDelim = '-';

    return MP_OK;
}


/*****************************************************************************
 Prototype    : str2portRange
 Description  : convert P/M format port and mask string to port and mask
 Input        : char *pString
                uint16_t *port
                uint16_t *mask
 Output       : None
 Return Value : mp_code_t
 Calls        :
 Called By    :

  History        :
  1.Date         : 2013/8/03
    Author       : huhejuan
    Modification : Created function

*****************************************************************************/
mp_code_t str2portRange( char *pString, uint16_t *startNum, uint16_t *endNum )
{
    char *pDelim = NULL;
    uint32_t tmpStart = 0;
    uint32_t tmpEnd = 0;

    if ((pString == NULL) || (startNum == NULL) || (endNum == NULL))
    {
        return MP_FAIL;
    }

    if (!strcmp(pString, "*"))
    {
        *startNum = 0;
        *endNum = -1;
        return MP_OK;
    }

    if ((pDelim = strchr(pString, '-')) == NULL)
    {
        tmpStart = strtoul(pString, NULL, 0);
        if ((tmpStart < 0) || (tmpStart > PORT_MAX_NUM))
        {
            return MP_FAIL;
        }

        *startNum = *endNum = tmpStart;
        return MP_OK;
    }

    *pDelim = 0;
    tmpStart = strtoul(pString, NULL, 0);
    tmpEnd = strtoul(pDelim + 1, NULL, 0);
    if ((tmpStart < 0) || (tmpStart > PORT_MAX_NUM) || (tmpEnd < 0) || (tmpEnd > PORT_MAX_NUM))
    {
        return MP_FAIL;
    }

    if (tmpStart > tmpEnd)
    {
        return MP_FAIL;
    }

    *startNum = (uint16_t)tmpStart;
    *endNum = (uint16_t)tmpEnd;
    *pDelim = '-';

    return MP_OK;
}

mp_code_t str2order( char *pString, uint32_t *val, uint32_t *num, uint32_t max )
{
    char *pDelim = NULL;
    uint32_t tmpStart = 0;
    uint32_t tmpNum = 0;

    if ((pString == NULL) || (val == NULL) || (num == NULL))
    {
        return MP_FAIL;
    }

    if (!strcmp(pString, "*"))
    {
        *val = 0;
        *num = 1;
        return MP_OK;
    }

    if ((pDelim = strchr(pString, '+')) == NULL)
    {
        tmpStart = strtoul(pString, NULL, 0);
        if ((tmpStart < 0) || (tmpStart > max))
        {
            return MP_FAIL;
        }

        *val = tmpStart;
        *num = 1;
        return MP_OK;
    }

    *pDelim = 0;
    tmpStart = strtoul(pString, NULL, 0);
    tmpNum = strtoul(pDelim + 1, NULL, 0);
    if ((tmpStart > max) || (tmpNum == 0) || (tmpNum > max) || ((tmpStart + tmpNum - 1) > max))
    {
        return MP_FAIL;
    }

    *val = tmpStart;
    *num = tmpNum;
    *pDelim = '+';


    return MP_OK;
}

/*****************************************************************************
 Prototype    : getBitMaskNum
 Description  : calculate the number of one int the mask string
 Input        : char *pString
 Output       : None
 Return Value : int
 Calls        :
 Called By    :

  History        :
  1.Date         : 2013/8/2
    Author       : huhejuan
    Modification : Created function

*****************************************************************************/
uint32_t  getBitMaskNum(uint32_t ipAddrMask)
{
    uint32_t  bitMaskNum = 0;

    while (ipAddrMask != 0)
    {
        if (ipAddrMask & 0x01)
        {
            bitMaskNum++;
        }
        if (bitMaskNum > IPV4_BIT_NUM)
        {
            break;
        }
        ipAddrMask = ipAddrMask >> 1;
    }

    return bitMaskNum;
}

/*****************************************************************************
 Prototype    : getV6BitMaskNum
 Description  : calculate the number of one int the mask string
 Input        : char *pString
 Output       : None
 Return Value : int
 Calls        :
 Called By    :

  History        :
  1.Date         : 2013/8/2
    Author       : huhejuan
    Modification : Created function

*****************************************************************************/
mp_code_t  getV6BitMaskNum(IP6_T ipAddrMask)
{
    uint32_t bitMaskNum[16] = {0};
    int sumBitMaskNum = 0;
    int i = 0;
    uint32_t num = 0;

    if (ipAddrMask == NULL)
    {
        return MP_FAIL;
    }

    memset(bitMaskNum, 0x00, sizeof(bitMaskNum));

    /*calculate the summation of bit mask*/
    for (i = 0; i < 16; i++)
    {
        if (ipAddrMask[i])
        {
            num = ipAddrMask[i];
            while (num)
            {
               if (num & 0x1)
               {
                    bitMaskNum[i]++;
                    num = num >> 1;
               }
               if (bitMaskNum[i] > 8)
               {
                   break;
               }
            }
        }
        sumBitMaskNum += bitMaskNum[i];
        if (sumBitMaskNum > IPV6_BITMASK_NUM)
        {
            break;
        }
    }

    return sumBitMaskNum;
}

/*****************************************************************************
 Prototype    : checkIifgrpFormat
 Description  : check iifgrp parameter format
 Input        : const char *str
 Output       : None
 Return Value : mp_code_t
 Calls        :
 Called By    :

  History        :
  1.Date         : 2014/10/21
    Author       : huhejuan
    Modification : Created function

*****************************************************************************/
mp_code_t checkIifgrpFormat(const char *str)
{
    char strTmp[128] = {0};
    char *pSep = NULL;
    if (str == NULL)
    {
        return MP_FAIL;
    }

    memset(strTmp, 0x00, sizeof(strTmp));
    snprintf(strTmp, sizeof(strTmp), "%s", str);
    pSep = strTmp;

    while (*pSep != '\0')
    {
        if (*pSep < '0' || *pSep> '9')
        {
            if (*pSep == ',' || *pSep == '-')
            {
                pSep++;
                continue;
            }
            else
            {
                return MP_FAIL;
            }
        }
        pSep++;
    }

    return MP_OK;
}

/*****************************************************************************
 Prototype    : parseIifGrpMask
 Description  : parse the input interface group
 Input        : None
 Output       : None
 Return Value : mp_code_t
 Calls        :
 Called By    :

  History        :
  1.Date         : 2013/8/8
    Author       : huhejuan
    Modification : Created function

*****************************************************************************/

mp_code_t parseIifGrpMask(const char *iifGrpIdSet, semp_pbmp_t *iifGrpIdMask, uint8_t iifGrpNum)
{
    uint8_t cnt = 0;
    char str[1024] = {0};

    if (iifGrpIdSet == NULL || iifGrpIdMask == NULL)
    {
        return MP_FAIL;
    }

    snprintf(str, sizeof(str), "%s", iifGrpIdSet);

    if (!strcmp(str, "*"))
    {
        SEMP_PBMP_CLEAR(iifGrpIdMask);
        return MP_OK;
    }

    return parsePbmp(str, iifGrpIdMask, &cnt, 1, iifGrpNum);
}


/*****************************************************************************
 Prototype    : iifGrpMask2str
 Description  : convert the input interface group number to string
 Input        : None
 Output       : None
 Return Value : mp_code_t
 Calls        :
 Called By    :

  History        :
  1.Date         : 2013/8/26
    Author       : huhejuan
    Modification : Created function

*****************************************************************************/
mp_code_t iifGrpMask2str(semp_pbmp_t *iifGrpId, char *iifGrpIdstr, int len)
{
    if (iifGrpId == NULL || iifGrpIdstr == NULL || len <= 2)
    {
        return MP_FAIL;
    }

    if (SEMP_PBMP_IS_NULL(iifGrpId))
    {
        strcpy(iifGrpIdstr, "*");
        return MP_OK;
    }

    return pbmp2Desc(iifGrpId, iifGrpIdstr, len, 1);
}

/*****************************************************************************
 Prototype    : payload2str
 Description  : convert payloadlen to string
 Input        : uint16_t payload
                uint16_t payloadMask
                char *str :
 Output       : None
 Return Value : mp_code_t
 Calls        :
 Called By    :

  History        :
  1.Date         : 2013/9/3
    Author       : huhejuan
    Modification : Created function

*****************************************************************************/
mp_code_t payload2str( uint16_t payload, uint16_t payloadMask, char *str )
{

    if (str == NULL)
    {
        return MP_FAIL;
    }

    if (payload == 0 && payloadMask == 0)
    {
        strcpy(str, "*");
        return MP_OK;
    }
    else if (payloadMask == 0xffff)
    {
        sprintf(str, "%d", payload + 1);
    }
    return MP_OK;

}
/*****************************************************************************
 Prototype    : iifGrpRange2str
 Description  : convert payloadlen to string
 Input        : uint16_t payload
                uint16_t payloadMask
                char *str :
 Output       : None
 Return Value : mp_code_t
 Calls        :
 Called By    :

  History        :
  1.Date         : 2013/9/3
    Author       : huhejuan
    Modification : Created function

*****************************************************************************/
mp_code_t iifGrpRange2str( uint32_t iifGrp, uint32_t iifGrpMask, char *iifGrpStr, char *iifGrpMaskStr)
{

    if (iifGrpStr == NULL || iifGrpMaskStr == NULL)
    {
        return MP_FAIL;
    }

    if (iifGrp == 0 && iifGrpMask == -1)
    {
        sprintf(iifGrpStr, "%u", iifGrp);
        sprintf(iifGrpMaskStr, "%u", iifGrpMask);
        return MP_OK;
    }
    else
    {
        sprintf(iifGrpStr, "%u", iifGrp + 1);
        sprintf(iifGrpMaskStr, "%u", iifGrpMask + 1);
    }
    return MP_OK;

}
/*****************************************************************************
 Prototype    : iifGrpRange2strShw
 Description  : convert payloadlen to string
 Input        : uint16_t payload
                uint16_t payloadMask
                char *str :
 Output       : None
 Return Value : mp_code_t
 Calls        :
 Called By    :

  History        :
  1.Date         : 2013/10/23
    Author       : huhejuan
    Modification : Created function

*****************************************************************************/
mp_code_t iifGrpRange2strShw( uint32_t iifGrp, uint32_t iifGrpMask, char *iifGrpStr)
{

    if (iifGrpStr == NULL)
    {
        return MP_FAIL;
    }

    /*iifGrpMask == -1 convert to iifGrpMask == 0xff in apirule.c*/
    if (iifGrp == 0 && (iifGrpMask == 0xff || iifGrpMask == -1))
    {
        sprintf(iifGrpStr, "%s", "*");
        return MP_OK;
    }
    else if (iifGrp == iifGrpMask) /*exact macth*/
    {
        sprintf(iifGrpStr, "%d", iifGrp + 1);
    }
    else  /*range match*/
    {
        sprintf(iifGrpStr, "%d-%d", iifGrp + 1, iifGrpMask + 1);
    }
    return MP_OK;

}
/*****************************************************************************
 Prototype    : portRange2strShw
 Description  : convert payloadlen to string
 Input        : uint16_t payload
                uint16_t payloadMask
                char *str :
 Output       : None
 Return Value : mp_code_t
 Calls        :
 Called By    :

  History        :
  1.Date         : 2013/10/23
    Author       : huhejuan
    Modification : Created function

*****************************************************************************/
mp_code_t portRange2strShw( uint16_t port, uint16_t portMask, char *portStr)
{

    if (portStr == NULL)
    {
        return MP_FAIL;
    }

    if (port == 0 && portMask == 0xffff)
    {
        sprintf(portStr, "%s", "*");
        return MP_OK;
    }
    else if (port == portMask)  /*exact match*/
    {
        sprintf(portStr, "%d", port);
    }
    else /*range match*/
    {
        sprintf(portStr, "%d-%d", port, portMask);
    }

    return MP_OK;
}

/*****************************************************************************
 Prototype    : portRange2strShw
 Description  : convert payloadlen to string
 Input        : uint16_t payload
                uint16_t payloadMask
                char *str :
 Output       : None
 Return Value : mp_code_t
 Calls        :
 Called By    :

  History        :
  1.Date         : 2013/10/23
    Author       : huhejuan
    Modification : Created function

*****************************************************************************/
mp_code_t payloadRange2strShw( uint16_t payload, uint16_t payloadMask, char *payloadStr)
{

    if (payloadStr == NULL)
    {
        return MP_FAIL;
    }

    if (payload == 0 && payloadMask == 0xffff)
    {
        sprintf(payloadStr, "%s", "*");
        return MP_OK;
    }
    else if (payload == payloadMask) /*exact match*/
    {
        sprintf(payloadStr, "%d", payload);
    }
    else /*range match*/
    {
        sprintf(payloadStr, "%d-%d", payload, payloadMask);
    }
    return MP_OK;

}

/*****************************************************************************
 Prototype    : tcpFlagNum2strShw
 Description  : convert payloadlen to string
 Input        : uint16_t payload
                uint16_t payloadMask
                char *str :
 Output       : None
 Return Value : mp_code_t
 Calls        :
 Called By    :

  History        :
  1.Date         : 2013/10/23
    Author       : huhejuan
    Modification : Created function

*****************************************************************************/
mp_code_t tcpflagNum2strShw( uint8_t tcpflag, uint8_t tcpflagMask, char *tcpflagStr)
{

    if (tcpflagStr == NULL)
    {
        return MP_FAIL;
    }

    if (tcpflag == 0 && tcpflagMask == 0)
    {
        sprintf(tcpflagStr, "%s", "any");
        return MP_OK;
    }
    else
    {
        sprintf(tcpflagStr, "0x%x/0x%x", tcpflag, tcpflagMask);
    }
    return MP_OK;

}

/*****************************************************************************
 Prototype    : ipv4Net2str
 Description  : convert ip and mask to A.B.C.D/A.B.C.D format string
 Input        : unsigned int ip
                unsigned int mask
                char *pString
 Output       : None
 Return Value : mp_code_t
 Calls        :
 Called By    :

  History        :
  1.Date         : 2013/11/30
    Author       : huxiaojuan
    Modification : Created function

*****************************************************************************/
mp_code_t ipv4Net2str( uint32_t ip, uint32_t mask, char *pString )
{
    char strIp[16] = {0};
    char strMask[16] = {0};
    char strIpNet[32] = {0};

    if (pString == NULL)
    {
        return MP_FAIL;
    }

    memset(strIp, 0, sizeof(strIp));
    memset(strMask, 0, sizeof(strMask));
    strncpy(strIp, inet_ntoa(*(struct in_addr*)&ip), sizeof(strIp) - 1);
    strncpy(strMask, inet_ntoa(*(struct in_addr*)&mask), sizeof(strMask) - 1);
    memset(strIpNet, 0, sizeof(strIpNet));
    sprintf(strIpNet, "%s/%s", strIp, strMask);
    memcpy(pString, strIpNet, sizeof(strIpNet));

    return MP_OK;
}

mp_code_t ipv4Range2str( uint32_t ip, uint32_t mask, char *pString )
{
    char strIp[16] = {0};
    char strMask[16] = {0};
    char strIpNet[32] = {0};

    if (pString == NULL)
    {
        return MP_FAIL;
    }

    memset(strIp, 0, sizeof(strIp));
    memset(strMask, 0, sizeof(strMask));
    strncpy(strIp, inet_ntoa(*(struct in_addr*)&ip), sizeof(strIp) - 1);
    strncpy(strMask, inet_ntoa(*(struct in_addr*)&mask), sizeof(strMask) - 1);
    memset(strIpNet, 0, sizeof(strIpNet));
    if(ip == mask)    /*当ip只有一个时，就显示一个，不显示范围*/
    {
        sprintf(strIpNet, "%s", strIp);
    }
    else
    {
        sprintf(strIpNet, "%s-%s", strIp, strMask);
    }
    memcpy(pString, strIpNet, sizeof(strIpNet));

    return MP_OK;
}

#if 0
/*****************************************************************************
 Prototype    : str2IifGrpMask
 Description  : convert string to number
 Input        : char *pString ,uint8_t *portStr, uint8_t *portEnd
 Output       : None
 Return Value : mp_code_t
 Calls        :
 Called By    :

  History        :
  1.Date         : 2014/03/09
    Author       : huhejuan
    Modification : Created function

*****************************************************************************/
mp_code_t str2IifGrpIIMask( char *pString ,uint32_t *iifGrp, uint32_t *mask )
{
    char *pDelim = NULL;
    mp_code_t ret = MP_OK;

    if ((pString == NULL) || (iifGrp == NULL) || (mask == NULL))
    {
        return MP_FAIL;
    }

    if (!strcmp(pString, "*"))
    {
        *iifGrp = 0;
        *mask = 0;
        return MP_OK;
    }

    if ((pDelim = strchr(pString, '/')) == NULL)    /* no mask */
    {
        ret = parseIifGrpMask(pString, iifGrp);
        if (ret != MP_OK)
        {
            return MP_FAIL;
        }
        *mask = -1;
    }
    else
    {
        *pDelim = 0;
        ret = parseIifGrpMask(pString, iifGrp);
        if (ret != MP_OK)
        {
            return MP_FAIL;
        }
        *mask = strtoul(pDelim + 1, NULL, 0);
        *pDelim = '/';
    }

    return MP_OK;
}
#endif

/*****************************************************************************
 Prototype    : str2PayLenIIMask
 Description  : convert payload length string to payload length number and mask
 Input        : char *pString,
                uint8_t *payLenRng,
                uint8_t *payLenRng,
                uint8_t *mask

 Output       : None
 Return Value : mp_code_t
 Calls        :
 Called By    :

  History        :
  1.Date         : 2013/8/11
    Author       : huhejuan
    Modification : Created function

*****************************************************************************/
mp_code_t str2PayLenIIMask( char *pString, uint16_t *payLenRng, uint16_t *mask )
{
    char *pDelim = NULL;
    char *pStr = NULL;
    uint32_t tmpPayLenRng = 0;
    uint32_t tmpPayLenMask = 0;

    if (pString == NULL || payLenRng == NULL || mask == NULL)
    {
        return MP_FAIL;
    }

    if (!strcmp(pString, "*"))
    {
        *payLenRng = *mask = 0;
        return MP_OK;
    }

    if ((pDelim = strchr(pString, '/')) == NULL)    /* no mask */
    {
        tmpPayLenRng = strtoul(pString, &pStr, 0);
        if ((tmpPayLenRng < 0) || (tmpPayLenRng > PAYLENII_MAX_NUM ))
        {
            return MP_FAIL;
        }
        *payLenRng = (uint16_t)tmpPayLenRng;
        *mask = 0xffff;
        return MP_OK;
    }

    *pDelim = 0;
    tmpPayLenRng = strtoul(pString, &pStr, 0);
    tmpPayLenMask = strtoul(pDelim + 1, &pStr, 0);
    /* check payload length value */
    if ((tmpPayLenRng < 0) || (tmpPayLenRng > PAYLENII_MAX_NUM ))
    {
        return MP_FAIL;
    }
    /* check mask value */
    if ((tmpPayLenMask < 0) || (tmpPayLenMask > 0xffff ))
    {
        return MP_FAIL;
    }
    *payLenRng = (uint16_t)tmpPayLenRng;
    *mask = (uint16_t)tmpPayLenMask;
    *pDelim = '/';

    return MP_OK;
}

/*****************************************************************************
 Prototype    : payload2strMask
 Description  : convert payloadlen to string
 Input        : uint16_t payload
                uint16_t payloadMask
                char *str :
 Output       : None
 Return Value : mp_code_t
 Calls        :
 Called By    :

  History        :
  1.Date         : 2014/03/09
    Author       : huhejuan
    Modification : Created function

*****************************************************************************/
mp_code_t payload2strMask( uint16_t payload, uint16_t payloadMask, char *str )
{

    if (str == NULL)
    {
        return MP_FAIL;
    }

    if (payload == 0 && payloadMask == 0)
    {
        strcpy(str, "*");
        return MP_OK;
    }
    else
    {
        sprintf(str, "%d", payload + 1);
    }
    return MP_OK;

}

/*****************************************************************************
 Prototype    : str2MixIpMask
 Description  : parse an mix ip address
 Input        : char *string, uint32_t *ip, uint32_t *mask
 Output       : None
 Return Value : mp_code_t
 Calls        :
 Called By    :

  History        :
  1.Date         : 2014/4/7
    Author       : huhejuan
    Modification : Created function

*****************************************************************************/
mp_code_t str2MixIpMask( char *pString, IP6_T ip, IP6_T mask )
{
    mp_code_t ret = MP_OK;
    char *pDelim = NULL;
    char strDotMask[16] = {0};
    char strIpv6Tmp[18] = {0};
    char strV6MaskTmp[18] = {0};
    uint32_t inetMaskAddr = 0;
    uint32_t bitNum = 0;

    memset(ip, 0x00, sizeof(IP6_T));
    memset(mask, 0x00, sizeof(IP6_T));
    memset(strDotMask, 0x00, sizeof(strDotMask));
    memset(strIpv6Tmp, 0x00, sizeof(strIpv6Tmp));
    memset(strV6MaskTmp, 0x00, sizeof(strV6MaskTmp));

    if (pString == NULL || ip == NULL || mask == NULL)
    {
        return MP_FAIL;
    }

    if (!strcmp(pString, "*"))
    {
        memset(ip, 0, sizeof(IP6_T));
        memset(mask, 0, sizeof(IP6_T));
        return MP_OK;
    }

    /*ipv4 address*/
    if ((pDelim = strstr(pString, ":")) == NULL)
    {
        if ((pDelim = strchr(pString, '/')) == NULL)    /*ipv4 format no mask */
        {
            inetMaskAddr = -1;
            inet_ntop(AF_INET, &inetMaskAddr, strDotMask, sizeof(strDotMask));

            /* change to ipv6 format address*/
            snprintf(strIpv6Tmp, sizeof(strIpv6Tmp), "::%s", pString);
            snprintf(strV6MaskTmp, sizeof(strV6MaskTmp), "::%s", strDotMask);
        }
        else /* ipv4 format have mask */
        {
            *pDelim = 0;

            /* change to ipv6 format address*/
            snprintf(strIpv6Tmp, sizeof(strIpv6Tmp), "::%s", pString);

            if ((strchr(pDelim + 1, '.')) == NULL)  /* A.B.C.D/M */
            {
                inetMaskAddr = inet_addr(IPV4_MASK_RAGE);
                bitNum = strtoul(pDelim + 1, NULL, 0);
                if (bitNum == 0)
                {
                    inetMaskAddr  = 0;
                }
                else
                {
                    inetMaskAddr  = inetMaskAddr << (IPV4_BIT_NUM - bitNum);
                }

                /* change to ipv6 format mask address*/
                inet_ntop(AF_INET, &inetMaskAddr, strDotMask, sizeof(strDotMask));
                snprintf(strV6MaskTmp, sizeof(strIpv6Tmp), "::%s", strDotMask);

            }
            else  /* A.B.C.D/A.B.C.D */
            {
                inetMaskAddr = inet_addr(pDelim + 1);
                inet_ntop(AF_INET, &inetMaskAddr, strDotMask, sizeof(strDotMask));

                /* change to ipv6 format mask address*/
                snprintf(strV6MaskTmp, sizeof(strV6MaskTmp), "::%s", strDotMask);
            }

            *pDelim = 0;
        }

       /* convert ipv6 format address to integers */
        if (inet_pton(AF_INET6, strIpv6Tmp, ip) <= 0)
        {
            return MP_FAIL;
        }

        if (inet_pton(AF_INET6, strV6MaskTmp, mask) <= 0)
        {
            return MP_FAIL;
        }
    }
    else /* ipv6 address*/
    {
        ret = str2ipv6Mask(pString, ip, mask);
        if (ret != MP_OK)
        {
            return MP_FAIL;
        }
    }

    return MP_OK;
}

/*****************************************************************************
 Prototype    : str2PayLenMask
 Description  : convert payload length string to payload length number and mask
 Input        : char *pString,
                uint8_t *payLenRng,
                uint8_t *payLenRng,
                uint8_t *mask

 Output       : None
 Return Value : mp_code_t
 Calls        :
 Called By    :

  History        :
  1.Date         : 2013/8/11
    Author       : huhejuan
    Modification : Created function

*****************************************************************************/
mp_code_t str2PayLenIINewMask( char *pString, uint32_t *payLenRng, uint32_t *mask )
{
    mp_code_t ret = MP_OK;
    if (pString == NULL || payLenRng == NULL || mask == NULL)
    {
        return MP_FAIL;
    }

    if (!strcmp(pString, "*"))
    {
        *payLenRng = *mask = 0;
        return MP_OK;
    }

    ret = parseStr2NumMask(pString, payLenRng, mask);
    if (ret != MP_OK)
    {
        return MP_FAIL;
    }
    /* check payload length value */
    if ((*payLenRng < 0) || (*payLenRng > PAYLENII_MAX_NUM ))
    {
        return MP_FAIL;
    }
    /* check mask value */
    if ((*mask < 0) || (*mask > -1))
    {
        return MP_FAIL;
    }

    return MP_OK;
}

/*****************************************************************************
 Prototype    : str2StrIdMask
 Description  : convert payload length string to payload length number and mask
 Input        : char *pString,
                uint8_t *payLenRng,
                uint8_t *payLenRng,
                uint8_t *mask

 Output       : None
 Return Value : mp_code_t
 Calls        :
 Called By    :

  History        :
  1.Date         : 2014/04/07
    Author       : huhejuan
    Modification : Created function

*****************************************************************************/
mp_code_t str2StrIdMask( char *pString, uint32_t *strId, uint32_t *mask )
{
    mp_code_t ret = MP_OK;

    if (pString == NULL || strId == NULL || mask == NULL)
    {
        return MP_FAIL;
    }

    if (!strcmp(pString, "*"))
    {
        *strId = *mask = 0;
        return MP_OK;
    }

    ret = parseStr2NumMask (pString, strId, mask);
    if (ret != MP_OK)
    {
        return MP_FAIL;
    }

    if (*strId < 0 || *strId > STR_II_RULE_NUM)
    {
        return MP_FAIL;
    }
    if (*mask < 0 || *mask > -1)
    {
        return MP_FAIL;
    }
    return MP_OK;
}
