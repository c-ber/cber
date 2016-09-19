#include "pcap.h"



char PcapHdr[40]={0xd4,0xc3,0xb2,0xa1,0x02,0x00,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
                  0xff,0xff,0x00,0x00,0x01,0x00,0x00,0x00,0x01,0xc3,0xa7,0x52,0x25,0x0d,0x09,0x00,
                  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00/*......八个字节的长度，caplen，len*/};




int pcap_package_write_to_file(unsigned char *data, int DataLen, char *path)
{
    FILE *fp             = NULL;
    
    if((NULL == data) || (NULL == path))
    {
        return -1;
    }
    
    *((int *)(PcapHdr+32)) = DataLen;
    *((int *)(PcapHdr+36)) = DataLen;

    fp = fopen(path, "w");
    if(NULL == fp)
    {
        printf("open %s fail!\n", path);
        return -1;
    }

    fwrite(PcapHdr, sizeof(PcapHdr), sizeof(char), fp);

    fwrite(data, DataLen, sizeof(char), fp);

    fclose(fp);

    return 0;
}


