namespace dns测试
{
    partial class Form1
    {
        /// <summary>
        /// 必需的设计器变量。
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// 清理所有正在使用的资源。
        /// </summary>
        /// <param name="disposing">如果应释放托管资源，为 true；否则为 false。</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows 窗体设计器生成的代码

        /// <summary>
        /// 设计器支持所需的方法 - 不要
        /// 使用代码编辑器修改此方法的内容。
        /// </summary>
        private void InitializeComponent()
        {
            this.tb_web = new System.Windows.Forms.TextBox();
            this.label1 = new System.Windows.Forms.Label();
            this.button1 = new System.Windows.Forms.Button();
            this.label2 = new System.Windows.Forms.Label();
            this.tb_dns_ip = new System.Windows.Forms.TextBox();
            this.tb_iplist = new System.Windows.Forms.TextBox();
            this.label3 = new System.Windows.Forms.Label();
            this.SuspendLayout();
            // 
            // tb_web
            // 
            this.tb_web.Location = new System.Drawing.Point(80, 23);
            this.tb_web.Name = "tb_web";
            this.tb_web.Size = new System.Drawing.Size(577, 21);
            this.tb_web.TabIndex = 0;
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(42, 26);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(29, 12);
            this.label1.TabIndex = 1;
            this.label1.Text = "网址";
            // 
            // button1
            // 
            this.button1.Location = new System.Drawing.Point(328, 60);
            this.button1.Name = "button1";
            this.button1.Size = new System.Drawing.Size(75, 23);
            this.button1.TabIndex = 2;
            this.button1.Text = "DNS查询";
            this.button1.UseVisualStyleBackColor = true;
            this.button1.Click += new System.EventHandler(this.button1_Click);
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(12, 65);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(59, 12);
            this.label2.TabIndex = 4;
            this.label2.Text = "DNS服务器";
            // 
            // tb_dns_ip
            // 
            this.tb_dns_ip.Location = new System.Drawing.Point(80, 62);
            this.tb_dns_ip.Name = "tb_dns_ip";
            this.tb_dns_ip.Size = new System.Drawing.Size(203, 21);
            this.tb_dns_ip.TabIndex = 3;
            // 
            // tb_iplist
            // 
            this.tb_iplist.Location = new System.Drawing.Point(80, 126);
            this.tb_iplist.Multiline = true;
            this.tb_iplist.Name = "tb_iplist";
            this.tb_iplist.Size = new System.Drawing.Size(314, 107);
            this.tb_iplist.TabIndex = 5;
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(30, 126);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(41, 12);
            this.label3.TabIndex = 6;
            this.label3.Text = "IP列表";
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(689, 245);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.tb_iplist);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.tb_dns_ip);
            this.Controls.Add(this.button1);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.tb_web);
            this.Name = "Form1";
            this.Text = "Form1";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.TextBox tb_web;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Button button1;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.TextBox tb_dns_ip;
        private System.Windows.Forms.TextBox tb_iplist;
        private System.Windows.Forms.Label label3;
    }
}

