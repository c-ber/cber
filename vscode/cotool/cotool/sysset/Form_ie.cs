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

namespace cotool.sysset
{
    public partial class Form_ie : UserControl
    {
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
    }
}
