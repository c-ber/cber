/*
 * global.c
 *
 * history：
 *      Created on: 2015-3-12 Author: cb
 *
 * Copyright 2014 - Shenzhen MifiData technology Co.,Ltd. All rights reserved
 *
 *  No Part of this file may be reproduced, stored in a retrieval system, or
 *  transmitted, in any form, or by any means,electronic, mechanical, photocopying,
 *  recording, or otherwise,without the prior consent of MifiData Tech.
 */


#include "global.h"

typedef void (*sighandler_t)(int);
int pox_system(const char *format, ...)
{
    int ret = 0;
    sighandler_t old_handler;
    unsigned char cmd[POSIX_STR_LEN] = {0};

    va_list ap;
    va_start( ap, format);
    vsprintf(cmd,format, ap);

    old_handler = signal(SIGCHLD, SIG_DFL);
    ret = system(cmd);
    signal(SIGCHLD, old_handler);
    va_end( ap );
    LogFile(FMPROCLOG,"%s",cmd);
    return ret;
}

int pox_remove(const char *format, ...)
{
    int ret = 0;
    unsigned char fileName[POSIX_STR_LEN] = {0};

    va_list ap;
    va_start( ap, format);
    vsprintf(fileName,format, ap);

    if (access(fileName, F_OK))
    {
        LogFile(FMPROCLOG,"文件[%s]已删除.",fileName);
    }
    else
    {
        LogFile(FMPROCLOG,"正在删除文件： %s",fileName);
        ret = remove(fileName);
    }
    return ret;
}

unsigned char BCDtoDEC( unsigned char n )
{
    return ( (n >> 4)*10 + (n & 0x0f) );
}


unsigned char DECtoBCD( unsigned char n )
{
    return ( (n / 10 )*16 + (n % 10) );
}


char * UpperToLower(char *src)
{
    char * pret = src;
    if( NULL == src )
    {
        return NULL;
    }
    for(; *src != '\0'; src++ )
    {
        *src = tolower(*src);
    }
    return pret;
}
// n =0,1,2... correspond "year month day hour minuter second week"
time_t GetCurTime(unsigned char *buf, int n)
{
    time_t tmptime;
    time_t rettime;
    struct tm stm;
    struct tm *ptm = &stm;

    rettime = tmptime = time(NULL);
    localtime_r( &tmptime, ptm );
    if( n-- > 0 )
    {
        buf[0] = DECtoBCD(ptm->tm_year - 100);
    }
    if( n-- > 0 )
    {
        buf[1] = DECtoBCD(ptm->tm_mon + 1);
    }
    if( n-- > 0 )
    {
        buf[2] = DECtoBCD(ptm->tm_mday);
    }
    if( n-- > 0 )
    {
        buf[3] = DECtoBCD(ptm->tm_hour);
    }
    if( n-- > 0 )
    {
        buf[4] = DECtoBCD(ptm->tm_min);
    }
    if( n-- > 0 )
    {
        buf[5] = DECtoBCD(ptm->tm_sec);
    }
    if( n-- > 0 )
    {
        buf[6] = DECtoBCD(ptm->tm_wday);
    }
    return rettime;
}


time_t From_tmTotime_t(unsigned char *buf)    //"year month day hour minuter second
{
    struct tm stm;

    stm.tm_year = 100 + BCDtoDEC( buf[0] );
    stm.tm_mon  = BCDtoDEC( buf[1]) - 1;
    stm.tm_mday = BCDtoDEC( buf[2] );
    stm.tm_hour = BCDtoDEC( buf[3] );
    stm.tm_min  = BCDtoDEC( buf[4] );
    stm.tm_sec  = BCDtoDEC( buf[5] );
    return ( mktime(&stm) );
}


//return value : second
long long Comptime( time_t curtime, time_t lasttime )
{
    long long tt;
    tt = (long long)difftime(curtime, lasttime);
    return llabs(tt);
}


