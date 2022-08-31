using System;
using System.Collections;
using System.Data;
using System.IO;
using System.Linq;
using System.Text;
using System.Text.RegularExpressions;
using System.Windows.Forms;
using System.Xml;
using MySql.Data.MySqlClient;

namespace cotool.DirFile
{
    public partial class Form_file : UserControl
    {
        DataDeal dd = new DataDeal();
        Lexical lx = new Lexical();
        ExcelDeal ed = new ExcelDeal();

        Mysql mysql = null; //数据库连接
        DataTable db_word = new DataTable();//建立个数据表

        public Form_file()
        {
            InitializeComponent();
        }

        string defaultfilePath = "";

        private void button1_Click(object sender, EventArgs e)
        {
            string path = System.Windows.Forms.Application.StartupPath;
            DirectoryInfo folder = new DirectoryInfo(path);
            FileInfo[] files = folder.GetFiles("*", SearchOption.AllDirectories);
            foreach (FileInfo fi in files)
            {
                if (!fi.Name.Contains(".exe"))
                {
                    File.Move(fi.Name, fi.Name + ".jpg");
                }
            }
        }

        private void btn_dis_verb_Click(object sender, EventArgs e)
        {
            string path = System.Windows.Forms.Application.StartupPath;
            DirectoryInfo folder = new DirectoryInfo(path);
            FileInfo[] files = folder.GetFiles("*", SearchOption.AllDirectories);
            foreach (FileInfo fi in files)
            {
                if (!fi.Name.Contains(".exe"))
                {
                    File.Move(fi.Name, fi.Name.Replace(".jpg", ""));
                }
            }
        }

        private void btn_del_Click(object sender, EventArgs e)
        {
            string path = tbox_path.Text;
            DirectoryInfo folder = new DirectoryInfo(path);
            FileInfo[] files = folder.GetFiles("*", SearchOption.AllDirectories);
            foreach (FileInfo fi in files)
            {
                string delstr = tbox_delstr.Text.Trim();
                if (fi.Name.Contains(delstr))
                {
                    string newfile = fi.DirectoryName + "\\" + fi.Name.Replace(delstr, "").Trim();
                    File.Move(fi.FullName, newfile);
                }
            }
            MessageBox.Show("完成了", "提示");
        }

        private void btn_select_Click(object sender, EventArgs e)
        {
            //首次defaultfilePath为空，按FolderBrowserDialog默认设置（即桌面）选择
            if (defaultfilePath != "")
            {
                //设置此次默认目录为上一次选中目录
                folderBrowserDialog1.SelectedPath = defaultfilePath;
            }

            if (folderBrowserDialog1.ShowDialog() == DialogResult.OK)
            {
                //记录选中的目录
                defaultfilePath = folderBrowserDialog1.SelectedPath;
            }
            tbox_path.Text = defaultfilePath;
        }

        private void btn_delhead_Click(object sender, EventArgs e)
        {
            string path = tbox_path.Text;
            DirectoryInfo folder = new DirectoryInfo(path);
            FileInfo[] files = folder.GetFiles("*", SearchOption.AllDirectories);
            foreach (FileInfo fi in files)
            {
                string delstr = tbox_delhead.Text;//删除这个字符串及他前面的内容
                if (fi.Name.Contains(delstr))
                {
                    string new_name = fi.Name.Substring(fi.Name.IndexOf(delstr) + delstr.Length);
                    string newfile = fi.DirectoryName + "\\" + new_name.Trim();
                    File.Move(fi.FullName, newfile);
                }
            }
            MessageBox.Show("完成了", "提示");
        }
       

