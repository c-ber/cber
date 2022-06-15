using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using System.Net;
using System.Text;
using System.Windows.Forms;

namespace cotool
{

    class DataDeal
    {
        Lexical lc = new Lexical();

        public void exec_proc(string softname)
        {
            System.Diagnostics.Process.Start(softname);
        }

        /// <summary>
        /// 执行dos命令，返回输出
        /// </summary>
        /// <param name="cmd"></param>
        /// <param name="sec"></param>
        /// <returns></returns>
        public string exec_cmd(string cmd, int sec, bool jiaohu = true)
        {
            string output = "";
            if(cmd != null && !cmd.Equals(""))
            {
                Process process = new Process();
                ProcessStartInfo startInfo = new ProcessStartInfo();
                startInfo.FileName = "cmd.exe";
                startInfo.Arguments = " /C " + cmd;//表示执行命令后马上退出
                startInfo.UseShellExecute = false;//不使用系统外壳程序启动
                startInfo.RedirectStandardInput = false;
                startInfo.RedirectStandardOutput = true;
                startInfo.CreateNoWindow = jiaohu;
                process.StartInfo = startInfo;

                try
                {
                    if(process.Start())
                    {
                        if (sec == 0)
                        {
                            process.WaitForExit();//无限等待进程结束
                        }
                    }
                    else
                    {
                        process.WaitForExit(sec);//指定时间等待进程结束
                    }
                    //output = process.StandardOutput.ReadLine();
                }
                catch(Exception ex)
                {
                    MessageBox.Show(ex.Message);
                }
                finally
                {
                    if(process!= null)
                    {
                        process.Close();
                    }
                }
            }
            return output;
        }

        /// <summary>
        /// 下载共享文件
        /// </summary>
        /// <param name="url"></param>
        /// <param name="output_dir"></param>
        public void download_sharefile(string url, string output_dir)
        {
            WebClient client = new WebClient();
            string filename = url.Substring(url.LastIndexOf("\\") + 1);
            string op_path = output_dir + "\\" + filename;
            try
            {
                client.DownloadFile(url, op_path);
            }
            catch (Exception ex)
            {
                MessageBox.Show(ex.Message);
            }
        }

        public void upload_sharefile(string filepath, string urlpath, string user, string pwd)
        {
            //这个自己去网上找实现吧，不难
        }


        /// <summary>
        /// 压缩文件
        /// </summary>
        /// <param name="filepath"></param>
        /// <param name="new_name"></param>
        /// <param name="dst_path"></param>
        /// <returns></returns>
        public bool gz_file(string filepath, string new_name, string dst_path)
        {
            bool result = false;

            if( !(File.Exists(filepath) || Directory.Exists(filepath)))
            {
                return result;
            }

            Process process = new Process();
            process.StartInfo.FileName = @"C:\Program Files\2345Soft\HaoZip\HaoZipC.exe";
            process.StartInfo.Arguments = " a -tzip " + new_name + " " + filepath + " -o" + dst_path;
            process.StartInfo.WindowStyle = ProcessWindowStyle.Hidden;

            try
            {
                process.Start();
                process.WaitForExit();
                if(process.HasExited)
                {
                    result = true;
                }
            }
            catch (Exception ex)
            {
                MessageBox.Show(ex.Message);
            }
            finally
            {
                if (process != null)
                {
                    process.Close();
                }
            }

            return result;
        }

        public bool ungz_file(string zip_filepath, string dst_path)
        {
            bool result = false;


            Process process = new Process();
            process.StartInfo.FileName = @"C:\Program Files\2345Soft\HaoZip\HaoZipC.exe";
            process.StartInfo.Arguments = " -y x " + zip_filepath + " -o" + dst_path;
            process.StartInfo.WindowStyle = ProcessWindowStyle.Hidden;

            try
            {
                process.Start();
                process.WaitForExit();
                if (process.HasExited)
                {
                    result = true;
                }
            }
            catch (Exception ex)
            {
                MessageBox.Show(ex.Message);
            }
            finally
            {
                if (process != null)
                {
                    process.Close();
                }
            }

            return result;
        }

        /// <summary>
        /// 将list内容写到指定文件
        /// </summary>
        /// <param name="path"></param>
        /// <param name="linelist"></param>

        public void writefile_list(string path, ArrayList linelist)
        {
            FileStream fs = new FileStream(path, FileMode.Create);
            StreamWriter sw = new StreamWriter(fs, Encoding.Default);

            for(int i = 0; i < linelist.Count; i++)
            {
                sw.WriteLine(linelist[i]);
            }

            sw.Flush();
            sw.Close();
            fs.Close();
        }

        /// <summary>
        /// list写到文件，还可以删除指定行
        /// </summary>
        /// <param name="path"></param>
        /// <param name="linelist"></param>
        public void writefile_list(string path, ArrayList linelist, string filter)
        {
            FileStream fs = new FileStream(path, FileMode.Create);
            StreamWriter sw = new StreamWriter(fs, Encoding.Default);

            for (int i = 0; i < linelist.Count; i++)
            {
                if (!linelist[i].ToString().Contains(filter))
                {
                    sw.WriteLine(linelist[i]);
                }
            }

            sw.Flush();
            sw.Close();
            fs.Close();
        }

        /// <summary>
        /// 将sortlist按分隔符写入文件，支持反序
        /// </summary>
        /// <param name="path"></param>
        /// <param name="slist"></param>
        /// <param name="split"></param>
        /// <param name="reverse"></param>
        public void writefile_sortlist(string path, SortedList<string, string> slist, char split, bool reverse)
        {
            FileStream fs = new FileStream(path, FileMode.Create);
            StreamWriter sw = new StreamWriter(fs, Encoding.Default);

            foreach (KeyValuePair<string, string> line in slist)
            {
                string key = line.Key.Trim();
                string value = line.Value.Trim();
                if (!reverse)
                {
                    sw.WriteLine(value + split + key);
                }
                else
                {
                    sw.WriteLine(key + split + value);
                }
                
            }

            sw.Flush();
            sw.Close();
            fs.Close();
        }

