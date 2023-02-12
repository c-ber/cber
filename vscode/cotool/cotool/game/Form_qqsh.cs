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
using Newtonsoft.Json;
using System.IO;
using System.Threading;
using System.Net;
using System.Web;
using Jayrock.Json;
using System.Globalization;
using System.Security.Cryptography;
using Jayrock.Json.Conversion;
using System.Text.RegularExpressions;
using System.Runtime.InteropServices;

namespace cotool.game
{

    public partial class Form_qqsh : UserControl
    {
        public Form_qqsh()
        {
            InitializeComponent();
        }
        DataDeal dd = new DataDeal();

        //{"ret":0,"des":"登录成功,当前最新版本为[V12.82]","md1":"511550baf241e1d97fb400d853498908","md2":"b5beee43b1fb02ce660bc19e584d4560","t":"1647707960","loginTime":"1647684499","expireTime":"1784385542","vipLoginTips":"小黑包含账户密码等信息，以免泄露密码！","blackqqs":"20401738#","gcmd":{"monster":5569,"fmonster":5571,"plant":5035,"getarti":5575,"tgw":"tgw_l7_forward","gameKey":"JQM1737070688","sdfmd":5573,"gbp":5672}}

        //{"tips":"我的脚本","list":[
        //{"cmd":"4211","id":"0","num":"70030220","temp1":"0","temp2":"0", "name":"req-4211-攻打副本-临时测试", "flag":"1" }
        //]}
        /// <summary>
        /// 批量打一个副本关卡，一般25个吧
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        private void btn_tongguan_Click(object sender, EventArgs e)
        {
            //先处理数据，再转化存文件
            string filename = "副本攻打_" + tbox_fb_name.Text.Trim();
            QQ_shuihu sh_xiaohei = new QQ_shuihu();
            sh_xiaohei.tips = filename;
            List<CmdBody> cmdbody_list = new List<CmdBody>();

            try
            {
                for (uint i = 0; i < uint.Parse(tbox_fb_num.Text); i++)
                {
                    CmdBody cmdbody_tmp = new CmdBody();
                    cmdbody_tmp.cmd = "4211";
                    cmdbody_tmp.id = "0";
                    cmdbody_tmp.num = String.Format("{0:D8}", uint.Parse(tbox_fb_fid.Text) + i);
                    cmdbody_tmp.temp1 = "0";
                    cmdbody_tmp.temp2 = "0";
                    cmdbody_tmp.name = filename;
                    cmdbody_tmp.flag = "1";
                    cmdbody_list.Add(cmdbody_tmp);
                }
                sh_xiaohei.list = cmdbody_list;
                string json_text =  Newtonsoft.Json.JsonConvert.SerializeObject(sh_xiaohei);
                json_text = json_text.Replace("},", "}," + Environment.NewLine);
                json_text = json_text.Replace("]}", Environment.NewLine + "]}");
                json_text = json_text.Replace(":[", ":[" + Environment.NewLine);

                //先在指定目录创建一个副本脚本文件，再批量生成即可，保存文件
                string path = @"D:\软件\qqxh\0000-cb文件夹\地图副本生成脚本\" + filename + ".txt";
                File.WriteAllText(path, json_text);
            }
            catch (Exception ex)
            {
                MessageBox.Show(ex.Message);
            }
            finally
            {
                MessageBox.Show("已完成副本保存");
            }
        }

        private void Form_qqsh_Load(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            //test data
            //uint typeid = 0x00e4;
            //MemoryStream ms = new MemoryStream();
            //WriteUtils.write_TYPE_UINT32(ms,typeid);


            OpenFileDialog openFileDialog = new OpenFileDialog();
            openFileDialog.Multiselect = true;
            openFileDialog.ShowDialog();
            listView1.Items.Clear();
            for (int i = 0; i < openFileDialog.FileNames.Length; i++)
            {
                string fileName = openFileDialog.FileNames[i].ToString();
                try
                {
                    int num = 0;
                    FileInfo fileInfo = new FileInfo(fileName);
                    FileStream fileStream = fileInfo.OpenRead();
                    byte[] array = new byte[fileStream.Length];
                    fileStream.Read(array, 0, array.Length);
                    fileStream.Close();
                    MemoryStream memoryStream = new MemoryStream();
                    memoryStream.Write(array, num, array.Length - num);
                    ReqDefault reqDefault = new ReqDefault();
                    memoryStream.Seek(0L, SeekOrigin.Begin);
                    reqDefault.readExternal(memoryStream, (int)memoryStream.Length);
                    if (reqDefault.head.cmd == 5644)
                    {
                        Req5644 req = new Req5644();
                        memoryStream.Seek(0L, SeekOrigin.Begin);
                        req.readExternal(memoryStream, (int)memoryStream.Length);
                        PBoyCommunicator.decodePackage(memoryStream.ToArray());
                        int num2 = 0;
                        ListViewItem listViewItem = listView1.Items.Add(fileInfo.Name);
                        listViewItem.SubItems.Add(string.Concat(req.head.cmd));
                        listViewItem.SubItems.Add(string.Concat(req.activity_id));
                        listViewItem.SubItems.Add(string.Concat(req.oper_id));
                        listViewItem.SubItems.Add(string.Concat(req.val_1));
                        listViewItem.SubItems.Add(string.Concat(req.val_2));
                        listViewItem.SubItems.Add(string.Concat(req.val_3));
                        listViewItem.SubItems.Add(string.Concat(req.val_4));
                        listViewItem.SubItems.Add(string.Concat(req.val_5));
                    }
                    else if (reqDefault.head.cmd == 5682)
                    {
                        ReqMixTreasureMulti reqMixTreasureMulti = new ReqMixTreasureMulti();
                        memoryStream.Seek(0L, SeekOrigin.Begin);
                        reqMixTreasureMulti.readExternal(memoryStream, (int)memoryStream.Length);
                        PBoyCommunicator.decodePackage(memoryStream.ToArray());
                        int num2 = 0;
                        ListViewItem listViewItem = listView1.Items.Add(fileInfo.Name);
                        listViewItem.SubItems.Add(string.Concat(reqMixTreasureMulti.head.cmd));
                        listViewItem.SubItems.Add(string.Concat(reqMixTreasureMulti.discount_element_id));
                        TreaCondition treaCondition = (TreaCondition)reqMixTreasureMulti.treaConds[0];
                        listViewItem.SubItems.Add(string.Concat(treaCondition.id));
                        listViewItem.SubItems.Add(string.Concat(treaCondition.treasure_id));
                        listViewItem.SubItems.Add(string.Concat(treaCondition.times));
                    }
                    else
                    {
                        ReqDefault reqDefault2 = new ReqDefault();
                        memoryStream.Seek(0L, SeekOrigin.Begin);
                        reqDefault2.readExternal(memoryStream, (int)memoryStream.Length);
                        PBoyCommunicator.decodePackage(memoryStream.ToArray());
                        int num2 = 0;
                        ListViewItem listViewItem = listView1.Items.Add(fileInfo.Name);
                        listViewItem.SubItems.Add(string.Concat(reqDefault2.head.cmd));
                        listViewItem.SubItems.Add(string.Concat(reqDefault2.type));
                        listViewItem.SubItems.Add(string.Concat(reqDefault2.num));
                        listViewItem.SubItems.Add(string.Concat(reqDefault2.temp1));
                        listViewItem.SubItems.Add(string.Concat(reqDefault2.temp2));
                        listViewItem.SubItems.Add(string.Concat(reqDefault2.temp3));
                        listViewItem.SubItems.Add(string.Concat(reqDefault2.temp4));
                        listViewItem.SubItems.Add(string.Concat(reqDefault2.temp5));
                    }
                }
                catch (Exception ex)
                {
                    string text = ex.Message + ex.StackTrace;
                }
            }
            bulid_script();
        }