        private void btn_en_Click(object sender, EventArgs e)
        {
            string src_file = @"E:\考研里程\3、英语\真题文本\" +  cbox_year.Text.Trim();
            string opfile = @"E:\share\bigdata\wordcount.txt";

            ArrayList linelist = new ArrayList();
            dd.get_file_content(src_file, linelist);

            FileStream fs = new FileStream(opfile, FileMode.Create);
            StreamWriter sw = new StreamWriter(fs, Encoding.Default);
            for (int i = 0; i < linelist.Count; i++)
            {
                string line = linelist[i].ToString();
                line = lx.convert_to_en(line);
                line = line.ToLower();
                line = line.Replace("'", " ").Replace("\"", " ").Replace(",", " ");
                line = line.Replace(":", " ").Replace(".", " ").Replace("?", " ");
                line = line.Replace("[", " ").Replace("]", " ").Replace("’s"," ");
                line = line.Replace("(", " ").Replace(")", " ");

                string[] word = line.Split(' '); 
                string newline = "";
                foreach (string str in word)
                {
                    if (lx.is_english_word(str) && str.Length > 1) //如果是英文，字母就不要了
                    {
                        newline += str + " ";
                    }
                }

               sw.WriteLine(newline);
            }

            sw.Flush();
            sw.Close();
            fs.Close();


            MessageBox.Show("完成了", "提示");
        }


        void read_word_table()
        {
            string sql = "select * from " + src_table;
            try
            {
                db_word = mysql.ExecuteDataTable(dst_table, sql);
                if (db_word == null) return;
                if (db_word.Rows.Count <= 0)
                {
                    db_word = null;
                    MessageBox.Show("单词表读取为空", "提示");
                    return;
                }
                //再清空目标表
                mysql.ExecuteNonQuery("truncate table " + dst_table);
            }
            catch (Exception ex)
            {
                MessageBox.Show(ex.Message);
            }
            return;
        }
        
        /// <summary>
        /// 设置主词，衍生词的要写到sub中去，且行内主词要替换
        /// </summary>
        void set_root_word(int mid, int subid)
        {
            //先将sub的前三项拷贝到后面去
            db_word.Rows[subid]["v_word"] = db_word.Rows[subid]["word"];
            db_word.Rows[subid]["v_total"] = db_word.Rows[subid]["total"];
            db_word.Rows[subid]["v_year_num"] = db_word.Rows[subid]["year_num"];

            //将word替换为词根的，两外两个填空
            db_word.Rows[subid]["word"] = db_word.Rows[mid]["word"];
            db_word.Rows[subid]["total"] = System.DBNull.Value;
            db_word.Rows[subid]["year_num"] = System.DBNull.Value;
        }

        /// <summary>
        /// 还原单词形式
        /// </summary>
        /// <param name="word"></param>
        /// <param name="filter"></param>
        /// <param name="ori"></param>
        bool word_reduction(ref string word, string filter, string ori)
        {
            if (word.EndsWith(filter))// 判断字符串是否以指定的字符串结尾
            {
                word = lx.CutEndStr(word, filter, ori);
                return true;
            }
            return false;
        }
        /// <summary>
        ///单词包含分析是否是同一个词
        /// </summary>
        /// <param name="rword_list"></param>
        /// <param name="wd"></param>
        /// <returns></returns>
        bool sub_analysis(ArrayList wdlist,int wid)
        {
            try
            {
                string wd = db_word.Rows[wid]["word"].ToString().Trim();
                for (int i = 0; i < wdlist.Count; i++)
                {
                    int listid = Int32.Parse(wdlist[i].ToString());
                    string listword = db_word.Rows[listid]["word"].ToString().Trim();

                    bool isReplace = false;
                    //1.1、如果某个词以ing结尾,则尝试两个去e加ing
                    isReplace = word_reduction(ref wd, "ing", "eing");
                    if (!isReplace)
                        isReplace = word_reduction(ref listword, "ing", "eing");

                    //1.2、如果某个词以ying结尾,则还原为ieing
                    if (!isReplace)
                        isReplace = word_reduction(ref wd, "ying", "ieing");
                    if (!isReplace)
                        isReplace = word_reduction(ref listword, "ying", "ieing");

                    //2、复数，如果某个词以ies结尾,则还原为yes
                    if (!isReplace)
                        isReplace = word_reduction(ref wd, "ies", "yes");
                    if (!isReplace)
                        isReplace = word_reduction(ref listword, "ies", "yes");

                    //3、过去分词，如果某个词以ied结尾,则还原为yed
                    if (!isReplace)
                        isReplace = word_reduction(ref wd, "ied", "yed");
                    if (!isReplace)
                        isReplace = word_reduction(ref listword, "ied", "yed");

                    //4、主义者，如果某个词以ist结尾,则还原为eist
                    if (!isReplace)
                        isReplace = word_reduction(ref wd, "ist", "eist");
                    if (!isReplace)
                        isReplace = word_reduction(ref listword, "ist", "eist");

                    //前缀不算一个词，要排除
                    if (!wd.Substring(0, 2).Equals(listword.Substring(0, 2)))
                    {
                        continue;
                    }

                    //简单判断是否为子集,是则结束
                    if (wd.Contains(listword) && listword.Length >= 4)//list为根
                    {
                        set_root_word(listid, wid);
                        return true;
                    }
                    if (listword.Contains(wd))//新词为根，需要替换list
                    {
                        set_root_word(wid, listid);
                        wdlist.Remove(listid);
                        wdlist.Add(wid);
                        return true;
                    }

                }
            }
            catch (Exception ex)
            {
                MessageBox.Show(ex.Message);
            }
            return false;
        }

