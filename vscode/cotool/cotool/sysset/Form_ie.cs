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

        private void btn_mul_Click(object sender, EventArgs e)
        {

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
    }
}
