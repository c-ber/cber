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
        public Form1()
        {
            InitializeComponent();
        }
            void web_DocumentCompleted(object sender, WebBrowserDocumentCompletedEventArgs e)  
            {  
                 WebBrowser web = (WebBrowser)sender;  
                 HtmlElementCollection ElementCollection = web.Document.GetElementsByTagName("Table");  
                 foreach (HtmlElement item in ElementCollection)  
                 {  
                     File.AppendAllText("Kaijiang_xj.txt", item.InnerText);  
                 }  
            }  



        private void button1_Click(object sender, EventArgs e)
        {
            webBrowser1.Navigate("www.163.com");
            webBrowser1.DocumentCompleted += new WebBrowserDocumentCompletedEventHandler(web_DocumentCompleted);

        }
    }
}
