#pragma once
#include "UAnimCompress.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAnimCompress_RemoveTrivialKeys // Size: 0x60
	: public UAnimCompress // Size: 0x50
{
private:
	typedef UAnimCompress_RemoveTrivialKeys t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(267); // id32("Class Engine.AnimCompress_RemoveTrivialKeys")
		return ptr;
	}
	float MaxPosDiff; /* Ofs: 0x50 Size: 0x4 - FloatProperty Engine.AnimCompress_RemoveTrivialKeys.MaxPosDiff */
	float MaxAngleDiff; /* Ofs: 0x54 Size: 0x4 - FloatProperty Engine.AnimCompress_RemoveTrivialKeys.MaxAngleDiff */
	float MaxScaleDiff; /* Ofs: 0x58 Size: 0x4 - FloatProperty Engine.AnimCompress_RemoveTrivialKeys.MaxScaleDiff */
	uint8_t UnknownData5C[0x4];


	inline bool SetMaxPosDiff(t_structHelper inst, float value) { inst.WriteOffset(0x50, value); }
	inline bool SetMaxAngleDiff(t_structHelper inst, float value) { inst.WriteOffset(0x54, value); }
	inline bool SetMaxScaleDiff(t_structHelper inst, float value) { inst.WriteOffset(0x58, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAnimCompress_RemoveTrivialKeys = sizeof(UAnimCompress_RemoveTrivialKeys); // 96
    static_assert(sizeof(UAnimCompress_RemoveTrivialKeys) == 0x60, "Size of UAnimCompress_RemoveTrivialKeys is not correct.");
	auto constexpr UAnimCompress_RemoveTrivialKeys_MaxPosDiff_Offset = offsetof(UAnimCompress_RemoveTrivialKeys, MaxPosDiff);
	static_assert(UAnimCompress_RemoveTrivialKeys_MaxPosDiff_Offset == 0x50, "UAnimCompress_RemoveTrivialKeys::MaxPosDiff offset is not 50");
	auto constexpr UAnimCompress_RemoveTrivialKeys_MaxAngleDiff_Offset = offsetof(UAnimCompress_RemoveTrivialKeys, MaxAngleDiff);
	static_assert(UAnimCompress_RemoveTrivialKeys_MaxAngleDiff_Offset == 0x54, "UAnimCompress_RemoveTrivialKeys::MaxAngleDiff offset is not 54");
	auto constexpr UAnimCompress_RemoveTrivialKeys_MaxScaleDiff_Offset = offsetof(UAnimCompress_RemoveTrivialKeys, MaxScaleDiff);
	static_assert(UAnimCompress_RemoveTrivialKeys_MaxScaleDiff_Offset == 0x58, "UAnimCompress_RemoveTrivialKeys::MaxScaleDiff offset is not 58");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
