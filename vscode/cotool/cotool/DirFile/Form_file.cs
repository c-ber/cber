using System;
using System.IO;
using System.Linq;
using System.Windows.Forms;

namespace cotool.DirFile
{
    public partial class Form_file : UserControl
    {
        public Form_file()
        {
            InitializeComponent();
        }

        string defaultfilePath = "";

        private void button1_Click(object sender, EventArgs e)
        {
            string path = System.Windows.Forms.Application.StartupPath;
            DirectoryInfo folder = new DirectoryInfo(path);
            FileInfo[] files = folder.GetFiles("*", SearchOption.AllDirectories);
            foreach (FileInfo fi in files)
            {
                if (!fi.Name.Contains(".exe"))
                {
                    File.Move(fi.Name, fi.Name + ".jpg");
                }
            }
        }

        private void btn_dis_verb_Click(object sender, EventArgs e)
        {
            string path = System.Windows.Forms.Application.StartupPath;
            DirectoryInfo folder = new DirectoryInfo(path);
            FileInfo[] files = folder.GetFiles("*", SearchOption.AllDirectories);
            foreach (FileInfo fi in files)
            {
                if (!fi.Name.Contains(".exe"))
                {
                    File.Move(fi.Name, fi.Name.Replace(".jpg", ""));
                }
            }
        }

        private void btn_del_Click(object sender, EventArgs e)
        {
            string path = tbox_path.Text;
            DirectoryInfo folder = new DirectoryInfo(path);
            FileInfo[] files = folder.GetFiles("*", SearchOption.AllDirectories);
            foreach (FileInfo fi in files)
            {
                string delstr = tbox_delstr.Text.Trim();
                if (fi.Name.Contains(delstr))
                {
                    string newfile = fi.DirectoryName + "\\" + fi.Name.Replace(delstr, "").Trim();
                    File.Move(fi.FullName, newfile);
                }
            }
            MessageBox.Show("完成了", "提示");
        }

        private void btn_select_Click(object sender, EventArgs e)
        {
            //首次defaultfilePath为空，按FolderBrowserDialog默认设置（即桌面）选择
            if (defaultfilePath != "")
            {
                //设置此次默认目录为上一次选中目录
                folderBrowserDialog1.SelectedPath = defaultfilePath;
            }

            if (folderBrowserDialog1.ShowDialog() == DialogResult.OK)
            {
                //记录选中的目录
                defaultfilePath = folderBrowserDialog1.SelectedPath;
            }
            tbox_path.Text = defaultfilePath;
        }
    }
}