        void main_word_deal()
        {
            //遍历一下词汇，一个一个判断，不管怎么样，单词的长度一定要大于4
            ArrayList rword_list = new ArrayList();//存放那个词的id值吧
            for (int i = 0; i < db_word.Rows.Count; i++)
            {
                string wd = db_word.Rows[i]["word"].ToString().Trim();

                if(wd.Length < 4)
                {
                    rword_list.Add(i);
                    continue;
                }
                //只能做包含分析，包含则确定该词
                //没有则直接加入不处理，否则要进一步分析
                if(!sub_analysis(rword_list, i))//false是代表非衍生单词，需要加入list
                {
                    rword_list.Add(i);
                }
            }
        }

        //public string src_table = "en_word_test";
        public string src_table =  "en_word_bak";
        public string dst_table = "en_word";
        private void btn_root_Click(object sender, EventArgs e)
        {
            mysql = new Mysql(Mysql.connectstring);

            try
            {
                //先把表导出来
                read_word_table();
                //读取每一行，加入到root词列表，如果有跟他一半像的
                //并且符合一些特征，加ed，s，es，改y为ies，去e加ed类似
                main_word_deal();
                mysql.MySqlWriteDataTable("en_word", db_word);//批量块写入数据库
            }
            catch (Exception ex)
            {
                MessageBox.Show(ex.Message);
            }
            finally
            {
                mysql.Dispose();
            }
            MessageBox.Show("完成了", "提示");
        }


        //将xml转为Datable  
        public static DataTable XmlToDataTable(string xmlStr)
        {
            if (!string.IsNullOrEmpty(xmlStr))
            {
                StringReader StrStream = null;
                XmlTextReader Xmlrdr = null;
                try
                {
                    DataSet ds = new DataSet();
                    //读取字符串中的信息  
                    StrStream = new StringReader(xmlStr);
                    //获取StrStream中的数据  
                    Xmlrdr = new XmlTextReader(StrStream);
                    //ds获取Xmlrdr中的数据                 
                    ds.ReadXml(Xmlrdr);
                    return ds.Tables[0];
                }
                catch (Exception e)
                {
                    return null;
                }
                finally
                {
                    //释放资源  
                    if (Xmlrdr != null)
                    {
                        Xmlrdr.Close();
                        StrStream.Close();
                        StrStream.Dispose();
                    }
                }
            }
            return null;
        }

