using System;
using System.Linq;
using System.Reflection;
using System.Data;
using System.Text;
using Microsoft.Office.Interop;
using Excel = Microsoft.Office.Interop.Excel;

namespace cotool
{
    class ExcelDeal
    {
        Excel.Application excelApp = new Excel.Application(); //Excel应用程序变量,初始化


        public bool WriteExcelFile(string sReportName, string sSheetName, DateTime time1, DateTime time2, DataTable dt)
        {
            string sFileModel = "test.xls";//模板文件
            string colA = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
            char[] colABC = new char[26] { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };

            if (System.IO.File.Exists(sFileModel) == false)
            {
                MyLog.Log("3", "模板文件不存在");
                return false;
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
            FileName = sFileModel;
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
    }
}
