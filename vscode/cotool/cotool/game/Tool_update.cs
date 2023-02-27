using System;
using System.Collections;
using System.Collections.Generic;
using System.Collections.Specialized;
using System.IO;
using System.Linq;
using System.Management;
using System.Net;
using System.Reflection;
using System.Runtime.InteropServices;
using System.Security.Cryptography;
using System.Text;
using System.Threading.Tasks;

namespace cotool.game
{
    public class Tool_update
    {
    }
    public class Constant
    {
        public static string update_version = "1.71";
    }

    public class UpdateInfo
    {
        public string name;

        public string version;

        public string fromfilename;

        public string tofilename;

        public string url;
    }

    public class IniProperties
    {
        public static string path;

        public static bool haveInit = false;

        [DllImport("kernel32")]
        private static extern long WritePrivateProfileString(string section, string key, string val, string filePath);

        [DllImport("kernel32")]
        private static extern int GetPrivateProfileString(string section, string key, string def, StringBuilder retVal, int size, string filePath);

        private static void init()
        {
            if (!haveInit)
            {
                string text = Assembly.GetExecutingAssembly().Location.ToString();
                text = Directory.GetParent(text).ToString();
                Directory.SetCurrentDirectory(text);
                path = text + "\\update.ini";
            }
        }

        public static void setValue(string Section, string Key, string Value)
        {
            init();
            WritePrivateProfileString(Section, Key, Value, path);
            haveInit = false;
        }

        public static string getValue(string Section, string Key)
        {
            init();
            StringBuilder stringBuilder = new StringBuilder(255);
            GetPrivateProfileString(Section, Key, "", stringBuilder, 255, path);
            string text = stringBuilder.ToString().Trim();
            string value = OldIniProperties.getValue(Section, Key);
            if (value != null && value != "" && (text == null || text == ""))
            {
                setValue(Section, Key, value);
                text = value;
                return value;
            }
            return text;
        }
    }

    public class OldIniProperties
    {
        public static string path;

        public static bool haveInit = false;

        [DllImport("kernel32")]
        private static extern long WritePrivateProfileString(string section, string key, string val, string filePath);

        [DllImport("kernel32")]
        private static extern int GetPrivateProfileString(string section, string key, string def, StringBuilder retVal, int size, string filePath);

        private static void init()
        {
            if (!haveInit)
            {
                string text = Assembly.GetExecutingAssembly().Location.ToString();
                text = Directory.GetParent(text).ToString();
                Directory.SetCurrentDirectory(text);
                path = text + "\\config.ini";
            }
        }

        public static void setValue(string Section, string Key, string Value)
        {
            init();
            WritePrivateProfileString(Section, Key, Value, path);
            haveInit = false;
        }

        public static string getValue(string Section, string Key)
        {
            init();
            StringBuilder stringBuilder = new StringBuilder(255);
            GetPrivateProfileString(Section, Key, "", stringBuilder, 255, path);
            return stringBuilder.ToString().Trim();
        }
    }

    public class GameInfo
    {
        public string name;

        public string gametype;

        public string des;

        public string ip;

        public string port;

        public string needlogin;

        public override string ToString()
        {
            return name + "[" + des + "]";
        }
    }

    public class JJMUtil
    {
        private static string key = "a42ersgf2345ew#$56";

        public static string DesEncrypt(string encryptString)
        {
            byte[] bytes = Encoding.UTF8.GetBytes(key.Substring(0, 8));
            byte[] rgbIV = bytes;
            byte[] bytes2 = Encoding.UTF8.GetBytes(encryptString);
            DESCryptoServiceProvider dESCryptoServiceProvider = new DESCryptoServiceProvider();
            MemoryStream memoryStream = new MemoryStream();
            CryptoStream cryptoStream = new CryptoStream(memoryStream, dESCryptoServiceProvider.CreateEncryptor(bytes, rgbIV), CryptoStreamMode.Write);
            cryptoStream.Write(bytes2, 0, bytes2.Length);
            cryptoStream.FlushFinalBlock();
            return Convert.ToBase64String(memoryStream.ToArray());
        }

