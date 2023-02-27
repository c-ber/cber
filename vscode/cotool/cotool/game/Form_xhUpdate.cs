using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Drawing;
using System.Data;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.IO;
using System.Net;
using System.Threading;
using System.Collections;
using System.Xml;
using System.Diagnostics;
using System.Net.Cache;
using System.Globalization;

namespace cotool.game
{
    public partial class Form_xhUpdate : UserControl
    {
        public Form_xhUpdate()
        {
            InitializeComponent();
        }

        private static string xml = "";

        private WebClient wc;

        private string tofilename = "";

        private int curOffset;

        private ArrayList allUpdate;

        private int success;

        private int failed;

        public bool isBlankDir = true;

        public bool isInitOver;

        public static string adUrl = "";

        private void qqxh_update_Load(object sender, EventArgs e)
        {
            FileInfo info = new FileInfo("ad.ini");
            if (info.Exists)
            {
                StreamReader reader = info.OpenText();
                adUrl = reader.ReadToEnd();
                reader.Close();
                info.Delete();
                if ((adUrl.Trim().Length > 0) && adUrl.StartsWith("http://"))
                {
                    webBrowser1.Url = new Uri(adUrl);
                }
            }


            try
            {
                FileInfo fileInfo = new FileInfo("site.ini");
                if (!fileInfo.Exists)
                {
                    WebClient webClient = new WebClient();
                    byte[] array = webClient.DownloadData("http://gcs.jingdongybk.com/site.txt");
                    FileStream fileStream = fileInfo.OpenWrite();
                    fileStream.Write(array, 0, array.Length);
                    fileStream.Close();
                }
            }
            catch (Exception ex)
            {
                MessageBox.Show(ex.Message + ex.StackTrace);
            }
            Text = "小黑系列辅助工具在线更新程序V" + Constant.update_version;
            Control.CheckForIllegalCrossThreadCalls = false;
            try
            {
                new Thread(check).Start();
            }
            catch
            {
            }
            try
            {
                FileInfo fileInfo2 = new FileInfo("QQ水浒小黑-win10版本.exe");
                fileInfo2.Delete();
            }
            catch
            {
            }
            Control.CheckForIllegalCrossThreadCalls = false;
            //TopMost = false;
            isInitOver = true;
        }

