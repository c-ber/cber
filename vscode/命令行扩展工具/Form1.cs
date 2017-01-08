using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Text;
using System.Windows.Forms;
using System.IO;
using System.Collections;

namespace 命令行代码自动生成工具
{
    public partial class Form1 : Form
    {
        public static string packet_path = ""; /*代码Package的路径*/
        public static string fun_name = ""; /*函数名称*/
        public static string fun_args_define = "";
        public static string fun_param = "";
        public static string lte_cmd = "";
        public static string cmd_note = "";

        public static string[] filelist = new string[20];


        public Form1()
        {
            InitializeComponent();
        }

        private void button2_Click(object sender, EventArgs e)
        {
            FolderBrowserDialog dilog = new FolderBrowserDialog();
            dilog.Description = "请选择文件夹";
            if (dilog.ShowDialog() == DialogResult.OK || dilog.ShowDialog() == DialogResult.Yes)
            {
                textBox_path.Text = dilog.SelectedPath.Trim();
                packet_path = dilog.SelectedPath.Trim();
            }
        }
        void save_config_file()
        {
            string file_path = Application.StartupPath + "\\config.ini";
            //实例化一个文件流--->与写入文件相关联
            FileStream fs = new FileStream(file_path, FileMode.Create);

            //实例化一个StreamWriter-->与fs相关联
            StreamWriter sw = new StreamWriter(fs, Encoding.Default);

            sw.WriteLine(textBox_path.Text);
            sw.WriteLine(textBox_fun.Text);
            sw.WriteLine(textBox_pvar.Text);
            sw.WriteLine(textBox_cmd.Text);
            sw.WriteLine(textBox_note.Text);

            sw.Flush();
            sw.Close();
            fs.Close();
        }
        void load_config_file()
        {
            string file_path = Application.StartupPath + "\\config.ini";
            //实例化一个文件流--->与写入文件相关联
            if (File.Exists(file_path))
            {
                StreamReader objReader = new StreamReader(file_path, Encoding.Default);
                string sLine = "";
                ArrayList linelist = new ArrayList();
                while (sLine != null)
                {
                    sLine = objReader.ReadLine();
                    if (sLine != null)
                    {
                        linelist.Add(sLine);
                    }
                }
                textBox_path.Text = linelist[0].ToString();
                textBox_fun.Text = linelist[1].ToString();
                textBox_pvar.Text = linelist[2].ToString();
                textBox_cmd.Text = linelist[3].ToString();
                textBox_note.Text = linelist[4].ToString();
                objReader.Close();
            }
            else
            {
                MessageBox.Show("没有配置文件！", "提示");
            }
        }
        void data_process()
        {
            string[] tmp = textBox_fun.Text.Trim().Split('(');
            fun_args_define = tmp[1].TrimEnd(')') ;
            fun_name = tmp[0];
            fun_param = textBox_pvar.Text;

            lte_cmd = textBox_cmd.Text.Trim();//命令字
            cmd_note = textBox_note.Text.Trim();//注释
            packet_path = textBox_path.Text;
        }

        void code_auto_write_insert(string fpath, int offset, string cmpstr, string content)
        {
            bool findflag = false;
            StreamReader objReader = new StreamReader(packet_path + fpath, Encoding.Default);
            string sLine = "";
            ArrayList linelist = new ArrayList();
            while (sLine != null)
            {
                sLine = objReader.ReadLine();
                if (sLine != null)
                {
                    linelist.Add(sLine);
                }
            }
            objReader.Close();


            //实例化一个文件流--->与写入文件相关联
            FileStream fs = new FileStream(packet_path + fpath, FileMode.Open);
            
            //实例化一个StreamWriter-->与fs相关联
            StreamWriter sw = new StreamWriter(fs, Encoding.Default);
            
            int line_index = -1;
            for (int i = 0; i < linelist.Count; i++)
            {
                if (offset < 0)//在指定代码前加
                {
                    if (linelist[i].ToString().Contains(cmpstr))
                    {
                        sw.WriteLine(content);
                        findflag = true;
                    }
                    sw.WriteLine(linelist[i]);
                }
                else//在指定代码后offset位置加代码
                {
                    sw.WriteLine(linelist[i]);
                    if (linelist[i].ToString().Contains(cmpstr))
                    {
                        line_index = i + offset;
                    }
                    if (line_index == i)
                    {
                        sw.WriteLine(content);
                        findflag = true;
                    }
                    if (findflag != true && i == linelist.Count - 1)
                    {
                        sw.WriteLine(content);
                        findflag = true;
                    }
                }
            }
            //清空缓冲区
            sw.Flush();
            //关闭流
            sw.Close();
            fs.Close();
            if (findflag == false)
            {
                findflag = true;
                MessageBox.Show(fpath + "代码生成失败，没有找到插入位置!", "cber");
            }
        }