        void bulid_script()
        {
            try
            {
                string str_content = "";
                StringBuilder stringBuilder = new StringBuilder();
                stringBuilder.Append("{\"tips\":\"我的脚本\",\"list\":[\r\n");
                for (int i = 0; i < listView1.Items.Count; i++)
                {
                    string text = listView1.Items[i].SubItems[0].Text;
                    string text2 = listView1.Items[i].SubItems[1].Text;
                    string text3 = listView1.Items[i].SubItems[2].Text;
                    string text4 = listView1.Items[i].SubItems[3].Text;
                    string text5 = listView1.Items[i].SubItems[4].Text;
                    string text6 = listView1.Items[i].SubItems[5].Text;
                    str_content = "{\"cmd\":\"" + text2 + "\",\"id\":\"" + text3 + "\",\"num\":\"" + text4 + "\",\"temp1\":\"" + text5 + "\",\"temp2\":\"" + text6 + "\", \"name\":\"" + text + "\", \"flag\":\"1\" }";
                    stringBuilder.Append(str_content);
                    if (i < listView1.Items.Count - 1)
                    {
                        stringBuilder.Append(",\r\n");
                    }
                }
                stringBuilder.Append("\r\n]}");
                string data = stringBuilder.ToString();
                textBox1.Text = data;
                Clipboard.SetDataObject(data, copy: true);
                //MessageBox.Show("脚本已经拷贝到剪贴板，请打开脚本工具粘贴到空白处执行即可！");
                //Clipboard.SetDataObject(listView1.Items[0].SubItems[2].Text, copy: true);//cber 临时
                Clipboard.SetDataObject(str_content + ",", copy: true);//cber 临时
            }
            catch (Exception ex)
            {
                MessageBox.Show(ex.Message);
            }
        }
        private void button2_Click(object sender, EventArgs e)
        {
            bulid_script();
        }


        void bulid_script_full()
        {
            try
            {
                string str_content = "";
                StringBuilder stringBuilder = new StringBuilder();
                stringBuilder.Append("{\"tips\":\"我的脚本\",\"list\":[\r\n");
                for (int i = 0; i < listView1.Items.Count; i++)
                {
                    string text = listView1.Items[i].SubItems[0].Text;
                    string text2 = listView1.Items[i].SubItems[1].Text;
                    string text3 = listView1.Items[i].SubItems[2].Text;
                    string text4 = listView1.Items[i].SubItems[3].Text;
                    string text5 = listView1.Items[i].SubItems[4].Text;
                    string text6 = listView1.Items[i].SubItems[5].Text;
                    string val1 = listView1.Items[i].SubItems[6].Text;
                    string val2 = listView1.Items[i].SubItems[7].Text;
                    string val3 = listView1.Items[i].SubItems[8].Text;
                    str_content = "{\"cmd\":\"" + text2 + "\",\"id\":\"" + text3 + "\",\"num\":\"" + text4 + 
                        "\",\"temp1\":\""  + text5 + 
                        "\",\"temp2\":\"" + text6 +
                        "\",\"val1\":\"" + val1 +
                        "\",\"val2\":\"" + val2 +
                        "\",\"val3\":\"" + val3 +
                        "\", \"name\":\"" + text + "\", \"flag\":\"1\" }";
                    stringBuilder.Append(str_content);
                    if (i < listView1.Items.Count - 1)
                    {
                        stringBuilder.Append(",\r\n");
                    }
                }
                stringBuilder.Append("\r\n]}");
                string data = stringBuilder.ToString();
                textBox1.Text = data;
                Clipboard.SetDataObject(data, copy: true);
                //MessageBox.Show("脚本已经拷贝到剪贴板，请打开脚本工具粘贴到空白处执行即可！");
                //Clipboard.SetDataObject(listView1.Items[0].SubItems[2].Text, copy: true);//cber 临时
                Clipboard.SetDataObject(str_content + ",", copy: true);//cber 临时
            }
            catch (Exception ex)
            {
                MessageBox.Show(ex.Message);
            }
        }
        private void btn_full_Click(object sender, EventArgs e)
        {
            bulid_script_full();
        }

        /// <summary>
        /// 自定义class放前面会导致Form设计界面异常，不能出来
        /// </summary>
        public class CmdBody
        {
            public string cmd { get; set; }
            public string id { get; set; }
            public string num { get; set; }
            public string temp1 { get; set; }
            public string temp2 { get; set; }
            public string name { get; set; }
            public string flag { get; set; }
        }

        public class QQ_shuihu
        {
            public string tips { get; set; }

            List<CmdBody> cmd_linelist = new List<CmdBody>();
            public List<CmdBody> list
            {
                get { return cmd_linelist; }
                set { cmd_linelist = value; }
            }
        }
        #region 会员测试代码

        public class Class869
        {
            // Fields
            private static bool bool_0;

            // Methods
            internal static void smethod_0()
            {
            }
        }
        public class Class5_login_result
        {
            // Fields
            public int jy_ret;  //注册验证结果码
            public string md1;
            public string md2;
            public string expireTime;
            public string loginTime;
            public string des;

            // Methods
            public Class5_login_result(){  }
        }

        public class Class7
        {
            // Fields
            private static byte[] byte_0;
            private static string string_0;
            private static float float_0;
            public static string string_1;

