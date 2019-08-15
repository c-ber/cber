#ifndef AES_H_
#define AES_H_

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif
//#include <glib.h>
#include <stdlib.h>

#define GFMul01(x) (x)
#define GFMul02(x) (GFMul02Box[(x)])
#define GFMul03(x) (GFMul03Box[(x)])
#define GFMul09(x) (GFMul09Box[(x)])
#define GFMul0B(x) (GFMul0BBox[(x)])
#define GFMul0D(x) (GFMul0DBox[(x)])
#define GFMul0E(x) (GFMul0EBox[(x)])
#define Nb 4                           //Block Size         Nb=4         4*4BYTE=128bit
#define Nk 4                           //Key Length         Nk=4, 6, 8   Nk可根据实际需求修改宏定义
#define Nr (6+Nk)                      //Number of Rounds   Nr=10,12,14

typedef unsigned char  BYTE;
typedef unsigned long  DWORD;

//#define TSET_DATA 1


//函数定义
//void KeyExpansion(BYTE, BYTE);
void RotWord(BYTE[]);
void SubWord(BYTE[]);

void AddRoundKey(BYTE state[4][4],BYTE wTemp[4][4]); //state[i][j]与w[j][i]求和(异或)

void SubBytes(BYTE state[4][4]);
void InvSubBytes(BYTE state[4][4]);
void ShiftRows(BYTE state[4][4]) ;
void InvShiftRows(BYTE state[4][4]);   
void MixColumns(BYTE state[4][4]);  
void InvMixColumns(BYTE state[4][4]);
 
//void Cipher(BYTE,BYTE);
void InvCipher(BYTE state[4][4],BYTE w[4*(Nr+1)][4]);

void strtoHex(char ch[32],BYTE block[16]);



//密钥扩展
//key:128BIT的KNASenc;返回的是w
void KeyExpansion(BYTE key[4][4], BYTE w[4*(Nr+1)][4]);
//加密函数
//state:block的内容; 
//w:密钥扩展返回的内容
void Cipher(BYTE state[4][4],BYTE w[4*(Nr+1)][4]);
#endif