        /// <summary>
        /// 读取文件内容到list
        /// </summary>
        /// <param name="filepath"></param>
        /// <param name="linelist"></param>
        /// <returns></returns>
        public bool get_file_content(string filepath, ArrayList linelist)
        {
            StreamReader sr = new StreamReader(filepath, Encoding.Default);
            string line = "";
            while(line != null)
            {
                line = sr.ReadLine();
                if (line != null)
                {
                    linelist.Add(line);
                }
            }
            sr.Close();
            return true;
        }

        public bool get_file_content(string filepath, ArrayList linelist, Encoding encode)
        {
            StreamReader sr = new StreamReader(filepath, encode);
            string line = "";
            while (line != null)
            {
                line = sr.ReadLine();
                if (line != null)
                {
                    linelist.Add(line);
                }
            }
            sr.Close();
            return true;
        }

        /// <summary>
        /// 读取文件内容到sortedlist,注意删除重复的
        /// </summary>
        /// <param name="filepath"></param>
        /// <param name="linelist"></param>
        /// <returns></returns>
        public bool get_file_content(string filepath, SortedList<string, string> slist, char split)
        {
            StreamReader sr = new StreamReader(filepath, Encoding.Default);
            string line = "";
            while (line != null)
            {
                line = sr.ReadLine();
                if (line != null)
                {
                    string[] tmp = line.Split(split);
                    string outva = "";
                    bool exist = slist.TryGetValue(tmp[1].Trim(), out outva);
                    if (!exist)
                    {
                        slist.Add(tmp[0], tmp[1]);
                    }
                }
            }
            sr.Close();
            return true;
        }

        /// <summary>
        /// 删除文件中收个匹配特定字符串的行
        /// </summary>
        /// <param name="path"></param>
        /// <param name="cmpstr"></param>
        public void writefile_list_fordel(string path, string cmpstr)
        {
            ArrayList linelist = new ArrayList();
            string filter = "chenguojiabin123456";
            get_file_content(path, linelist);
            for(int i = 0; i < linelist.Count; i++)
            {
                string tmpline = linelist[i].ToString().Trim();
                if(lc.search_all_word_match(cmpstr, tmpline))
                {
                    linelist[i] = filter;
                    break;
                }
            }
            writefile_list(path, linelist, filter);
        }

        /// <summary>
        /// 删除文件中特定多行
        /// </summary>
        /// <param name="path"></param>
        /// <param name="start_idx"></param>
        /// <param name="end_idx"></param>
        public void writefile_list_fordel(string path, int start_idx, int end_idx)
        {
            ArrayList linelist = new ArrayList();
            string filter = "chenguojiabin123456";
            get_file_content(path, linelist);
            for (int i = 0; i < linelist.Count; i++)
            {
                if (i < start_idx || i > end_idx)
                {
                    continue;
                }
                linelist[i] = filter;

            }
            writefile_list(path, linelist, filter);
        }

        public void write_code_auto(string fpath, int offset, string cmpstr, string old_content, string new_content)
        {
            bool findflag = false;
            ArrayList linelist = new ArrayList();
            get_file_content(fpath, linelist);

            FileStream fs = new FileStream(fpath, FileMode.Create);
            StreamWriter sw = new StreamWriter(fs, Encoding.Default);

            int line_index = -1;

            for(int i = 0; i < linelist.Count; i++)
            {
                if (offset < 0)//在指定代码前加
                {
                    if (findflag == true)//只替换一次即可
                    {
                        sw.WriteLine(linelist[i]);
                        continue;
                    }

                    if (linelist[i].ToString().Contains(cmpstr))
                    {
                        sw.WriteLine(new_content);
                        findflag = true;
                    }
                    sw.WriteLine(linelist[i]);
                }
                else if (offset > 0)//在指定代码后offset位置加
                {
                    sw.WriteLine(linelist[i]);
                    if (linelist[i].ToString().Contains(cmpstr))
                    {
                        line_index = i + offset - 1;
                    }
                    if (line_index == i)
                    {
                        sw.WriteLine(new_content);
                        findflag = true;
                    }
                    if (findflag != true && i == linelist.Count - 1)
                    {
                        sw.WriteLine(new_content);
                        findflag = true;
                    }
                }
                else if (offset == 0)//替换当前行
                {
                    if (linelist[i].ToString().Contains(cmpstr))
                    {
                        string new_line = "";
                        if (old_content == null)
                        {
                            new_line = new_content;
                        }
                        else
                        {
                            new_line = linelist[i].ToString().Replace(old_content, new_content);
                        }
                        sw.WriteLine(new_line);
                        findflag = true;
                    }
                    else
                    {
                        sw.WriteLine(linelist[i]);
                    }
                }
            }
            sw.Flush();
            sw.Close();
            fs.Close();
            if(findflag ==false)
            {
                findflag = true;
                Clipboard.SetDataObject(cmpstr);
                MessageBox.Show(fpath + ":[ " + cmpstr + "]代码生成失败，未找到插入点");
            }
        }

        public FileInfo get_fi_from_root_dir(string root, string file_name)
        {
            try
            {
                DirectoryInfo TheFolder = new DirectoryInfo(root);
                FileInfo[] filist = TheFolder.GetFiles(file_name, SearchOption.AllDirectories);
                if(filist.Length!=1)
                {
                    MessageBox.Show("找目标文件路径异常");
                }
                return filist[0];
            }
            catch (Exception)
            {
                throw;
            }
        }
    }
}
