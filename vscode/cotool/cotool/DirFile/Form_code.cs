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

        //���class���ļ�
        void  xiugai_code1()
        {
            //ÿ��class��һ��namespaceͷ�����ȱ���ÿ���ļ�����ͷ�����ӣ�β�����Ӽ���

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
                    if (findflag == true)//ֻ�滻һ�μ���
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
                    MessageBox.Show(fpath + ":[ " + cmpstr + "]��������ʧ�ܣ�δ�ҵ������");
                }
            }
            MessageBox.Show("�����", "��ʾ");
        }

        //���form���ļ�
        void xiugai_code2()
        {
            //ÿ��class��һ��namespaceͷ�����ȱ���ÿ���ļ�����ͷ�����ӣ�β�����Ӽ���

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
                    if (findflag == true)//ֻ�滻һ�μ���
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
                    MessageBox.Show(fpath + ":[ " + cmpstr + "]��������ʧ�ܣ�δ�ҵ������");
                }
            }
            MessageBox.Show("�����", "��ʾ");
        }

        private void button1_Click(object sender, EventArgs e)
        {
            //xiugai_code1();
            xiugai_code2();
        }
    }
}
