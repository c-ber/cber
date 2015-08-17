/*
 * er_string.c
 *
 *  Created on: 2015-4-30
 *      Author: Administrator
 */
#include "er_string.h"

inline char *ltrim(char *string)
{
    if ( NULL == string )
        return NULL;
    char *start = NULL;
    start = string;
    while(isspace(*start))start ++;
    int len = strlen(start) + 1;
    int i = 0;
    for( i = 0; i < len; i ++ )
    {
        string[i] = start[i];
    }
    return string;
}

inline char *rtrim(char *string)
{
    if ( NULL == string )
        return NULL;
    char *end = NULL;
    int len = strlen(string);
    end = string + len - 1;

    while( isspace(*end) && end != string )
    {
        *end = '\0';
        end --;
    }
    return string;
}

inline char *mtrim(char *string)
{
    if ( NULL == string )
        return NULL;
    int i = 0;
    int len = 0;
    len = strlen(string);
    for ( i = 0; i < len; i ++){
        if ( !isspace( string[i] ) )
            break;
    }
    char *start = &string[i];
    char *next_start = NULL;
    while( '\0' != *start )
    {
        if ( isspace(*start) )
        {
            next_start = start + 1;
            while( isspace(*next_start ) ) next_start ++;
            if ( '\0' == *next_start )
            {
                break;
            }

            len = strlen(next_start) + 1;
            for( i = 0; i < len; i ++ )
            {
                start[i] = next_start[i];
            }
        }
        start ++;
    }

    return string;
}

inline char *trim(char *string)
{
    return ltrim(rtrim(string));
}

inline char *trimall(char *string)
{
    string = trim(string);
    return mtrim(string);
}
inline int strpdir( char *path, char *buf)
{
    if ( NULL == path || NULL == buf )
        return -1;
    int len = strlen(path);
    char *start = path;
    char *end = path + len - 1;
    while( '/' == *end  && start != end) end --;
    while( start != end) {
        if ( '/' != *end )
            end --;
        else
            if ( start != (end -1)  && '/' != *(end -1) )
                break;
            else
                end --;
    }
    if ( start == end )
        strcpy( buf, path );
    else
    {
        strncpy( buf, path, end -start);
        buf[end -start]  = '\0';
    }
    return 0;
}

int strisnum( char *src)
{
    if(NULL == src)
        return -1;
    while(*src)
    {
        if(!IS_NUM(*src))
            return -2;
        src++;
    }
    return 0;
}