        private void run()
        {
            try
            {
                lbl_status.Text = "检测是否需要更新...";
                allUpdate = new ArrayList();
                XmlDocument xmlDocument = new XmlDocument();
                xmlDocument.LoadXml(xml);
                XmlNode xmlNode = xmlDocument.SelectSingleNode("//gcs/update/common");
                XmlNodeList childNodes = xmlNode.ChildNodes;
                for (int i = 0; i < childNodes.Count; i++)
                {
                    XmlNode xmlNode2 = childNodes[i];
                    XmlAttribute xmlAttribute = xmlNode2.Attributes["key"];
                    XmlAttribute xmlAttribute2 = xmlNode2.Attributes["version"];
                    XmlAttribute xmlAttribute3 = xmlNode2.Attributes["fromFile"];
                    XmlAttribute xmlAttribute4 = xmlNode2.Attributes["destFile"];
                    UpdateInfo updateInfo = new UpdateInfo();
                    updateInfo.name = xmlAttribute.Value;
                    updateInfo.version = xmlAttribute2.Value;
                    updateInfo.fromfilename = xmlAttribute3.Value;
                    updateInfo.tofilename = xmlAttribute4.Value;
                    if (IniProperties.getValue("update", updateInfo.name) != updateInfo.version)
                    {
                        allUpdate.Add(updateInfo);
                        continue;
                    }
                    FileInfo fileInfo = new FileInfo("./" + updateInfo.tofilename);
                    if (!fileInfo.Exists)
                    {
                        allUpdate.Add(updateInfo);
                    }
                }
                GameInfo gameInfo = (GameInfo)comb_game.SelectedItem;
                xmlNode = xmlDocument.SelectSingleNode("//gcs/update/" + gameInfo.gametype);
                childNodes = xmlNode.ChildNodes;
                for (int j = 0; j < childNodes.Count; j++)
                {
                    XmlNode xmlNode3 = childNodes[j];
                    XmlAttribute xmlAttribute5 = xmlNode3.Attributes["key"];
                    XmlAttribute xmlAttribute6 = xmlNode3.Attributes["version"];
                    XmlAttribute xmlAttribute7 = xmlNode3.Attributes["fromFile"];
                    XmlAttribute xmlAttribute8 = xmlNode3.Attributes["destFile"];
                    UpdateInfo updateInfo2 = new UpdateInfo();
                    updateInfo2.name = xmlAttribute5.Value;
                    updateInfo2.version = xmlAttribute6.Value;
                    updateInfo2.fromfilename = xmlAttribute7.Value;
                    updateInfo2.tofilename = xmlAttribute8.Value;
                    if (gameInfo.needlogin == "1")
                    {
                        updateInfo2.url = "http://" + gameInfo.ip + ":" + gameInfo.port + "/downloadTool?gametype=%gametype%&filename=%filename%&username=%username%&password=%password%&cpuid=1234567890123645678901234567890123456";
                    }
                    if (IniProperties.getValue("update", updateInfo2.name) != updateInfo2.version)
                    {
                        allUpdate.Add(updateInfo2);
                        continue;
                    }
                    FileInfo fileInfo2 = new FileInfo("./" + updateInfo2.tofilename);
                    if (!fileInfo2.Exists)
                    {
                        allUpdate.Add(updateInfo2);
                    }
                }
                if (allUpdate.Count == 0)
                {
                    DialogResult dialogResult = MessageBox.Show(this, "您已经是最新版本，不需要更新！现在就运行吗？", "提示", MessageBoxButtons.YesNo);
                    if (dialogResult == DialogResult.Yes)
                    {
                        ProcessStartInfo processStartInfo = new ProcessStartInfo(gameInfo.name + ".exe");
                        processStartInfo.WindowStyle = ProcessWindowStyle.Normal;
                        Process.Start(processStartInfo);
                        //this.Close();
                    }
                    button1.Enabled = true;
                    return;
                }
                UpdateInfo updateInfo3 = (UpdateInfo)allUpdate[curOffset++];
                string text = null;
                string password = null;
                try
                {
                    text = IniProperties.getValue("gcs", "login.username");
                    password = JJMUtil.DesDecrypt(IniProperties.getValue("gcs", "login.password"));
                }
                catch
                {
                }
                if (text.Trim().Length <= 0 && gameInfo.needlogin == "1")
                {
                    curOffset = 0;
                    new LoginForm(gameInfo.gametype).ShowDialog();
                    button1.Enabled = true;
                    return;
                }
                downloadFile(updateInfo3.fromfilename, updateInfo3.tofilename, updateInfo3.url, text, password);
                lbl_status.Text = "正在下载[" + updateInfo3.tofilename + "]成功[0]失败[0]进度[0/" + allUpdate.Count + "]";
            }
            catch (Exception ex)
            {
                MessageBox.Show(this, "更新失败：" + ex.Message);
            }
        }

