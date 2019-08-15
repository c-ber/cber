using System;
using System.Collections.Generic;
using System.Text;
using System.Data;
using System.Data.OleDb;
using System.IO;
using System.Windows.Forms;
using System.Text.RegularExpressions;
using System.Threading;
namespace 备份表程序
{
    class BF_TABLE
    {
        public string tablename;//CHAR(20) not null,
        public string insert_sql;//CHAR(500),
        public string insert_num;//number(2),
        public string select_sql;//CHAR(500),
        public string create_sql;//CHAR(500),
        public string drop_sql;//char(20)
        public string table_date;
        public string pre_tablename;
        public string typeflag;
    };
    class BF_DBINFORM
    {
        public string db_connectstring;
        public string dbname;
        public string dbsql;
    }
    class flow_bf
    {
        MyDbHelper DbHelper = null;
        DataTable dtable;
        BF_DBINFORM[] _bf_dbinform = null;

        DataTable dt;
        BF_TABLE[] _bf_table = null;
        string sql = "select db_connectstring,dbname,dbsql from bf_dbinform where useflag='1'";

        public void type_flow()
        {
            try
            {
                bool b;
                DbHelper = new MyDbHelper(MyDbHelper.connectstring_cardqs);
                dtable = DbHelper.ExecuteDataTable("bf_dbinform", sql);
                if (dtable == null) return;
                if (dtable.Rows.Count <= 0)
                {
                    _bf_dbinform = null;
                    return;
                }
                _bf_dbinform = new BF_DBINFORM[dtable.Rows.Count];
                for (int i = 0; i < dtable.Rows.Count; i++)
                {
                    _bf_dbinform[i] = new BF_DBINFORM();
                    _bf_dbinform[i].db_connectstring = dtable.Rows[i][0].ToString().Trim();
                    _bf_dbinform[i].dbname = dtable.Rows[i][1].ToString().Trim();
                    _bf_dbinform[i].dbsql = dtable.Rows[i][2].ToString().Trim();
                    b = GetBF_TABLE(_bf_dbinform[i].dbname, _bf_dbinform[i].db_connectstring, _bf_dbinform[i].dbsql);
                }
            }
            catch (Exception ex)
            {
                MyLog.DbLog("bf_dbinform", "type_flow 发生异常：" + ex.Message);
                MyLog.Log("3", "type_flow 发生异常：" + ex.Message);
                return;
            }
            finally
            {
                if (DbHelper != null)
                {
                    DbHelper.Dispose();//新加的
                }
            }
            return ;
        }

