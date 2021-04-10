namespace cotool.crack
{
    partial class Form_crack
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
            this.groupBox1 = new System.Windows.Forms.GroupBox();
            this.btn_getmem = new System.Windows.Forms.Button();
            this.tbox_len = new System.Windows.Forms.TextBox();
            this.label3 = new System.Windows.Forms.Label();
            this.tbox_addr = new System.Windows.Forms.TextBox();
            this.label2 = new System.Windows.Forms.Label();
            this.cbox_pro = new System.Windows.Forms.ComboBox();
            this.label1 = new System.Windows.Forms.Label();
            this.btn_inject = new System.Windows.Forms.Button();
            this.tbox_dll = new System.Windows.Forms.TextBox();
            this.label4 = new System.Windows.Forms.Label();
            this.groupBox1.SuspendLayout();
            this.SuspendLayout();
            // 
            // groupBox1
            // 
            this.groupBox1.Controls.Add(this.label4);
            this.groupBox1.Controls.Add(this.btn_inject);
            this.groupBox1.Controls.Add(this.btn_getmem);
            this.groupBox1.Controls.Add(this.tbox_len);
            this.groupBox1.Controls.Add(this.label3);
            this.groupBox1.Controls.Add(this.tbox_addr);
            this.groupBox1.Controls.Add(this.label2);
            this.groupBox1.Controls.Add(this.cbox_pro);
            this.groupBox1.Controls.Add(this.label1);
            this.groupBox1.Controls.Add(this.tbox_dll);
            this.groupBox1.Location = new System.Drawing.Point(16, 16);
            this.groupBox1.Name = "groupBox1";
            this.groupBox1.Size = new System.Drawing.Size(768, 167);
            this.groupBox1.TabIndex = 0;
            this.groupBox1.TabStop = false;
            this.groupBox1.Text = "内存到文件";
            // 
            // btn_getmem
            // 
            this.btn_getmem.Location = new System.Drawing.Point(251, 19);
            this.btn_getmem.Name = "btn_getmem";
            this.btn_getmem.Size = new System.Drawing.Size(57, 59);
            this.btn_getmem.TabIndex = 6;
            this.btn_getmem.Text = "开始";
            this.btn_getmem.UseVisualStyleBackColor = true;
            this.btn_getmem.Click += new System.EventHandler(this.btn_getmem_Click);
            // 
            // tbox_len
            // 
            this.tbox_len.Location = new System.Drawing.Point(173, 57);
            this.tbox_len.Name = "tbox_len";
            this.tbox_len.RightToLeft = System.Windows.Forms.RightToLeft.No;
            this.tbox_len.Size = new System.Drawing.Size(72, 21);
            this.tbox_len.TabIndex = 5;
            this.tbox_len.Text = "4";
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(135, 61);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(41, 12);
            this.label3.TabIndex = 4;
            this.label3.Text = "长度：";
            // 
            // tbox_addr
            // 
            this.tbox_addr.Location = new System.Drawing.Point(47, 57);
            this.tbox_addr.Name = "tbox_addr";
            this.tbox_addr.RightToLeft = System.Windows.Forms.RightToLeft.No;
            this.tbox_addr.Size = new System.Drawing.Size(72, 21);
            this.tbox_addr.TabIndex = 3;
            this.tbox_addr.Text = "0x008e4000";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(9, 61);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(41, 12);
            this.label2.TabIndex = 2;
            this.label2.Text = "地址：";
            // 
            // cbox_pro
            // 
            this.cbox_pro.FormattingEnabled = true;
            this.cbox_pro.Location = new System.Drawing.Point(47, 20);
            this.cbox_pro.Name = "cbox_pro";
            this.cbox_pro.Size = new System.Drawing.Size(198, 20);
            this.cbox_pro.TabIndex = 0;
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(11, 23);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(41, 12);
            this.label1.TabIndex = 1;
            this.label1.Text = "进程：";
            // 
            // btn_inject
            // 
            this.btn_inject.Location = new System.Drawing.Point(705, 134);
            this.btn_inject.Name = "btn_inject";
            this.btn_inject.Size = new System.Drawing.Size(57, 24);
            this.btn_inject.TabIndex = 0;
            this.btn_inject.Text = "Dll注入";
            this.btn_inject.UseVisualStyleBackColor = true;
            this.btn_inject.Click += new System.EventHandler(this.btn_inject_Click);
            // 
            // tbox_dll
            // 
            this.tbox_dll.Location = new System.Drawing.Point(70, 137);
            this.tbox_dll.Name = "tbox_dll";
            this.tbox_dll.Size = new System.Drawing.Size(692, 21);
            this.tbox_dll.TabIndex = 7;
            this.tbox_dll.Text = "M:\\code\\GetWeChatPic\\Debug\\GetWeChatPic.dll";
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Location = new System.Drawing.Point(16, 142);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(47, 12);
            this.label4.TabIndex = 8;
            this.label4.Text = "Dll路径";
            // 
            // Form_crack
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.Controls.Add(this.groupBox1);
            this.Name = "Form_crack";
            this.Size = new System.Drawing.Size(796, 416);
            this.Load += new System.EventHandler(this.Form_crack_Load);
            this.groupBox1.ResumeLayout(false);
            this.groupBox1.PerformLayout();
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.GroupBox groupBox1;
        private System.Windows.Forms.ComboBox cbox_pro;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.TextBox tbox_addr;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.TextBox tbox_len;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.Button btn_getmem;
        private System.Windows.Forms.Button btn_inject;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.TextBox tbox_dll;
    }
}
