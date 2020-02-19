using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Drawing;
using System.Data;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Text.RegularExpressions;

namespace cotool.game
{
    public partial class Form_zs : UserControl
    {
        string db_tablename = "t_yaoyao";
        Mysql mysql = null; //数据库连接
        DataTable db_table = new DataTable();//建立个数据表

        public Form_zs()
        {
            InitializeComponent();
        }

        private void Form_zs_Load(object sender, EventArgs e)
        {
            int total_width = 0;
            //对于DataGridView的每一个列都调整
            for (int i = 0; i < this.dgv_yaoyao.Columns.Count; i++)
            {
                //将每一列都调整为自动适应模式
                this.dgv_yaoyao.AutoResizeColumn(i, DataGridViewAutoSizeColumnMode.AllCells);
                //记录整个DataGridView的宽度
                total_width += this.dgv_yaoyao.Columns[i].Width;
            }
            //判断调整后的宽度与原来设定的宽度的关系，如果是调整后的宽度大于原来设定的宽度，
            //则将DataGridView的列自动调整模式设置为显示的列即可，
            //如果是小于原来设定的宽度，将模式改为填充。
            if (total_width > this.dgv_yaoyao.Size.Width)
            {
                this.dgv_yaoyao.AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode.DisplayedCells;
            }
            else
            {
                this.dgv_yaoyao.AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode.Fill;
            }
            //总长度为489
            this.dgv_yaoyao.Columns[2].Width = 50;
            this.dgv_yaoyao.Columns[3].Width = 30;
            this.dgv_yaoyao.Columns[4].Width = 25;
            this.dgv_yaoyao.Columns[5].Width = 25;
            this.dgv_yaoyao.Columns[7].Width = 360;
        }

        void InsertData()
        {
            try
            {
                mysql = new Mysql(Mysql.connectstring);
                
                for (int i = 0; i < dgv_yaoyao.Rows.Count; i++)
                {
                    // "'2', '2', '十命换一飞', '是', 'B', null, '1', '和3号'";
                    string param = "'" + dgv_yaoyao.Rows[i].Cells[0].Value.ToString() + "'"; 
                    for (int j = 1; j < dgv_yaoyao.Columns.Count; j++)
                    {
                        param += ",'" + dgv_yaoyao.Rows[i].Cells[j].Value.ToString() + "'";
                    }
                    string sql = "INSERT INTO `"+ db_tablename + "` VALUES (" + param + ")";
                    mysql.ExecuteNonQuery(sql);
                }
            }
            catch (Exception ex)
            {
                MessageBox.Show(ex.Message);
            }
            finally
            {
                mysql.Dispose();
            }
        }

        void  get_db_max_id(ref int max_id, string id_type)
        {
            mysql = new Mysql(Mysql.connectstring);

            string sql = "select max("+ id_type + ") from " + db_tablename;
            try
            {
                db_table = mysql.ExecuteDataTable(db_tablename, sql);
                if (db_table == null) return;
                if (db_table.Rows.Count <= 0)
                {
                    db_table = null;
                    return;
                }
                for (int i = 0; i < db_table.Rows.Count; i++)
                {
                    max_id = Int32.Parse(db_table.Rows[i][0].ToString().Trim());
                }

            }
            catch (Exception ex)
            {
                MessageBox.Show(ex.Message);
            }
            finally
            {
                mysql.Dispose();
            }
        }

