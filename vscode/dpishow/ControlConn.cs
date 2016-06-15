using System;
using System.Collections.Generic;
using System.Text;
using System.Collections;

namespace SimulationTransfer
{
    public enum tlv_type_t
    {
        TLV_APP_ID = 0x01,
        TLV_APP_NAME,
        TLV_USER_IP,
        TLV_APP_ACT,
        TLV_AUDIT_ACCOUNT,
        TLV_AUDIT_CONTENT,
    }

    public enum pType
    {   
        NONE,
        LOGIN,
        HEATBEAT,
        TRANSFER,
        COMFIRM,
        DENY,
        PACKETERROR
    }
    public enum ConnStatus
    {
        NONE,
        UNLOGIN,
        Logining,
        logined,
        HeartBeating,
        HeartBeated
    }
    
    public static class DataConvert
    {
        /// <summary>
        /// ��������ļ����
        /// </summary>
        /// <param name="data">�����������</param>
        /// <param name="index">��ʼλ��</param>
        /// <param name="length">����</param>
        /// <returns>�����</returns>
        public static UInt16 Checksum(byte[] data, int index, int length)
        {
            UInt16 cs = 0;
            for (int i = index; i < index + length; i++)
            {
                cs += data[i];
            }
            return cs;
        }

        /// <summary>
        /// ��ʮ����������ת��Ϊ�޷��ų�������ֵ
        /// </summary>
        /// <param name="source">��ת��������</param>
        /// <param name="index">��ʼλ��</param>
        /// <param name="length">����</param>
        /// <returns>ת������ֵ</returns>
        public static ulong HexBytesToULong(byte[] source, int index, int length)
        {
            byte[] temp = new byte[8];
            Array.Copy(source, index, temp, 0, length % 9);
            return BitConverter.ToUInt64(temp, 0);
        }

    }
    public class ControlConn
    {
        /// <summary>
        /// ��½�û���
        /// </summary>
        private string UserName;
        /// <summary>
        /// ��½����
        /// </summary>
        private string UserPwd;
        /// <summary>
        /// �����ţ�ѭ���ݼ�
        /// </summary>
        private static UInt64 taskid = 1;
        /// <summary>
        /// �����
        /// </summary>
        private static byte[] cmd = new byte[2] { 0x0, 0x0 };
        /// <summary>
        /// �ն���Ӧʱ��
        /// </summary>
        public UInt32 retime;//�ȴ��ն˻���ʱ��(����)
        
