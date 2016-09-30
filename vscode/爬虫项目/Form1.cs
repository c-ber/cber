using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;
using System.IO;
using System.Net;
using HtmlAgilityPack;
using System.Threading;

namespace 爬虫项目
{
    public partial class Form1 : Form
    {
        static string log_file = "log.txt";
        static string log_file1 = "spider.log";
        public Form1()
        {
            InitializeComponent();
        }

        void get_link(object sender)
        {
            File.WriteAllText(log_file, "========== spider ===============");
            WebBrowser web = (WebBrowser)sender;
            HtmlElementCollection ElementCollection = web.Document.GetElementsByTagName("a");
            foreach (HtmlElement item in ElementCollection)
            {
                string str = item.GetAttribute("href");
                if (str.Contains("javascript"))
                {
                    continue;
                }
                File.AppendAllText(log_file, str);
                File.AppendAllText(log_file, Environment.NewLine);
            }
        }

        void get_ask(object sender)
        {
            File.WriteAllText(log_file, "========== spider ===============");
            WebBrowser web = (WebBrowser)sender;
            HtmlElementCollection ElementCollection = web.Document.GetElementsByTagName("div");
            string all = web.DocumentText;
            File.AppendAllText(log_file, all);

            foreach (HtmlElement item in ElementCollection)
            {
                string str = item.GetAttribute("class");
                if (str.Equals("wrap_zbj"))
                {
                    continue;
                }
                File.AppendAllText(log_file, str);
                File.AppendAllText(log_file, Environment.NewLine);
            }
        }

        void web_DocumentCompleted(object sender, WebBrowserDocumentCompletedEventArgs e)
        {
            //get_link(sender);
            get_ask(sender);
        }

