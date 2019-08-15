using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Drawing;
using System.Data;
using System.Text;
using System.Windows.Forms;
using System.Drawing.Drawing2D;
using System.Data.OleDb;


namespace 备份表程序.backup
{
    public partial class autobake : UserControl
    {
        flow_bf _flow_bf = new flow_bf();
        
        public autobake()
        {
            InitializeComponent();
            dateTimeInput1.Value = DateTime.Now.AddDays(-1);
        }
        public string dealdate(DateTime dtime)
        {
            string date = "";
            if (dtime.Month.ToString().Length == 1)
                date = dtime.Year.ToString() + "0" + dtime.Month.ToString();
            else
                date = dtime.Year.ToString() + dtime.Month.ToString();
            if (dtime.Day.ToString().Length == 1)
                date = date + "0" + dtime.Day.ToString();
            else
                date = date + dtime.Day.ToString();
            return date;
        }
        private void buttonX1_Click(object sender, EventArgs e)
        {
            timer1.Enabled = true;
        }

        private void autobake_Paint(object sender, PaintEventArgs e)
        {
            Graphics g = e.Graphics;
            Color FColor = Color.FromArgb(225, 242, 251);
            Color TColor = Color.White;
            Brush b = new LinearGradientBrush(this.ClientRectangle, FColor, TColor, LinearGradientMode.Vertical);
            g.FillRectangle(b, this.ClientRectangle);
        }

        private void autobake_Resize(object sender, EventArgs e)
        {
            this.Invalidate();
        }



        private void buttonX3_Click(object sender, EventArgs e)
        {
            timer1.Enabled = false;
        }

        private void timer1_Tick(object sender, EventArgs e)
        {
            report.reflow_control r_con = new report.reflow_control();
            string ddate = dealdate(DateTime.Now.AddDays(-1));
            r_con.RunProcedure_one("bf_deal.bf_chuli", ddate);
            _flow_bf.type_flow();
            listBox1.Items.Clear();
            listBox1.Items.Add("备份程序正在运行中");
        }

    }
}