            // Methods
            static Class7()
            {
                byte_0 = null;
                string_0 = "gcs.xh";
                string_1 = "";
            }

            public Class7() { }
            public static ArrayList smethod_0(){ return null; }
            public static bool smethod_1(bool bool_0) { return true; }
            private static void smethod_2(byte[] byte_1) { return ; }
            private static void smethod_3(bool bool_0) { return ; }
            public static void smethod_4() { return ; }
            private static void smethod_5(object object_0, object object_1) { return ; }
            private static void smethod_6(object sender, ProgressChangedEventArgs e) { return ; }
            public static ArrayList smethod_7() { return null; }
            public static ArrayList smethod_8() { return null; }
        }
        public class Class2
        {
            // Fields
            public static string string_0;
            public static string string_1;
            public static bool bool_0;
            public static float float_0;
            public static string string_2;
            public static string string_3;
            public static string string_4;
            public static string string_5;
            public static string string_6;
            public static string string_7;
            public static string string_8;
            public static string string_9;
            public static string string_10;
            public static string string_11;
            public static string string_12;
            private static readonly string string_13;
            private static readonly string string_14;
            private static readonly string string_15;
            private static readonly string string_16;

            // Methods
            static Class2()
            {
                string_0 = "12.84";
                string_1 = "2022-05-30 00:00:00";
                bool_0 = true;//Class832.smethod_2("setup", "is.debuging") == "1";
                float_0 = 0;
                string_2 = "qqsh";
                string_3 = "QQ水浒小黑";
                string_4 = "QQ水浒小黑V%version%-[%username%]最安全最好用的QQ水浒辅助工具 始于[2012-05-10]";
                string_5 = "https://imgcache.qzoneapp.com/sango/frontend_swf/App.swf?v=0.8.19-b22403";
                string_6 = "x-flash-version: 10,0,42,34";
                string_7 = "http://gcs.jingdongybk.com/";
                string_8 = "https://res.108.qq.com/flash/s/fad58de7366495db4650cfefac2fcd61.000621.swf/[[DYNAMIC]]/2";
                string_9 = "https://xui.ptlogin2.qq.com/cgi-bin/xlogin?appid=614008604&daid=153&s_url=https%3A%2F%2Fgame.108.qq.com%2Flogined.html&style=20&protocal=https&target=self&border_radius=16&hide_close_icon=1";
                string_10 = "MIGdMA0GCSqGSIb3DQEBAQUAA4GLADCBhwKBgQCBoXdlKk4Xgavc6od9LRJQSQCwKdaezg8awY326Dr6PyC7iPr7ToKCTeykjBCPz+R5Qn+tgFc/mM1yNbUA4AlZGquKZWrPqyD8zEtpSpqUN1ghQ4hyl3BwFakOkM+QCUHtAsgvEonxpt9kzVMt/tnhilfCftc10qmxSO61prgqAQIBEQ==";
                string_11 = string_7 + "/hf/qqsh20150119.html";
                string_12 = string_7 + "/ad/login_ad.html";
                string_13 = "";
                string_14 = "";
                string_15 = "";
                string_16 = "";
            }

            public Class2() { }

            public static string smethod_0() { return null; }
            public static string smethod_1() { return null; }
        }

        internal class Class11_Log : Interface2  //写日志模块
        {
            // Fields
            private static object object_0;
            private static object object_1;
            private static object object_2;

            public Class11_Log() { }

            public void imethod_0(string string_0)
            {
                log_write(string_0);
            }

            private static void smethod_0() { return ; }
            public static void smethod_1() { return ; }
            public static void smethod_2(string string_0, string string_1) { return ; }
            private static void smethod_3() { return ; }
            private static void smethod_4() { return ; }
            private static void smethod_5() { return ; }
            public static void log_write(string string_0) { return ; }
            public static void smethod_7(string string_0) { return ; }
            public static void smethod_8(string string_0) { return ; }
        }

        //黑名单qq处理类
        internal class Class1
        {
            // Fields
            private static string[] string_0;
            public static ArrayList arrayList_0;
            public static ArrayList arrayList_1;

            // Methods
            static Class1()
            {
                Class869.smethod_0();
                string_0 = new string[] { "qtflove" };
                arrayList_0 = new ArrayList();
                arrayList_1 = new ArrayList();
            }

            public Class1()
            {
                Class869.smethod_0();
            }

            public static bool smethod_0(object object_0)
            {
                if (!arrayList_0.Contains(object_0))
                {
                    return false;
                }
                Class11_Log.log_write("差评、骂人、欺骗、无理退款等原因!");
                return true;
            }

            public static bool smethod_1()
            {
                return true;
            }

            public static bool smethod_2(object object_0)
            {
                return true;
            }
        }






        string username = "NK0958285501";
        string pwd = "299263133853";
        string ip = "192.168.0.1";
        string port = "6001";

        public static string class6_username = "";

        public static int Class824_int_0 = 0;//估计是系统时间使用差额
        public static bool bool_0;
        public static ArrayList arrayList_0 = new ArrayList();
        public static string string_3 = "";

        public static byte[] byte_0 = new byte[1];
        public static byte[] byte_1 = new byte[1];

        //实际上这个int0的时间是变动的，需要猜出来是多少
        public static int Class824_smethod_4()
        {
            DateTime time = new DateTime(1970, 1, 1, 0, 0, 0, 0, new GregorianCalendar(), DateTimeKind.Utc);
            long t0 = DateTime.UtcNow.Ticks - time.Ticks;
            int t1 = ((int)(t0 / (10000L* 1000L)));//t1是当前的时间，转为秒数了
            return t1 + Class824_int_0;
        }


        public static string Class837_smethod_1_MD5(string string_0)
        {
            byte[] bytes = Encoding.ASCII.GetBytes(string_0);
            MD5 md1 = MD5.Create();
            bytes = md1.ComputeHash(bytes);
            md1.Clear();
            return BitConverter.ToString(bytes).Replace("-", "").ToUpper();
        }

        public static ushort[] ushort_0 = new ushort[1];
        private static int class6_num;

        public static byte[] Class30_smethod_0(byte[] byte_0, int int_0, int int_1)
        {
            MemoryStream memoryStream = new MemoryStream();
            memoryStream.Write(byte_0, int_0, int_1);
            byte[] array = memoryStream.ToArray();
            memoryStream.Close();
            int num = 0;
            int num2 = 0;
            int num3 = array.Length;
            while (num3 > 0)
            {
                num3--;
                byte b = Convert.ToByte(num >> 8);
                num = (num << 8) & 0xFFFF;
                num = (ushort_0[b ^ array[num2]] ^ num) & 0xFFFF;
                num2++;
            }
            return new byte[2]
            {
                (byte)num,
                (byte)(num >> 8)
            };
        }