        private void c_DownloadFileCompleted(object sender, DownloadDataCompletedEventArgs e)
        {
            try
            {
                if (e.Result.Length <= 0 || e.Error != null || e.Cancelled)
                {
                    MessageBox.Show("更新失败:" + e.Error);
                    return;
                }
                byte[] result = e.Result;
                if (result.Length <= 1)
                {
                    MessageBox.Show("下载失败：" + result.Length);
                    return;
                }
                if (tofilename.IndexOf('/') >= 0)
                {
                    string path = tofilename.Substring(0, tofilename.IndexOf('/'));
                    if (!Directory.Exists(path))
                    {
                        Directory.CreateDirectory(path);
                    }
                }
                FileInfo fileInfo = new FileInfo(tofilename);
                if (fileInfo.Exists)
                {
                    fileInfo.Delete();
                }
                FileStream fileStream = fileInfo.OpenWrite();
                fileStream.Write(result, 0, result.Length);
                fileStream.Close();
                UpdateInfo updateInfo = (UpdateInfo)allUpdate[curOffset - 1];
                if (e.Error == null)
                {
                    IniProperties.setValue("update", updateInfo.name, updateInfo.version);
                    success++;
                }
                else
                {
                    failed++;
                }
                if (curOffset < allUpdate.Count)
                {
                    UpdateInfo updateInfo2 = (UpdateInfo)allUpdate[curOffset];
                    lbl_status.Text = "正在下载[" + updateInfo2.tofilename + "]成功[" + success + "]失败[" + failed + "]进度[" + (curOffset + 1) + "/" + allUpdate.Count + "]";
                    string username = null;
                    string password = null;
                    try
                    {
                        username = IniProperties.getValue("gcs", "login.username");
                        password = JJMUtil.DesDecrypt(IniProperties.getValue("gcs", "login.password"));
                    }
                    catch
                    {
                    }
                    downloadFile(updateInfo2.fromfilename, updateInfo2.tofilename, updateInfo2.url, username, password);
                    progressBar1.Value = (curOffset + 1) * 100 / allUpdate.Count;
                }
                if (curOffset == allUpdate.Count)
                {
                    progressBar1.Value = 100;
                    IniProperties.setValue("update", "last.update", DateUtil.toString(DateUtil.getCurTime()));
                    lbl_status.Text = "更新完成！成功[" + success + "]失败[" + failed + "]";
                    UpdateFinishedForm updateFinishedForm = new UpdateFinishedForm(success, failed);
                    updateFinishedForm.ShowDialog(this);
                    if (updateFinishedForm.needRunTool)
                    {
                        try
                        {
                            GameInfo gameInfo = (GameInfo)comb_game.SelectedItem;
                            ProcessStartInfo processStartInfo = new ProcessStartInfo(gameInfo.name + ".exe");
                            processStartInfo.WindowStyle = ProcessWindowStyle.Normal;
                            Process.Start(processStartInfo);
                            //Close();
                        }
                        catch
                        {
                            GameInfo gameInfo2 = (GameInfo)comb_game.SelectedItem;
                            MessageBox.Show("启动" + gameInfo2.name + "失败，请检查进程里是否存在" + gameInfo2.name + "进程（如果有则关闭它），然后再重新更新！");
                            //Close();
                        }
                    }
                    //Close();
                }
                curOffset++;
            }
            catch (Exception ex)
            {
                MessageBox.Show(ex.Message + ex.StackTrace);
                comboBox1.Enabled = true;
                if (ex.InnerException != null && ex.InnerException.Message != null && ex.InnerException.Message.IndexOf("603") >= 0)
                {
                    MessageBox.Show("您不是会员，或者会员已经过期！");
                }
                else if (ex.InnerException != null)
                {
                    MessageBox.Show(this, "更新失败：" + ex.InnerException.Message);
                }
                else if (ex.Message.IndexOf("访问被拒绝") >= 0)
                {
                    MessageBox.Show(this, "更新失败：请先关闭该辅助工具再更新（可能进程里还存在）！");
                }
                else
                {
                    MessageBox.Show(this, "更新失败：" + ex.Message);
                }
            }
        }

        private void c_DownloadProgressChanged(object sender, DownloadProgressChangedEventArgs e)
        {
            progressBar2.Value = e.ProgressPercentage;
            Thread.Sleep(100);
        }

