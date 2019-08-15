using System;
using System.Collections.Generic;
using System.Data.OleDb;
using System.IO;
using System.Runtime.InteropServices;//读写INI文件时用到
using System.Text;
using System.Reflection;
using System.Data;

namespace 备份表程序.report
{
    class reflow_control
    {
        public const string FILE_NAME = "C:\\Windows\\report.ini";
        Excel.Application excelApp = new Excel.Application();
        MyDbHelper DbHelper = null;


        #region --调用API
        //读写INI文件时需要导入的文件
        [DllImport("kernel32")]
        private static extern int WritePrivateProfileString(string section, string key, string val, string filepath);
        [DllImport("kernel32")]
        private static extern int GetPrivateProfileString(string section, string key, string def, StringBuilder retval, int size, string filepath);
        #endregion

        public bool WriteExcelFile(string sReportName, string sTableName, string sSheetName, string date1, string date2,string constr)
        {
            StringBuilder sAddrModel = new StringBuilder(40);
            StringBuilder sAddrReport = new StringBuilder(40);
            string sFileModel = "";
            string sFileDer = "";
            string colA = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
            char[] colABC = new char[26] { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };
            GetPrivateProfileString("Addr", "AddrModel", "", sAddrModel, sAddrModel.Capacity, FILE_NAME);
            GetPrivateProfileString("Addr", "AddrReport", "", sAddrReport, sAddrReport.Capacity, FILE_NAME);

            sFileModel = sAddrModel.ToString() + sReportName.Trim() + ".xls";
            if (date1.CompareTo(date2) == 0)
                sReportName = sReportName.Trim() + "(" + date1 + ")";
            else
                sReportName = sReportName.Trim() + "(" + date1 +"-"+ date2 + ")";

            sFileDer = sAddrReport.ToString() + sReportName.Trim() + ".xls";
            if (System.IO.File.Exists(sFileModel) == false)
            {
                //MessageBox.Show("模板文件不存在");
                return false;
            }
            if (System.IO.File.Exists(sFileDer) == false)
            {
                //不存在
                System.IO.File.Copy(sFileModel, sFileDer, true);

            }
            else
            {
                //存在
                //System.IO.File.Delete(sFileDer);
                //System.IO.File.Copy(sFileModel,sFileDer,true);
            }
            //从表中把数据导入SHEET中

            string FileName;
            Excel.Workbooks eworkbooks = null;
            Excel._Workbook eworkbook = null;
            Excel.Sheets esheets = null;
            Excel._Worksheet esheet = null;
            Excel.Range range = null;
            excelApp.Visible = false;
            excelApp.UserControl = true;
            //用Excel应用程序创建Workbooks
            eworkbooks = excelApp.Workbooks;
            FileName = sFileDer;
            eworkbooks.Open(FileName, Missing.Value, Missing.Value, Missing.Value, Missing.Value, Missing.Value,
                Missing.Value, Missing.Value, Missing.Value, Missing.Value, Missing.Value, Missing.Value, Missing.Value,
                Missing.Value, Missing.Value);
            //用Workbooks创建Workbook
            eworkbook = eworkbooks.get_Item(1);
            //用Workbook创建sheets
            esheets = eworkbook.Worksheets;
            int iSheetNumber = esheets.Count;
            int index = 0;
            for (int i = 1; i <= iSheetNumber; i++)
            {
                esheet = (Excel._Worksheet)esheets.get_Item(i);

                if (esheet.Name.Trim() == sSheetName.Trim())
                {
                    index++;
                    break;
                }
            }
            if (index == 0)
            {
                esheet = null;
                //没有找到相应的SHEET页
            }
            else
            {
                DataTable dt=CreateDataSet(sTableName.Trim(),constr);
                int _rows = dt.Rows.Count;
                int _cols = dt.Columns.Count;
                int j = 4;
                object[] date = new object[4];
                date[0] = "日期:";
                date[1] = date1;
                date[2] = "至";
                date[3] = date2;
                range = esheet.get_Range("A" + 2, "D" + 2);
                range.set_Value(Missing.Value, date);
                date = null;
                for (int i = 0; i < _rows; i++)
                {
                    j = i + 5;//指定从哪一行开始写入数据
                    object[] currentRow = new object[_cols];
                    currentRow = dt.Rows[i].ItemArray;
                    range = esheet.get_Range("A" + j, colA.Substring(_cols - 1, 1) + j);

                    range.set_Value(Missing.Value, currentRow);
                    currentRow = null;
                }
            }
            eworkbook.Save();
            range = null;
            eworkbook = null;
            esheet = null;
            esheets = null;
            eworkbooks.Close();
            return true;

        }
        private DataTable CreateDataSet(string sTable,string constr)
        {
            DataTable table = null;
            try
            {
                DbHelper = new MyDbHelper(constr);
                string strsql = "select * from " + sTable + "";
                table = DbHelper.ExecuteDataTable(sTable, strsql);
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
            return table;
        }

		public void RunProcedure(string sProcName,string beginDate,string endDate,string constr)
		{
            try
            {
                MyDbHelper DbHelper = new MyDbHelper(constr);
                OleDbParameter[] sqlparam = new OleDbParameter[3];
                sqlparam[0] = MyDbHelper.MakeInParam("date1", OleDbType.Char, 8, beginDate);
                sqlparam[1] = MyDbHelper.MakeInParam("date2", OleDbType.Char, 8, endDate);
                sqlparam[2] = MyDbHelper.MakeOutParam("ret", OleDbType.Char, 200, null);
                DbHelper.ExecuteNonQuery(sProcName.Trim(), sqlparam, true);
            }
            catch (Exception ex)
            {
                MyLog.Log("3", "执行双日期" + sProcName + "存储过程流程时发生异常：" + ex.Message);
            }
            finally
            {
                if (DbHelper != null)
                {
                    DbHelper.Dispose();//新加的
                }
            }
		}
        public void RunProcedure_one(string sProcName, string ddate)
        {
            try
            {
                MyDbHelper DbHelper = new MyDbHelper(MyDbHelper.connectstring_cardqs);
                OleDbParameter[] sqlparam = new OleDbParameter[2];
                sqlparam[0] = MyDbHelper.MakeInParam("ddate", OleDbType.Char, 8, ddate);
                sqlparam[1] = MyDbHelper.MakeOutParam("ret", OleDbType.Char, 200, null);
                DbHelper.ExecuteNonQuery(sProcName.Trim(), sqlparam, true);
            }
            catch (Exception ex)
            {
                MyLog.Log("3", "执行单日期" + sProcName + "存储过程流程时发生异常：" + ex.Message);
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
}