        public static string DesDecrypt(string decryptString)
        {
            byte[] bytes = Encoding.UTF8.GetBytes(key.Substring(0, 8));
            byte[] rgbIV = bytes;
            byte[] array = Convert.FromBase64String(decryptString);
            DESCryptoServiceProvider dESCryptoServiceProvider = new DESCryptoServiceProvider();
            MemoryStream memoryStream = new MemoryStream();
            CryptoStream cryptoStream = new CryptoStream(memoryStream, dESCryptoServiceProvider.CreateDecryptor(bytes, rgbIV), CryptoStreamMode.Write);
            cryptoStream.Write(array, 0, array.Length);
            cryptoStream.FlushFinalBlock();
            return Encoding.UTF8.GetString(memoryStream.ToArray());
        }
    }

    public class ServerInfo
    {
        public string name;

        public string ip;

        public string port;

        public override string ToString()
        {
            return name;
        }
    }
    public class SiteUtil
    {
        public static ArrayList getAllSite()
        {
            ArrayList arrayList = new ArrayList();
            using (StreamReader sr = new StreamReader("site.ini", detectEncodingFromByteOrderMarks: true))
            {
                string text = sr.ReadToEnd();
                sr.Close();

                char[] separator = new char[1] { '\n' };
                string[] array = text.Split(separator);
                for (int i = 0; i < array.Length; i++)
                {
                    string text2 = array[i].Trim();
                    if (text2.IndexOf(":") >= 0)
                    {
                        char[] separator2 = new char[1] { ':' };
                        string[] array2 = text2.Split(separator2);
                        string text3 = array2[0].Trim();
                        string text4 = array2[1].Trim();
                        arrayList.Add("http://" + text3 + ":" + text4 + "/");
                    }
                }
            }
            return arrayList;
        }
    }

    public class GCSUtil
    {
        // Fields
        public static string lanzuanServerKey = "";

        // Methods
        public static byte[] getGCSVIP3(string username, string password, string backip, string backport, string gameType)
        {
            if ((backip.Trim().Length > 5) && (backport.Trim().Length > 1))
            {
                try
                {
                    string[] strArray = new string[] { "http://", backip, ":", backport, "/loginVip?gameType=", gameType, "&username=", username, "&password=" };
                    strArray[9] = password;
                    strArray[10] = "&cpuid=";
                    strArray[11] = MachineUtil.getCPUSerialID();
                    return NetUtil.getStringFromUrl(string.Concat(strArray), "", false, true, null, null, new ArrayList()).b;
                }
                catch (Exception exception)
                {
                    //exception.Message + exception.StackTrace;
                }
            }
            return new byte[0];
        }
    }

    public class MachineUtil
    {
        // Methods
        public static string getCPUSerialID()
        {
            string str = "asdfq234rasdjfljaws3q25rafs";
            try
            {
                using (ManagementObjectCollection.ManagementObjectEnumerator enumerator = new ManagementClass("Win32_DiskDrive").GetInstances().GetEnumerator())
                {
                    if (enumerator.MoveNext())
                    {
                        str = (string)((ManagementObject)enumerator.Current).Properties["Model"].Value;
                    }
                }
            }
            catch
            {
            }
            string str2 = "54gd67435asf345";
            try
            {
                using (ManagementObjectCollection.ManagementObjectEnumerator enumerator2 = new ManagementClass("Win32_Processor").GetInstances().GetEnumerator())
                {
                    if (enumerator2.MoveNext())
                    {
                        str2 = ((ManagementObject)enumerator2.Current).Properties["ProcessorId"].Value.ToString();
                    }
                }
            }
            catch
            {
            }
            return MD5Util.MD5(str2 + str);
        }
    }
    public class HTTPResult
    {
        public ArrayList allCookies = new ArrayList();

        public string result;

        public byte[] b;

        public bool success;
    }

    public class NetUtil
    {
        public static HTTPResult getBytesFromUrl(string url)
        {
            WebClient webClient = new WebClient();
            byte[] b = webClient.DownloadData(url);
            HTTPResult hTTPResult = new HTTPResult();
            hTTPResult.b = b;
            return hTTPResult;
        }