        private bool downloadFile(string filename, string tofilename, string url, string username, string password)
        {
            try
            {
                progressBar2.Value = 0;
                this.tofilename = tofilename;
                ServerInfo serverInfo = (ServerInfo)comboBox1.SelectedItem;
                GameInfo gameInfo = (GameInfo)comb_game.SelectedItem;
                string text = "http://" + serverInfo.ip + ":" + serverInfo.port + "/update_" + gameInfo.gametype + "/";
                if (url != null)
                {
                    text = url;
                    text = text.Replace("%filename%", filename);
                    text = text.Replace("%gametype%", gameInfo.gametype);
                    text = text.Replace("%username%", username);
                    text = text.Replace("%password%", password);
                    text = text + "&q=" + DateUtil.getCurTime();
                }
                else
                {
                    text = text + filename + "?" + DateUtil.getCurTime();
                }
                RequestCachePolicy cachePolicy = new RequestCachePolicy(RequestCacheLevel.NoCacheNoStore);
                wc.CachePolicy = cachePolicy;
                wc.DownloadDataAsync(new Uri(text));
                return true;
            }
            catch (Exception ex)
            {
                MessageBox.Show(ex.Message);
                return false;
            }
        }

        private void button1_Click(object sender, EventArgs e)
        {
            if (comboBox1.Items.Count == 0)
            {
                MessageBox.Show("请选择更新服务器！");
                return;
            }
            if (comb_game.Text == "")
            {
                MessageBox.Show("请选择游戏类别！");
                return;
            }
            comboBox1.Enabled = false;
            wc = new WebClient();
            RequestCachePolicy cachePolicy = new RequestCachePolicy(RequestCacheLevel.NoCacheNoStore);
            wc.CachePolicy = cachePolicy;
            wc.DownloadProgressChanged += c_DownloadProgressChanged;
            wc.DownloadDataCompleted += c_DownloadFileCompleted;
            wc.Credentials = CredentialCache.DefaultCredentials;
            button1.Enabled = false;
            new Thread(run).Start();
        }

        private void Form1_FormClosed(object sender, FormClosedEventArgs e)
        {
        }

