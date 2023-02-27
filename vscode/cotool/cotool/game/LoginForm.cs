using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace cotool.game
{
    public partial class LoginForm : Form
    {
        private string gameType;

        public LoginForm(string gameType)
        {
            this.gameType = gameType;
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            this.button1.Enabled = false;
            byte[] bytes = GCSUtil.getGCSVIP3(this.txt_username.Text, this.txt_password.Text, "42.121.12.159", "80", this.gameType);
            string str = Encoding.GetEncoding("GBK").GetString(bytes);
            if (!str.Trim().StartsWith("0,"))
            {
                MessageBox.Show("登陆失败[" + str.Substring(2, str.Length - 2) + "]！");
            }
            else
            {
                IniProperties.setValue("gcs", "login.username", this.txt_username.Text.Trim());
                IniProperties.setValue("gcs", "login.password", JJMUtil.DesEncrypt(this.txt_password.Text.Trim()));
                MessageBox.Show("登陆成功，请重新尝试更新！");
            }
            this.button1.Enabled = true;
        }
    }
}
