using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Text;
using System.Threading;//sleep()
using System.Windows.Forms;
using System.Drawing.Drawing2D;
using System.Runtime.InteropServices;

namespace 备份表程序
{
    public partial class MainForm : Form
    {

        [DllImport("user32.dll")]  //需添加using System.Runtime.InteropServices
        public static extern bool ReleaseCapture();
        [DllImport("user32.dll")]
        public static extern bool SendMessage(IntPtr hwnd, int wMsg, int wParam, int lParam);
        public const int WM_SYSCOMMAND = 0x0112;
        public const int SC_MOVE = 0xF010;
        public const int HTCAPTION = 0x0002;  
        public MainForm()
        {
            InitializeComponent();
            Bitmap oldMap = new Bitmap(Properties.Resources.min);
            min_bott.Image = GetnIndexBitmap(oldMap, 0, 4);
            oldMap = new Bitmap(Properties.Resources.max);
            max_bott.Image = GetnIndexBitmap(oldMap, 0, 4);
            oldMap = new Bitmap(Properties.Resources.close);
            close_bott.Image = GetnIndexBitmap(oldMap, 0, 4);
        }
        public Image GetnIndexBitmap(Bitmap oldMap, int nIndex,int value)
        {
            Bitmap newMap = new Bitmap(oldMap.Width / value, oldMap.Height);//你要截取多大的图，这里就设置多大。
            Graphics g = Graphics.FromImage(newMap);
            g.Clear(Color.Transparent);
            g.DrawImage(oldMap, new Rectangle(0, 0, oldMap.Width / value, oldMap.Height),
                 new Rectangle(oldMap.Width / value * nIndex, 1, oldMap.Width / value - value, oldMap.Height), GraphicsUnit.Pixel);
            return newMap;
        }
        //报表统计 
        #region
        private void pictureBox1_MouseEnter(object sender, EventArgs e)
        {
            pictureBox1.BorderStyle = BorderStyle.FixedSingle;//115,185,232
            pictureBox1.BackColor = Color.FromArgb(91, 173, 223);//91, 173, 223
            label1.BackColor = Color.FromArgb(91, 173, 223);
        }

        private void pictureBox1_MouseLeave(object sender, EventArgs e)
        {
            pictureBox1.BorderStyle = BorderStyle.None;
            pictureBox1.BackColor = Color.Transparent;
            label1.BackColor = Color.Transparent;
        }
        #endregion
        //设置
        #region
        private void pictureBox2_MouseEnter(object sender, EventArgs e)
        {
            pictureBox2.BorderStyle = BorderStyle.FixedSingle;
            pictureBox2.BackColor = Color.FromArgb(91, 173, 223);
            label2.BackColor = Color.FromArgb(91, 173, 223);
        }
        private void pictureBox2_MouseLeave(object sender, EventArgs e)
        {
            pictureBox2.BorderStyle = BorderStyle.None;
            pictureBox2.BackColor = Color.Transparent;
            label2.BackColor = Color.Transparent;
        }
        #endregion
        //各个主界面响应代码        
        #region
        private void pictureBox1_Click(object sender, EventArgs e)
        {
            this.panel1.Controls.Clear();
            report.loading p1 = new 备份表程序.report.loading();
            p1.Parent = this.panel1;
            p1.Dock = DockStyle.Fill;
            p1.Show();
        }

        private void pictureBox4_Click(object sender, EventArgs e)
        {
            this.panel1.Controls.Clear();
            backup.autobake p1 = new 备份表程序.backup.autobake();
            p1.Parent = this.panel1;
            p1.Dock = DockStyle.Fill;
            p1.Show();
        }

        private void pictureBox3_Click(object sender, EventArgs e)
        {

        }

        private void pictureBox3_MouseEnter(object sender, EventArgs e)
        {
            pictureBox3.BorderStyle = BorderStyle.FixedSingle;
            pictureBox3.BackColor = Color.FromArgb(91, 173, 223);
            label3.BackColor = Color.FromArgb(91, 173, 223);
        }
        private void pictureBox3_MouseLeave(object sender, EventArgs e)
        {
            pictureBox3.BorderStyle = BorderStyle.None;
            pictureBox3.BackColor = Color.Transparent;
            label3.BackColor = Color.Transparent;
        }

        private void pictureBox4_MouseEnter(object sender, EventArgs e)
        {
            pictureBox4.BorderStyle = BorderStyle.FixedSingle;
            pictureBox4.BackColor = Color.FromArgb(91, 173, 223);
            label4.BackColor = Color.FromArgb(91, 173, 223);
        }
        private void pictureBox4_MouseLeave(object sender, EventArgs e)
        {
            pictureBox4.BorderStyle = BorderStyle.None;
            pictureBox4.BackColor = Color.Transparent;
            label4.BackColor = Color.Transparent;
        }

