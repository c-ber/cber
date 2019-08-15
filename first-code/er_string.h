/*
 * er_string.h
 *
 *  Created on: 2015-1-7
 *      Author: erobot
 */

#ifndef ER_STRING_H_
#define ER_STRING_H_

#include    <stdio.h>
#include    <stdlib.h>
#include    <string.h>

#define LOWER(c)            (unsigned char)(c | 0x20)
#define IS_ALPHA(c)         (LOWER(c) >= 'a' && LOWER(c) <= 'z')
#define IS_NUM(c)           ((c) >= '0' && (c) <= '9')
#define IS_ALPHANUM(c)      (IS_ALPHA(c) || IS_NUM(c))
#define IS_HEX(c)           (IS_NUM(c) || (LOWER(c) >= 'a' && LOWER(c) <= 'f'))


inline char *ltrim(char *string);


inline char *rtrim(char *string);


inline char *mtrim(char *string);


inline char *trim(char *string);


inline char *trimall(char *string);

int strpdir( char *path, char *buf);

//***************************************************************
//函数说明:判断字符串是否全部由数字组成.如果是,返回0;否则返回负数
//***************************************************************
int strisnum( char *src);
#endif /* ER_STRING_H_ */
