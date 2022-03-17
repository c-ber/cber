using System;
using System.Collections;
using System.Collections.Generic;
using System.Globalization;
using System.IO;
using System.Linq;
using System.Net.Sockets;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading;
using System.Threading.Tasks;

namespace cotool.game
{
    public class msg
    {
    }

    public class DataUtil
    {
        public static byte[] short2byte(short n)
        {
            return new byte[2]
            {
            (byte)(n >> 8),
            (byte)n
            };
        }

        public static int byte2Int(byte[] b)
        {
            return (b[3] & 0xFF) | ((b[2] << 8) & 0xFF00) | ((b[1] << 16) & 0xFF0000) | (int)((b[0] << 24) & 0xFF000000u);
        }

        public static int byte2IntEx(byte[] b)
        {
            return (b[0] & 0xFF) | ((b[1] << 8) & 0xFF00) | ((b[2] << 16) & 0xFF0000) | (int)((b[3] << 24) & 0xFF000000u);
        }

        public static byte[] int2Byte(int i)
        {
            byte[] array = new byte[4];
            array[3] = (byte)i;
            array[2] = (byte)(i >> 8);
            array[1] = (byte)(i >> 16);
            array[0] = (byte)(i >> 24);
            return array;
        }

        public static byte[] int2ByteEx(int i)
        {
            return new byte[4]
            {
            (byte)i,
            (byte)(i >> 8),
            (byte)(i >> 16),
            (byte)(i >> 24)
            };
        }

        public static int byte2Int(byte[] b, int offset)
        {
            return (b[offset + 3] & 0xFF) | ((b[offset + 2] << 8) & 0xFF00) | ((b[offset + 1] << 16) & 0xFF0000) | (int)((b[offset] << 24) & 0xFF000000u);
        }

        public static int byte2Short(byte[] b)
        {
            return (b[1] & 0xFF) | ((b[0] << 8) & 0xFF00);
        }

        public static int byte2Short(byte[] b, int index)
        {
            return (b[index + 1] & 0xFF) | ((b[index] << 8) & 0xFF00);
        }
    }


    public class DateUtil
    {
        [StructLayout(LayoutKind.Sequential)]
        public class SystemTime
        {
            public short year;

            public short Month;

            public short DayOfWeek;

            public short Day;

            public short Hour;

            public short Minute;

            public short Second;

            public short Milliseconds;
        }

        private static int offset = 0;

        public static void setServerCurTime(int time)
        {
            DateTime dateTime = new DateTime(1970, 1, 1, 0, 0, 0, 0, new GregorianCalendar(), DateTimeKind.Utc);
            int num = (int)((DateTime.UtcNow.Ticks - dateTime.Ticks) / 10000 / 1000);
            offset = time - num;
        }

        public static string toString(int time)
        {
            return new DateTime(1970, 1, 1, 0, 0, 0, 0, DateTimeKind.Utc).AddSeconds(time).ToLocalTime().ToString("yyyy-MM-dd HH:mm:ss");
        }

        public static int parse(string str)
        {
            DateTime dateTime = DateTime.Parse(str).ToUniversalTime();
            DateTime dateTime2 = new DateTime(1970, 1, 1, 0, 0, 0, 0, new GregorianCalendar(), DateTimeKind.Utc);
            return (int)((dateTime.Ticks - dateTime2.Ticks) / 10000 / 1000);
        }

        public static string toString(int time, string format)
        {
            return new DateTime(1970, 1, 1, 0, 0, 0, 0, DateTimeKind.Utc).AddSeconds(time).ToLocalTime().ToString(format);
        }

        public static int getCurTime()
        {
            DateTime dateTime = new DateTime(1970, 1, 1, 0, 0, 0, 0, new GregorianCalendar(), DateTimeKind.Utc);
            int num = (int)((DateTime.UtcNow.Ticks - dateTime.Ticks) / 10000 / 1000);
            return num + offset;
        }

        public static long getCurTimeEx()
        {
            DateTime dateTime = new DateTime(1970, 1, 1, 0, 0, 0, 0, new GregorianCalendar(), DateTimeKind.Utc);
            long num = (DateTime.UtcNow.Ticks - dateTime.Ticks) / 10000;
            return num + (long)offset * 1000L;
        }

        public static string formatSeconds(int sendcond, bool simpleMode)
        {
            if (sendcond < 0)
            {
                sendcond = 0;
            }
            if (sendcond >= 60 && sendcond < 3600)
            {
                int num = sendcond / 60;
                int num2 = sendcond - num * 60;
                if (simpleMode)
                {
                    return "00:" + string.Concat(num).PadLeft(2, '0') + ":" + string.Concat(num2).PadLeft(2, '0');
                }
                return num + "分" + num2 + "秒";
            }
            if (sendcond >= 3600 && sendcond < 86400)
            {
                int num3 = sendcond / 3600;
                int num = (sendcond - num3 * 3600) / 60;
                int num2 = sendcond - num3 * 3600 - num * 60;
                if (simpleMode)
                {
                    return string.Concat(num3).PadLeft(2, '0') + ":" + string.Concat(num).PadLeft(2, '0') + ":" + string.Concat(num2).PadLeft(2, '0');
                }
                return num3 + "小时" + num + "分" + num2 + "秒";
            }
            if (sendcond > 86400)
            {
                int num4 = sendcond / 86400;
                int num3 = (sendcond - num4 * 86400) / 3600;
                int num = (sendcond - num3 * 3600 - num4 * 86400) / 60;
                int num2 = sendcond - num4 * 86400 - num3 * 3600 - num * 60;
                return num4 + "天" + num3 + "小时" + num + "分" + num2 + "秒";
            }
            if (simpleMode)
            {
                return "00:00:" + string.Concat(sendcond).PadLeft(2, '0');
            }
            return sendcond + "秒";
        }

