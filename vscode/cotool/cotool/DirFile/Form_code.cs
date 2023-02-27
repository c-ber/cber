using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Drawing;
using System.Data;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Collections;
using System.IO;

namespace cotool.DirFile
{
    public partial class Form_code : UserControl
    {
        public Form_code()
        {
            InitializeComponent();
        }
        DataDeal dd = new DataDeal();


        void set_content()
        {

        }

        //针对class的文件
        void  xiugai_code1()
        {
            //每个class加一个namespace头部，先遍历每个文件，在头部增加，尾部增加即可

            string path = tbox_dir.Text.Trim();
            string space = tbox_space.Text.Trim();
            DirectoryInfo root = new DirectoryInfo(path);
            FileInfo[] files = root.GetFiles();
            foreach (FileInfo file in files)
            {
                string fpath = file.FullName;
                if (!file.Name.Contains(".cs"))
                {
                    continue;
                }
                if (!file.Name.Contains("Class"))
                {
                    continue;
                }
                string new_content = "namespace " + space + " { ";

                string cmpstr = "internal class Class";
                bool findflag = false;
                var utf8WithBom = new UTF8Encoding(true);

                ArrayList linelist = new ArrayList();
                dd.get_file_content(fpath, linelist, utf8WithBom);

                FileStream fs = new FileStream(fpath, FileMode.Create);

                StreamWriter sw = new StreamWriter(fs, utf8WithBom);

                for (int i = 0; i < linelist.Count; i++)
                {
                    if (findflag == true)//只替换一次即可
                    {
                        sw.WriteLine(linelist[i]);
                        continue;
                    }

                    if (linelist[i].ToString().Contains(cmpstr))
                    {
                        sw.WriteLine(new_content);
                        findflag = true;
                    }
                    sw.WriteLine(linelist[i]);
                }
                sw.WriteLine("}" + Environment.NewLine);
                sw.Flush();
                sw.Close();
                fs.Close();
                if (findflag == false)
                {
                    findflag = true;
                    Clipboard.SetDataObject(cmpstr);
                    MessageBox.Show(fpath + ":[ " + cmpstr + "]代码生成失败，未找到插入点");
                }
            }
            MessageBox.Show("完成了", "提示");
        }

        //针对form的文件
        void xiugai_code2()
        {
            //每个class加一个namespace头部，先遍历每个文件，在头部增加，尾部增加即可

            string path = tbox_dir.Text.Trim();
            string space = tbox_space.Text.Trim();
            DirectoryInfo root = new DirectoryInfo(path);
            FileInfo[] files = root.GetFiles();
            foreach (FileInfo file in files)
            {
                string fpath = file.FullName;
                if (!file.Name.Contains(".cs"))
                {
                    continue;
                }
                string new_content = "namespace " + space + " { ";

                string cmpstr = "internal class ";
                bool findflag = false;
                var utf8WithBom = new UTF8Encoding(true);

                ArrayList linelist = new ArrayList();
                dd.get_file_content(fpath, linelist, utf8WithBom);

                FileStream fs = new FileStream(fpath, FileMode.Create);

                StreamWriter sw = new StreamWriter(fs, utf8WithBom);

                for (int i = 0; i < linelist.Count; i++)
                {
                    if (findflag == true)//只替换一次即可
                    {
                        sw.WriteLine(linelist[i]);
                        continue;
                    }

                    if (linelist[i].ToString().Contains(cmpstr))
                    {
                        sw.WriteLine(new_content);
                        findflag = true;
                    }
                    sw.WriteLine(linelist[i]);
                }
                sw.WriteLine("}" + Environment.NewLine);
                sw.Flush();
                sw.Close();
                fs.Close();
                if (findflag == false)
                {
                    findflag = true;
                    Clipboard.SetDataObject(cmpstr);
                    MessageBox.Show(fpath + ":[ " + cmpstr + "]代码生成失败，未找到插入点");
                }
            }
            MessageBox.Show("完成了", "提示");
        }

        private void button1_Click(object sender, EventArgs e)
        {
            //xiugai_code1();
            xiugai_code2();
        }
    }
}