        /// <summary>
        /// ����ɼ�ϵͳ����ı���
        /// </summary>
        public  byte[] data;
        /// <summary>
        /// ����ն˻ظ��ı���
        /// </summary>
        public  byte[] inzfdata;
        /// <summary>
        /// ����ն˻ظ��ı��ĳ���
        /// </summary>
        public  int inDataLen ;
        /// <summary>
        /// �����վ���͵ı���
        /// </summary>
        public  byte[] outzfdata;
        /// <summary>
        /// �����վ���͵ı��ĳ���
        /// </summary>
        public  int outDataLen ;
        /// <summary>
        /// ���캯��
        /// </summary>
        /// <param name="name">�û���</param>
        /// <param name="pwd">����</param>
        public ControlConn(string name, string pwd)
        {
            UserName = name;
            UserPwd = pwd;
            retime = 15000;
            data = new byte[3000];
            inzfdata = new byte[3000];
            outzfdata = new byte[3000];
        }
        /// <summary>
        /// ��֡ͷ
        /// </summary>
        /// <param name="data">��������</param>
        /// <param name="down">ƫ����</param>
        /// <param name="dataLen">�����򳤶�</param>
        public void EncapHead(byte[] data , ref int down,UInt32 dataLen)
        {
            try
            {
                data[down++] = 0x55;//ͬ��ͷ
                data[down++] = 0xAA;
                data[down++] = 0x55;
                data[down++] = 0xAA;
                data[down++] = 0x01;//VER
                data[down++] = cmd[0];//CMD
                data[down++] = cmd[1];
                data[down++] = 0x30;//֡��־��Ҫ��Ҫ����


                //������
                for (int i = 0; i < 8; i++)
                {
                    data[down++] = (byte)(taskid >> (i * 8));
                }
                taskid++;

                data[down++] = (byte)dataLen;//���ݳ���
                data[down++] = (byte)(dataLen >> 8);
                data[down++] = (byte)(dataLen >> 16);
                data[down++] = (byte)(dataLen >> 24);
            }
            catch (Exception ex)
            {
                MainForm.log.Record(Logbooks.RecordType.Err, "EncapHead", ex.ToString());
                return;
            }
            
        }
        /// <summary>
        /// ��֡β
        /// </summary>
        /// <param name="data">��������</param>
        /// <param name="down">ƫ����</param>
        public void EncapTail(byte[] data, ref int down)
        {
            try
            {
                UInt16 iTmp = DataConvert.Checksum(data, 4, down - 4);
                data[down++] = (byte)iTmp;//У����
                data[down++] = (byte)(iTmp >> 8);

                data[down++] = 0x55;//ͬ��β
                data[down++] = 0xBB;
                data[down++] = 0x55;
                data[down++] = 0xBB;
            }
            catch (Exception ex)
            {
                MainForm.log.Record(Logbooks.RecordType.Err, "EncapTail", ex.ToString());
                return;
            }

        }
        /// <summary>
        /// ���½֡
        /// </summary>
        /// <returns>���ر��ĳ���</returns>
        public int EncapLoginPacket()
        {
            //AA 55 AA 55 01 00 01 30 01 00 00 00   cs BB 55 BB 55
            data = new byte[3000];
            int down = 0;
            cmd[0] = 0x00;//CMD
            cmd[1] = 0x01;
            try
            {
                EncapHead(data, ref down, (UInt32)(100));

                char[] tmp = UserName.ToCharArray();//�û���
                for (int i = 0; i < 50; i++)
                {

                    if (i >= tmp.Length)
                    {
                        data[down++] = 0x00;
                        continue;
                    }
                    data[down++] = (byte)tmp[i];
                    //data[down++] = (byte)tmp[tmp.Length - i - 1];
                }
                tmp = UserPwd.ToCharArray();//����
                for (int i = 0; i < 50; i++)
                {
                    if (i >= tmp.Length)
                    {
                        data[down++] = 0x00;
                        continue;
                    }
                    data[down++] = (byte)tmp[i];
                    //data[down++] = (byte)tmp[tmp.Length - i - 1];
                }
                EncapTail(data, ref down);
            }
            catch (Exception ex)
            {
                MainForm.log.Record(Logbooks.RecordType.Err, "EncapLoginPacket", ex.ToString());
                return -1;
            }
            return down;
        }
        /// <summary>
        /// ������֡
        /// </summary>
        /// <returns>���ر��ĳ���</returns>
        public int EncapHeatPacket()
        {
            data = new byte[3000];
            int down = 0;
            cmd[0] = 0x00;//CMD
            cmd[1] = 0x02;
            try
            {
                EncapHead(data, ref down, (UInt32)(4));
                //�������
                int heartTime = 300;
                for (int i = 0; i < 4; i++)
                {
                    data[down++] = (byte)(heartTime >> (i * 8));
                }

                EncapTail(data, ref down);
            }
            catch (System.Exception ex)
            {
                MainForm.log.Record(Logbooks.RecordType.Err, "EncapHeatPacket", ex.ToString());
                return -1;
            }    
            return down;
        }

