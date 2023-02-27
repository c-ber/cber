using System.Windows.Forms;

namespace cotool.game
{
    partial class xhLogForm
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.components = new System.ComponentModel.Container();
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.Text = "xhLogForm";

            this.groupBox1 = new System.Windows.Forms.GroupBox();
            this.listView1 = new System.Windows.Forms.ListView();
            this.columnHeader1 = new System.Windows.Forms.ColumnHeader();
            this.cmb_timeSel = new System.Windows.Forms.ComboBox();
            this.txt_log = new System.Windows.Forms.RichTextBox();
            this.panel1 = new System.Windows.Forms.Panel();
            this.label3 = new System.Windows.Forms.Label();
            this.button3 = new System.Windows.Forms.Button();
            this.lbl_status = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.txt_searchText = new System.Windows.Forms.TextBox();
            this.button1 = new System.Windows.Forms.Button();
            this.label1 = new System.Windows.Forms.Label();
            this.button2 = new System.Windows.Forms.Button();
            this.groupBox1.SuspendLayout();
            this.panel1.SuspendLayout();
            base.SuspendLayout();
            this.groupBox1.Controls.Add(this.listView1);
            this.groupBox1.Dock = System.Windows.Forms.DockStyle.Left;
            this.groupBox1.Location = new System.Drawing.Point(0, 0);
            this.groupBox1.Name = "groupBox1";
            this.groupBox1.Size = new System.Drawing.Size(200, 567);
            this.groupBox1.TabIndex = 0;
            this.groupBox1.TabStop = false;
            this.groupBox1.Text = "控制面板";
            this.listView1.Columns.AddRange(new System.Windows.Forms.ColumnHeader[1] { this.columnHeader1 });
            this.listView1.Dock = System.Windows.Forms.DockStyle.Fill;
            this.listView1.FullRowSelect = true;
            this.listView1.Location = new System.Drawing.Point(3, 17);
            this.listView1.Name = "listView1";
            this.listView1.Size = new System.Drawing.Size(194, 547);
            this.listView1.TabIndex = 1;
            this.listView1.UseCompatibleStateImageBehavior = false;
            this.listView1.View = System.Windows.Forms.View.Details;
            this.listView1.SelectedIndexChanged += new System.EventHandler(listView1_SelectedIndexChanged);
            this.columnHeader1.Text = "号码";
            this.columnHeader1.Width = 170;
            this.cmb_timeSel.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList;
            this.cmb_timeSel.FormattingEnabled = true;
            this.cmb_timeSel.Location = new System.Drawing.Point(81, 6);
            this.cmb_timeSel.Name = "cmb_timeSel";
            this.cmb_timeSel.Size = new System.Drawing.Size(141, 20);
            this.cmb_timeSel.TabIndex = 1;
            this.cmb_timeSel.SelectedIndexChanged += new System.EventHandler(cmb_timeSel_SelectedIndexChanged);
            this.txt_log.Dock = System.Windows.Forms.DockStyle.Fill;
            this.txt_log.Location = new System.Drawing.Point(200, 32);
            this.txt_log.Name = "txt_log";
            this.txt_log.ReadOnly = true;
            this.txt_log.Size = new System.Drawing.Size(760, 535);
            this.txt_log.TabIndex = 1;
            this.txt_log.Text = "";
            this.panel1.Controls.Add(this.button3);
            this.panel1.Controls.Add(this.button2);
            this.panel1.Controls.Add(this.label3);
            this.panel1.Controls.Add(this.lbl_status);
            this.panel1.Controls.Add(this.cmb_timeSel);
            this.panel1.Controls.Add(this.label2);
            this.panel1.Controls.Add(this.txt_searchText);
            this.panel1.Controls.Add(this.button1);
            this.panel1.Controls.Add(this.label1);
            this.panel1.Dock = System.Windows.Forms.DockStyle.Top;
            this.panel1.Location = new System.Drawing.Point(200, 0);
            this.panel1.Name = "panel1";
            this.panel1.Size = new System.Drawing.Size(760, 32);
            this.panel1.TabIndex = 2;
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(626, 9);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(65, 12);
            this.label3.TabIndex = 8;
            this.label3.Text = "搜索结果：";
            this.button3.Location = new System.Drawing.Point(539, 3);
            this.button3.Name = "button3";
            this.button3.Size = new System.Drawing.Size(75, 23);
            this.button3.TabIndex = 7;
            this.button3.Text = "跟踪关键字";
            this.button3.UseVisualStyleBackColor = true;
            this.button3.Click += new System.EventHandler(button3_Click);
            this.lbl_status.AutoSize = true;
            this.lbl_status.Location = new System.Drawing.Point(697, 9);
            this.lbl_status.Name = "lbl_status";
            this.lbl_status.Size = new System.Drawing.Size(11, 12);
            this.lbl_status.TabIndex = 5;
            this.lbl_status.Text = "-";
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(6, 9);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(77, 12);
            this.label2.TabIndex = 4;
            this.label2.Text = "日志的时间：";
            this.txt_searchText.Location = new System.Drawing.Point(311, 6);
            this.txt_searchText.Name = "txt_searchText";
            this.txt_searchText.Size = new System.Drawing.Size(74, 21);
            this.txt_searchText.TabIndex = 3;
            this.button1.Location = new System.Drawing.Point(391, 3);
            this.button1.Name = "button1";
            this.button1.Size = new System.Drawing.Size(75, 23);
            this.button1.TabIndex = 2;
            this.button1.Text = "搜索";
            this.button1.UseVisualStyleBackColor = true;
            this.button1.Click += new System.EventHandler(button1_Click);
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(228, 9);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(77, 12);
            this.label1.TabIndex = 0;
            this.label1.Text = "搜索关键字：";
            this.button2.Location = new System.Drawing.Point(465, 3);
            this.button2.Name = "button2";
            this.button2.Size = new System.Drawing.Size(75, 23);
            this.button2.TabIndex = 9;
            this.button2.Text = "加载文件";
            this.button2.UseVisualStyleBackColor = true;
            this.button2.Click += new System.EventHandler(button2_Click);
            base.AutoScaleDimensions = new System.Drawing.SizeF(6f, 12f);
            base.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            base.ClientSize = new System.Drawing.Size(960, 567);
            base.Controls.Add(this.txt_log);
            base.Controls.Add(this.panel1);
            base.Controls.Add(this.groupBox1);

            base.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "小黑辅助日志查看工具";
            base.Load += new System.EventHandler(xhLogForm_Load);
            this.groupBox1.ResumeLayout(false);
            this.panel1.ResumeLayout(false);
            this.panel1.PerformLayout();
            base.ResumeLayout(false);
        }

        #endregion

        private GroupBox groupBox1;

        private ListView listView1;

        private ComboBox cmb_timeSel;

        private RichTextBox txt_log;

        private Panel panel1;

        private Button button1;

        private Label label1;

        private ColumnHeader columnHeader1;

        private TextBox txt_searchText;

        private Label label2;

        private Label lbl_status;

        private Button button3;

        private Label label3;

        private Button button2;


    }
}