        public static string formatSecondsShort(int sendcond, bool simpleMode)
        {
            if (sendcond < 0)
            {
                sendcond = 0;
            }
            if (sendcond >= 60 && sendcond < 3600)
            {
                int num = sendcond / 60;
                int num2 = sendcond - num * 60;
                if (simpleMode)
                {
                    return "00:" + string.Concat(num).PadLeft(2, '0');
                }
                return num + "分";
            }
            if (sendcond >= 3600 && sendcond < 86400)
            {
                int num3 = sendcond / 3600;
                int num = (sendcond - num3 * 3600) / 60;
                int num2 = sendcond - num3 * 3600 - num * 60;
                if (simpleMode)
                {
                    return string.Concat(num3).PadLeft(2, '0') + ":" + string.Concat(num).PadLeft(2, '0');
                }
                return num3 + "小时" + num + "分";
            }
            if (sendcond > 86400)
            {
                int num4 = sendcond / 86400;
                int num3 = (sendcond - num4 * 86400) / 3600;
                int num = (sendcond - num3 * 3600 - num4 * 86400) / 60;
                int num2 = sendcond - num4 * 86400 - num3 * 3600 - num * 60;
                return num4 + "天" + num3 + "小时" + num + "分";
            }
            if (simpleMode)
            {
                return "00:00";
            }
            return "0分";
        }

        public static int getCurrentHour()
        {
            return new DateTime(1970, 1, 1, 0, 0, 0, 0, DateTimeKind.Utc).AddSeconds(getCurTime()).ToLocalTime().Hour;
        }

        public static int getCurrentMinute()
        {
            return new DateTime(1970, 1, 1, 0, 0, 0, 0, DateTimeKind.Utc).AddSeconds(getCurTime()).ToLocalTime().Minute;
        }

        public static int getCurrentSecond()
        {
            return new DateTime(1970, 1, 1, 0, 0, 0, 0, DateTimeKind.Utc).AddSeconds(getCurTime()).ToLocalTime().Second;
        }

        public static int getCurrentYear()
        {
            return new DateTime(1970, 1, 1, 0, 0, 0, 0, DateTimeKind.Utc).AddSeconds(getCurTime()).ToLocalTime().Year;
        }

        public static int getCurrentMonth()
        {
            return new DateTime(1970, 1, 1, 0, 0, 0, 0, DateTimeKind.Utc).AddSeconds(getCurTime()).ToLocalTime().Month;
        }

        public static int getCurrentDay()
        {
            return new DateTime(1970, 1, 1, 0, 0, 0, 0, DateTimeKind.Utc).AddSeconds(getCurTime()).ToLocalTime().Day;
        }

        public static int getYear(int time)
        {
            return new DateTime(1970, 1, 1, 0, 0, 0, 0, DateTimeKind.Utc).AddSeconds(time).ToLocalTime().Year;
        }

        public static int getMonth(int time)
        {
            return new DateTime(1970, 1, 1, 0, 0, 0, 0, DateTimeKind.Utc).AddSeconds(time).ToLocalTime().Month;
        }

        public static int getDay(int time)
        {
            return new DateTime(1970, 1, 1, 0, 0, 0, 0, DateTimeKind.Utc).AddSeconds(time).ToLocalTime().Day;
        }

        public static int getHour(int time)
        {
            return new DateTime(1970, 1, 1, 0, 0, 0, 0, DateTimeKind.Utc).AddSeconds(time).ToLocalTime().Hour;
        }

        public static DateTime toDateTime(int time)
        {
            return new DateTime(1970, 1, 1, 0, 0, 0, 0, DateTimeKind.Utc).AddSeconds(time).ToLocalTime();
        }

        public static int getTime(DateTime dt)
        {
            dt = dt.ToUniversalTime();
            DateTime dateTime = new DateTime(1970, 1, 1, 0, 0, 0, 0, DateTimeKind.Utc);
            return (int)(dt - dateTime).TotalSeconds;
        }

        [DllImport("Kernel32.dll")]
        public static extern void SetSystemTime([In][Out] SystemTime st);

        public static void setOSTime(int serverTime)
        {
            DateTime dateTime = new DateTime(1970, 1, 1, 0, 0, 0, 0, DateTimeKind.Utc).AddSeconds(serverTime);
            SystemTime systemTime = new SystemTime();
            systemTime.year = (short)dateTime.Year;
            systemTime.Month = (short)dateTime.Month;
            systemTime.Day = (short)dateTime.Day;
            systemTime.Hour = (short)dateTime.Hour;
            systemTime.Minute = (short)dateTime.Minute;
            systemTime.Second = (short)dateTime.Second;
            SetSystemTime(systemTime);
        }
    }


    internal class AAA : MyMsg
    {
        public override void readExternal(MemoryStream param1, int len)
        {
            int num = (int)param1.Position;
            int num2 = 0;
            while (param1.Position - num < len)
            {
                uint num3 = ReadUtils.read_TYPE_UINT32(param1);
                int num4 = (int)(num3 & 7);
                int num5 = (int)num3 >> 3;
                if (num5 < num2)
                {
                    param1.Seek(num + len, SeekOrigin.Begin);
                    break;
                }
                num2 = num5;
                switch (num5)
                {
                    case 1:
                        head = new Head();
                        ReadUtils.read_TYPE_MESSAGE(param1, head);
                        break;
                    case 2:
                        {
                            uint num6 = ReadUtils.read_TYPE_UINT32(param1);
                            break;
                        }
                    default:
                        param1.Seek(num + len, SeekOrigin.Begin);
                        break;
                    case 3:
                    case 4:
                    case 5:
                    case 6:
                    case 7:
                    case 8:
                    case 9:
                    case 10:
                    case 11:
                        break;
                }
            }
            int num7 = 0;
        }