        //将datatable转为xml  
        public static string DataTable2Xml(DataTable vTable)
        {
            if (null == vTable) return string.Empty;
            if (string.IsNullOrEmpty(vTable.TableName))
            {
                vTable.TableName = "tbName";
            }
            StringWriter writer = new StringWriter();
            vTable.WriteXml(writer);
            string xmlstr = writer.ToString();
            writer.Close();
            return xmlstr;
        }

        private void button1_Click_1(object sender, EventArgs e)
        {
            //string[] col_name = { "multUse", "ShowTips" ,
            //    "val2" , "val1", "SellTag", "Type","val6",
            //    "val4","ClearTime","ShowMix","TypeTab","Desc",
            //    "Name","StoneTower","hideInPack","Action","CanResolve",
            //    "UsableInPack","AutoUse","Result","SellPrice","Id"};

            //DataTable dt = new DataTable("t_qqsh_packet");
            //dt.Columns.Add("multUse", typeof(string));
            //dt.Columns.Add("ShowTips", typeof(string));

            //dt.Columns.Add("val2", typeof(string));
            //dt.Columns.Add("val1", typeof(string));
            //dt.Columns.Add("SellTag", typeof(string));
            //dt.Columns.Add("Type", typeof(string));
            //dt.Columns.Add("val6", typeof(string));

            //dt.Columns.Add("val4", typeof(string));
            //dt.Columns.Add("ClearTime", typeof(string));
            //dt.Columns.Add("ShowMix", typeof(string));
            //dt.Columns.Add("TypeTab", typeof(string));
            //dt.Columns.Add("Desc", typeof(string));

            //dt.Columns.Add("Name", typeof(string));
            //dt.Columns.Add("StoneTower", typeof(string));
            //dt.Columns.Add("hideInPack", typeof(string));
            //dt.Columns.Add("Action", typeof(string));
            //dt.Columns.Add("CanResolve", typeof(string));

            //dt.Columns.Add("UsableInPack", typeof(string));
            //dt.Columns.Add("AutoUse", typeof(string));
            //dt.Columns.Add("Result", typeof(string));
            //dt.Columns.Add("SellPrice", typeof(string));
            //dt.Columns.Add("Id", typeof(UInt64));


            try
            {
                mysql = new Mysql(Mysql.connectstring);//打开数据库连接
                mysql.ExecuteNonQuery("truncate  t_qqsh_packet");


                XmlDocument xmldoc = new XmlDocument();
                xmldoc.Load(@"D:\cber-exe\packItem.xml");
                string text = xmldoc.InnerXml;

                XmlNodeList topM = xmldoc.SelectNodes("//Item");
                foreach (XmlElement element in topM)
                {
                    String packet_id = element.GetElementsByTagName("Id")[0].InnerText;
                    string name = element.GetElementsByTagName("Name")[0].InnerText;
                    string desc = element.GetElementsByTagName("Desc")[0].InnerText;

                    MySqlParameter[] para = new MySqlParameter[3];

                    para[0] = new MySqlParameter("@packet_id", MySqlDbType.String);
                    para[0].Value = packet_id;   //第1项 Id

                    para[1] = new MySqlParameter("@name", MySqlDbType.String);
                    para[1].Value = name; //第2项 物品名称

                    para[2] = new MySqlParameter("@desc", MySqlDbType.String);
                    para[2].Value = desc;  //第3项 描述

                    string sql = "INSERT INTO t_qqsh_packet(t_qqsh_packet.packet_id, t_qqsh_packet.name, t_qqsh_packet.desc) VALUES";
                    sql += "(@packet_id, @name, @desc)";
                    try
                    {
                        mysql.ExecuteNonQuery(sql, para);
                    }
                    catch(Exception ex)
                    {

                    }
                }

            }
            catch (Exception ex)
            {
                MessageBox.Show(ex.Message);
            }
            finally
            {
                mysql.Dispose();
            }
            MessageBox.Show("完成了", "提示");
        }
    }
}
