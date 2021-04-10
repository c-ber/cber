using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Drawing;
using System.Data;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Runtime.InteropServices;
using System.Diagnostics;
using System.IO;

namespace cotool.crack
{
    public partial class Form_crack : UserControl
    {
        public Form_crack()
        {
            InitializeComponent();
        }

        //根据进程名称获取PID
        public static int GetPidByProcessName(string processName)
        {
            Process[] arrayProcess = Process.GetProcessesByName(processName);
            foreach (Process p in arrayProcess)
            {
                return p.Id;
            }
            return 0;
        }

        private void Form_crack_Load(object sender, EventArgs e)
        {
            DataTable dtcomProcessName = new DataTable();
            dtcomProcessName.Columns.Add("name");
            dtcomProcessName.Columns.Add("pid");

            Process[] ps = Process.GetProcesses();//遍历所有的进程
            foreach (Process p in ps.OrderBy(m => m.ProcessName))
            {
                DataRow row = dtcomProcessName.NewRow();
                row["name"] = p.ProcessName;
                row["pid"] = p.Id;
                dtcomProcessName.Rows.Add(row);
                dtcomProcessName.AcceptChanges();
            }

            cbox_pro.DataSource = dtcomProcessName;
            cbox_pro.DisplayMember = "name";
            cbox_pro.ValueMember = "pid";
        }

        #region API

        //从指定内存中读取字节集数据
        [DllImportAttribute("kernel32.dll", EntryPoint = "ReadProcessMemory")]
        public static extern bool ReadProcessMemory(IntPtr hProcess, IntPtr lpBaseAddress, IntPtr lpBuffer, int nSize, IntPtr lpNumberOfBytesRead);

        //从指定内存中写入字节集数据
        [DllImportAttribute("kernel32.dll", EntryPoint = "WriteProcessMemory")]
        public static extern bool WriteProcessMemory(IntPtr hProcess, IntPtr lpBaseAddress, int[] lpBuffer, int nSize, IntPtr lpNumberOfBytesWritten);

        //打开一个已存在的进程对象，并返回进程的句柄
        [DllImportAttribute("kernel32.dll", EntryPoint = "OpenProcess")]
        public static extern IntPtr OpenProcess(int dwDesiredAccess, bool bInheritHandle, int dwProcessId);

        //关闭一个内核对象。其中包括文件、文件映射、进程、线程、安全和同步对象等。
        [DllImport("kernel32.dll")]
        private static extern void CloseHandle(IntPtr hObject);

        #endregion

        #region 使用方法

        //读取内存中的一段数据
        public static byte[] ReadMemoryValue(int baseAddress, string processName, int buf_size)
        {
            Byte[] ret_aray = new Byte[buf_size];
            try
            {
                byte[] buffer = new byte[4];
                //获取缓冲区地址
                IntPtr byteAddress = Marshal.UnsafeAddrOfPinnedArrayElement(buffer, 0);
                //打开一个已存在的进程对象  0x1F0FFF 最高权限
                IntPtr hProcess = OpenProcess(0x1F0FFF, false, GetPidByProcessName(processName));
                //将指定内存中的值读入缓冲区：进程句柄，读取地址，接收地址，读取字节数，实际传送的字节数
                ReadProcessMemory(hProcess, (IntPtr)baseAddress, byteAddress, buf_size, IntPtr.Zero);
                //关闭操作
                CloseHandle(hProcess);

                //从非托管内存中读取整个字节buf。
                for (int i = 0; i < buf_size; i++)
                {
                    ret_aray[i] = Marshal.ReadByte(byteAddress, i);
                }
                return ret_aray;
            }
            catch
            {
                return ret_aray;
            }
        }

        //读取内存中的值
        public static int ReadMemoryValue(int baseAddress, string processName)
        {
            try
            {
                byte[] buffer = new byte[4];
                //获取缓冲区地址
                IntPtr byteAddress = Marshal.UnsafeAddrOfPinnedArrayElement(buffer, 0);
                //打开一个已存在的进程对象  0x1F0FFF 最高权限
                IntPtr hProcess = OpenProcess(0x1F0FFF, false, GetPidByProcessName(processName));
                //将指定内存中的值读入缓冲区
                ReadProcessMemory(hProcess, (IntPtr)baseAddress, byteAddress, 4, IntPtr.Zero);
                //关闭操作
                CloseHandle(hProcess);
                //从非托管内存中读取一个 32 位带符号整数。
                return Marshal.ReadInt32(byteAddress);
            }
            catch
            {
                return 0;
            }
        }

        //将值写入指定内存地址中
        public static void WriteMemoryValue(int baseAddress, string processName, int value)
        {
            try
            {
                //打开一个已存在的进程对象  0x1F0FFF 最高权限
                IntPtr hProcess = OpenProcess(0x1F0FFF, false, GetPidByProcessName(processName));
                //从指定内存中写入字节集数据
                WriteProcessMemory(hProcess, (IntPtr)baseAddress, new int[] { value }, 4, IntPtr.Zero);
                //关闭操作
                CloseHandle(hProcess);
            }
            catch { }
        }

