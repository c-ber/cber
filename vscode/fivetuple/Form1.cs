using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Text;
using System.Windows.Forms;
using System.IO;
using System.Collections;

namespace WindowsFormsApplication1
{
    public partial class Form1 : Form
    {
        void save_config_file()
        {
            string file_path = Application.StartupPath + "\\config.ini";
            //实例化一个文件流--->与写入文件相关联
            FileStream fs = new FileStream(file_path, FileMode.Create);

            //实例化一个StreamWriter-->与fs相关联
            StreamWriter sw = new StreamWriter(fs, Encoding.Default);

            sw.WriteLine(textBox1.Text);
            sw.WriteLine(textBox2.Text);
            sw.WriteLine(textBox3.Text);
            sw.WriteLine(textBox4.Text);
            sw.WriteLine(textBox5.Text);
            sw.WriteLine(textBox6.Text);
            sw.WriteLine(textBox7.Text);

            sw.WriteLine(checkBox1.Checked.ToString());
            sw.WriteLine(checkBox2.Checked.ToString());
            sw.WriteLine(checkBox3.Checked.ToString());
            sw.WriteLine(checkBox4.Checked.ToString());
            sw.WriteLine(checkBox5.Checked.ToString());
            sw.Flush();
            sw.Close();
            fs.Close();
        }
        void load_config_file()
        {
            string file_path = Application.StartupPath + "\\config.ini";
            //实例化一个文件流--->与写入文件相关联
            if (File.Exists(file_path))
            {
                StreamReader objReader = new StreamReader(file_path, Encoding.Default);
                string sLine = "";
                ArrayList linelist = new ArrayList();
                while (sLine != null)
                {
                    sLine = objReader.ReadLine();
                    if (sLine != null)
                    {
                        linelist.Add(sLine);
                    }
                }
                int count = 0;
                textBox1.Text = linelist[count++].ToString();
                textBox2.Text = linelist[count++].ToString();
                textBox3.Text = linelist[count++].ToString();
                textBox4.Text = linelist[count++].ToString();
                textBox5.Text = linelist[count++].ToString();
                textBox6.Text = linelist[count++].ToString();
                textBox7.Text = linelist[count++].ToString();

                checkBox1.Checked = bool.Parse(linelist[count++].ToString());
                checkBox2.Checked = bool.Parse(linelist[count++].ToString());
                checkBox3.Checked = bool.Parse(linelist[count++].ToString());
                checkBox4.Checked = bool.Parse(linelist[count++].ToString());
                checkBox5.Checked = bool.Parse(linelist[count++].ToString());

                objReader.Close();
            }
            else
            {
                MessageBox.Show("没有配置文件！", "提示");
            }
        }
        public Form1()
        {
            InitializeComponent();
            load_config_file();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            byte[] src_ip = new byte[4];
            byte[] dst_ip = new byte[4];

            string[] str_src_ip = textBox1.Text.Split('.');
            string[] str_dst_ip = textBox2.Text.Split('.');

            for (int i = 0; i < 4; i++)
            {
                src_ip[i] = byte.Parse(str_src_ip[i]);
                dst_ip[i] = byte.Parse(str_dst_ip[i]);
            }

            UInt16 port_src = UInt16.Parse(textBox3.Text);
            UInt16 port_dst = UInt16.Parse(textBox4.Text);
            byte oifgrp_id = byte.Parse(textBox5.Text);

            string file_path = Application.StartupPath + "\\output.txt";
            FileStream fs = new FileStream(file_path, FileMode.Create);
            StreamWriter sw = new StreamWriter(fs, Encoding.Default);

            UInt16 dz = (UInt16)(((UInt16)src_ip[2]) *256 + (UInt16)src_ip[3]);
            UInt16 dz1 = (UInt16)(((UInt16)dst_ip[2]) *256 + (UInt16)dst_ip[3]);

            for (int i = 1; i <= 10000; i++)
            {
                string md = "rule mask v4 add " + (i+int.Parse(textBox7.Text)).ToString() + " "
                    + src_ip[0].ToString() + "."
                    + src_ip[1].ToString() + "."
                    + (dz / 256).ToString() + "."
                    + (dz & 0xff).ToString() + " "
                    + dst_ip[0].ToString() + "."
                    + dst_ip[1].ToString() + "."
                    + (dz1 / 256).ToString() + "."
                    + (dz1 & 0xff).ToString()
                    + " "
                    + port_src.ToString()
                    + " "
                    + port_dst.ToString() + " "
                    + comboBox1.Text
                    + " " + textBox6.Text +" forward "
                    + oifgrp_id.ToString();

                sw.WriteLine(md);

                if (checkBox6.Checked)
                {
                    sw.WriteLine("rule mask v4 commit");
                }
                
                if (checkBox1.Checked)
                {
                    dz++;
                }
                if (checkBox2.Checked)
                {
                    dz1++;
                }
                if (checkBox3.Checked)
                {
                    port_src++;
                }
                if (checkBox4.Checked)
                {
                    port_dst++;
                }
                if (checkBox5.Checked)
                {
                    if (oifgrp_id == 64)
                    {
                        oifgrp_id = 1;
                    }
                    else
                    {
                        oifgrp_id++;
                    }                  
                }
            }

            sw.Flush();
            sw.Close();
            fs.Close();
            MessageBox.Show("文件生成成功！");
            save_config_file();
        }
    }
}
