/****************************************************************************** 

版权所有（C），2001-2015年，恒扬科技股份有限公司

******************************************************************************
文件名:       alg_kmp.c
编码格式:     ASCII
作者:         chenbin
创建:         Nov 26, 2015
历史:
    1.日期    :Nov 26, 2015
      作者    :cb
      修改    :Created file
******************************************************************************/

#include "alg_kmp.h"

void computeLPSArray(char *pat, int M, int *lps);


/*************************************************************
 * 功能：KMP算法接口，只查第一个位置
 * 入参  pat 是模式，即子串
 *       txt 是集合, 即源串
 * 出参  pos， 返回找到的索引位置
 * 返回  CB_FOUND:找到    CB_NOT_FOUND:未找到
**************************************************************/
cb_code_t KMPSearch(char *pat,int len_pat,
                    char *txt, int len_txt,
                    int  *pos)
{
    // 预处理pattern，计算出 lps[]数组记录前缀和后缀的最长匹配
    int *lps = (int *)malloc(sizeof(int)*((size_t)len_pat));
    int j  = 0;  // index for pat[]

    // Preprocess the pattern (calculate lps[] array)
    computeLPSArray(pat, len_pat, lps);

    int i = 0;  // index for txt[]
    while(i < len_txt)
    {
      if(pat[j] == txt[i])
      {
        j++;
        i++;
      }

      if (j == len_pat)
      {
          *pos = i-j;
        //printf("Found pattern at index %d \n", i-j);
        j = lps[j-1];
        return CB_FOUND;
      }

      // mismatch after j matches
      else if(pat[j] != txt[i])
      {
        // Do not match lps[0..lps[j-1]] characters,
        // they will match anyway
        if(j != 0)
         j = lps[j-1];
        else
         i = i+1;
      }
    }
    free(lps); // to avoid memory leak
    return CB_NOT_FOUND;
}

void computeLPSArray(char *pat, int M, int *lps)
{
    int len = 0;  // 记录前一个[最长匹配的前缀和后缀]的长度
    int i;

    lps[0] = 0; // lps[0] 必须是 0
    i = 1;

    // the loop calculates lps[i] for i = 1 to M-1
    while(i < M)
    {
       if(pat[i] == pat[len])
       {
         len++;
         lps[i] = len;
         i++;
       }
       else // (pat[i] != pat[len])
       {
         if( len != 0 )
         {
           // 这个地方有陷阱. 考虑这个例子 AAACAAAA ,i = 7.
           len = lps[len-1];

           // 另外, 注意 i 在这个地方并没有增加
         }
         else // 如果 (len == 0)
         {
           lps[i] = 0; //没有一个匹配的
           i++;
         }
       }
    }
}

// 测试
//int main()
//{
//   char *txt = "ABABDABACDABABCABAB";
//   char *pat = "ABABCABAB";
//   KMPSearch(pat, strlen(pat), txt, strlen(txt) );
//   return 0;
//}
