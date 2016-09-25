using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;
using System.IO;

namespace 爬虫项目
{
    public partial class Form1 : Form
    {
        static string log_file = "log.txt";
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



        private void button1_Click(object sender, EventArgs e)
        {
            webBrowser1.Navigate("http://myzx.39.net/zb-552.html");
            //webBrowser1.Navigate("http://yyk.39.net/doctor/101000.html");
            webBrowser1.DocumentCompleted += new WebBrowserDocumentCompletedEventHandler(web_DocumentCompleted);

        }
    }
}
