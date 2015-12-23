/*---------------------------------------------------------
* f8.c
*---------------------------------------------------------*/
#include "f8.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* f8.
* Input key: 128 bit Confidentiality Key.
* Input count:32-bit Count, Frame dependent input.
* Input bearer: 5-bit Bearer identity (in the LSB side).
* Input dir:1 bit, direction of transmission.
* Input data: length number of bits, input bit stream.
* Input length: 16 bit Length, i.e., the number of bits to be encrypted or
* decrypted.
* Output data: Output bit stream. Assumes data is suitably memory
* allocated.
* Encrypts/decrypts blocks of data between 1 and 20000 bits in length as
* defined in Section 3.
*/
void f8_Ext( u8 *key, int count, int bearer, int dir, u8 *data, int length )
{
#if 0
    u32 K[4],IV[4];
    int n = ( length + 31 ) / 32;
    int i=0;
    u32 *KS;
    //20101117
    u32 uKey_Temp;
    int length_DW       =   length/32;

    
    /*
    3GPP Confidentiality and Integrity Algorithms UEA2&UIA2 page 24 of 27
    UEA2 and UIA2 Specification Version 1.1*/
    /*Initialisation*/
    /* Load the confidentiality key for SNOW 3G initialization as in section
    3.4. */
    /*-----------------------*/
    memcpy(K+3,key+0,4);
    *(K+3)=GUINT32_SWAP_LE_BE_CONSTANT(*(K+3));
    /*-----------------------*/
    memcpy(K+2,key+4,4);
    *(K+2)=GUINT32_SWAP_LE_BE_CONSTANT(*(K+2));
    /*-----------------------*/
    memcpy(K+1,key+8,4);
    *(K+1)=GUINT32_SWAP_LE_BE_CONSTANT(*(K+1));
    /*-----------------------*/
    memcpy(K+0,key+12,4);
    *(K+0)=GUINT32_SWAP_LE_BE_CONSTANT(*(K+0));
    /*-----------------------*/
    
#if 0    
    memcpy(K+3,key+0,4); /*K[3] = key[0]; we assume
    K[3]=key[0]||key[1]||...||key[31] , with key[0] the
    * most important bit of key*/
    memcpy(K+2,key+4,4); /*K[2] = key[1];*/
    memcpy(K+1,key+8,4); /*K[1] = key[2];*/
    memcpy(K+0,key+12,4);
#endif    
    /*K[0] = key[3]; we assume
    K[0]=key[96]||key[97]||...||key[127] , with key[127] the
    * least important bit of key*/
    /* Prepare the initialization vector (IV) for SNOW 3G initialization as in
    section 3.4. */
    IV[3] = count;
    IV[2] = (bearer << 27) | ((dir & 0x1) << 26);
    IV[1] = IV[3];
    IV[0] = IV[2];
    /* Run SNOW 3G algorithm to generate sequence of key stream bits KS*/
    Initialize(K,IV);
    KS = (u32 *)malloc(4*n);
    GenerateKeystream(n,(u32*)KS);
    /* Exclusive-OR the input data with keystream to generate the output bit
    stream */
    /*-------------------------*/
    for(i=0;i<n*4;i=i+4)
    {
        uKey_Temp=0;
        memcpy(&uKey_Temp,data+i,4);
        uKey_Temp=GUINT32_SWAP_LE_BE_CONSTANT(uKey_Temp);
        memcpy(data+i,&uKey_Temp,4);
    }
    /*-------------------------*/
    //对于需要解码的data不是整DOWRD的情况
    if(n!=length_DW)
    {
        int length_remainder= (length/8)%4;
        int space_time=4-length_remainder;
        int location=length_DW*4;
        int temp=0;
        for (i=0;i<n*4;i++)
        {
            if(i==location)
            {
              temp=space_time-1;
              continue;
            }
            if(temp!=0)
            {
              temp--;
              continue;
            }
            data[i] ^= *(((u8*)KS)+i);
        }
    }
    else
    {
        for (i=0;i<n*4;i++)
        {
            data[i] ^= *(((u8*)KS)+i);
        }
    }

    /*-------------------------*/
    for(i=0;i<n*4;i=i+4)
    {
        uKey_Temp=0;
        memcpy(&uKey_Temp,data+i,4);
        uKey_Temp=GUINT32_SWAP_LE_BE_CONSTANT(uKey_Temp);
        memcpy(data+i,&uKey_Temp,4);
    }
    /*-------------------------*/       
    free(KS);
#endif
    u32 K[4],IV[4];
    int n = ( length + 31 ) / 32;
    int i=0;
    int lastbits = (8-(length%8)) % 8;
    u32 *KS;

    /*Initialisation*/
    /* Load the confidentiality key for SNOW 3G initialization as in section
     *  3.4. */
    for (i=0; i<4; i++)
        K[3-i] = (key[4*i] << 24) ^ (key[4*i+1] << 16) 
            ^ (key[4*i+2] << 8) ^ (key[4*i+3]);

    /* Prepare the initialization vector (IV) for SNOW 3G initialization as in
     *  section 3.4. */
    IV[3] = count;
    IV[2] = (bearer << 27) | ((dir & 0x1) << 26);
    IV[1] = IV[3];
    IV[0] = IV[2];

    /* Run SNOW 3G algorithm to generate sequence of key stream bits KS*/
    Initialize(K,IV);
    KS = (u32 *)malloc(4*n);
    GenerateKeystream(n,(u32*)KS);

    /* Exclusive-OR the input data with keystream to generate the output bit
     *  stream */
    for (i=0; i<n; i++)
    {
        data[4*i+0] ^= (u8) (KS[i] >> 24) & 0xff;
        data[4*i+1] ^= (u8) (KS[i] >> 16) & 0xff;
        data[4*i+2] ^= (u8) (KS[i] >> 8) & 0xff;
        data[4*i+3] ^= (u8) (KS[i] ) & 0xff;
    }

    free(KS);

    /* zero last bits of data in case its length is not byte-aligned 
     *     this is an addition to the C reference code, which did not handle it */
    if (lastbits)
        data[length/8] &= 256 - (1<<lastbits);
 }
/* End of f8.c */
