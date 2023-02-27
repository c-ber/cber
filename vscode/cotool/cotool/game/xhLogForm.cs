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
    public partial class xhLogForm : Form
    {
        private int curBianSeIndex;

        private int curBianNumIndex;

        private int totalBianNum;


        public xhLogForm()
        {
            InitializeComponent();
        }
        private void xhLogForm_Load(object sender, EventArgs e)
        {
            readlocalQQ();
        }

        public void readlocalQQ()
        {
            try
            {
                string value = IniProperties.getValue("login", "all.qq.login");
                char[] separator = new char[1] { ',' };
                string[] array = value.Split(separator);
                for (int i = 0; i < array.Length; i++)
                {
                    if (array[i].Length > 0)
                    {
                        string value2 = IniProperties.getValue("login", array[i] + ".nickname");
                        string text = array[i];
                        listView1.Items.Add(text + "[" + value2 + "]").SubItems[0].Tag = text;
                    }
                }
            }
            catch
            {
            }
        }

        private void listView1_SelectedIndexChanged(object sender, EventArgs e)
        {
            try
            {
                if (listView1.SelectedItems.Count <= 0)
                {
                    return;
                }
                cmb_timeSel.Items.Clear();
                string value = (string)listView1.SelectedItems[0].SubItems[0].Tag;
                FileInfo[] files = new DirectoryInfo(@"D:\develop\csharp\qqsh\qqsh\bin\Debug\log").GetFiles();
                for (int i = 0; i < files.Length; i++)
                {
                    string name = files[i].Name;
                    if (name.StartsWith(value))
                    {
                        try
                        {
                            int num = name.IndexOf("_");
                            int num2 = name.IndexOf("_日志");
                            string text = name.Substring(num + 1, num2 - num - 1);
                            string text2 = text.Substring(8, text.Length - 8);
                            string text3 = text2.Substring(1, text2.Length - 1);
                            text = "20" + text.Substring(0, 8) + "   " + text3 + "点后";
                            cmb_timeSel.Items.Add(text);
                        }
                        catch
                        {
                        }
                    }
                }
            }
            catch (Exception ex)
            {
                MessageBox.Show(ex.Message + ex.StackTrace);
            }
        }

        private void cmb_timeSel_SelectedIndexChanged(object sender, EventArgs e)
        {
            try
            {
                string obj = cmb_timeSel.SelectedItem.ToString();
                int num = obj.IndexOf(" ");
                string text = obj.Substring(0, num);
                int num2 = obj.IndexOf("点");
                string text2 = obj.Substring(num, num2 - num);
                string text3 = listView1.SelectedItems[0].SubItems[0].Tag.ToString() + "_" + text.Substring(2, text.Length - 2) + "-" + text2.Trim() + "_日志.txt";
                FileStream fileStream = new FileInfo("./log/" + text3).OpenRead();
                byte[] array = new byte[fileStream.Length];
                fileStream.Read(array, 0, array.Length);
                fileStream.Close();
                string @string = Encoding.GetEncoding("utf-8").GetString(array);
                txt_log.Text = "";
                txt_log.Text = @string;
                bianse();
            }
            catch (Exception ex)
            {
                MessageBox.Show(ex.Message);
            }
        }

        private void bianse()
        {
            try
            {
                int num = 0;
                txt_log.Select(0, txt_log.Text.Length);
                txt_log.SelectionColor = Color.Black;
                txt_log.SelectionFont = new Font("宋体", txt_searchText.Font.Size, txt_searchText.Font.Style);
                txt_log.Select(0, 0);
                int num2 = 0;
                if (txt_searchText.Text.Trim().Length > 0)
                {
                    while (num2 >= 0)
                    {
                        num2 = txt_log.Text.IndexOf(txt_searchText.Text.Trim(), num2 + 1);
                        if (num2 < 0)
                        {
                            break;
                        }
                        txt_log.Select(num2, txt_searchText.Text.Trim().Length);
                        txt_log.SelectionColor = Color.Red;
                        txt_log.SelectionFont = new Font("宋体", txt_searchText.Font.Size, FontStyle.Bold | FontStyle.Underline);
                        txt_log.Select(0, 0);
                        num++;
                    }
                }
                totalBianNum = num;
                curBianSeIndex = 0;
                curBianNumIndex = 0;
                nextGuanJianZi();
            }
            catch (Exception ex)
            {
                MessageBox.Show(ex.Message);
            }
        }

        private void button1_Click(object sender, EventArgs e)
        {
            if (listView1.SelectedItems.Count <= 0)
            {
                MessageBox.Show("请先选中要查看日志的qq号码！");
                listView1.Focus();
            }
            if (cmb_timeSel.SelectedItem == null)
            {
                MessageBox.Show("请先选中要查看日志的时间！");
                cmb_timeSel.Focus();
            }
            bianse();
        }

        private void button3_Click(object sender, EventArgs e)
        {
            nextGuanJianZi();
        }

        public void nextGuanJianZi()
        {
            try
            {
                if (txt_searchText.Text.Trim().Length <= 0)
                {
                    return;
                }
                int num = 0;
                int num2 = 0;
                bool flag = false;
                while (num >= 0)
                {
                    num = txt_log.Text.IndexOf(txt_searchText.Text.Trim(), num + 1);
                    if (num < 0)
                    {
                        break;
                    }
                    if (num > curBianSeIndex)
                    {
                        flag = true;
                        txt_log.Select(num, 0);
                        txt_log.ScrollToCaret();
                        curBianSeIndex = num;
                        curBianNumIndex++;
                        lbl_status.Text = (curBianNumIndex + "/" + totalBianNum) ?? "";
                        break;
                    }
                    if (num2 == 0)
                    {
                        num2 = num;
                    }
                }
                if (!flag)
                {
                    txt_log.Select(num2, 0);
                    curBianSeIndex = num2;
                    txt_log.ScrollToCaret();
                    curBianNumIndex = 1;
                    lbl_status.Text = (curBianNumIndex + "/" + totalBianNum) ?? "";
                }
            }
            catch
            {
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            try
            {
                OpenFileDialog openFileDialog = new OpenFileDialog();
                if (DialogResult.OK == openFileDialog.ShowDialog())
                {
                    FileStream fileStream = new FileInfo(openFileDialog.FileName).OpenRead();
                    byte[] array = new byte[fileStream.Length];
                    fileStream.Read(array, 0, array.Length);
                    fileStream.Close();
                    array = Encoding.Convert(Encoding.UTF8, Encoding.GetEncoding("GBK"), array);
                    MemoryStream data = new MemoryStream(array);
                    txt_log.LoadFile(data, RichTextBoxStreamType.PlainText);
                    bianse();
                }
            }
            catch (Exception ex)
            {
                MessageBox.Show(ex.Message);
            }
        }

    }
}
