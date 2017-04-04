using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Drawing;
using System.Data;
using System.Linq;
using System.Text;
using System.Windows.Forms;
using System.Diagnostics;
using System.Xml;

namespace magneto.softbox
{
    public struct MenuItem
    {
        public string fir_name;   //一级菜单名
        public string name;       //二级菜单名，就是程序名
        public string image_path; //存放图片位置或者目录执行程序
        public string exe_path;  //存放exe的位置
        public string item_type; //有exe和目录
        public MenuItem(string _fir_name, string _name, string _image_path, string _exe_path, string _item_type)
        {
            fir_name = _fir_name;
            name = _name;
            image_path = _image_path;
            exe_path = _exe_path;
            item_type = _item_type;
        }
    }
    public partial class softbox : UserControl
    {
        int act_mi_num = 0;
        MenuItem[] mi_list = new MenuItem[100];
        public softbox()
        {
            InitializeComponent();
        }

        private void menu_Click(object sender, EventArgs e)
        {
            ToolStripMenuItem menu = (ToolStripMenuItem)(sender);
            foreach (MenuItem mi in mi_list)
            {
                if (menu.Text == mi.name)
                {
                    if (mi.item_type.Equals("pe"))
                    {
                        Process process = new Process();
                        process.StartInfo.FileName = mi.exe_path;
                        process.Start();
                    } 
                    else if(mi.item_type.Equals("dir"))
                    {
                        Process process = new Process();
                        process.StartInfo.FileName = mi.image_path;
                        process.StartInfo.Arguments = mi.exe_path;

                        process.Start();
                    }
                    else
                    {
                        MessageBox.Show("类型格式错误!", mi.item_type);
                    }
                }
            }

        }
        int load_xml_config()
        {
            XmlDocument xmlDoc = new XmlDocument();

            xmlDoc.Load("menu.xml");
            XmlNode xn = xmlDoc.SelectSingleNode("cber");

            if(xn == null)
            {
                return -1;
            }
            string name = "";
            for (int i = 0; i < xn.ChildNodes.Count; i++)
            {
                XmlNode c1xn = xn.ChildNodes[i];
                ToolStripMenuItem fir_menu = new ToolStripMenuItem();
                name = c1xn.Attributes["name"].Value.Trim();
                fir_menu.Name = "MenuItem" + name;
                fir_menu.Size = new System.Drawing.Size(name.Length * 10, 22);
                fir_menu.Text = name;
                this.menuStrip1.Items.Add(fir_menu);

                for (int j = 0; j < c1xn.ChildNodes.Count; j++)
                {
                    ToolStripMenuItem sec_menu = new ToolStripMenuItem();
                    XmlNode c2xn = c1xn.ChildNodes[j];

                    sec_menu.Name = "MenuItem" + name;
                    sec_menu.Size = new System.Drawing.Size(name.Length * 10, 22);
                    sec_menu.Text = c2xn.Attributes["name"].Value.Trim();

                    mi_list[act_mi_num] = new MenuItem(name, c2xn.Attributes["name"].Value.Trim(),
                        c2xn.Attributes["image"].Value.Trim(), 
                        c2xn.InnerText.Trim(), c2xn.Attributes["type"].Value.Trim());

                    if (c2xn.Attributes["image"].Value.Trim() != "null" && c2xn.Attributes["type"].Value.Trim() == "pe")
                    {
                        sec_menu.Image = Image.FromFile(c2xn.Attributes["image"].Value.Trim());
                    }

                    sec_menu.Click += new System.EventHandler(this.menu_Click);
                    fir_menu.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[] { sec_menu });
                    act_mi_num++;
                }
            }

            return 0;
        }
        private void softbox_Load(object sender, EventArgs e)
        {
            load_xml_config();
        }

        private void erjiToolStripMenuItem_Click(object sender, EventArgs e)
        {

        }

    }
}
