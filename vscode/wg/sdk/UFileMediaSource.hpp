#pragma once
#include "UBaseMediaSource.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UFileMediaSource // Size: 0x58
	: public UBaseMediaSource // Size: 0x40
{
private:
	typedef UFileMediaSource t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(353); // id32("Class MediaAssets.FileMediaSource")
		return ptr;
	}
	FString FilePath; /* Ofs: 0x40 Size: 0x10 - StrProperty MediaAssets.FileMediaSource.FilePath */
	uint8_t boolField50;
	uint8_t UnknownData51[0x7];


	inline bool SetFilePath(t_structHelper inst, FString value) { inst.WriteOffset(0x40, value); }
	inline bool PrecacheFile()
	{
		return boolField50& 0x1;
	}
	inline bool SetPrecacheFile(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x50, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUFileMediaSource = sizeof(UFileMediaSource); // 88
    static_assert(sizeof(UFileMediaSource) == 0x58, "Size of UFileMediaSource is not correct.");
	auto constexpr UFileMediaSource_FilePath_Offset = offsetof(UFileMediaSource, FilePath);
	static_assert(UFileMediaSource_FilePath_Offset == 0x40, "UFileMediaSource::FilePath offset is not 40");
	auto constexpr UFileMediaSource_boolField50_Offset = offsetof(UFileMediaSource, boolField50);
	static_assert(UFileMediaSource_boolField50_Offset == 0x50, "UFileMediaSource::boolField50 offset is not 50");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