        // smethod_1(username, pwd, ip, port, num)
        public static Class5_login_result smethod_1(string username, string pwd, string ip, string port, int num)
        {
            class6_username = username;
            Class828 class2 = new Class828(Class7.smethod_0(), Class2.string_2, Class2.string_0, true);
            byte[] recv_pkt = null;

            if((ip.Length <= 0) || (port.Length <= 0))
            {
                recv_pkt = class2.send_pkt(username, pwd, "", "", num, new Class11_Log(), Class2.string_10);
            }
            else
            {
                recv_pkt = class2.send_pkt(username, pwd, ip.Trim(), port.Trim(), num, new Class11_Log(), Class2.string_10);
            }

            if (recv_pkt == null)
            {
                return null;
            }
            int time1 = Math.Abs((int)(Class824_smethod_4() - num));
            if (time1 >= 24*3600) //86400是一天的秒数
            {
                return null;
            }
            string text = Encoding.GetEncoding("GBK").GetString(recv_pkt);
            //File.AppendAllText("cblog.txt",text);
            text = "{\"ret\":0,\"des\":\"登录成功,当前最新版本为[V12.82]\",\"md1\":\"511550baf241e1d97fb400d853498908\",\"md2\":\"b5beee43b1fb02ce660bc19e584d4560\",\"t\":\"1647707960\",\"loginTime\":\"1647684499\",\"expireTime\":\"1784385542\",\"vipLoginTips\":\"小黑包含账户密码等信息，以免泄露密码！\",\"blackqqs\":\"20401738#\",\"gcmd\":{\"monster\":5569,\"fmonster\":5571,\"plant\":5035,\"getarti\":5575,\"tgw\":\"tgw_l7_forward\",\"gameKey\":\"JQM1737070688\",\"sdfmd\":5573,\"gbp\":5672}}";
            JsonObject obj2 = null;
            try
            {
                obj2 = (JsonObject)Jayrock.Json.Conversion.JsonConvert.Import(text);
            }
            catch(Exception ex)
            {
                MessageBox.Show(ex.ToString());
                Class5_login_result class1 = new Class5_login_result();
                class1.jy_ret = 0x3f2;
                class1.des = "接收到非法数据！请确保网络连接正常！！";
                return class1;
            }
            if (obj2 == null)
            {
                return null;
            }
            if (obj2["ret"].ToString() != "0")
            {
                Class5_login_result class6 = new Class5_login_result();
                class6.jy_ret = int.Parse(obj2["ret"].ToString());
                class6.des = obj2["des"].ToString();
                return class6;
            }
            if (obj2.Contains("vipLoginTips"))
            {
                try
                {
                    Class11_Log.smethod_8(obj2["vipLoginTips"].ToString());
                }
                catch
                {
                }
            }
            //vip快要到期检测
            //if (obj2.Contains("warning") && ((Class824.smethod_4() - int_1) >= 0x2a300))
            //{
            //    try
            //    {
            //        if (Class832.smethod_2("setup", "need.alarm.me.login.vip") != "0")
            //        {
            //            new Thread(new ParameterizedThreadStart(Class6.smethod_2)).Start(obj2["warning"].ToString());
            //        }
            //    }
            //    catch
            //    {
            //    }
            //    int_1 = Class824.smethod_4();
            //}

           //绑定qq设置，同时通过校验
            string jiaoyanma = "";
            if (!obj2.Contains("bindqqs"))
            {
                string[] textArray1 = new string[10];
                textArray1[0] = username;
                textArray1[1] = "_";
                textArray1[2] = pwd;
                textArray1[3] = "_";
                textArray1[4] = Class2.string_2;
                textArray1[5] = "_";
                textArray1[6] = "fdffdfddfd";//Class836.smethod_0(1);//应该是获取机器码等信息
                textArray1[7] = num.ToString();
                textArray1[8] = Class2.string_0;
                textArray1[9] = "awawer~!~123!!!";
                jiaoyanma = string.Concat(textArray1);
                arrayList_0.Clear();
                bool_0 = false;
                string_3 = null;
            }
            else
            {
                //arrayList_0.Clear();
                string str4 = obj2["bindqqs"].ToString();
                char[] chArray1 = new char[] { '#' };
                string[] strArray2 = str4.Split(chArray1);
                int index = 0;
                while (true)
                {
                    if (index >= strArray2.Length)
                    {
                        string_3 = str4;
                        string[] textArray2 = new string[10];
                        textArray2[0] = username;
                        textArray2[1] = "_";
                        textArray2[2] = pwd;
                        textArray2[3] = "_";
                        textArray2[4] = Class2.string_2;
                        textArray2[5] = "_";
                        textArray2[6] = str4;
                        textArray2[7] = num.ToString();
                        textArray2[8] = Class2.string_0;
                        textArray2[9] = "awawer~!~123!!!";
                        jiaoyanma = string.Concat(textArray2);
                        bool_0 = true;
                        break;
                    }
                    string item = strArray2[index].Trim();
                    if ((item.Length > 0) && !arrayList_0.Contains(item))
                    {
                        arrayList_0.Add(item);
                    }
                    index++;
                }
            }
            //md5核心校验，理论上说，爆破这里就好了
            jiaoyanma = Class837_smethod_1_MD5(jiaoyanma).ToLower();
           
            //这里有个网络与本地计算值比对的过程，需要爆破
            jiaoyanma = obj2["md1"].ToString();//cber 爆破

            if (obj2["md1"].ToString() != jiaoyanma)
            {
                Class5_login_result class5 = new Class5_login_result();
                class5.jy_ret = 1010;
                class5.des = "校验失败，无法登录会员！";
                return class5;
            }

            try
            {
                byte[] byte_md1 = Encoding.UTF8.GetBytes(jiaoyanma);
                byte[] byte_md2 = Encoding.UTF8.GetBytes(obj2["md2"].ToString());
                MemoryStream stream1 = new MemoryStream();
                stream1.Write(byte_0, 0, byte_0.Length);
                byte[] buffer = Class30_smethod_0(byte_0, 0, byte_0.Length);
                stream1.Write(buffer, 0, buffer.Length);
                byte_0 = stream1.ToArray();
                stream1.Close();
                MemoryStream stream2 = new MemoryStream();
                stream2.Write(byte_1, 0, byte_1.Length);
                byte[] buffer3 = Class30_smethod_0(byte_1, 0, byte_1.Length);
                stream2.Write(buffer3, 0, buffer3.Length);
                byte_1 = stream2.ToArray();
                stream2.Close();
            }
            catch(Exception ex)
            {
                MessageBox.Show(ex.ToString());
            }
            char[] separator = new char[] { '#' };
            
            //黑名单qq处理
            string[] strArray = obj2["blackqqs"].ToString().Split(separator);
            for (int i = 0; i < strArray.Length; i++)
            {
                string item = strArray[i].Trim();
                if ((item.Length > 0) && !Class1.arrayList_0.Contains(item))
                {
                    Class1.arrayList_0.Add(item);
                }
            }
            //这个class40应该是 委托的一个控件显示这个status
            //Class40.smethod_1("qwafora02q349lkgfjllllllll11lllllllllllllllllll111111111111111111111111111111111111111llllllllllladfqwrajs~!~~!~!~12340912490125802345129034209qruwqe9 2309ruqw90u23232323erererererer12ui93iwer0-9-5o32459234-592-54912534563784432415379833aflkhn2oqiQDJJJJJOPJ5U12390=32q3owri29034924352352309534095oijrt09w345usjadlkjtghhweo4iuqiortj");
            //Class40.string_14 = username;
            string[] textArray3 = new string[] { "用户名[", username.Substring(0, 3), "*]过期时间[", cb_time.smethod_1(int.Parse(obj2["expireTime"].ToString())), "]上次登录[", cb_time.smethod_1(int.Parse(obj2["loginTime"].ToString())), "]" };
            //Class40.string_12 = string.Concat(textArray3);

            //这个是写小黑目录下config.ini文件，不用管了
            //Class832.smethod_1("gcs", "login.username", username);
            //Class832.smethod_1("gcs", "login.password", Class833.smethod_0(pwd));


            Class5_login_result logininfo = new Class5_login_result
            {
                jy_ret = int.Parse(obj2["ret"].ToString()),
                loginTime = obj2["loginTime"].ToString()
            };
            int int_2 = Class834_json.smethod_3(obj2, "t");
            logininfo.expireTime = obj2["expireTime"].ToString();
            logininfo.des = obj2["des"].ToString();
            logininfo.md1 = obj2["md1"].ToString();
            logininfo.md2 = obj2["md2"].ToString();
            class6_num = num;
            class6_username = username;

            //应该是本地要存一些登陆信息，用其他用
            //ClassInfo.key1 = "awawer~!~123!!!";
            //ClassInfo.key2 = byte_0;
            //ClassInfo.key3 = byte_1;
            //ClassInfo.key4 = int_0;
            //ClassInfo.key5 = username;
            //ClassInfo.key6 = pwd;
            //ClassInfo.key7 = string_2;
            //ClassInfo.key8 = string_3;
            //Class37.int_0 = Class834_json.smethod_5(obj2, "gcmd", "monster");
            //Class37.int_2 = Class834_json.smethod_5(obj2, "gcmd", "fmonster");
            //Class37.int_1 = Class834_json.smethod_5(obj2, "gcmd", "plant");
            //Class37.int_4 = Class834_json.smethod_5(obj2, "gcmd", "getarti");
            //Class37.string_0 = Class834_json.smethod_7(obj2, "gcmd", "tgw");
            //Class37.int_3 = Class834_json.smethod_5(obj2, "gcmd", "sdfmd");
            //Class37.int_5 = Class834_json.smethod_5(obj2, "gcmd", "gbp");
            //try
            //{
            //    Class37.string_1 = Class834_json.smethod_7(obj2, "gcmd", "gameKey").Replace("J", "+").Replace("M", ":");
            //}
            //catch
            //{
            //}
            return logininfo;

        }
        private void method_0()
        {
            try
            {
                //Class7.smethod_0();
                int num = Class824_smethod_4();
                Class5_login_result class2 = smethod_1(username, pwd, ip, port, num);
                if (class2 != null)
                {
                    if (class2.jy_ret != 0)
                    {
                        MessageBox.Show(this, class2.des);
                        this.button1.Enabled = true;
                        return;
                    }
                    else
                    {
                        MessageBox.Show(this, class2.des);
                    }
                }
                else
                {
                    MessageBox.Show(this, "无法连接到服务器，请检查您的网络，或者重新启动路由器再次尝试！");
                    this.button1.Enabled = true;
                    return;
                }
            }
            catch (Exception exception)
            {
                MessageBox.Show("登陆失败：" + exception.Message + ",请关闭小黑重新打开试试！");
            }
            try
            {
                this.button1.Enabled = true;
            }
            catch
            {
            }
        }


