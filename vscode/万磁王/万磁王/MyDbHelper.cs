using System;
using System.Collections.Generic;
using System.Text;
using System.Data;
using System.Configuration;
using System.Data.OleDb;
namespace 备份表程序
{
    class MyDbHelper
    {
        public static string connectstring_cardqs = "Provider=MSDAORA.1;Password=cardqs;User ID=cardqs;Data Source=CARDQS_159.1.1.9;Persist Security Info=True";
        public static string connectstring_cardqs_bftb = "Provider=MSDAORA.1;Password=bftb;User ID=bftb;Data Source=CARDQS_159.1.1.9;Persist Security Info=True";
        public static string connectstring_prec = "Provider=MSDAORA.1;Password=prec;User ID=prec;Data Source=CUST_159.1.1.8;Persist Security Info=True";
        #region private
        private bool m_AlreadyDispose = false;
        private int m_CommandTimeout = 0;
        private string m_ConnStr;
        //private SqlConnection m_Connection;
        //private OleDbCommand m_Command;
        private OleDbConnection m_Connection;
        private OleDbCommand m_Command;
        #endregion

        #region 属性
        /// <summary>
        /// 数据库连接字符串
        /// </summary>
        public string ConnStr
        {
            set { m_ConnStr = value; }
            get { return m_ConnStr; }
        }
        /// <summary>
        /// 执行时间
        /// </summary>
        public int CommandTimeout
        {
            set { m_CommandTimeout = value; }
            get { return m_CommandTimeout; }
        }
        #endregion

