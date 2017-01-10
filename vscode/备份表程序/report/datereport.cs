using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Drawing;
using System.Data;
using System.Text;
using System.Windows.Forms;
using System.Drawing.Drawing2D;
using System.Data.OleDb;

namespace 备份表程序.report
{
    public partial class datereport : UserControl
    {
        MyDbHelper DbHelper = null;
        public datereport()
        {
            InitializeComponent();
            dateTimeInput1.Value = DateTime.Now.AddDays(-1);
            dateTimeInput2.Value = DateTime.Now.AddDays(-1);
        }
        //三分图截取
        public Image GetnIndexBitmap(Bitmap oldMap, int nIndex)
        {
            Bitmap newMap = new Bitmap(oldMap.Width / 3, oldMap.Height);//你要截取多大的图，这里就设置多大。
            Graphics g = Graphics.FromImage(newMap);
            g.Clear(Color.Transparent);
            g.DrawImage(oldMap, new Rectangle(0, 0, oldMap.Width / 3, oldMap.Height),
                 new Rectangle(oldMap.Width / 3 * nIndex, 1, oldMap.Width / 3 - 3, oldMap.Height), GraphicsUnit.Pixel);
            return newMap;
        }

        public string[] dealdate()
        {
            string[] date = new string[2];
            if (dateTimeInput1.Value.Month.ToString().Length == 1)
                date[0] = dateTimeInput1.Value.Year.ToString() + "0" + dateTimeInput1.Value.Month.ToString();
            else
                date[0] = dateTimeInput1.Value.Year.ToString() + dateTimeInput1.Value.Month.ToString();
            if (dateTimeInput1.Value.Day.ToString().Length == 1)
                date[0] = date[0] + "0" + dateTimeInput1.Value.Day.ToString();
            else
                date[0] = date[0] + dateTimeInput1.Value.Day.ToString();

            if (dateTimeInput2.Value.Month.ToString().Length == 1)
                date[1] = dateTimeInput2.Value.Year.ToString() + "0" + dateTimeInput2.Value.Month.ToString();
            else
                date[1] = dateTimeInput2.Value.Year.ToString() + dateTimeInput2.Value.Month.ToString();
            if (dateTimeInput2.Value.Day.ToString().Length == 1)
                date[1] = date[1] + "0" + dateTimeInput2.Value.Day.ToString();
            else
                date[1] = date[1] + dateTimeInput2.Value.Day.ToString();
            return date;
        }

        private void buttonX1_Click(object sender, EventArgs e)
        {
            string reportName;
            int index = combo.SelectedIndex;
            if (index != -1)
            {
                reportName = (string)combo.SelectedItem;
                int iRowNum = listView.Items.Count;
                for (int i = 0; i < iRowNum; i++)
                {
                    if (reportName.CompareTo(listView.Items[i].SubItems[0].Text) == 0)
                    {
                        MessageBox.Show("此报表已选出，请选择其它报表");
                        return;
                    }
                    else continue;
                }
                ListViewItem Item = new ListViewItem(reportName, 2);
                string[] date = dealdate();
                Item.SubItems.Add(date[0]);
                Item.SubItems.Add(date[1]);
                Item.SubItems.Add("未运行");
                this.listView.Items.AddRange(new ListViewItem[] { Item });
                ImageList image = new ImageList();
                image.ImageSize = new Size(1, 18);
                this.listView.SmallImageList = image;
            }
        }

        private void buttonX2_Click(object sender, EventArgs e)
        {
            string[] date = dealdate();
            string reportName;
            int allindx = combo.Items.Count;
            for (int index = 0; index < allindx; index++)
            {
                combo.SelectedIndex = index;
                reportName = (string)combo.SelectedItem;
                int iRowNum = listView.Items.Count;
                for (int i = 0; i < iRowNum; i++)
                {
                    if (reportName.CompareTo(listView.Items[i].SubItems[0].Text) == 0)
                    {
                        MessageBox.Show("此报表已选出，请选择其它报表");
                        return;
                    }
                    else continue;
                }
                ListViewItem Item = new ListViewItem(reportName, 2);
                Item.SubItems.Add(date[0]);
                Item.SubItems.Add(date[1]);
                Item.SubItems.Add("未运行");
                this.listView.Items.AddRange(new ListViewItem[] { Item });
                ImageList image = new ImageList();
                image.ImageSize = new Size(1, 18);
                this.listView.SmallImageList = image;
            }
        }