        private void btn_vip_Click(object sender, EventArgs e)
        {
            Class828.bool_1 = !Class828.bool_1;

            if (username.Length > 0 && pwd.Trim().Length > 0)
            {
                btn_vip.Enabled = false;
                method_0();
            }
            else
            {
                MessageBox.Show("请输入用户名密码！");
            }
        }

        public static bool smethod_1(bool bool_0)
        {
            return false;
        }

        string miyao = "a42ersgf2345ew#$56";
        private void btn_crypt_Click(object sender, EventArgs e)
        {
            byte[] key = Encoding.UTF8.GetBytes(miyao.Substring(0, 8));
            byte[] content = Encoding.UTF8.GetBytes(tbox_pwd.Text.Trim());
            MemoryStream stream = new MemoryStream();
            CryptoStream stream1 = new CryptoStream(stream, new DESCryptoServiceProvider().CreateEncryptor(key, key), CryptoStreamMode.Write);
            stream1.Write(content, 0, content.Length);
            stream1.FlushFinalBlock();
            byte[] inArray = stream.ToArray();
            stream.Close();
            stream1.Close();
            label5.Text = Convert.ToBase64String(inArray);
            tbox_miwen.Text = Convert.ToBase64String(inArray);
        }

        private void btn_decrypt_Click(object sender, EventArgs e)
        {
            byte[] bytes = Encoding.UTF8.GetBytes(miyao.Substring(0, 8));
            byte[] buffer = Convert.FromBase64String(tbox_miwen.Text.Trim());
            MemoryStream stream = new MemoryStream();
            CryptoStream stream1 = new CryptoStream(stream, new DESCryptoServiceProvider().CreateDecryptor(bytes, bytes), CryptoStreamMode.Write);
            stream1.Write(buffer, 0, buffer.Length);
            stream1.FlushFinalBlock();
            byte[] buffer4 = stream.ToArray();
            stream.Close();
            stream1.Close();
            label6.Text = Encoding.UTF8.GetString(buffer4);
            tbox_pwd.Text = Encoding.UTF8.GetString(buffer4);
        }

