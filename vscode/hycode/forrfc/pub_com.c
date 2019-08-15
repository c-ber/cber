/****************************************************************************** 

版权所有（C），2001-2015年，恒扬科技股份有限公司

******************************************************************************
文件名:       pub_com.c
编码格式:     ASCII
作者:         chenbin
创建:         May 11, 2016
历史:
    1.日期    :May 11, 2016
      作者    :cb
      修改    :Created file
******************************************************************************/

#include "pub_com.h"




void semp_format_integer(char *buf, unsigned int n, int min_digits, int base)
{
    static char     *digit_char = "0123456789abcdef";
    unsigned int    tmp;
    int         digit, needed_digits = 0;

    for (tmp = n, needed_digits = 0; tmp; needed_digits++)
    {
        tmp /= base;
    }

    if (needed_digits > min_digits)
        min_digits = needed_digits;

    buf[min_digits] = 0;

    for (digit = min_digits - 1; digit >= 0; digit--)
    {
        buf[digit] = digit_char[n % base];
        n /= base;
    }
}


/* returns 1 is the bitmap is empty */
int semp_pbmp_bmnull(semp_pbmp_t *bmp)
{
    int i;

    for (i = 0; i < SEMP_PBMP_WORD_MAX; i++)
    {
        if (SEMP_PBMP_WORD_GET(bmp, i) != 0)
        {
            return 0;
        }
    }

    return 1;
}

/* returns 1 is the bitmap is full of F */
int semp_pbmp_is_allf(semp_pbmp_t *bmp)
{
    int i;

    for (i = 0; i < SEMP_PBMP_WORD_MAX; i++) {
        if (SEMP_PBMP_WORD_GET(bmp, i) != -1) {
            return 0;
        }
    }
    return 1;
}


/* returns 1 is the two bitmaps are equal */
int semp_pbmp_bmeq(semp_pbmp_t *bmp1, semp_pbmp_t *bmp2)
{
    int i;

    for (i = 0; i < SEMP_PBMP_WORD_MAX; i++)
    {
        if (SEMP_PBMP_WORD_GET(bmp1, i) != SEMP_PBMP_WORD_GET(bmp2, i))
        {
            return 0;
        }
    }

    return 1;
}

int semp_pbmp_bmeq_bit(semp_pbmp_t *bmp1, semp_pbmp_t *bmp2)
{
    int i;

    for (i = 0; i < SEMP_PBMP_WORD_MAX; i++)
    {
        if (SEMP_PBMP_WORD_GET(bmp1, i) & SEMP_PBMP_WORD_GET(bmp2, i))
        {
            return 1;
        }
    }

    return 0;
}

/* format a bitmap into a static buffer suitable for printing */
char * semp_pbmp_format(semp_pbmp_t bmp, char *buf)
{
    int     i;
    char    *bp;

    if (buf == NULL)
    {
        return buf;
    }

    buf[0] = '0';
    buf[1] = 'x';
    bp = &buf[2];

    for (i = SEMP_PBMP_WORD_MAX - 1; i >= 0; i--)
    {
        semp_format_integer(bp, SEMP_PBMP_WORD_GET(&bmp, i), 8, 16);
        bp += 8;
    }

    return buf;
}

/*
 * decode a string in hex format into a bitmap
 * returns 0 on success, -1 on error
 */
