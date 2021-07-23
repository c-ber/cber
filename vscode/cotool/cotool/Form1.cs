using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Management;
using System.Net;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using cotool.sysset;
using cotool.game;
using System.IO;
using cotool.DirFile;
using cotool.exam;
using cotool.crack;
using System.Diagnostics;

namespace cotool
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }
        DataDeal dd = new DataDeal();
        private void 安全统计ToolStripMenuItem_Click(object sender, EventArgs e)
        {
            this.panel1.Controls.Clear();
            Form_dbtj form = new Form_dbtj();
            this.panel1.Controls.Add(form);
            form.Show();
        }

        private void iE代理开关ToolStripMenuItem_Click(object sender, EventArgs e)
        {
            this.panel1.Controls.Clear();
            Form_ie form = new Form_ie();
            this.panel1.Controls.Add(form);
            form.Show();
        }

        private void get_vmwareip(ref List<string> listIP)
        {
            ManagementClass mcNetworkAdapterConfig = new ManagementClass("Win32_NetworkAdapterConfiguration");
            ManagementObjectCollection moc_NetworkAdapterConfig = mcNetworkAdapterConfig.GetInstances();
            foreach (ManagementObject mo in moc_NetworkAdapterConfig)
            {
                string mServiceName = mo["ServiceName"] as string;

                //过滤非真实的网卡  
                if (!(bool)mo["IPEnabled"])
                { continue; }
                if (mServiceName.ToLower().Contains("vmnetadapter")
                 || mServiceName.ToLower().Contains("vmware")
                 || mServiceName.ToLower().Contains("ppoe")
                 || mServiceName.ToLower().Contains("bthpan")
                 || mServiceName.ToLower().Contains("tapvpn")
                 || mServiceName.ToLower().Contains("ndisip")
                 || mServiceName.ToLower().Contains("sinforvnic"))
                {
                    continue;
                }

                string[] mIPAddress = mo["IPAddress"] as string[];

                if (mIPAddress != null)
                {
                    if (mIPAddress[0] != "0.0.0.0")
                    {
                        listIP.Add(mIPAddress[0]);
                    }
                }
                mo.Dispose();
            }
            return;
        }
        private void Form1_Load(object sender, EventArgs e)
        {
            List<string> listIP = new List<string>();
            get_vmwareip(ref listIP);
            if(listIP.Count >= 1)
            {
                this.Text = this.Text + "    IP：";
            }
            foreach (string ip in listIP)
            {
                this.Text +=  "  "+ ip;
            }
        }

        private void 真三玩家ToolStripMenuItem_Click(object sender, EventArgs e)
        {
            this.panel1.Controls.Clear();
            Form_zs form = new Form_zs();
            this.panel1.Controls.Add(form);
            form.Show();
        }


        private void panel1_SizeChanged(object sender, EventArgs e)
        {
            this.panel1.Controls[0].Size = this.panel1.Size;
        }

        private void 网页内容提取ToolStripMenuItem_Click(object sender, EventArgs e)
        {
            this.panel1.Controls.Clear();
            Form_web form = new Form_web();
            this.panel1.Controls.Add(form);
            form.Show();
        }

        private void 批量改名ToolStripMenuItem_Click(object sender, EventArgs e)
        {
            this.panel1.Controls.Clear();
            Form_file form = new Form_file();
            this.panel1.Controls.Add(form);
            form.Show();
        }

        private void 政英数专ToolStripMenuItem_Click(object sender, EventArgs e)
        {
            this.panel1.Controls.Clear();
            Form_ks form = new Form_ks();
            this.panel1.Controls.Add(form);
            form.Show();
        }

        private void 进程内存ToolStripMenuItem_Click(object sender, EventArgs e)
        {
            this.panel1.Controls.Clear();
            Form_crack form = new Form_crack();
            this.panel1.Controls.Add(form);
            form.Show();
        }

        private void 子域名ToolStripMenuItem_Click(object sender, EventArgs e)
        {
            MessageBox.Show(@"python M:\svnb\cber\gitcode\python\forvscode\subdomain.py", "提示,在cmd执行：");
            Clipboard.SetDataObject(@"python M:\svnb\cber\gitcode\python\forvscode\subdomain.py");
        }

        private void 蚁剑ToolStripMenuItem_Click(object sender, EventArgs e)
        {
            dd.exec_proc(@"O:\web安全软件\AntSword-Loader-v4.0.3-win32-x64\AntSword-Loader-v4.0.3-win32-x64\AntSword.exe");
        }
    }
}