        public override void writeExternal(MyMemoryStream param1)
        {
            WriteUtils.writeTag(param1, WireType.LENGTH_DELIMITED, 1u);
            WriteUtils.write_TYPE_MESSAGE(param1, head);
        }
    }

    internal class AAACodeResponse : MyMsg
    {
        public override void readExternal(MemoryStream param1, int len)
        {
            int num = (int)param1.Position;
            int num2 = 0;
            while (param1.Position - num < len)
            {
                uint num3 = ReadUtils.read_TYPE_UINT32(param1);
                int num4 = (int)(num3 & 7);
                int num5 = (int)num3 >> 3;
                if (num5 < num2)
                {
                    param1.Seek(num + len, SeekOrigin.Begin);
                    break;
                }
                num2 = num5;
                switch (num5)
                {
                    case 1:
                        head = new Head();
                        ReadUtils.read_TYPE_MESSAGE(param1, head);
                        break;
                    default:
                        param1.Seek(num + len, SeekOrigin.Begin);
                        break;
                    case 2:
                    case 3:
                    case 4:
                    case 5:
                    case 6:
                    case 7:
                    case 8:
                    case 9:
                    case 10:
                    case 11:
                        break;
                }
            }
            int num6 = 0;
        }

        public override void writeExternal(MyMemoryStream param1)
        {
        }
    }

    internal class Head : IMsg
    {
        public uint uin;

        public uint platform;

        public uint seq;

        public uint ecode;

        public uint comp;

        public string key;

        public uint cmd;

        public uint ver;

        public string secret;

        private static string seedMD5 = "123456";

        public uint source = 2u;

        public string lockPasswd;

        public uint sessionId;

        public string pskey;

        public string sid;

        public static int srcRandom = 0;

        public string qq;

        public Head()
        {
            if (srcRandom < 100)
            {
                source = 2u;
            }
        }

        public void setQQ(string qq)
        {
            this.qq = qq;
        }

        public void readExternal(MemoryStream mem, int len)
        {
            int num = (int)mem.Position;
            int num2 = 0;
            while (mem.Position - num < len)
            {
                uint num3 = ReadUtils.read_TYPE_UINT32(mem);
                int num4 = (int)(num3 & 7);
                int num5 = (int)num3 >> 3;
                if (num5 < num2)
                {
                    mem.Seek(num + len, SeekOrigin.Begin);
                    break;
                }
                num2 = num5;
                switch (num5)
                {
                    case 1:
                        seq = ReadUtils.read_TYPE_UINT32(mem);
                        break;
                    case 2:
                        uin = ReadUtils.read_TYPE_UINT32(mem);
                        break;
                    case 3:
                        cmd = ReadUtils.read_TYPE_UINT32(mem);
                        break;
                    case 4:
                        key = ReadUtils.read_TYPE_STRING(mem);
                        break;
                    case 5:
                        comp = ReadUtils.read_TYPE_UINT32(mem);
                        break;
                    case 6:
                        ecode = ReadUtils.read_TYPE_UINT32(mem);
                        break;
                    case 7:
                        platform = ReadUtils.read_TYPE_UINT32(mem);
                        break;
                    case 8:
                        ver = ReadUtils.read_TYPE_UINT32(mem);
                        break;
                    case 9:
                        secret = ReadUtils.read_TYPE_STRING(mem);
                        break;
                    case 10:
                        source = ReadUtils.read_TYPE_UINT32(mem);
                        break;
                    case 11:
                        lockPasswd = ReadUtils.read_TYPE_STRING(mem);
                        break;
                    case 12:
                        sessionId = ReadUtils.read_TYPE_UINT32(mem);
                        break;
                    case 13:
                        pskey = ReadUtils.read_TYPE_STRING(mem);
                        break;
                    case 14:
                        sid = ReadUtils.read_TYPE_STRING(mem);
                        break;
                    default:
                        mem.Seek(mem.Position + num4, SeekOrigin.Current);
                        break;
                }
            }
            int num6 = 0;
        }

