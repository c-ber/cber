#pragma once
#include "UAnimCompress.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAnimCompress_RemoveEverySecondKey // Size: 0x58
	: public UAnimCompress // Size: 0x50
{
private:
	typedef UAnimCompress_RemoveEverySecondKey t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(264); // id32("Class Engine.AnimCompress_RemoveEverySecondKey")
		return ptr;
	}
	int32_t MinKeys; /* Ofs: 0x50 Size: 0x4 - IntProperty Engine.AnimCompress_RemoveEverySecondKey.MinKeys */
	uint8_t boolField54;
	uint8_t UnknownData55[0x3];


	inline bool SetMinKeys(t_structHelper inst, int32_t value) { inst.WriteOffset(0x50, value); }
	inline bool bStartAtSecondKey()
	{
		return boolField54& 0x1;
	}
	inline bool SetbStartAtSecondKey(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x54, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAnimCompress_RemoveEverySecondKey = sizeof(UAnimCompress_RemoveEverySecondKey); // 88
    static_assert(sizeof(UAnimCompress_RemoveEverySecondKey) == 0x58, "Size of UAnimCompress_RemoveEverySecondKey is not correct.");
	auto constexpr UAnimCompress_RemoveEverySecondKey_MinKeys_Offset = offsetof(UAnimCompress_RemoveEverySecondKey, MinKeys);
	static_assert(UAnimCompress_RemoveEverySecondKey_MinKeys_Offset == 0x50, "UAnimCompress_RemoveEverySecondKey::MinKeys offset is not 50");
	auto constexpr UAnimCompress_RemoveEverySecondKey_boolField54_Offset = offsetof(UAnimCompress_RemoveEverySecondKey, boolField54);
	static_assert(UAnimCompress_RemoveEverySecondKey_boolField54_Offset == 0x54, "UAnimCompress_RemoveEverySecondKey::boolField54 offset is not 54");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
