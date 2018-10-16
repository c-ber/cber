#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FSHAHashData // Size: 0x14
{
public:
    uint8_t Hash[14]; /* Ofs: 0x0 Size: 0x1 ByteProperty BuildPatchServices.SHAHashData.Hash */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFSHAHashData = sizeof(FSHAHashData); // 20
    static_assert(sizeof(FSHAHashData) == 0x14, "Size of FSHAHashData is not correct.");
	auto constexpr FSHAHashData_Hash_Offset = offsetof(FSHAHashData, Hash);
	static_assert(FSHAHashData_Hash_Offset == 0x0, "FSHAHashData::Hash offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
