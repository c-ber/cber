using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace cotool.game
{
    public partial class UpdateFinishedForm : Form
    {
        private int failed;
        private int success;
        public bool needRunTool;

        public UpdateFinishedForm(int success, int failed)
        {
            InitializeComponent();
            this.success = success;
            this.failed = failed;
        }



        private void button1_Click(object sender, EventArgs e)
        {
            needRunTool = true;
            Close();
        }

        private void button2_Click(object sender, EventArgs e)
        {
            Close();
        }

        private void UpdateFinishedForm_Load(object sender, EventArgs e)
        {
            try
            {
                label1.Text = label1.Text.Replace("%success%", string.Concat(success));
                label1.Text = label1.Text.Replace("%failed%", string.Concat(failed));
                FileInfo fileInfo = new FileInfo("更新日志.txt");
                FileStream fileStream = fileInfo.OpenRead();
                byte[] array = new byte[fileStream.Length];
                fileStream.Read(array, 0, array.Length);
                fileStream.Close();
                textBox1.Text = Encoding.GetEncoding("GBK").GetString(array);
                textBox1.ScrollToCaret();
                textBox1.Select(0, 0);
                button1.Focus();
            }
            catch
            {
            }
        }
    }
}