        public bool GetBF_TABLE(string db_name,string db_connectstring,string sql_db)
        {
            try
            {
                DbHelper = new MyDbHelper(MyDbHelper.connectstring_cardqs);
                dt = DbHelper.ExecuteDataTable("bf_table", sql_db);
                if (dt == null) return false;
                if (dt.Rows.Count <= 0)
                {
                    _bf_table = null;
                    return true;
                }
                _bf_table = new BF_TABLE[dt.Rows.Count];
                for (int i = 0; i < dt.Rows.Count; i++)
                {
                    _bf_table[i] = new BF_TABLE();
                    _bf_table[i].tablename = dt.Rows[i][0].ToString().Trim();
                    _bf_table[i].insert_num = dt.Rows[i][1].ToString().Trim();
                    _bf_table[i].insert_sql = dt.Rows[i][2].ToString().Trim();
                    _bf_table[i].select_sql = dt.Rows[i][3].ToString().Trim();
                    _bf_table[i].create_sql = dt.Rows[i][4].ToString().Trim();
                    _bf_table[i].drop_sql   = dt.Rows[i][5].ToString().Trim();
                    _bf_table[i].table_date = dt.Rows[i][6].ToString().Trim();
                    _bf_table[i].pre_tablename = dt.Rows[i][7].ToString().Trim();
                    _bf_table[i].typeflag   = dt.Rows[i][8].ToString().Trim();
                    DropTable(_bf_table[i].drop_sql, _bf_table[i].pre_tablename);//先删除前一个存在的表或者删除已有数据
                    if (Convert.ToInt16(_bf_table[i].typeflag) == 2)
                    {
                        CreateTable(_bf_table[i].create_sql, _bf_table[i].table_date);//创建一个新表
                    }
                    InsertData(_bf_table[i].insert_num, _bf_table[i].insert_sql, _bf_table[i].tablename, _bf_table[i].select_sql, db_connectstring);//查询出数据再插入新表
                    MyLog.Log("0", DateTime.Now.ToString("yyyyMMdd") + _bf_table[i].tablename + "表备份完成");
                }
                MyLog.Log("0", DateTime.Now.ToString("yyyyMMdd")+db_name+"数据库所有表都备份完成");
            }
            catch (Exception ex)
            {
                MyLog.DbLog("bf_table", "GetBF_TABLE 发生异常：" + ex.Message);
                MyLog.Log("3", "GetBF_TABLE 发生异常：" + ex.Message);
                return false;
            }
            finally
            {
                if (DbHelper != null)
                {
                    DbHelper.Dispose();//新加的
                }
            }
            MyLog.Log("0", DateTime.Now.ToString("yyyyMMdd") + "数据库所有表都备份完成");
            return true;
        }
        public void DropTable(string drop_sql,string pre_tablename)
        {
            try
            {
                MyDbHelper DbHelper = new MyDbHelper(MyDbHelper.connectstring_cardqs_bftb);
                int i = Convert.ToInt32(DbHelper.ExecuteScalar("select count(*)  from user_tables where upper(table_name)=upper('" + pre_tablename + "')"));
                if (i == 1) DbHelper.ExecuteNonQuery(drop_sql);
            }
            catch (Exception ex)
            {
                MyLog.DbLog(pre_tablename, "DropTable 发生异常：" + ex.Message);
                MyLog.Log("3", "DropTable 发生异常：" + ex.Message);
            }
            finally
            {
                if (DbHelper != null)
                {
                    DbHelper.Dispose();//新加的
                }
            }
        }
        //public OleDbDataReader GetData(string tablename, string select_sql)
        //{
        //    MyDbHelper DbHelper = new MyDbHelper(MyDbHelper.connectstring_prec);
        //    OleDbDataReader dr;
        //    dr= DbHelper.ExecuteDataReader(select_sql);
        //    return dr;
        //}
        private void CreateTable(string create_sql ,string table_date)
        {
            try
            {
                MyDbHelper DbHelper = new MyDbHelper(MyDbHelper.connectstring_cardqs_bftb);
                int i = Convert.ToInt32(DbHelper.ExecuteScalar("select count(*)  from user_tables where upper(table_name)=upper('" + table_date + "')"));
                if (i == 1) DbHelper.ExecuteNonQuery("drop table " + table_date);
                int ret = DbHelper.ExecuteNonQuery(create_sql);
            }
            catch (Exception ex)
            {
                MyLog.DbLog(table_date, "CreateTable 发生异常：" + ex.Message);
                MyLog.Log("3", "CreateTable 发生异常：" + ex.Message);
            }
            finally
            {
                if (DbHelper != null)
                {
                    DbHelper.Dispose();//新加的
                }
            }
        }
        private void InsertData(string insert_num, string insert_sql, string tablename, string select_sql, string db_connectstring)
        {
            OleDbConnection con = new OleDbConnection(db_connectstring);
            con.Open();
            OleDbCommand comm = new OleDbCommand(select_sql, con);
            OleDbDataReader dbReader = comm.ExecuteReader();
            //dbReader = GetData(tablename, select_sql);
            string comText;
            try
            {
                MyDbHelper DbHelper = new MyDbHelper(MyDbHelper.connectstring_cardqs_bftb);
                while (dbReader.Read())
                {
                    comText =insert_sql;
                    for (int i = 0; i <  int.Parse(insert_num)-1; i++)
                    {
                        comText = comText + "'" + Convert.ToString(dbReader.GetValue(i)).Replace("'","''") + "',";

                    }
                    comText = comText + "'" + Convert.ToString(dbReader.GetValue(int.Parse(insert_num) - 1)) + "')";
                    DbHelper.ExecuteNonQuery(comText);
                } 
            }
            catch (Exception ex)
            {
                MyLog.DbLog(tablename, "插入数据发生异常：" + ex.Message);
                MyLog.Log("3", "插入" + tablename + "数据发生异常：" + ex.Message);
            }
            finally
            {
                if (DbHelper != null)
                {
                    DbHelper.Dispose();//新加的
                }
            }
            comm.Dispose();
            con.Close();
        }
    }
}
