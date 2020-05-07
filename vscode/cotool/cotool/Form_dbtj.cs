using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Drawing;
using System.Data;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace cotool
{
    public partial class Form_dbtj : UserControl
    {
        public Form_dbtj()
        {
            InitializeComponent();
        }

        ExcelDeal ed = new ExcelDeal();
        MyDbHelper oracle = null;
        Mysql mysql = null;

        /// <summary>
        /// 数据库测试
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        private void button1_Click(object sender, EventArgs e)
        {
            oracle = new MyDbHelper(MyDbHelper.connectstring);
            mysql = new Mysql(Mysql.connectstring);

            //string sql = "select * from test";
            try
            {

            }
            catch(Exception ex)
            {
                MessageBox.Show(ex.Message);
            }
            finally
            {
                oracle.Dispose();
                mysql.Dispose();
            }
        }
    }
}
