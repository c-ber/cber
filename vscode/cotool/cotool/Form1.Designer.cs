namespace cotool
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
        /// 设计器支持所需的方法 - 不要修改
        /// 使用代码编辑器修改此方法的内容。
        /// </summary>
        private void InitializeComponent()
        {
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(Form1));
            this.menuStrip1 = new System.Windows.Forms.MenuStrip();
            this.数据库统计ToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.安全统计ToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.系统设置ToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.iE设置ToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.游戏外挂ToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.真三玩家ToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.panel1 = new System.Windows.Forms.Panel();
            this.menuStrip1.SuspendLayout();
            this.SuspendLayout();
            // 
            // menuStrip1
            // 
            this.menuStrip1.BackColor = System.Drawing.SystemColors.ActiveCaption;
            this.menuStrip1.ImageScalingSize = new System.Drawing.Size(20, 20);
            this.menuStrip1.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.数据库统计ToolStripMenuItem,
            this.系统设置ToolStripMenuItem,
            this.游戏外挂ToolStripMenuItem});
            this.menuStrip1.Location = new System.Drawing.Point(0, 0);
            this.menuStrip1.Name = "menuStrip1";
            this.menuStrip1.Padding = new System.Windows.Forms.Padding(4, 2, 0, 2);
            this.menuStrip1.Size = new System.Drawing.Size(796, 25);
            this.menuStrip1.TabIndex = 0;
            this.menuStrip1.Text = "menuStrip1";
            // 
            // 数据库统计ToolStripMenuItem
            // 
            this.数据库统计ToolStripMenuItem.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.安全统计ToolStripMenuItem});
            this.数据库统计ToolStripMenuItem.Name = "数据库统计ToolStripMenuItem";
            this.数据库统计ToolStripMenuItem.Size = new System.Drawing.Size(80, 21);
            this.数据库统计ToolStripMenuItem.Text = "数据库统计";
            // 
            // 安全统计ToolStripMenuItem
            // 
            this.安全统计ToolStripMenuItem.Name = "安全统计ToolStripMenuItem";
            this.安全统计ToolStripMenuItem.Size = new System.Drawing.Size(124, 22);
            this.安全统计ToolStripMenuItem.Text = "安全统计";
            this.安全统计ToolStripMenuItem.Click += new System.EventHandler(this.安全统计ToolStripMenuItem_Click);
            // 
            // 系统设置ToolStripMenuItem
            // 
            this.系统设置ToolStripMenuItem.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.iE设置ToolStripMenuItem});
            this.系统设置ToolStripMenuItem.Name = "系统设置ToolStripMenuItem";
            this.系统设置ToolStripMenuItem.Size = new System.Drawing.Size(68, 21);
            this.系统设置ToolStripMenuItem.Text = "系统设置";
            // 
            // iE设置ToolStripMenuItem
            // 
            this.iE设置ToolStripMenuItem.Name = "iE设置ToolStripMenuItem";
            this.iE设置ToolStripMenuItem.Size = new System.Drawing.Size(111, 22);
            this.iE设置ToolStripMenuItem.Text = "IE设置";
            this.iE设置ToolStripMenuItem.Click += new System.EventHandler(this.iE代理开关ToolStripMenuItem_Click);
            // 
            // 游戏外挂ToolStripMenuItem
            // 
            this.游戏外挂ToolStripMenuItem.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.真三玩家ToolStripMenuItem});
            this.游戏外挂ToolStripMenuItem.Name = "游戏外挂ToolStripMenuItem";
            this.游戏外挂ToolStripMenuItem.Size = new System.Drawing.Size(68, 21);
            this.游戏外挂ToolStripMenuItem.Text = "游戏世界";
            // 
            // 真三玩家ToolStripMenuItem
            // 
            this.真三玩家ToolStripMenuItem.Name = "真三玩家ToolStripMenuItem";
            this.真三玩家ToolStripMenuItem.Size = new System.Drawing.Size(124, 22);
            this.真三玩家ToolStripMenuItem.Text = "真三玩家";
            this.真三玩家ToolStripMenuItem.Click += new System.EventHandler(this.真三玩家ToolStripMenuItem_Click);
            // 
            // panel1
            // 
            this.panel1.Anchor = ((System.Windows.Forms.AnchorStyles)((((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Bottom) 
            | System.Windows.Forms.AnchorStyles.Left) 
            | System.Windows.Forms.AnchorStyles.Right)));
            this.panel1.BackColor = System.Drawing.SystemColors.Window;
            this.panel1.Location = new System.Drawing.Point(0, 25);
            this.panel1.Margin = new System.Windows.Forms.Padding(2);
            this.panel1.Name = "panel1";
            this.panel1.Size = new System.Drawing.Size(796, 416);
            this.panel1.TabIndex = 1;
            this.panel1.SizeChanged += new System.EventHandler(this.panel1_SizeChanged);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(796, 442);
            this.Controls.Add(this.panel1);
            this.Controls.Add(this.menuStrip1);
            this.Icon = ((System.Drawing.Icon)(resources.GetObject("$this.Icon")));
            this.MainMenuStrip = this.menuStrip1;
            this.Margin = new System.Windows.Forms.Padding(2);
            this.Name = "Form1";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "通用工具        — — 编程征服软件世界";
            this.Load += new System.EventHandler(this.Form1_Load);
            this.menuStrip1.ResumeLayout(false);
            this.menuStrip1.PerformLayout();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.MenuStrip menuStrip1;
        private System.Windows.Forms.ToolStripMenuItem 数据库统计ToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem 安全统计ToolStripMenuItem;
        private System.Windows.Forms.Panel panel1;
        private System.Windows.Forms.ToolStripMenuItem 系统设置ToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem iE设置ToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem 游戏外挂ToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem 真三玩家ToolStripMenuItem;
    }
}

