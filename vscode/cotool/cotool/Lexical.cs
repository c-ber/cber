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
    }
}
