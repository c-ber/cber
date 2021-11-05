namespace cotool.index
{
    partial class Form_index
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
            this.rtbox_main = new System.Windows.Forms.RichTextBox();
            this.btn_savetext = new System.Windows.Forms.Button();
            this.rtbox_content = new System.Windows.Forms.RichTextBox();
            this.btn_load = new System.Windows.Forms.Button();
            this.btn_savedb = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // rtbox_main
            // 
            this.rtbox_main.BackColor = System.Drawing.Color.AliceBlue;
            this.rtbox_main.BorderStyle = System.Windows.Forms.BorderStyle.None;
            this.rtbox_main.Font = new System.Drawing.Font("微软雅黑", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.rtbox_main.ForeColor = System.Drawing.Color.Red;
            this.rtbox_main.Location = new System.Drawing.Point(250, 15);
            this.rtbox_main.Name = "rtbox_main";
            this.rtbox_main.Size = new System.Drawing.Size(295, 55);
            this.rtbox_main.TabIndex = 0;
            this.rtbox_main.Text = "";
            // 
            // btn_savetext
            // 
            this.btn_savetext.Location = new System.Drawing.Point(605, 366);
            this.btn_savetext.Name = "btn_savetext";
            this.btn_savetext.Size = new System.Drawing.Size(75, 23);
            this.btn_savetext.TabIndex = 1;
            this.btn_savetext.Text = "保存";
            this.btn_savetext.UseVisualStyleBackColor = true;
            this.btn_savetext.Click += new System.EventHandler(this.btn_savetext_Click);
            // 
            // rtbox_content
            // 
            this.rtbox_content.BackColor = System.Drawing.Color.AliceBlue;
            this.rtbox_content.BorderStyle = System.Windows.Forms.BorderStyle.None;
            this.rtbox_content.Font = new System.Drawing.Font("微软雅黑", 14.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.rtbox_content.ForeColor = System.Drawing.Color.Red;
            this.rtbox_content.Location = new System.Drawing.Point(89, 76);
            this.rtbox_content.Name = "rtbox_content";
            this.rtbox_content.Size = new System.Drawing.Size(649, 284);
            this.rtbox_content.TabIndex = 2;
            this.rtbox_content.Text = "";
            // 
            // btn_load
            // 
            this.btn_load.Location = new System.Drawing.Point(89, 366);
            this.btn_load.Name = "btn_load";
            this.btn_load.Size = new System.Drawing.Size(75, 23);
            this.btn_load.TabIndex = 3;
            this.btn_load.Text = "加载";
            this.btn_load.UseVisualStyleBackColor = true;
            this.btn_load.Click += new System.EventHandler(this.btn_load_Click);
            // 
            // btn_savedb
            // 
            this.btn_savedb.Location = new System.Drawing.Point(696, 366);
            this.btn_savedb.Name = "btn_savedb";
            this.btn_savedb.Size = new System.Drawing.Size(75, 23);
            this.btn_savedb.TabIndex = 4;
            this.btn_savedb.Text = "存数据库";
            this.btn_savedb.UseVisualStyleBackColor = true;
            this.btn_savedb.Click += new System.EventHandler(this.btn_savedb_Click);
            // 
            // Form_index
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.Controls.Add(this.btn_savedb);
            this.Controls.Add(this.btn_load);
            this.Controls.Add(this.rtbox_content);
            this.Controls.Add(this.btn_savetext);
            this.Controls.Add(this.rtbox_main);
            this.Name = "Form_index";
            this.Size = new System.Drawing.Size(796, 416);
            this.Load += new System.EventHandler(this.Form_index_Load);
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.RichTextBox rtbox_main;
        private System.Windows.Forms.Button btn_savetext;
        private System.Windows.Forms.RichTextBox rtbox_content;
        private System.Windows.Forms.Button btn_load;
        private System.Windows.Forms.Button btn_savedb;
    }
}
