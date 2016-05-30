using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Text;
using System.Windows.Forms;
using Communications;
using Communications.Channels;
using System.IO;
using System.Collections;

namespace dpi
{
    public partial class MainForm : Form
    {
        /// <summary>
        /// ����ˣ�������������վ��ͨѶ
        /// </summary>
        private Communications.Channels.TCPServerChannel channel1 = new Communications.Channels.TCPServerChannel();
       
        public MainForm()
        {
            InitializeComponent();
            channel1.DataReceived += new ChannelEventHandler(OnDataReceived1);
        }

        /// <summary>
        /// ��ʮ����������ת��Ϊ�ַ���
        /// </summary>
        /// <param name="source">��ת��������</param>
        /// <param name="index">��ʼλ��</param>
        /// <param name="length">����</param>
        /// <returns>ת������ַ���,���ո�</returns>
        public string HexBytesToString(byte[] source, int index, int length)
        {
            string value = "";
            for (int i = 0; i < length; i++)
            {
                value = value + " " + source[index + i].ToString("X2");
            }
            return value;
        }

        int file_id = 1;
        string filePath = "D:\\data";
        /// <summary>
        /// ����վ��������
        /// </summary>
        /// <param name="s_command">���͵������ַ���</param>
        /// <returns>void</returns>
        private void OnDataReceived1(object sender, Communications.ChannelEventArgs e)
        {
            //channel3.ConnectionString = e.Channel.ConnectionString;
            string filename = "\\pkt_" + file_id.ToString("D8");

            //�����ж��ļ��Ƿ���ڣ��������жϴ�С������ֱ��д
            if (File.Exists(filePath + filename))
            {
                FileInfo fileInfo = new FileInfo(filePath + filename);
                if (fileInfo.Length > 1024 * 1024 * 2)
                {
                    file_id++;
                    filename = "pkt_" + file_id.ToString("D8");
                }
            }

            //ʵ����һ���ļ���--->��д���ļ������
            FileStream fs = new FileStream(filePath + filename, FileMode.Append);
            //ʵ����һ��StreamWriter-->��fs�����
            BinaryWriter bw = new BinaryWriter(fs, Encoding.Default);
            bw.Write(e.Data,0, e.Data.Length);


            //��ջ�����
            bw.Flush();
            //�ر���
            bw.Close();
            fs.Close();
            return;
        }
       

        private void btn_start_Click(object sender, EventArgs e)
        {
            try
            {
                channel1.LocalPort = tBox_port.Text.Trim();
                channel1.Open();
                btn_start.Enabled = false;
                tBox_port.Enabled = false;
            }
            catch (System.Exception ex)
            {
                MessageBox.Show(ex.ToString());
            }


        }

        private void btn_close_Click(object sender, EventArgs e)
        {
            channel1.Close();
            btn_start.Enabled = true;
            tBox_port.Enabled = true;
        }

        private void MainForm_Load(object sender, EventArgs e)
        {
            if (Directory.Exists(filePath))
            {
                Directory.Delete(filePath, true);
            }
            Directory.CreateDirectory(filePath);
        }
    }
}