        public void writeExternal(MyMemoryStream mem)
        {
            long curTimeEx = DateUtil.getCurTimeEx();
            uint curTime = (uint)DateUtil.getCurTime();
            curTimeEx /= 1000;
            ver = (uint)(curTimeEx / 3600);
            string text = "123456";
            try
            {
                text = seedMD5;
            }
            catch
            {
            }
            string text2 = key + ver + seq + cmd + text;
            if (cmd == 4097 || cmd == 7937)
            {
                text2 = key + seq + cmd + text;
            }
            secret = "aasdfafs";
            ver = 4u;
            WriteUtils.writeTag(mem, WireType.VARINT, 1u);
            WriteUtils.write_TYPE_UINT32(mem, seq);
            WriteUtils.writeTag(mem, WireType.VARINT, 2u);
            WriteUtils.write_TYPE_UINT32(mem, uin);
            WriteUtils.writeTag(mem, WireType.VARINT, 3u);
            WriteUtils.write_TYPE_UINT32(mem, cmd);
            if (key != null)
            {
                WriteUtils.writeTag(mem, WireType.LENGTH_DELIMITED, 4u);
                WriteUtils.write_TYPE_STRING(mem, key);
            }
            if (comp != 0)
            {
                WriteUtils.writeTag(mem, WireType.VARINT, 5u);
                WriteUtils.write_TYPE_UINT32(mem, comp);
            }
            if (ecode != 0)
            {
                WriteUtils.writeTag(mem, WireType.VARINT, 6u);
                WriteUtils.write_TYPE_UINT32(mem, ecode);
            }
            if (platform != 0)
            {
                WriteUtils.writeTag(mem, WireType.VARINT, 7u);
                WriteUtils.write_TYPE_UINT32(mem, platform);
            }
            if (ver >= 0)
            {
                WriteUtils.writeTag(mem, WireType.VARINT, 8u);
                WriteUtils.write_TYPE_UINT32(mem, ver);
            }
            if (secret != null)
            {
                WriteUtils.writeTag(mem, WireType.LENGTH_DELIMITED, 9u);
                WriteUtils.write_TYPE_STRING(mem, secret);
            }
            if (source >= 0)
            {
                WriteUtils.writeTag(mem, WireType.VARINT, 10u);
                WriteUtils.write_TYPE_UINT32(mem, source);
            }
            if (lockPasswd != null)
            {
                WriteUtils.writeTag(mem, WireType.LENGTH_DELIMITED, 11u);
                WriteUtils.write_TYPE_STRING(mem, lockPasswd);
            }
            if (sid != null)
            {
                WriteUtils.writeTag(mem, WireType.LENGTH_DELIMITED, 14u);
                WriteUtils.write_TYPE_STRING(mem, sid);
            }
        }
    }


    internal interface IMsg
    {
        void readExternal(MemoryStream mem, int len);

        void writeExternal(MyMemoryStream mem);
    }


    internal class Int64Ex
    {
        public uint low;

        public int high;
    }

    internal class MyMemoryStream : MemoryStream
    {
        private MemoryStream bytearray = new MemoryStream();

        public int beginBlock()
        {
            byte[] array = DataUtil.int2Byte((int)Position);
            bytearray.Write(array, 0, array.Length);
            int num = (int)bytearray.Length;
            if (num % 8 != 4)
            {
                throw new Exception();
            }
            byte[] array2 = DataUtil.int2Byte(0);
            bytearray.Write(array2, 0, array2.Length);
            byte[] array3 = DataUtil.int2Byte(0);
            bytearray.Write(array3, 0, array3.Length);
            byte[] array4 = DataUtil.int2Byte((int)Position);
            bytearray.Write(array4, 0, array4.Length);
            return num;
        }

        public void endBlock(int mem)
        {
            if (bytearray.Length % 8 != 0)
            {
                throw new Exception();
            }
            byte[] array = DataUtil.int2Byte((int)Position);
            bytearray.Write(array, 0, array.Length);
            bytearray.Position = mem + 8;
            byte[] array2 = new byte[4];
            bytearray.Read(array2, 0, 4);
            int num = DataUtil.byte2Int(array2);
            bytearray.Position = mem;
            array = DataUtil.int2Byte((int)Position);
            bytearray.Write(array, 0, array.Length);
            WriteUtils.write_TYPE_UINT32(this, (uint)(Position - num));
            array = DataUtil.int2Byte((int)Position);
            bytearray.Write(array, 0, array.Length);
            bytearray.Position = bytearray.Length;
            array = DataUtil.int2Byte((int)Position);
            bytearray.Write(array, 0, array.Length);
        }
    }


    internal abstract class MyMsg : IMsg
    {
        public Head head = new Head();

        public uint uin;

        public abstract void readExternal(MemoryStream mem, int len);

        public abstract void writeExternal(MyMemoryStream mem);
    }

    internal class MyUint64
    {
        public uint high;

        public uint low;

        public MyUint64(uint param1, uint param2)
        {
            low = param1;
            high = param2;
        }

        public MyUint64()
        {
        }
    }
    internal class PackageHeader
    {
        private uint checkSum;

        public uint version;

        private uint zoneID;

        public uint packageLength;

        public uint cmdID;

        public uint uin;

        private uint appID;

        public static uint LENGTH = 20u;

        public MyMemoryStream encode()
        {
            MyMemoryStream myMemoryStream = new MyMemoryStream();
            byte[] array = DataUtil.int2Byte((int)packageLength);
            myMemoryStream.Write(array, 0, array.Length);
            DataUtil.int2Byte((int)uin);
            myMemoryStream.Write(array, 0, array.Length);
            DataUtil.short2byte((short)version);
            myMemoryStream.Write(array, 0, array.Length);
            DataUtil.short2byte((short)appID);
            myMemoryStream.Write(array, 0, array.Length);
            DataUtil.short2byte((short)zoneID);
            myMemoryStream.Write(array, 0, array.Length);
            DataUtil.short2byte((short)cmdID);
            myMemoryStream.Write(array, 0, array.Length);
            DataUtil.short2byte((short)checkSum);
            myMemoryStream.Write(array, 0, array.Length);
            return myMemoryStream;
        }

        public void decode(MyMemoryStream param1)
        {
            byte[] array = new byte[4];
            param1.Read(array, 0, 4);
            packageLength = (uint)DataUtil.byte2Int(array);
            param1.Read(array, 0, 4);
            uin = (uint)DataUtil.byte2Int(array);
            array = new byte[2];
            param1.Read(array, 0, 2);
            version = (uint)DataUtil.byte2Short(array);
            param1.Read(array, 0, 2);
            appID = (uint)DataUtil.byte2Short(array);
            param1.Read(array, 0, 2);
            zoneID = (uint)DataUtil.byte2Short(array);
            param1.Read(array, 0, 2);
            cmdID = (uint)DataUtil.byte2Short(array);
            param1.Read(array, 0, 2);
            checkSum = (uint)DataUtil.byte2Short(array);
        }
    }
    internal class PBoyCommunicator
    {
        private static string ip = "msg.108.qq.com";

