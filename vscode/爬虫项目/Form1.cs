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
        static string log_file = "log.txt";
        static string log_file1 = "spider.log";

        static string hos_img_name = "gd";

        int http_timeout = 5000;
        public static DataTable cat_dt = null;

        SortedList<string, bool> questiong_list = new SortedList<string, bool>();
        SortedList<string, bool> cat_list = new SortedList<string, bool>();


        SortedList<string, bool> doc_list = new SortedList<string, bool>();
        SortedList<string, bool> keshi_list = new SortedList<string, bool>();
        SortedList<string, bool> hos_list = new SortedList<string, bool>();

        

        MySqlConnection myCon = null;
        public Form1()
        {
            InitializeComponent();
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
        private void test_pc()
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
            string gz_hospitals_url = "http://www.guahao.com/hospital/areahospitals?pi=2&p=%E4%B8%8A%E6%B5%B7";
            hos_img_name = "sh";
            
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
            MessageBox.Show("capture data finish!");
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
                questiong_list.TryGetValue(wenti_bianhao, out exist);
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


                questiong_list.TryGetValue(wenti_bianhao, out exist);
                if (!exist)
                {
                    questiong_list.Add(wenti_bianhao, true);//已经处理过的就加进去
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
                questiong_list.TryGetValue(departmenturl, out exist);
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
        private void button1_Click(object sender, EventArgs e)
        {
            return;
            //img_start_id = int.Parse(textBox1.Text);
        
            string M_str_sqlcon = "server=localhost;user id=root;password=cb;database=tipask;Charset=utf8"; //根据自己的设置10  
            myCon = new MySqlConnection(M_str_sqlcon);
            {
            if (myCon == null)
                MessageBox.Show("数据库连接失败");
            }
            myCon.Open();
            cat_dt = sql_select("ask_category", "select id,name,pid,grade from ask_category  ORDER BY id ASC;\n");

            test_pc(); //抓微医网的医生

            //test_120ask();
            myCon.Close();
            myCon.Dispose();

            //webBrowser1.Navigate("http://myzx.39.net/zb-552.html");
            //webBrowser1.Navigate("http://yyk.39.net/doctor/101000.html");
            //webBrowser1.DocumentCompleted += new WebBrowserDocumentCompletedEventHandler(web_DocumentCompleted);
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            //获取已经抓取的问题单
            string file = "";
            //if (File.Exists("question_list.log"))
            //{
            //    file = File.ReadAllText("question_list.log");

            //    foreach (string tmp in file.Split(','))
            //    {
            //        questiong_List.Add(tmp, true);//已经处理过的就加进去
            //    }
            //}

            //if (File.Exists("cat_list.log"))
            //{
            //    file = File.ReadAllText("cat_list.log");

            //    foreach (string tmp in file.Split(','))
            //    {
            //        cat_List.Add(tmp, true);//已经处理过的就加进去
            //    }
            //}

            if (File.Exists("doc_list.log"))
            {
                file = File.ReadAllText("doc_list.log");

                foreach (string tmp in file.Split(','))
                {
                    doc_list.Add(tmp, true);//已经处理过的就加进去
                }
            }

            if (File.Exists("keshi_list.log"))
            {
                file = File.ReadAllText("keshi_list.log");

                foreach (string tmp in file.Split(','))
                {
                    keshi_list.Add(tmp, true);
                }
            }

            if (File.Exists("hos_list.log"))
            {
                file = File.ReadAllText("hos_list.log");

                foreach (string tmp in file.Split(','))
                {
                    hos_list.Add(tmp, true);
                }
            }

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
    }
}