long int FGetSysRunTime( void )
{
    FILE *fp = NULL;
    static long int lReStartTime = 0;
    double td;
    long tt;

    if(( fp = fopen( "/proc/uptime","r") ) == NULL )
    {
        lReStartTime++;
    }
    else
    {
        fscanf( fp, "%lf",&td);
        tt = ( long )td;
        lReStartTime = tt;
        fclose( fp );
    }
    return lReStartTime;
}


/***************************************************************************
 *
 * fm_memdup(source, length)
 *
 * Copies the 'source' data to a newly allocated buffer (that is
 * returned). Copies 'length' bytes.
 *
 * Returns the new pointer or NULL on failure.
 *
 ***************************************************************************/
char *fm_memdup(const char *src, size_t length)
{
    char *buffer = malloc(length+1);
    memset(buffer, 0, length+1);
    if(!buffer)
        return NULL; /* fail */

    memcpy(buffer, src, length);

    return buffer;
}
char * GetTimeStr(char *dst)
{
    time_t rettime;
    struct tm stm;
    struct tm *ptm = &stm;


    if( dst == NULL )
    {
        return NULL;
    }

    rettime = time(NULL);
    localtime_r( &rettime, ptm );
    strftime(dst,64, "%Y-%m-%d %H:%M:%S", ptm);
    return dst;
}

void LogFile(char *pFileName, const char *format, ...)
{
#ifdef DEBUG
    long int size = 0;
    FILE *fp = NULL;
    va_list ap;

    if(access("/var/log/fm",  F_OK) != 0)
    {
        mkdir("/var/log/fm", S_IRWXU | S_IRWXG | S_IRWXO);
    }

    fp = fopen(pFileName, "a+");
    if(fp)
    {
        fseek(fp,0,SEEK_END);
        size=ftell(fp);
        fclose(fp);
    }
    else
    {
        return;
    }

    if (1024*200 <= size)//200k
    {
        if( strcmp(pFileName,FMPROCLOG) == 0)
            system("tar zcf /var/log/fm/fmlog.tgz  /var/log/fm/fm.log");
        else
            system("tar zcf /var/log/fm/fmdata.tgz  /var/log/fm/fmdata.log");
        fp = fopen(pFileName, "w+");
    }
    else
    {
        fp = fopen(pFileName, "a+");
    }
    if( fp == NULL ){
        return;
    }
    BYTE ucBuf[6];
    GetCurTime(ucBuf, 6);
    fprintf(fp, "[%04x-%02x-%02x %02x:%02x:%02x] : ",
            0x2000+ucBuf[0], ucBuf[1], ucBuf[2],ucBuf[3], ucBuf[4],ucBuf[5]);
    va_start( ap, format );
    vfprintf( fp, format, ap );
    va_end( ap );
    fputs("\n", fp);
    fclose(fp);

    va_list ap1;
    va_start( ap1, format );
    vprintf(format, ap1 );
    printf("\n");
    va_end( ap1 );
#endif
}

int f_line_get_value(const char *path, const char *match, const char split, char *value)
{
    char buff[1024] = {0};
    char *tmp     = NULL;
    char *val_ptr = NULL;
    FILE *fp      = NULL;

    /*read file into buffer*/
    if( (fp = fopen(path, "r") ) != NULL)
    {
        fread(buff, sizeof(buff), 1, fp);
        fclose(fp);
    }
    /*search title name*/
    tmp = strstr(buff,match);
    if(!tmp)
    {
        return -1;
    }
    /*skip title name*/
    tmp+= strlen(match);
    /*find split char or end char of this line*/
    while(*tmp != '\n' && *tmp != '\r')
    {
        if(*tmp == split)
        {
            val_ptr=tmp+1;
            if(*(tmp+1) == ' ')
            {
                val_ptr++;
                tmp++;
            }
        }
        tmp++;
    }
    if(val_ptr == NULL)
    {
        return -1;
    }
    *tmp = '\0';
    strcpy(value, val_ptr);

    return 0;
}


