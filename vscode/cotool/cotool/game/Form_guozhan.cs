using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Drawing;
using System.Data;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace cotool.game
{
    public partial class Form_guozhan : UserControl
    {
        public Form_guozhan()
        {
            InitializeComponent();
        }

        Mysql mysql = null; //数据库连接

        private void btn_show_Click(object sender, EventArgs e)
        {
            bool is_have_open_mysql = false; //每个函数加一个开关，是否打开过数据库，开了就要自己关闭
            try
            {
                string[] pos_name = { "先锋1", "先锋2", "先锋3", "中军1", "中军2", "中军3", "后防1", "后防2", "后防3"};
                tbox_rlt1.Text = "";
                tbox_rlt2.Text = "";
                if (mysql == null || mysql.m_AlreadyDispose)
                {
                    is_have_open_mysql = true;
                    mysql = new Mysql(Mysql.connectstring);//打开数据库连接
                }

                for (int i = 1; i < 10; i++)
                {
                    string sql = "select * from t_qqsh_gz where (country = '" + comboBox1.Text
                        + "' || country = '" + comboBox2.Text + "') and pos = '" + i + "'  and date = '" +
                        cbox_date.Text + "' order by country asc";


                    DataTable dt = mysql.ExecuteDataTable("t_qqsh_gz", sql);
                    if(dt.Rows.Count != 2)
                    {
                        MessageBox.Show("数据不是两条，错误");
                        return;
                    }
                    string bp1 = dt.Rows[0][3].ToString().Trim();
                    string bp2 = dt.Rows[1][3].ToString().Trim();
                    if(bp1 == "")
                    {
                        bp1 = "空的";
                    }
                    if (bp2 == "")
                    {
                        bp2 = "空的";
                    }
                    tbox_rlt1.Text += pos_name[i - 1] + "  " +
                        bp1 + " VS " + bp2 +
                        "  【" + dt.Rows[0][5].ToString().Trim().PadRight(3, ' ') + " : " + dt.Rows[1][5].ToString().Trim().PadRight(3, ' ')
                        + "】" + Environment.NewLine + Environment.NewLine;
                }


                for (int i = 1; i < 10; i++)
                {
                    string sql = "select * from t_qqsh_gz where (country = '" + comboBox3.Text
                        + "' || country = '" + comboBox4.Text + "') and pos = '" + i + "'  and date = '" +
                        cbox_date.Text + "' order by country asc";


                    DataTable dt = mysql.ExecuteDataTable("t_qqsh_gz", sql);
                    if (dt.Rows.Count != 2)
                    {
                        MessageBox.Show("数据不是两条，错误");
                        return;
                    }
                    string bp1 = dt.Rows[0][3].ToString().Trim();
                    string bp2 = dt.Rows[1][3].ToString().Trim();
                    if (bp1 == "")
                    {
                        bp1 = "空的";
                    }
                    if (bp2 == "")
                    {
                        bp2 = "空的";
                    }
                    tbox_rlt2.Text += pos_name[i - 1] + "  " +
                        bp1 + " VS " + bp2 +
                        "  【" + dt.Rows[0][5].ToString().Trim().PadRight(3, ' ') + " : " + dt.Rows[1][5].ToString().Trim().PadRight(3, ' ')
                        + "】" + Environment.NewLine + Environment.NewLine;
                }

            }
            catch (Exception ex)
            {

            }

            finally
            {
                if (is_have_open_mysql)
                {
                    mysql.Dispose();//关闭数据库连接
                }
            }


        }

        private void Form_guozhan_Load(object sender, EventArgs e)
        {
            bool is_have_open_mysql = false; //每个函数加一个开关，是否打开过数据库，开了就要自己关闭
            try
            {
                if (mysql == null || mysql.m_AlreadyDispose)
                {
                    is_have_open_mysql = true;
                    mysql = new Mysql(Mysql.connectstring);//打开数据库连接
                }

                string sql = "select DISTINCT date from t_qqsh_gz order by date desc";
                DataTable dt = mysql.ExecuteDataTable("t_qqsh_gz", sql);
                cbox_date.DataSource = dt;
                cbox_date.DisplayMember = "date";
                cbox_date.ValueMember = "date";
            }
            catch (Exception ex)
            {

            }

            finally
            {
                if (is_have_open_mysql)
                {
                    mysql.Dispose();//关闭数据库连接
                }
            }
        }

        private void btn_fenpei_Click(object sender, EventArgs e)
        {
            bool is_have_open_mysql = false; //每个函数加一个开关，是否打开过数据库，开了就要自己关闭
            try
            {
                label6.Text = "";
                if (mysql == null || mysql.m_AlreadyDispose)
                {
                    is_have_open_mysql = true;
                    mysql = new Mysql(Mysql.connectstring);//打开数据库连接
                }
                //自定义大辽一个战力排行榜


                //先分配大包
                string bak_info = "大包：";
                string sql = "select bp_name from t_qqsh_gz where date = '"+ cbox_date.Text + 
                    "' and country = '大辽' and pos = "+
                    "(select pos from t_qqsh_gz where country in (select DISTINCT diguo from t_qqsh_gz where country = '大辽' and date = '"
                    + cbox_date.Text + "' order by country asc) and date = '"+ cbox_date.Text + "' and bp_id in ('14733','164688','104324'))";
                DataTable dt = mysql.ExecuteDataTable("t_qqsh_sc", sql);
                string dabao_name = dt.Rows[0][0].ToString().Trim();

                bak_info = bak_info + dabao_name + Environment.NewLine;


                sql = "select bp_name from t_qqsh_gz where date = '" + cbox_date.Text +
                    "' and country = '大辽' and pos in " +
                    "(select pos from t_qqsh_gz where country in (select DISTINCT diguo from t_qqsh_gz where country = '大辽' and date = '"
                    + cbox_date.Text + "' order by country asc) and date = '" + cbox_date.Text +
                    "' and bp_id in ('243263','97683','34874','10022', '198146', '49056', '65657'))";
                dt = mysql.ExecuteDataTable("t_qqsh_sc", sql);
                bak_info = bak_info + "中包：";
                for (int i = 0; i < dt.Rows.Count; i++)
                {
                    string zhongbao = dt.Rows[i][0].ToString().Trim();
                    bak_info = bak_info + zhongbao + ' ';
                }

                Clipboard.SetText(bak_info);
                label6.Text = "已复制：" + bak_info;
            }
            catch (Exception ex)
            {

            }

            finally
            {
                if (is_have_open_mysql)
                {
                    mysql.Dispose();//关闭数据库连接
                }
            }
        }

        private void cbox_date_SelectedIndexChanged(object sender, EventArgs e)
        {
            bool is_have_open_mysql = false; //每个函数加一个开关，是否打开过数据库，开了就要自己关闭
            try
            {
                if (mysql == null || mysql.m_AlreadyDispose)
                {
                    is_have_open_mysql = true;
                    mysql = new Mysql(Mysql.connectstring);//打开数据库连接
                }

                string sql = "select * from t_qqsh_gz where country = '大辽'  and pos = '1'  and date = '" + cbox_date.Text + "'";

                comboBox1.Text = "大辽";
                DataTable dt = mysql.ExecuteDataTable("t_qqsh_gz", sql);
                comboBox2.Text = dt.Rows[0][6].ToString().Trim();

                string secord = "大金";
                if(comboBox2.Text == "大金")
                {
                    secord = "大宋";
                }
                else if (comboBox2.Text == "蒙古")
                {
                    secord = "大宋";
                }
                sql = "select * from t_qqsh_gz where country = '"+ secord + "'  and pos = '1'  and date = '" + cbox_date.Text + "'";
                comboBox3.Text = secord;
                dt = mysql.ExecuteDataTable("t_qqsh_gz", sql);
                comboBox4.Text = dt.Rows[0][6].ToString().Trim();
            }
            catch (Exception ex)
            {

            }

            finally
            {
                if (is_have_open_mysql)
                {
                    mysql.Dispose();//关闭数据库连接
                }
            }
        }

        private void btn_build_Click(object sender, EventArgs e)
        {
            bool is_have_open_mysql = false; //每个函数加一个开关，是否打开过数据库，开了就要自己关闭
            try
            {
                label6.Text = "";
                if (mysql == null || mysql.m_AlreadyDispose)
                {
                    is_have_open_mysql = true;
                    mysql = new Mysql(Mysql.connectstring);//打开数据库连接
                }

                string sql = "select * from t_qqsh_sc where qq = '" + tbox_qq.Text + "'  and sc_id = '" + tbox_scid.Text + "'";
                DataTable dt = mysql.ExecuteDataTable("t_qqsh_sc", sql);

                uint sc_id = uint.Parse(tbox_scid.Text);
                uint sc_pos = uint.Parse(dt.Rows[0][3].ToString());
                string nickname = dt.Rows[0][1].ToString().Trim();
                uint zhanli = uint.Parse(dt.Rows[0][7].ToString());
                string bak_info = nickname +"-"+ (zhanli / 10000).ToString() + "w";
                string jiaoben =
                "{\"tips\":\"我的脚本\",\"list\":[" + Environment.NewLine +
                "{\"cmd\":\"6412\",\"id\":\"" + sc_id + "\",\"num\":\""+ sc_pos + "\",\"temp1\":\""+ tbox_qq.Text 
                    + "\",\"temp2\":\"0\", \"name\":\""+ bak_info + "\", \"flag\":\"1\" }," + Environment.NewLine +
                "]}";

                Clipboard.SetText(jiaoben);
                label6.Text = "已复制：" + bak_info;
            }
            catch (Exception ex)
            {

            }

            finally
            {
                if (is_have_open_mysql)
                {
                    mysql.Dispose();//关闭数据库连接
                }
            }
        }

       
    }
}