        /// <summary>
        /// ת���������ͷ
        /// </summary>
        /// <returns></returns>
        public int EncapTransfer()
        {
            data = new byte[3000];
            int down = 0;
            cmd[0] = 0x01;//CMD
            cmd[1] = 0x15;
            try
            {
                EncapHead(data, ref down, (UInt32)(outDataLen + 54));

                data[down++] = 0x04;//���ȼ�
                Int64 xd = 1000000010008;//�ŵ����
                for (int i = 0; i < 8; i++)
                {
                    data[down++] = (byte)(xd >> (i * 8));
                }
                for (int i = 0; i < 18; i++)
                {
                    data[down++] = 0;
                }
                data[down++] = 0x02;//��������

                //������
                string qx = outzfdata[8].ToString("X2") + outzfdata[7].ToString("X2");
                char[] qxcs = qx.ToCharArray();

                data[down++] = (Byte)qxcs[0];
                data[down++] = (Byte)qxcs[1];
                data[down++] = (Byte)qxcs[2];
                data[down++] = (Byte)qxcs[3];
                data[down++] = 0x00;
                data[down++] = 0x00;

                //���
                //string addr = outzfdata[10].ToString("X2") + outzfdata[9].ToString("X2");
                int i_tmp = (int)(outzfdata[10] << 8) + (int)outzfdata[9];
                string addr = i_tmp.ToString();
                char[] addrcs = addr.ToCharArray();
                for (int i = 0; i < addrcs.Length; i++)
                {
                    data[down++] = (Byte)addrcs[i];
                }

                for (int i = 0; i < 11 - addrcs.Length; i++)
                {
                    data[down++] = 0;
                }


                data[down++] = 0x00;//�Ƿ�ΪȺ���ַ

                //��Ӧʱ��Ҫ������
                UInt32 ReTime = retime;
                if (outzfdata[18] == 0xcd && outzfdata[20] == 0x13)
                {
                    ReTime = 60000;
                }
                else if(outzfdata[18] == 0xcd && outzfdata[20] == 0x17)
                {
                    ReTime = 50;
                }

                for (int i = 0; i < 4; i++)//�ն���Ӧʱ��
                {
                    data[down++] = (byte)(ReTime >> (i * 8));
                }

                for (int i = 0; i < 4; i++)//ת�����ĳ���
                {
                    data[down++] = (byte)(outDataLen >> (i * 8));
                }

                for (int i = 0; i < outDataLen; i++)//ת���ı�������
                {
                    data[down++] = outzfdata[i];
                }

                EncapTail(data, ref down);
            }
            catch (System.Exception ex)
            {
                MainForm.log.Record(Logbooks.RecordType.Err, "EncapTransfer", ex.ToString());
                return -1;
            }
   
            return down;
        }
        /// <summary>
        /// �����ɼ�ϵͳ�����ı���
        /// </summary>
        /// <param name="pbuff"></param>
        public void ParseTransfer(byte[] pbuff)
        {
            try
            {
                inDataLen = pbuff[0x29] * 8 + pbuff[0x28] * 8 + pbuff[0x27] * 8 + pbuff[0x26];
                for (int i = 0; i < inDataLen; i++)
                {
                    inzfdata[i] = pbuff[0x2A + i];
                }
                if (inzfdata[0] == 0x68 && inzfdata[inDataLen - 1] == 0x16)
                {
                    return;
                }
            }
            catch (System.Exception ex)
            {
                MainForm.log.Record(Logbooks.RecordType.Err, "ParseTransfer", ex.ToString());
                return ;
            }

        }

        public pType ParseData(byte[] pbuff)
        {
            if (pbuff[0] != 0x55 || pbuff[1] != 0xAA)
            {
                return pType.PACKETERROR;
            }
            else if (pbuff[0] == 0x55 && pbuff[1] == 0xAA && pbuff[5] == 0x03 && pbuff[6] == 0x01)
            {
                return pType.COMFIRM;
            }
            else if (pbuff[0] == 0x55 && pbuff[1] == 0xAA && pbuff[5] == 0x03 && pbuff[6] == 0x02)
            {
                return pType.DENY;
            }
            else if (pbuff[0] == 0x55 && pbuff[1] == 0xAA && pbuff[5] == 0x01 && pbuff[6] == 0x15)
            {
                ParseTransfer(pbuff);
                return pType.TRANSFER;
            }
            return pType.NONE;
        }
    }
}
