using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Net;
using System.IO;
using System.Text.RegularExpressions;
using System.Collections;
using System.Security;
using System.Security.Cryptography;

namespace luyou
{
    class Program
    {
        public static ArrayList list = new ArrayList();


        private static bool filter_ip(string ip_src)
        {
            string[] ips = ip_src.Split('.');
            for(int i = 0 ; i < 4; i++)
            {
                if (Int32.Parse(ips[i]) == 255)
                {
                    return false;
                }
                if (Int32.Parse(ips[0]) == 192 || Int32.Parse(ips[0]) == 202
                    || Int32.Parse(ips[0]) == 0)
                {
                    return false;
                }
                if (Int32.Parse(ips[3]) == 1)
                {
                    return false;
                }

            }
            for (int i = 0; i < list.Count; i++)
            {
                if (String.Equals(ip_src, list[i].ToString()))
                {
                    return false;
                }
            }
            return true;
        }
        private static void search_ip(string str)
        {
            MatchCollection mc = Regex.Matches(str, @"\d{1,3}\.\d{1,3}\.\d{1,3}\.\d{1,3}");

            for (int i = 0; i < mc.Count; i++)
            {
                if (filter_ip(mc[i].ToString()))
                {
                    list.Add(mc[i]);
                }
            }
            
        }
        private static void print_log(HttpWebResponse response)
        {
            Stream streamResponse = response.GetResponseStream();
            StreamReader streamRead = new StreamReader(streamResponse, System.Text.Encoding.GetEncoding(-0));

            string content_length = response.GetResponseHeader("Content-Length");
            if (content_length == "")
            {
                streamResponse.Close();
                streamRead.Close();
                return;
            }
            if (Int32.Parse(content_length) <= 0)
            {
                streamResponse.Close();
                streamRead.Close();
                return;
            }

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

            string content_length = response.GetResponseHeader("Content-Length");
            if (content_length == "")
            {
                streamResponse.Close();
                streamRead.Close();
                return;
            }
            if (Int32.Parse(content_length) <= 0)
            {
                streamResponse.Close();
                streamRead.Close();
                return;
            }

            string readBuff = streamRead.ReadLine();
            do
            {
                //Console.Write(readBuff);
                //Console.WriteLine();
                search_ip(readBuff);
                readBuff = streamRead.ReadLine();
            } while (!streamRead.EndOfStream);

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
        private static void luyou_test()
        {
            string url = "http://192.168.1.1/";
            http_test1(url);
            http_test2(url);
            http_test3("http://192.168.1.1/userRpm/StatusRpm.htm");

            for (int i = 0; i < list.Count; i++)
            {
                Console.Write(list[0].ToString());
                Console.WriteLine();
            }
        }

        /*oa测试*/
        private static string session_id = "";
        private static void print_log_oa1(HttpWebResponse response)
        {
            Stream streamResponse = response.GetResponseStream();
            StreamReader streamRead = new StreamReader(streamResponse, System.Text.Encoding.GetEncoding(-0));

            string content = response.GetResponseHeader("Set-Cookie");
            session_id = content.Substring(content.IndexOf("JSESSIONID=") + "JSESSIONID=".Length, 32);

            string content_length = response.GetResponseHeader("Content-Length");
            if (content_length == "")
            {
                streamResponse.Close();
                streamRead.Close();
                return;
            }
            if (Int32.Parse(content_length) <= 0)
            {
                streamResponse.Close();
                streamRead.Close();
                return;
            }

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
        private static void http_oa_test1(string url)
        {
            IDictionary<string, string> parameters = new Dictionary<string, string>();
            parameters.Add("managerMethod", "smsLoginEnabled");
            parameters.Add("arguments", "%5B%22chenbin%22%5D");
            Encoding encoding = Encoding.GetEncoding("gb2312");


            HttpWebRequest request = WebRequest.Create(url) as HttpWebRequest;
            request.Method = "POST";

            request.Accept = "application/x-ms-application, image/jpeg, application/xaml+xml, image/gif, image/pjpeg, application/x-ms-xbap, */*";
            request.Referer = "http://192.168.100.6/seeyon/main.do";

            request.Headers.Add("Accept-Language: zh-CN");
            request.UserAgent = "Mozilla/4.0 (compatible; MSIE 8.0; Windows NT 6.1; WOW64; " +
                                "Trident/4.0; SLCC2; .NET CLR 2.0.50727; .NET CLR 3.5.30729; .NET CLR 3.0.30729; Media Center PC 6.0; .NET4.0C; .NET4.0E)";
            request.ContentType = "application/x-www-form-urlencoded";

            request.Headers.Add("Accept-Encoding: gzip, deflate");
            request.KeepAlive = true;
            request.Host = "192.168.100.6";
            request.Headers.Add("x-requested-with: XMLHttpRequest");

            //request.Headers.Add("Pragma: no-cache");
            request.Headers.Add("Cookie: JSESSIONID=38510464670726DA754A7AF69F504B14; loginPageURL=\"/main.do\"; avatarImageUrl=988884738529053337");


            //如果需要POST数据  
            if (!(parameters == null || parameters.Count == 0))
            {
                StringBuilder buffer = new StringBuilder();
                int i = 0;
                foreach (string key in parameters.Keys)
                {
                    if (i > 0)
                    {
                        buffer.AppendFormat("&{0}={1}", key, parameters[key]);
                    }
                    else
                    {
                        buffer.AppendFormat("{0}={1}", key, parameters[key]);
                    }
                    i++;
                }
                byte[] data = encoding.GetBytes(buffer.ToString());
                using (Stream stream = request.GetRequestStream())
                {
                    stream.Write(data, 0, data.Length);
                }
            }


            HttpWebResponse response = (HttpWebResponse)request.GetResponse();

            print_log_oa1(response);
            response.Close();
        }
        public static string pwd = "123456cb";

        public static string Encrypt(string toEncrypt, string key, string iv)
        {
            byte[] keyArray = UTF8Encoding.UTF8.GetBytes(key);
            byte[] ivArray = UTF8Encoding.UTF8.GetBytes(iv);
            byte[] toEncryptArray = UTF8Encoding.UTF8.GetBytes(toEncrypt);
            RijndaelManaged rDel = new RijndaelManaged();
            rDel.Key = keyArray;
            rDel.IV = ivArray;
            rDel.Mode = CipherMode.CBC;
            rDel.Padding = PaddingMode.Zeros;
            ICryptoTransform cTransform = rDel.CreateEncryptor();
            byte[] resultArray = cTransform.TransformFinalBlock(toEncryptArray, 0, toEncryptArray.Length);
            return Convert.ToBase64String(resultArray, 0, resultArray.Length);
        }

        public static string Decrypt(string toDecrypt, string key, string iv)
        {
            byte[] keyArray = UTF8Encoding.UTF8.GetBytes(key);
            byte[] ivArray = UTF8Encoding.UTF8.GetBytes(iv);
            byte[] toEncryptArray = Convert.FromBase64String(toDecrypt);
            RijndaelManaged rDel = new RijndaelManaged();
            rDel.Key = keyArray;
            rDel.IV = ivArray;
            rDel.Mode = CipherMode.CBC;
            rDel.Padding = PaddingMode.Zeros;
            ICryptoTransform cTransform = rDel.CreateDecryptor();
            byte[] resultArray = cTransform.TransformFinalBlock(toEncryptArray, 0, toEncryptArray.Length);
            return UTF8Encoding.UTF8.GetString(resultArray);
        }


        private static byte[] intToBytes2(int n)
        {
            byte[] b = new byte[4];

            b = System.BitConverter.GetBytes(n);

            return b;
        }

        private static byte[] conbine_bytes(byte[] a, byte[] b)
        {
            int len = a.Length + b.Length;

            //resArr为合并后数组  
            byte[] resArr = new byte[len];
            a.CopyTo(resArr,0);
            b.CopyTo(resArr, a.Length);
            return resArr;
        }

        private static void http_oa_test2(string url)
        {
            IDictionary<string, string> parameters = new Dictionary<string, string>();

            string pwd_enc = Encrypt(pwd, "-73276442", "-73276442");

            parameters.Add("authorization", "");
            parameters.Add("login_username", "chenbin");
            parameters.Add("login_password", pwd_enc);
            parameters.Add("login.smsVerifyCode", "");
            parameters.Add("bodyWidth", "1916");
            parameters.Add("bodyHeight", "895");
            Encoding encoding = Encoding.GetEncoding("gb2312"); 

            
            

            HttpWebRequest request = WebRequest.Create(url) as HttpWebRequest;
            request.Method = "POST";

            request.Accept = "application/x-ms-application, image/jpeg, application/xaml+xml, image/gif, image/pjpeg, application/x-ms-xbap, */*";
            request.Referer = "http://192.168.100.6/seeyon/main.do";

            request.Headers.Add("Accept-Language: zh-CN");
            request.UserAgent = "Mozilla/4.0 (compatible; MSIE 8.0; Windows NT 6.1; WOW64; "+
                                "Trident/4.0; SLCC2; .NET CLR 2.0.50727; .NET CLR 3.5.30729; .NET CLR 3.0.30729; Media Center PC 6.0; .NET4.0C; .NET4.0E)";
            request.ContentType = "application/x-www-form-urlencoded";
            
            request.Headers.Add("Accept-Encoding: gzip, deflate");
            request.KeepAlive = true;
            request.Host = "192.168.100.6";

            //request.Headers.Add("Pragma: no-cache");
            request.Headers.Add("Cookie: JSESSIONID=" + session_id + "; loginPageURL=\"/main.do\"; avatarImageUrl=988884738529053337");


            //如果需要POST数据  
            if (!(parameters == null || parameters.Count == 0))
            {
                StringBuilder buffer = new StringBuilder();
                int i = 0;
                foreach (string key in parameters.Keys)
                {
                    if (i > 0)
                    {
                        buffer.AppendFormat("&{0}={1}", key, parameters[key]);
                    }
                    else
                    {
                        buffer.AppendFormat("{0}={1}", key, parameters[key]);
                    }
                    i++;
                }
                byte[] data = encoding.GetBytes(buffer.ToString());
                using (Stream stream = request.GetRequestStream())
                {
                    stream.Write(data, 0, data.Length);
                }
            }  

            
            HttpWebResponse response = (HttpWebResponse)request.GetResponse();

            print_log(response);
            response.Close();
        }
        public static string char_to_string(byte[] arr)
        {
            string rlt = null;
            foreach (byte c in arr)
            {
                rlt += c.ToString("X2");
            }
            return rlt;
        }
        public static string EncryptDES(string encryptString, string encryptKey)
        {
            try
            {
                string keystr = encryptKey.Substring(0, 8);
                byte[] rgbKey = Encoding.UTF8.GetBytes(keystr);
                byte[] rgbIV = Encoding.UTF8.GetBytes(keystr);
                byte[] inputByteArray = Encoding.UTF8.GetBytes(encryptString);
                string plain_txt = char_to_string(inputByteArray);

                DESCryptoServiceProvider des = new DESCryptoServiceProvider();

                MemoryStream mStream = new MemoryStream();
                CryptoStream cStream = new CryptoStream(mStream,
                    des.CreateEncryptor(rgbKey, rgbIV), CryptoStreamMode.Write);

                cStream.Write(inputByteArray, 0, inputByteArray.Length);
                cStream.FlushFinalBlock();

                byte[] tmp = mStream.ToArray();
                //byte[] testc = new byte[0x22];

                return Convert.ToBase64String(mStream.ToArray());
            }
            catch (Exception ex)
            {
                Console.WriteLine(ex.ToString());
                return encryptString;
            }
        }
        public static string plain = "3132333435366f61";


        private static string des_crypt_base64(string source)
        {
            DESCryptoServiceProvider des = new DESCryptoServiceProvider();


            byte[] key = new byte[] { 1, 1, 1, 1, 2, 2, 2, 2 };
            byte[] iv = new byte[] { 1, 1, 1, 1, 2, 2, 2, 2 };
            byte[] dataByteArray = Encoding.UTF8.GetBytes(source);


            des.Key = key;
            des.IV = iv;
            string encrypt = "";
            using (MemoryStream ms = new MemoryStream())
            using (CryptoStream cs = new CryptoStream(ms, des.CreateEncryptor(), CryptoStreamMode.Write))
            {
                cs.Write(dataByteArray, 0, dataByteArray.Length);
                cs.FlushFinalBlock();
                encrypt = Convert.ToBase64String(ms.ToArray());
            }
            return encrypt;
        }


        private static string des_descrypt_base64(string encrypt)
        {
            DESCryptoServiceProvider des = new DESCryptoServiceProvider();
            byte[] key = Encoding.ASCII.GetBytes("12345678");
            byte[] iv = Encoding.ASCII.GetBytes("12345678");
            des.Key = key;
            des.IV = iv;

            byte[] dataByteArray = Convert.FromBase64String(encrypt);
            using (MemoryStream ms = new MemoryStream())
            {
                using (CryptoStream cs = new CryptoStream(ms, des.CreateDecryptor(), CryptoStreamMode.Write))
                {
                    cs.Write(dataByteArray, 0, dataByteArray.Length);
                    cs.FlushFinalBlock();
                    return Encoding.UTF8.GetString(ms.ToArray());
                }
            }
        }

        static void Main(string[] args)
        {
            Console.WriteLine("U2FsdGVkX1%2Fe8R6LdJYpYPY3IT7RTEvjYqMiIMvsDmE%3D");
            //Int32 key = -1704393243;
            string jiami = des_crypt_base64(plain);
            Console.WriteLine(jiami);
            //string url = "http://192.168.1.1/";
            //http_test1(url);
            //http_test2(url);
            //http_test3("http://192.168.1.1/userRpm/StatusRpm.htm");

            //for (int i = 0; i < list.Count; i++)
            //{
            //    Console.Write(list[0].ToString());
            //    Console.WriteLine();
            //}
            //http_oa_test1("http://192.168.100.6/seeyon/ajax.do?method=ajaxAction&managerName=portalManager&rnd=49158");
            //http_oa_test2("http://192.168.100.6/seeyon/main.do?method=login");
            //string pwd_enc = Encrypt(pwd, "-73276442", "-73276442");

        }
    }
}