        private static int port = 443;

        private static TcpClient client;

        public static byte[] encodePackage(uint myqq, uint command, MyMsg param2)
        {
            MemoryStream memoryStream = new MemoryStream();
            PackageHeader packageHeader = new PackageHeader();
            packageHeader.cmdID = command;
            packageHeader.uin = myqq;
            MyMemoryStream myMemoryStream = new MyMemoryStream();
            param2.writeExternal(myMemoryStream);
            packageHeader.packageLength = PackageHeader.LENGTH + (uint)(int)myMemoryStream.Length;
            MyMemoryStream myMemoryStream2 = packageHeader.encode();
            byte[] array = myMemoryStream2.ToArray();
            memoryStream.Write(array, 0, array.Length);
            array = myMemoryStream.ToArray();
            memoryStream.Write(array, 0, array.Length);
            return memoryStream.ToArray();
        }

        public static MyMemoryStream decodePackage(byte[] param1)
        {
            MyMemoryStream myMemoryStream = new MyMemoryStream();
            MyMemoryStream myMemoryStream2 = new MyMemoryStream();
            MyMemoryStream myMemoryStream3 = new MyMemoryStream();
            myMemoryStream3.Write(param1, 0, param1.Length);
            myMemoryStream3.Position = 0L;
            if (myMemoryStream3 == null || myMemoryStream3.Length - myMemoryStream3.Position <= 4)
            {
                return myMemoryStream3;
            }
            byte[] array = new byte[4];
            myMemoryStream3.Read(array, 0, array.Length);
            uint num = (uint)DataUtil.byte2Int(array);
            myMemoryStream3.Position -= 4L;
            if (myMemoryStream3.Length - myMemoryStream3.Position >= num)
            {
                PackageHeader packageHeader = new PackageHeader();
                packageHeader.decode(myMemoryStream3);
                array = myMemoryStream3.ToArray();
                myMemoryStream2.Write(array, (int)num, (int)(array.Length - num));
                myMemoryStream2.Position = 0L;
                return myMemoryStream2;
            }
            return myMemoryStream3;
        }

        public static void send(uint myqq, uint command, MyMsg param2)
        {
            try
            {
                byte[] array = encodePackage(myqq, command, param2);
                if (client == null || !client.Connected)
                {
                    client = new TcpClient();
                    client.Connect(ip, port);
                }
                NetworkStream stream = client.GetStream();
                stream.Write(array, 0, array.Length);
                stream.Flush();
            }
            catch (Exception)
            {
            }
        }

        public static void recv()
        {
            while (true)
            {
                try
                {
                }
                catch
                {
                }
                Thread.Sleep(500);
            }
        }
    }


    internal class ReadUtils
    {
        public static uint read_TYPE_UINT32(MemoryStream mem)
        {
            uint num = 0u;
            uint num2 = 0u;
            uint num3 = 0u;
            do
            {
                bool flag = true;
                byte[] array = new byte[1];
                mem.Read(array, 0, array.Length);
                num = array[0];
                if (num3 < 32)
                {
                    if (num >= 128)
                    {
                        num2 |= (num & 0x7F) << (int)num3;
                        num3 += 7;
                        continue;
                    }
                    num2 |= num << (int)num3;
                    break;
                }
                byte[] array2 = new byte[1];
                mem.Read(array2, 0, array2.Length);
                while (array2[0] >= 128)
                {
                    mem.Read(array2, 0, array2.Length);
                    if (mem.Position >= mem.Length - 1)
                    {
                        break;
                    }
                }
                break;
            }
            while (mem.Position < mem.Length);
            return num2;
        }

        public static MyUint64 read_TYPE_UINT64(MemoryStream param1)
        {
            uint num = 0u;
            MyUint64 myUint = new MyUint64();
            uint num2 = 0u;
            do
            {
                bool flag = true;
                num = (uint)param1.ReadByte();
                if (num2 == 28)
                {
                    break;
                }
                if (num >= 128)
                {
                    myUint.low |= (num & 0x7F) << (int)num2;
                    num2 += 7;
                    continue;
                }
                myUint.low |= num << (int)num2;
                return myUint;
            }
            while (param1.Position < param1.Length);
            if (num >= 128)
            {
                num &= 0x7Fu;
                myUint.low |= num << (int)num2;
                myUint.high = num >> 4;
                num2 = 3u;
                do
                {
                    bool flag = true;
                    num = (uint)param1.ReadByte();
                    if (num2 < 32)
                    {
                        if (num < 128)
                        {
                            myUint.high |= num << (int)num2;
                            break;
                        }
                        myUint.high |= (num & 0x7F) << (int)num2;
                    }
                    num2 += 7;
                }
                while (param1.Position < param1.Length);
                return myUint;
            }
            myUint.low |= num << (int)num2;
            myUint.high = num >> 4;
            return myUint;
        }

        public static string read_TYPE_STRING(MemoryStream mem)
        {
            uint num = read_TYPE_UINT32(mem);
            if (num < 9999)
            {
                byte[] array = new byte[num];
                mem.Read(array, 0, array.Length);
                return Encoding.UTF8.GetString(array);
            }
            return "";
        }

