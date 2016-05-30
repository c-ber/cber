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
        /// 服务端，负责与升级主站的通讯
        /// </summary>
        private Communications.Channels.TCPServerChannel channel1 = new Communications.Channels.TCPServerChannel();
       
        public MainForm()
        {
            InitializeComponent();
            channel1.DataReceived += new ChannelEventHandler(OnDataReceived1);
        }

        /// <summary>
        /// 将十六进制数组转换为字符串
        /// </summary>
        /// <param name="source">待转换的数组</param>
        /// <param name="index">起始位置</param>
        /// <param name="length">长度</param>
        /// <returns>转换后的字符串,带空格</returns>
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
        /// 从主站接收数据
        /// </summary>
        /// <param name="s_command">发送的命令字符串</param>
        /// <returns>void</returns>
        private void OnDataReceived1(object sender, Communications.ChannelEventArgs e)
        {
            //channel3.ConnectionString = e.Channel.ConnectionString;
            string filename = "\\pkt_" + file_id.ToString("D8");

            //首先判断文件是否存在，存在则判断大小，否则直接写
            if (File.Exists(filePath + filename))
            {
                FileInfo fileInfo = new FileInfo(filePath + filename);
                if (fileInfo.Length > 1024 * 1024 * 2)
                {
                    file_id++;
                    filename = "pkt_" + file_id.ToString("D8");
                }
            }

            //实例化一个文件流--->与写入文件相关联
            FileStream fs = new FileStream(filePath + filename, FileMode.Append);
            //实例化一个StreamWriter-->与fs相关联
            BinaryWriter bw = new BinaryWriter(fs, Encoding.Default);
            bw.Write(e.Data,0, e.Data.Length);


            //清空缓冲区
            bw.Flush();
            //关闭流
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