        private void get_doc(HtmlNodeCollection dorlist, WebClient dordetail, 
                             HtmlAgilityPack.HtmlDocument dorducoment, int k)
        {
            HtmlNode dor;
            HtmlNode ht1 = null;
            HtmlNode ht2 = null;
            HtmlNode ht3 = null;

            string str_txt = "";
            string name = "";
            string dept = "";
            string hos = "";
            string skill = "";
            string word = "";
            string img = "";

            string dordetailurl = dorlist[k].SelectNodes("div")[0].
                                  SelectSingleNode("a").Attributes["href"].Value;//医生详细页面URL
            string dordetailstring = "";
            try
            {
                int trynum = 0;
                while (trynum <= 5)
                {
                    trynum++;
                    dordetailstring = dordetail.DownloadString(dordetailurl);
                    if (dordetailstring.Length > 0)
                    {
                        break;
                    }
                }

            }
            catch (System.Exception ex)
            {

            }
            if (dordetailstring.Length < 100)
            {
                return;
            }
            dorducoment.LoadHtml(dordetailstring);
            dor = dorducoment.DocumentNode;
            
            ht1 = dor.SelectSingleNode("//div[@class='detail word-break']");
            if (ht1 != null)
            {
                name = ht1.SelectSingleNode("h1").SelectSingleNode("strong").InnerText;
            }

            dept = dor.SelectSingleNode("//div[@class='detail word-break']").
                      SelectSingleNode("div").SelectNodes("p")[0].SelectNodes("a")[1].
                      InnerText.Replace("\n", string.Empty).Replace("\r", string.Empty).Trim();

            hos = dor.SelectSingleNode("//div[@class='detail word-break']").
                      SelectSingleNode("//div[@class='hospital']").SelectNodes("p")[0].SelectNodes("a")[0].
                      InnerText.Replace("\n", string.Empty).Replace("\r", string.Empty).Trim();

            //img = dor.SelectSingleNode("//img[@alt='" + name + "']").Attributes["src"].Value;

            ht1 = dor.SelectSingleNode("//div[@class='detail word-break']");
            ht2 = ht1.SelectSingleNode("//div[@class='goodat']");
            ht3 = ht2.SelectSingleNode("span");
            if (ht3 != null)
            {
                skill = ht3.InnerText.Replace("\n", string.Empty).Replace("\r", string.Empty).Trim();
            }


            ht1 = dor.SelectSingleNode("//div[@class='detail word-break']");
            ht2 = ht1.SelectSingleNode("//div[@class='about']");
            ht3 = ht2.SelectSingleNode("span");
            if (ht3 != null)
            {
                word = ht3.InnerText.Replace("\n", string.Empty).Replace("\r", string.Empty).Trim();
            }
            int name_len = name.Trim().Length;
            if (name_len > 4)
            {
                return;
            }
            str_txt = "姓名:" + name.PadRight(10) +
                      "医院:" + hos.PadRight(20) +
                      "科室:" + dept.PadRight(10) +
                      "擅长:" + skill.PadRight(32) +
                      "简介:" + word.PadRight(20) +
                      "图片地址:" + img.PadRight(2);

            File.AppendAllText(log_file1, str_txt);
            File.AppendAllText(log_file1, Environment.NewLine);

        }
        private void test_pc()
        {

            WebClient rootpage = new WebClient();
            rootpage.Encoding = Encoding.UTF8;
            rootpage.BaseAddress = "http://www.guahao.com/hospital/";

            string url = "125336070937502000";//上海中山医院
            string html = string.Empty;
            html = rootpage.DownloadString(url);//读取网页信息

            HtmlAgilityPack.HtmlDocument document = new HtmlAgilityPack.HtmlDocument();
            document.LoadHtml(html);//加载对象

            HtmlNode rootnode = document.DocumentNode;
            HtmlNodeCollection list = rootnode.SelectNodes("//span[@data-exp='1']");//搜索data-exp=1的span标签 科室页面

            /////////声明
            HtmlNode node;
            string departmenturl;
            WebClient dpt = new WebClient();
            dpt.Encoding = Encoding.UTF8;
            string dptstring = string.Empty;
            HtmlNodeCollection dorlist;
            int pagecount = 0;
            HtmlAgilityPack.HtmlDocument deptducoment = new HtmlAgilityPack.HtmlDocument();
            ///////////dpt

            WebClient dordetail = new WebClient();
            dordetail.Encoding = Encoding.UTF8;
            string dordetailstring = string.Empty;

            HtmlAgilityPack.HtmlDocument dorducoment = new HtmlAgilityPack.HtmlDocument();


            File.WriteAllText(log_file1, "========== spider ===============" + Environment.NewLine);
            for (int i = 0; i < list.Count; i++)//遍历科室 
            {
                node = list[i].SelectSingleNode("a");
                //departmenturl = node.Attributes[1].Value;
                departmenturl = node.Attributes["href"].Value;
                
                departmenturl = departmenturl.Replace("department", "department/shiftcase");//科室连接
                try
                {
                    dptstring = dpt.DownloadString(departmenturl);//加载科室所有医生页面信息
                }
                catch (System.Exception ex)
                {
                	
                }
                if (dptstring.Length < 1)
                {
                    continue;
                }
                deptducoment.LoadHtml(dptstring);

                HtmlNode dptroot = deptducoment.DocumentNode;
                dorlist = dptroot.SelectNodes("//div[@class='doc-info']");//获得页面信息中医生的列表

                HtmlNode info_page = dptroot.SelectSingleNode("//div[@class='other-info']");
                if (info_page == null)
                {
                    pagecount = 1;
                }
                else
                {
                    pagecount = int.Parse(info_page.SelectNodes("span")[0].SelectSingleNode("label").InnerHtml);//网页的总页数
                }


                //页码循环
                for (int j = 1; j <= pagecount; j++)
                {
                    //医生列表循环
                    for (int k = 0; k < dorlist.Count; k++)
                    {
                        get_doc(dorlist, dordetail, dorducoment, k);
                    }
                    if (j == pagecount)
                    {
                        break;
                    }
                    string cur_html_doc = departmenturl.Replace("?isStd=", "?pageNo=") + (j + 1).ToString("D");
                    dptstring = dpt.DownloadString(cur_html_doc);//加载科室所有医生页面信息
                    deptducoment.LoadHtml(dptstring);
                    dptroot = deptducoment.DocumentNode;
                    dorlist = dptroot.SelectNodes("//div[@class='doc-info']");//获得页面信息中医生的列表
                }

            }
            MessageBox.Show("capture data finish!");
        }

        private void button1_Click(object sender, EventArgs e)
        {
            test_pc();
            //webBrowser1.Navigate("http://myzx.39.net/zb-552.html");
            //webBrowser1.Navigate("http://yyk.39.net/doctor/101000.html");
            //webBrowser1.DocumentCompleted += new WebBrowserDocumentCompletedEventHandler(web_DocumentCompleted);
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            
        }
    }
}
