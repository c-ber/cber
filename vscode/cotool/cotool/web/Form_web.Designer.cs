namespace cotool
{
    partial class Form_web
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
            this.btn_start = new System.Windows.Forms.Button();
            this.tbox_pre_url = new System.Windows.Forms.TextBox();
            this.tbox_fid = new System.Windows.Forms.TextBox();
            this.groupbox_zhuye = new System.Windows.Forms.GroupBox();
            this.tbox_node = new System.Windows.Forms.TextBox();
            this.label4 = new System.Windows.Forms.Label();
            this.label3 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.tbox_tail_url = new System.Windows.Forms.TextBox();
            this.tbox_eid = new System.Windows.Forms.TextBox();
            this.label1 = new System.Windows.Forms.Label();
            this.label_url = new System.Windows.Forms.Label();
            this.groupBox1 = new System.Windows.Forms.GroupBox();
            this.label7 = new System.Windows.Forms.Label();
            this.label6 = new System.Windows.Forms.Label();
            this.label5 = new System.Windows.Forms.Label();
            this.tbox_endid = new System.Windows.Forms.TextBox();
            this.tbox_startid = new System.Windows.Forms.TextBox();
            this.tbox_tail = new System.Windows.Forms.TextBox();
            this.tbox_main = new System.Windows.Forms.TextBox();
            this.btn_downloud = new System.Windows.Forms.Button();
            this.button1 = new System.Windows.Forms.Button();
            this.groupbox_zhuye.SuspendLayout();
            this.groupBox1.SuspendLayout();
            this.SuspendLayout();
            // 
            // btn_start
            // 
            this.btn_start.Location = new System.Drawing.Point(368, 103);
            this.btn_start.Name = "btn_start";
            this.btn_start.Size = new System.Drawing.Size(60, 22);
            this.btn_start.TabIndex = 0;
            this.btn_start.Text = "开始";
            this.btn_start.UseVisualStyleBackColor = true;
            this.btn_start.Click += new System.EventHandler(this.btn_start_Click);
            // 
            // tbox_pre_url
            // 
            this.tbox_pre_url.Location = new System.Drawing.Point(67, 20);
            this.tbox_pre_url.Name = "tbox_pre_url";
            this.tbox_pre_url.Size = new System.Drawing.Size(361, 21);
            this.tbox_pre_url.TabIndex = 1;
            this.tbox_pre_url.Text = "http://www.cnedu.cn/examination/courses/page";
            // 
            // tbox_fid
            // 
            this.tbox_fid.Location = new System.Drawing.Point(67, 47);
            this.tbox_fid.Name = "tbox_fid";
            this.tbox_fid.Size = new System.Drawing.Size(32, 21);
            this.tbox_fid.TabIndex = 2;
            this.tbox_fid.Text = "1";
            this.tbox_fid.TextAlign = System.Windows.Forms.HorizontalAlignment.Center;
            // 
            // groupbox_zhuye
            // 
            this.groupbox_zhuye.Controls.Add(this.tbox_node);
            this.groupbox_zhuye.Controls.Add(this.label4);
            this.groupbox_zhuye.Controls.Add(this.label3);
            this.groupbox_zhuye.Controls.Add(this.label2);
            this.groupbox_zhuye.Controls.Add(this.tbox_tail_url);
            this.groupbox_zhuye.Controls.Add(this.tbox_eid);
            this.groupbox_zhuye.Controls.Add(this.label1);
            this.groupbox_zhuye.Controls.Add(this.label_url);
            this.groupbox_zhuye.Controls.Add(this.tbox_pre_url);
            this.groupbox_zhuye.Controls.Add(this.btn_start);
            this.groupbox_zhuye.Controls.Add(this.tbox_fid);
            this.groupbox_zhuye.Location = new System.Drawing.Point(40, 13);
            this.groupbox_zhuye.Name = "groupbox_zhuye";
            this.groupbox_zhuye.Size = new System.Drawing.Size(443, 131);
            this.groupbox_zhuye.TabIndex = 3;
            this.groupbox_zhuye.TabStop = false;
            this.groupbox_zhuye.Text = "逐页";
            // 
            // tbox_node
            // 
            this.tbox_node.Location = new System.Drawing.Point(252, 47);
            this.tbox_node.Name = "tbox_node";
            this.tbox_node.Size = new System.Drawing.Size(176, 21);
            this.tbox_node.TabIndex = 10;
            this.tbox_node.Text = "divnewslist";
            this.tbox_node.TextAlign = System.Windows.Forms.HorizontalAlignment.Center;
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Location = new System.Drawing.Point(193, 50);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(53, 12);
            this.label4.TabIndex = 9;
            this.label4.Text = "内容节点";
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(14, 50);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(53, 12);
            this.label3.TabIndex = 8;
            this.label3.Text = "页面范围";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(14, 77);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(47, 12);
            this.label2.TabIndex = 7;
            this.label2.Text = "url后缀";
            // 
            // tbox_tail_url
            // 
            this.tbox_tail_url.Location = new System.Drawing.Point(67, 74);
            this.tbox_tail_url.Name = "tbox_tail_url";
            this.tbox_tail_url.Size = new System.Drawing.Size(361, 21);
            this.tbox_tail_url.TabIndex = 6;
            this.tbox_tail_url.Text = ".shtm";
            // 
            // tbox_eid
            // 
            this.tbox_eid.Location = new System.Drawing.Point(126, 47);
            this.tbox_eid.Name = "tbox_eid";
            this.tbox_eid.Size = new System.Drawing.Size(46, 21);
            this.tbox_eid.TabIndex = 5;
            this.tbox_eid.Text = "1654";
            this.tbox_eid.TextAlign = System.Windows.Forms.HorizontalAlignment.Center;
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(103, 50);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(17, 12);
            this.label1.TabIndex = 4;
            this.label1.Text = "To";
            // 
            // label_url
            // 
            this.label_url.AutoSize = true;
            this.label_url.Location = new System.Drawing.Point(14, 23);
            this.label_url.Name = "label_url";
            this.label_url.Size = new System.Drawing.Size(47, 12);
            this.label_url.TabIndex = 3;
            this.label_url.Text = "url前缀";
            // 
            // groupBox1
            // 
            this.groupBox1.Controls.Add(this.label7);
            this.groupBox1.Controls.Add(this.label6);
            this.groupBox1.Controls.Add(this.label5);
            this.groupBox1.Controls.Add(this.tbox_endid);
            this.groupBox1.Controls.Add(this.tbox_startid);
            this.groupBox1.Controls.Add(this.tbox_tail);
            this.groupBox1.Controls.Add(this.tbox_main);
            this.groupBox1.Controls.Add(this.btn_downloud);
            this.groupBox1.Location = new System.Drawing.Point(3, 289);
            this.groupBox1.Name = "groupBox1";
            this.groupBox1.Size = new System.Drawing.Size(777, 100);
            this.groupBox1.TabIndex = 4;
            this.groupBox1.TabStop = false;
            this.groupBox1.Text = "groupBox1";
            // 
            // label7
            // 
            this.label7.AutoSize = true;
            this.label7.Location = new System.Drawing.Point(140, 64);
            this.label7.Name = "label7";
            this.label7.Size = new System.Drawing.Size(17, 12);
            this.label7.TabIndex = 7;
            this.label7.Text = "到";
            // 
            // label6
            // 
            this.label6.AutoSize = true;
            this.label6.Location = new System.Drawing.Point(48, 62);
            this.label6.Name = "label6";
            this.label6.Size = new System.Drawing.Size(17, 12);
            this.label6.TabIndex = 6;
            this.label6.Text = "从";
            // 
            // label5
            // 
            this.label5.AutoSize = true;
            this.label5.Location = new System.Drawing.Point(333, 64);
            this.label5.Name = "label5";
            this.label5.Size = new System.Drawing.Size(29, 12);
            this.label5.TabIndex = 5;
            this.label5.Text = "后缀";
            // 
            // tbox_endid
            // 
            this.tbox_endid.Location = new System.Drawing.Point(163, 59);
            this.tbox_endid.Name = "tbox_endid";
            this.tbox_endid.Size = new System.Drawing.Size(65, 21);
            this.tbox_endid.TabIndex = 4;
            this.tbox_endid.Text = "25";
            // 
            // tbox_startid
            // 
            this.tbox_startid.Location = new System.Drawing.Point(71, 59);
            this.tbox_startid.Name = "tbox_startid";
            this.tbox_startid.Size = new System.Drawing.Size(65, 21);
            this.tbox_startid.TabIndex = 3;
            this.tbox_startid.Text = "25";
            // 
            // tbox_tail
            // 
            this.tbox_tail.Location = new System.Drawing.Point(380, 61);
            this.tbox_tail.Name = "tbox_tail";
            this.tbox_tail.Size = new System.Drawing.Size(100, 21);
            this.tbox_tail.TabIndex = 2;
            this.tbox_tail.Text = ".pdf";
            // 
            // tbox_main
            // 
            this.tbox_main.Location = new System.Drawing.Point(6, 20);
            this.tbox_main.Multiline = true;
            this.tbox_main.Name = "tbox_main";
            this.tbox_main.Size = new System.Drawing.Size(765, 33);
            this.tbox_main.TabIndex = 1;
            this.tbox_main.Text = "https://www.marxists.org/chinese/pdf/marx-engels/me2/me2-";
            // 
            // btn_downloud
            // 
            this.btn_downloud.Location = new System.Drawing.Point(555, 59);
            this.btn_downloud.Name = "btn_downloud";
            this.btn_downloud.Size = new System.Drawing.Size(99, 23);
            this.btn_downloud.TabIndex = 0;
            this.btn_downloud.Text = "批量下载文件";
            this.btn_downloud.UseVisualStyleBackColor = true;
            this.btn_downloud.Click += new System.EventHandler(this.btn_downloud_Click);
            // 
            // button1
            // 
            this.button1.Location = new System.Drawing.Point(558, 170);
            this.button1.Name = "button1";
            this.button1.Size = new System.Drawing.Size(75, 23);
            this.button1.TabIndex = 5;
            this.button1.Text = "测试cele";
            this.button1.UseVisualStyleBackColor = true;
            this.button1.Click += new System.EventHandler(this.button1_Click);
            // 
            // Form_web
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.Controls.Add(this.button1);
            this.Controls.Add(this.groupBox1);
            this.Controls.Add(this.groupbox_zhuye);
            this.Name = "Form_web";
            this.Size = new System.Drawing.Size(796, 416);
            this.groupbox_zhuye.ResumeLayout(false);
            this.groupbox_zhuye.PerformLayout();
            this.groupBox1.ResumeLayout(false);
            this.groupBox1.PerformLayout();
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.Button btn_start;
        private System.Windows.Forms.TextBox tbox_pre_url;
        private System.Windows.Forms.TextBox tbox_fid;
        private System.Windows.Forms.GroupBox groupbox_zhuye;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.TextBox tbox_tail_url;
        private System.Windows.Forms.TextBox tbox_eid;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label label_url;
        private System.Windows.Forms.TextBox tbox_node;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.GroupBox groupBox1;
        private System.Windows.Forms.TextBox tbox_main;
        private System.Windows.Forms.Button btn_downloud;
        private System.Windows.Forms.Label label7;
        private System.Windows.Forms.Label label6;
        private System.Windows.Forms.Label label5;
        private System.Windows.Forms.TextBox tbox_endid;
        private System.Windows.Forms.TextBox tbox_startid;
        private System.Windows.Forms.TextBox tbox_tail;
        private System.Windows.Forms.Button button1;
    }
}