int semp_pbmp_decode(char *s, semp_pbmp_t *bmp)
{
    char    *e;
    uint32_t    v;
    int     p;

    SEMP_PBMP_CLEAR(bmp);

    if (s[0] == '0' && (s[1] == 'x' || s[1] == 'X'))
    {
        /* get end of string */
        s += 2;

        for (e = s; *e; e++)
            ;

        e -= 1;
        /* back up to beginning of string, setting ports as we go */
        p = 0;

        while (e >= s)
        {
            if (*e >= '0' && *e <= '9')
            {
                v = *e - '0';
            }
            else if (*e >= 'a' && *e <= 'f')
            {
                v = *e - 'a' + 10;
            }
            else if (*e >= 'A' && *e <= 'F')
            {
                v = *e - 'A' + 10;
            }
            else
            {
                return -1;      /* error: invalid hex digits */
            }

            e -= 1;

            /* now set a nibble's worth of ports */
            if ((v & 1) && p < SEMP_PBMP_PORT_MAX)
            {
                SEMP_PBMP_PORT_ADD(bmp, p);
            }

            p += 1;

            if ((v & 2) && p < SEMP_PBMP_PORT_MAX)
            {
                SEMP_PBMP_PORT_ADD(bmp, p);
            }

            p += 1;

            if ((v & 4) && p < SEMP_PBMP_PORT_MAX)
            {
                SEMP_PBMP_PORT_ADD(bmp, p);
            }

            p += 1;

            if ((v & 8) && p < SEMP_PBMP_PORT_MAX)
            {
                SEMP_PBMP_PORT_ADD(bmp, p);
            }

            p += 1;
        }
    }
    else
    {
        v = 0;

        while (*s >= '0' && *s <= '9')
        {
            v = v * 10 + (*s++ - '0');
        }

        if (*s != '\0')
        {
            return -1;          /* error: invalid decimal digits */
        }



        p = 0;

        while (v)
        {
            if ((v & 1) && p < SEMP_PBMP_PORT_MAX)
            {
                SEMP_PBMP_PORT_ADD(bmp, p);
            }

            v >>= 1;
            p += 1;
        }
    }

    return 0;
}


int semp_popcount(unsigned int n)
{
    n = (n & 0x55555555) + ((n >> 1) & 0x55555555);
    n = (n & 0x33333333) + ((n >> 2) & 0x33333333);
    n = (n + (n >> 4)) & 0x0f0f0f0f;
    n = n + (n >> 8);

    return (n + (n >> 16)) & 0xff;
}


int semp_pbmp_get_num(semp_pbmp_t *bm)
{
    int num = 0;

    if (bm == NULL)
    {
        return 0;
    }

    SEMP_PBMP_COUNT(bm, num);

    return num;
}


int semp_bpmp_max_port(semp_pbmp_t *bm)
{
    int port = 0, max = 0;

    if (bm == NULL)
    {
        return 0;
    }

    for (port = 0; port < SEMP_PBMP_PORT_MAX; port ++)
    {
        if (SEMP_PBMP_MEMBER(bm, port))
            max = port;
    }

    return max;
}

#define MINLEN (32 * SEMP_PBMP_WIDTH + 1)
char *hexstr2binstr(char *hexbuf, char *binbuf, int size)
{
    int i, idx;
    char src[MINLEN] = {}, dst[MINLEN] = {}, *pfd = NULL;
    const char *tbl[16][2] =
    {
        {"0", "0000"},
        {"1", "0001"},
        {"2", "0010"},
        {"3", "0011"},
        {"4", "0100"},
        {"5", "0101"},
        {"6", "0110"},
        {"7", "0111"},
        {"8", "1000"},
        {"9", "1001"},
        {"a", "1010"},
        {"b", "1011"},
        {"c", "1100"},
        {"d", "1101"},
        {"e", "1110"},
        {"f", "1111"}
    };

    if (NULL == hexbuf || NULL == binbuf)
    {
        return NULL;
    }

    if (size < MINLEN)
    {
        return NULL;
    }

    if (NULL == (pfd = strstr(hexbuf, "0x")))
    {
        return binbuf;
    }

    memcpy(src, hexbuf + strlen("0x"), strlen(hexbuf) - strlen("0x"));

    for (i = 0; i < strlen(src); i++)
    {
        idx = (src[i] <= '9' && src[i] >= '0') ? src[i] - '0' : src[i] - 'a' + 10;
        strcat(dst, tbl[idx][1]);
    }

    memcpy(binbuf, dst, strlen(dst));
    return binbuf;
}

