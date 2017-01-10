using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Drawing;
using System.Data;
using System.Text;
using System.Windows.Forms;
using System.Threading;

namespace 备份表程序.inquiry
{
    public partial class posxftq : UserControl
    {
        
        public delegate void MyInvoke(bool b);  //定义一个委托  
        public delegate void MyInvoke1(DataTable table); 
        public delegate void MyInvoke2(string str);
        public delegate void MyInvoke3(Bitmap picture);
        //pos
        private DataTable dt = null;
        Thread m_thread = null;
        //xft
        private DataTable dtxft = null;
        Thread m_threadxft = null;
        //fs
        private DataTable dtfs = null;
        Thread m_threadfs = null;

        public posxftq()//设置日期控件时间
        {
            InitializeComponent();
            dtinput1.Value = DateTime.Now.AddDays(-1);
            dtinput2.Value = DateTime.Now.AddDays(-1);
            dtinput3.Value = DateTime.Now.AddDays(-1);
            dtinput4.Value = DateTime.Now.AddDays(-1);
            dtinput5.Value = DateTime.Now.AddDays(-1);
            dtinput6.Value = DateTime.Now.AddDays(-1);
        }
        //pos交易查询
        #region 
        private void posselect_Click(object sender, EventArgs e)// 查询事件的响应
        {
            m_thread = new Thread(new ThreadStart(RunOnce));
            m_thread.Start();
        }

      //更新pos界面的方法  
        private void UpdatePicture(Bitmap picture)
        {
            pictpos.Image = picture;
        }
        private void UpdateLabel(string  ltext)
        {
            this.labelpos.Text = ltext;
        }
        private void UpdatePan(bool b)
        {
            this.panel1.Visible = b;
        }
        private void UpdateGridView(DataTable table)
        {
            dataGridViewX1.DataSource = table;
        } 
        private void RunOnce()
        {
            dt = null;
            MyInvoke mi = new MyInvoke(UpdatePan);
            MyInvoke1 mi1 = new MyInvoke1(UpdateGridView);
            MyInvoke2 mi2 = new MyInvoke2(UpdateLabel);
            MyInvoke3 mi3 = new MyInvoke3(UpdatePicture);
            this.BeginInvoke(mi3, new object[] { Properties.Resources.loading });
            this.BeginInvoke(mi2,new object[] { "正在统计数据……" });
            this.BeginInvoke(mi1, new object[] { dt });
            this.BeginInvoke(mi, new object[] { true });  
            queryClass qc = new queryClass();
            dt = qc.SelectDt(dtinput1.Value, dtinput2.Value, mchtid_text.Text, termid_text.Text);
            this.BeginInvoke(mi3, new object[] { Properties.Resources.finishok });
            this.BeginInvoke(mi1, new object[] { dt });
            this.BeginInvoke(mi2, new object[] { "数据查询已完成" });
            Thread.Sleep(1000);
            this.BeginInvoke(mi, new object[] { false });  
        }
        private void posdc_Click(object sender, EventArgs e)//导出到excel事件的响应
        {
            m_thread = new Thread(new ThreadStart(RunPosDc));
            m_thread.Start(); 
        }
        private void RunPosDc()
        {
            dt = null;
            MyInvoke mi = new MyInvoke(UpdatePan);
            MyInvoke1 mi1 = new MyInvoke1(UpdateGridView);
            MyInvoke2 mi2 = new MyInvoke2(UpdateLabel);
            MyInvoke3 mi3 = new MyInvoke3(UpdatePicture);
            this.BeginInvoke(mi3, new object[] { Properties.Resources.loading });
            this.BeginInvoke(mi2, new object[] { "正在导出数据……" });
            this.BeginInvoke(mi1, new object[] { dt });
            this.BeginInvoke(mi, new object[] { true });
            queryClass qc = new queryClass();
            dt = qc.SelectDt(dtinput1.Value, dtinput2.Value, mchtid_text.Text, termid_text.Text);
            qc.WriteExcelFile("商户交易明细", "Sheet1", dtinput1.Value, dtinput2.Value, dt);
            this.BeginInvoke(mi3, new object[] { Properties.Resources.finishok });
            this.BeginInvoke(mi1, new object[] { dt });
            this.BeginInvoke(mi2, new object[] { "导出数据任务已完成" });
            Thread.Sleep(1000);
            this.BeginInvoke(mi, new object[] { false });
        }
        #endregion
        //xft交易查询
        #region
        private void UpdatePicturexft(Bitmap picture)
        {
            pictxft.Image = picture;
        }
        private void UpdateLabelxft(string ltext)
        {
            this.labelxft.Text = ltext;
        }
        private void UpdatePanxft(bool b)
        {
            this.panelxft.Visible = b;
        }
        private void UpdateGridViewxft(DataTable table)
        {
            dataGridViewX2.DataSource = table;
        } 
        private void xftselect_Click(object sender, EventArgs e)
        {
            m_threadxft = new Thread(new ThreadStart(RunOnceXft));
            m_threadxft.Start();
        }
        private void RunOnceXft()
        {
            dtxft = null;
            MyInvoke mi = new MyInvoke(UpdatePanxft);
            MyInvoke1 mi1 = new MyInvoke1(UpdateGridViewxft);
            MyInvoke2 mi2 = new MyInvoke2(UpdateLabelxft);
            MyInvoke3 mi3 = new MyInvoke3(UpdatePicturexft);
            this.BeginInvoke(mi3, new object[] { Properties.Resources.loading });
            this.BeginInvoke(mi2, new object[] { "正在统计数据……" });
            this.BeginInvoke(mi1, new object[] { dtxft });
            this.BeginInvoke(mi, new object[] { true });
            queryClass qc = new queryClass();
            dtxft = qc.SelectXft(dtinput3.Value, dtinput4.Value, psam.Text, areatelno.Text);
            this.BeginInvoke(mi3, new object[] { Properties.Resources.finishok });
            this.BeginInvoke(mi1, new object[] { dtxft });
            this.BeginInvoke(mi2, new object[] { "数据查询已完成" });
            Thread.Sleep(1000);
            this.BeginInvoke(mi, new object[] { false });
        }
        private void xftdc_Click(object sender, EventArgs e)
        {
            m_threadxft = new Thread(new ThreadStart(RunXftDcXft));
            m_threadxft.Start(); 
        }
        private void RunXftDcXft()
        {
            dtxft = null;
            MyInvoke mi = new MyInvoke(UpdatePanxft);
            MyInvoke1 mi1 = new MyInvoke1(UpdateGridViewxft);
            MyInvoke2 mi2 = new MyInvoke2(UpdateLabelxft);
            MyInvoke3 mi3 = new MyInvoke3(UpdatePicturexft);
            this.BeginInvoke(mi3, new object[] { Properties.Resources.loading });
            this.BeginInvoke(mi2, new object[] { "正在导出数据……" });
            this.BeginInvoke(mi1, new object[] { dtxft });
            this.BeginInvoke(mi, new object[] { true });
            queryClass qc = new queryClass();
            dtxft = qc.SelectXft(dtinput3.Value, dtinput4.Value, psam.Text, areatelno.Text);
            qc.WriteExcelFile("信付通商户交易明细", "Sheet1", dtinput3.Value, dtinput4.Value, dtxft);
            this.BeginInvoke(mi3, new object[] { Properties.Resources.finishok });
            this.BeginInvoke(mi1, new object[] { dtxft });
            this.BeginInvoke(mi2, new object[] { "导出数据任务已完成" });
            Thread.Sleep(1000);
            this.BeginInvoke(mi, new object[] { false });
        }
        #endregion
        //非税查询代码      
        #region
        private void UpdatePicturefs(Bitmap picture)
        {
            pictfs.Image = picture;
        }
        private void UpdateLabelfs(string ltext)
        {
            this.labelfs.Text = ltext;
        }
        private void UpdatePanfs(bool b)
        {
            this.panelfs.Visible = b;
        }
        private void UpdateGridViewfs(DataTable table)
        {
            dataGridViewX3.DataSource = table;
        }
        private void RunOnceFs()
        {
            dtxft = null;
            MyInvoke mi = new MyInvoke(UpdatePanfs);
            MyInvoke1 mi1 = new MyInvoke1(UpdateGridViewfs);
            MyInvoke2 mi2 = new MyInvoke2(UpdateLabelfs);
            MyInvoke3 mi3 = new MyInvoke3(UpdatePicturefs);
            this.BeginInvoke(mi3, new object[] { Properties.Resources.loading });
            this.BeginInvoke(mi2, new object[] { "正在统计数据……" });
            this.BeginInvoke(mi1, new object[] { dtfs });
            this.BeginInvoke(mi, new object[] { true });
            queryClass qc = new queryClass();
            dtfs = qc.SelectFs(dtinput5.Value, dtinput6.Value, fsmchtid.Text.Trim(), fstermid.Text.Trim(), actnbr.Text.Trim());
            this.BeginInvoke(mi3, new object[] { Properties.Resources.finishok });
            this.BeginInvoke(mi1, new object[] { dtfs });
            this.BeginInvoke(mi2, new object[] { "数据查询已完成" });
            Thread.Sleep(1000);
            this.BeginInvoke(mi, new object[] { false });
        }


