namespace cotool.DirFile
{
    partial class Form_file
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
            this.btn_verb = new System.Windows.Forms.Button();
            this.btn_dis_verb = new System.Windows.Forms.Button();
            this.btn_del = new System.Windows.Forms.Button();
            this.tbox_delstr = new System.Windows.Forms.TextBox();
            this.tbox_path = new System.Windows.Forms.TextBox();
            this.label2 = new System.Windows.Forms.Label();
            this.folderBrowserDialog1 = new System.Windows.Forms.FolderBrowserDialog();
            this.label1 = new System.Windows.Forms.Label();
            this.btn_select = new System.Windows.Forms.Button();
            this.label3 = new System.Windows.Forms.Label();
            this.tbox_delhead = new System.Windows.Forms.TextBox();
            this.btn_delhead = new System.Windows.Forms.Button();
            this.groupBox1 = new System.Windows.Forms.GroupBox();
            this.cbox_year = new System.Windows.Forms.ComboBox();
            this.btn_en = new System.Windows.Forms.Button();
            this.btn_root = new System.Windows.Forms.Button();
            this.groupBox1.SuspendLayout();
            this.SuspendLayout();
            // 
            // btn_verb
            // 
            this.btn_verb.Location = new System.Drawing.Point(703, 350);
            this.btn_verb.Name = "btn_verb";
            this.btn_verb.Size = new System.Drawing.Size(75, 23);
            this.btn_verb.TabIndex = 0;
            this.btn_verb.Text = "命名伪装";
            this.btn_verb.UseVisualStyleBackColor = true;
            this.btn_verb.Click += new System.EventHandler(this.button1_Click);
            // 
            // btn_dis_verb
            // 
            this.btn_dis_verb.Location = new System.Drawing.Point(703, 379);
            this.btn_dis_verb.Name = "btn_dis_verb";
            this.btn_dis_verb.Size = new System.Drawing.Size(75, 23);
            this.btn_dis_verb.TabIndex = 1;
            this.btn_dis_verb.Text = "伪装还原";
            this.btn_dis_verb.UseVisualStyleBackColor = true;
            this.btn_dis_verb.Click += new System.EventHandler(this.btn_dis_verb_Click);
            // 
            // btn_del
            // 
            this.btn_del.Location = new System.Drawing.Point(304, 43);
            this.btn_del.Name = "btn_del";
            this.btn_del.Size = new System.Drawing.Size(80, 23);
            this.btn_del.TabIndex = 2;
            this.btn_del.Text = "批量删";
            this.btn_del.UseVisualStyleBackColor = true;
            this.btn_del.Click += new System.EventHandler(this.btn_del_Click);
            // 
            // tbox_delstr
            // 
            this.tbox_delstr.Location = new System.Drawing.Point(110, 45);
            this.tbox_delstr.Name = "tbox_delstr";
            this.tbox_delstr.Size = new System.Drawing.Size(188, 21);
            this.tbox_delstr.TabIndex = 3;
            this.tbox_delstr.Text = "2021考研数学李永乐线代—";
            // 
            // tbox_path
            // 
            this.tbox_path.Location = new System.Drawing.Point(110, 18);
            this.tbox_path.Name = "tbox_path";
            this.tbox_path.Size = new System.Drawing.Size(622, 21);
            this.tbox_path.TabIndex = 4;
            this.tbox_path.Text = "K:\\1--考研\\1-1、高数基础班\\张宇高数";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(3, 48);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(101, 12);
            this.label2.TabIndex = 6;
            this.label2.Text = "删除标题指定内容";
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(3, 21);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(53, 12);
            this.label1.TabIndex = 5;
            this.label1.Text = "文件目录";
            // 
            // btn_select
            // 
            this.btn_select.Location = new System.Drawing.Point(705, 16);
            this.btn_select.Name = "btn_select";
            this.btn_select.Size = new System.Drawing.Size(27, 23);
            this.btn_select.TabIndex = 7;
            this.btn_select.Text = "...";
            this.btn_select.UseVisualStyleBackColor = true;
            this.btn_select.Click += new System.EventHandler(this.btn_select_Click);
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(3, 88);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(101, 12);
            this.label3.TabIndex = 10;
            this.label3.Text = "删除字符前的内容";
            // 
            // tbox_delhead
            // 
            this.tbox_delhead.Location = new System.Drawing.Point(110, 85);
            this.tbox_delhead.Name = "tbox_delhead";
            this.tbox_delhead.Size = new System.Drawing.Size(188, 21);
            this.tbox_delhead.TabIndex = 9;
            this.tbox_delhead.Text = " - ";
            // 
            // btn_delhead
            // 
            this.btn_delhead.Location = new System.Drawing.Point(304, 83);
            this.btn_delhead.Name = "btn_delhead";
            this.btn_delhead.Size = new System.Drawing.Size(80, 23);
            this.btn_delhead.TabIndex = 8;
            this.btn_delhead.Text = "批量删";
            this.btn_delhead.UseVisualStyleBackColor = true;
            this.btn_delhead.Click += new System.EventHandler(this.btn_delhead_Click);
            // 
            // groupBox1
            // 
            this.groupBox1.Controls.Add(this.btn_root);
            this.groupBox1.Controls.Add(this.cbox_year);
            this.groupBox1.Controls.Add(this.btn_en);
            this.groupBox1.Location = new System.Drawing.Point(5, 244);
            this.groupBox1.Name = "groupBox1";
            this.groupBox1.Size = new System.Drawing.Size(379, 169);
            this.groupBox1.TabIndex = 11;
            this.groupBox1.TabStop = false;
            this.groupBox1.Text = "英语真题文本处理";
            // 
            // cbox_year
            // 
            this.cbox_year.FormattingEnabled = true;
            this.cbox_year.Items.AddRange(new object[] {
            "2020真题.txt",
            "2019真题.txt",
            "2018真题.txt",
            "2017真题.txt",
            "2016真题.txt",
            "2015真题.txt",
            "2014真题.txt",
            "2013真题.txt",
            "2012真题.txt",
            "2011真题.txt",
            "2010真题.txt"});
            this.cbox_year.Location = new System.Drawing.Point(23, 26);
            this.cbox_year.Name = "cbox_year";
            this.cbox_year.Size = new System.Drawing.Size(156, 20);
            this.cbox_year.TabIndex = 1;
            // 
            // btn_en
            // 
            this.btn_en.Location = new System.Drawing.Point(185, 23);
            this.btn_en.Name = "btn_en";
            this.btn_en.Size = new System.Drawing.Size(73, 23);
            this.btn_en.TabIndex = 0;
            this.btn_en.Text = "开始处理";
            this.btn_en.UseVisualStyleBackColor = true;
            this.btn_en.Click += new System.EventHandler(this.btn_en_Click);
            // 
            // btn_root
            // 
            this.btn_root.Location = new System.Drawing.Point(23, 68);
            this.btn_root.Name = "btn_root";
            this.btn_root.Size = new System.Drawing.Size(75, 23);
            this.btn_root.TabIndex = 2;
            this.btn_root.Text = "词汇总";
            this.btn_root.UseVisualStyleBackColor = true;
            this.btn_root.Click += new System.EventHandler(this.btn_root_Click);
            // 
            // Form_file
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.Controls.Add(this.groupBox1);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.tbox_delhead);
            this.Controls.Add(this.btn_delhead);
            this.Controls.Add(this.btn_select);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.tbox_path);
            this.Controls.Add(this.tbox_delstr);
            this.Controls.Add(this.btn_del);
            this.Controls.Add(this.btn_dis_verb);
            this.Controls.Add(this.btn_verb);
            this.Name = "Form_file";
            this.Size = new System.Drawing.Size(796, 416);
            this.groupBox1.ResumeLayout(false);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Button btn_verb;
        private System.Windows.Forms.Button btn_dis_verb;
        private System.Windows.Forms.Button btn_del;
        private System.Windows.Forms.TextBox tbox_delstr;
        private System.Windows.Forms.TextBox tbox_path;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.FolderBrowserDialog folderBrowserDialog1;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Button btn_select;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.TextBox tbox_delhead;
        private System.Windows.Forms.Button btn_delhead;
        private System.Windows.Forms.GroupBox groupBox1;
        private System.Windows.Forms.Button btn_en;
        private System.Windows.Forms.ComboBox cbox_year;
        private System.Windows.Forms.Button btn_root;
    }
}