        void code_auto_write(string fpath,int offset,string cmpstr, string content)
        {
            bool findflag = false;
            StreamReader objReader = new StreamReader(packet_path + fpath, Encoding.Default);
            string sLine = "";
            ArrayList linelist = new ArrayList();
            while (sLine != null)
            {
                sLine = objReader.ReadLine();
                if (sLine != null)
                {
                    linelist.Add(sLine);
                }
            }
            objReader.Close();


            //实例化一个文件流--->与写入文件相关联
            FileStream fs = new FileStream(packet_path + fpath, FileMode.Create);
            //实例化一个StreamWriter-->与fs相关联
            StreamWriter sw = new StreamWriter(fs, Encoding.Default);

            int line_index = -1;
            for (int i = 0; i < linelist.Count; i++)
            {
                if (offset < 0)//在指定代码前加
                {
                    if (linelist[i].ToString().Contains(cmpstr))
                    {
                        sw.WriteLine(content);
                        findflag = true;
                    }
                    sw.WriteLine(linelist[i]);
                }
                else//在指定代码后offset位置加代码
                {
                    sw.WriteLine(linelist[i]);
                    if (linelist[i].ToString().Contains(cmpstr))
                    {
                        line_index = i + offset;
                    }
                    if (line_index == i)
                    {
                        sw.WriteLine(content);
                        findflag = true;
                    }
                    if (findflag != true && i == linelist.Count - 1)
                    {
                        sw.WriteLine(content);
                        findflag = true;
                    }
                }
            }
            //清空缓冲区
            sw.Flush();
            //关闭流
            sw.Close();
            fs.Close();
            if (findflag == false)
            {
                findflag = true;
                MessageBox.Show(fpath + "代码生成失败，没有找到插入位置!", "cber");
            }
        }


        /*自动开发lte_gtp.c*/
        void code_gtpc(int fid)
        {
            filelist[fid] = "\\semp_system\\app\\src\\management\\source\\system\\fc7k2\\src\\lte_gtp.c";
            string cmpstr = "apiSetAgingParam(INT32_SCAN_PERIOD, scan_period)";
            string content =
            "LOCAL STATUS  cmd_" + fun_name + "(vty_t *vty , int argc , char *argv[])" + Environment.NewLine +
            "{" + Environment.NewLine +
            "    if ( api_" + fun_name + "(" + fun_param +") != OK)" + Environment.NewLine +
            "    {" + Environment.NewLine +
            "        vty_printf(vty, \"Error(%02d): " + fun_name.Replace('_', ' ') + " fail!\", E_FAIL);" + Environment.NewLine +
            "        return MDL_ERR(E_FAIL);" + Environment.NewLine +
            "    }" + Environment.NewLine +
            "    return OK;" + Environment.NewLine +
            "}" + Environment.NewLine;

            code_auto_write(filelist[fid], 7,cmpstr,content);
        }

        /*自动开发apiLte.c*/
        void code_apiLte_h(int fid)
        {
            filelist[fid] = "\\semp_system\\app\\src\\management\\source\\mngApi\\inc\\api7k2.h";
            string cmpstr = "apiSetAgingParam(lte_aging_param_t ap, int value)";
            string content = "extern int api_" + fun_name + "(" + fun_args_define + ");";
            code_auto_write(filelist[fid], 0, cmpstr, content);
        }
        void code_apiLte_c(int fid)
        {
            filelist[fid] = "\\semp_system\\app\\src\\management\\source\\mngApi\\src\\apiLte.c";

            string cmpstr = "bdd_set_aging_param(ap, value);";
            string content =
            "int api_" + fun_name + "(" + fun_args_define + ")" + Environment.NewLine +
            "{" + Environment.NewLine +
            "#ifndef CROSS" + Environment.NewLine +
            "    return 0;" + Environment.NewLine +
            "#else" + Environment.NewLine +
            "    int ret = XSUCCESS;" + Environment.NewLine +
            "    ret = bdd_" + fun_name + "(" + fun_param + ");" + Environment.NewLine +
            "    if (ret != XSUCCESS)" + Environment.NewLine +
            "    {" + Environment.NewLine +
            "        usrLog(M_GTP, LVL_ERR, __func__, \"" + 
                            fun_name.Replace('_', ' ') + " fail(%d)!\", ret);" + Environment.NewLine +
            "    }" + Environment.NewLine +
            "    else" + Environment.NewLine +
            "    {" + Environment.NewLine +
            "        usrLog(M_GTP, LVL_DEBUG, __func__, \"" + 
                            fun_name.Replace('_', ' ') + " success!\");" + Environment.NewLine +
            "    }" + Environment.NewLine +
            "" + Environment.NewLine +
            "    return ret;" + Environment.NewLine +
            "#endif" + Environment.NewLine +
            "}" + Environment.NewLine;
            code_auto_write(filelist[fid], 12, cmpstr, content);
        }