        public static HTTPResult getStringFromUrl(string url, ArrayList allCookies, NameValueCollection coll)
        {
            WebClient webClient = new WebClient();
            webClient.Headers.Add("Accept:*/*");
            webClient.Headers.Add("Accept-Language:zh-CN");
            webClient.Headers.Add("User-Agent:Mozilla/4.0 (compatible; MSIE 6.0; Windows NT 5.1; SV1; .NET CLR 2.0.50727; .NET CLR 3.0.04506.648)");
            webClient.Headers.Add("x-flash-version:10,0,32,18");
            webClient.Headers.Add("Pragma:no-cache");
            if (coll == null)
            {
                coll = new NameValueCollection();
            }
            byte[] array = webClient.UploadValues(url, coll);
            HTTPResult hTTPResult = new HTTPResult();
            string @string = Encoding.UTF8.GetString(array);
            string text = webClient.ResponseHeaders.Get("Set-Cookie");
            if (text == null)
            {
                hTTPResult.result = @string;
                return hTTPResult;
            }
            char[] separator = new char[1] { ';' };
            text.Split(separator);
            hTTPResult.b = array;
            hTTPResult.result = @string;
            return hTTPResult;
        }

        public static HTTPResult getStringFromUrl(string url, string postData, bool isVersion10, bool isPost, string referer, string flashVersion, ArrayList allCookies)
        {
            HttpWebRequest httpWebRequest = (HttpWebRequest)WebRequest.Create(url);
            httpWebRequest.ProtocolVersion = (isVersion10 ? HttpVersion.Version10 : HttpVersion.Version11);
            httpWebRequest.Method = (isPost ? "POST" : "GET");
            httpWebRequest.Accept = "image/gif, image/x-xbitmap, image/jpeg, image/pjpeg, application/x-ms-application, application/x-ms-xbap, application/vnd.ms-xpsdocument, application/xaml+xml, application/x-shockwave-flash, */*";
            httpWebRequest.Headers.Add("Accept-Language:zh-cn");
            if (referer != null)
            {
                httpWebRequest.Referer = referer;
            }
            if (isPost)
            {
                httpWebRequest.ContentType = "application/x-www-form-urlencoded";
            }
            httpWebRequest.AllowAutoRedirect = false;
            httpWebRequest.UserAgent = "Mozilla/4.0 (compatible; MSIE 6.0; Windows NT 5.1; SV1; .NET CLR 2.0.50727; .NET CLR 3.0.04506.648)";
            httpWebRequest.Timeout = 30000;
            httpWebRequest.ServicePoint.Expect100Continue = false;
            httpWebRequest.Headers.Add("Pragma:no-cache");
            if (isPost)
            {
                Stream requestStream = httpWebRequest.GetRequestStream();
                byte[] bytes = Encoding.UTF8.GetBytes(postData);
                requestStream.Write(bytes, 0, bytes.Length);
                requestStream.Close();
            }
            HttpWebResponse httpWebResponse = (HttpWebResponse)httpWebRequest.GetResponse();
            Stream responseStream = httpWebResponse.GetResponseStream();
            MemoryStream memoryStream = new MemoryStream();
            byte[] array = new byte[20725760];
            while (true)
            {
                int num = responseStream.Read(array, 0, array.Length);
                if (num <= 0)
                {
                    break;
                }
                memoryStream.Write(array, 0, num);
            }
            byte[] array2 = memoryStream.ToArray();
            HTTPResult hTTPResult = new HTTPResult();
            hTTPResult.result = Encoding.UTF8.GetString(array2);
            hTTPResult.b = array2;
            return hTTPResult;
        }
    }
    public class MD5Util
    {
        public static string MD5_3(string arg)
        {
            MD5 mD = System.Security.Cryptography.MD5.Create();
            byte[] bytes = Encoding.ASCII.GetBytes(arg);
            bytes = mD.ComputeHash(bytes);
            bytes = mD.ComputeHash(bytes);
            bytes = mD.ComputeHash(bytes);
            return BitConverter.ToString(bytes).Replace("-", "").ToUpper();
        }

        public static string MD5(string arg)
        {
            MD5 mD = System.Security.Cryptography.MD5.Create();
            byte[] bytes = Encoding.ASCII.GetBytes(arg);
            bytes = mD.ComputeHash(bytes);
            return BitConverter.ToString(bytes).Replace("-", "").ToUpper();
        }
    }





}