        public static Int64Ex read_TYPE_INT64(MemoryStream mem)
        {
            int num = 0;
            Int64Ex int64Ex = new Int64Ex();
            uint num2 = 0u;
            do
            {
                bool flag = true;
                byte[] array = new byte[1];
                mem.Read(array, 0, 1);
                num = array[0];
                if (num2 == 28)
                {
                    break;
                }
                if (num >= 128)
                {
                    int64Ex.low = (uint)(int64Ex.low | ((num & 0x7F) << (int)num2));
                    num2 += 7;
                    continue;
                }
                int64Ex.low = (uint)(int64Ex.low | (num << (int)num2));
                return int64Ex;
            }
            while (mem.Position < mem.Length);
            if (num >= 128)
            {
                num &= 0x7F;
                int64Ex.low = (uint)(int64Ex.low | (num << (int)num2));
                int64Ex.high = num >> 4;
                num2 = 3u;
                do
                {
                    bool flag = true;
                    byte[] array = new byte[1];
                    mem.Read(array, 0, 1);
                    num = array[0];
                    if (num2 < 32)
                    {
                        if (num < 128)
                        {
                            int64Ex.high |= num << (int)num2;
                            break;
                        }
                        int64Ex.high |= (num & 0x7F) << (int)num2;
                    }
                    num2 += 7;
                }
                while (mem.Position < mem.Length);
                return int64Ex;
            }
            int64Ex.low = (uint)(int64Ex.low | (num << (int)num2));
            int64Ex.high = num >> 4;
            return int64Ex;
        }

        public static int read_TYPE_INT32(MemoryStream mem)
        {
            return (int)read_TYPE_UINT32(mem);
        }

        public static IMsg read_TYPE_MESSAGE(MemoryStream mem, IMsg param2)
        {
            uint len = read_TYPE_UINT32(mem);
            param2.readExternal(mem, (int)len);
            return param2;
        }

        public static int read_TYPE_ENUM(MemoryStream mem)
        {
            return (int)read_TYPE_UINT32(mem);
        }

        public static void readPackedRepeatedINT32(MemoryStream mem, ArrayList param3)
        {
            uint num = read_TYPE_UINT32(mem);
            int num2 = (int)mem.Position;
            while ((int)mem.Position - num2 < num)
            {
                param3.Add(read_TYPE_INT32(mem));
            }
        }

        public static void readPackedRepeatedUINT32(MemoryStream mem, ArrayList param3)
        {
            uint num = read_TYPE_UINT32(mem);
            int num2 = (int)mem.Position;
            while ((int)mem.Position - num2 < num)
            {
                param3.Add((uint)read_TYPE_INT32(mem));
            }
        }

        public static void readPackedRepeatedFixedINT32(MemoryStream mem, ArrayList param3)
        {
            uint num = read_TYPE_UINT32(mem);
            int num2 = (int)mem.Position;
            while ((int)mem.Position - num2 < num)
            {
                param3.Add(read_Fixed_Int32(mem));
            }
        }

        public static void readPackedRepeatedFixedUINT32(MemoryStream mem, ArrayList param3)
        {
            uint num = read_TYPE_UINT32(mem);
            int num2 = (int)mem.Position;
            while ((int)mem.Position - num2 < num)
            {
                param3.Add((uint)read_Fixed_Int32(mem));
            }
        }

        public static void readPackedRepeatedBool(MemoryStream mem, ArrayList param3)
        {
            uint num = read_TYPE_UINT32(mem);
            int num2 = (int)mem.Position;
            while ((int)mem.Position - num2 < num)
            {
                param3.Add(read_TYPE_BOOL(mem));
            }
        }

        public static Tag readTag(MemoryStream mem)
        {
            Tag tag = new Tag();
            uint num = read_TYPE_UINT32(mem);
            tag.wireType = num & 7u;
            tag.number = num >> 3;
            return tag;
        }

        public static bool read_TYPE_BOOL(MemoryStream mem)
        {
            return read_TYPE_UINT32(mem) != 0;
        }

        public static int read_Fixed_Int32(MemoryStream mem)
        {
            byte[] array = new byte[4];
            mem.Read(array, 0, array.Length);
            return DataUtil.byte2IntEx(array);
        }

        public static byte[] read_TYPE_BYTES(MemoryStream param1)
        {
            uint num = read_TYPE_UINT32(param1);
            byte[] array = new byte[num];
            if (num != 0)
            {
                param1.Read(array, 0, (int)num);
            }
            return array;
        }

        public static float read_TYPE_FLOAT(MemoryStream param1)
        {
            byte[] array = new byte[4];
            param1.Read(array, 0, array.Length);
            float num = BitConverter.ToSingle(array, 0);
            return num;
        }
    }
    internal class Req5644 : MyMsg
    {
        public int val_1;

        public int val_3;

        public int val_5;

        public int activity_id;

        public int val_2;

        public int val_4;

        public int oper_id;

        public override void readExternal(MemoryStream param1, int len)
        {
            int num = (int)param1.Position;
            int num2 = 0;
            while (param1.Position - num < len)
            {
                uint num3 = ReadUtils.read_TYPE_UINT32(param1);
                int num4 = (int)(num3 & 7);
                int num5 = (int)num3 >> 3;
                if (num5 < num2)
                {
                    param1.Seek(num + len, SeekOrigin.Begin);
                    break;
                }
                num2 = num5;
                switch (num5)
                {
                    case 1:
                        head = new Head();
                        ReadUtils.read_TYPE_MESSAGE(param1, head);
                        break;
                    case 2:
                        activity_id = ReadUtils.read_TYPE_INT32(param1);
                        break;
                    case 3:
                        oper_id = ReadUtils.read_TYPE_INT32(param1);
                        break;
                    case 4:
                        val_1 = ReadUtils.read_TYPE_INT32(param1);
                        break;
                    case 5:
                        val_2 = ReadUtils.read_TYPE_INT32(param1);
                        break;
                    case 6:
                        val_3 = ReadUtils.read_TYPE_INT32(param1);
                        break;
                    case 7:
                        val_4 = ReadUtils.read_TYPE_INT32(param1);
                        break;
                    case 8:
                        val_5 = ReadUtils.read_TYPE_INT32(param1);
                        break;
                    default:
                        param1.Seek(num + len, SeekOrigin.Begin);
                        break;
                    case 9:
                    case 10:
                    case 11:
                        break;
                }
            }
            int num6 = 0;
        }

