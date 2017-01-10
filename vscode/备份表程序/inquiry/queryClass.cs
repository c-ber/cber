using System;
using System.Collections.Generic;
using System.Text;
using System.IO;
using System.Reflection;
using System.Runtime.InteropServices;//读写INI文件时用到
using System.Data;
using System.Windows.Forms;
using Microsoft.Office.Interop;

namespace 备份表程序.inquiry
{
    class queryClass
    {
        public const string FILE_NAME = "C:\\Windows\\report.ini";
        Excel.Application excelApp = new Excel.Application();
        MyDbHelper DbHelper = null;
        private DataTable tmptable = null;
        #region --调用API
        //读写INI文件时需要导入的文件
        [DllImport("kernel32")]
        private static extern int WritePrivateProfileString(string section, string key, string val, string filepath);
        [DllImport("kernel32")]
        private static extern int GetPrivateProfileString(string section, string key, string def, StringBuilder retval, int size, string filepath);
        #endregion

        public bool WriteExcelFile(string sReportName, string sSheetName, DateTime time1, DateTime time2, DataTable dt)
        {
            string[] date = new string[2];
            date[0] = dealdate(time1);
            date[1] = dealdate(time2);
            StringBuilder sAddrModel = new StringBuilder(40);
            StringBuilder sAddrReport = new StringBuilder(40);
            string sFileModel = "";
            string sFileDer = "";
            string colA = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
            char[] colABC = new char[26] { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };
            GetPrivateProfileString("Addr", "AddrModel", "", sAddrModel, sAddrModel.Capacity, FILE_NAME);
            GetPrivateProfileString("Addr", "AddrReport", "", sAddrReport, sAddrReport.Capacity, FILE_NAME);

            sFileModel = sAddrModel.ToString() + sReportName.Trim() + ".xls";
            if (date[0].CompareTo(date[1]) == 0)
                sReportName = sReportName.Trim() + "(" + date[0] + ")";
            else
                sReportName = sReportName.Trim() + "(" + date[0] + "-" + date[1] + ")";

            sFileDer = sAddrReport.ToString() + sReportName.Trim() + ".xls";
            if (System.IO.File.Exists(sFileModel) == false)
            {
                MyLog.Log("3", "模板文件不存在");
                return false;
            }
            if (System.IO.File.Exists(sFileDer) == false)
            {
                System.IO.File.Copy(sFileModel, sFileDer, true);

            }
            else
            {
                System.IO.File.Delete(sFileDer);
                System.IO.File.Copy(sFileModel,sFileDer,true);
            }
            //从表中把数据导入SHEET中
            #region
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
                esheet = null;//没有找到相应的SHEET页
            }
            else
            {
                int _rows = dt.Rows.Count;
                int _cols = dt.Columns.Count;
                int j = 4;
                object[] date_write = new object[4];
                date_write[0] = "日期:";
                date_write[1] = date[0];
                date_write[2] = "至";
                date_write[3] = date[1];
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
            #endregion//excel写数据处理
            return true;

        }
       
        public DataTable SelectDt(DateTime time1,DateTime time2,string mchtid,string termid)
        {
            string[] date = new string[2];
            date[0] = dealdate(time1);
            date[1] = dealdate(time2);
            string sql = "SELECT rownum 序号,mchtname 商户名称,mchtid 商户号,termid 终端号,settledate 交易日期,transtime 交易时间,tracenbr 流水号,refnbr 参考号,t1.transname 交易类型,actnbr 转出卡号,cardtype 卡性质,amount/100 金额,-mchtfee/100 手续费,amount/100+mchtfee/100 净额 from pos_translog_all t left join cs_transcode t1 on t1.transid = t.transtype where transtype!='S00' and respcode='00' and ";
            if (date[0].CompareTo(date[1]) > 0)
            {
                MessageBox.Show("起始时间不能大于结束时间", "提示");
                return tmptable;
            }
            DbHelper = new MyDbHelper(MyDbHelper.connectstring_cardqs);
            int i = 1;
            int allNum = 0;
            while (date[0].CompareTo(date[1]) <= 0)//循环每天查询
            {//查询语句设置
                if (date[0].CompareTo("") != 0)  sql = sql + "settledate ='" + date[0] + "' and ";
                
                if (termid.CompareTo("") != 0) sql = sql + "termid = '" + termid + "' and ";

                if (mchtid.CompareTo("") != 0) sql = sql + "mchtid ='" + mchtid + "'and ";

                sql = sql + "1=1 order by rownum asc";
                time1 = time1.AddDays(1);
                date[0] = dealdate(time1);
                if (i == 1 && tmptable == null)
                {
                    tmptable = DbHelper.ExecuteDataTable("result", sql);
                }
                else
                {
                    DataTable tmp = DbHelper.ExecuteDataTable("result", sql);
                    tmptable.Merge(tmp);
                }
                i++;
                allNum = tmptable.Rows.Count;
                sql = "SELECT rownum+" + allNum + " 序号, mchtname 商户名称,mchtid 商户号,termid 终端号,settledate 交易日期,transtime 交易时间,tracenbr 流水号,refnbr 参考号,t1.transname 交易类型,actnbr 转出卡号,cardtype 卡性质,amount/100 金额,-mchtfee/100 手续费,amount/100+mchtfee/100 净额 from pos_translog_all t left join cs_transcode t1 on t1.transid = t.transtype where transtype!='S00' and respcode='00' and ";
            }
            return tmptable;
        }
       
