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
using cotool.crack;
using System.Diagnostics;
using cotool.index;
using cotool.tool;

namespace cotool
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }
        DataDeal dd = new DataDeal();
        ComTool ct = new ComTool();
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

        private void Form1_Load(object sender, EventArgs e)
        {
            List<string> listIP = new List<string>();
            ct.get_vmwareip(ref listIP);
            if(listIP.Count >= 1)
            {
                this.Text = this.Text + "    IP:";
            }
            foreach (string ip in listIP)
            {
                this.Text +=  " "+ ip;
            }
            int debugday = 0;
            String date = "今天：" + DateTime.Now.AddDays(debugday) + "  " + 
                          ct.GetChineseDateTime(DateTime.Now.AddDays(debugday));
            this.Text += "  " + date;
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
            if (this.panel1.Controls.Count > 0)//不加这个判断，自启动会报错，奇怪
            {
                this.panel1.Controls[0].Size = this.panel1.Size;
            }
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

        private void 首页ToolStripMenuItem_Click(object sender, EventArgs e)
        {
            this.panel1.Controls.Clear();
            Form_index form = new Form_index();
            this.panel1.Controls.Add(form);
            form.Show();
        }
    }
}
