using System;
using System.Collections.Generic;
using System.Globalization;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;
using Jayrock.Json;
using Jayrock.Json.Conversion;

namespace cotool.game
{
    class cb_time
    {
        private static int int_0;

        public cb_time()
        {
        }

        [DllImport("Kernel32.dll")]
        public static extern void SetSystemTime(ref SystemTime systime);// win32 api 设置系统时间

        public static void smethod_0(int int_1)
        {
            DateTime time = new DateTime(0x7b2, 1, 1, 0, 0, 0, 0, new GregorianCalendar(), DateTimeKind.Utc);
            int num = (int)(((DateTime.UtcNow.Ticks - time.Ticks) / 0x2710L) / 0x3e8L);
            int_0 = int_1 - num;
        }

        public static string smethod_1(int int_1)
        {
            DateTime time = new DateTime(0x7b2, 1, 1, 0, 0, 0, 0, DateTimeKind.Utc);
            return time.AddSeconds((double)int_1).ToLocalTime().ToString("yyyy-MM-dd HH:mm:ss");
        }

        public static int smethod_10()
        {
            DateTime time = new DateTime(0x7b2, 1, 1, 0, 0, 0, 0, DateTimeKind.Utc);
            return time.AddSeconds((double)smethod_4()).ToLocalTime().Second;
        }

        public static int smethod_11()
        {
            DateTime time = new DateTime(0x7b2, 1, 1, 0, 0, 0, 0, DateTimeKind.Utc);
            return time.AddSeconds((double)smethod_4()).ToLocalTime().Year;
        }

        public static int smethod_12()
        {
            DateTime time = new DateTime(0x7b2, 1, 1, 0, 0, 0, 0, DateTimeKind.Utc);
            return time.AddSeconds((double)smethod_4()).ToLocalTime().Month;
        }

        public static int smethod_13()
        {
            DateTime time = new DateTime(0x7b2, 1, 1, 0, 0, 0, 0, DateTimeKind.Utc);
            return time.AddSeconds((double)smethod_4()).ToLocalTime().Day;
        }

        public static int smethod_14(int int_1)
        {
            DateTime time = new DateTime(0x7b2, 1, 1, 0, 0, 0, 0, DateTimeKind.Utc);
            return time.AddSeconds((double)int_1).ToLocalTime().Year;
        }

        public static int smethod_15(int int_1)
        {
            DateTime time = new DateTime(0x7b2, 1, 1, 0, 0, 0, 0, DateTimeKind.Utc);
            return time.AddSeconds((double)int_1).ToLocalTime().Month;
        }

        public static int smethod_16(int int_1)
        {
            DateTime time = new DateTime(0x7b2, 1, 1, 0, 0, 0, 0, DateTimeKind.Utc);
            return time.AddSeconds((double)int_1).ToLocalTime().Day;
        }

        public static int smethod_17(int int_1)
        {
            DateTime time = new DateTime(0x7b2, 1, 1, 0, 0, 0, 0, DateTimeKind.Utc);
            return time.AddSeconds((double)int_1).ToLocalTime().Hour;
        }

        public static DateTime smethod_18(int int_1)
        {
            DateTime time = new DateTime(0x7b2, 1, 1, 0, 0, 0, 0, DateTimeKind.Utc);
            return time.AddSeconds((double)int_1).ToLocalTime();
        }

        public static int smethod_19(DateTime dateTime_0)
        {
            dateTime_0 = dateTime_0.ToUniversalTime();
            DateTime time = new DateTime(0x7b2, 1, 1, 0, 0, 0, 0, DateTimeKind.Utc);
            return (int)(dateTime_0 - time).TotalSeconds;
        }

        public static int smethod_2(string string_0)
        {
            DateTime time = DateTime.Parse(string_0).ToUniversalTime();
            DateTime time2 = new DateTime(0x7b2, 1, 1, 0, 0, 0, 0, new GregorianCalendar(), DateTimeKind.Utc);
            return (int)(((time.Ticks - time2.Ticks) / 0x2710L) / 0x3e8L);
        }

