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

        private static bool SaveBinaryFile(WebResponse response, string savePath)
        {
            bool value = false;
            byte[] buffer = new byte[1024];
            Stream outStream = null;
            Stream inStream = null;
            try
            {
                if (File.Exists(savePath)) File.Delete(savePath);
                outStream = System.IO.File.Create(savePath);
                inStream = response.GetResponseStream();
                int l;
                do
                {
                    l = inStream.Read(buffer, 0, buffer.Length);
                    if (l > 0) outStream.Write(buffer, 0, l);
                } while (l > 0);
                value = true;
            }
            finally
            {
                if (outStream != null) outStream.Close();
                if (inStream != null) inStream.Close();
            }
            return value;
        }
        /// <summary>
        /// 下载图片
        /// </summary>
        /// <param name="picUrl">图片Http地址</param>
        /// <param name="savePath">保存路径</param>
        /// <param name="timeOut">Request最大请求时间，如果为-1则无限制</param>
        /// <returns></returns>
        public static bool DownloadPicture(string picUrl, string savePath, int timeOut)
        {
            bool value = false;
            WebResponse response = null;
            Stream stream = null;
            try
            {
                HttpWebRequest request = (HttpWebRequest)WebRequest.Create(picUrl);
                if (timeOut != -1) request.Timeout = timeOut;
                response = request.GetResponse();
                stream = response.GetResponseStream();
                if (!response.ContentType.ToLower().StartsWith("text/"))
                    value = SaveBinaryFile(response, savePath);
            }
            catch (Exception ex)
            {

            }
            finally
            {
                if (stream != null) stream.Close();
                if (response != null) response.Close();
            }
            return value;
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

        private void btn_downloud_Click(object sender, EventArgs e)
        {
            int startid = Int32.Parse(tbox_startid.Text);
            int endid = Int32.Parse(tbox_endid.Text);
            for (int i = startid; i <= endid; i++)
            {
                string tmp = tbox_main.Text.Trim() + i.ToString("D4") + tbox_tail.Text;
                string img = @"E:\share\cber\vscode\cotool\cotool\download\" + i.ToString("D4")+ ".jpg";
                DownloadPicture(tmp, img, -1);
            }
            MessageBox.Show("完成");
        }
    }
}
