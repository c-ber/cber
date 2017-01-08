namespace 命令行代码自动生成工具
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
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(Form1));
            this.button1 = new System.Windows.Forms.Button();
            this.textBox_path = new System.Windows.Forms.TextBox();
            this.label1 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.textBox_fun = new System.Windows.Forms.TextBox();
            this.folderBrowserDialog1 = new System.Windows.Forms.FolderBrowserDialog();
            this.button2 = new System.Windows.Forms.Button();
            this.label3 = new System.Windows.Forms.Label();
            this.textBox_pnum = new System.Windows.Forms.TextBox();
            this.textBox_pvar = new System.Windows.Forms.TextBox();
            this.label4 = new System.Windows.Forms.Label();
            this.label5 = new System.Windows.Forms.Label();
            this.textBox_cmd = new System.Windows.Forms.TextBox();
            this.label6 = new System.Windows.Forms.Label();
            this.textBox_note = new System.Windows.Forms.TextBox();
            this.SuspendLayout();
            // 
            // button1
            // 
            this.button1.Location = new System.Drawing.Point(462, 304);
            this.button1.Name = "button1";
            this.button1.Size = new System.Drawing.Size(75, 23);
            this.button1.TabIndex = 0;
            this.button1.Text = "自动生成";
            this.button1.UseVisualStyleBackColor = true;
            this.button1.Click += new System.EventHandler(this.button1_Click);
            // 
            // textBox_path
            // 
            this.textBox_path.Location = new System.Drawing.Point(95, 26);
            this.textBox_path.Multiline = true;
            this.textBox_path.Name = "textBox_path";
            this.textBox_path.Size = new System.Drawing.Size(442, 20);
            this.textBox_path.TabIndex = 1;
            this.textBox_path.Text = "Z:\\hy\\fc7k2_b2442\\package";
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(12, 29);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(77, 12);
            this.label1.TabIndex = 2;
            this.label1.Text = "设置代码目录";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(36, 83);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(53, 12);
            this.label2.TabIndex = 4;
            this.label2.Text = "函数命名";
            // 
            // textBox_fun
            // 
            this.textBox_fun.Location = new System.Drawing.Point(95, 80);
            this.textBox_fun.Multiline = true;
            this.textBox_fun.Name = "textBox_fun";
            this.textBox_fun.Size = new System.Drawing.Size(442, 46);
            this.textBox_fun.TabIndex = 3;
            this.textBox_fun.Text = "set_lte_log(lte_log_set_t log_set)";
            // 
            // button2
            // 
            this.button2.Location = new System.Drawing.Point(543, 24);
            this.button2.Name = "button2";
            this.button2.Size = new System.Drawing.Size(42, 23);
            this.button2.TabIndex = 5;
            this.button2.Text = "浏览";
            this.button2.UseVisualStyleBackColor = true;
            this.button2.Click += new System.EventHandler(this.button2_Click);
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(36, 150);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(53, 12);
            this.label3.TabIndex = 7;
            this.label3.Text = "参数个数";
            // 
            // textBox_pnum
            // 
            this.textBox_pnum.Enabled = false;
            this.textBox_pnum.Location = new System.Drawing.Point(95, 147);
            this.textBox_pnum.Multiline = true;
            this.textBox_pnum.Name = "textBox_pnum";
            this.textBox_pnum.Size = new System.Drawing.Size(66, 26);
            this.textBox_pnum.TabIndex = 6;
            this.textBox_pnum.Text = "1";
            // 
            // textBox_pvar
            // 
            this.textBox_pvar.Location = new System.Drawing.Point(95, 188);
            this.textBox_pvar.Multiline = true;
            this.textBox_pvar.Name = "textBox_pvar";
            this.textBox_pvar.Size = new System.Drawing.Size(442, 26);
            this.textBox_pvar.TabIndex = 8;
            this.textBox_pvar.Text = "log_set";
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Location = new System.Drawing.Point(12, 191);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(77, 12);
            this.label4.TabIndex = 9;
            this.label4.Text = "参数变量定义";
            // 
            // label5
            // 
            this.label5.AutoSize = true;
            this.label5.Location = new System.Drawing.Point(24, 243);
            this.label5.Name = "label5";
            this.label5.Size = new System.Drawing.Size(65, 12);
            this.label5.TabIndex = 11;
            this.label5.Text = "命令字定义";
            // 
            // textBox_cmd
            // 
            this.textBox_cmd.Location = new System.Drawing.Point(95, 240);
            this.textBox_cmd.Multiline = true;
            this.textBox_cmd.Name = "textBox_cmd";
            this.textBox_cmd.Size = new System.Drawing.Size(265, 26);
            this.textBox_cmd.TabIndex = 10;
            this.textBox_cmd.Text = "NPCP_CMD_SET_LTE_LOG";
            // 
            // label6
            // 
            this.label6.AutoSize = true;
            this.label6.Location = new System.Drawing.Point(24, 287);
            this.label6.Name = "label6";
            this.label6.Size = new System.Drawing.Size(65, 12);
            this.label6.TabIndex = 13;
            this.label6.Text = "命令字注释";
            // 
            // textBox_note
            // 
            this.textBox_note.Location = new System.Drawing.Point(95, 284);
            this.textBox_note.Multiline = true;
            this.textBox_note.Name = "textBox_note";
            this.textBox_note.Size = new System.Drawing.Size(265, 26);
            this.textBox_note.TabIndex = 12;
            this.textBox_note.Text = "关联模块：设置日志开关";
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(587, 371);
            this.Controls.Add(this.label6);
            this.Controls.Add(this.textBox_note);
            this.Controls.Add(this.label5);
            this.Controls.Add(this.textBox_cmd);
            this.Controls.Add(this.label4);
            this.Controls.Add(this.textBox_pvar);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.textBox_pnum);
            this.Controls.Add(this.button2);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.textBox_fun);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.textBox_path);
            this.Controls.Add(this.button1);
            this.Icon = ((System.Drawing.Icon)(resources.GetObject("$this.Icon")));
            this.Name = "Form1";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "命令行代码自动生成工具(by cber)";
            this.FormClosing += new System.Windows.Forms.FormClosingEventHandler(this.Form1_FormClosing);
            this.Load += new System.EventHandler(this.Form1_Load);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Button button1;
        private System.Windows.Forms.TextBox textBox_path;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.TextBox textBox_fun;
        private System.Windows.Forms.FolderBrowserDialog folderBrowserDialog1;
        private System.Windows.Forms.Button button2;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.TextBox textBox_pnum;
        private System.Windows.Forms.TextBox textBox_pvar;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.Label label5;
        private System.Windows.Forms.TextBox textBox_cmd;
        private System.Windows.Forms.Label label6;
        private System.Windows.Forms.TextBox textBox_note;
    }
}