        #endregion

        public int StringToHexOrDec(string strData)
        {
            int dData = -1;
            try
            {
                if ((strData.Length > 2))
                {
                    if ((strData.Substring(0, 2).Equals("0x")) || (strData.Substring(0, 2).Equals("0X")))
                    {
                        string str_sub = strData.Substring(2, strData.Length - 2);
                        dData = int.Parse(str_sub, System.Globalization.NumberStyles.HexNumber);
                    }
                    else
                    {
                        dData = int.Parse(strData, System.Globalization.NumberStyles.Integer);
                    }
                }
                else
                {
                    dData = int.Parse(strData, System.Globalization.NumberStyles.Integer);
                }
            }
            catch (Exception)
            {
                //MessageBox.Show("输入错误: " + strData, "错误");
            }
            return dData;
        }


        private void btn_getmem_Click(object sender, EventArgs e)
        {
            string path = "mem.txt";
            Byte[] array;
            int baseAddress = StringToHexOrDec(tbox_addr.Text);
            int buf_size = Int32.Parse(tbox_len.Text);

            try
            {
                array = ReadMemoryValue(baseAddress, cbox_pro.Text, buf_size);


                //创建一个文件流
                FileStream fs = new FileStream(path, FileMode.Create);

                //将byte数组写入文件中
                fs.Write(array, 0, array.Length);
                //所有流类型都要关闭流，否则会出现内存泄露问题
                fs.Close();
                MessageBox.Show("保存文件成功");
            }
            catch(Exception)
            {
                MessageBox.Show("读取内存并保存文件失败");
            }
        }



        [DllImport("kernel32.dll", SetLastError = true)]
        static extern IntPtr OpenProcess(uint dwDesiredAccess, int bInheritHandle, uint dwProcessId);
 
        [DllImport("kernel32.dll", SetLastError = true)]
        static extern IntPtr GetProcAddress(IntPtr hModule, string lpProcName);
 
        [DllImport("kernel32.dll", SetLastError = true)]
        static extern IntPtr GetModuleHandle(string lpModuleName);
 
        [DllImport("kernel32.dll", SetLastError = true)]
        static extern IntPtr VirtualAllocEx(IntPtr hProcess, IntPtr lpAddress, IntPtr dwSize, uint flAllocationType, uint flProtect);
 
        [DllImport("kernel32.dll", SetLastError = true)]
        static extern int WriteProcessMemory(IntPtr hProcess, IntPtr lpBaseAddress, byte[] buffer, uint size, int lpNumberOfBytesWritten);
 
        [DllImport("kernel32.dll", SetLastError = true)]
        static extern IntPtr CreateRemoteThread(IntPtr hProcess, IntPtr lpThreadAttribute, IntPtr dwStackSize, IntPtr lpStartAddress,
            IntPtr lpParameter, uint dwCreationFlags, IntPtr lpThreadId);


        static readonly IntPtr INTPTR_ZERO = (IntPtr)0;

        public enum DllInjectionResult
        {
            DllNotFound,
            GameProcessNotFound,
            InjectionFailed,
            Success
        }

        bool inject_core(uint pToBeInjected, string sDllPath)
        {
            IntPtr hndProc = OpenProcess((0x2 | 0x8 | 0x10 | 0x20 | 0x400), 1, pToBeInjected);

            if (hndProc == INTPTR_ZERO)
            {
                return false;
            }

            IntPtr lpLLAddress = GetProcAddress(GetModuleHandle("kernel32.dll"), "LoadLibraryA");

            if (lpLLAddress == INTPTR_ZERO)
            {
                return false;
            }

            IntPtr lpAddress = VirtualAllocEx(hndProc, (IntPtr)null, (IntPtr)sDllPath.Length, (0x1000 | 0x2000), 0X40);

            if (lpAddress == INTPTR_ZERO)
            {
                return false;
            }

            byte[] bytes = Encoding.ASCII.GetBytes(sDllPath);

            if (WriteProcessMemory(hndProc, lpAddress, bytes, (uint)bytes.Length, 0) == 0)
            {
                return false;
            }

            if (CreateRemoteThread(hndProc, (IntPtr)null, INTPTR_ZERO, lpLLAddress, lpAddress, 0, (IntPtr)null) == INTPTR_ZERO)
            {
                return false;
            }

            CloseHandle(hndProc);

            return true;
        }

        public DllInjectionResult dll_inject(uint pid, string sDllPath)
        {
            if (!File.Exists(sDllPath))
            {
                return DllInjectionResult.DllNotFound;
            }

            if (pid == 0)
            {
                return DllInjectionResult.GameProcessNotFound;
            }

            if (!inject_core(pid, sDllPath))
            {
                return DllInjectionResult.InjectionFailed;
            }

            return DllInjectionResult.Success;
        }

       
        private void btn_inject_Click(object sender, EventArgs e)
        {
            // "wechat.exe"
            uint pid = uint.Parse(cbox_pro.SelectedValue.ToString());
            dll_inject(pid, tbox_dll.Text);
        }
    }
}
