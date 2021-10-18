using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Drawing;
using System.Data;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Runtime.InteropServices;
using Microsoft.Win32;
using System.Diagnostics;
using System.Collections;
using System.IO;


namespace cotool.sysset
{
    public partial class Form_ie : UserControl
    {
        DataDeal dd = new DataDeal();

        [DllImport(@"wininet",
        SetLastError = true,
        CharSet = CharSet.Auto,
        EntryPoint = "InternetSetOption",
        CallingConvention = CallingConvention.StdCall)]

        public static extern bool InternetSetOption
                                   (
                                   int hInternet,
                                   int dmOption,
                                   IntPtr lpBuffer,
                                   int dwBufferLength
                                   );


        public Form_ie()
        {
            InitializeComponent();
        }


        public void SetProxy(bool bOpen)
        {
            //打开注册表
            var regKey = Registry.CurrentUser;

            const string subKeyPath = "Software\\Microsoft\\Windows\\CurrentVersion\\Internet Settings";
            var optionKey = regKey.OpenSubKey(subKeyPath, true);
            //更改健值，设置代理，
            if (optionKey != null) optionKey.SetValue("ProxyEnable", bOpen ? 1 : 0);


            //激活代理设置
            InternetSetOption(0, 39, IntPtr.Zero, 0);
            InternetSetOption(0, 37, IntPtr.Zero, 0);
        }


        private void btn_open_Click(object sender, EventArgs e)
        {
            SetProxy(true);
            label1.Text = "代理已经打开";
        }

        private void btn_close_Click(object sender, EventArgs e)
        {
            SetProxy(false);
            label1.Text = "代理已经关闭";
        }

        private void btn_readgw_Click(object sender, EventArgs e)
        {
            ArrayList linelist = new ArrayList();
            if(!File.Exists("cowg.log"))
            {
                return;
            }
            dd.get_file_content("cowg.log", linelist);
            tbox_gw.Text = "";
            for (int i = 0; i < linelist.Count; i++)
            {
                tbox_gw.Text += linelist[i];
            }
        }

        private void btn_savegw_Click(object sender, EventArgs e)
        {
            ArrayList linelist = new ArrayList();
            linelist.Add(tbox_gw.Text);
            dd.writefile_list("cowg.log", linelist);
        }
        private void btn_remove_Click(object sender, EventArgs e)
        {
            tbox_gw.Text = "";
            FileStream fs = new FileStream("cowg.log", FileMode.Truncate, FileAccess.ReadWrite);
            fs.Close();
        }

        /// <summary>
        /// 杀掉FoxitReader进程
        /// </summary>
        /// <param name="strProcessesByName"></param>
        public void KillProcess(string processName)
        {
            foreach (Process p in Process.GetProcesses())
            {
                if (p.ProcessName.Contains(processName))
                {
                    try
                    {
                        p.Kill();
                        p.WaitForExit(); // possibly with a timeout
                    }
                    catch
                    {
                    }
                }

            }
        }
        /// <summary>
        /// 判断是否存在进程  精确
        /// </summary>
        /// <param name="strProcName">精确进程名</param>
        /// <returns>是否包含</returns>
        public bool SearchProc(string strProcName)
        {
            try
            {
                //精确进程名  用GetProcessesByName
                foreach (Process p in Process.GetProcesses())
                {
                    if (strProcName.Equals(p.ProcessName))
                    {
                        return true;
                    }
                }
            }
            catch
            {
                return false;
            }
            return false;
        }
        void flash_process()
        {
            if (SearchProc("ThunderPlatform"))//不用加exe
            {
                label_xl.Text = "迅雷进程在运行中";
                label_xl.ForeColor = Color.Red;
            }
            else
            {
                label_xl.Text = "没有发现迅雷进程";
                label_xl.ForeColor = Color.Green;
            }
        }

        private void btn_kill_Click(object sender, EventArgs e)
        {
            dd.exec_cmd(@"taskkill /F /IM ThunderPlatform.exe", 5);
        }

        private void Form_ie_Load(object sender, EventArgs e)
        {
            flash_process();
        }

        private void btn_flash_Click(object sender, EventArgs e)
        {
            flash_process();
        }

        private void btn_aria_Click(object sender, EventArgs e)
        {
            dd.exec_cmd(@"D:\soft\aria\EasyWebSvr\EasyWebSvr.exe", 5);
            label5.Text = "请手动启动服务器";
        }

        private void btn_restart_Click(object sender, EventArgs e)
        {
            dd.exec_cmd(@"Taskkill /F /IM aria2c.exe", 5);
            dd.exec_cmd(@"d:  & cd D:\soft\aria\aria2\ & start Start.vbs", 5);
            label5.Text = "已完成执行";
        }

