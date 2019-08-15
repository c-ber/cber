using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;
using System.IO;

namespace 命名伪装
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            string path = System.Windows.Forms.Application.StartupPath;
            DirectoryInfo folder = new DirectoryInfo(path);
            FileInfo[] files = folder.GetFiles("*",SearchOption.AllDirectories);
            foreach (FileInfo fi in files)
            {
                if (!fi.Name.Contains(".exe"))
                {
                    File.Move(fi.Name, fi.Name + ".jpg");
                }
            }
        }

        private void button2_Click(object sender, EventArgs e)
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
    }
}
