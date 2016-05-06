using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Drawing;

namespace snake
{
    public enum status_food_t
    {
        STATUS_EATED,
        STATUS_VALID
    }
    class food
    {
        Point pos;
        status_food_t status;

        /// <summary>
        /// 生产食物并更新位置和状态
        /// </summary>
        void produce_food()
        {
        }

        /// <summary>
        /// 获取食物与蛇头的最短距离
        /// </summary>
        void get_short_distance()
        {
        }

    }
}