        private void btn_start_mysql_Click(object sender, EventArgs e)
        {
            dd.exec_cmd("net start mysql", 5);
        }

        private void btn_close_mysql_Click(object sender, EventArgs e)
        {
            dd.exec_cmd("net stop mysql", 5);
        }

        private void btn_navi_Click(object sender, EventArgs e)
        {
            dd.exec_proc(@"C:\Program Files (x86)\PremiumSoft\Navicat Premium\navicat.exe");
        }

        private void btn_rabbitmq_Click(object sender, EventArgs e)
        {
            string cmdstr =  @"d:  &D:\Program Files\RabbitMQ Server\rabbitmq_server-3.9.5\sbin\ " +
                              "& rabbitmq-service start";
            dd.exec_cmd(cmdstr, 5);
        }

        private void btn_redis_Click(object sender, EventArgs e)
        {

        }

        #region  开机启动功能
        /// <summary>
        /// 判断注册键值对是否存在，即是否处于开机启动状态
        /// </summary>
        /// <param name="keyName">键值名</param>
        /// <returns></returns>
        private static bool IsExistKey(string keyName)
        {
            try
            {
                bool _exist = false;
                RegistryKey local = Registry.LocalMachine;
                RegistryKey runs = local.OpenSubKey(@"SOFTWARE\Microsoft\Windows\CurrentVersion\Run", true);
                if (runs == null)
                {
                    RegistryKey key2 = local.CreateSubKey("SOFTWARE");
                    RegistryKey key3 = key2.CreateSubKey("Microsoft");
                    RegistryKey key4 = key3.CreateSubKey("Windows");
                    RegistryKey key5 = key4.CreateSubKey("CurrentVersion");
                    RegistryKey key6 = key5.CreateSubKey("Run");
                    runs = key6;
                }
                string[] runsName = runs.GetValueNames();
                foreach (string strName in runsName)
                {
                    if (strName.ToUpper() == keyName.ToUpper())
                    {
                        _exist = true;
                        return _exist;
                    }
                }
                return _exist;

            }
            catch
            {
                return false;
            }
        }

        /// <summary>
        /// 写入或删除注册表键值对,即设为开机启动或开机不启动
        /// </summary>
        /// <param name="isStart">是否开机启动</param>
        /// <param name="exeName">应用程序名</param>
        /// <param name="path">应用程序路径带程序名</param>
        /// <returns></returns>
        private static bool SelfRunning(bool isStart, string exeName, string path)
        {
            try
            {
                RegistryKey local = Registry.LocalMachine;
                RegistryKey key = local.OpenSubKey(@"SOFTWARE\Microsoft\Windows\CurrentVersion\Run", true);
                if (key == null)
                {
                    local.CreateSubKey("SOFTWARE//Microsoft//Windows//CurrentVersion//Run");
                }
                //若开机自启动则添加键值对
                if (isStart)
                {
                    key.SetValue(exeName, path);
                    key.Close();
                }
                else//否则删除键值对
                {
                    string[] keyNames = key.GetValueNames();
                    foreach (string keyName in keyNames)
                    {
                        if (keyName.ToUpper() == exeName.ToUpper())
                        {
                            key.DeleteValue(exeName);
                            key.Close();
                        }
                    }
                }
            }
            catch (Exception ex)
            {
                string ss = ex.Message;
                return false;
                //throw;
            }

            return true;
        }
        /// <summary>
        /// 将应用程序设为或不设为开机启动
        /// </summary>
        /// <param name="onOff">自启开关</param>
        /// <param name="appName">应用程序名</param>
        /// <param name="appPath">应用程序完全路径</param>
        public static bool SetAutoStart(bool onOff, string appName, string appPath)
        {
            bool isOk = true;
            //如果从没有设为开机启动设置到要设为开机启动
            if (!IsExistKey(appName) && onOff)
            {
                isOk = SelfRunning(onOff, appName, @appPath);
            }
            //如果从设为开机启动设置到不要设为开机启动
            else if (IsExistKey(appName) && !onOff)
            {
                isOk = SelfRunning(onOff, appName, @appPath);
            }
            return isOk;
        }

        /// 将本程序设为开启自启
        /// </summary>
        /// <param name="onOff">自启开关</param>
        /// <returns></returns>
        public static bool SetMeStart(bool onOff)
        {
            bool isOk = false;
            string appName = Process.GetCurrentProcess().MainModule.ModuleName;
            string appPath = Process.GetCurrentProcess().MainModule.FileName;
            isOk = SetAutoStart(onOff, appName, appPath);
            return isOk;
        }
        private void btn_auto_Click(object sender, EventArgs e)
        {
            SetMeStart(true);
        }
        #endregion

        private void btn_del_auto_Click(object sender, EventArgs e)
        {
            SetMeStart(false);
        }
    }
}
