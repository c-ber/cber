using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Net;
using System.IO;
using System.Text.RegularExpressions;
using System.Collections;

namespace luyou
{
    class Program
    {
        public static ArrayList list = new ArrayList();

        private static void search_ip(string str)
        {
            MatchCollection mc = Regex.Matches(str, @"\d{1,3}\.\d{1,3}\.\d{1,3}\.\d{1,3}");

            for (int i = 0; i < mc.Count; i++)
            {
                list.Add(mc[i]);
            }
            
        }
        private static void print_log(HttpWebResponse response)
        {
            Stream streamResponse = response.GetResponseStream();
            StreamReader streamRead = new StreamReader(streamResponse, System.Text.Encoding.GetEncoding(-0));
            Char[] readBuff = new Char[256];
            int count = streamRead.Read(readBuff, 0, 256);
            Console.WriteLine("The contents of the Html page are.......\n");
            while (count > 0)
            {
                String outputData = new String(readBuff, 0, count);
                Console.Write(outputData);
                count = streamRead.Read(readBuff, 0, 256);
            }
            Console.WriteLine();
            // Close the Stream object.
            streamResponse.Close();
            streamRead.Close();
        }
        private static void print_log1(HttpWebResponse response)
        {
            Stream streamResponse = response.GetResponseStream();
            StreamReader streamRead = new StreamReader(streamResponse, System.Text.Encoding.GetEncoding(-0));
            string readBuff = streamRead.ReadLine();
            Console.WriteLine("The contents of the Html page are.......\n");
            do
            {
                Console.Write(readBuff);
                Console.WriteLine();
                search_ip(readBuff);
                readBuff = streamRead.ReadLine();
            } while (!streamRead.EndOfStream);
            Console.WriteLine();
            // Close the Stream object.
            streamResponse.Close();
            streamRead.Close();
        }
        private static void http_test1(string url)
        {
            HttpWebRequest request = WebRequest.Create(url) as HttpWebRequest;
            request.Method = "GET";

            request.UserAgent = "Mozilla/4.0 (compatible; MSIE 8.0; Windows NT 6.1; WOW64; Trident/4.0; SLCC2; " +
                                    ".NET CLR 2.0.50727; .NET CLR 3.5.30729; .NET CLR 3.0.30729; Media Center PC 6.0; .NET4.0C; .NET4.0E)";
            request.Accept = "application/x-ms-application, image/jpeg, application/xaml+xml, image/gif, image/pjpeg, application/x-ms-xbap, */*";
            request.Headers.Add("Accept-Language: zh-CN");
            request.Headers.Add("Accept-Encoding: gzip, deflate");
            request.KeepAlive = true;
            request.Host = "192.168.1.1";
            HttpWebResponse response = (HttpWebResponse)request.GetResponse();

            //print_log(response);
            response.Close();
        }

        private static void http_test2(string url)
        {
            HttpWebRequest request = WebRequest.Create(url) as HttpWebRequest;
            request.Method = "GET";

            request.UserAgent = "Mozilla/4.0 (compatible; MSIE 8.0; Windows NT 6.1; WOW64; Trident/4.0; SLCC2; " +
                                    ".NET CLR 2.0.50727; .NET CLR 3.5.30729; .NET CLR 3.0.30729; Media Center PC 6.0; .NET4.0C; .NET4.0E)";
            request.Accept = "application/x-ms-application, image/jpeg, application/xaml+xml, image/gif, image/pjpeg, application/x-ms-xbap, */*";
            request.Headers.Add("Accept-Language: zh-CN");
            request.Headers.Add("Accept-Encoding: gzip, deflate");
            request.KeepAlive = true;
            request.Host = "192.168.1.1";
            request.Headers.Add("Cookie: Authorization=Basic%20YWRtaW46OTk4NzAzMTU%3D");
            
            HttpWebResponse response = (HttpWebResponse)request.GetResponse();

            //print_log(response);
            response.Close();
        }
        private static void http_test3(string url)
        {
            HttpWebRequest request = WebRequest.Create(url) as HttpWebRequest;
            request.Method = "GET";

            request.UserAgent = "Mozilla/4.0 (compatible; MSIE 8.0; Windows NT 6.1; WOW64; Trident/4.0; SLCC2; " +
                                    ".NET CLR 2.0.50727; .NET CLR 3.5.30729; .NET CLR 3.0.30729; Media Center PC 6.0; .NET4.0C; .NET4.0E)";
            request.Accept = "application/x-ms-application, image/jpeg, application/xaml+xml, image/gif, image/pjpeg, application/x-ms-xbap, */*";
            request.Headers.Add("Accept-Language: zh-CN");
            request.Headers.Add("Accept-Encoding: gzip, deflate");
            request.KeepAlive = true;
            request.Host = "192.168.1.1";
            request.Headers.Add("Cookie: Authorization=Basic%20YWRtaW46OTk4NzAzMTU%3D");
            request.Referer = "http://192.168.1.1/userRpm/StatusRpm.htm";
            HttpWebResponse response = (HttpWebResponse)request.GetResponse();

            print_log1(response);
            response.Close();
        }
        static void Main(string[] args)
        {
            string url = "http://192.168.1.1/";
            http_test1(url);
            http_test2(url);
            http_test3("http://192.168.1.1/userRpm/StatusRpm.htm");
        }
    }
}
