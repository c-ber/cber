using System;
using System.Collections;
using System.IO;
using System.Linq;
using System.Text;
using System.Text.RegularExpressions;
using System.Windows.Forms;

namespace cotool.DirFile
{
    public partial class Form_file : UserControl
    {
        DataDeal dd = new DataDeal();
        Lexical lx = new Lexical();

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
    }
}
