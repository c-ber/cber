using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Text.RegularExpressions;
using System.Threading.Tasks;

namespace cotool
{
    class Lexical
    {
        /// <summary>
        /// 全词匹配，特殊处理，可以加条件
        /// </summary>
        /// <param name="cmpstr"></param>
        /// <param name="content"></param>
        /// <returns></returns>
        public bool ReplaceWholeWord(string cmpstr, string content)
        {
            string pattern = String.Format(@"\b{0}\b", cmpstr);
            return Regex.IsMatch(content, pattern);
        }

        /// <summary>
        /// 有多个要替换的值存在slist中，content是要处理的文本
        /// </summary>
        /// <param name="slist"></param>
        /// <param name="content"></param>
        /// <returns></returns>
        public string replace_multi_str(SortedList<string, string> slist, string content)
        {
            foreach(KeyValuePair<string, string> item in slist)
            {
                if(search_all_word_match(item.Key, content))
                {
                    content = content.Replace(item.Key, item.Value);
                }
            }
            return content;
        }

        /// <summary>
        /// 获取一个指定的多行的文本段
        /// </summary>
        /// <param name="linelist"></param>
        /// <param name="start_idx"></param>
        /// <param name="end_idx"></param>
        /// <returns></returns>
        public string get_section_code(ArrayList linelist, int start_idx, int end_idx)
        {
            string ret_str = "";
            for(int i = 0; i < linelist.Count; i++)
            {
                if ( i < start_idx || i > end_idx)
                {
                    continue;
                }
                ret_str += linelist[i].ToString() + Environment.NewLine;
            }
            return ret_str;
        }


        /// <summary>
        ///找到指定字符串，返回行号
        /// </summary>
        /// <param name="linelist"></param>
        /// <param name="cmpstr"></param>
        /// <param name="line_no"></param>
        /// <returns></returns>
        public bool find_some_string(ArrayList linelist, string cmpstr, ref int line_no)
        {
            for(int i = 0; i < linelist.Count; i++)
            {
                string tmp_line = linelist[i].ToString().Trim();
                if(search_all_word_match(cmpstr, tmp_line))
                {
                    line_no = i;
                    return true;
                }
            }
            return false;
        }

        /// <summary>
        /// 多个空格转为一个空格
        /// </summary>
        /// <param name="str"></param>
        /// <returns></returns>
        public string MergeSpace(string str)
        {
            if( str != string.Empty && str != null && str.Length > 0)
            {
                str = new Regex("[\\s]+").Replace(str, " ");
            }
            return str;
        }

        /// <summary>
        /// 判断是否为c字符
        /// </summary>
        /// <param name="va"></param>
        /// <returns></returns>
        public bool is_variable(string va)
        {
            Match match = Regex.Match(va, @"^[a-zA-Z0-9_]+$");
            return match.Success;
        }
        /// <summary>
        /// 识别是否为英文单词
        /// </summary>
        /// <param name="va"></param>
        /// <returns></returns>
        public bool is_english_word(string va)
        {
            Match match = Regex.Match(va, @"^[a-zA-Z_-]*$");
            return match.Success;
        }
        /// <summary>
        /// 将中文字符转为英文字符
        /// </summary>
        /// <param name="text"></param>
        /// <returns></returns>
        public string convert_to_en(string text)
        {
            const string ch = "。；，？！、“”‘’（）—：";//中文字符
            const string en = @".;,?!\""""''()-:";//英文字符
            char[] c = text.ToCharArray();
            for (int i = 0; i < c.Length; i++)
            {
                int n = ch.IndexOf(c[i]);
                if (n != -1) c[i] = en[n];
            }
            return new string(c);
        }

        public bool search_all_word_match(string word, string content)
        {
            if(!content.Contains(word))
            {
                return false;
            }
            int word_start = content.IndexOf(word);
            if(word_start + word.Length < content.Length)
            {
                string tail_ch = content.Substring(word_start + word.Length, 1);
                if (is_variable(tail_ch))
                {
                    return false;
                }
            }

            if(word_start > 0)
            {
                string head_ch = content.Substring(word_start - 1, 1);
                if (is_variable(head_ch))
                {
                    return false;
                }
            }
            return true;
        }

        /// <summary>
        /// 比较二个字符串，查找出相同字数和差异字符
        /// </summary>
        /// <param name="s1"></param>
        /// <param name="s2"></param>
        /// <returns></returns>
        public int two_string_samelength(string s1, string s2)
        {
            int count = 0;/*相同字符个数*/
            int n = s1.Length > s2.Length ? s2.Length : s1.Length;/*获得较短的字符串的长度*/
            for (int i = 0; i < n; i++)
            {
                if (s1.Substring(i, 1) == s2.Substring(i, 1))
                /*同位置字符是否相同*/
                {
                    count++;
                }
                else
                {
                    //MessageBox.Show("s1:" + s1.Substring(i, 1) + "| s2:" + s2.Substring(i, 1));
                }
            }
            return count;
        }

        #region 替换字符串起始位置(开头)中指定的字符串
        /// <summary>  
        /// 替换字符串起始位置(开头)中指定的字符串  
        /// </summary>  
        /// <param name="s">源串</param>  
        /// <param name="searchStr">查找的串</param>  
        /// <param name="replaceStr">替换的目标串</param>  
        /// <returns></returns>  
        public string CutStarStr(string s, string searchStr, string replaceStr)
        {
            var result = s;
            try
            {
                if (string.IsNullOrEmpty(result))
                {
                    return result;
                }
                if (s.Length < searchStr.Length)
                {
                    return result;
                }
                if (s.IndexOf(searchStr, 0, searchStr.Length, StringComparison.Ordinal) > -1)
                {
                    result = s.Substring(searchStr.Length);
                }
                return replaceStr + result;
            }
            catch
            {
                return result;
            }
        }
        #endregion

        #region 替换字符串末尾位置中指定的字符串
        /// <summary>  
        /// 替换字符串末尾位置中指定的字符串  
        /// </summary>  
        /// <param name="s">源串</param>  
        /// <param name="searchStr">查找的串</param>  
        /// <param name="replaceStr">替换的目标串</param>  
        public string CutEndStr(string s, string searchStr, string replaceStr)
        {
            var result = s;
            try
            {
                if (string.IsNullOrEmpty(result))
                {
                    return result;
                }
                if (s.Length < searchStr.Length)
                {
                    return result;
                }
                if (s.IndexOf(searchStr, s.Length - searchStr.Length, searchStr.Length, StringComparison.Ordinal) > -1)
                {
                    result = s.Substring(0, s.Length - searchStr.Length);
                }
                return result + replaceStr;
            }
            catch
            {
                return result;
            }
        }
        #endregion
    }
}
