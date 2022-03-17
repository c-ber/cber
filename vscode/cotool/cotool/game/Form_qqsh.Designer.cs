namespace cotool.game
{
    partial class Form_qqsh
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
            this.btn_tongguan = new System.Windows.Forms.Button();
            this.tbox_fb_fid = new System.Windows.Forms.TextBox();
            this.groupBox1 = new System.Windows.Forms.GroupBox();
            this.label3 = new System.Windows.Forms.Label();
            this.tbox_fb_name = new System.Windows.Forms.TextBox();
            this.label2 = new System.Windows.Forms.Label();
            this.tbox_fb_num = new System.Windows.Forms.TextBox();
            this.label1 = new System.Windows.Forms.Label();
            this.groupBox1.SuspendLayout();
            this.SuspendLayout();
            // 
            // btn_tongguan
            // 
            this.btn_tongguan.Location = new System.Drawing.Point(183, 45);
            this.btn_tongguan.Name = "btn_tongguan";
            this.btn_tongguan.Size = new System.Drawing.Size(90, 23);
            this.btn_tongguan.TabIndex = 0;
            this.btn_tongguan.Text = "生成副本";
            this.btn_tongguan.UseVisualStyleBackColor = true;
            this.btn_tongguan.Click += new System.EventHandler(this.btn_tongguan_Click);
            // 
            // tbox_fb_fid
            // 
            this.tbox_fb_fid.Location = new System.Drawing.Point(65, 20);
            this.tbox_fb_fid.Name = "tbox_fb_fid";
            this.tbox_fb_fid.Size = new System.Drawing.Size(100, 21);
            this.tbox_fb_fid.TabIndex = 1;
            this.tbox_fb_fid.Text = "70030201";
            // 
            // groupBox1
            // 
            this.groupBox1.Controls.Add(this.label3);
            this.groupBox1.Controls.Add(this.tbox_fb_name);
            this.groupBox1.Controls.Add(this.label2);
            this.groupBox1.Controls.Add(this.tbox_fb_num);
            this.groupBox1.Controls.Add(this.label1);
            this.groupBox1.Controls.Add(this.btn_tongguan);
            this.groupBox1.Controls.Add(this.tbox_fb_fid);
            this.groupBox1.Location = new System.Drawing.Point(17, 13);
            this.groupBox1.Name = "groupBox1";
            this.groupBox1.Size = new System.Drawing.Size(291, 110);
            this.groupBox1.TabIndex = 2;
            this.groupBox1.TabStop = false;
            this.groupBox1.Text = "生成副本通关脚本";
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(6, 82);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(41, 12);
            this.label3.TabIndex = 6;
            this.label3.Text = "副本名";
            // 
            // tbox_fb_name
            // 
            this.tbox_fb_name.Location = new System.Drawing.Point(65, 79);
            this.tbox_fb_name.Name = "tbox_fb_name";
            this.tbox_fb_name.Size = new System.Drawing.Size(100, 21);
            this.tbox_fb_name.TabIndex = 5;
            this.tbox_fb_name.Text = "高唐州";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(6, 50);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(41, 12);
            this.label2.TabIndex = 4;
            this.label2.Text = "关卡数";
            // 
            // tbox_fb_num
            // 
            this.tbox_fb_num.Location = new System.Drawing.Point(65, 47);
            this.tbox_fb_num.Name = "tbox_fb_num";
            this.tbox_fb_num.Size = new System.Drawing.Size(100, 21);
            this.tbox_fb_num.TabIndex = 3;
            this.tbox_fb_num.Text = "21";
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(6, 23);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(41, 12);
            this.label1.TabIndex = 2;
            this.label1.Text = "首个ID";
            // 
            // Form_qqsh
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.Controls.Add(this.groupBox1);
            this.Name = "Form_qqsh";
            this.Size = new System.Drawing.Size(796, 416);
            this.groupBox1.ResumeLayout(false);
            this.groupBox1.PerformLayout();
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.Button btn_tongguan;
        private System.Windows.Forms.TextBox tbox_fb_fid;
        private System.Windows.Forms.GroupBox groupBox1;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.TextBox tbox_fb_name;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.TextBox tbox_fb_num;
        private System.Windows.Forms.Label label1;
    }
}
