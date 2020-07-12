using System;
using System.Collections;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace snake
{

    enum status_cb
    {
        ST_INIT = 0,
        ST_READY,
        ST_JISHI,
        ST_STOP
    }
    public partial class Form1 : Form
    {


        int col = 0;
        int row = 0;
        int xs = 100;
        status_cb startflag = status_cb.ST_INIT;
        int second = 0;

        List<Point> list = new List<Point>();//存储节点的行列值

        protected override void WndProc(ref Message Msg)
        {
            base.WndProc(ref Msg);
        }

        private void arrrandom(ref string[] arr)
        {
            Random ran = new Random();
            int k = 0;
            string strtmp = "";
            for (int i = 0; i < arr.Length; i++)
            {

                k = ran.Next(0, 20);
                if (k != i)
                {
                    strtmp = arr[i];
                    arr[i] = arr[k];
                    arr[k] = strtmp;
                }
            }

        }

        protected override void OnPaint(PaintEventArgs e)
        {
            // 获取当前窗体的坐标
            Rectangle rect = this.Bounds;
            // 网格的列数
            col = rect.Width / xs;
            // 网格的行数
            row = rect.Height / xs;

            int drawRow = 0;
            int drawCol = 0;

            // 实例化画笔。
            Pen p = new Pen(Brushes.LightBlue);
            // 设置画笔的样式(虚线)。

            p.DashStyle = System.Drawing.Drawing2D.DashStyle.Solid;

            // 画水平线
            for (int i = 0; i <= row; i++)
            {
                e.Graphics.DrawLine(p, 0, drawCol, rect.Width, drawCol);
                drawCol += xs;
            }
            // 画垂直线
            for (int j = 0; j <= col; j++)
            {
                e.Graphics.DrawLine(p, drawRow, 0, drawRow, drawCol);
                drawRow += xs;
            }
            string[] strarr = { "1", "2", "3", "4", "5", "6", "7", "8", "9", "10", 
                                "11", "12", "13", "14", "15", "16", "17", "18", "19", "20" 
                              , "21", "22", "23", "24", "25"};
            arrrandom(ref strarr);
            Font font1 =  new Font( "宋体", 30, FontStyle.Bold | FontStyle.Regular ) ;
            
            for(int i = 0 ; i < row; i++)
            {
                for(int j = 0 ; j < col ; j++)
                {
                    Rectangle rect1 = new Rectangle(j * xs+28, i * xs+30, xs, xs);//显示是反的，没事
                    e.Graphics.DrawString(strarr[i * 5 + j], font1, Brushes.White,rect1);
                }
            }
        }
        public Form1()
        {
            InitializeComponent();
            this.SetStyle(ControlStyles.OptimizedDoubleBuffer |
                    ControlStyles.ResizeRedraw |
                    ControlStyles.AllPaintingInWmPaint, true);
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            timer1.Interval = 5*1000*1000;
            timer1.Start();
        }

        private void timer1_Tick(object sender, EventArgs e)
        {
            this.Invalidate();
        }

        private void Form1_Click(object sender, EventArgs e)
        {
            if (startflag == status_cb.ST_INIT)
            {
                second = 0;
                startflag = status_cb.ST_JISHI;
                timer2.Start();
            }
            else if (startflag == status_cb.ST_JISHI)
            {
                startflag = status_cb.ST_STOP;
                this.toolStripStatusLabel1.Text = "测试结束";
            }
            else if(startflag == status_cb.ST_STOP)
            {
                this.Invalidate();
                second = 0;
                startflag = status_cb.ST_READY;
                this.toolStripStatusLabel1.Text = "已刷新，请点击界面开始";
            }
            else if(startflag == status_cb.ST_READY)
            {
                second = 0;
                timer2.Start();
                startflag = status_cb.ST_JISHI;
            }

        }

        private void timer2_Tick(object sender, EventArgs e)
        {
            if (startflag == status_cb.ST_JISHI)
            {
                second++;
                this.toolStripStatusLabel1.Text = "已启动计时";
                this.toolStripStatusLabel4.Text = "                         ";
                this.toolStripStatusLabel4.Text += (second / 60).ToString("D2") + ":" + (second % 60).ToString("D2");
            }
            else
            {
                this.toolStripStatusLabel1.Text = "已刷新，请点击界面开始";
            }
        }

    }
}
