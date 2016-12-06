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
using System.Collections;

namespace 爬虫项目
{
    public partial class Form1 : Form
    {
        static string HTML_ERROR = "404";
        static string log_file = "log.txt";
        static string log_file1 = "spider.log";

        static string hos_img_name = "gd";

        int http_timeout = 5000;
        public static DataTable cat_dt = null;

        SortedList<string, bool> question_list = new SortedList<string, bool>();
        SortedList<string, bool> cat_list = new SortedList<string, bool>();


        SortedList<string, bool> doc_list = new SortedList<string, bool>();
        SortedList<string, bool> keshi_list = new SortedList<string, bool>();
        SortedList<string, bool> hos_list = new SortedList<string, bool>();

        int question_deal = 0;

        MySqlConnection myCon = null;
        public Form1()
        {
            InitializeComponent();
        }

        public static string CreateGetHttpResponse(string url, int timeout, string userAgent, CookieCollection cookies, Encoding encode)
        {
            string rlt = "";
            string DefaultUserAgent = "Mozilla/4.0 (compatible; MSIE 6.0; Windows NT 5.2; SV1; .NET CLR 1.1.4322; .NET CLR 2.0.50727)";
            if (string.IsNullOrEmpty(url))
            {
                throw new ArgumentNullException("url");
            }
            System.GC.Collect();

            HttpWebRequest request = WebRequest.Create(url) as HttpWebRequest;
            request.Method = "GET";
            request.KeepAlive = false;
            request.UserAgent = DefaultUserAgent;
            if (!string.IsNullOrEmpty(userAgent))
            {
                request.UserAgent = userAgent;
            }

            request.Timeout = 1000 * 60;

            if (cookies != null)
            {
                request.CookieContainer = new CookieContainer();
                request.CookieContainer.Add(cookies);
            }

            StreamReader reader = null;
            HttpWebResponse response = null;
            int i = 0;
            while (i < 6)
            {
                try
                {
                    response = request.GetResponse() as HttpWebResponse;

                    reader = new StreamReader(response.GetResponseStream(), encode);

                    rlt = reader.ReadToEnd();
                }
                catch (System.Exception ex)
                {
                    if (ex.Message.Equals("远程服务器返回错误: (404) 未找到。"))
                    {
                        return HTML_ERROR;
                    }
                }


                if (rlt.Length > 99)
                {
                    break;
                }

                i++;
            }

            if (reader != null)
            {
                reader.Close();
                reader = null;
            }
            if (response != null)
            {
                response.Close();
                reader = null;
            }
            if (request != null)
            {
                request.Abort();
                request = null;
            }
            System.GC.Collect();

            if (rlt.Length < 2)
            {
                //MessageBox.Show("没找到网页");
            }

            return rlt;
        }  
        public static string CreateGetHttpResponse(string url, int timeout, string userAgent, CookieCollection cookies)
        {
            string rlt = "";
            string DefaultUserAgent = "Mozilla/4.0 (compatible; MSIE 6.0; Windows NT 5.2; SV1; .NET CLR 1.1.4322; .NET CLR 2.0.50727)";
            if (string.IsNullOrEmpty(url))
            {
                throw new ArgumentNullException("url");
            }
            System.GC.Collect();

            HttpWebRequest request = WebRequest.Create(url) as HttpWebRequest;
            request.Method = "GET";
            request.KeepAlive = false;
            request.UserAgent = DefaultUserAgent;
            if (!string.IsNullOrEmpty(userAgent))
            {
                request.UserAgent = userAgent;
            }

            request.Timeout = 1000 * 60;

            if (cookies != null)
            {
                request.CookieContainer = new CookieContainer();
                request.CookieContainer.Add(cookies);
            }

            StreamReader reader = null;
            HttpWebResponse response = null;
            int i = 0;
            while (i < 6)
            {
                try
                {
                    response = request.GetResponse() as HttpWebResponse;

                    reader = new StreamReader(response.GetResponseStream(), Encoding.UTF8);

                    rlt = reader.ReadToEnd();
                }
                catch (System.Exception ex)
                {

                }


                if (rlt.Length > 99)
                {
                    break;
                }

                i++;
            }

            if (reader != null)
            {
                reader.Close();
                reader = null;
            }
            if (response != null)
            {
                response.Close();
                reader = null;
            }
            if (request != null)
            {
                request.Abort();
                request = null;
            }
            System.GC.Collect();

            if (rlt.Length < 2)
            {
                //MessageBox.Show("没找到网页");
            }

            return rlt;
        }  

        ///执行MySqlCommand命令
        /// 执行MySqlCommand
        /// <param name="M_str_sqlstr">SQL语句</param>20     
        public void sql_exec(string sql)
        {
            MySqlCommand mysqlcom = null;
            try
            {

                mysqlcom = new MySqlCommand(sql, myCon);
                mysqlcom.ExecuteNonQuery();
                mysqlcom.Dispose();
            }
            catch (System.Exception ex)
            {
                //MessageBox.Show(ex.ToString() + sql, "数据库执行sql失败");
            }
            finally
            {
                if (mysqlcom != null)
                    mysqlcom.Dispose();
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
                //MessageBox.Show(ex.ToString() + sql, "数据库执行sql失败");
            }
            finally
            {
                if (mysqlcom != null)
                    mysqlcom.Dispose();
            }
            return dt;
        }

        private bool test_user_exist(string name, ref string uid)
        {
            DataTable dt = null;
            dt = sql_select("ask_user", "select uid from ask_user where username ='" + name.Trim() + "';\n");

            if (dt == null)
            {
                return false;
            }
            else
            {

                if (dt.Rows.Count == 1)
                {
                    uid = dt.Rows[0]["uid"].ToString();
                    return true;
                }
                else
                {
                    return false;
                }
            }
        }

