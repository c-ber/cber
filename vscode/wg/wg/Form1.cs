using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Diagnostics;
using System.Drawing;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace wg
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }
        string game_dir = "";
        private void btn_open_Click(object sender, EventArgs e)
        {
            FolderBrowserDialog fold = new FolderBrowserDialog();
            if (fold.ShowDialog() == DialogResult.OK)
            {
                tbox_dir.Text = fold.SelectedPath;
                game_dir = tbox_dir.Text;
            }
        }

        private void tbox_dir_TextChanged(object sender, EventArgs e)
        {
            game_dir = tbox_dir.Text;
        }

        public static void CopyFolder(string strFromPath, string strToPath)
        {
            //如果源文件夹不存在，则创建
            if (!Directory.Exists(strFromPath))
            {
                Directory.CreateDirectory(strFromPath);
            }
            //取得要拷贝的文件夹名
            string strFolderName = strFromPath.Substring(strFromPath.LastIndexOf("\\") +
              1, strFromPath.Length - strFromPath.LastIndexOf("\\") - 1);
            //如果目标文件夹中没有源文件夹则在目标文件夹中创建源文件夹
            if (!Directory.Exists(strToPath + "\\" + strFolderName))
            {
                Directory.CreateDirectory(strToPath + "\\" + strFolderName);
            }
            //创建数组保存源文件夹下的文件名
            string[] strFiles = Directory.GetFiles(strFromPath);
            //循环拷贝文件
            for (int i = 0; i < strFiles.Length; i++)
            {
                //取得拷贝的文件名，只取文件名，地址截掉。
                string strFileName = strFiles[i].Substring(strFiles[i].LastIndexOf("\\") + 1, strFiles[i].Length - strFiles[i].LastIndexOf("\\") - 1);
                //开始拷贝文件,true表示覆盖同名文件
                File.Copy(strFiles[i], strToPath + "\\" + strFolderName + "\\" + strFileName, true);
            }
            //创建DirectoryInfo实例
            DirectoryInfo dirInfo = new DirectoryInfo(strFromPath);
            //取得源文件夹下的所有子文件夹名称
            DirectoryInfo[] ZiPath = dirInfo.GetDirectories();
            for (int j = 0; j < ZiPath.Length; j++)
            {
                //获取所有子文件夹名
                string strZiPath = strFromPath + "\\" + ZiPath[j].ToString();
                //把得到的子文件夹当成新的源文件夹，从头开始新一轮的拷贝
                CopyFolder(strZiPath, strToPath + "\\" + strFolderName);
            }
        }

        public static void exec_cmd(string cmd)
        {
            ProcessStartInfo startInfo = new ProcessStartInfo();
            startInfo.FileName = "cmd.exe";
            startInfo.Arguments = "/c C:\\Windows\\System32\\cmd.exe";
            startInfo.RedirectStandardInput = true;
            startInfo.RedirectStandardOutput = true;
            startInfo.RedirectStandardError = true;
            startInfo.UseShellExecute = false;
            startInfo.Verb = "RunAs";
            Process p = new Process();
            p.StartInfo = startInfo;
            p.Start();

            //向cmd窗口发送输入信息
            p.StandardInput.WriteLine(cmd);
            p.StandardInput.WriteLine("exit");
            p.StandardInput.AutoFlush = true;

            //获取输出信息
            string strOuput = p.StandardOutput.ReadToEnd();
            string strError = p.StandardError.ReadToEnd();
            //等待程序执行完退出进程
            p.WaitForExit();
            p.Close();
        }
        
        private void btn_start_Click(object sender, EventArgs e)
        {
            //第一步，复制paks文件为Maks,复制后尽量做一个校验
            string pak_dir = game_dir + @"TslGame\Content\Paks\";
            string bak_dir = game_dir + @"TslGame\Content\Maks\";
            string bak_dir_1 = game_dir + @"TslGame\Content\Caks\";

            if(Directory.Exists("bak_dir"))
            {
                MessageBox.Show("备份目录已经有了，请处理");
                return;
            }
            CopyFolder(pak_dir, bak_dir);

            //第二步，将paks重命名为Caks
            DirectoryInfo di = new DirectoryInfo(pak_dir);
            di.MoveTo(bak_dir_1);

            //第三步，做文件软链接, 第一个脚本
            string wg_pak = @"E:\share\cber\vscode\wg\wg\pak\";
            string cmd_head = "mklink \"" + bak_dir + "TslGame-WindowsNoEditor_uicb1.pak\"  \"" + wg_pak + "主播无后.pak\"";
            exec_cmd(cmd_head);

            cmd_head = "mklink \"" + bak_dir + "TslGame-WindowsNoEditor_uicb2.pak\"  \"" + wg_pak + "草皮除草.pak\"";
            exec_cmd(cmd_head);

            cmd_head = "mklink \"" + bak_dir + "TslGame-WindowsNoEditor_uicb3.pak\"  \"" + wg_pak + "神仙吃药.pak\"";
            exec_cmd(cmd_head);

            //第四步，做目录软链接，第二个脚本
            cmd_head = "mklink /j \"" + pak_dir + "\"  \""+ bak_dir + "\"";
            exec_cmd(cmd_head);
            MessageBox.Show("提示", "功能正常开启");
         }

        private void Form1_Load(object sender, EventArgs e)
        {
            game_dir = tbox_dir.Text;
        }
    }
    /// <summary>
    /// 后座类型，主播，激光，变态
    /// </summary>
    enum HOUZUO
    {
        HOUZUO_ZHUBO = 0,
        HOUZUO_JIGUANG = 1,
        HOUZUO_BIANTAI = 2
    };

    /// <summary>
    /// 除草类型，简单，地板
    /// </summary>
    enum CHUCAO
    {
        CHUCAO_SIMPLE = 0,
        CHUCAO_FLOOR = 1
    };

    public class JUEDI
    {
        HOUZUO hz = HOUZUO.HOUZUO_ZHUBO;
        CHUCAO cc = CHUCAO.CHUCAO_SIMPLE;
        bool zero_medic = true;
        JUEDI()
        {

        }
    }
}
