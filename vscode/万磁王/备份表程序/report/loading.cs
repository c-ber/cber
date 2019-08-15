using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Drawing;
using System.Data;
using System.Text;
using System.Windows.Forms;
using System.Drawing.Drawing2D;

namespace 备份表程序.report
{
    public partial class loading : UserControl
    {
        public static string ibb_flag = "";

        public loading()
        {
            InitializeComponent();
        }

        private void qs_btn_Click(object sender, EventArgs e)
        {
            ibb_flag = "1";
            this.Controls.Clear();
            report.datereport p1 = new 备份表程序.report.datereport();
            p1.Parent = this;
            p1.Dock = DockStyle.Fill;
            p1.Show();
        }
        private void xft_btn_Click(object sender, EventArgs e)
        {
            ibb_flag = "2";
            this.Controls.Clear();
            report.datereport p1 = new 备份表程序.report.datereport();
            p1.Parent = this;
            p1.Dock = DockStyle.Fill;
            p1.Show();
        }
        private void czk_btn_Click(object sender, EventArgs e)
        {
            ibb_flag = "3";
            this.Controls.Clear();
            report.datereport p1 = new 备份表程序.report.datereport();
            p1.Parent = this;
            p1.Dock = DockStyle.Fill;
            p1.Show();
        }



    }
}