        public static void smethod_20(uint uint_0)
        {
            if (uint_0 > 0)
            {
                DateTime time = new DateTime(0x7b2, 1, 1, 0, 0, 0, 0, DateTimeKind.Utc);
                time = time.AddSeconds((double)uint_0);
                SystemTime systime = new SystemTime();
                systime.wYear = time.Year;
                systime.wMonth = time.Month;
                systime.wDay = time.Day;
                systime.wHour = time.Hour;
                systime.wMinute = time.Minute;
                systime.wSecond = time.Second;
                SetSystemTime(ref systime);
            }
        }

        public static bool smethod_21(int int_1)
        {
            int num = smethod_11();
            int num2 = smethod_12();
            string str = "";
            if (num2 != 12)
            {
                str = ((num2 + 1).ToString() ?? "").PadLeft(2, '0');
            }
            else
            {
                num++;
                str = "01".PadLeft(2, '0');
            }
            string str2 = (int_1.ToString() ?? "").PadLeft(2, '0');
            string[] textArray1 = new string[] { num.ToString(), "-", str, "-01 ", str2, ":00:00" };
            int num3 = smethod_2(string.Concat(textArray1)) - 0x15180;
            smethod_1(num3);
            return (smethod_4() > num3);
        }

        public static string smethod_3(int int_1, string string_0)
        {
            DateTime time = new DateTime(0x7b2, 1, 1, 0, 0, 0, 0, DateTimeKind.Utc);
            return time.AddSeconds((double)int_1).ToLocalTime().ToString(string_0);
        }

        public static int smethod_4()
        {
            DateTime time = new DateTime(0x7b2, 1, 1, 0, 0, 0, 0, new GregorianCalendar(), DateTimeKind.Utc);
            return (((int)(((DateTime.UtcNow.Ticks - time.Ticks) / 0x2710L) / 0x3e8L)) + int_0);
        }

        public static long smethod_5()
        {
            DateTime time = new DateTime(0x7b2, 1, 1, 0, 0, 0, 0, new GregorianCalendar(), DateTimeKind.Utc);
            return (((DateTime.UtcNow.Ticks - time.Ticks) / 0x2710L) + (int_0 * 0x3e8L));
        }

        public static string smethod_6(int int_1, bool bool_0)
        {
            if (int_1 < 0)
            {
                int_1 = 0;
            }
            if ((int_1 >= 60) && (int_1 < 0xe10))
            {
                int num2 = int_1 / 60;
                int num5 = int_1 - (num2 * 60);
                return (!bool_0 ? (num2.ToString() + "分" + num5.ToString() + "秒") : ("00:" + (num2.ToString() ?? "").PadLeft(2, '0') + ":" + (num5.ToString() ?? "").PadLeft(2, '0')));
            }
            if ((int_1 < 0xe10) || (int_1 >= 0x15180))
        {
                if (int_1 <= 0x15180)
            {
                    return (!bool_0 ? (int_1.ToString() + "秒") : ("00:00:" + (int_1.ToString() ?? "").PadLeft(2, '0')));
                }
                int num6 = int_1 / 0x15180;
                int num7 = (int_1 - (num6 * 0x15180)) / 0xe10;
                int num8 = ((int_1 - (num7 * 0xe10)) - (num6 * 0x15180)) / 60;
                int num9 = ((int_1 - (num6 * 0x15180)) -(num7 * 0xe10)) -(num8 * 60);
                string[] textArray2 = new string[] { num6.ToString(), "天", num7.ToString(), "小时", num8.ToString(), "分", num9.ToString(), "秒" };
                return string.Concat(textArray2);
            }
            int num = int_1 / 0xe10;
            int num3 = (int_1 - (num * 0xe10)) / 60;
            int num4 = (int_1 - (num * 0xe10)) - (num3 * 60);
            if (!bool_0)
            {
                string[] textArray1 = new string[] { num.ToString(), "小时", num3.ToString(), "分", num4.ToString(), "秒" };
                return string.Concat(textArray1);
            }
            string[] textArray3 = new string[5];
            string[] textArray4 = new string[5];
            textArray4[0] = (num.ToString() ?? "").PadLeft(2, '0');
            string[] local4 = textArray4;
            local4[1] = ":";
            local4[2] = (num3.ToString() ?? "").PadLeft(2, '0');
            string[] local6 = local4;
            local6[3] = ":";
            local6[4] = (num4.ToString() ?? "").PadLeft(2, '0');
            return string.Concat(local6);
        }