        /**** fc7002_api.c ***/
        void code_fc7002_api_c(int fid)
        {
            filelist[fid] = "\\semp_system\\app\\src\\bdd\\fc7002\\product\\fc7002_api.c";

            string cmpstr = "bdd_set_aging_param(lte_aging_param_t";
            string content =
                "SERV bdd_" + fun_name + "(" + fun_args_define + ")" + Environment.NewLine +
                "{" + Environment.NewLine +
                "    return bia_" + fun_name + "(" + fun_param + ");" + Environment.NewLine +
                "}" + Environment.NewLine;
            code_auto_write(filelist[fid], 4, cmpstr, content);
        }
        /**** bdd_api.h ***/
        void code_bdd_api_h(int fid)
        {
            filelist[fid] = "\\semp_system\\app\\src\\bdd\\fc7002\\include\\bdd_api.h";

            string cmpstr = "bdd_set_aging_param(lte_aging_param_t";
            string content =
                    "SERV bdd_" + fun_name + "(" + fun_args_define + ");";
            code_auto_write(filelist[fid], 0, cmpstr, content);
        }

        /*  bia_service.c  */
        void code_bia_service_c(int fid)
        {
            filelist[fid] = "\\semp_system\\app\\src\\bdd\\fc7002\\bia\\bia_service.c";

            string cmpstr = "cb_hydra_drv->set_aging_param";
            string content =
            "SERV bia_" + fun_name + "(" + fun_args_define + ")" + Environment.NewLine +
            "{" + Environment.NewLine +
            "    SERV ret = SE_SUCCESS;" + Environment.NewLine +
            "    bdd_device_info_t *cb_hydra_inf = NULL;" + Environment.NewLine +
            "    ddl_device_t      *cb_hydra_dev = NULL;" + Environment.NewLine +
            "    hydra_driver_t    *cb_hydra_drv = NULL;" + Environment.NewLine +
            "" + Environment.NewLine +
            "    BIA_FIND_DEV_ERR_RETURN(cb_hydra_inf, PST_CB, DEV_FC_HYDRA);" + Environment.NewLine +
            "" + Environment.NewLine +
            "    cb_hydra_dev = &(cb_hydra_inf->ddl_device);" + Environment.NewLine +
            "    cb_hydra_drv = (hydra_driver_t *)cb_hydra_dev->driver;" + Environment.NewLine +
            "" + Environment.NewLine +
            "    if ((ret = cb_hydra_drv->" + fun_name + "(cb_hydra_dev, " + fun_param + ")))" + Environment.NewLine +
            "    {" + Environment.NewLine +
            "        return ret;" + Environment.NewLine +
            "    }" + Environment.NewLine +
            "    return ret;" + Environment.NewLine +
            "}" + Environment.NewLine;
            code_auto_write(filelist[fid], 6, cmpstr, content);
        }

        /*  bia_service.h  */
        void code_bia_service_h(int fid)
        {
            filelist[fid] = "\\semp_system\\app\\src\\bdd\\fc7002\\bia\\bia_service.h";

            string cmpstr = "bia_set_aging_param";
            string content =
                    "extern SERV bia_" + fun_name + "(" + fun_args_define + ");";
            code_auto_write(filelist[fid], 0, cmpstr, content);
        }


        /*  ddl_hydra.c  */
        void code_ddl_hydra_c(int fid)
        {
            filelist[fid] = "\\semp_system\\app\\src\\bdd\\platform\\ddl\\ddl_hydra.c";

            string cmpstr = "hydra_set_aging_param";
            string content =
            "SERV ddl_" + fun_name + "(ddl_device_t *dev, " + fun_args_define + ")" + Environment.NewLine +
            "{" + Environment.NewLine +
            "    SERV ret = SE_SUCCESS;" + Environment.NewLine +
            "    DDL_INFO_LOG(\"\\n\");" + Environment.NewLine +
            "    ret =  hydra_" + fun_name + "(" + fun_param + ");" + Environment.NewLine +
            "    return ret;" + Environment.NewLine +
            "}" + Environment.NewLine;
            code_auto_write(filelist[fid], 3, cmpstr, content);


            cmpstr = ".set_aging_param = ddl_set_aging_param";
            content = "    ." + fun_name + " = ddl_" + fun_name + ",";
            code_auto_write(filelist[fid], 0, cmpstr, content);
        }

