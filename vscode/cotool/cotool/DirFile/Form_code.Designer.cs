namespace cotool.DirFile
{
    partial class Form_code
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
            this.btn_xiugai = new System.Windows.Forms.Button();
            this.groupBox1 = new System.Windows.Forms.GroupBox();
            this.label2 = new System.Windows.Forms.Label();
            this.tbox_space = new System.Windows.Forms.TextBox();
            this.label1 = new System.Windows.Forms.Label();
            this.tbox_dir = new System.Windows.Forms.TextBox();
            this.groupBox1.SuspendLayout();
            this.SuspendLayout();
            // 
            // btn_xiugai
            // 
            this.btn_xiugai.Location = new System.Drawing.Point(723, 20);
            this.btn_xiugai.Name = "btn_xiugai";
            this.btn_xiugai.Size = new System.Drawing.Size(61, 49);
            this.btn_xiugai.TabIndex = 0;
            this.btn_xiugai.Text = "修改";
            this.btn_xiugai.UseVisualStyleBackColor = true;
            this.btn_xiugai.Click += new System.EventHandler(this.button1_Click);
            // 
            // groupBox1
            // 
            this.groupBox1.Controls.Add(this.label2);
            this.groupBox1.Controls.Add(this.tbox_space);
            this.groupBox1.Controls.Add(this.label1);
            this.groupBox1.Controls.Add(this.btn_xiugai);
            this.groupBox1.Controls.Add(this.tbox_dir);
            this.groupBox1.Location = new System.Drawing.Point(3, 3);
            this.groupBox1.Name = "groupBox1";
            this.groupBox1.Size = new System.Drawing.Size(790, 79);
            this.groupBox1.TabIndex = 1;
            this.groupBox1.TabStop = false;
            this.groupBox1.Text = "在代码类中增加namespace";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(2, 51);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(53, 12);
            this.label2.TabIndex = 4;
            this.label2.Text = "命名空间";
            // 
            // tbox_space
            // 
            this.tbox_space.Location = new System.Drawing.Point(61, 48);
            this.tbox_space.Name = "tbox_space";
            this.tbox_space.Size = new System.Drawing.Size(656, 21);
            this.tbox_space.TabIndex = 3;
            this.tbox_space.Text = "qqshuihu.ns0";
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(6, 29);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(29, 12);
            this.label1.TabIndex = 2;
            this.label1.Text = "目录";
            // 
            // tbox_dir
            // 
            this.tbox_dir.Location = new System.Drawing.Point(61, 20);
            this.tbox_dir.Name = "tbox_dir";
            this.tbox_dir.Size = new System.Drawing.Size(656, 21);
            this.tbox_dir.TabIndex = 1;
            this.tbox_dir.Text = "M:\\svnb\\cber\\gitcode\\vscode\\qqshuihu\\qqshuihu\\ns0";
            // 
            // Form_code
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.Controls.Add(this.groupBox1);
            this.Name = "Form_code";
            this.Size = new System.Drawing.Size(796, 416);
            this.groupBox1.ResumeLayout(false);
            this.groupBox1.PerformLayout();
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.Button btn_xiugai;
        private System.Windows.Forms.GroupBox groupBox1;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.TextBox tbox_dir;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.TextBox tbox_space;
    }
}
