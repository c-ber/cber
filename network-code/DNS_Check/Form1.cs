using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Text;
using System.Windows.Forms;
using System.Net;
using System.Net.NetworkInformation;

namespace dns测试
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }
        public IPAddressCollection GetDnsAddresses()
        {
            NetworkInterface[] adapters = NetworkInterface.GetAllNetworkInterfaces();
            foreach (NetworkInterface adapter in adapters)
            {

                IPInterfaceProperties adapterProperties = adapter.GetIPProperties();
                return adapterProperties.DnsAddresses;
            }
            return null;
        }
        private void button1_Click(object sender, EventArgs e)
        {
            IPHostEntry hostInfo = Dns.GetHostEntry(tb_web.Text);

            tb_iplist.Text = "";
            foreach(IPAddress ip in hostInfo.AddressList)
            {
                tb_iplist.Text += ip.ToString() + Environment.NewLine;
            }
        }
    }
}