        public string SetStrBlank_to_one(string text)
        {
            Regex rg = new Regex(@"\s{1,}", RegexOptions.IgnoreCase);
            return rg.Replace(text, ",").Trim();
        }
        private void btn_turn_Click(object sender, EventArgs e)
        {
            MemoryStream ms = new MemoryStream();
            uint uin = 0;
            string[] tmpstr = SetStrBlank_to_one(tbox_byte.Text.Trim()).Split(',');
            byte[] src = new byte[32];
            for(int i = 0; i < tmpstr.Length; i++)
            {
                src[i] = byte.Parse(tmpstr[i],NumberStyles.AllowHexSpecifier);
            }
            ms.Write(src, 0, tmpstr.Length);
            ms.Position = 0;

            switch(combox_func.SelectedIndex)
            {
                case 0:
                    uin = ReadUtils.read_TYPE_UINT32(ms);
                    tbox_value.Text = uin.ToString();
                    break;
                case 1:
                    tbox_value.Text = ReadUtils.read_TYPE_STRING(ms);
                    break;
                case 2:
                    int value = ReadUtils.read_Fixed_Int32(ms);
                    tbox_value.Text = value.ToString();
                    break;
                default:
                    break;
            }
        }

        private void btn_return_Click(object sender, EventArgs e)
        {
            MyMemoryStream ms = new MyMemoryStream();
            uint uin = 0;
            

            switch (combox_func.SelectedIndex)
            {
                case 0:
                    uin = uint.Parse(tbox_value.Text.Trim());
                    WriteUtils.write_TYPE_UINT32(ms, uin);
                    tbox_value.Text = uin.ToString();
                    break;
                case 1:
                    WriteUtils.write_TYPE_STRING(ms, tbox_value.Text.Trim());
                    break;
                case 2:
                    uin = uint.Parse(tbox_value.Text.Trim());
                    WriteUtils.write_TYPE_FIXED32_UINT(ms, uin);
                    tbox_value.Text = uin.ToString();
                    break;
                default:
                    break;
            }
            ms.Position = 0;
            string strtmp = "";
            for(int i = 0; i <  ms.Length;i++)
            {
                strtmp += ms.ReadByte().ToString("X2") + " ";
            }
            tbox_byte.Text = strtmp;
        }

        private void btn_set_Click(object sender, EventArgs e)
        {
            btn_set.Enabled = false;
            string qqlist = tbox_qqlist.Text.Trim();
            string[] tmpbuf = qqlist.Split(',');
            for(int i  = 0; i < tmpbuf.Length;i++)
            {
                string src_filepath = "D:/cber-exe/Debug/";
                string qq = tmpbuf[i].Trim();
                //cber 每个号，执行自己的ds脚本
                string per_ds_filepath = src_filepath + qq + "/ds.txt";
                if (Directory.Exists(src_filepath + qq))
                {
                    File.Copy(src_filepath + tbox_dsname.Text.Trim(), per_ds_filepath, overwrite: true);
                }
            }

            btn_set.Enabled = true;
        }

        public static string week_filepath = @"00-new-config\weekend_flag.ini";

