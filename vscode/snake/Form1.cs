using System;
using System.Collections;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace snake
{

    public partial class Form1 : Form
    {
        Point food_cur;
        int food_status = 0; // 0 : FOOD_STAT_NEW; 1 : FOOD_STAT_VALID
        int load = 1;
        int col = 0;
        int row = 0;
        int xs = 30;

        int length = 1;//长度
        int[,] all;
        int[,] direct;//0:上,1:下,2:左,3:右
        Point[,] point;

        List<Point> list = new List<Point>();//存储节点的行列值

        protected override void WndProc(ref Message Msg)
        {
            base.WndProc(ref Msg);
        }

        private int produce_food()
        {
            int first_find = 1;

            if (food_status == 0)
            {
                Random rd = new Random();
                int rlt = rd.Next((col - col % 2 - 1) * (row - row % 2 - 1));
                int count = 0;
                for (int i = 0; i < row - 1; i++)
                {
                    for (int j = 0; j < col - 1; j++)
                    {
                        if (count == rlt && first_find == 1)
                        {
                            first_find = 0;
                            if (all[i, j] == 1)
                            {
                                count++;
                                continue;
                            }
                            else
                            {
                                all[i, j] = 2; //2 means food
                                food_cur.X = i;
                                food_cur.Y = j;
                                return 1;
                            }
                        }
                        else if (count == rlt)
                        {
                            MessageBox.Show("食物都被吃完了");
                            return 2;
                        }
                        else if (rlt == col * row)
                        {
                            if (all[i, j] == 1)
                            {
                                count = 0;
                                continue;
                            }
                            else
                            {
                                all[i, j] = 2;
                                food_cur.X = i;
                                food_cur.Y = j;
                                return 1;
                            }
                        }
                        else
                        {
                            if (all[i, j] == 1 || first_find == 1)
                            {
                                count++;
                                continue;
                            }
                            else
                            {
                                all[i, j] = 2; //2 means food
                                food_cur.X = i;
                                food_cur.Y = j;
                                return 1;
                            }
                        }
                    }
                }
            }
            return 0;
        }
        private void show(Graphics gra)
        {
            for(int i = 0 ; i < row; i++)
            {
                for(int j = 0 ; j < col ; j++)
                {
                    if(all[i,j] == 0)
                    {
                        continue;
                    }
                    Rectangle rect1 = new Rectangle(j * xs, i * xs, xs, xs);//显示是反的，没事
                    if (all[i, j] == 2)
                    {
                        gra.FillRectangle(Brushes.Orange, rect1);
                    }
                    else
                    {
                        gra.FillRectangle(Brushes.Green, rect1);
                    }
                }
            }
        }
        private void set_direct()//设置方向:0:上,1:下,2:左,3:右
        {
            for (int i = 0; i < row; i++)
            {
                for (int j = 0; j < col; j++)
                {
                    if (j == 0)
                    {
                        if (i == 0)
                            direct[i, j] = 3;
                        else
                            direct[i, j] = 0;
                    }
                    else if (j == 1 && i % 2 == 1 && i != row -1)
                    {
                        direct[i, j] = 1;
                    }
                    else if (j == col - 1 && i % 2 == 0)
                    {
                        direct[i, j] = 1;
                    }
                    else if (i == row - 1 && j == 1)
                    {
                        direct[i, j] = 2;
                    }
                    else
                    {
                        if (i % 2 == 1)
                        {
                            direct[i, j] = 2;
                        }
                        else if( i % 2 == 0)
                        {
                            direct[i, j] = 3;
                        }
                    }
                }
            }
        }
        /// <summary>
        /// 需要传参告诉移动方向
        /// </summary>
        private void move()//只移动一步，之后更新方向
        {
            //0:上,1:下,2:左,3:右
            int x_next = 0;
            int y_next = 0;
            if (direct[list[0].X, list[0].Y] == 0)
                x_next = -1;
            else if (direct[list[0].X, list[0].Y] == 1)
                x_next = 1;
            else if (direct[list[0].X, list[0].Y] == 2)
                y_next = -1;
            else if (direct[list[0].X, list[0].Y] == 3)
                y_next = 1;


            Point new_head = new Point(list[0].X + x_next, list[0].Y + y_next);

            bool b1 = all[list[0].X + x_next, list[0].Y + y_next] == 2;
            bool b2 = food_status == 1;

            /*如果下一个是食物，并且食物有效，那需要新增加一个节点，同时还要往前面挪一个节点，但是末尾不要删*/
            if (all[list[0].X + x_next, list[0].Y + y_next] == 2 ) //食物
            {
                length += 1;
                food_status = 0; //new 
            }
            /* 如果下一个节点不是食物，就前进一步，删末尾，加前方一个*/
            else
            {
                all[list[list.Count - 1].X, list[list.Count - 1].Y] = 0;
                list.RemoveAt(list.Count - 1);
                food_status = 1; //valid
            }
            list.Insert(0, new_head);
            all[list[0].X, list[0].Y] = 1;

            if (food_status == 1)
            {
                if (all[food_cur.X, food_cur.Y] != 2)
                {
                    //MessageBox.Show("error");
                }
            }
        }
        private void check_food()
        {
            int food_num = 0;
            Point tmp = new Point();
            if (food_status == 1)
            {
                for (int i = 0; i < row - 1; i++)
                {
                    for (int j = 0; j < col - 1; j++)
                    {
                        if (all[i, j] == 2)
                        {
                            food_num++;
                            tmp.X = i;
                            tmp.Y = j;
                        }
                    }
                }
                if (food_num != 1)
                {
                    //MessageBox.Show("food to much , error");
                }
                if (!tmp.Equals(food_cur))
                {
                    //MessageBox.Show("food not to match , error");
                }
                return;
            }
 
            //MessageBox.Show("no food  , error");
            
            
        }
        protected override void OnPaint(PaintEventArgs e)
        {
            // 获取当前窗体的坐标
            Rectangle rect = this.Bounds;
            // 网格的列数
            col = rect.Width / xs;
            // 网格的行数
            row = rect.Height / xs;

            //this.Height = col * xs;
            //this.Width = row * xs + 6;

            int drawRow = 0;
            int drawCol = 0;

            // 实例化画笔。
            Pen p = new Pen(Brushes.LightBlue);
            // 设置画笔的样式(虚线)。

            p.DashStyle = System.Drawing.Drawing2D.DashStyle.Solid;

            // 画水平线
            for (int i = 0; i <= row; i++)
            {
                e.Graphics.DrawLine(p, 0, drawCol, rect.Width, drawCol);
                drawCol += xs;
            }
            // 画垂直线
            for (int j = 0; j <= col; j++)
            {
                e.Graphics.DrawLine(p, drawRow, 0, drawRow, drawCol);
                drawRow += xs;
            }

            if (load == 1)
            {
                all = new int[row, col];
                point = new Point[row, col];
                direct = new int[row, col];
                for (int i = 0; i < row; i++ )
                {
                    for(int j = 0 ; j < col ; j++)
                    {
                        all[i,j] = 0;
                        direct[i, j] = 3;
                        point[i, j] = new Point(i * xs, j *xs);
                    }
                }
                all[0, 0] = 1; // means snake self
                load = 0;
                list.Add(new Point(0,0));
                set_direct();
            }
            else
            {
                int ret = produce_food();
                if (ret == 1)
                {
                    food_status = 1;
                    
                }
                check_food();
                
                label1.Text = food_cur.ToString();
                show(e.Graphics);
                move();
            }
        }
        public Form1()
        {
            InitializeComponent();
            this.SetStyle(ControlStyles.OptimizedDoubleBuffer |
                    ControlStyles.ResizeRedraw |
                    ControlStyles.AllPaintingInWmPaint, true);
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            timer1.Interval = 10;
            timer1.Start();
        }

        private void timer1_Tick(object sender, EventArgs e)
        {
            this.Invalidate();
        }



    }
}