        private void fsselect_Click(object sender, EventArgs e)
        {
            m_threadfs = new Thread(new ThreadStart(RunOnceFs));
            m_threadfs.Start();
        }

        private void fsdc_Click(object sender, EventArgs e)
        {
            m_threadfs = new Thread(new ThreadStart(RunFsDc));
            m_threadfs.Start(); 
        }
        private void RunFsDc()
        {
            dtxft = null;
            MyInvoke mi = new MyInvoke(UpdatePanfs);
            MyInvoke1 mi1 = new MyInvoke1(UpdateGridViewfs);
            MyInvoke2 mi2 = new MyInvoke2(UpdateLabelfs);
            MyInvoke3 mi3 = new MyInvoke3(UpdatePicturefs);
            this.BeginInvoke(mi3, new object[] { Properties.Resources.loading });
            this.BeginInvoke(mi2, new object[] { "正在导出数据……" });
            this.BeginInvoke(mi1, new object[] { dtfs });
            this.BeginInvoke(mi, new object[] { true });
            queryClass qc = new queryClass();
            dtxft = qc.SelectFs(dtinput5.Value, dtinput6.Value, fsmchtid.Text.Trim(), fstermid.Text.Trim(), actnbr.Text.Trim());
            qc.WriteExcelFile("商户交易明细", "Sheet1", dtinput3.Value, dtinput4.Value, dtfs);
            this.BeginInvoke(mi3, new object[] { Properties.Resources.finishok });
            this.BeginInvoke(mi1, new object[] { dtfs });
            this.BeginInvoke(mi2, new object[] { "导出数据任务已完成" });
            Thread.Sleep(1000);
            this.BeginInvoke(mi, new object[] { false });
        }
#endregion
    }
}