        /*  ddl_hydra.h  */
        void code_ddl_hydra_h(int fid)
        {
            filelist[fid] = "\\semp_system\\app\\src\\bdd\\platform\\ddl\\ddl_hydra.h";

            string cmpstr = "(*set_aging_param)(ddl_device_t *dev";
            string content =
             "    SERV (*" + fun_name + ")(ddl_device_t *dev, " + fun_args_define + ");";
            code_auto_write(filelist[fid], 0, cmpstr, content); 
        }


        /*  hydra_relate_ctrl.c  */
        void code_hydra_relate_ctrl_c(int fid)
        {
            filelist[fid] = "\\semp_system\\app\\src\\semcc\\lte\\hydra_relate_ctrl.c";

            string cmpstr = "hydra_set_aging_param";
            string content =
            "mp_code_t hydra_" + fun_name + "(" + fun_args_define + ")" + Environment.NewLine +
            "{" + Environment.NewLine +
            "    return npcp_cmd_exec(NPCP_MID_MASK, " + lte_cmd + "," + Environment.NewLine +
            "                         0, NULL," + Environment.NewLine +
            "                         NULL, NULL);" + Environment.NewLine +
            "}" + Environment.NewLine;
            code_auto_write(filelist[fid], 6, cmpstr, content); 
        }

        /*  hydra_relate_ctrl.h  */
        void code_hydra_relate_ctrl_h(int fid)
        {
            filelist[fid] = "\\semp_system\\app\\src\\semcc\\include\\hydra_relate_ctrl.h";

            string cmpstr = "hydra_set_aging_param";
            string content =
           "mp_code_t hydra_" + fun_name + "(" + fun_args_define + ");" + Environment.NewLine;
            code_auto_write(filelist[fid], 0, cmpstr, content); 
        }

        /*  mp_npcp_cmd.h  */
        void code_mp_npcp_cmd_h(int fid)
        {
            filelist[fid] = "\\cavium_examples\\src\\mp\\common\\mp_npcp_cmd.h";

            string fh = ",";
            string cmpstr = "NPCP_CMD_SET_LTE_AGING_TIME";
            string content =
            "    " + lte_cmd + fh.PadRight(36 - lte_cmd.Length, ' ') + "/* " + cmd_note + " */";
            code_auto_write(filelist[fid], 0, cmpstr, content); 
        }

        /*  lte_relate.c  */
        void code_mp_lte_relate_c(int fid)
        {
            filelist[fid] = "\\cavium_examples\\src\\mp\\modules\\lte\\lte_relate.c";

            string cmpstr = "NPCP_CMD_REGISTER(NPCP_CMD_SET_LTE_AGING_TIME";
            string content =
            "    NPCP_CMD_REGISTER(" + lte_cmd + ",npcp_" + fun_name + ");";
            code_auto_write(filelist[fid], 0, cmpstr, content);

            cmpstr = "lte_relate_npcp_init(void)";
            content =
            "static int npcp_" + fun_name + "( uint16_t  ilen, void *idata,"
                + Environment.NewLine +
            "                                            uint16_t *olen, void *odata )"
                + Environment.NewLine +
            "{" + Environment.NewLine +
            "    return MP_OK;" + Environment.NewLine +
            "}" + Environment.NewLine;
            code_auto_write(filelist[fid], -1, cmpstr, content);
        }

        private void button1_Click(object sender, EventArgs e)
        {
            int fid = 0;
            data_process();
            code_gtpc(fid++);
            code_apiLte_c(fid++);
            code_apiLte_h(fid++);
            code_fc7002_api_c(fid++);
            code_bdd_api_h(fid++);
            code_bia_service_c(fid++);
            code_bia_service_h(fid++);
            code_ddl_hydra_c(fid++);
            code_ddl_hydra_h(fid++);
            code_hydra_relate_ctrl_c(fid++);
            code_hydra_relate_ctrl_h(fid++);
            code_mp_npcp_cmd_h(fid++);
            code_mp_lte_relate_c(fid++);
            MessageBox.Show("代码生成成功!","cber");
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            load_config_file();
            packet_path = textBox_path.Text;
        }

        private void Form1_FormClosing(object sender, FormClosingEventArgs e)
        {
            save_config_file();
        }
    }
}