        private void btn_input_Click(object sender, EventArgs e)
        {
            //先提取9个玩家ID到datagrim列
            dgv_yaoyao.Rows.Clear();

            int tb_id = 0;
            int game_id = 0;//没有记录的话都是返回null，也不报错，没关系,初始为0就好了
            get_db_max_id(ref tb_id, "tb_id");
            get_db_max_id(ref game_id, "game_id");

            List<string> list = new List<string>();
            //删除多行文本中空格行
            tb_playlist.Lines = tb_playlist.Text.Split(new char[] { '\r', '\n' }, StringSplitOptions.RemoveEmptyEntries);

            list.AddRange(tb_playlist.Lines.ToList());

            for (int i = 0; i < list.Count; i++)
            {
                dgv_yaoyao.Rows.Add();
                dgv_yaoyao.Rows[i].Cells["tb_id"].Value = tb_id + i +1;
                dgv_yaoyao.Rows[i].Cells["main_id"].Value = tb_id + i +1;
                dgv_yaoyao.Rows[i].Cells["game_id"].Value = game_id +1;
                dgv_yaoyao.Rows[i].Cells["ID"].Value = list[i];
                dgv_yaoyao.Rows[i].Cells["tubi"].Value = "是";
                dgv_yaoyao.Rows[i].Cells["level"].Value = "B";
                dgv_yaoyao.Rows[i].Cells["score"].Value = "800";
            }
            if(dgv_yaoyao.Rows.Count > 9)
            {
                dgv_yaoyao.Rows.Remove(dgv_yaoyao.Rows[9]);
            }
        }

        private void btn_submit_Click(object sender, EventArgs e)
        {
            int selectedRowIndex = -1;
            //遍历哪个选中了焦点
            for (int i = 0; i <  dgv_yaoyao.Rows.Count; i++)
            {
                for(int j = 0; j < dgv_yaoyao.ColumnCount; j++)
                {
                    if (dgv_yaoyao.Rows[i].Cells[j].Selected == true)
                    {
                        selectedRowIndex = i;
                        break;
                    }
                }
                if(dgv_yaoyao.Rows[i].Selected == true || selectedRowIndex >= 0)
                {
                    selectedRowIndex = i;
                    break;
                }
            }
            if(selectedRowIndex < 0)
            {
                MessageBox.Show("提示", "先选中记录行");
                return;
            }
            dgv_yaoyao.Rows[selectedRowIndex].Cells["desc"].Value = tb_desc.Text;
        }

        private void btn_save_Click(object sender, EventArgs e)
        {
            InsertData();
            MessageBox.Show("提示", "数据库保存成功！");
        }

        private void btn_search_Click(object sender, EventArgs e)
        {
            dgv_yaoyao.Rows.Clear();
            mysql = new Mysql(Mysql.connectstring);

            string sql = "select * from "+ db_tablename + " where 11id like '%" + tbx_id.Text.Trim() + "%'";
            try
            {
                db_table = mysql.ExecuteDataTable(db_tablename, sql);
                if (db_table == null) return;
                if (db_table.Rows.Count <= 0)
                {
                    db_table = null;
                    MessageBox.Show("提示", "没有该玩家记录信息！");
                    return;
                }
                for (int i = 0; i < db_table.Rows.Count; i++)
                {
                    int colms = 0;
                    dgv_yaoyao.Rows.Add();
                    dgv_yaoyao.Rows[i].Cells["tb_id"].Value = db_table.Rows[i][colms++].ToString().Trim();
                    dgv_yaoyao.Rows[i].Cells["main_id"].Value = db_table.Rows[i][colms++].ToString().Trim();
                    dgv_yaoyao.Rows[i].Cells["ID"].Value = db_table.Rows[i][colms++].ToString().Trim();
                    dgv_yaoyao.Rows[i].Cells["tubi"].Value = db_table.Rows[i][colms++].ToString().Trim();
                    dgv_yaoyao.Rows[i].Cells["level"].Value = db_table.Rows[i][colms++].ToString().Trim();
                    dgv_yaoyao.Rows[i].Cells["score"].Value = db_table.Rows[i][colms++].ToString().Trim();
                    dgv_yaoyao.Rows[i].Cells["game_id"].Value = db_table.Rows[i][colms++].ToString().Trim();
                    dgv_yaoyao.Rows[i].Cells["desc"].Value = db_table.Rows[i][colms++].ToString().Trim();
                }

                if (dgv_yaoyao.Rows.Count > db_table.Rows.Count)
                {
                    dgv_yaoyao.Rows.Remove(dgv_yaoyao.Rows[db_table.Rows.Count]);
                }

            }
            catch (Exception ex)
            {
                MessageBox.Show(ex.Message);
            }
            finally
            {
                mysql.Dispose();
            }
        }
    }
}