        /// <summary>
        /// 生成勋章兑换脚本
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        private void btn_xz_Click(object sender, EventArgs e)
        {
            string cur_dir = @"D:\cber-exe\Debug\";
            string content = IniHelper.Read(cur_dir + week_filepath, "month", "xz_baseid", "2");

            uint baseid = uint.Parse(content);

            string jiaoben =
                "{\"tips\":\"我的脚本\",\"list\":[" + Environment.NewLine +
"{\"cmd\":\"5489\",\"id\":\"" + (baseid++) + "\",\"num\":\"50060177\",\"temp1\":\"10\",\"temp2\":\"0\", \"name\":\"req-5489-11购买铜币200\", \"flag\":\"1\" }," +Environment.NewLine+
"{\"cmd\":\"5489\",\"id\":\"" + (baseid++) + "\",\"num\":\"50067822\",\"temp1\":\"10\",\"temp2\":\"0\", \"name\":\"req-5489-12购买战功200\", \"flag\":\"1\" }," + Environment.NewLine +
"{\"cmd\":\"5489\",\"id\":\"" + (baseid++) + "\",\"num\":\"50064799\",\"temp1\":\"1\",\"temp2\":\"0\", \"name\":\"req-5489-13购买灵纹石30\", \"flag\":\"1\" }," + Environment.NewLine +
"{\"cmd\":\"5489\",\"id\":\"" + (baseid++) + "\",\"num\":\"50065983\",\"temp1\":\"1\",\"temp2\":\"0\", \"name\":\"req-5489-14购买灵纹石阴阳30\", \"flag\":\"1\" }," + Environment.NewLine +
"{\"cmd\":\"5489\",\"id\":\"" + (baseid++) + "\",\"num\":\"51000079\",\"temp1\":\"5\",\"temp2\":\"0\", \"name\":\"req-5489-15购买白色升阶丹50\", \"flag\":\"1\" }," + Environment.NewLine +

"{\"cmd\":\"5489\",\"id\":\"" + (baseid++) + "\",\"num\":\"51000255\",\"temp1\":\"10\",\"temp2\":\"0\", \"name\":\"req-5489-21购买灵草100\", \"flag\":\"1\" }," + Environment.NewLine +
"{\"cmd\":\"5489\",\"id\":\"" + (baseid++) + "\",\"num\":\"51000033\",\"temp1\":\"10\",\"temp2\":\"0\", \"name\":\"req-5489-22购买玄铁石200\", \"flag\":\"1\" }," + Environment.NewLine +
"{\"cmd\":\"5489\",\"id\":\"" + (baseid++) + "\",\"num\":\"50064981\",\"temp1\":\"2\",\"temp2\":\"0\", \"name\":\"req-5489-23购买护甲宝石50\", \"flag\":\"1\" }," + Environment.NewLine +
"{\"cmd\":\"5489\",\"id\":\"" + (baseid++) + "\",\"num\":\"50064976\",\"temp1\":\"2\",\"temp2\":\"0\", \"name\":\"req-5489-24购买穿透宝石50\", \"flag\":\"1\" }," + Environment.NewLine +
"{\"cmd\":\"5489\",\"id\":\"" + (baseid++) + "\",\"num\":\"54000002\",\"temp1\":\"1\",\"temp2\":\"0\", \"name\":\"req-5489-25购买修罗尘30\", \"flag\":\"1\" }," + Environment.NewLine +

"{\"cmd\":\"5489\",\"id\":\"" + (baseid++) + "\",\"num\":\"50010033\",\"temp1\":\"1\",\"temp2\":\"0\", \"name\":\"req-5489-31购买大力丸50\", \"flag\":\"1\" }," + Environment.NewLine +
"{\"cmd\":\"5489\",\"id\":\"" + (baseid++) + "\",\"num\":\"51000263\",\"temp1\":\"5\",\"temp2\":\"0\", \"name\":\"req-5489-32购买阳炎符50\", \"flag\":\"1\" }," + Environment.NewLine +
"{\"cmd\":\"5489\",\"id\":\"" + (baseid++) + "\",\"num\":\"51000405\",\"temp1\":\"1\",\"temp2\":\"0\", \"name\":\"req-5489-33购买不灭将魂15\", \"flag\":\"1\" }," + Environment.NewLine +
"{\"cmd\":\"5489\",\"id\":\"" + (baseid++) + "\",\"num\":\"51000370\",\"temp1\":\"1\",\"temp2\":\"0\", \"name\":\"req-5489-34购买杀贼残卷15\", \"flag\":\"1\" }," + Environment.NewLine +
"{\"cmd\":\"5489\",\"id\":\"" + (baseid++) + "\",\"num\":\"51000085\",\"temp1\":\"5\",\"temp2\":\"0\", \"name\":\"req-5489-35购买强化石100\", \"flag\":\"1\" }," + Environment.NewLine +

"{\"cmd\":\"5489\",\"id\":\"" + (baseid++) + "\",\"num\":\"51000216\",\"temp1\":\"2\",\"temp2\":\"0\", \"name\":\"req-5489-41购买紫皇牙50\", \"flag\":\"1\" }," + Environment.NewLine +
"{\"cmd\":\"5489\",\"id\":\"" + (baseid++) + "\",\"num\":\"50061962\",\"temp1\":\"1\",\"temp2\":\"0\", \"name\":\"req-5489-42购买1个金色冰魄碎片\", \"flag\":\"1\" }," + Environment.NewLine +
"{\"cmd\":\"5489\",\"id\":\"" + (baseid++) + "\",\"num\":\"50063218\",\"temp1\":\"1\",\"temp2\":\"0\", \"name\":\"req-5489-43购买1个金符碎片\", \"flag\":\"1\" }," + Environment.NewLine +
"{\"cmd\":\"5489\",\"id\":\"" + (baseid++) + "\",\"num\":\"51000243\",\"temp1\":\"1\",\"temp2\":\"0\", \"name\":\"req-5489-44购买资质丹15\", \"flag\":\"1\" }," + Environment.NewLine +
"{\"cmd\":\"5489\",\"id\":\"" + ((baseid++)+(baseid++)-baseid+1) + "\",\"num\":\"50020002\",\"temp1\":\"1\",\"temp2\":\"0\", \"name\":\"req-5489-45购买高刷15\", \"flag\":\"1\" }," + Environment.NewLine +
"{\"cmd\":\"5489\",\"id\":\"" + (baseid++) + "\",\"num\":\"51000413\",\"temp1\":\"1\",\"temp2\":\"0\", \"name\":\"req-5489-52购买霸下之力50\", \"flag\":\"1\" }," + Environment.NewLine +
"{\"cmd\":\"5489\",\"id\":\"" + (baseid++) + "\",\"num\":\"50067126\",\"temp1\":\"1\",\"temp2\":\"0\", \"name\":\"req-5489-53购买5个迁寨令\", \"flag\":\"1\" }" + Environment.NewLine +
"]}";
            Clipboard.SetText(jiaoben);
        }

        private void btn_xl_Click(object sender, EventArgs e)
        {
            string cur_dir = @"D:\cber-exe\Debug\";
            string content = IniHelper.Read(cur_dir + week_filepath, "month", "xiuluo_base", "2");

            uint baseid = uint.Parse(content);
            uint chen = baseid;
            uint hun = baseid + 1;

            string jiaoben =
"{\"tips\":\"我的脚本\",\"list\":[" + Environment.NewLine +
"{\"cmd\":\"5489\",\"id\":\"" + hun + "\",\"num\":\"54000001\",\"temp1\":\"128\",\"temp2\":\"0\", \"name\":\"128个修罗魂石\", \"flag\":\"1\" }," + Environment.NewLine +
"{\"cmd\":\"5489\",\"id\":\"" + hun + "\",\"num\":\"54000001\",\"temp1\":\"64\",\"temp2\":\"0\", \"name\":\"64个修罗魂石\", \"flag\":\"1\" }," + Environment.NewLine +
"{\"cmd\":\"5489\",\"id\":\"" + hun + "\",\"num\":\"54000001\",\"temp1\":\"32\",\"temp2\":\"0\", \"name\":\"32个修罗魂石\", \"flag\":\"1\" }," + Environment.NewLine +
"{\"cmd\":\"5489\",\"id\":\"" + hun + "\",\"num\":\"54000001\",\"temp1\":\"16\",\"temp2\":\"0\", \"name\":\"16个修罗魂石\", \"flag\":\"1\" }," + Environment.NewLine +
"{\"cmd\":\"5489\",\"id\":\"" + hun + "\",\"num\":\"54000001\",\"temp1\":\"8\",\"temp2\":\"0\", \"name\":\"8个修罗魂石\", \"flag\":\"1\" }," + Environment.NewLine +
"{\"cmd\":\"5489\",\"id\":\"" + hun + "\",\"num\":\"54000001\",\"temp1\":\"4\",\"temp2\":\"0\", \"name\":\"4个修罗魂石\", \"flag\":\"1\" }," + Environment.NewLine +
"{\"cmd\":\"5489\",\"id\":\"" + hun + "\",\"num\":\"54000001\",\"temp1\":\"2\",\"temp2\":\"0\", \"name\":\"2个修罗魂石\", \"flag\":\"1\" }," + Environment.NewLine +
"{\"cmd\":\"5489\",\"id\":\"" + hun + "\",\"num\":\"54000001\",\"temp1\":\"1\",\"temp2\":\"0\", \"name\":\"1个修罗魂石\", \"flag\":\"1\" }," + Environment.NewLine +
"{\"cmd\":\"5489\",\"id\":\"" + chen + "\",\"num\":\"54000002\",\"temp1\":\"1\",\"temp2\":\"0\", \"name\":\"1个修罗之尘\", \"flag\":\"1\" }" + Environment.NewLine +
"]}";

            Clipboard.SetText(jiaoben);
        }