        #region MyDbHelper
        /*
        public MyDbHelper()
        {
            //
            // TODO: 在此处添加构造函数逻辑
            //
        }*/
        /// <summary>
        /// 构造函数
        /// </summary>
        /// <param name="connStr">数据库连接字符串</param>
        public MyDbHelper(string connStr)
        {
            m_ConnStr = connStr;
            Initialization();
        }
        /// <summary>
        /// 构造函数
        /// </summary>
        /// <param name="connStr">数据库连接字符串</param>
        /// <param name="commandTimeout">执行时间</param>
        public MyDbHelper(string connStr, int commandTimeout)
        {
            m_ConnStr = connStr;
            m_CommandTimeout = commandTimeout;
            Initialization();
        }
        /// <summary>
        /// 初始化函数
        /// </summary>
        protected void Initialization()
        {
            try
            {
                m_Connection = new OleDbConnection(m_ConnStr);
                if (m_Connection.State == ConnectionState.Closed)
                    m_Connection.Open();
                m_Command = new OleDbCommand();
            }
            catch (Exception ex)
            {
                throw new Exception(ex.Message.ToString());
            }
        }
        #endregion
        #region Dispose
        /// <summary>
        /// 析构函数
        /// </summary>
        ~MyDbHelper()
        {
            Dispose();
        }
        /// <summary>
        ///　释放资源
        /// </summary>
        /// <param name="isDisposing">标志</param>
        protected virtual void Dispose(bool isDisposing)
        {
            if (m_AlreadyDispose) return;
            if (isDisposing)
            {
                if (m_Command != null)
                {
                    try
                    {
                        m_Command.Cancel();
                        m_Command.Dispose();
                    }
                    catch (Exception)
                    {
                        //throw new Exception(ex.ToString());
                    }
                }
                if (m_Connection != null)
                {
                    try
                    {
                        if (m_Connection.State != ConnectionState.Closed)
                            m_Connection.Close();
                        m_Connection.Dispose();
                    }
                    catch (Exception )
                    {
                        //throw new Exception(ex.ToString());
                    }
                    finally
                    {
                        m_Connection = null;
                    }
                }
            }
            m_AlreadyDispose = true;//已经进行的处理
        }
        /// <summary>
        /// 释放资源
        /// </summary>
        public void Dispose()
        {
            Dispose(true);
            GC.SuppressFinalize(this);
        }
        #endregion
        #region
    #endregion
        #region ExecuteNonQuery
        public int ExecuteNonQuery(string cmdText)
        {
            try
            {
                m_Command = new OleDbCommand(cmdText, m_Connection);
                m_Command.CommandTimeout = m_CommandTimeout;
                int iRet = m_Command.ExecuteNonQuery();
                return iRet;
            }
            catch (Exception ex)
            {
                //Loger.Debug(ex.ToString(),@"C:sql.txt");
                throw new Exception(ex.ToString());
            }
            finally
            {
                if (m_Command != null)
                    m_Command.Dispose();
            }
        }
        public int ExecuteNonQuery(string cmdText, OleDbParameter[] para)
        {
            if (para == null)
            {
                return ExecuteNonQuery(cmdText);
            }
            try
            {
                m_Command = new OleDbCommand(cmdText, m_Connection);
                m_Command.CommandTimeout = m_CommandTimeout;
                for (int i = 0; i < para.Length; i++)
                    m_Command.Parameters.Add(para[i]);
                int iRet = m_Command.ExecuteNonQuery();
                for (int i = 0; i < para.Length; i++)
                    if (m_Command.Parameters[i].Direction == ParameterDirection.Output) {
                        para[i].Value = m_Command.Parameters[i].Value ;
                    }
                return iRet;
            }
            catch (Exception ex)
            {
                //Loger.Debug(ex.ToString(), @"C:sql.txt");
                throw new Exception(ex.ToString());
            }
            finally
            {
                if (m_Command != null)
                    m_Command.Dispose();
                m_Command.Parameters.Clear();
            }
        }
        public OleDbCommand GetCommander(string cmdText, OleDbParameter[] para)
        {
            try
            {
                m_Command = new OleDbCommand(cmdText, m_Connection);
                m_Command.CommandTimeout = m_CommandTimeout;
                for (int i = 0; i < para.Length; i++)
                    m_Command.Parameters.Add(para[i]);
                return m_Command;
            }
            catch (Exception ex)
            {
                MyLog.Log("3", "GetCommander 发生异常：" + ex.ToString());
                //throw new Exception(ex.ToString());
            }
            return null;
        }
        public int ExecuteNonQuery(string cmdText, OleDbParameter[] para, bool isStoreProdure)
        {
            if (!isStoreProdure)
            {
                return ExecuteNonQuery(cmdText, para);
            }
            try
            {
                m_Command = new OleDbCommand(cmdText, m_Connection);
                m_Command.CommandTimeout = m_CommandTimeout;
                m_Command.CommandType = CommandType.StoredProcedure;
                if (para != null)
                {
                    for (int i = 0; i < para.Length; i++)
                        m_Command.Parameters.Add(para[i]);
                }
                int iRet = m_Command.ExecuteNonQuery();
                if (para != null)
                {
                    for (int i = 0; i < para.Length; i++)
                        if (m_Command.Parameters[i].Direction == ParameterDirection.Output)
                        {
                            para[i].Value = m_Command.Parameters[i].Value;
                        }
                }
                return iRet;
            }
            catch (Exception ex)
            {
                //Loger.Debug(ex.ToString(), @"C:sql.txt");
                throw new Exception(ex.ToString());
            }
            finally
            {
                if (m_Command != null)
                    m_Command.Dispose();
                m_Command.Parameters.Clear();
            }
        }
        #endregion
        #region ExecuteTransaction
        public bool ExecuteTransaction(string[] cmdText)
        {                
            OleDbTransaction trans = m_Connection.BeginTransaction();
            try
            {
                m_Command = new OleDbCommand();
                m_Command.Connection = m_Connection;
                m_Command.CommandTimeout = m_CommandTimeout;
                m_Command.Transaction = trans;
                for (int i = 0; i < cmdText.Length; i++)
                {
                    if (cmdText[i] != null && cmdText[i] != string.Empty)
                    {
                        m_Command.CommandText = cmdText[i];
                        m_Command.ExecuteNonQuery();
                    }
                }
                trans.Commit();
                return true;
            }
            catch (Exception ex)
            {
                trans.Rollback();
                throw new Exception(ex.ToString());
            }
            finally
            {
                if (m_Command != null)
                    m_Command.Dispose();
                trans.Dispose();
            }
        }
        public bool ExecuteTransaction(string[] cmdText, OleDbParameter[] para)
        {
            if (para == null)
                return ExecuteTransaction(cmdText);
            OleDbTransaction trans = m_Connection.BeginTransaction();
            try
            {
                m_Command = new OleDbCommand();
                m_Command.Connection = m_Connection;
                m_Command.CommandTimeout = m_CommandTimeout;
                m_Command.Transaction = trans;
                for (int i = 0; i < para.Length; i++)
                    m_Command.Parameters.Add(para[i]);
                for (int i = 0; i < cmdText.Length; i++)
                {
                    if (cmdText[i] != null && cmdText[i] != string.Empty)
                    {
                        m_Command.CommandText = cmdText[i];
                        m_Command.ExecuteNonQuery();
                    }
                }
                trans.Commit();
                return true;
            }
            catch (Exception ex)
            {
                trans.Rollback();
                throw new Exception(ex.ToString());
            }
            finally
            {
                if (m_Command != null)
                    m_Command.Dispose();
                trans.Dispose();
            }
        }
        #endregion
        #region ExecuteScalar
        public object ExecuteScalar(string cmdText)
        {
            try
            {
                m_Command = new OleDbCommand(cmdText, m_Connection);
                m_Command.CommandTimeout = m_CommandTimeout;
                object obj = m_Command.ExecuteScalar();
                if (object.Equals(obj, null) || object.Equals(obj, DBNull.Value))
                {
                    obj = null;
                }
                return obj;
            }
            catch (Exception ex)
            {
                throw new Exception(ex.ToString());
            }
            finally
            {
                if (m_Command != null)
                    m_Command.Dispose();
            }
        }
        public object ExecuteScalar(string cmdText, OleDbParameter[] para)
        {
            if (para == null)
                return ExecuteScalar(cmdText);
            try
            {
                m_Command = new OleDbCommand(cmdText, m_Connection);
                m_Command.CommandTimeout = m_CommandTimeout;
                for (int i = 0; i < para.Length; i++)
                    m_Command.Parameters.Add(para[i]);
                object obj = m_Command.ExecuteScalar();
                if (object.Equals(obj, null) || object.Equals(obj, DBNull.Value))
                    obj = null;
                return obj;
            }
            catch (Exception ex)
            {
                throw new Exception(ex.ToString());
            }
            finally
            {
                if (m_Command != null)
                    m_Command.Dispose();
                m_Command.Parameters.Clear();
            }
        }
        public object ExecuteScalar(string cmdText, OleDbParameter[] para, bool isStoreProdure)
        {
            if (!isStoreProdure)
                return ExecuteScalar(cmdText, para);
            try
            {
                m_Command = new OleDbCommand(cmdText, m_Connection);
                m_Command.CommandTimeout = m_CommandTimeout;
                m_Command.CommandType = CommandType.StoredProcedure;
                if (para != null)
                    for (int i = 0; i < para.Length; i++)
                        m_Command.Parameters.Add(para[i]);
                object obj = m_Command.ExecuteScalar();
                if (object.Equals(obj, null) || object.Equals(obj, DBNull.Value))
                    obj = null;
                return obj;
            }
            catch (Exception ex)
            {
                throw new Exception(ex.ToString());
            }
            finally
            {
                if (m_Command != null)
                {
                    m_Command.Dispose();
                }
                m_Command.Parameters.Clear();
            }
        }
        #endregion
        #region ExecuteDataTable
        public DataTable ExecuteDataTable(string tableName, string cmdText)
        {
            try
            {
                DataTable myTable = new DataTable(tableName);
                m_Command = new OleDbCommand(cmdText, m_Connection);
                m_Command.CommandTimeout = m_CommandTimeout;
                OleDbDataAdapter da = new OleDbDataAdapter(m_Command); 
                da.Fill(myTable);
                da.Dispose();
                return myTable;
            }
            catch (Exception ex)
            {
                throw new Exception(ex.ToString());
            }
            finally
            {
                if (m_Command != null)
                    m_Command.Dispose();
            }
        }
        public DataTable ExecuteDataTable(string tableName, string cmdText, OleDbParameter[] para)
        {
            if (para == null)
                return ExecuteDataTable(tableName, cmdText);
            try
            {
                DataTable myTable = new DataTable(tableName);
                m_Command = new OleDbCommand(cmdText, m_Connection);
                m_Command.CommandTimeout = m_CommandTimeout;
                for (int i = 0; i < para.Length; i++)
                    m_Command.Parameters.Add(para[i]);
                OleDbDataAdapter da = new OleDbDataAdapter(m_Command);
                da.Fill(myTable);
                da.Dispose();
                return myTable;
            }
            catch (Exception ex)
            {
                //Loger.Debug(ex.ToString(), @"C:sql.txt");
                throw new Exception(ex.ToString());
            }
            finally
            {
                if (m_Command != null)
                    m_Command.Dispose();
                m_Command.Parameters.Clear();
            }
        }
        public DataTable ExecuteDataTable(string tableName, string cmdText, OleDbParameter[] para, bool isStoreProdure)
        {
            if (!isStoreProdure)
            {
                return ExecuteDataTable(tableName, cmdText, para);
            }
            try
            {
                DataTable myTable = new DataTable(tableName);
                m_Command = new OleDbCommand(cmdText, m_Connection);
                m_Command.CommandTimeout = m_CommandTimeout;
                m_Command.CommandType = CommandType.StoredProcedure;
                if (para != null)
                    for (int i = 0; i < para.Length; i++)
                        m_Command.Parameters.Add(para[i]);
                OleDbDataAdapter da = new OleDbDataAdapter(m_Command);
                da.Fill(myTable);
                da.Dispose();
                return myTable;
            }
            catch (Exception ex)
            {
                throw new Exception(ex.ToString());
            }
            finally
            {
                if (m_Command != null)
                    m_Command.Dispose();
                m_Command.Parameters.Clear();
            }

        }
        #endregion
        #region ExecuteDataReader
        public OleDbDataReader ExecuteDataReader(string cmdText)
        {
            try
            {
                m_Command = new OleDbCommand(cmdText, m_Connection);
                m_Command.CommandTimeout = m_CommandTimeout;
                OleDbDataReader reader = m_Command.ExecuteReader();
                return reader;
            }
            catch (Exception ex)
            {
                throw new Exception(ex.ToString());
            }
            finally
            {
                if (m_Command != null)
                    m_Command.Dispose();
            }
        }
        public OleDbDataReader ExecuteDataReader(string cmdText, OleDbParameter[] para)
        {
            if (para == null)
            {
                return ExecuteDataReader(cmdText);
            }
            try
            {
                m_Command = new OleDbCommand(cmdText, m_Connection);
                m_Command.CommandTimeout = m_CommandTimeout;
                for (int i = 0; i < para.Length; i++)
                    m_Command.Parameters.Add(para[i]);
                OleDbDataReader reader = m_Command.ExecuteReader();
                return reader;
            }
            catch (Exception ex)
            {
                throw new Exception(ex.ToString());
            }
            finally
            {
                if (m_Command != null)
                    m_Command.Dispose();
                m_Command.Parameters.Clear();
            }
        }
        public OleDbDataReader ExecuteDataReader(string cmdText, OleDbParameter[] para, bool isStoreProdure)
        {
            if (!isStoreProdure)
            {
                return ExecuteDataReader(cmdText, para);
            }
            try
            {
                m_Command = new OleDbCommand(cmdText, m_Connection);
                m_Command.CommandTimeout = m_CommandTimeout;
                m_Command.CommandType = CommandType.StoredProcedure;
                if (para != null)
                    for (int i = 0; i < para.Length; i++)
                        m_Command.Parameters.Add(para[i]);
                OleDbDataReader reader = m_Command.ExecuteReader();
                return reader;
            }
            catch (Exception ex)
            {
                throw new Exception(ex.ToString());
            }
            finally
            {
                if (m_Command != null)
                    m_Command.Dispose();
                m_Command.Parameters.Clear();
            }
        }
        #endregion
        #region　Static
        public static OleDbParameter MakeInParam(string paraName, OleDbType paraType, object value)
        {
            OleDbParameter para = new OleDbParameter(paraName, paraType);
            if (Object.Equals(value, null) || Object.Equals(value, DBNull.Value) || value.ToString().Trim() == string.Empty)
                para.Value = DBNull.Value;
            else
                para.Value = value;
            para.Direction = ParameterDirection.Input;
            return para;
        }
        public static OleDbParameter MakeInParam(string paraName, OleDbType paraType, int len, object value)
        {
            OleDbParameter para = new OleDbParameter(paraName, paraType, len);
            if (Object.Equals(value, null) || Object.Equals(value, DBNull.Value) || value.ToString().Trim() == string.Empty)
                para.Value = DBNull.Value;
            else
                para.Value = value;
            para.Direction = ParameterDirection.Input;
            return para;
        }
        public static OleDbParameter MakeInParam(string paraName, OleDbType paraType, int len, object value, byte precision,byte scale)
        {
            OleDbParameter para = new OleDbParameter(paraName, paraType, len);
            if (Object.Equals(value, null) || Object.Equals(value, DBNull.Value) || value.ToString().Trim() == string.Empty)
                para.Value = DBNull.Value;
            else
                para.Value = value;
            para.Direction = ParameterDirection.Input;
            para.Precision = precision;
            para.Scale = scale;
            return para;
        }
        public static OleDbParameter MakeOutParam(string paraName, OleDbType paraType, object value)
        {
            OleDbParameter para = new OleDbParameter(paraName, paraType);
            if (Object.Equals(value, null) || Object.Equals(value, DBNull.Value) || value.ToString().Trim() == string.Empty)
                para.Value = DBNull.Value;
            else
                para.Value = value;
            para.Direction = ParameterDirection.Output ;
            return para;
        }
        public static OleDbParameter MakeOutParam(string paraName, OleDbType paraType, int len, object value)
        {
            OleDbParameter para = new OleDbParameter(paraName, paraType, len);
            if (Object.Equals(value, null) || Object.Equals(value, DBNull.Value) || value.ToString().Trim() == string.Empty)
                para.Value = DBNull.Value;
            else
                para.Value = value;
            para.Direction = ParameterDirection.Output;
            return para;
        }

        #endregion
    }
}
