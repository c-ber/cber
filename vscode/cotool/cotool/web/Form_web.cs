using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Drawing;
using System.Data;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Net;
using cotool.web;
using HtmlAgilityPack;
using System.IO;
using System.Threading;

namespace cotool
{
    public partial class Form_web : UserControl
    {
        Spider sd = new Spider();

        public Form_web()
        {
            InitializeComponent();
        }

        private void btn_start_Click(object sender, EventArgs e)
        {
            string output_file = "web_find.log";
            File.WriteAllText(output_file, "==========================   web_find:"+ 
                    DateTime.Now.ToString() +"   ==========================" + Environment.NewLine);
            File.AppendAllText(output_file, tbox_pre_url.Text.Trim() + tbox_fid.Text.Trim() + 
                                tbox_tail_url.Text.Trim() + Environment.NewLine);
            File.AppendAllText(output_file, "===========================           end"
                    +"                ============================" + Environment.NewLine);
            WebClient rootpage = new WebClient();
            rootpage.Encoding = Encoding.GetEncoding("GB2312");

            string ks_url_pre = tbox_pre_url.Text.Trim();
            //遍历所有的页码
            int j = int.Parse(tbox_fid.Text.Trim());
            int eid = int.Parse(tbox_eid.Text.Trim());
            string page_url_cur = "";//拼接url字符串

            for (; j <= eid; j++)
            {

                page_url_cur = ks_url_pre + j.ToString("D") + tbox_tail_url.Text;//拼接url字符串
                //加载页面信息
                string html = sd.CreateGetHttpResponse(page_url_cur, 10000, null, null, Encoding.GetEncoding("GB2312"));

                //加载document对象
                HtmlAgilityPack.HtmlDocument document = new HtmlAgilityPack.HtmlDocument();
                document.LoadHtml(html);


                //获取当前页面的内容
                HtmlNode rootnode = document.DocumentNode;
                string xpath = "/html/body/div/div/div/div/ul";
                HtmlNode content = rootnode.SelectSingleNode(xpath);

                if (content == null)
                {
                    continue;
                }
                File.AppendAllText(output_file, content.InnerHtml.ToString() + Environment.NewLine);
                Thread.Sleep(2000);
            }
            MessageBox.Show("完成");
        }
    }
}