        private void pictureBox1_Click(object sender, EventArgs e)
        {
            reflow_control r_con = new reflow_control();
            string reportNum, beginDate, endDate;

            //根据列表中报表编号找到对应的数据库表中数据表名，模板名，SHEET名
            string sTableName = "";
            string sModelName = "";
            string sSheetName = "";
            string sReportName = "";
            string sProcName = "";
            
            int iRowNum = listView.Items.Count;
            //进度条代码
            proBar.Value = 0;
            proBar.Maximum = iRowNum * 10;
            proBar.Step = 1;
            for (int i = 0; i < iRowNum; i++)
            {
                beginDate = listView.Items[i].SubItems[1].Text.Trim();
                endDate = listView.Items[i].SubItems[2].Text.Trim();
                reportNum = listView.Items[i].SubItems[0].Text.Substring(0, 2);
                string strCmd = "";
                try
                {
                    string constr="";
                    if (loading.ibb_flag == "1")
                    {
                        strCmd = "select * from report where REPORT_NUM = " + reportNum;
                        constr = MyDbHelper.connectstring_cardqs;
                    }
                    else if (loading.ibb_flag == "2")
                    {
                        strCmd = "select * from report_xft where REPORT_NUM = " + reportNum;
                        constr = MyDbHelper.connectstring_cardqs;
                    }
                    else if (loading.ibb_flag == "3")
                    {
                        strCmd = "select * from report_bf where REPORT_NUM = " + reportNum;
                        constr = MyDbHelper.connectstring_prec;
                    }

                    DbHelper = new MyDbHelper(constr);
                    OleDbDataReader dbReader = DbHelper.ExecuteDataReader(strCmd);
                    if (dbReader.Read())
                    {
                        sTableName = dbReader.GetString(4).ToString();
                        sModelName = dbReader.GetString(2).ToString();
                        sSheetName = dbReader.GetString(3).ToString();
                        sReportName = dbReader.GetString(1).ToString();
                        sProcName = dbReader.GetString(5).ToString();
                    }
                    try
                    {
                        r_con.RunProcedure(sProcName.Trim(), beginDate, endDate,constr);
                    }
                    catch (Exception errorRunPro)
                    {
                        MessageBox.Show(errorRunPro.ToString());
                    }
                    //写EXCEL文件
                    r_con.WriteExcelFile(sModelName, sTableName, sSheetName, beginDate, endDate,constr);//将表中内容放入EXCEL
                    listView.Items[i].SubItems[3].Text = "完成统计";
                    proBar.Value = (i+1)*10;
                }

                catch (Exception ex)
                {
                    MyLog.Log("3", "读取数据失败：" + ex.Message);
                }
                finally
                {
                    if (DbHelper != null)
                    {
                        DbHelper.Dispose();//新加的
                    }
                }

            }
        }
        //导出按键
        #region
        private void pictureBox1_MouseEnter(object sender, EventArgs e)
        {
            pictureBox1.BackgroundImage = Properties.Resources.set_btn_over;
        }

        private void pictureBox1_MouseLeave(object sender, EventArgs e)
        {
            pictureBox1.BackgroundImage = Properties.Resources.set_btn_normal;
        }

        private void pictureBox1_MouseDown(object sender, MouseEventArgs e)
        {
            pictureBox1.BackgroundImage = Properties.Resources.set_btn_down;
        }
        #endregion
        //绘渐变
        #region
        private void datereport_Paint(object sender, PaintEventArgs e)
        {
            Graphics g = e.Graphics;
            Color FColor = Color.FromArgb(225, 242, 251);
            Color TColor = Color.White;
            Brush b = new LinearGradientBrush(this.ClientRectangle, FColor, TColor, LinearGradientMode.Vertical);
            g.FillRectangle(b, this.ClientRectangle);
        }

        private void datereport_Resize(object sender, EventArgs e)
        {
            this.Invalidate();
        }
        #endregion
        //载入窗体
        private void datereport_Load(object sender, EventArgs e)
        {
            string sComboData;
            try
            {
                if (loading.ibb_flag == "1")
                {
                    DbHelper = new MyDbHelper(MyDbHelper.connectstring_cardqs);
                    OleDbDataReader dbReader = DbHelper.ExecuteDataReader("select * from report where report_type!='0' order by proc_name ");
                    while (dbReader.Read())
                    {
                        sComboData = dbReader.GetString(0).ToString().Trim() +" - "+ dbReader.GetString(1).ToString().Trim();
                        combo.Items.Add((object)sComboData);
                    }
                }
                else if (loading.ibb_flag == "2")
                {
                    DbHelper = new MyDbHelper(MyDbHelper.connectstring_cardqs);
                    OleDbDataReader dbReader = DbHelper.ExecuteDataReader("select * from report_xft where report_type!='0' order by report_num ");
                    while (dbReader.Read())
                    {
                        sComboData = dbReader.GetString(0).ToString().Trim() + " - " + dbReader.GetString(1).ToString().Trim();
                        combo.Items.Add((object)sComboData);
                    }
                }
                else if (loading.ibb_flag == "3")
                {
                    DbHelper = new MyDbHelper(MyDbHelper.connectstring_prec);
                    OleDbDataReader dbReader = DbHelper.ExecuteDataReader("select * from report_bf where report_type!='0' order by report_num ");
                    while (dbReader.Read())
                    {
                        sComboData = dbReader.GetString(0).ToString().Trim() + " - " + dbReader.GetString(1).ToString().Trim();
                        combo.Items.Add((object)sComboData);
                    }
                }
            }
            catch (Exception ex)
            {
                MyLog.Log("3", "向combox读取数据失败：" + ex.Message);
            }
            finally
            {
                if (DbHelper != null)
                {
                    DbHelper.Dispose();//新加的
                }
            }
        }


        private void listView_SelectedIndexChanged(object sender, EventArgs e)
        {
            listView.Items.Clear();
        }

    }
}