        public DataTable SelectXft(DateTime time1, DateTime time2, string psam, string areatelno)
        {
            string[] date = new string[2];
            date[0] = dealdate(time1);
            date[1] = dealdate(time2);
            string sql ="select rownum 序号,trim(area)||trim(telno) 绑定电话,psam,settledate 交易日期,transtime 交易时间,t1.appname 交易类型,outpan 转出卡号,inpan 转入卡号,amount/100 金额,-mchtfee/100 手续费,amount/100+mchtfee/100 净额 from qsjg_xft_his t,apptype t1 where t1.apptype=t.apptype and payretcode='00' and ";
            if (date[0].CompareTo(date[1]) > 0)
            {
                MessageBox.Show("起始时间不能大于结束时间", "提示");
                return tmptable;
            }
            DbHelper = new MyDbHelper(MyDbHelper.connectstring_cardqs);
            int i = 1; int allNum = 0;
            while (date[0].CompareTo(date[1]) <= 0)//循环每天查询
            {//查询语句设置
                if (date[0].CompareTo("") != 0) sql = sql + "settledate ='" + date[0] + "' and ";

                if (psam.CompareTo("") != 0) sql = sql + "psam = '" + psam + "' and ";

                if (areatelno.Trim().CompareTo("-") != 0) sql = sql + "trim(area)||trim(telno) ='" + areatelno.Trim().Remove(4,1) + "'and ";

                sql = sql + "1=1 order by rownum asc";
                time1 = time1.AddDays(1);
                date[0] = dealdate(time1);
                if (i == 1 && tmptable == null)
                {
                    tmptable = DbHelper.ExecuteDataTable("result", sql);
                }
                else
                {
                    DataTable tmp = DbHelper.ExecuteDataTable("result", sql);
                    tmptable.Merge(tmp);
                }
                i++;
                allNum = tmptable.Rows.Count;
                sql = "select rownum+" + allNum + " 序号,trim(area)||trim(telno) 绑定电话,psam,settledate 交易日期,transtime 交易时间,t1.appname 交易类型,outpan 转出卡号,inpan 转入卡号,amount/100 金额,-mchtfee/100 手续费,amount/100+mchtfee/100 净额 from qsjg_xft_his t,apptype t1 where t1.apptype=t.apptype and payretcode='00' and ";
            }
            return tmptable;
        }
        public DataTable SelectFs(DateTime time1, DateTime time2, string mchtid, string termid,string actnbr)
        {
            string[] date = new string[2];
            date[0] = dealdate(time1);
            date[1] = dealdate(time2);
            string sql = "SELECT rownum 序号,mchtname 商户名称,mchtid 商户号,termid 终端号,settledate 交易日期,transtime 交易时间,tracenbr 流水号,refnbr 参考号,t1.transname 交易类型,actnbr 转出卡号,cardtype 卡性质,amount/100 金额,-mchtfee/100 手续费,amount/100+mchtfee/100 净额 from qsjg_fs_his t left join cs_transcode t1 on t1.transid = t.transtype where transtype!='S00' and respcode='00' and ";
            if (date[0].CompareTo(date[1]) > 0)
            {
                MessageBox.Show("起始时间不能大于结束时间", "提示");
                return tmptable;
            }
            DbHelper = new MyDbHelper(MyDbHelper.connectstring_cardqs);
            int i = 1; int allNum = 0;
            while (date[0].CompareTo(date[1]) <= 0)//循环每天查询
            {//查询语句设置
                if (date[0].CompareTo("") != 0) sql = sql + "settledate ='" + date[0] + "' and ";

                if (termid.CompareTo("") != 0) sql = sql + "termid = '" + termid + "' and ";

                if (mchtid.CompareTo("") != 0) sql = sql + "mchtid ='" + mchtid + "'and ";

                if (actnbr.CompareTo("") != 0) sql = sql + "actnbr ='" + actnbr + "'and ";

                sql = sql + "1=1 order by rownum asc";
                time1 = time1.AddDays(1);
                date[0] = dealdate(time1);
                if (i == 1 && tmptable == null)
                {
                    tmptable = DbHelper.ExecuteDataTable("result", sql);
                }
                else
                {
                    DataTable tmp = DbHelper.ExecuteDataTable("result", sql);
                    tmptable.Merge(tmp);
                }
                i++;
                allNum = tmptable.Rows.Count;
                sql = "SELECT rownum+" + allNum + " 序号, mchtname 商户名称,mchtid 商户号,termid 终端号,settledate 交易日期,transtime 交易时间,tracenbr 流水号,refnbr 参考号,t1.transname 交易类型,actnbr 转出卡号,cardtype 卡性质,amount/100 金额,-mchtfee/100 手续费,amount/100+mchtfee/100 净额 from qsjg_fs_his t left join cs_transcode t1 on t1.transid = t.transtype where transtype!='S00' and respcode='00' and ";
            }
            return tmptable;
        }
        public string dealdate(DateTime d1)//日期处理函数
        {
            string date;
            if (d1.Month.ToString().Length == 1)
                date = d1.Year.ToString() + "0" + d1.Month.ToString();
            else
                date = d1.Year.ToString() + d1.Month.ToString();
            if (d1.Day.ToString().Length == 1)
                date = date + "0" + d1.Day.ToString();
            else
                date = date + d1.Day.ToString();
            return date;
        }
    }
}
