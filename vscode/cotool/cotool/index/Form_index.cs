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
using MySql.Data.MySqlClient;

namespace cotool.index
{
    public partial class Form_index : UserControl
    {
        public Form_index()
        {
            InitializeComponent();
        }

        string db_tablename = "t_everyday";
        Mysql mysql = null; //数据库连接
        DataTable db_table = new DataTable();//建立个数据表


        void InsertaData_EveryDay()
        {
            int tb_id = 0;//没有记录的话都是返回null，也不报错，没关系,初始为0就好了
            get_db_max_id(ref tb_id, "tb_id");
            tb_id = tb_id + 1;

            System.IO.MemoryStream mstream = new System.IO.MemoryStream();
            rtbox_content.SaveFile(mstream, RichTextBoxStreamType.RichText);
            //将流转换成数组
            byte[] bWrite = mstream.ToArray();

            try
            {
                mysql = new Mysql(Mysql.connectstring);
                MySqlParameter[] para ={
                    Mysql.MakeInParam("@id", MySqlDbType.Int32, tb_id),
                    Mysql.MakeInParam("@date", MySqlDbType.DateTime, DateTime.Now.ToString("yyyy-MM-dd HH:mm:ss")),
                    Mysql.MakeInParam("@main", MySqlDbType.String, rtbox_main.Text),
                    Mysql.MakeInParam("@content", MySqlDbType.String, rtbox_content.Text),
                    Mysql.MakeInParam("@rtf", MySqlDbType.VarBinary, bWrite) };

                string sql = "INSERT INTO `" + db_tablename + "` VALUES (@id, @date, @main,@content,@rtf)";
                MyLog.Log("记录everyday", sql);
                mysql.ExecuteNonQuery(sql, para);
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

        string file_index = "index.txt";
        string file_content = "content.txt";
        private void btn_savetext_Click(object sender, EventArgs e)
        {
            
            if ((System.IO.Path.GetExtension(file_index)).ToLower() == ".txt")
                rtbox_main.SaveFile(file_index, RichTextBoxStreamType.PlainText);
            else
                rtbox_main.SaveFile(file_index);

            if ((System.IO.Path.GetExtension(file_content)).ToLower() == ".txt")
                rtbox_content.SaveFile(file_content, RichTextBoxStreamType.PlainText);
            else
                rtbox_content.SaveFile(file_content);
        }

        private void Form_index_Load(object sender, EventArgs e)
        {
            //设置标题
            if(!File.Exists(file_index))
            {
                rtbox_main.Text = "乐观又不失去对客观环境的平静认知";
                return;
            }
            if ((System.IO.Path.GetExtension(file_index)).ToLower() == ".txt")
                rtbox_main.LoadFile(file_index, RichTextBoxStreamType.PlainText);
            else
                rtbox_main.LoadFile(file_index);

            //设置内容
            if (!File.Exists(file_content))
            {
                return;
            }
            if ((System.IO.Path.GetExtension(file_content)).ToLower() == ".txt")
                rtbox_content.LoadFile(file_content, RichTextBoxStreamType.PlainText);
            else
                rtbox_content.LoadFile(file_content);
        }

        /// <summary>
        /// 这个函数是原封不动的拷贝真三界面的，考虑公用
        /// </summary>
        /// <param name="max_id"></param>
        /// <param name="id_type"></param>
        void get_db_max_id(ref int max_id, string id_type)
        {
            mysql = new Mysql(Mysql.connectstring);

            string sql = "select max(" + id_type + ") from " + db_tablename;
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

        private void btn_load_Click(object sender, EventArgs e)
        {
            int tb_id = 0;//没有记录的话都是返回null，也不报错，没关系,初始为0就好了
            get_db_max_id(ref tb_id, "tb_id");
            mysql = new Mysql(Mysql.connectstring);

            string sql = "select * from " + db_tablename + " where tb_id = " + tb_id.ToString();
            try
            {
                db_table = mysql.ExecuteDataTable(db_tablename, sql);
                if (db_table == null) return;
                if (db_table.Rows.Count <= 0)
                {
                    db_table = null;
                    return;
                }
                rtbox_main.Text = db_table.Rows[0][2].ToString().Trim();

                byte[] bWrite = Encoding.UTF8.GetBytes(db_table.Rows[0][4].ToString());
                //将数组转换成stream
                MemoryStream mstream = new MemoryStream(bWrite, false);
                //将stream填充到RichTextBox
                rtbox_content.LoadFile(mstream, RichTextBoxStreamType.RichText);

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

        private void btn_savedb_Click(object sender, EventArgs e)
        {
            InsertaData_EveryDay();
        }
    }
}