        public static string smethod_7(int int_1, bool bool_0)
        {
            if (int_1 < 0)
            {
                int_1 = 0;
            }
            if ((int_1 >= 60) && (int_1 < 0xe10))
            {
                int num3 = int_1 / 60;
                return (!bool_0 ? (num3.ToString() + "分") : ("00:" + (num3.ToString() ?? "").PadLeft(2, '0')));
            }
            if ((int_1 >= 0xe10) && (int_1 < 0x15180))
        {
                int num = int_1 / 0xe10;
                int num2 = (int_1 - (num * 0xe10)) / 60;
                return (!bool_0 ? (num.ToString() + "小时" + num2.ToString() + "分") : ((num.ToString() ?? "").PadLeft(2, '0') + ":" + (num2.ToString() ?? "").PadLeft(2, '0')));
            }
            if (int_1 <= 0x15180)
        {
                return (!bool_0 ? "0分" : "00:00");
            }
            int num4 = int_1 / 0x15180;
            int num5 = (int_1 - (num4 * 0x15180)) / 0xe10;
            int num6 = ((int_1 - (num5 * 0xe10)) - (num4 * 0x15180)) / 60;
            string[] textArray1 = new string[] { num4.ToString(), "天", num5.ToString(), "小时", num6.ToString(), "分" };
            return string.Concat(textArray1);
        }

        public static int smethod_8()
        {
            DateTime time = new DateTime(0x7b2, 1, 1, 0, 0, 0, 0, DateTimeKind.Utc);
            return time.AddSeconds((double)smethod_4()).ToLocalTime().Hour;
        }

        public static int smethod_9()
        {
            DateTime time = new DateTime(0x7b2, 1, 1, 0, 0, 0, 0, DateTimeKind.Utc);
            return time.AddSeconds((double)smethod_4()).ToLocalTime().Minute;
        }

        // Nested Types
        [StructLayout(LayoutKind.Sequential)]
        internal class SystemTime
        {
            public int wYear;
            public int wMonth;
            public int wDayOfWeek;
            public int wDay;
            public int wHour;
            public int wMinute;
            public int wSecond;
            public int wMiliseconds;

            public SystemTime()
            {
            }
        }

    }


    public class Class834_json
    {
        // Methods
        public Class834_json()
        {

        }

        public static JsonObject smethod_0(object object_0)
        {
            return (JsonObject)JsonConvert.Import(object_0.ToString());
        }

        public static int smethod_1(object object_0)
        {
            return int.Parse(object_0.ToString());
        }

        public static string smethod_2(object object_0)
        {
            return object_0.ToString();
        }

        public static int smethod_3(object object_0, string string_0)
        {
            return smethod_1(((JsonObject)JsonConvert.Import(object_0.ToString()))[string_0]);
        }
        public static string smethod_4(object object_0, string string_0)
        {
            return ((JsonObject)JsonConvert.Import(object_0.ToString()))[string_0].ToString();
        }
        public static int smethod_5(JsonObject jsonObject_0, string string_0, string string_1)
        {
            return smethod_1(((JsonObject)JsonConvert.Import(jsonObject_0[string_0].ToString()))[string_1]);
        }
        public static int smethod_6(JsonObject jsonObject_0, string string_0, string string_1, string string_2)
        {
            return smethod_1(((JsonObject)JsonConvert.Import(((JsonObject)JsonConvert.Import(jsonObject_0[string_0].ToString()))[string_1].ToString()))[string_2]);
        }
        public static string smethod_7(JsonObject jsonObject_0, string string_0, string string_1)
        {
            return ((JsonObject)JsonConvert.Import(jsonObject_0[string_0].ToString()))[string_1].ToString();
        }
        public static string smethod_8(JsonObject jsonObject_0, string string_0, string string_1, string string_2)
        {
            return ((JsonObject)JsonConvert.Import(((JsonObject)JsonConvert.Import(jsonObject_0[string_0].ToString()))[string_1].ToString()))[string_2].ToString();
        }
    }

}
