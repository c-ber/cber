namespace cotool.game
{
    partial class Form_zs
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
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(Form_zs));
            this.tb_playlist = new System.Windows.Forms.TextBox();
            this.dgv_yaoyao = new System.Windows.Forms.DataGridView();
            this.tb_id = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.main_id = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.ID = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.desc = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.tubi = new System.Windows.Forms.DataGridViewComboBoxColumn();
            this.level = new System.Windows.Forms.DataGridViewComboBoxColumn();
            this.score = new System.Windows.Forms.DataGridViewComboBoxColumn();
            this.game_id = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.tb_desc = new System.Windows.Forms.TextBox();
            this.btn_input = new System.Windows.Forms.Button();
            this.btn_submit = new System.Windows.Forms.Button();
            this.btn_save = new System.Windows.Forms.Button();
            this.btn_search = new System.Windows.Forms.Button();
            this.tbx_id = new System.Windows.Forms.TextBox();
            ((System.ComponentModel.ISupportInitialize)(this.dgv_yaoyao)).BeginInit();
            this.SuspendLayout();
            // 
            // tb_playlist
            // 
            this.tb_playlist.Anchor = System.Windows.Forms.AnchorStyles.None;
            this.tb_playlist.Font = new System.Drawing.Font("微软雅黑", 9.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.tb_playlist.Location = new System.Drawing.Point(4, 122);
            this.tb_playlist.Multiline = true;
            this.tb_playlist.Name = "tb_playlist";
            this.tb_playlist.Size = new System.Drawing.Size(104, 180);
            this.tb_playlist.TabIndex = 0;
            this.tb_playlist.WordWrap = false;
            // 
            // dgv_yaoyao
            // 
            this.dgv_yaoyao.AllowUserToAddRows = false;
            this.dgv_yaoyao.Anchor = System.Windows.Forms.AnchorStyles.None;
            this.dgv_yaoyao.ColumnHeadersHeight = 30;
            this.dgv_yaoyao.Columns.AddRange(new System.Windows.Forms.DataGridViewColumn[] {
            this.tb_id,
            this.main_id,
            this.ID,
            this.desc,
            this.tubi,
            this.level,
            this.score,
            this.game_id});
            this.dgv_yaoyao.Location = new System.Drawing.Point(139, 35);
            this.dgv_yaoyao.Name = "dgv_yaoyao";
            this.dgv_yaoyao.RowTemplate.Height = 30;
            this.dgv_yaoyao.Size = new System.Drawing.Size(640, 313);
            this.dgv_yaoyao.TabIndex = 1;
            // 
            // tb_id
            // 
            this.tb_id.HeaderText = "数据库记录ID";
            this.tb_id.Name = "tb_id";
            this.tb_id.Visible = false;
            // 
            // main_id
            // 
            this.main_id.HeaderText = "主号ID";
            this.main_id.Name = "main_id";
            this.main_id.Visible = false;
            // 
            // ID
            // 
            this.ID.HeaderText = "账号";
            this.ID.Name = "ID";
            // 
            // desc
            // 
            this.desc.HeaderText = "玩家情况";
            this.desc.Name = "desc";
            // 
            // tubi
            // 
            this.tubi.HeaderText = "挂B";
            this.tubi.Items.AddRange(new object[] {
            "是",
            "否",
            "不确定"});
            this.tubi.Name = "tubi";
            // 
            // level
            // 
            this.level.HeaderText = "水平";
            this.level.Items.AddRange(new object[] {
            "S",
            "A",
            "B",
            "C",
            "D"});
            this.level.Name = "level";
            // 
            // score
            // 
            this.score.HeaderText = "天梯分";
            this.score.Items.AddRange(new object[] {
            "100",
            "700",
            "800",
            "900",
            "950",
            "1000"});
            this.score.Name = "score";
            // 
            // game_id
            // 
            this.game_id.HeaderText = "游戏局ID";
            this.game_id.Name = "game_id";
            this.game_id.Visible = false;
            // 
            // tb_desc
            // 
            this.tb_desc.Anchor = System.Windows.Forms.AnchorStyles.None;
            this.tb_desc.Location = new System.Drawing.Point(202, 354);
            this.tb_desc.Multiline = true;
            this.tb_desc.Name = "tb_desc";
            this.tb_desc.Size = new System.Drawing.Size(577, 59);
            this.tb_desc.TabIndex = 2;
            // 
            // btn_input
            // 
            this.btn_input.Anchor = System.Windows.Forms.AnchorStyles.None;
            this.btn_input.Location = new System.Drawing.Point(113, 198);
            this.btn_input.Name = "btn_input";
            this.btn_input.Size = new System.Drawing.Size(20, 22);
            this.btn_input.TabIndex = 3;
            this.btn_input.Text = ">";
            this.btn_input.UseVisualStyleBackColor = true;
            this.btn_input.Click += new System.EventHandler(this.btn_input_Click);
            // 
            // btn_submit
            // 
            this.btn_submit.Location = new System.Drawing.Point(139, 354);
            this.btn_submit.Name = "btn_submit";
            this.btn_submit.Size = new System.Drawing.Size(57, 58);
            this.btn_submit.TabIndex = 4;
            this.btn_submit.Text = "评论";
            this.btn_submit.UseVisualStyleBackColor = true;
            this.btn_submit.Click += new System.EventHandler(this.btn_submit_Click);
            // 
            // btn_save
            // 
            this.btn_save.Location = new System.Drawing.Point(685, 4);
            this.btn_save.Name = "btn_save";
            this.btn_save.Size = new System.Drawing.Size(94, 28);
            this.btn_save.TabIndex = 5;
            this.btn_save.Text = "保存到数据库";
            this.btn_save.UseVisualStyleBackColor = true;
            this.btn_save.Click += new System.EventHandler(this.btn_save_Click);
            // 
            // btn_search
            // 
            this.btn_search.BackgroundImage = ((System.Drawing.Image)(resources.GetObject("btn_search.BackgroundImage")));
            this.btn_search.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Stretch;
            this.btn_search.Location = new System.Drawing.Point(304, 3);
            this.btn_search.Name = "btn_search";
            this.btn_search.Size = new System.Drawing.Size(26, 26);
            this.btn_search.TabIndex = 6;
            this.btn_search.UseVisualStyleBackColor = true;
            this.btn_search.Click += new System.EventHandler(this.btn_search_Click);
            // 
            // tbx_id
            // 
            this.tbx_id.Font = new System.Drawing.Font("宋体", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.tbx_id.Location = new System.Drawing.Point(139, 4);
            this.tbx_id.Name = "tbx_id";
            this.tbx_id.Size = new System.Drawing.Size(168, 26);
            this.tbx_id.TabIndex = 7;
            // 
            // Form_zs
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.Controls.Add(this.btn_search);
            this.Controls.Add(this.tbx_id);
            this.Controls.Add(this.btn_save);
            this.Controls.Add(this.btn_submit);
            this.Controls.Add(this.btn_input);
            this.Controls.Add(this.tb_desc);
            this.Controls.Add(this.dgv_yaoyao);
            this.Controls.Add(this.tb_playlist);
            this.Name = "Form_zs";
            this.Size = new System.Drawing.Size(796, 416);
            this.Load += new System.EventHandler(this.Form_zs_Load);
            ((System.ComponentModel.ISupportInitialize)(this.dgv_yaoyao)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.TextBox tb_playlist;
        private System.Windows.Forms.DataGridView dgv_yaoyao;
        private System.Windows.Forms.TextBox tb_desc;
        private System.Windows.Forms.Button btn_input;
        private System.Windows.Forms.Button btn_submit;
        private System.Windows.Forms.Button btn_save;
        private System.Windows.Forms.Button btn_search;
        private System.Windows.Forms.TextBox tbx_id;
        private System.Windows.Forms.DataGridViewTextBoxColumn tb_id;
        private System.Windows.Forms.DataGridViewTextBoxColumn main_id;
        private System.Windows.Forms.DataGridViewTextBoxColumn ID;
        private System.Windows.Forms.DataGridViewTextBoxColumn desc;
        private System.Windows.Forms.DataGridViewComboBoxColumn tubi;
        private System.Windows.Forms.DataGridViewComboBoxColumn level;
        private System.Windows.Forms.DataGridViewComboBoxColumn score;
        private System.Windows.Forms.DataGridViewTextBoxColumn game_id;
    }
}
