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
using SimulationTransfer;

namespace SimulationTransfer
{

    public partial class MainForm : Form
    {
        /// <summary>
        /// 服务端，负责与升级主站的通讯
        /// </summary>
        private Communications.Channels.TCPServerChannel channel1 = new Communications.Channels.TCPServerChannel();
        /// <summary>
        /// 报文解析与组帧类
        /// </summary>
        private ControlConn cc = new ControlConn("hncj", "hncj123");
        /// <summary>
        /// 日志
        /// </summary>
        public static Logbooks.Logbook log = new Logbooks.Logbook(Path.Combine(Application.StartupPath, "\\Log"));

        /// <summary>
        /// 判断此时登陆报文是否正在等待回应确认
        /// </summary>
        private ConnStatus Login = ConnStatus.UNLOGIN;
        /// <summary>
        /// 判断此时心跳报文是否正在等待回应确认
        /// </summary>
        private ConnStatus HeatBeat = ConnStatus.NONE;

        public DataTable dt = new DataTable("dpi");
        public int pkt_num = 0;
        public int rlt_num = 0;

        public delegate void MyInvoke(string head, string text, bool force);  //定义一个委托  

        public delegate void MyInvoke1();  //定义一个委托  

        public MainForm()
        {
            InitializeComponent();
            channel1.DataReceived += new ChannelEventHandler(OnDataReceived1);

            ImageList image = new ImageList();
            image.ImageSize = new Size(1, 18);
            this.listView_mess.SmallImageList = image;

            dt.Columns.Add("序号", typeof(int));
            dt.Columns.Add("用户IP", typeof(string));
            dt.Columns.Add("应用ID", typeof(string));
            dt.Columns.Add("应用名称", typeof(string));
            dt.Columns.Add("应用类别", typeof(string));
            dt.Columns.Add("应用行为", typeof(string));
            dt.Columns.Add("审计用户名", typeof(string));
            dt.Columns.Add("审计内容", typeof(string));
            dataGridView1.DataSource = dt;
        }
        /// <summary>
        /// 更新消息
        /// </summary>
        /// <param name="head">消息</param>
        /// <param name="text">内容</param>
        /// <param name="force">是否强制显示日志</param>
        private void UpdateTextBox(string head, string text, bool force)
        {
            if (checkBox_Log.Checked || force)
            {
                if (listView_mess.Items.Count > 50)
                {
                    listView_mess.Items.Remove(listView_mess.Items[listView_mess.Items.Count - 1]);
                }
                ListViewItem lvi = new ListViewItem(new string[] { head, text }, -1);//创建列表项
                listView_mess.Items.Insert(0, lvi);//将项加入listView1列表中
            }
        }
        private void UpdateDataGridView()
        {
            if (dataGridView1.Rows.Count > 0)
            {
                dataGridView1.CurrentCell = dataGridView1.Rows[0].Cells[0];
            }
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

        private bool parse_tlv_data(byte[] buf, ref int readlen, DataRow dr)
        {
            tlv_type_t type = (tlv_type_t)buf[readlen];
            readlen++;
            string tmp = null;

            System.Text.UTF8Encoding ut = new System.Text.UTF8Encoding(false);

            //dr["应用ID"] = type;
            //dr["应用名称"] = type;
            //dr["应用类别"] = type;
            if (type == tlv_type_t.TLV_APP_ID)
            {
                if (buf.Length - readlen < 2)//length
                {
                    return false;
                }
                UInt16 length = (UInt16)((UInt16)buf[readlen] * 256 + (UInt16)buf[readlen + 1]);
                readlen += 2;

                if (buf.Length - readlen < length)//length
                {
                    return false;
                }
                //tmp = Encoding.Default.GetString(buf, readlen, length);
                dr["应用ID"] = (UInt16)((UInt16)buf[readlen] * 256 * 256 * 256 +
                    (UInt16)buf[readlen + 1] * 256 * 256 +
                    (UInt16)buf[readlen + 2] * 256 + (UInt16)buf[readlen + 3]);
                readlen += length;
            }
            else if (type == tlv_type_t.TLV_USER_IP)
            {
                if (buf.Length - readlen < 2)//length
                {
                    return false;
                }
                UInt16 length = (UInt16)((UInt16)buf[readlen] * 256 + (UInt16)buf[readlen + 1]);
                readlen += 2;

                if (buf.Length - readlen < length)//length
                {
                    return false;
                }
                //tmp = Encoding.Default.GetString(buf, readlen, length);
                dr["用户IP"] = buf[readlen].ToString("D") + "." + 
                               buf[readlen+1].ToString("D") + "." + 
                               buf[readlen+2].ToString("D") + "." + 
                               buf[readlen+3].ToString("D");
                readlen += length;
            }
            else if (type == tlv_type_t.TLV_APP_NAME)
            {
                if (buf.Length - readlen< 2)//length
                {
                    return false;
                }
                UInt16 length = (UInt16)((UInt16)buf[readlen] * 256 + (UInt16)buf[readlen + 1]);
                readlen += 2;

                if (buf.Length - readlen < length)//length
                {
                    return false;
                }
                tmp = ut.GetString(buf, readlen, length);
                dr["应用名称"] = tmp;
                readlen += length;
            }
            else if (type == tlv_type_t.TLV_APP_ACT)
            {
                if (buf.Length - readlen < 2)//length
                {
                    return false;
                }
                UInt16 length = (UInt16)((UInt16)buf[readlen] * 256 + (UInt16)buf[readlen + 1]);
                readlen += 2;

                if (buf.Length - readlen < length)//length
                {
                    return false;
                }
                tmp = ut.GetString(buf, readlen, length);

                dr["应用行为"] = tmp;
                readlen += length;
            }
            else if (type == tlv_type_t.TLV_AUDIT_ACCOUNT)
            {
                if (buf.Length - readlen < 2)//length
                {
                    return false;
                }
                UInt16 length = (UInt16)((UInt16)buf[readlen] * 256 + (UInt16)buf[readlen + 1]);
                readlen += 2;

                if (buf.Length - readlen < length)//length
                {
                    return false;
                }
                tmp = ut.GetString(buf, readlen, length);
                dr["审计用户名"] = tmp;
                readlen += length;
            }
            else if (type == tlv_type_t.TLV_AUDIT_CONTENT)
            {
                if (buf.Length - readlen < 2)//length
                {
                    return false;
                }
                UInt16 length = (UInt16)((UInt16)buf[readlen] * 256 * 256 * 256 +
                    (UInt16)buf[readlen + 1] * 256 * 256 +
                    (UInt16)buf[readlen + 2] * 256 + (UInt16)buf[readlen + 3]);
                readlen += 4;

                if (buf.Length - readlen < length)//length
                {
                    return false;
                }
                tmp = ut.GetString(buf, readlen, length);
                dr["审计内容"] = tmp;
                readlen += length;
            }
            return true;
        }
        /// <summary>
        /// 从FC7002B接收数据
        /// </summary>
        /// <param name="s_command">发送的命令字符串</param>
        /// <returns>void</returns>
        private void OnDataReceived1(object sender, Communications.ChannelEventArgs e)
        {
            string retStr = HexBytesToString(e.Data, 0, e.Data.Length);
            MyInvoke mi = new MyInvoke(UpdateTextBox);
            MyInvoke1 mi1 = new MyInvoke1(UpdateDataGridView);
            pkt_num++;
            this.BeginInvoke(mi, new object[] { "报文" + pkt_num.ToString(), retStr, true });

            //清空一部分缓存
            if (dt.Rows.Count >= 15)
            {
                dt.Rows.Remove(dt.Rows[dt.Rows.Count-1]);
                dataGridView1.DataSource = dt;
            }

            int read_len = 0;
            if (e.Data.Length < 3)
            {
                return;
            }
            if (e.Data[0] != 0x64 || e.Data[1] != 0x70 || e.Data[2] != 0x69)
            {
                return;
            }
            read_len += 3;

            UInt16 total_len = (UInt16)(((UInt16)e.Data[3] * 256) + (UInt16)(e.Data[4]));
            if (e.Data.Length != total_len)
            {
                return;
            }
            read_len += 2;

            DataRow dr = dt.NewRow();
            while (e.Data.Length - read_len > 0)
            {
                parse_tlv_data(e.Data, ref read_len, dr);
            }
            dr["序号"] = ++rlt_num;
            dt.Rows.InsertAt(dr, 0);
            this.BeginInvoke(mi1, new object[] {});
            return;

        }
        /// <summary>
        /// 解析接收的报文
        /// </summary>
        /// <param name="buf">报文数据</param>
        /// <returns>是否向升级主站转发数据</returns>
        private bool ParsePacket(byte[] buf)
        {
            bool  IsRetrunPacket = false;
            pType bufftype = cc.ParseData(buf);
            if (bufftype == pType.COMFIRM)
            {
                if (Login == ConnStatus.Logining)
                {
                    Login = ConnStatus.logined;
                }
                else if(HeatBeat == ConnStatus.HeartBeating)
                {
                    HeatBeat = ConnStatus.HeartBeated;
                }
            } 
            else if(bufftype == pType.TRANSFER)
            {
                IsRetrunPacket = true;
            }
            return IsRetrunPacket;
        }

        private byte[] spiltPacket(byte[] buf, ref int index)
        {
            int minCount = 26;

            try
            {
                if (index + minCount > buf.Length)
                {
                    return null;
                }

                int begin = index;

                if (buf[index] != 0x55 || buf[index + 1] != 0xAA
                    || buf[index + 2] != 0x55 || buf[index + 3] != 0xAA)
                {
                    return null;
                }

                index += 4;
                index += 12;

                int len = (int)DataConvert.HexBytesToULong(buf, index, 4);

                index += 4;
                index += len;
                index += 2;

                if (buf[index] != 0x55 || buf[index + 1] != 0xBB
                    || buf[index + 2] != 0x55 || buf[index + 3] != 0xBB)
                {
                    return null;
                }

                index += 4;


                byte[] buffer = new byte[index - begin];

                Array.Copy(buf, begin, buffer, 0, index - begin);

                return buffer;
            }
            catch (Exception ex)
            {
                MainForm.log.Record(Logbooks.RecordType.Err, "CheckErr", ex.ToString());
                return null;
            }

        }

       
        private void btn_start_Click(object sender, EventArgs e)
        {
            try
            {
                channel1.LocalPort = tBox_MasterAddr.Text.Trim();
                channel1.RecordLog = this.checkBox_Log.Checked;
                channel1.Open();
                UpdateTextBox("通信链路:", "TCP服务端已经开启…", true);
            }
            catch (System.Exception ex)
            {
                log.Record(Logbooks.RecordType.Err, "", ex.ToString());
                return;
            }

            btn_start.Enabled = false;
        }

        private void btn_close_Click(object sender, EventArgs e)
        {
            try
            {
                channel1.Close();
                UpdateTextBox("通信链路:", "TCP服务器已关闭…",true);
            }
            catch (System.Exception ex)
            {
                log.Record(Logbooks.RecordType.Err, "", ex.ToString());
            }

            
            btn_start.Enabled = true;
        }

        private void btn_clear_Click(object sender, EventArgs e)
        {
            listView_mess.Items.Clear();
            dt.Rows.Clear();
            dataGridView1.DataSource = dt;
            pkt_num = 0;
        }

        private void timer_hearbeat_Tick(object sender, EventArgs e)
        {
            
        }

        private void MainForm_Resize(object sender, EventArgs e)
        {
            this.columnHeader2.Width = listView_mess.Width - this.columnHeader1.Width;
        }
        private void contextMenuStrip1_ItemClicked(object sender, ToolStripItemClickedEventArgs e)
        {
            string currItem = e.ClickedItem.Text;
            ListView.SelectedIndexCollection index = this.listView_mess.SelectedIndices;
            System.Collections.IEnumerator myEnum = index.GetEnumerator();
            switch (currItem)
            {
                case "复制":

                    while (myEnum.MoveNext())
                    {
                        int tmpindex = (int)(myEnum.Current);
                        //Clipboard.SetDataObject(this.listViewShow.Items[tmpindex].SubItems[1].Text);两种方法均可以
                        Clipboard.SetText(listView_mess.Items[tmpindex].SubItems[1].Text, TextDataFormat.Text);
                    }
                    break;
                case "删除单行":
                    while (myEnum.MoveNext())
                    {
                        int tmpindex = (int)(myEnum.Current);
                        this.listView_mess.Items.Remove(this.listView_mess.Items[tmpindex]);
                    }
                    break;
                case "全部删除":
                    this.listView_mess.Items.Clear();
                    pkt_num = 0;
                    break;
                default: break;
            }

        }

        private void checkBox_Log_CheckedChanged(object sender, EventArgs e)
        {
            if (checkBox_Log.Checked)
            {
                channel1.RecordLog = true;//记录日志
            }
            else
            {
                channel1.RecordLog = false;//不记录日志
            }
        }

    }
}