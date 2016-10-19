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
using MySql.Data.MySqlClient;

namespace 爬虫项目
{
    public partial class Form1 : Form
    {
        static string log_file = "log.txt";
        static string log_file1 = "spider.log";

        MySqlConnection myCon = null;
        public Form1()
        {
            InitializeComponent();
        }

        ///执行MySqlCommand命令
        /// 执行MySqlCommand
        /// <param name="M_str_sqlstr">SQL语句</param>20     
        public void sql_exec(string sql)
        {
            try
            {

                MySqlCommand mysqlcom = new MySqlCommand(sql, myCon);
                mysqlcom.ExecuteNonQuery();
                mysqlcom.Dispose();
            }
            catch (System.Exception ex)
            {
                MessageBox.Show("数据库执行sql失败" , sql);
            }
            finally
            {

            }
        }

        public DataTable sql_select(string  table_name ,string sql)
        {
            MySqlCommand mysqlcom = null;
            DataTable dt = new DataTable(table_name);
            try
            {
                mysqlcom = new MySqlCommand(sql, myCon);
                MySqlDataAdapter da = new MySqlDataAdapter(mysqlcom);
                da.Fill(dt);
                mysqlcom.Dispose();

            }
            catch (System.Exception ex)
            {
                //MessageBox.Show("数据库执行sql失败" , sql);
            }
            finally
            {
                if (mysqlcom != null)
                    mysqlcom.Dispose();
            }
            return dt;
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

        public static string utf8_chg(string src)
        {
            //byte[] buffer = Encoding.UTF8.GetBytes(src);
            //return Encoding.UTF8.GetString(buffer, 0, buffer.Length);
            return src;
        }

        public static int doc_num = 0;
        public static int doc_total = 0;//当前有效医生个数
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
            string zhicheng = "";

            try
            {

                string dordetailurl = dorlist[k].SelectNodes("div")[0].
                                      SelectSingleNode("a").Attributes["href"].Value;//医生详细页面URL
                string dordetailstring = "";

                dordetailurl = dordetailurl.Replace('\t', ' ');
                dordetailurl = dordetailurl.Replace('\r', ' ');
                dordetailurl = dordetailurl.Replace('\n', ' ');
                dordetailurl = dordetailurl.Replace(" ", "");


                int trynum = 0;
                while (trynum <= 5)
                {
                    trynum++;
                    try
                    {
                        dordetailstring = dordetail.DownloadString(dordetailurl);
                    }
                    catch (System.Exception ex)
                    {
                    }
                    if (dordetailstring.Length > 99)
                    {
                        break;
                    }
                    Thread.Sleep(trynum * 1000);
                }



                if (dordetailstring.Length < 100)
                {
                    File.AppendAllText(log_file1, "[ID = " + doc_num.ToString("D2") + "] "
                                        + "访问到该医生的网址无效:" + dordetailurl);
                    File.AppendAllText(log_file1, Environment.NewLine);
                    return;
                }
                dorducoment.LoadHtml(dordetailstring);
                dor = dorducoment.DocumentNode;

                ht1 = dor.SelectSingleNode("//div[@class='detail word-break']");
                if (ht1 != null)
                {
                    name = ht1.SelectSingleNode("h1").SelectSingleNode("strong").InnerText;
                    zhicheng = ht1.SelectSingleNode("h1").SelectSingleNode("span").InnerText;
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
                    File.AppendAllText(log_file1, "[ID = " + doc_num.ToString("D2") + "] "
                                        + "无效的医生名:" + name.Trim());
                    File.AppendAllText(log_file1, Environment.NewLine);
                    return;
                }


                //http://kano.guahao.com/8Pp2571734_image140.jpg
                ////img.guahao.com/images/image140/8Pp2571734.jpg
                ht1 = dor.SelectSingleNode("//section[@class='grid-section expert-card fix-clear']");
                ht1 = ht1.SelectSingleNode("//div[@class='info']");
                ht1 = ht1.SelectSingleNode("//div[@class='summary']");
                ht2 = ht1.SelectNodes("p")[0].SelectSingleNode("img");
                img = ht2.Attributes["src"].Value;

                //异常图片处理
                //img.guahao.com/img/character/doc-f-l.png?_=20121223
                if (img.Contains("character"))
                {
                    if (img.Contains("doc-f-l.png"))
                    {
                        img = "/img/doc/" + "doc-f-l.png";
                    }
                    else if (img.Contains("doc-m-l.png"))
                    {
                        img = "/img/doc/" + "doc-m-l.png";
                    }
                    else
                    {
                        img = "/img/doc/" + "doc-unknow-l.png";
                    }
                }
                else
                {
                    string tmp = img.Substring(24);
                    string[] tmp1 = tmp.Split('/');
                    string[] tmp2 = tmp1[1].Split('.');
                    tmp = "http://kano.guahao.com/" + tmp2[0] + "_" + tmp1[0] + "." + tmp2[1];
                    img = "/img/doc/" + doc_total.ToString("D6") + "." + tmp2[1];
                    DownloadPicture(tmp, img, -1);
                    img = "/img/doc/" + doc_total.ToString("D6") + "." + tmp2[1];
                }
                
                //str_txt = "[ID = " + doc_num.ToString("D2") + "] " +
                //          "姓名:" + name.PadRight(10) +
                //          "职称:" + zhicheng.PadRight(10) +
                //          "医院:" + hos.PadRight(20) +
                //          "科室:" + dept.PadRight(10) +
                //          "擅长:" + skill.PadRight(32) +
                //          "简介:" + word.PadRight(20) +
                //          "图片地址:" + img.PadRight(2);
                String sql = "INSERT INTO ask_user set "
                             + "username='" + utf8_chg(name) + "'"
                             + ",password='f9f16d97c90d8c6f2cab37bb6d1f1992'"   //doctor
                             + ",email='test@163.com'"
                             + ",expert=1"
                             + ",hospital='" + utf8_chg(hos) + "'"
                             + ",dept='" + utf8_chg(dept) + "'"
                             + ",introduction='" + utf8_chg(skill) + "'"
                             + ",img='" + img + "'"
                             + ",zhicheng='" + utf8_chg(zhicheng) + "'"
                             + ";commit;\n";
                sql_exec(sql);
                //File.AppendAllText(log_file1, str_txt);
                //File.AppendAllText(log_file1, Environment.NewLine);
                doc_total++;
            }
            catch (System.Exception ex)
            {

            }
            finally
            {
            }
        }
        private void test_pc()
        {

            WebClient rootpage = new WebClient();
            rootpage.Encoding = Encoding.UTF8;
            rootpage.BaseAddress = "http://www.guahao.com/hospital/";

            string url = "05ba2f6c-ec92-4a58-a6d0-31befb5474ed000";//中山大学附属第三医院天河医院
            //string url = "125336070937502000";//上海中山医院
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
                    File.AppendAllText(log_file1, Environment.NewLine);
                    File.AppendAllText(log_file1, "当前科室有 " + dorlist.Count + " 个医生:");
                    File.AppendAllText(log_file1, Environment.NewLine);
                    for (int k = 0; k < dorlist.Count; k++)
                    {
                        doc_num = k + 1;
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
            File.AppendAllText(log_file1, Environment.NewLine);
            File.AppendAllText(log_file1, "总共抓了有效医生个数：" + doc_total.ToString());
            File.AppendAllText(log_file1, Environment.NewLine);

            MessageBox.Show("capture data finish!");
        }

        private void get_wenti(HtmlNodeCollection dorlist, WebClient dordetail,
                     HtmlAgilityPack.HtmlDocument dorducoment, int k)
        {
            HtmlNode question_page;
            HtmlNode ht1 = null;
            HtmlNode ht2 = null;
            HtmlNode ht3 = null;

            String sql = "";
            string wenti = "";
            string desc = "";
            //多个回答

            try
            {
                string dordetailurl = dorlist[k].Attributes["href"].Value;//医生详细页面URL
                string dordetailstring = "";


                int trynum = 0;
                while (trynum <= 5)
                {
                    trynum++;
                    try
                    {
                        dordetailstring = dordetail.DownloadString(dordetailurl);
                    }
                    catch (System.Exception ex)
                    {
                    }
                    if (dordetailstring.Length > 99)
                    {
                        break;
                    }
                    Thread.Sleep(trynum * 1000);
                }



                if (dordetailstring.Length < 100)
                {
                    File.AppendAllText(log_file1, "[ID = " + doc_num.ToString("D2") + "] "
                                        + "访问到该问题的网址无效:" + dordetailurl);
                    File.AppendAllText(log_file1, Environment.NewLine);
                    return;
                }
                dorducoment.LoadHtml(dordetailstring);
                question_page = dorducoment.DocumentNode;

                //获取问题和描述
                ht1 = question_page.SelectSingleNode("//div[@class='b_askti']");
                if (ht1 == null)
                {
                    return;
                }
                ht2 = ht1.SelectSingleNode("h1");
                wenti = ht2.InnerText.Trim();


                ht1 = question_page.SelectSingleNode("//div[@class='b_askcont']");
                if (ht1 != null)
                {
                    ht2 = ht1.SelectNodes("//p[@class='crazy_new']")[0];
                    desc = ht2.InnerText.Trim();
                }

                //获取回答
                HtmlNodeCollection ht_collect = question_page.SelectNodes("//div[@class='b_answerli']");

                Random rd = new Random();
                sql = "INSERT INTO ask_question set "
                    + "cid='" + "1" + "'"
                    + ",cid1='" + "1" + "'"
                    + ",author='游客'"
                    + ",authorid=433"
                    + ",answers='" + ht_collect.Count.ToString() + "'"
                    + ",title='" + utf8_chg(wenti) + "'"
                    + ",description='" + utf8_chg(desc) + "'"
                    + ",views='" + rd.Next(1000,10000000).ToString("D") + "'"
                    + ",supply='" + "0" + "'"
                    + ";commit;\n";
                sql_exec(sql);

                //获取问题ID
                DataTable dt = sql_select("ask_question", "SELECT max(id) FROM ask_question a;\n");
                
                //获取回答内容并插入
                for (int n = 0; n < ht_collect.Count; n++ )
                {
                    HtmlNode tmp_hn = ht_collect[n].SelectSingleNode("//div[@class='crazy_new']");
                    string ans_txt = tmp_hn.SelectSingleNode("p").InnerText.Trim();
                    string[] ans_tmp = ans_txt.Replace("&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;", "*").Split('*');
                    ans_txt = "<p>" + ans_tmp[1] + "<br>" + ans_tmp[2] + "</p>"
                        + "<p>" + ans_tmp[3] + "<br>" + ans_tmp[4] + "</p>";
                    sql = "INSERT INTO ask_answer set "
                        + "qid='" + dt.Rows[0][0].ToString() + "'"  //问题ID
                        + ",title='" + utf8_chg(wenti) + "'"
                        + ",author='游客'"
                        + ",authorid=433"
                        + ",content='" + utf8_chg(ans_txt) + "'"
                        + ",status='" + "1" + "'"
                        + ",comments='" + "0" + "'"
                        + ";commit;\n";
                    sql_exec(sql);

                }
                doc_total++;
            }
            catch (System.Exception ex)
            {

            }
            finally
            {
            }
        }
        void test_120ask()
        {
            WebClient rootpage = new WebClient();
            rootpage.Encoding = Encoding.UTF8;
            rootpage.BaseAddress = "http://www.120ask.com/";

            string url = "question";

            string html = string.Empty;
            html = rootpage.DownloadString(url);//读取网页信息

            HtmlAgilityPack.HtmlDocument document = new HtmlAgilityPack.HtmlDocument();
            document.LoadHtml(html);//加载对象


            HtmlNode node = null;
            HtmlNode rootnode = document.DocumentNode;

            node = rootnode.SelectSingleNode("//div[@class='guidebox clearfix']");//搜索疾病类型页面
            HtmlNodeCollection list = node.SelectNodes("//div[@class='clearfix']");



            string departmenturl = null;
            WebClient dpt = new WebClient();
            dpt.Encoding = Encoding.UTF8;
            string dptstring = string.Empty;
            HtmlNodeCollection dorlist;
            HtmlAgilityPack.HtmlDocument deptducoment = new HtmlAgilityPack.HtmlDocument();
            ///////////dpt

            WebClient dordetail = new WebClient();
            dordetail.Encoding = Encoding.UTF8;
            string dordetailstring = string.Empty;

            HtmlAgilityPack.HtmlDocument dorducoment = new HtmlAgilityPack.HtmlDocument();


            File.WriteAllText(log_file1, "========== spider ===============" + Environment.NewLine);
            for (int i = 0; i < list.Count; i++)//遍历类型
            {
                node = list[i].SelectSingleNode("h3").SelectSingleNode("a");
                departmenturl = node.Attributes["href"].Value;

                try
                {
                    dptstring = dpt.DownloadString(departmenturl);//加载科室所有问题
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
                dorlist = dptroot.SelectNodes("//a[@class='q-quename']");//获得页面信息中问题的列表              

                int j = 1;
                while(true)
                {
                    //医生列表循环
                    File.AppendAllText(log_file1, Environment.NewLine);
                    File.AppendAllText(log_file1, "当前页面有 " + dorlist.Count + " 个问题:");
                    File.AppendAllText(log_file1, Environment.NewLine);
                    for (int k = 0; k < dorlist.Count; k++)
                    {
                        doc_num = k + 1;
                        get_wenti(dorlist, dordetail, dorducoment, k);
                    }

                    string cur_html_doc =  departmenturl + "all/" + (j + 1).ToString("D");
                    dptstring = dpt.DownloadString(cur_html_doc);//加载科室所有医生页面信息
                    deptducoment.LoadHtml(dptstring);
                    dptroot = deptducoment.DocumentNode;
                    dorlist = dptroot.SelectNodes("//a[@class='q-quename']");//获得页面信息中问题的列表    


                    //页码循环，只要有最后一页，就可以继续访问
                    HtmlNode hn_tmp = dptroot.SelectSingleNode("//div[@class='clears h-page']");
                    if (!hn_tmp.InnerHtml.Contains("最后一页"))
                    {
                        break;
                    }
                }

            }
            File.AppendAllText(log_file1, Environment.NewLine);
            File.AppendAllText(log_file1, "总共抓了有效问题个数：" + doc_total.ToString());
            File.AppendAllText(log_file1, Environment.NewLine);

            MessageBox.Show("capture data finish!");
        }
        private void button1_Click(object sender, EventArgs e)
        {
            string M_str_sqlcon = "server=localhost;user id=root;password=cb;database=tipask;Charset=utf8"; //根据自己的设置10  
            myCon = new MySqlConnection(M_str_sqlcon);
            {
            if (myCon == null)
                MessageBox.Show("数据库连接失败");
            }
            myCon.Open();

            //test_pc(); //抓微医网的医生

            test_120ask();
            myCon.Close();
            myCon.Dispose();

            //webBrowser1.Navigate("http://myzx.39.net/zb-552.html");
            //webBrowser1.Navigate("http://yyk.39.net/doctor/101000.html");
            //webBrowser1.DocumentCompleted += new WebBrowserDocumentCompletedEventHandler(web_DocumentCompleted);
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            
        }
    }
}