        private void btn_qz_Click(object sender, EventArgs e)
        {
            string cur_dir = @"D:\cber-exe\Debug\";
            string content = IniHelper.Read(cur_dir + week_filepath, "month", "qz_baseid", "2");

            uint baseid = uint.Parse(content);
            uint xts = baseid + 89;

            string jiaoben =
"{\"tips\":\"我的脚本\",\"list\":[" + Environment.NewLine +
"{\"cmd\":\"5489\",\"id\":\"" + xts + "\",\"num\":\"50060462\",\"temp1\":\"8\",\"temp2\":\"0\", \"name\":\"驱逐内丹兑换玄铁石\", \"flag\":\"1\" }," + Environment.NewLine +
"{\"cmd\":\"5489\",\"id\":\"" + xts + "\",\"num\":\"50060462\",\"temp1\":\"4\",\"temp2\":\"0\", \"name\":\"驱逐内丹兑换玄铁石\", \"flag\":\"1\" }," + Environment.NewLine +
"{\"cmd\":\"5489\",\"id\":\"" + xts + "\",\"num\":\"50060462\",\"temp1\":\"2\",\"temp2\":\"0\", \"name\":\"驱逐内丹兑换玄铁石\", \"flag\":\"1\" }," + Environment.NewLine +
"{\"cmd\":\"5489\",\"id\":\"" + xts + "\",\"num\":\"50060462\",\"temp1\":\"1\",\"temp2\":\"0\", \"name\":\"驱逐内丹兑换玄铁石\", \"flag\":\"1\" }" + Environment.NewLine +
"]}";

            Clipboard.SetText(jiaoben);
        }

    }

    public class IniHelper
    {
        /// <summary>
        /// 读取INI文件值
        /// </summary>
        /// <param name="section">节点名</param>
        /// <param name="key">键</param>
        /// <param name="def">未取到值时返回的默认值</param>
        /// <param name="filePath">INI文件完整路径</param>
        /// <returns>读取的值</returns>
        public static string Read(string filePath, string section, string key, string def)
        {
            if (!File.Exists(filePath)) return def;
            StringBuilder sb = new StringBuilder(1024);
            GetPrivateProfileString(section, key, def, sb, 1024, filePath);
            return sb.ToString();
        }

        /// <summary>
        /// 写INI文件值
        /// </summary>
        /// <param name="section">欲在其中写入的节点名称</param>
        /// <param name="key">欲设置的项名</param>
        /// <param name="value">要写入的新字符串</param>
        /// <param name="filePath">INI文件完整路径</param>
        /// <returns>非零表示成功，零表示失败</returns>
        public static int Write(string filePath, string section, string key, string value)
        {
            if (!File.Exists(filePath)) return 0;
            return WritePrivateProfileString(section, key, value, filePath);
        }

        /// <summary>
        /// 删除节
        /// </summary>
        /// <param name="section">节点名</param>
        /// <param name="filePath">INI文件完整路径</param>
        /// <returns>非零表示成功，零表示失败</returns>
        public static int DeleteSection(string section, string filePath)
        {
            return Write(section, null, null, filePath);
        }

        /// <summary>
        /// 删除键的值
        /// </summary>
        /// <param name="section">节点名</param>
        /// <param name="key">键名</param>
        /// <param name="filePath">INI文件完整路径</param>
        /// <returns>非零表示成功，零表示失败</returns>
        public static int DeleteKey(string section, string key, string filePath)
        {
            return Write(section, key, null, filePath);
        }

        /// <summary>
        /// 为INI文件中指定的节点取得字符串
        /// </summary>
        /// <param name="lpAppName">欲在其中查找关键字的节点名称</param>
        /// <param name="lpKeyName">欲获取的项名</param>
        /// <param name="lpDefault">指定的项没有找到时返回的默认值</param>
        /// <param name="lpReturnedString">指定一个字串缓冲区，长度至少为nSize</param>
        /// <param name="nSize">指定装载到lpReturnedString缓冲区的最大字符数量</param>
        /// <param name="lpFileName">INI文件完整路径</param>
        /// <returns>复制到lpReturnedString缓冲区的字节数量，其中不包括那些NULL中止字符</returns>
        [DllImport("kernel32")]
        private static extern int GetPrivateProfileString(string lpAppName, string lpKeyName, string lpDefault, StringBuilder lpReturnedString, int nSize, string lpFileName);

        /// <summary>
        /// 修改INI文件中内容
        /// </summary>
        /// <param name="lpApplicationName">欲在其中写入的节点名称</param>
        /// <param name="lpKeyName">欲设置的项名</param>
        /// <param name="lpString">要写入的新字符串</param>
        /// <param name="lpFileName">INI文件完整路径</param>
        /// <returns>非零表示成功，零表示失败</returns>
        [DllImport("kernel32")]
        private static extern int WritePrivateProfileString(string lpApplicationName, string lpKeyName, string lpString, string lpFileName);
    }

    public class Interface2
    {
    }


    internal class Class5
    {
        // Fields
        public int int_0;
        public string string_0;
        public string string_1;
        public string string_2;
        public string string_3;
        public string string_4;

        // Methods
        public Class5() { }
    }

    internal class Class828
    {
        private int int_0;
        private string string_0;
        private string string_1;
        private ArrayList arrayList_0;
        private bool bool_0;
        public static bool bool_1;

        public Class828(ArrayList arrayList_1, string string_2, string string_3, bool bool_2)
        {
            this.int_0 = 5;
            this.string_1 = "";
            this.arrayList_0 = new ArrayList();
            this.bool_0 = true;
            this.arrayList_0 = arrayList_1;
            this.string_0 = string_2;
            this.bool_0 = bool_2;
            this.string_1 = string_3;
        }

        public bool method_0()
        {
            return this.bool_0;
        }

        public string method_1(string string_2, string string_3, Hashtable hashtable_0, int int_1)
        {
            return "1";
        }

        public string method_10(string string_2, string string_3, string string_4, string string_5, string string_6, string string_7, string string_8)
        {
            return "1";
        }

        public byte[] send_pkt(string string_2, string string_3, string string_4, string string_5, int int_1, Interface2 interface2_0, string string_6)
        {
            byte[] buffer = new byte[] { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

            return buffer;
        }

        public string method_2()
        {
            return "1";
        }

        public string method_3()
        {
            return "1";
        }

        public string method_4()
        {
            return "1";
        }

        public string method_5()
        {
            return "1";
        }

        public void method_6(string string_2)
        {
            return;
        }

        public string method_7()
        {
            return "1";
        }

        public string method_8()
        {
            return "1";
        }

        public string method_9(string string_2, string string_3, string string_4)
        {
            return "1";
        }
    }

   
    #endregion
    
}
