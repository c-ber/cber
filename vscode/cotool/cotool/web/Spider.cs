using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Net;
using System.Text;
using System.Threading.Tasks;


using HtmlAgilityPack;


namespace cotool.web
{
    class Spider
    {
        string HTML_ERROR = "404";

        public Spider()
        {

        }
        public string CreateGetHttpResponse(string url, int timeout, string userAgent, CookieCollection cookies, Encoding encode)
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
                    MyLog.Log("1", "访问http请求失败：" + ex.Message);
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
    }
}
