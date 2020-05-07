using System;
using System.Text;
using System.Windows.Forms;
using System.IO;

namespace cotool
{
    class MyLog
    {
        public static string logfilepath = Application.StartupPath + "\\cotool.log";


        public static void DbLog(string table, string erreason)
        {
            string sql; //DateTime.Now.ToString("YYYYmmddHHMMSS.FFF");
            sql = "insert into LOG_bf(ERRDATETIME,ERRREASON,relatetable) values('";
            sql += DateTime.Now.ToString("yyyyMMddHHmmss.FFF") + "','";
            sql += erreason + "','";
            sql += table + "')";
            try
            {
                MyDbHelper DbHelper = new MyDbHelper(MyDbHelper.connectstring_cardqs);
                DbHelper.ExecuteNonQuery(sql);

            }
            catch (Exception ex)
            {
                Log("3", "连接数据库插入日志异常：" + ex.Message);
                //MessageBox.Show(ex.Message);
            }
        }

        public static bool Log(string level, string log)
        {
            StreamWriter sw;
            try
            {
                sw = new StreamWriter(logfilepath, true, Encoding.Default);
                sw.WriteLine(DateTime.Now.ToString("[yyyyMMddHHmmss.FFF][") + level + "]" + log);
                sw.Close();
            }
            catch (Exception)
            {
                return false;
            }
            return true;
        }
    }
}
