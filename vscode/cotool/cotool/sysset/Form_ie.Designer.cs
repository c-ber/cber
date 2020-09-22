namespace cotool.sysset
{
    partial class Form_ie
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

        #region 组件设计器生成的代码

        /// <summary> 
        /// 设计器支持所需的方法 - 不要修改
        /// 使用代码编辑器修改此方法的内容。
        /// </summary>
        private void InitializeComponent()
        {
            this.btn_open = new System.Windows.Forms.Button();
            this.groupBox1 = new System.Windows.Forms.GroupBox();
            this.label1 = new System.Windows.Forms.Label();
            this.btn_close = new System.Windows.Forms.Button();
            this.backgroundWorker1 = new System.ComponentModel.BackgroundWorker();
            this.btn_mul = new System.Windows.Forms.Button();
            this.tbox_va1 = new System.Windows.Forms.TextBox();
            this.tbox_va2 = new System.Windows.Forms.TextBox();
            this.textBox1 = new System.Windows.Forms.TextBox();
            this.groupBox2 = new System.Windows.Forms.GroupBox();
            this.label4 = new System.Windows.Forms.Label();
            this.label3 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.groupBox3 = new System.Windows.Forms.GroupBox();
            this.btn_flash = new System.Windows.Forms.Button();
            this.btn_kill = new System.Windows.Forms.Button();
            this.label_xl = new System.Windows.Forms.Label();
            this.btn_aria = new System.Windows.Forms.Button();
            this.label5 = new System.Windows.Forms.Label();
            this.groupBox1.SuspendLayout();
            this.groupBox2.SuspendLayout();
            this.groupBox3.SuspendLayout();
            this.SuspendLayout();
            // 
            // btn_open
            // 
            this.btn_open.Location = new System.Drawing.Point(9, 32);
            this.btn_open.Name = "btn_open";
            this.btn_open.Size = new System.Drawing.Size(75, 23);
            this.btn_open.TabIndex = 0;
            this.btn_open.Text = "打开代理";
            this.btn_open.UseVisualStyleBackColor = true;
            this.btn_open.Click += new System.EventHandler(this.btn_open_Click);
            // 
            // groupBox1
            // 
            this.groupBox1.Controls.Add(this.label1);
            this.groupBox1.Controls.Add(this.btn_close);
            this.groupBox1.Controls.Add(this.btn_open);
            this.groupBox1.Location = new System.Drawing.Point(40, 16);
            this.groupBox1.Name = "groupBox1";
            this.groupBox1.Size = new System.Drawing.Size(200, 100);
            this.groupBox1.TabIndex = 1;
            this.groupBox1.TabStop = false;
            this.groupBox1.Text = "IE代理开关";
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Font = new System.Drawing.Font("微软雅黑", 10.5F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.label1.ForeColor = System.Drawing.Color.FromArgb(((int)(((byte)(192)))), ((int)(((byte)(0)))), ((int)(((byte)(192)))));
            this.label1.Location = new System.Drawing.Point(61, 70);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(0, 20);
            this.label1.TabIndex = 2;
            // 
            // btn_close
            // 
            this.btn_close.Location = new System.Drawing.Point(109, 32);
            this.btn_close.Name = "btn_close";
            this.btn_close.Size = new System.Drawing.Size(75, 23);
            this.btn_close.TabIndex = 1;
            this.btn_close.Text = "关闭代理";
            this.btn_close.UseVisualStyleBackColor = true;
            this.btn_close.Click += new System.EventHandler(this.btn_close_Click);
            // 
            // btn_mul
            // 
            this.btn_mul.Location = new System.Drawing.Point(476, 92);
            this.btn_mul.Name = "btn_mul";
            this.btn_mul.Size = new System.Drawing.Size(100, 23);
            this.btn_mul.TabIndex = 2;
            this.btn_mul.Text = "补码1位乘法";
            this.btn_mul.UseVisualStyleBackColor = true;
            this.btn_mul.Click += new System.EventHandler(this.btn_mul_Click);
            // 
            // tbox_va1
            // 
            this.tbox_va1.Location = new System.Drawing.Point(56, 23);
            this.tbox_va1.Name = "tbox_va1";
            this.tbox_va1.Size = new System.Drawing.Size(100, 21);
            this.tbox_va1.TabIndex = 3;
            // 
            // tbox_va2
            // 
            this.tbox_va2.Location = new System.Drawing.Point(209, 23);
            this.tbox_va2.Name = "tbox_va2";
            this.tbox_va2.Size = new System.Drawing.Size(100, 21);
            this.tbox_va2.TabIndex = 4;
            // 
            // textBox1
            // 
            this.textBox1.Location = new System.Drawing.Point(209, 67);
            this.textBox1.Name = "textBox1";
            this.textBox1.Size = new System.Drawing.Size(100, 21);
            this.textBox1.TabIndex = 5;
            // 
            // groupBox2
            // 
            this.groupBox2.Controls.Add(this.label4);
            this.groupBox2.Controls.Add(this.textBox1);
            this.groupBox2.Controls.Add(this.label3);
            this.groupBox2.Controls.Add(this.tbox_va1);
            this.groupBox2.Controls.Add(this.tbox_va2);
            this.groupBox2.Controls.Add(this.label2);
            this.groupBox2.Location = new System.Drawing.Point(432, 25);
            this.groupBox2.Name = "groupBox2";
            this.groupBox2.Size = new System.Drawing.Size(328, 127);
            this.groupBox2.TabIndex = 6;
            this.groupBox2.TabStop = false;
            this.groupBox2.Text = "乘除法";
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Location = new System.Drawing.Point(162, 72);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(41, 12);
            this.label4.TabIndex = 6;
            this.label4.Text = "result";
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(162, 26);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(41, 12);
            this.label3.TabIndex = 1;
            this.label3.Text = "value2";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(6, 26);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(41, 12);
            this.label2.TabIndex = 0;
            this.label2.Text = "value1";
            // 
            // groupBox3
            // 
            this.groupBox3.Controls.Add(this.label5);
            this.groupBox3.Controls.Add(this.btn_aria);
            this.groupBox3.Controls.Add(this.btn_flash);
            this.groupBox3.Controls.Add(this.btn_kill);
            this.groupBox3.Controls.Add(this.label_xl);
            this.groupBox3.Location = new System.Drawing.Point(437, 199);
            this.groupBox3.Name = "groupBox3";
            this.groupBox3.Size = new System.Drawing.Size(323, 100);
            this.groupBox3.TabIndex = 7;
            this.groupBox3.TabStop = false;
            this.groupBox3.Text = "迅雷进程情况";
            // 
            // btn_flash
            // 
            this.btn_flash.Location = new System.Drawing.Point(39, 54);
            this.btn_flash.Name = "btn_flash";
            this.btn_flash.Size = new System.Drawing.Size(75, 23);
            this.btn_flash.TabIndex = 2;
            this.btn_flash.Text = "刷新";
            this.btn_flash.UseVisualStyleBackColor = true;
            this.btn_flash.Click += new System.EventHandler(this.btn_flash_Click);
            // 
            // btn_kill
            // 
            this.btn_kill.Location = new System.Drawing.Point(137, 54);
            this.btn_kill.Name = "btn_kill";
            this.btn_kill.Size = new System.Drawing.Size(75, 23);
            this.btn_kill.TabIndex = 1;
            this.btn_kill.Text = "清理进程";
            this.btn_kill.UseVisualStyleBackColor = true;
            this.btn_kill.Click += new System.EventHandler(this.btn_kill_Click);
            // 
            // label_xl
            // 
            this.label_xl.AutoSize = true;
            this.label_xl.Font = new System.Drawing.Font("宋体", 9F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.label_xl.Location = new System.Drawing.Point(37, 27);
            this.label_xl.Name = "label_xl";
            this.label_xl.Size = new System.Drawing.Size(70, 12);
            this.label_xl.TabIndex = 0;
            this.label_xl.Text = "迅雷未开启";
            // 
            // btn_aria
            // 
            this.btn_aria.Location = new System.Drawing.Point(225, 20);
            this.btn_aria.Name = "btn_aria";
            this.btn_aria.Size = new System.Drawing.Size(92, 23);
            this.btn_aria.TabIndex = 3;
            this.btn_aria.Text = "启动B站下载";
            this.btn_aria.UseVisualStyleBackColor = true;
            this.btn_aria.Click += new System.EventHandler(this.btn_aria_Click);
            // 
            // label5
            // 
            this.label5.AutoSize = true;
            this.label5.Location = new System.Drawing.Point(260, 55);
            this.label5.Name = "label5";
            this.label5.Size = new System.Drawing.Size(0, 12);
            this.label5.TabIndex = 4;
            // 
            // Form_ie
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.Controls.Add(this.groupBox3);
            this.Controls.Add(this.btn_mul);
            this.Controls.Add(this.groupBox1);
            this.Controls.Add(this.groupBox2);
            this.Name = "Form_ie";
            this.Size = new System.Drawing.Size(796, 416);
            this.Load += new System.EventHandler(this.Form_ie_Load);
            this.groupBox1.ResumeLayout(false);
            this.groupBox1.PerformLayout();
            this.groupBox2.ResumeLayout(false);
            this.groupBox2.PerformLayout();
            this.groupBox3.ResumeLayout(false);
            this.groupBox3.PerformLayout();
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.Button btn_open;
        private System.Windows.Forms.GroupBox groupBox1;
        private System.ComponentModel.BackgroundWorker backgroundWorker1;
        private System.Windows.Forms.Button btn_close;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Button btn_mul;
        private System.Windows.Forms.TextBox tbox_va1;
        private System.Windows.Forms.TextBox tbox_va2;
        private System.Windows.Forms.TextBox textBox1;
        private System.Windows.Forms.GroupBox groupBox2;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.GroupBox groupBox3;
        private System.Windows.Forms.Button btn_kill;
        private System.Windows.Forms.Label label_xl;
        private System.Windows.Forms.Button btn_flash;
        private System.Windows.Forms.Button btn_aria;
        private System.Windows.Forms.Label label5;
    }
}