        private void checkEx(string server)
        {
            lbl_status.Text = "获取更新列表..." + server.Replace("gcs.xh", "");
            WebClient webClient = new WebClient();
            byte[] array = webClient.DownloadData(server + "?q=" + DateUtil.getCurTime());
            if (array[0] != 10 || array[1] != 19 || array[2] != 23 || array[3] != 56)
            {
                MessageBox.Show("严重错误！");
                return;
            }
            for (int i = 4; i < array.Length; i++)
            {
                array[i] = (byte)(array[i] ^ 0x38u);
            }
            xml = Encoding.UTF8.GetString(array, 4, array.Length - 4);
            XmlDocument xmlDocument = new XmlDocument();
            xmlDocument.LoadXml(xml);
            XmlNode xmlNode = xmlDocument.SelectSingleNode("//gcs/update/site");
            XmlNodeList childNodes = xmlNode.ChildNodes;
            for (int j = 0; j < childNodes.Count; j++)
            {
                XmlNode xmlNode2 = childNodes[j];
                XmlAttribute xmlAttribute = xmlNode2.Attributes["name"];
                XmlAttribute xmlAttribute2 = xmlNode2.Attributes["ip"];
                XmlAttribute xmlAttribute3 = xmlNode2.Attributes["port"];
                string value = xmlAttribute.Value;
                string value2 = xmlAttribute2.Value;
                string value3 = xmlAttribute3.Value;
                ServerInfo serverInfo = new ServerInfo();
                serverInfo.name = value;
                serverInfo.ip = value2;
                serverInfo.port = value3;
                comboBox1.Items.Add(serverInfo);
            }
            DateTime dateTime = new DateTime(1970, 1, 1, 0, 0, 0, 0, new GregorianCalendar(), DateTimeKind.Utc);
            long num = (DateTime.UtcNow.Ticks - dateTime.Ticks) / 10000;
            Random random = new Random((int)(num % 1000));
            int selectedIndex = random.Next(comboBox1.Items.Count - 1 + 1);
            comboBox1.SelectedIndex = selectedIndex;
            xmlNode = xmlDocument.SelectSingleNode("//gcs/update/game");
            childNodes = xmlNode.ChildNodes;
            for (int k = 0; k < childNodes.Count; k++)
            {
                XmlNode xmlNode3 = childNodes[k];
                XmlAttribute xmlAttribute4 = xmlNode3.Attributes["name"];
                XmlAttribute xmlAttribute5 = xmlNode3.Attributes["type"];
                XmlAttribute xmlAttribute6 = xmlNode3.Attributes["des"];
                XmlAttribute xmlAttribute7 = xmlNode3.Attributes["ip"];
                XmlAttribute xmlAttribute8 = xmlNode3.Attributes["port"];
                XmlAttribute xmlAttribute9 = xmlNode3.Attributes["needlogin"];
                string value4 = xmlAttribute4.Value;
                string value5 = xmlAttribute5.Value;
                string text1 = xmlAttribute6.Value;
                string text = "0";
                if (xmlAttribute9 != null)
                {
                    text = xmlAttribute9.Value;
                }
                string value6 = xmlAttribute6.Value;
                GameInfo gameInfo = new GameInfo();
                gameInfo.name = value4;
                if (text == "1")
                {
                    string value7 = xmlAttribute7.Value;
                    string value8 = xmlAttribute8.Value;
                    gameInfo.ip = value7;
                    gameInfo.port = value8;
                    gameInfo.needlogin = text;
                }
                gameInfo.des = value6;
                gameInfo.gametype = value5;
                comb_game.Items.Add(gameInfo);
            }
            DirectoryInfo directoryInfo = new DirectoryInfo("./");
            FileInfo[] files = directoryInfo.GetFiles();
            for (int l = 0; l < files.Length; l++)
            {
                string text2 = files[l].Name;
                int num2 = text2.IndexOf(".");
                if (num2 > 0)
                {
                    text2 = text2.Substring(0, num2);
                }
                bool flag = false;
                for (int m = 0; m < comb_game.Items.Count; m++)
                {
                    GameInfo gameInfo2 = (GameInfo)comb_game.Items[m];
                    if (gameInfo2.name == text2)
                    {
                        comb_game.SelectedItem = gameInfo2;
                        flag = true;
                        break;
                    }
                }
                if (flag)
                {
                    break;
                }
            }
            lbl_status.Text = "就绪";
        }

        private void check()
        {
            ArrayList allSite = SiteUtil.getAllSite();
            for (int i = 0; i < allSite.Count; i++)
            {
                try
                {
                    lbl_status.Text = "检查服务器：" + allSite[i];
                    checkEx(allSite[i].ToString() + "gcs.xh");
                    break;
                }
                catch (Exception ex)
                {
                    lbl_status.Text = "读取数据失败：" + ex.Message;
                }
            }
        }

        private void webBrowser1_DocumentCompleted(object sender, WebBrowserDocumentCompletedEventArgs e)
        {
            if (adUrl != "" && !base.Visible)
            {
                timer1.Enabled = true;
            }
        }

        private void timer1_Tick(object sender, EventArgs e)
        {
            try
            {
                //Close();
                //Environment.Exit(0);
            }
            catch
            {
            }
        }

        private void comb_game_SelectedIndexChanged(object sender, EventArgs e)
        {
            if (!isBlankDir && isInitOver)
            {
                MessageBox.Show("请不要在当前目录下在线更新其他游戏辅助工具，否则会影响当前游戏运行！请把在线更新程序拷贝到其他空目录再试！");
            }
            else
            {
                GameInfo selectedItem = (GameInfo)this.comb_game.SelectedItem;
            }
        }

        private void comb_game_SelectedValueChanged(object sender, EventArgs e)
        {
        }

        private void comb_game_MouseDown(object sender, MouseEventArgs e)
        {
        }
    }
}
