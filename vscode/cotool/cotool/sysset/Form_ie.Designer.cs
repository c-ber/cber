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
            this.btn_read = new System.Windows.Forms.Button();
            this.groupBox2 = new System.Windows.Forms.GroupBox();
            this.btn_savegw = new System.Windows.Forms.Button();
            this.tbox_gw = new System.Windows.Forms.TextBox();
            this.btn_remove = new System.Windows.Forms.Button();
            this.groupBox3 = new System.Windows.Forms.GroupBox();
            this.btn_restart = new System.Windows.Forms.Button();
            this.label5 = new System.Windows.Forms.Label();
            this.btn_aria = new System.Windows.Forms.Button();
            this.btn_flash = new System.Windows.Forms.Button();
            this.btn_kill = new System.Windows.Forms.Button();
            this.label_xl = new System.Windows.Forms.Label();
            this.groupBox4 = new System.Windows.Forms.GroupBox();
            this.btn_navi = new System.Windows.Forms.Button();
            this.label6 = new System.Windows.Forms.Label();
            this.btn_close_mysql = new System.Windows.Forms.Button();
            this.btn_start_mysql = new System.Windows.Forms.Button();
            this.groupBox1.SuspendLayout();
            this.groupBox2.SuspendLayout();
            this.groupBox3.SuspendLayout();
            this.groupBox4.SuspendLayout();
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
            // btn_read
            // 
            this.btn_read.Location = new System.Drawing.Point(22, 26);
            this.btn_read.Name = "btn_read";
            this.btn_read.Size = new System.Drawing.Size(52, 23);
            this.btn_read.TabIndex = 2;
            this.btn_read.Text = "读取";
            this.btn_read.UseVisualStyleBackColor = true;
            this.btn_read.Click += new System.EventHandler(this.btn_readgw_Click);
            // 
            // groupBox2
            // 
            this.groupBox2.Controls.Add(this.btn_savegw);
            this.groupBox2.Controls.Add(this.tbox_gw);
            this.groupBox2.Controls.Add(this.btn_remove);
            this.groupBox2.Controls.Add(this.btn_read);
            this.groupBox2.Location = new System.Drawing.Point(15, 261);
            this.groupBox2.Name = "groupBox2";
            this.groupBox2.Size = new System.Drawing.Size(433, 152);
            this.groupBox2.TabIndex = 6;
            this.groupBox2.TabStop = false;
            this.groupBox2.Text = "文本读写";
            // 
            // btn_savegw
            // 
            this.btn_savegw.Location = new System.Drawing.Point(22, 71);
            this.btn_savegw.Name = "btn_savegw";
            this.btn_savegw.Size = new System.Drawing.Size(52, 23);
            this.btn_savegw.TabIndex = 5;
            this.btn_savegw.Text = "保存";
            this.btn_savegw.UseVisualStyleBackColor = true;
            this.btn_savegw.Click += new System.EventHandler(this.btn_savegw_Click);
            // 
            // tbox_gw
            // 
            this.tbox_gw.Location = new System.Drawing.Point(80, 25);
            this.tbox_gw.Multiline = true;
            this.tbox_gw.Name = "tbox_gw";
            this.tbox_gw.Size = new System.Drawing.Size(339, 113);
            this.tbox_gw.TabIndex = 4;
            // 
            // btn_remove
            // 
            this.btn_remove.Location = new System.Drawing.Point(22, 112);
            this.btn_remove.Name = "btn_remove";
            this.btn_remove.Size = new System.Drawing.Size(52, 23);
            this.btn_remove.TabIndex = 3;
            this.btn_remove.Text = "清除";
            this.btn_remove.UseVisualStyleBackColor = true;
            this.btn_remove.Click += new System.EventHandler(this.btn_remove_Click);
            // 
            // groupBox3
            // 
            this.groupBox3.Controls.Add(this.btn_restart);
            this.groupBox3.Controls.Add(this.label5);
            this.groupBox3.Controls.Add(this.btn_aria);
            this.groupBox3.Controls.Add(this.btn_flash);
            this.groupBox3.Controls.Add(this.btn_kill);
            this.groupBox3.Controls.Add(this.label_xl);
            this.groupBox3.Location = new System.Drawing.Point(434, 16);
            this.groupBox3.Name = "groupBox3";
            this.groupBox3.Size = new System.Drawing.Size(323, 106);
            this.groupBox3.TabIndex = 7;
            this.groupBox3.TabStop = false;
            this.groupBox3.Text = "迅雷进程情况";
            // 
            // btn_restart
            // 
            this.btn_restart.Location = new System.Drawing.Point(225, 77);
            this.btn_restart.Name = "btn_restart";
            this.btn_restart.Size = new System.Drawing.Size(92, 23);
            this.btn_restart.TabIndex = 5;
            this.btn_restart.Text = "执行web脚本";
            this.btn_restart.UseVisualStyleBackColor = true;
            this.btn_restart.Click += new System.EventHandler(this.btn_restart_Click);
            // 
            // label5
            // 
            this.label5.AutoSize = true;
            this.label5.Font = new System.Drawing.Font("宋体", 9F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.label5.Location = new System.Drawing.Point(223, 27);
            this.label5.Name = "label5";
            this.label5.Size = new System.Drawing.Size(77, 12);
            this.label5.TabIndex = 4;
            this.label5.Text = "B站下载工具";
            // 
            // btn_aria
            // 
            this.btn_aria.Location = new System.Drawing.Point(225, 48);
            this.btn_aria.Name = "btn_aria";
            this.btn_aria.Size = new System.Drawing.Size(92, 23);
            this.btn_aria.TabIndex = 3;
            this.btn_aria.Text = "启动B站web";
            this.btn_aria.UseVisualStyleBackColor = true;
            this.btn_aria.Click += new System.EventHandler(this.btn_aria_Click);
            // 
            // btn_flash
            // 
            this.btn_flash.Location = new System.Drawing.Point(39, 48);
            this.btn_flash.Name = "btn_flash";
            this.btn_flash.Size = new System.Drawing.Size(75, 23);
            this.btn_flash.TabIndex = 2;
            this.btn_flash.Text = "刷新";
            this.btn_flash.UseVisualStyleBackColor = true;
            this.btn_flash.Click += new System.EventHandler(this.btn_flash_Click);
            // 
            // btn_kill
            // 
            this.btn_kill.Location = new System.Drawing.Point(39, 77);
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
            // groupBox4
            // 
            this.groupBox4.Controls.Add(this.btn_navi);
            this.groupBox4.Controls.Add(this.label6);
            this.groupBox4.Controls.Add(this.btn_close_mysql);
            this.groupBox4.Controls.Add(this.btn_start_mysql);
            this.groupBox4.Location = new System.Drawing.Point(40, 138);
            this.groupBox4.Name = "groupBox4";
            this.groupBox4.Size = new System.Drawing.Size(200, 100);
            this.groupBox4.TabIndex = 3;
            this.groupBox4.TabStop = false;
            this.groupBox4.Text = "mysql开关";
            // 
            // btn_navi
            // 
            this.btn_navi.Location = new System.Drawing.Point(9, 67);
            this.btn_navi.Name = "btn_navi";
            this.btn_navi.Size = new System.Drawing.Size(75, 23);
            this.btn_navi.TabIndex = 3;
            this.btn_navi.Text = "navicat";
            this.btn_navi.UseVisualStyleBackColor = true;
            this.btn_navi.Click += new System.EventHandler(this.btn_navi_Click);
            // 
            // label6
            // 
            this.label6.AutoSize = true;
            this.label6.Font = new System.Drawing.Font("微软雅黑", 10.5F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.label6.ForeColor = System.Drawing.Color.FromArgb(((int)(((byte)(192)))), ((int)(((byte)(0)))), ((int)(((byte)(192)))));
            this.label6.Location = new System.Drawing.Point(61, 70);
            this.label6.Name = "label6";
            this.label6.Size = new System.Drawing.Size(0, 20);
            this.label6.TabIndex = 2;
            // 
            // btn_close_mysql
            // 
            this.btn_close_mysql.Location = new System.Drawing.Point(109, 32);
            this.btn_close_mysql.Name = "btn_close_mysql";
            this.btn_close_mysql.Size = new System.Drawing.Size(75, 23);
            this.btn_close_mysql.TabIndex = 1;
            this.btn_close_mysql.Text = "关闭服务";
            this.btn_close_mysql.UseVisualStyleBackColor = true;
            this.btn_close_mysql.Click += new System.EventHandler(this.btn_close_mysql_Click);
            // 
            // btn_start_mysql
            // 
            this.btn_start_mysql.Location = new System.Drawing.Point(9, 32);
            this.btn_start_mysql.Name = "btn_start_mysql";
            this.btn_start_mysql.Size = new System.Drawing.Size(75, 23);
            this.btn_start_mysql.TabIndex = 0;
            this.btn_start_mysql.Text = "启动服务";
            this.btn_start_mysql.UseVisualStyleBackColor = true;
            this.btn_start_mysql.Click += new System.EventHandler(this.btn_start_mysql_Click);
            // 
            // Form_ie
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.Controls.Add(this.groupBox4);
            this.Controls.Add(this.groupBox3);
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
            this.groupBox4.ResumeLayout(false);
            this.groupBox4.PerformLayout();
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.Button btn_open;
        private System.Windows.Forms.GroupBox groupBox1;
        private System.ComponentModel.BackgroundWorker backgroundWorker1;
        private System.Windows.Forms.Button btn_close;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Button btn_read;
        private System.Windows.Forms.GroupBox groupBox2;
        private System.Windows.Forms.GroupBox groupBox3;
        private System.Windows.Forms.Button btn_kill;
        private System.Windows.Forms.Label label_xl;
        private System.Windows.Forms.Button btn_flash;
        private System.Windows.Forms.Button btn_aria;
        private System.Windows.Forms.Label label5;
        private System.Windows.Forms.Button btn_restart;
        private System.Windows.Forms.GroupBox groupBox4;
        private System.Windows.Forms.Label label6;
        private System.Windows.Forms.Button btn_close_mysql;
        private System.Windows.Forms.Button btn_start_mysql;
        private System.Windows.Forms.Button btn_navi;
        private System.Windows.Forms.TextBox tbox_gw;
        private System.Windows.Forms.Button btn_remove;
        private System.Windows.Forms.Button btn_savegw;
    }
}