        public override void writeExternal(MyMemoryStream param1)
        {
            WriteUtils.writeTag(param1, WireType.LENGTH_DELIMITED, 1u);
            WriteUtils.write_TYPE_MESSAGE(param1, head);
            WriteUtils.writeTag(param1, WireType.VARINT, 2u);
            WriteUtils.write_TYPE_INT32(param1, activity_id);
            WriteUtils.writeTag(param1, WireType.VARINT, 3u);
            WriteUtils.write_TYPE_INT32(param1, oper_id);
            WriteUtils.writeTag(param1, WireType.VARINT, 4u);
            WriteUtils.write_TYPE_INT32(param1, val_1);
            WriteUtils.writeTag(param1, WireType.VARINT, 5u);
            WriteUtils.write_TYPE_INT32(param1, val_2);
            WriteUtils.writeTag(param1, WireType.VARINT, 6u);
            WriteUtils.write_TYPE_INT32(param1, val_3);
            WriteUtils.writeTag(param1, WireType.VARINT, 7u);
            WriteUtils.write_TYPE_INT32(param1, val_4);
            WriteUtils.writeTag(param1, WireType.VARINT, 8u);
            WriteUtils.write_TYPE_INT32(param1, val_5);
        }
    }

    internal class ReqDefault : MyMsg
    {
        public uint type;

        public uint num;

        public uint temp1;

        public uint temp2;

        public uint temp3;

        public uint temp4;

        public uint temp5;

        public override void readExternal(MemoryStream param1, int len)
        {
            int num = (int)param1.Position;
            int num2 = 0;
            while (param1.Position - num < len)
            {
                uint num3 = ReadUtils.read_TYPE_UINT32(param1);
                int num4 = (int)(num3 & 7);
                int num5 = (int)num3 >> 3;
                if (num5 < num2)
                {
                    param1.Seek(num + len, SeekOrigin.Begin);
                    break;
                }
                num2 = num5;
                switch (num5)
                {
                    case 1:
                        head = new Head();
                        ReadUtils.read_TYPE_MESSAGE(param1, head);
                        break;
                    case 2:
                        type = ReadUtils.read_TYPE_UINT32(param1);
                        break;
                    case 3:
                        this.num = ReadUtils.read_TYPE_UINT32(param1);
                        break;
                    case 4:
                        temp1 = ReadUtils.read_TYPE_UINT32(param1);
                        break;
                    case 5:
                        temp2 = ReadUtils.read_TYPE_UINT32(param1);
                        break;
                    case 6:
                        temp3 = ReadUtils.read_TYPE_UINT32(param1);
                        break;
                    case 7:
                        temp4 = ReadUtils.read_TYPE_UINT32(param1);
                        break;
                    case 8:
                        temp5 = ReadUtils.read_TYPE_UINT32(param1);
                        break;
                    default:
                        param1.Seek(num + len, SeekOrigin.Begin);
                        break;
                }
            }
            int num6 = 0;
        }

        public override void writeExternal(MyMemoryStream param1)
        {
            WriteUtils.writeTag(param1, WireType.LENGTH_DELIMITED, 1u);
            WriteUtils.write_TYPE_MESSAGE(param1, head);
        }
    }
    internal class ReqMixTreasureMulti : MyMsg
    {
        public ArrayList treaConds = new ArrayList();

        public int discount_element_id;

        public override void readExternal(MemoryStream param1, int len)
        {
            int num = (int)param1.Position;
            int num2 = 0;
            while (param1.Position - num < len)
            {
                uint num3 = ReadUtils.read_TYPE_UINT32(param1);
                int num4 = (int)(num3 & 7);
                int num5 = (int)num3 >> 3;
                if (num5 < num2)
                {
                    param1.Seek(num + len, SeekOrigin.Begin);
                    break;
                }
                num2 = num5;
                switch (num5)
                {
                    case 1:
                        head = new Head();
                        ReadUtils.read_TYPE_MESSAGE(param1, head);
                        break;
                    case 2:
                        {
                            TreaCondition treaCondition = new TreaCondition();
                            ReadUtils.read_TYPE_MESSAGE(param1, treaCondition);
                            treaConds.Add(treaCondition);
                            break;
                        }
                    case 3:
                        discount_element_id = ReadUtils.read_TYPE_INT32(param1);
                        break;
                    default:
                        param1.Seek(num + len, SeekOrigin.Begin);
                        break;
                    case 4:
                    case 5:
                    case 6:
                    case 7:
                    case 8:
                    case 9:
                    case 10:
                    case 11:
                        break;
                }
            }
            int num6 = 0;
        }

        public override void writeExternal(MyMemoryStream param1)
        {
            WriteUtils.writeTag(param1, WireType.LENGTH_DELIMITED, 1u);
            WriteUtils.write_TYPE_MESSAGE(param1, head);
            for (int i = 0; i < treaConds.Count; i++)
            {
                WriteUtils.writeTag(param1, WireType.LENGTH_DELIMITED, 2u);
                WriteUtils.write_TYPE_MESSAGE(param1, (TreaCondition)treaConds[i]);
            }
            WriteUtils.writeTag(param1, WireType.VARINT, 3u);
            WriteUtils.write_TYPE_INT32(param1, discount_element_id);
        }
    }

