#include <pub_header.h>


typedef uint32_t       HASH_INDEX;


#define CVMX_MT_CRC_POLYNOMIAL(val)         //asm volatile ("dmtc2 %[rt],0x4200" : : [rt] "d" (val))
#define CVMX_MT_CRC_IV(val)                 //asm volatile ("dmtc2 %[rt],0x0201" : : [rt] "d" (val))
#define CVMX_MT_CRC_LEN(val)                //asm volatile ("dmtc2 %[rt],0x1202" : : [rt] "d" (val))
#define CVMX_MT_CRC_BYTE(val)               //asm volatile ("dmtc2 %[rt],0x0204" : : [rt] "d" (val))
#define CVMX_MT_CRC_HALF(val)               //asm volatile ("dmtc2 %[rt],0x0205" : : [rt] "d" (val))
#define CVMX_MT_CRC_WORD(val)               //asm volatile ("dmtc2 %[rt],0x0206" : : [rt] "d" (val))
#define CVMX_MT_CRC_DWORD(val)              //asm volatile ("dmtc2 %[rt],0x1207" : : [rt] "d" (val))
#define CVMX_MT_CRC_VAR(val)                //asm volatile ("dmtc2 %[rt],0x1208" : : [rt] "d" (val))
#define CVMX_MT_CRC_POLYNOMIAL_REFLECT(val) //asm volatile ("dmtc2 %[rt],0x4210" : : [rt] "d" (val))
#define CVMX_MT_CRC_IV_REFLECT(val)         //asm volatile ("dmtc2 %[rt],0x0211" : : [rt] "d" (val))
#define CVMX_MT_CRC_BYTE_REFLECT(val)       //asm volatile ("dmtc2 %[rt],0x0214" : : [rt] "d" (val))
#define CVMX_MT_CRC_HALF_REFLECT(val)       //asm volatile ("dmtc2 %[rt],0x0215" : : [rt] "d" (val))
#define CVMX_MT_CRC_WORD_REFLECT(val)       //asm volatile ("dmtc2 %[rt],0x0216" : : [rt] "d" (val))
#define CVMX_MT_CRC_DWORD_REFLECT(val)      //asm volatile ("dmtc2 %[rt],0x1217" : : [rt] "d" (val))
#define CVMX_MT_CRC_VAR_REFLECT(val)        //asm volatile ("dmtc2 %[rt],0x1218" : : [rt] "d" (val))

#define CVMX_MF_CRC_POLYNOMIAL(val)         //asm volatile ("dmfc2 %[rt],0x0200" : [rt] "=d" (val) : )
#define CVMX_MF_CRC_IV(val)                 //asm volatile ("dmfc2 %[rt],0x0201" : [rt] "=d" (val) : )
#define CVMX_MF_CRC_IV_REFLECT(val)         //asm volatile ("dmfc2 %[rt],0x0203" : [rt] "=d" (val) : )
#define CVMX_MF_CRC_LEN(val)                //asm volatile ("dmfc2 %[rt],0x0202" : [rt] "=d" (val) : )


HASH_INDEX semp_hash_data8(uint8_t data, uint32_t mask)
{
    HASH_INDEX index = 0;
    CVMX_MT_CRC_POLYNOMIAL(0x1edc6f41);
    CVMX_MT_CRC_IV(0xFFFFFFFF);
    CVMX_MT_CRC_BYTE(data);
    CVMX_MF_CRC_IV(index);
    return (index &mask);
}

HASH_INDEX semp_hash_data16(uint16_t data, uint32_t mask)
{
    HASH_INDEX index = 0;
    CVMX_MT_CRC_POLYNOMIAL(0x1edc6f41);
    CVMX_MT_CRC_IV(0xFFFFFFFF);
    CVMX_MT_CRC_HALF(data);
    CVMX_MF_CRC_IV(index);
    return (index &mask);
}

HASH_INDEX semp_hash_data32(uint32_t data, uint32_t mask)
{
    HASH_INDEX idx = 0;
    CVMX_MT_CRC_POLYNOMIAL(0x1edc6f41);
    CVMX_MT_CRC_IV(0xFFFFFFFF);
    CVMX_MT_CRC_WORD(data);
    CVMX_MF_CRC_IV(idx);
    return (idx &mask);
}

HASH_INDEX semp_hash_data64(uint64_t data, uint32_t mask)
{
    HASH_INDEX index = 0;
    CVMX_MT_CRC_POLYNOMIAL(0x1edc6f41);
    CVMX_MT_CRC_IV(0xFFFFFFFF);
    CVMX_MT_CRC_DWORD(data);
    CVMX_MF_CRC_IV(index);
    return (index &mask);
}
HASH_INDEX semp_hash_u64_data(uint64_t *data,uint32_t n,uint32_t mask)
{
    HASH_INDEX index = 0;
    uint32_t count = 0;
    uint64_t *data64 = (uint64_t *)data;
    CVMX_MT_CRC_POLYNOMIAL(0x1edc6f41);
    CVMX_MT_CRC_IV(0);
    for(count = 0;count<n;count++)
    {
        CVMX_MT_CRC_DWORD(data64[count]);
    }
    CVMX_MF_CRC_IV(index);
    return (index &mask);
    
}

HASH_INDEX semp_hash_ipv6_dstsrc_ip(uint64_t *dip, uint64_t *sip, uint32_t mask)
{
    HASH_INDEX index = 0;
    CVMX_MT_CRC_POLYNOMIAL(0x1edc6f41);
    CVMX_MT_CRC_IV(0);

    CVMX_MT_CRC_DWORD(dip[0]);
    CVMX_MT_CRC_DWORD(dip[1]);
    CVMX_MT_CRC_DWORD(sip[0]);
    CVMX_MT_CRC_DWORD(sip[1]);
        
    CVMX_MF_CRC_IV(index);
    return (index & mask);
}

HASH_INDEX semp_hash_v4_five_tuple(void *tuple, uint32_t mask)
{
    HASH_INDEX index = 0;
    uint64_t *data64 = tuple;
    CVMX_MT_CRC_POLYNOMIAL(0x1edc6f41);
    CVMX_MT_CRC_IV(0);
    CVMX_MT_CRC_DWORD(data64[0]);
    CVMX_MT_CRC_DWORD(data64[1] &0xFFFFFFFFFF000000);
    CVMX_MF_CRC_IV(index);
    return (index &mask);
}

#if 0
HASH_INDEX semp_hash_v6_five_tuple(void *data, uint32_t mask)
{
    HASH_INDEX index = 0;
    tuple_v *tuple = data;
    
    CVMX_MT_CRC_POLYNOMIAL(0x1edc6f41);
    CVMX_MT_CRC_IV(0);
    CVMX_MT_CRC_DWORD(tuple->sip.ip.v6[0]);
    CVMX_MT_CRC_DWORD(tuple->sip.ip.v6[1]);
    CVMX_MT_CRC_DWORD(tuple->dip.ip.v6[0]);
    CVMX_MT_CRC_DWORD(tuple->dip.ip.v6[1]);
    CVMX_MT_CRC_DWORD(*((uint64_t *)(&tuple->src_port)) & 0xFFFFFFFFFF000000);
    CVMX_MF_CRC_IV(index);
    return (index &mask);
}
#endif

