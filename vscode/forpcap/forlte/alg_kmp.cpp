/****************************************************************************** 

��Ȩ���У�C����2001-2015�꣬����Ƽ��ɷ����޹�˾

******************************************************************************
�ļ���:       alg_kmp.c
�����ʽ:     ASCII
����:         chenbin
����:         Nov 26, 2015
��ʷ:
    1.����    :Nov 26, 2015
      ����    :cb
      �޸�    :Created file
******************************************************************************/

#include "alg_kmp.h"

void computeLPSArray(char *pat, int M, int *lps);


/*************************************************************
 * ���ܣ�KMP�㷨�ӿڣ�ֻ���һ��λ��
 * ���  pat ��ģʽ�����Ӵ�
 *       txt �Ǽ���, ��Դ��
 * ����  pos�� �����ҵ�������λ��
 * ����  CB_FOUND:�ҵ�    CB_NOT_FOUND:δ�ҵ�
**************************************************************/
cb_code_t KMPSearch(char *pat,int len_pat,
                    char *txt, int len_txt,
                    int  *pos)
{
    // Ԥ����pattern������� lps[]�����¼ǰ׺�ͺ�׺���ƥ��
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
    int len = 0;  // ��¼ǰһ��[�ƥ���ǰ׺�ͺ�׺]�ĳ���
    int i;

    lps[0] = 0; // lps[0] ������ 0
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
           // ����ط�������. ����������� AAACAAAA ,i = 7.
           len = lps[len-1];

           // ����, ע�� i ������ط���û������
         }
         else // ��� (len == 0)
         {
           lps[i] = 0; //û��һ��ƥ���
           i++;
         }
       }
    }
}

// ����
//int main()
//{
//   char *txt = "ABABDABACDABABCABAB";
//   char *pat = "ABABCABAB";
//   KMPSearch(pat, strlen(pat), txt, strlen(txt) );
//   return 0;
//}