        bool get_category(string name, ref int cid, ref int cid1, ref int cid2, ref int cid3)
        {
            int grade;
            int i = 0;
            cid = 0;
            cid1 = 0;
            cid2 = 0;
            cid3 = 0;
            int poff = 18;
            for (i = 0; i < cat_dt.Rows.Count; i++)
            {
                if (name.Trim().Equals(cat_dt.Rows[i]["name"].ToString().Trim()))
                {
                    //找到里层类别
                    grade = int.Parse(cat_dt.Rows[i]["grade"].ToString());

                    if (grade < 1 || grade > 3)
                    {
                        MessageBox.Show("错误提示", "错误的分类级别" + grade.ToString());
                        return false;
                    }

                    if (grade == 3)
                    {
                        cid = cid3 = int.Parse(cat_dt.Rows[i]["id"].ToString());
                        cid2 = int.Parse(cat_dt.Rows[cid3 - poff]["pid"].ToString());
                        cid1 = int.Parse(cat_dt.Rows[cid2 - poff]["pid"].ToString());
                    }

                    if (grade == 2)
                    {
                        cid = cid2 = int.Parse(cat_dt.Rows[i]["id"].ToString());
                        cid1 = int.Parse(cat_dt.Rows[cid2 - poff]["pid"].ToString());
                    }

                    if (grade == 1)
                    {
                        cid = cid1 = int.Parse(cat_dt.Rows[i]["id"].ToString());
                    }
                    return true;
                }
            }
            return false;
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

        private static bool SaveBinaryFile(WebResponse response, string save_directory, string file_name)
        {
            bool value = false;
            byte[] buffer = new byte[1024];
            Stream outStream = null;
            Stream inStream = null;
            string savePath = save_directory + file_name;

            try
            {
                if (!Directory.Exists(save_directory))
                {
                    Directory.CreateDirectory(save_directory);
                }
                if (File.Exists(savePath))
                {
                    File.Delete(savePath);
                }
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
            catch(Exception ex)
            {
                //MessageBox.Show(ex.ToString(), "下载图片失败");
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
        public static bool DownloadPicture(string picUrl, string save_directory, string file_name, int timeOut)
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
                    value = SaveBinaryFile(response, save_directory, file_name);
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

        public static int img_start_id = 0;

        public string digui(string name, string base_name, int rename)
        {
            string uid = "0";
            
            if (!test_user_exist(name, ref uid))
            {
                return name;
            }
            else
            {
                name = base_name + rename.ToString("D3");
                return digui(name, base_name, rename + 1);
            }

        }
        private void get_doc(HtmlNodeCollection dorlist, HtmlAgilityPack.HtmlDocument dorducoment, int k, string hos_jx)
        {
            HtmlNode dor;
            HtmlNode ht1 = null;
            HtmlNode ht2 = null;
            HtmlNode ht3 = null;
            HtmlNodeCollection hts = null;

            string doc_key = "";
            string name = "";
            string dept = "";
            string hos = "";
            string skill = "";
            string word = "";
            string img = "";
            string zhicheng = "";

            string dordetailurl = "";
            string dordetailstring = "";
            try
            {

                dordetailurl = dorlist[k].SelectNodes("div")[0].
                                      SelectSingleNode("a").Attributes["href"].Value;//医生详细页面URL
                dordetailurl = dordetailurl.Replace('\t', ' ');
                dordetailurl = dordetailurl.Replace('\r', ' ');
                dordetailurl = dordetailurl.Replace('\n', ' ');
                dordetailurl = dordetailurl.Replace(" ", "");

                //http://www.guahao.com/expert/9a722630-0d6f-446f-9b4f-4bf89d54fee8000
                doc_key = dordetailurl.Substring(29);
                bool exist = false;
                doc_list.TryGetValue(doc_key, out exist);
                if (exist)
                {
                    return;
                }

                WebClient wc = new WebClient();
                wc.Encoding = Encoding.UTF8;
                int i = 0;
                while (i < 6)
                {
                    try
                    {
                        dordetailstring = wc.DownloadString(dordetailurl);
                    }
                    catch (System.Exception ex)
                    {

                    }
                    if (dordetailstring.Length > 99)
                    {
                        break;
                    }
                    Thread.Sleep(i * 1000);
                    i++;
                }

                if (dordetailstring.Length < 2)
                {
                    //MessageBox.Show("获取网页失败");
                }

                dorducoment.LoadHtml(dordetailstring);
                dor = dorducoment.DocumentNode;

                ht1 = dor.SelectSingleNode("//div[@class='detail word-break']");
                if (ht1 != null)
                {
                    name = ht1.SelectSingleNode("h1").SelectSingleNode("strong").InnerText;
                    HtmlNode tmp = ht1.SelectSingleNode("h1").SelectSingleNode("span");
                    if (tmp != null)
                    {
                        zhicheng = tmp.InnerText;
                    }
                }


                hts = dor.SelectNodes("/html/body/div/div/div/div/section/div/div/div/p/a[@target='_blank']");
                if (hts != null)
                {
                    if (hts.Count >= 2)
                    {
                        dept = hts[1].InnerText.Replace("\n", string.Empty).Replace("\r", string.Empty).Trim();
                        hos = hts[0].InnerText.Replace("\n", string.Empty).Replace("\r", string.Empty).Trim();
                    }
                    else
                    {
                        //MessageBox.Show("error");
                    }
                }
                else
                {
                    //MessageBox.Show("error");
                }


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
                ////img.guahao.com/images/image140/BZJ2943253.jpg?timestamp=1474362617059
                img = ht2.Attributes["src"].Value.Split('?')[0];


                //图片处理
                string img_path = "";
                if (img.Contains("character"))
                {
                    img_path = "/img/doc/";

                    if (img.Contains("doc-f-l.png"))
                    {
                        img = img_path + "doc-f-l.png";
                    }
                    else if (img.Contains("doc-m-l.png"))
                    {
                        img = img_path + "doc-m-l.png";
                    }
                    else
                    {
                        img = img_path + "doc-unknow-l.png";
                    }
                }
                else
                {
                    img_path = "/img/doc/" + hos_jx + "/";

                    string tmp = img.Substring(24);
                    string[] tmp1 = tmp.Split('/');
                    string[] tmp2 = tmp1[1].Split('.');
                    tmp = "http://kano.guahao.com/" + tmp2[0] + "_" + tmp1[0] + "." + tmp2[1];
                    img = img_path + img_start_id.ToString("D6") + "." + tmp2[1];
                    DownloadPicture(tmp, "C:\\web\\www\\img\\doc\\" + hos_jx + "\\", img_start_id.ToString("D6") + "." + tmp2[1], -1);
                    img = img_path + img_start_id.ToString("D6") + "." + tmp2[1];
                }
                
                //str_txt = "[ID = " + doc_num.ToString("D2") + "] " +
                //          "姓名:" + name.PadRight(10) +
                //          "职称:" + zhicheng.PadRight(10) +
                //          "医院:" + hos.PadRight(20) +
                //          "科室:" + dept.PadRight(10) +
                //          "擅长:" + skill.PadRight(32) +
                //          "简介:" + word.PadRight(20) +
                //          "图片地址:" + img.PadRight(2);
                name = digui(name, name, 1);

                String sql = "INSERT INTO ask_user set "
                             + "username='" +  (name) + "'"
                             + ",password='f9f16d97c90d8c6f2cab37bb6d1f1992'"   //doctor
                             + ",email='test@163.com'"
                             + ",expert=1"
                             + ",dept_id=0"
                             + ",hospital='" +  (hos) + "'"
                             + ",dept='" +  (dept) + "'"
                             + ",introduction='" +  (skill) + "'"
                             + ",img='" + img + "'"
                             + ",zhicheng='" +  (zhicheng) + "'"
                             + ";commit;\n";
                sql_exec(sql);

                doc_list.TryGetValue(doc_key, out exist);
                if (!exist)
                {
                    doc_list.Add(doc_key, true);//已经处理过的就加进去
                    if (File.Exists("question_list.log"))
                    {
                        File.AppendAllText("doc_list.log", "," + doc_key);
                    }
                    else
                    {
                        File.AppendAllText("doc_list.log", doc_key);
                    }
                }

                doc_total++;
                img_start_id++;
            }
            catch (System.Exception ex)
            {
                //MessageBox.Show(ex.ToString(), "医生抓取失败");
            }
            finally
            {
            }
        }
        public static int hos_jx_tmp = 0;
        private void get_hospital_info(string hospital_id)
        {
            try
            {

                int pagecount = 0;

                HtmlNode rootnode = null;
                HtmlNode node = null;

                HtmlNodeCollection dorlist = null;
                HtmlNodeCollection list = null;

                string departmenturl = "";
                string dptstring = "";
                string hos_jx = "";


                WebClient rootpage = new WebClient();
                rootpage.Encoding = Encoding.UTF8;
                rootpage.BaseAddress = "http://www.guahao.com/hospital/";

                //string url = "05ba2f6c-ec92-4a58-a6d0-31befb5474ed000";//中山大学附属第三医院天河医院

                string html = string.Empty;
                html = rootpage.DownloadString(hospital_id);//读取网页信息

                HtmlAgilityPack.HtmlDocument document = new HtmlAgilityPack.HtmlDocument();
                document.LoadHtml(html);//加载对象

                rootnode = document.DocumentNode;

                //获取医院简写，取域名中间内容
                node = rootnode.SelectSingleNode("/html/body/div/div/div/div/section/div/div/div[@class='website']");
                hos_jx = hos_img_name + hos_jx_tmp.ToString("D3");
                hos_jx_tmp++;


                list = rootnode.SelectNodes("//span[@data-exp='1']");//搜索data-exp=1的span标签 科室页面
                if (list == null)
                {
                    return;
                }

                HtmlAgilityPack.HtmlDocument deptducoment = new HtmlAgilityPack.HtmlDocument();
                HtmlAgilityPack.HtmlDocument dorducoment = new HtmlAgilityPack.HtmlDocument();


                File.WriteAllText(log_file1, "========== spider ===============" + Environment.NewLine);
                for (int i = 0; i < list.Count; i++)//遍历科室 
                {
                    node = list[i].SelectSingleNode("a");
                    departmenturl = node.Attributes["href"].Value;
                    departmenturl = departmenturl.Replace("department", "department/shiftcase");//科室连接

                    //http://www.guahao.com/department/shiftcase/bf068e51-b24f-414b-aed0-9dc32e38fc45000?isStd=
                    string keshi_key = departmenturl.Substring(43);
                    bool exist = false;
                    doc_list.TryGetValue(keshi_key, out exist);
                    if (exist)
                    {
                        continue;
                    }

                    try
                    {
                        //加载科室所有医生页面信息
                        dptstring = CreateGetHttpResponse(departmenturl, 10000, null, null);
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


                    dorlist = dptroot.SelectNodes("//div[@class='g-doctor-item2 g-clear to-margin']");//获得页面信息中医生的列表 new
                    //dorlist = dptroot.SelectNodes("//div[@class='doc-info']");//获得页面信息中医生的列表

                    HtmlNode info_page = dptroot.SelectSingleNode("//div[@class='other-info']");
                    if (info_page == null)
                    {
                        pagecount = 1;
                    }
                    else
                    {
                        pagecount = int.Parse(info_page.SelectNodes("span")[0].SelectSingleNode("label").InnerHtml);//网页的总页数
                    }
                    if (dorlist == null)
                    {
                        continue;
                    }

                    //页码循环
                    for (int j = 1; j <= pagecount; j++)
                    {
                        //医生列表循环
                        for (int k = 0; k < dorlist.Count; k++)
                        {
                            doc_num = k + 1;
                            get_doc(dorlist, dorducoment, k, hos_jx);
                        }
                        if (j == pagecount)
                        {
                            break;
                        }
                        string cur_html_doc = departmenturl.Replace("?isStd=", "?pageNo=") + (j + 1).ToString("D");

                        dptstring = CreateGetHttpResponse(cur_html_doc, 10000, null, null);//加载科室所有医生页面信息
                        deptducoment.LoadHtml(dptstring);
                        dptroot = deptducoment.DocumentNode;
                        dorlist = dptroot.SelectNodes("//div[@class='g-doctor-item2 g-clear to-margin']");//获得页面信息中医生的列表
                    }

                    keshi_list.TryGetValue(keshi_key, out exist);
                    if (!exist)
                    {
                        keshi_list.Add(keshi_key, true);//已经处理过的就加进去
                        if (File.Exists("keshi_list.log"))
                        {
                            File.AppendAllText("keshi_list.log", "," + keshi_key);
                        }
                        else
                        {
                            File.AppendAllText("keshi_list.log", keshi_key);
                        }
                    }

                }
            }
            catch (System.Exception ex)
            {

            }
            finally
            {
            }

        }
        private void test_pc(string gz_hospitals_url)
        {
            try
            {

                HtmlAgilityPack.HtmlDocument document = new HtmlAgilityPack.HtmlDocument();

                HtmlNode hos_list_page = null;
                HtmlNode hn1 = null;
                HtmlNodeCollection hn2 = null;

                string hospital_id = "";
                string html_text = "";


                //这两个值必须要同步修改，否则会覆盖

                //广东的
                //string gz_hospitals_url = "http://www.guahao.com/hospital/areahospitals?q=&pi=29&p=%E5%B9%BF%E4%B8%9C&ci=all&c=%E4%B8%8D%E9%99%90&o=all&hl=33&ht=all&hk=all&fg=0&ipIsShanghai=false&sort=region_sort";
                //hos_img_name = "gd";

                //上海的
                //string gz_hospitals_url = "http://www.guahao.com/hospital/areahospitals?pi=2&p=%E4%B8%8A%E6%B5%B7";
                //hos_img_name = "sh";

                //北京
                //string gz_hospitals_url = "http://www.guahao.com/hospital/areahospitals?q=&pi=1&p=%E5%8C%97%E4%BA%AC&ci=all&c=%E4%B8%8D%E9%99%90&o=all&hl=33&ht=all&hk=all&fg=0&ipIsShanghai=false&sort=region_sort";
                //hos_img_name = "bj";

                //浙江
                //string gz_hospitals_url = "http://www.guahao.com/hospital/areahospitals?q=&pi=24&p=%E6%B5%99%E6%B1%9F&ci=all&c=%E4%B8%8D%E9%99%90&o=all&hl=33&ht=all&hk=all&fg=0&ipIsShanghai=false&sort=region_sort";
                //hos_img_name = "zj";


                //湖南
                //string gz_hospitals_url = "http://www.guahao.com/hospital/areahospitals?q=&pi=30&p=%E6%B9%96%E5%8D%97&ci=all&c=%E4%B8%8D%E9%99%90&o=all&hl=33&ht=all&hk=all&fg=0&ipIsShanghai=false&sort=region_sort";
                //hos_img_name = "hn";


                html_text = CreateGetHttpResponse(gz_hospitals_url, 10000, null, null);
                document.LoadHtml(html_text);
                hos_list_page = document.DocumentNode;


                int page_size = 0;
                hn1 = hos_list_page.SelectSingleNode("//span[@class='pd']");
                page_size = int.Parse(hn1.SelectSingleNode("label").InnerText);

                for (int n = 1; n < page_size; n++)
                {
                    if (n >= 2)
                    {
                        string url = gz_hospitals_url + "&pageNo=" + n.ToString();
                        html_text = CreateGetHttpResponse(url, 10000, null, null);

                        if (html_text.Length < 100)
                        {
                            return;
                        }
                        document.LoadHtml(html_text);
                        hos_list_page = document.DocumentNode;
                    }

                    hn2 = hos_list_page.SelectNodes("//li[@class='g-hospital-item J_hospitalItem']");
                    if (hn2 == null)
                    {
                        //MessageBox.Show("没采集到数据!", "失败了");
                    }


                    for (int i = 0; i < hn2.Count; i++)
                    {
                        img_start_id = 0;

                        hospital_id = hn2[i].SelectSingleNode("a").Attributes["monitor-hosp-id"].Value;

                        bool exist = false;
                        hos_list.TryGetValue(hospital_id, out exist);
                        if (exist)
                        {
                            continue;
                        }


                        get_hospital_info(hospital_id);


                        hos_list.TryGetValue(hospital_id, out exist);
                        if (!exist)
                        {
                            try
                            {
                                cat_list.Add(hospital_id, true);//已经处理过的就加进去
                                if (File.Exists("hos_list.log"))
                                {
                                    File.AppendAllText("hos_list.log", "," + hospital_id);
                                }
                                else
                                {
                                    File.AppendAllText("hos_list.log", hospital_id);
                                }
                            }
                            catch (System.Exception ex)
                            {

                            }

                        }
                    }
                }
            }
            catch (System.Exception ex)
            {

            }
            finally
            {
                //MessageBox.Show("capture data finish!");
            }

        }



        private bool select_a_doc(string dept, ref string anthor, ref string anthor_id)
        {
            Random rd = new Random();
            int rd_num = 0;
            DataTable dt = null;
            dt = sql_select("ask_user", "SELECT uid,username from ask_user where dept_id=(SELECT id FROM ask_category WHERE NAME = '" + dept + "')\n");

            if (dt == null)
            {
                return false;
            }
            else
            {

                if (dt.Rows.Count == 0)
                {
                    return false;
                }
                else
                {
                    rd_num = rd.Next(0, dt.Rows.Count - 1);
                    anthor_id = dt.Rows[rd_num]["uid"].ToString();
                    anthor = dt.Rows[rd_num]["username"].ToString();
                    return true;
                }
            }
        }

        private bool test_category_exist(string dept)
        {
            DataTable dt = null;
            dt = sql_select("ask_category", "SELECT id FROM ask_category WHERE NAME = '" + dept + "';\n");

            if (dt == null)
            {
                return false;
            }
            else
            {

                if (dt.Rows.Count == 1)
                {
                    return true;
                }
                else
                {
                    return false;
                }
            }
        }
        //从网页获取问题的子分类
        public static string g_dept = "";
        private bool get_questiong_category(HtmlNode question_page,ref string dept, bool have)
        {
            HtmlNode ht1 = null;
            HtmlNodeCollection ht2 = null;
            HtmlNode ht3 = null;

            if (have)
            {
                dept = g_dept;
                return true;
            }
            ht1 = question_page.SelectSingleNode("//div[@class='b_route']");
            if (ht1 != null)
            {
                ht2 = ht1.SelectNodes("/html/body/div/div/div/a[@target='_blank']");


                if (ht2.Count > 4)//相当于是3级分类，只处理第三级和第二级
                {
                    g_dept = dept = ht2[3].InnerText.Trim();
                    if (test_category_exist(dept))
                    {
                        return true;
                    }
                    else
                    {
                        g_dept = dept = ht2[2].InnerText.Trim();
                        if (test_category_exist(dept))
                        {
                            return true;
                        }
                    }
                }
                else if (ht2.Count == 4)//相当于是3级分类，只处理第3和2级
                {
                    ht3 = ht1.SelectSingleNode("//span[@itemprop='name']");
                    g_dept = dept = ht3.InnerText.Trim();
                    if (test_category_exist(dept))
                    {
                        return true;
                    }
                    else
                    {
                        g_dept = dept = ht2[2].InnerText.Trim();
                        if (test_category_exist(dept))
                        {
                            return true;
                        }
                    }
                }
                else if (ht2.Count == 3)//相当于是2级分类
                {
                    ht3 = ht1.SelectSingleNode("//span[@itemprop='name']");
                    g_dept = dept = ht3.InnerText.Trim();
                    if (test_category_exist(dept))
                    {
                        return true;
                    }
                    else
                    {
                        g_dept = dept = ht2[1].InnerText.Trim();
                        if (test_category_exist(dept))
                        {
                            return true;
                        }
                    }
                }
                else if (ht2.Count == 2)//相当于是1级分类
                {
                    ht3 = ht1.SelectSingleNode("//span[@itemprop='name']");
                    g_dept = dept = ht3.InnerText.Trim();
                    if (test_category_exist(dept))
                    {
                        return true;
                    }
                }
            }
            MessageBox.Show("获取了没有的分类，这个没有太不科学", dept);
            return false;
        }


        private void get_answer_user(HtmlNode question_page, ref string anthor, ref string anthor_id)
        {
            string dept = "";
            String sql = "";

            if (get_questiong_category(question_page, ref dept, true))
            {
                //必须要保证当前分类级别，一定要有一个医生，否则插入一个默认医生
                if (select_a_doc(dept, ref anthor, ref anthor_id))
                {
                    return;
                }
                else
                {
                    int cid = 0, cid1 = 0, cid2 = 0, cid3 = 0;
                    if (get_category(dept, ref cid, ref cid1, ref cid2, ref cid3))//如果该分类没有医生，那必须加入。没找到分类就要停下来定位
                    {
                        anthor = dept + "门诊医生";
                        //先查询有没有这个医生，有就插入，并获取医生的id
                        if (!test_user_exist(anthor, ref anthor_id))
                        {
                            //插入一个默认医生
                            sql = "INSERT INTO ask_user set "
                                + "username='" + anthor + "'"
                                + ",password='f9f16d97c90d8c6f2cab37bb6d1f1992'"   //doctor
                                + ",email='test@163.com'"
                                + ",expert=1"
                                + ",hospital='人民医院'"
                                + ",dept='" + dept + "'"
                                + ",dept_id='" + cid.ToString() + "'"
                                + ",introduction='" + (dept) + "'"
                                + ",img='/img/doc/doc-unknow-l.png'"
                                + ",zhicheng='医师'"
                                + ";commit;\n";
                            sql_exec(sql);


                            DataTable dt = sql_select("ask_user", "SELECT max(uid) FROM ask_user;\n");
                            anthor_id = dt.Rows[0][0].ToString();
                        }
                    }
                }
            }
        }

       

        private void get_wenti(HtmlNodeCollection dorlist, HtmlAgilityPack.HtmlDocument dorducoment, int k)
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

                string wenti_bianhao = dordetailurl.Substring(31).Split('.')[0];
                
                bool exist = false;
                question_list.TryGetValue(wenti_bianhao, out exist);
                if (exist)
                {
                    return;
                }



                int trynum = 0;
                while (trynum <= 5)
                {
                    trynum++;
                    try
                    {
                        dordetailstring = CreateGetHttpResponse(dordetailurl, http_timeout, null, null);
                        //dordetailstring = dordetail.DownloadString(dordetailurl);
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
                wenti = ht2.InnerText.Trim().Replace("‘", " ").Replace("'", " ");


                ht1 = question_page.SelectSingleNode("//div[@class='b_askcont']");
                if (ht1 != null)
                {
                    ht2 = ht1.SelectNodes("//p[@class='crazy_new']")[0];
                    desc = ht2.InnerText.Trim().Replace("‘", " ").Replace("'", " ");
                }

                //获取回答的网页
                HtmlNodeCollection ht_collect = question_page.SelectNodes("//div[@class='crazy_new']");
                Random rd = new Random();

                //获取问题分类并将问题加入数据库
                int cid = 0, cid1 = 0, cid2 = 0, cid3 = 0;
                string dept = "";
                if (get_questiong_category(question_page, ref dept, false))
                {
                    get_category(dept, ref cid, ref cid1, ref cid2, ref cid3);
                }

                sql = "INSERT INTO ask_question set "
                    + "cid='" + cid + "'"  
                    + ",cid1='" + cid1 + "'" 
                    + ",cid2='" + cid2 + "'" 
                    + ",cid3='"  + cid3 + "'"
                    + ",author='游客'"
                    + ",authorid=433"
                    + ",answers='" + ht_collect.Count.ToString() + "'"
                    + ",title='" +  (wenti) + "'"
                    + ",description='" +  (desc) + "'"
                    + ",views='" + rd.Next(1000,10000000).ToString("D") + "'"
                    + ",supply='" + "0" + "'"
                    + ";commit;\n";
                sql_exec(sql);


                question_list.TryGetValue(wenti_bianhao, out exist);
                if (!exist)
                {
                    question_list.Add(wenti_bianhao, true);//已经处理过的就加进去
                    if (File.Exists("question_list.log"))
                    {
                        File.AppendAllText("question_list.log", "," + wenti_bianhao);
                    }
                    else
                    {
                        File.AppendAllText("question_list.log", wenti_bianhao);
                    }
                }

                //获取问题ID
                DataTable dt = sql_select("ask_question", "SELECT max(id) FROM ask_question a;\n");
                
                //获取回答内容并插入
                for (int n = 0; n < ht_collect.Count; n++ )
                {
                    HtmlNode tmp_hn = ht_collect[n];
                    string ans_txt = tmp_hn.SelectSingleNode("p").InnerText.Trim().Replace("‘", " ").Replace("'", " ");
                    string[] ans_tmp = ans_txt.Replace("&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;", "*").Split('*');
                    string anthor = "";
                    string anthor_id = "";
                    get_answer_user(question_page, ref anthor, ref anthor_id);

                    if (anthor.Length <= 1)
                    {
                        MessageBox.Show("严重错误发生了");
                        return;
                    }

                    ans_txt = "<p>" + ans_tmp[1] + "<br>" + ans_tmp[2] + "</p>"
                        + "<p>" + ans_tmp[3] + "<br>" + ans_tmp[4] + "</p>";
                    sql = "INSERT INTO ask_answer set "
                        + "qid='" + dt.Rows[0][0].ToString() + "'"  //问题ID
                        + ",title='" +  (wenti) + "'"
                        + ",author='"+ anthor+"'"
                        + ",authorid=" + anthor_id
                        + ",content='" +  ans_txt + "'"
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
            string dptstring = string.Empty;
            HtmlNodeCollection dorlist;
            HtmlAgilityPack.HtmlDocument deptducoment = new HtmlAgilityPack.HtmlDocument();
            ///////////dpt

            //WebClient dordetail = new WebClient();
            //dordetail.Encoding = Encoding.UTF8;
            string dordetailstring = string.Empty;

            HtmlAgilityPack.HtmlDocument dorducoment = new HtmlAgilityPack.HtmlDocument();


            File.WriteAllText(log_file1, "========== spider ===============" + Environment.NewLine);
            for (int i = 0; i < list.Count; i++)//遍历类型
            {
                node = list[i].SelectSingleNode("h3").SelectSingleNode("a");
                departmenturl = node.Attributes["href"].Value;

                bool exist = false;
                question_list.TryGetValue(departmenturl, out exist);
                if (exist)
                {
                    continue;
                }

                if (departmenturl.Trim().Contains("lxjk"))
                {
                    continue;
                }

                try
                {
                    dptstring = CreateGetHttpResponse(departmenturl, 100000, null, null);
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
                    for (int k = 0; k < dorlist.Count; k++)
                    {
                        doc_num = k + 1;
                        get_wenti(dorlist, dorducoment, k);
                    }

                    string cur_html_doc =  departmenturl + "all/" + (j + 1).ToString("D");
                    j++;

                    dptstring = CreateGetHttpResponse(cur_html_doc, 10000, null, null);//加载科室所有医生页面信息

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

                cat_list.TryGetValue(departmenturl, out exist);
                if (!exist)
                {
                    cat_list.Add(departmenturl, true);//已经处理过的就加进去
                    if (File.Exists("cat_list.log"))
                    {
                        File.AppendAllText("cat_list.log", "," + departmenturl);
                    }
                    else
                    {
                        File.AppendAllText("cat_list.log", departmenturl);
                    }
                }

            }
            File.AppendAllText(log_file1, Environment.NewLine);
            File.AppendAllText(log_file1, "总共抓了有效问题个数：" + doc_total.ToString());
            File.AppendAllText(log_file1, Environment.NewLine);

            MessageBox.Show("capture data finish!");
        }



        //已经导了北上广深,浙江湖南
        private void test_guahao()
        {
            string gz_hospitals_url = "";

            //江苏
            gz_hospitals_url = "http://www.guahao.com/hospital/areahospitals?q=&pi=22&p=%E6%B1%9F%E8%8B%8F&ci=all&c=%E4%B8%8D%E9%99%90&o=all&hl=33&ht=all&hk=all&fg=0&ipIsShanghai=false&sort=region_sort";
            hos_img_name = "js";
            test_pc(gz_hospitals_url);


            //山西
            gz_hospitals_url = "http://www.guahao.com/hospital/areahospitals?q=&pi=8&p=%E5%B1%B1%E8%A5%BF&ci=all&c=%E4%B8%8D%E9%99%90&o=all&hl=33&ht=all&hk=all&fg=0&ipIsShanghai=false&sort=region_sort";
            hos_img_name = "sxa";
            test_pc(gz_hospitals_url);


            //山东
            gz_hospitals_url = "http://www.guahao.com/hospital/areahospitals?q=&pi=21&p=%E5%B1%B1%E4%B8%9C&ci=all&c=%E4%B8%8D%E9%99%90&o=all&hl=33&ht=all&hk=all&fg=0&ipIsShanghai=false&sort=region_sort";
            hos_img_name = "sd";
            test_pc(gz_hospitals_url);


            //湖北
            gz_hospitals_url = "http://www.guahao.com/hospital/areahospitals?q=&pi=19&p=%E6%B9%96%E5%8C%97&ci=all&c=%E4%B8%8D%E9%99%90&o=all&hl=33&ht=all&hk=all&fg=0&ipIsShanghai=false&sort=region_sort";
            hos_img_name = "hb";
            test_pc(gz_hospitals_url);


            //天津
            gz_hospitals_url = "http://www.guahao.com/hospital/areahospitals?q=&pi=3&p=%E5%A4%A9%E6%B4%A5&ci=all&c=%E4%B8%8D%E9%99%90&o=all&hl=33&ht=all&hk=all&fg=0&ipIsShanghai=false&sort=region_sort";
            hos_img_name = "tj";
            test_pc(gz_hospitals_url);


            //陕西
            gz_hospitals_url = "http://www.guahao.com/hospital/areahospitals?q=&pi=9&p=%E9%99%95%E8%A5%BF&ci=all&c=%E4%B8%8D%E9%99%90&o=all&hl=33&ht=all&hk=all&fg=0&ipIsShanghai=false&sort=region_sort";
            hos_img_name = "sxb";
            test_pc(gz_hospitals_url);

            //安徽
            gz_hospitals_url = "http://www.guahao.com/hospital/areahospitals?q=&pi=23&p=%E5%AE%89%E5%BE%BD&ci=all&c=%E4%B8%8D%E9%99%90&o=all&hl=33&ht=all&hk=all&fg=0&ipIsShanghai=false&sort=region_sort";
            hos_img_name = "ah";
            test_pc(gz_hospitals_url);

            //河南
            gz_hospitals_url = "http://www.guahao.com/hospital/areahospitals?q=&pi=20&p=%E6%B2%B3%E5%8D%97&ci=all&c=%E4%B8%8D%E9%99%90&o=all&hl=all&ht=all&hk=&fg=0&ipIsShanghai=false&sort=region_sort";
            hos_img_name = "hna";
            test_pc(gz_hospitals_url);

            //四川
            gz_hospitals_url = "http://www.guahao.com/hospital/areahospitals?q=&pi=15&p=%E5%9B%9B%E5%B7%9D&ci=all&c=%E4%B8%8D%E9%99%90&o=all&hl=33&ht=all&hk=all&fg=0&ipIsShanghai=false&sort=region_sort";
            hos_img_name = "sc";
            test_pc(gz_hospitals_url);

            //青海
            gz_hospitals_url = "http://www.guahao.com/hospital/areahospitals?q=&pi=12&p=%E9%9D%92%E6%B5%B7&ci=all&c=%E4%B8%8D%E9%99%90&o=all&hl=33&ht=all&hk=all&fg=0&ipIsShanghai=false&sort=region_sort";
            hos_img_name = "qh";
            test_pc(gz_hospitals_url);


            //辽宁
            gz_hospitals_url = "http://www.guahao.com/hospital/areahospitals?q=&pi=5&p=%E8%BE%BD%E5%AE%81&ci=all&c=%E4%B8%8D%E9%99%90&o=all&hl=33&ht=all&hk=all&fg=0&ipIsShanghai=false&sort=region_sort";
            hos_img_name = "ln";
            test_pc(gz_hospitals_url);


            //内蒙古
            gz_hospitals_url = "http://www.guahao.com/hospital/areahospitals?q=&pi=33&p=%E5%86%85%E8%92%99%E5%8F%A4&ci=all&c=%E4%B8%8D%E9%99%90&o=all&hl=33&ht=all&hk=all&fg=0&ipIsShanghai=false&sort=region_sort";
            hos_img_name = "nmg";
            test_pc(gz_hospitals_url);


            //江西
            gz_hospitals_url = "http://www.guahao.com/hospital/areahospitals?q=&pi=25&p=%E6%B1%9F%E8%A5%BF&ci=all&c=%E4%B8%8D%E9%99%90&o=all&hl=33&ht=all&hk=all&fg=0&ipIsShanghai=false&sort=region_sort";
            hos_img_name = "jx";
            test_pc(gz_hospitals_url);


            //黑龙江
            gz_hospitals_url = "http://www.guahao.com/hospital/areahospitals?q=&pi=7&p=%E9%BB%91%E9%BE%99%E6%B1%9F&ci=all&c=%E4%B8%8D%E9%99%90&o=all&hl=33&ht=all&hk=all&fg=0&ipIsShanghai=false&sort=region_sort";
            hos_img_name = "hlj";
            test_pc(gz_hospitals_url);


            //河北
            gz_hospitals_url = "http://www.guahao.com/hospital/areahospitals?q=&pi=16&p=%E6%B2%B3%E5%8C%97&ci=all&c=%E4%B8%8D%E9%99%90&o=all&hl=33&ht=all&hk=all&fg=0&ipIsShanghai=false&sort=region_sort";
            hos_img_name = "hba";
            test_pc(gz_hospitals_url);


            //云南
            gz_hospitals_url = "http://www.guahao.com/hospital/areahospitals?q=&pi=17&p=%E4%BA%91%E5%8D%97&ci=all&c=%E4%B8%8D%E9%99%90&o=all&hl=33&ht=all&hk=all&fg=0&ipIsShanghai=false&sort=region_sort";
            hos_img_name = "yn";
            test_pc(gz_hospitals_url);


            //吉林
            gz_hospitals_url = "http://www.guahao.com/hospital/areahospitals?q=&pi=6&p=%E5%90%89%E6%9E%97&ci=all&c=%E4%B8%8D%E9%99%90&o=all&hl=33&ht=all&hk=all&fg=0&ipIsShanghai=false&sort=region_sort";
            hos_img_name = "jl";
            test_pc(gz_hospitals_url);


            //贵州
            gz_hospitals_url = "http://www.guahao.com/hospital/areahospitals?q=&pi=18&p=%E8%B4%B5%E5%B7%9E&ci=all&c=%E4%B8%8D%E9%99%90&o=all&hl=33&ht=all&hk=all&fg=0&ipIsShanghai=false&sort=region_sort";
            hos_img_name = "gz";
            test_pc(gz_hospitals_url);


            //广西
            gz_hospitals_url = "http://www.guahao.com/hospital/areahospitals?q=&pi=31&p=%E5%B9%BF%E8%A5%BF&ci=all&c=%E4%B8%8D%E9%99%90&o=all&hl=33&ht=all&hk=all&fg=0&ipIsShanghai=false&sort=region_sort";
            hos_img_name = "gx";
            test_pc(gz_hospitals_url);


            //重庆
            gz_hospitals_url = "http://www.guahao.com/hospital/areahospitals?q=&pi=4&p=%E9%87%8D%E5%BA%86&ci=all&c=%E4%B8%8D%E9%99%90&o=all&hl=33&ht=all&hk=all&fg=0&ipIsShanghai=false&sort=region_sort";
            hos_img_name = "cq";
            test_pc(gz_hospitals_url);

            
            //宁夏
            gz_hospitals_url = "http://www.guahao.com/hospital/areahospitals?q=&pi=10&p=%E5%AE%81%E5%A4%8F&ci=all&c=%E4%B8%8D%E9%99%90&o=all&hl=33&ht=all&hk=all&fg=0&ipIsShanghai=false&sort=region_sort";
            hos_img_name = "nx";
            test_pc(gz_hospitals_url);


            //甘肃
            gz_hospitals_url = "http://www.guahao.com/hospital/areahospitals?q=&pi=11&p=%E7%94%98%E8%82%83&ci=all&c=%E4%B8%8D%E9%99%90&o=all&hl=33&ht=all&hk=all&fg=0&ipIsShanghai=false&sort=region_sort";
            hos_img_name = "gs";
            test_pc(gz_hospitals_url);


            //福建
            gz_hospitals_url = "http://www.guahao.com/hospital/areahospitals?q=&pi=27&p=%E7%A6%8F%E5%BB%BA&ci=all&c=%E4%B8%8D%E9%99%90&o=all&hl=33&ht=all&hk=all&fg=0&ipIsShanghai=false&sort=region_sort";
            hos_img_name = "fj";
            test_pc(gz_hospitals_url);


            //海南
            gz_hospitals_url = "http://www.guahao.com/hospital/areahospitals?q=&pi=32&p=%E6%B5%B7%E5%8D%97&ci=all&c=%E4%B8%8D%E9%99%90&o=all&hl=33&ht=all&hk=all&fg=0&ipIsShanghai=false&sort=region_sort";
            hos_img_name = "hnb";
            test_pc(gz_hospitals_url);


            //新疆
            gz_hospitals_url = "http://www.guahao.com/hospital/areahospitals?q=&pi=13&p=%E6%96%B0%E7%96%86&ci=all&c=%E4%B8%8D%E9%99%90&o=all&hl=33&ht=all&hk=all&fg=0&ipIsShanghai=false&sort=region_sort";
            hos_img_name = "xj";
            test_pc(gz_hospitals_url);


            //西藏
            gz_hospitals_url = "http://www.guahao.com/hospital/areahospitals?q=&pi=14&p=%E8%A5%BF%E8%97%8F&ci=all&c=%E4%B8%8D%E9%99%90&o=all&hl=33&ht=all&hk=all&fg=0&ipIsShanghai=false&sort=region_sort";
            hos_img_name = "xz";
            test_pc(gz_hospitals_url);


            MessageBox.Show("capture data finish!");
        }

        private void button1_Click(object sender, EventArgs e)
        {
            //img_start_id = int.Parse(textBox1.Text);

            string M_str_sqlcon = "server=localhost;user id=root;password=cb;database=tipask;Charset=utf8"; //根据自己的设置10  
            myCon = new MySqlConnection(M_str_sqlcon);
            {
                if (myCon == null)
                    MessageBox.Show("数据库连接失败");
            }
            myCon.Open();
            cat_dt = sql_select("ask_category", "select id,name,pid,grade from ask_category  ORDER BY id ASC;\n");

            test_guahao(); //抓微医网的医生

            //test_120ask();
            myCon.Close();
            myCon.Dispose();

            //webBrowser1.Navigate("http://myzx.39.net/zb-552.html");
            //webBrowser1.Navigate("http://yyk.39.net/doctor/101000.html");
            //webBrowser1.DocumentCompleted += new WebBrowserDocumentCompletedEventHandler(web_DocumentCompleted);
        }




        private bool get_questiong_category_39jk(HtmlNode question_page, ref string dept, bool have)
        {
            HtmlNodeCollection ht2 = null;

            if (have)
            {
                dept = g_dept;
                return true;
            }

            ht2 = question_page.SelectNodes("/html/body/div/div/div/div/span[@class='sub_here']");


            if (ht2.Count >= 2)//相当于是2级分类
            {
                g_dept = dept = ht2[1].SelectSingleNode("a").InnerText.Trim();
                if (test_category_exist(dept))
                {
                    return true;
                }
                else
                {
                    g_dept = dept = ht2[0].SelectSingleNode("a").InnerText.Trim();
                    if (test_category_exist(dept))
                    {
                        return true;
                    }
                }
            }
            else if (ht2.Count == 1)//相当于是1级分类
            {
                g_dept = dept = ht2[0].SelectSingleNode("a").InnerText.Trim();
                if (test_category_exist(dept))
                {
                    return true;
                }
            }
            
            //MessageBox.Show("获取了没有的分类，这个没有太不科学", dept);
            return false;
        }




        long DateTimeToUnixTimestamp(DateTime dateTime)
        {
            var start = new DateTime(1970, 1, 1, 0, 0, 0, dateTime.Kind);
            return Convert.ToInt64((dateTime - start).TotalSeconds);
        }

        long get_question_time()
        {
            DateTime time = new DateTime(2016, 1, 1, 0, 0, 0);
            Random rd = new Random();
            time = time.AddMonths(rd.Next(0, 12));
            time = time.AddDays(rd.Next(0, 31));
            time = time.AddHours(rd.Next(8,23));
            time = time.AddMinutes(rd.Next(3, 61));
            return DateTimeToUnixTimestamp(time);
        }

        long get_answer_time(long init_time)
        {
            Random rd = new Random();
            long rlt_time = init_time + rd.Next(1, 60)*60;
            return rlt_time;
        }

        void get_wenti_39(string wenti_bianhao, string default_dept)
        {
            HtmlNode question_page;
            HtmlNode ht1 = null;
            HtmlNode ht2 = null;
            HtmlNode ht3 = null;

            String sql = "";

            string question_html = "";
            string question_url = "";

            Random rd = new Random();

            long time = get_question_time();
            long ans_time = time;
            try
            {
                bool exist = false;
                question_list.TryGetValue(wenti_bianhao, out exist);
                if (exist)
                {
                    return;
                }

                int trynum = 0;
                while (trynum <= 5)
                {
                    trynum++;
                    try
                    {
                        question_url = "http://ask.39.net/question/" + wenti_bianhao + ".html";
                        question_html = CreateGetHttpResponse(question_url, http_timeout, null, null, Encoding.GetEncoding("GB2312"));
                        if (question_html.Equals(HTML_ERROR))
                        {
                            return;
                        }
                    }
                    catch (System.Exception ex)
                    {
                    }
                    if (question_html.Length > 99)
                    {
                        break;
                    }
                    Thread.Sleep(trynum * 1000);
                }



                if (question_html.Length < 100)
                {
                    File.AppendAllText(log_file1, "[ID = " + doc_num.ToString("D2") + "] "
                                        + "访问到该问题的网址无效:" + question_url);
                    File.AppendAllText(log_file1, Environment.NewLine);
                    return;
                }

                HtmlAgilityPack.HtmlDocument document = new HtmlAgilityPack.HtmlDocument();
                document.LoadHtml(question_html);
                question_page = document.DocumentNode;

                //获取问题和描述
                string wenti = "";
                string desc = "";

                ht1 = question_page.SelectSingleNode("//p[@class='user_p']");
                if (ht1 == null)
                {
                    return;
                }
                wenti = ht1.InnerText.Trim().Replace("‘", " ").Replace("'", " ");
                wenti = wenti.Replace("病情描述及疑问：", "");


                bool is_old_htm = false;
                ht1 = question_page.SelectSingleNode("//ul[@class='user_msg']");
                if (ht1 != null)
                {
                    HtmlNodeCollection hc_tmp = ht1.ChildNodes;
                    if (hc_tmp == null)
                    {
                        return;
                    }
                    for (int m = 0; m < hc_tmp.Count; m++)
                    {
                        desc = desc + hc_tmp[m].InnerText.Trim().Replace("‘", " ").Replace("'", " ") + Environment.NewLine;
                    }
                }
                else
                {
                    desc = "";
                    is_old_htm = true;
                }

                //获取回答的网页
                HtmlNodeCollection ht_collect = question_page.SelectNodes("/html/body/div/div/div/div/div/div[@class='t_con']");

                int answer_num = 0;
                if (ht_collect != null)
                {
                    //则没有回答
                    answer_num = ht_collect.Count;
                }

                //获取问题分类并将问题加入数据库
                int cid = 0, cid1 = 0, cid2 = 0, cid3 = 0;
                string dept = "";
                bool cat_result_find = get_questiong_category_39jk(question_page, ref dept, false);
                if (!cat_result_find)
                {
                    return;
                }
                if (is_old_htm)
                {
                    dept = default_dept;
                    cat_result_find = get_category(dept, ref cid, ref cid1, ref cid2, ref cid3);
                }
                else
                {
                    get_category(dept, ref cid, ref cid1, ref cid2, ref cid3);
                }


                sql = "INSERT INTO ask_question set "
                    + "cid='" + cid + "'"
                    + ",cid1='" + cid1 + "'"
                    + ",cid2='" + cid2 + "'"
                    + ",cid3='" + cid3 + "'"
                    + ",author='游客'"
                    + ",authorid=433"
                    + ",answers='" + answer_num.ToString() + "'"
                    + ",title='" + (wenti) + "'"
                    + ",description='" + (desc) + "'"
                    + ",views='" + rd.Next(1000, 100000).ToString("D") + "'"
                    + ",supply='" + "0" + "'"
                    + ",web_name=120 "
                    + ",web_qid ='" + wenti_bianhao + "'"
                    + ",time = " + time.ToString()
                    + ";commit;\n";
                sql_exec(sql);


                question_list.TryGetValue(wenti_bianhao, out exist);
                if (!exist)
                {
                    question_list.Add(wenti_bianhao, true);//已经处理过的就加进去
                    if (File.Exists("question_list.log"))
                    {
                        File.AppendAllText("question_list.log", "," + wenti_bianhao);
                    }
                    else
                    {
                        File.AppendAllText("question_list.log", wenti_bianhao);
                    }
                }

                if (answer_num == 0)
                {
                    return;
                }

                //获取问题ID
                DataTable dt = sql_select("ask_question", "SELECT max(id) FROM ask_question a;\n");

                //获取回答内容并插入
                for (int n = 0; n < ht_collect.Count; n++)
                {
                    HtmlNode tmp_hn = ht_collect[n];
                    ht1 = tmp_hn.SelectSingleNode("//div/p/span");
                    if (ht1 == null)
                    {
                        continue;
                    }
                    string ans_txt = ht1.InnerText.Trim().Replace("‘", " ").Replace("'", " ");
                    string anthor = "";
                    string anthor_id = "";
                    get_answer_user(question_page, ref anthor, ref anthor_id);

                    if (anthor.Length <= 1)
                    {
                        MessageBox.Show("严重错误发生了");
                        return;
                    }
                    ans_time = get_answer_time(ans_time);
                    sql = "INSERT INTO ask_answer set "
                        + "qid='" + dt.Rows[0][0].ToString() + "'"  //问题ID
                        + ",title='" + (wenti) + "'"
                        + ",author='" + anthor + "'"
                        + ",authorid=" + anthor_id
                        + ",content='" + ans_txt + "'"
                        + ",status='" + "1" + "'"
                        + ",comments='" + "0" + "'"
                        + ",time = " + ans_time.ToString()
                        + ";commit;\n";
                    sql_exec(sql);

                }

            }
            catch (System.Exception ex)
            {

            }
            finally
            {
            }
        }
        void test_39(string ks_url_pre, string default_dept)//只取当前页面url前面固定一截+页码+.html
        {
            WebClient rootpage = new WebClient();
            rootpage.Encoding = Encoding.GetEncoding("GB2312");



            //遍历所有的页码
            int j = 1;
            string page_url_cur = ks_url_pre + "-" + j.ToString("D") + ".html";//拼接url字符串

            while (true)
            {
                bool exist = false;
                question_list.TryGetValue(page_url_cur, out exist);
                if (exist)
                {
                    continue;
                }

                string html = CreateGetHttpResponse(page_url_cur, 10000, null, null, Encoding.GetEncoding("GB2312"));//加载科室所有医生页面信息

                HtmlAgilityPack.HtmlDocument document = new HtmlAgilityPack.HtmlDocument();
                document.LoadHtml(html);//加载对象



                //获取当前页面的问题列表
                HtmlNode rootnode = document.DocumentNode;
                HtmlNodeCollection qt_lists = rootnode.SelectNodes("/html/body/div/div/div/ul[@class='list_ask list_ask2']/li");

                if (qt_lists == null)
                {
                    continue;
                }

                for (int i = 0; i < qt_lists.Count; i++)//遍历当前页面的所有问题
                {
                    //href内容为：/question/46745054.html
                    HtmlNode node = qt_lists[i].SelectSingleNode("span").SelectSingleNode("p").SelectSingleNode("a");
                    string qt_url = node.Attributes["href"].Value;//使用时候要补上http://ask.39.net/
                    string qt_id = qt_url.Substring(10).Split('.')[0];

                    get_wenti_39(qt_id, default_dept);
                }

                page_url_cur = ks_url_pre + "-" + j.ToString("D") + ".html";//拼接url字符串
                j++;

                //页码循环，只要有最后一页，就可以继续访问
                HtmlNodeCollection hn_tmp = rootnode.SelectNodes("/html/body/div/div/span/span/a[@target='_self']");
                if (!hn_tmp[hn_tmp.Count - 1].InnerHtml.Contains("尾页"))
                {
                    break;//可以结束抓取了
                }

                cat_list.TryGetValue(page_url_cur, out exist);
                if (!exist)
                {
                    cat_list.Add(page_url_cur, true);//已经处理过的就加进去
                    if (File.Exists("cat_list.log"))
                    {
                        File.AppendAllText("cat_list.log", "," + page_url_cur);
                    }
                    else
                    {
                        File.AppendAllText("cat_list.log", page_url_cur);
                    }
                }

            }

            
        }
        //抓39健康的回答，每个问题要设置一个标号，和39的对应起来，在数据库中存储一个字段即可
        private void button5_Click(object sender, EventArgs e)
        {
            string M_str_sqlcon = "server=localhost;user id=root;password=123456cb;database=tipask;Charset=utf8"; //根据自己的设置10  
            myCon = new MySqlConnection(M_str_sqlcon);
            {
                if (myCon == null)
                    MessageBox.Show("数据库连接失败");
            }
            myCon.Open();
            cat_dt = sql_select("ask_category", "select id,name,pid,grade from ask_category  ORDER BY id ASC;\n");

            test_39("http://ask.39.net/news/313", "内科");


            MessageBox.Show("capture data finish!");
            myCon.Close();
            myCon.Dispose();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            string file = "";
            //先是科室分类
            if (File.Exists("keshi_list.log"))
            {
                file = File.ReadAllText("keshi_list.log");

                foreach (string tmp in file.Split(','))
                {
                    cat_list.Add(tmp, true);
                }
            }

            //再是当前页面
            if (File.Exists("cat_list.log"))
            {
                file = File.ReadAllText("cat_list.log");

                foreach (string tmp in file.Split(','))
                {
                    cat_list.Add(tmp, true);//已经处理过的就加进去
                }
            }

            //单个问题单ID
            if (File.Exists("question_list.log"))
            {
                file = File.ReadAllText("question_list.log");

                foreach (string tmp in file.Split(','))
                {
                    question_list.Add(tmp, true);//已经处理过的就加进去
                }
            }





            //if (File.Exists("doc_list.log"))
            //{
            //    file = File.ReadAllText("doc_list.log");

            //    foreach (string tmp in file.Split(','))
            //    {
            //        doc_list.Add(tmp, true);//已经处理过的就加进去
            //    }
            //}

            //if (File.Exists("keshi_list.log"))
            //{
            //    file = File.ReadAllText("keshi_list.log");

            //    foreach (string tmp in file.Split(','))
            //    {
            //        keshi_list.Add(tmp, true);
            //    }
            //}

            //if (File.Exists("hos_list.log"))
            //{
            //    file = File.ReadAllText("hos_list.log");

            //    foreach (string tmp in file.Split(','))
            //    {
            //        hos_list.Add(tmp, true);
            //    }
            //}

            //if (File.Exists("ans_list.log"))
            //{
            //    file = File.ReadAllText("ans_list.log");
            //    question_deal = int.Parse(file);
            //}

            System.Net.ServicePointManager.DefaultConnectionLimit = 200;
        }

        private void button2_Click(object sender, EventArgs e)
        {
            if (File.Exists("doc_list.log"))
            {
                File.Delete("doc_list.log");
            }

            if (File.Exists("keshi_list.log"))
            {
                File.Delete("keshi_list.log");
            }

            if (File.Exists("hos_list.log"))
            {
                File.Delete("hos_list.log");
            }

            if (File.Exists("question_list.log"))
            {
                File.Delete("question_list.log");
            }

            if (File.Exists("cat_list.log"))
            {
                File.Delete("cat_list.log");
            }
        }


        private int deal_dept(string dept, DataTable cat_table)
        {
            //特殊处理,都要放到常规匹配后面去，先临时放这里
            if (dept.Equals("心内科") || dept.Contains("心血管") || dept.Contains("心身"))
            {
                return 49; //心血管内科
            }

            if (dept.Equals("急诊科") || dept.Contains("全科") || dept.Contains("重症")
                || dept.Contains("急") || dept.Contains("icu") || dept.Contains("ICU")
                || dept.Contains("疼痛"))
            {
                return 44;//其他科室
            }

            if (dept.Equals("放射科"))
            {
                return 34;//辅助检查科室
            }

            if (dept.Equals("胸外科"))
            {
                return 22;//心胸外科
            }

            if (dept.Equals("普通外科"))
            {
                return 19;//普外科
            }

            if (dept.Equals("消化科"))
            {
                return 47;//消化内科
            }

            if (dept.Equals("血液科"))
            {
                return 51;//血液内科
            }

            if (dept.Equals("呼吸科"))
            {
                return 46;//呼吸内科
            }

            if (dept.Equals("耳鼻咽喉科"))
            {
                return 88;//耳鼻喉科
            }

            if (dept.Equals("检验科"))
            {
                return 129;//实验室检查
            }

            if (dept.Equals("肿瘤内科"))
            {
                return 33;//肿瘤科
            }


            if (dept.Contains("康复科"))
            {
                return 41;//康复医学科
            }

            if (dept.Equals("全科"))
            {
                return 19;//其他科室
            }

            if (dept.Equals("针灸科"))
            {
                return 86;//针灸按摩科
            }

            if (dept.Equals("骨外科"))
            {
                return 20;//骨科
            }

            if (dept.Equals("病理科"))
            {
                return 131;//病理及活检
            }

            if (dept.Equals("感染科"))
            {
                return 30;//传染科
            }

            if (dept.Equals("放疗科"))
            {
                return 116;//肿瘤放疗
            }


            return intelligent_fuzzy_matching_algorithm(dept, cat_table); 


            int dept_id  = -1;
            for (int i = cat_table.Rows.Count - 1; i >= 0; i--)
            {
                if (dept.Equals(cat_table.Rows[i]["name"].ToString()))
                {
                    dept_id = int.Parse(cat_table.Rows[i]["id"].ToString());
                    break;
                }
            }

            //如果没匹配到，继续做智能模糊匹配
            if (dept_id == -1)
            {
                dept_id = intelligent_fuzzy_matching_algorithm(dept, cat_table);
            }
            return dept_id;
        }

        private int intelligent_fuzzy_matching_algorithm(string dept, DataTable cat_table)
        {
            //先做部分匹配
            if (dept.Contains("骨"))
            {
                return 20;//骨科
            }

            if (dept.Contains("肝病"))
            {
                return 91;//肝病
            }

            if (dept.Contains("肝胆"))
            {
                return 171;//肝胆外科
            }

            if (dept.Contains("癌") || dept.Contains("瘤"))
            {
                return 33;//肿瘤科
            }

            if (dept.Contains("消化"))
            {
                return 47;//消化内科
            }

            if (dept.Contains("脊"))
            {
                return 180;//脊柱
            }

            if (dept.Contains("血液"))
            {
                return 51;//血液内科
            }

            if (dept.Contains("呼吸"))
            {
                return 46;//呼吸内科
            }

            if (dept.Contains("耳") || dept.Contains("鼻") || dept.Contains("喉"))
            {
                return 88;//耳鼻喉科
            }

            if (dept.Contains("神经内"))
            {
                return 48;//神经内科
            }

            if (dept.Contains("神经"))
            {
                return 21;//神经外科
            }

            if (dept.Contains("妇科"))
            {
                return 57;//妇科
            }

            if (dept.Contains("产"))
            {
                return 58;//产科
            }

            if (dept.Contains("精神") || dept.Contains("心理"))
            {
                return 31;//心理健康科
            }

            if (dept.Contains("肾"))
            {
                return 50;//肾内科
            }

            if (dept.Contains("乳"))
            {
                return 62;//乳腺疾病
            }

            if (dept.Contains("超声"))
            {
                return 128;//超声检查
            }

            if (dept.Contains("白内障"))
            {
                return 326;//白内障
            }

            if (dept.Contains("保健"))
            {
                return 36;//保健养生
            }

            if (dept.Contains("影像"))
            {
                return 130;//影像学检查
            }

            if (dept.Contains("不孕") || dept.Contains("不育") || dept.Contains("生殖"))
            {
                return 60;//不孕不育
            }

            if (dept.Contains("胆") || dept.Contains("胃")
                || dept.Contains("脾") || dept.Contains("肠"))
            {
                return 19;//普外科
            }

            if (dept.Contains("牙"))
            {
                return 90;//口腔科
            }

            if (dept.Contains("营养"))
            {
                return 42;//营养保健科
            }

            if (dept.Contains("名医") || dept.Contains("专家"))
            {
                return 28;//中医科
            }

            if (dept.Contains("脑病"))
            {
                return 48;//神经内科
            }

            if (dept.Contains("脑血管"))
            {
                return 221;//脑血管疾病
            }

            if (dept.Contains("颈"))
            {
                return 179;//头颈外科
            }

            if (dept.Contains("康复"))
            {
                return 41;//康复医学科
            }

            if (dept.Contains("甲"))
            {
                return 261;//甲状腺疾病
            }

            if (dept.Contains("泌尿") || dept.Contains("男"))
            {
                return 23;//泌尿外科
            }

            if (dept.Contains("老年"))
            {
                return 166;//老年痴呆
            }

            if (dept.Contains("药"))
            {
                return 40;//药品
            }

            if (dept.Contains("针灸") || dept.Contains("按摩") || dept.Contains("推拿"))
            {
                return 86;//针灸按摩科
            }

            if (dept.Contains("放射"))
            {
                return 34;//辅助检查科
            }

            if (dept.Contains("介入"))
            {
                return 121;//肿瘤介入
            }

            if (dept.Contains("放疗"))
            {
                return 116;//肿瘤放疗
            }


            for (int i = cat_table.Rows.Count - 1; i >= 0; i--)
            {
                if (dept.Contains(cat_table.Rows[i]["name"].ToString().Replace("科", "")))
                {
                    return int.Parse(cat_table.Rows[i]["id"].ToString());
                }
            }


            return -1;
        }


        private bool db_optimization(DataTable cat_table)
        {
            int succ_num = 0;
            bool exit = true;
            int get_num_max = 30;
            DataTable dt = null;
            int uid_base = 6986;
            string sql = "";
            try
            {
                while (exit)
                {
                    if (uid_base > 244527)
                    {
                        break;
                    }

                    //处理全部的
                    //sql = "select uid, dept, dept_id from ask_user " +
                    //               "where  uid >= " + uid_base.ToString() +
                    //               " and uid < " + (uid_base + get_num_max).ToString();

                    //处理未处理的
                    sql = "select uid, dept, dept_id from ask_user " +
                           "where  dept_id =  0 and uid >= " + uid_base.ToString() +
                           " and uid < " + (uid_base + get_num_max).ToString();


                    dt = sql_select("ask_user", sql);


                    uid_base += get_num_max;
                    if (dt == null)
                    {
                        continue;
                    }

                    for (int i = 0; i < dt.Rows.Count; i++)
                    {
                        string dept = dt.Rows[i]["dept"].ToString().Replace("门诊", "");
                        int tmp_id = int.Parse(dt.Rows[i]["uid"].ToString());
                        int ret = deal_dept(dept, cat_table);
                        if (ret >= 18)
                        {
                            //插入数据并更新
                            sql = "update ask_user set dept_id = " + ret.ToString() + " where uid = " + tmp_id.ToString() + " ; commit;";
                            sql_exec(sql);
                            succ_num++;
                        }
                        else if (ret > -1)
                        {
                            MessageBox.Show("错误的范围");
                        }
                    }
                }
            }
            catch(Exception ex)
            {
                MessageBox.Show("error");
            }
            finally
            {

            }

            MessageBox.Show("总共更新了" + succ_num.ToString() + "条数据");
            return true;

        }
        private DataTable get_cat_table()
        {         
            DataTable dt = null;
            try
            {
                dt = sql_select("ask_category", "select * from ask_category");
            }
            catch
            {

            }
            finally
            {

            }
            return dt;
        }
        private void button3_Click(object sender, EventArgs e)
        {
            string M_str_sqlcon = "server=120.77.51.8;user id=root;password=123456cb;database=tipask;Charset=utf8"; //根据自己的设置10  
            myCon = new MySqlConnection(M_str_sqlcon);
            {
                if (myCon == null)
                    MessageBox.Show("数据库连接失败");
            }
            myCon.Open();

            DataTable cat_table = get_cat_table();
            if (cat_table == null)
            {
                MessageBox.Show("获取表失败");
            }

            db_optimization(cat_table);


            myCon.Close();
            myCon.Dispose();
        }

        void get_doc_dept_list(int dept_id)
        {
            string sql = "";

            //获取医生数
            sql = "select count(*) from ask_user where dept_id = " + dept_id.ToString();
            DataTable dt_doc_num = sql_select("ask_question", sql);
            if (dt_doc_num == null)
            {

            }
        }

        //最多只处理21个数据,大于3倍时候处理21个，否则只处理5个
        ArrayList get_randon_data(int doc_num, int ans_num)
        {
            int deal_num = 0;
            ArrayList arr_list = new ArrayList();
            Random rd = new Random();
            int itmp = 0;
            int count = 0;

            if (ans_num == 0)//没有回答就不用处理
            {
                return arr_list;
            }

            if (doc_num / ans_num > 2)
            {
                deal_num = ans_num > 21 ? 21 : ans_num;
            }
            else if(doc_num < ans_num * 2 && doc_num - ans_num < 5)
            {
                deal_num = 1;
            }
            else
            {
                deal_num = ans_num > 5 ? 5 : ans_num;
            }

            while (count < deal_num) 
            {
                itmp = rd.Next(1, doc_num+1);
                if(!arr_list.Contains(itmp))
                {
                    arr_list.Add(itmp);
                    count++;
                }
            }

            int dz = 1; //递增值
            while (arr_list.Count < ans_num)
            {
                if (arr_list.Contains(dz))
                {
                    dz++;
                }
                else
                {
                    arr_list.Add(dz);
                }
            }

            return arr_list;
        }

        void update_ans(ArrayList arr, int answers, int qid, string tj_str)
        {
            string sql = "";
            DataTable dt_user_info = null;
            DataTable dt_ans_total = null;
            try
            {

                //获取全部信息，从随机数组中取序号
                sql = "select uid, username, dept_id from ask_user where " + tj_str + " ORDER BY uid asc";
                dt_user_info = sql_select("ask_user", sql);
                if (dt_user_info == null)
                {
                    MessageBox.Show("error");
                }

                sql = "select id from ask_answer where qid = " + qid.ToString();
                dt_ans_total = sql_select("ask_answer", sql);
                if (dt_ans_total == null)
                {
                    MessageBox.Show("error");
                }
                if (dt_ans_total.Rows.Count != answers)
                {
                    answers = dt_ans_total.Rows.Count;
                }

                for (int n = 0; n < answers; n++)
                {

                    int tmp_1 = int.Parse(arr[n].ToString()) -1;
                    try
                    {
                        sql = "update ask_answer set  author = '" + dt_user_info.Rows[tmp_1]["username"].ToString() +
                            "', authorid = " + dt_user_info.Rows[tmp_1]["uid"].ToString() +
                            " where id = " + dt_ans_total.Rows[n]["id"].ToString() + "; commit;";
                        sql_exec(sql);
                    }
                    catch (Exception ex)
                    {
                        MessageBox.Show(ex.ToString());
                    }
                }
            }
            catch (Exception ex)
            {
                MessageBox.Show(ex.ToString());
            }
        }

        int use_other_doc(ref string tj_str)
        {
            tj_str = " dept_id = 44 ";

            return 44;//其他科室
        }
        void ans_deal()
        {
            string sql = "";
            DataTable dt = null;
            int base_qid = 0;
            int max_qid = 0;

            string tj_str = "";
            try
            {
                //查询最小的问题数对应的id，以此基准循环
                sql = "select MIN(id), max(id) from ask_question where id > " + question_deal.ToString();
                dt = sql_select("ask_question", sql);

                base_qid = int.Parse(dt.Rows[0][0].ToString());
                max_qid = int.Parse(dt.Rows[0][1].ToString());

                for (int i = base_qid; i < max_qid; i++)
                {
                    sql = "select id, cid, cid1, cid2, cid3, answers from ask_question where id = " + i.ToString();
                    DataTable dt_qst = sql_select("ask_question", sql);
                    if (dt_qst == null)
                    {
                        continue;//id不存在
                    }

                    //获取该问题的科室类别级数
                    int qid   = int.Parse(dt_qst.Rows[0]["id"].ToString());
                    int cid  = int.Parse(dt_qst.Rows[0]["cid"].ToString());
                    int cid1 = int.Parse(dt_qst.Rows[0]["cid1"].ToString());
                    int cid2 = int.Parse(dt_qst.Rows[0]["cid2"].ToString());
                    int cid3 = int.Parse(dt_qst.Rows[0]["cid3"].ToString());
                    int answers = int.Parse(dt_qst.Rows[0]["answers"].ToString());

                    int doc_count = 0;
                    DataTable dt_doc_num = null; //存储医生总数

                    tj_str = " dept_id = " + cid.ToString();
                    if (cid == cid3)//三级分类
                    {
                        string pri_str = "select count(*) from ask_user where  ";
                        sql = pri_str + tj_str;
                        dt_doc_num = sql_select("ask_question", sql);
                        doc_count = int.Parse(dt_doc_num.Rows[0][0].ToString());

                        if (doc_count == 1)
                        {
                            continue;
                        }

                        if (doc_count < answers)
                        {
                            //只能把2级的也拉过来,必须要够
                            tj_str += " or dept_id = " + cid2.ToString();
                            sql = pri_str + tj_str;

                            dt_doc_num = sql_select("ask_question", sql);
                            doc_count = int.Parse(dt_doc_num.Rows[0][0].ToString());

                            if (doc_count < answers)//医生如果不够用，必须要增加医生来处理该特殊情况
                            {
                                //只能把1级的也拉过来,必须要够
                                tj_str += " or dept_id = " + cid1.ToString();
                                sql = pri_str + tj_str;

                                dt_doc_num = sql_select("ask_question", sql);
                                doc_count = int.Parse(dt_doc_num.Rows[0][0].ToString());
                                if (doc_count < answers)//医生如果不够用，必须要增加医生来处理该特殊情况
                                {
                                    doc_count = use_other_doc(ref tj_str);
                                }
                            }
                        }
                    }
                    else if (cid == cid2)//二级分类
                    {
                        string pri_str = "select count(*) from ask_user where  ";
                        sql = pri_str + tj_str;
                        dt_doc_num = sql_select("ask_question", sql);
                        doc_count = int.Parse(dt_doc_num.Rows[0][0].ToString());

                        if (doc_count == 1)
                        {
                            continue;
                        }

                        if (doc_count < answers)
                        {
                            //只能把1级的也拉过来,必须要够
                            tj_str += " or dept_id = " + cid1.ToString();
                            sql = pri_str + tj_str;

                            dt_doc_num = sql_select("ask_question", sql);
                            doc_count = int.Parse(dt_doc_num.Rows[0][0].ToString());

                            if (doc_count < answers)//医生如果不够用，必须要增加医生来处理该特殊情况
                            {
                                doc_count = use_other_doc(ref tj_str);
                            }
                        }
                    }
                    else//一级分类
                    {
                        string pri_str = "select count(*) from ask_user where  ";
                        sql = pri_str + tj_str;
                        dt_doc_num = sql_select("ask_question", sql);
                        doc_count = int.Parse(dt_doc_num.Rows[0][0].ToString());

                        if (doc_count == 1)
                        {
                            continue;
                        }

                        if (doc_count < answers)//医生如果不够用，必须要增加医生来处理该特殊情况
                        {
                            doc_count = use_other_doc(ref tj_str);
                        }
                    }

                    ArrayList arr = get_randon_data(doc_count, answers);
                    update_ans(arr, answers, qid, tj_str);

                    question_deal = i;
                    File.WriteAllText("ans_list.log", question_deal.ToString());

                }
            }
            catch (Exception ex)
            {
                MessageBox.Show(ex.ToString(), "error");
            }
            finally
            {
            }
            MessageBox.Show( "数据优化完成");
        }
        private void button4_Click(object sender, EventArgs e)
        {
            string M_str_sqlcon = "server=127.0.0.1;user id=root;password=123456cb;database=tipask;Charset=utf8"; //根据自己的设置10  
            myCon = new MySqlConnection(M_str_sqlcon);
            {
                if (myCon == null)
                    MessageBox.Show("数据库连接失败");
            }
            myCon.Open();

            ans_deal();

            myCon.Close();
            myCon.Dispose();
        }


    }
}