        private void pictureBox5_Click(object sender, EventArgs e)
        {
            this.panel1.Controls.Clear();
            inquiry.posxftq p1 = new 备份表程序.inquiry.posxftq();
            p1.Parent = this.panel1;
            p1.Dock = DockStyle.Fill;
            p1.Show();
        }

        private void pictureBox5_MouseEnter(object sender, EventArgs e)
        {
            pictureBox5.BorderStyle = BorderStyle.FixedSingle;
            pictureBox5.BackColor = Color.FromArgb(91, 173, 223);
            label5.BackColor = Color.FromArgb(91, 173, 223);
        }

        private void pictureBox5_MouseLeave(object sender, EventArgs e)
        {
            pictureBox5.BorderStyle = BorderStyle.None;
            pictureBox5.BackColor = Color.Transparent;
            label5.BackColor = Color.Transparent;
        }
        #endregion

        private void MainForm_MouseDown(object sender, MouseEventArgs e)
        {
            ReleaseCapture();
            SendMessage(this.Handle, WM_SYSCOMMAND, SC_MOVE + HTCAPTION, 0);
        }

        private void close_bott_Click(object sender, EventArgs e)
        {
            this.Close();
        }

        private void max_bott_Click(object sender, EventArgs e)
        {
            if (this.WindowState == FormWindowState.Maximized)//判断是否窗体最大化
            {
                this.WindowState = FormWindowState.Normal;
            }
            else
            {
                WindowState = FormWindowState.Normal; //窗体最大化
            }
        }

        private void min_bott_Click(object sender, EventArgs e)
        {
            this.notifyIcon1.Visible = true;     //图标在任务栏区域中可见 
            this.ShowInTaskbar = false;//windows任务栏中不显示窗体
            this.Hide();
        }

        private void notifyIcon1_MouseDoubleClick(object sender, MouseEventArgs e)
        {
            Bitmap oldMap = new Bitmap(Properties.Resources.min);
            min_bott.Image = GetnIndexBitmap(oldMap, 0, 4);
            this.Visible = true; ;
            this.Show();
            this.Focus();
            //this.Activate();//激活窗体
            this.notifyIcon1.Visible = false;//在任务栏区域中不显示图标
            this.ShowInTaskbar = true;　//窗体在任务栏区域中可见 
        }

        private void min_bott_MouseEnter(object sender, EventArgs e)
        {
            Bitmap oldMap = new Bitmap(Properties.Resources.min);
            min_bott.Image = GetnIndexBitmap(oldMap, 1, 4);
        }

        private void min_bott_MouseLeave(object sender, EventArgs e)
        {
            Bitmap oldMap = new Bitmap(Properties.Resources.min);
            min_bott.Image = GetnIndexBitmap(oldMap, 0, 4);
        }

        private void min_bott_MouseDown(object sender, MouseEventArgs e)
        {
            Bitmap oldMap = new Bitmap(Properties.Resources.min);
            min_bott.Image = GetnIndexBitmap(oldMap, 2, 4);
        }

        private void max_bott_MouseDown(object sender, MouseEventArgs e)
        {
            Bitmap oldMap = new Bitmap(Properties.Resources.max);
            max_bott.Image = GetnIndexBitmap(oldMap, 2, 4);
        }

        private void max_bott_MouseEnter(object sender, EventArgs e)
        {
            Bitmap oldMap = new Bitmap(Properties.Resources.max);
            max_bott.Image = GetnIndexBitmap(oldMap, 1, 4);
        }

        private void max_bott_MouseLeave(object sender, EventArgs e)
        {
            Bitmap oldMap = new Bitmap(Properties.Resources.max);
            max_bott.Image = GetnIndexBitmap(oldMap, 0, 4);
        }

        private void close_bott_MouseLeave(object sender, EventArgs e)
        {
            Bitmap oldMap = new Bitmap(Properties.Resources.close);
            close_bott.Image = GetnIndexBitmap(oldMap, 0, 4);
        }

        private void close_bott_MouseEnter(object sender, EventArgs e)
        {
            Bitmap oldMap = new Bitmap(Properties.Resources.close);
            close_bott.Image = GetnIndexBitmap(oldMap, 1, 4);
        }

        private void close_bott_MouseDown(object sender, MouseEventArgs e)
        {
            Bitmap oldMap = new Bitmap(Properties.Resources.close);
            close_bott.Image = GetnIndexBitmap(oldMap, 2, 4);

        }

        private void MainForm_Load(object sender, EventArgs e)
        {
            Tip.SetToolTip(close_bott, "关闭");
            Tip.SetToolTip(min_bott, "最小化");
            Tip.SetToolTip(max_bott, "最大化");
        }
        //关闭窗体按键
      //  #region
    }
}