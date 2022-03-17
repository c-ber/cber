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

namespace cotool.game
{

    public partial class Form_qqsh : UserControl
    {
        public Form_qqsh()
        {
            InitializeComponent();
        }
        DataDeal dd = new DataDeal();


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
                string json_text = JsonConvert.SerializeObject(sh_xiaohei);
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

        public string DefaultToASCII(string str)
        {
            try
            {
                byte[] temp = Encoding.Default.GetBytes(str);
                byte[] temp1 = Encoding.Convert(Encoding.Default, Encoding.ASCII, temp);
                string result = Encoding.ASCII.GetString(temp1);
                return result;
            }
            catch (Exception ex)//(UnsupportedEncodingException ex)
            {
                MessageBox.Show(ex.ToString());
                return null;
            }
        }
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

}