    internal class Tag
    {
        public uint wireType;

        public uint number;
    }

    internal class TreaCondition : MyMsg
    {
        public int times;

        public int id;

        public int treasure_id;

        public override void readExternal(MemoryStream param1, int len)
        {
            int num = (int)param1.Position;
            int num2 = 0;
            while (param1.Position - num < len)
            {
                uint num3 = ReadUtils.read_TYPE_UINT32(param1);
                int num4 = (int)(num3 & 7);
                int num5 = (int)num3 >> 3;
                if (num5 < num2)
                {
                    param1.Seek(num + len, SeekOrigin.Begin);
                    break;
                }
                num2 = num5;
                switch (num5)
                {
                    case 1:
                        id = ReadUtils.read_TYPE_INT32(param1);
                        break;
                    case 2:
                        times = ReadUtils.read_TYPE_INT32(param1);
                        break;
                    case 3:
                        treasure_id = ReadUtils.read_TYPE_INT32(param1);
                        break;
                    default:
                        param1.Seek(num + len, SeekOrigin.Begin);
                        break;
                    case 4:
                    case 5:
                    case 6:
                    case 7:
                    case 8:
                    case 9:
                    case 10:
                    case 11:
                        break;
                }
            }
            int num6 = 0;
        }

        public override void writeExternal(MyMemoryStream param1)
        {
            WriteUtils.writeTag(param1, WireType.VARINT, 1u);
            WriteUtils.write_TYPE_INT32(param1, id);
            WriteUtils.writeTag(param1, WireType.VARINT, 2u);
            WriteUtils.write_TYPE_INT32(param1, times);
            WriteUtils.writeTag(param1, WireType.VARINT, 3u);
            WriteUtils.write_TYPE_INT32(param1, treasure_id);
        }
    }


    internal class WireType
    {
        public static uint LENGTH_DELIMITED = 2u;

        public static uint FIXED_64_BIT = 1u;

        public static uint VARINT = 0u;

        public static uint FIXED_32_BIT = 5u;
    }


    internal class WriteUtils
    {
        public static void write_TYPE_BYTES(MemoryStream param1, byte[] param2)
        {
            write_TYPE_UINT32(param1, (uint)param2.Length);
            param1.Write(param2, 0, param2.Length);
        }

        public static void writeTag(MemoryStream param1, uint param2, uint param3)
        {
            write_TYPE_UINT32(param1, (param3 << 3) | param2);
        }

        public static void write_TYPE_UINT32(MemoryStream param1, uint param2)
        {
            while (true)
            {
                bool flag = true;
                if ((param2 & -128) == 0)
                {
                    break;
                }
                param1.WriteByte((byte)((param2 & 0x7Fu) | 0x80u));
                param2 >>= 7;
            }
            param1.WriteByte((byte)param2);
        }

        public static void write_TYPE_BOOL(MemoryStream param1, bool param2)
        {
            param1.WriteByte((byte)(param2 ? 1 : 0));
        }

        public static void write_TYPE_INT32(MemoryStream param1, int param2)
        {
            if (param2 < 0)
            {
                writeVarint64(param1, (uint)param2, uint.MaxValue);
            }
            else
            {
                write_TYPE_UINT32(param1, (uint)param2);
            }
        }

        private static void writeVarint64(MemoryStream param1, uint param2, uint param3)
        {
            uint num = 0u;
            if (param3 == 0)
            {
                write_TYPE_UINT32(param1, param2);
                return;
            }
            for (num = 0u; num < 4; num++)
            {
                param1.WriteByte((byte)((param2 & 0x7Fu) | 0x80u));
                param2 >>= 7;
            }
            if ((param3 & 0x7FFFFFF8) == 0)
            {
                param1.WriteByte((byte)((param3 << 4) | param2));
                return;
            }
            param1.WriteByte((byte)((((param3 << 4) | param2) & 0x7Fu) | 0x80u));
            write_TYPE_UINT32(param1, param3 >> 3);
        }

        public static void write_TYPE_MESSAGE(MyMemoryStream param1, IMsg param2)
        {
            MyMemoryStream myMemoryStream = new MyMemoryStream();
            param2.writeExternal(myMemoryStream);
            write_TYPE_UINT32(param1, (uint)myMemoryStream.Length);
            param2.writeExternal(param1);
        }

        public static void write_TYPE_STRING(MyMemoryStream param1, string param2)
        {
            byte[] bytes = Encoding.UTF8.GetBytes(param2);
            write_TYPE_UINT32(param1, (uint)bytes.Length);
            param1.Write(bytes, 0, bytes.Length);
        }

        public static void write_TYPE_FIXED32(MyMemoryStream param1, int param2)
        {
            byte[] array = DataUtil.int2ByteEx(param2);
            param1.Write(array, 0, array.Length);
        }

        public static void write_TYPE_FIXED32_UINT(MyMemoryStream param1, uint param2)
        {
            byte[] array = uint2ByteEx(param2);
            param1.Write(array, 0, array.Length);
        }

        private static byte[] uint2ByteEx(uint i)
        {
            return new byte[4]
            {
            (byte)i,
            (byte)(i >> 8),
            (byte)(i >> 16),
            (byte)(i >> 24)
            };
        }

        public static void write_TYPE_FIXED32_4BIT(MyMemoryStream param1, int param2)
        {
            byte[] array = DataUtil.int2Byte(param2);
            param1.Write(array, 0, array.Length);
        }

        public static void write_TYPE_ENUM(MyMemoryStream param1, int param2)
        {
            write_TYPE_INT32(param1, param2);
        }
    }


}
