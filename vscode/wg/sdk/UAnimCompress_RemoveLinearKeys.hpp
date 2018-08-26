#pragma once
#include "UAnimCompress.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAnimCompress_RemoveLinearKeys // Size: 0x70
	: public UAnimCompress // Size: 0x50
{
private:
	typedef UAnimCompress_RemoveLinearKeys t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(265); // id32("Class Engine.AnimCompress_RemoveLinearKeys")
		return ptr;
	}
	float MaxPosDiff; /* Ofs: 0x50 Size: 0x4 - FloatProperty Engine.AnimCompress_RemoveLinearKeys.MaxPosDiff */
	float MaxAngleDiff; /* Ofs: 0x54 Size: 0x4 - FloatProperty Engine.AnimCompress_RemoveLinearKeys.MaxAngleDiff */
	float MaxScaleDiff; /* Ofs: 0x58 Size: 0x4 - FloatProperty Engine.AnimCompress_RemoveLinearKeys.MaxScaleDiff */
	float MaxEffectorDiff; /* Ofs: 0x5C Size: 0x4 - FloatProperty Engine.AnimCompress_RemoveLinearKeys.MaxEffectorDiff */
	float MinEffectorDiff; /* Ofs: 0x60 Size: 0x4 - FloatProperty Engine.AnimCompress_RemoveLinearKeys.MinEffectorDiff */
	float EffectorDiffSocket; /* Ofs: 0x64 Size: 0x4 - FloatProperty Engine.AnimCompress_RemoveLinearKeys.EffectorDiffSocket */
	float ParentKeyScale; /* Ofs: 0x68 Size: 0x4 - FloatProperty Engine.AnimCompress_RemoveLinearKeys.ParentKeyScale */
	uint8_t boolField6C;
	uint8_t UnknownData6D[0x3];


	inline bool SetMaxPosDiff(t_structHelper inst, float value) { inst.WriteOffset(0x50, value); }
	inline bool SetMaxAngleDiff(t_structHelper inst, float value) { inst.WriteOffset(0x54, value); }
	inline bool SetMaxScaleDiff(t_structHelper inst, float value) { inst.WriteOffset(0x58, value); }
	inline bool SetMaxEffectorDiff(t_structHelper inst, float value) { inst.WriteOffset(0x5C, value); }
	inline bool SetMinEffectorDiff(t_structHelper inst, float value) { inst.WriteOffset(0x60, value); }
	inline bool SetEffectorDiffSocket(t_structHelper inst, float value) { inst.WriteOffset(0x64, value); }
	inline bool SetParentKeyScale(t_structHelper inst, float value) { inst.WriteOffset(0x68, value); }
	inline bool bRetarget()
	{
		return boolField6C& 0x1;
	}
	inline bool SetbRetarget(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x6C, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bActuallyFilterLinearKeys()
	{
		return boolField6C& 0x2;
	}
	inline bool SetbActuallyFilterLinearKeys(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x6C, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAnimCompress_RemoveLinearKeys = sizeof(UAnimCompress_RemoveLinearKeys); // 112
    static_assert(sizeof(UAnimCompress_RemoveLinearKeys) == 0x70, "Size of UAnimCompress_RemoveLinearKeys is not correct.");
	auto constexpr UAnimCompress_RemoveLinearKeys_MaxPosDiff_Offset = offsetof(UAnimCompress_RemoveLinearKeys, MaxPosDiff);
	static_assert(UAnimCompress_RemoveLinearKeys_MaxPosDiff_Offset == 0x50, "UAnimCompress_RemoveLinearKeys::MaxPosDiff offset is not 50");
	auto constexpr UAnimCompress_RemoveLinearKeys_MaxAngleDiff_Offset = offsetof(UAnimCompress_RemoveLinearKeys, MaxAngleDiff);
	static_assert(UAnimCompress_RemoveLinearKeys_MaxAngleDiff_Offset == 0x54, "UAnimCompress_RemoveLinearKeys::MaxAngleDiff offset is not 54");
	auto constexpr UAnimCompress_RemoveLinearKeys_MaxScaleDiff_Offset = offsetof(UAnimCompress_RemoveLinearKeys, MaxScaleDiff);
	static_assert(UAnimCompress_RemoveLinearKeys_MaxScaleDiff_Offset == 0x58, "UAnimCompress_RemoveLinearKeys::MaxScaleDiff offset is not 58");
	auto constexpr UAnimCompress_RemoveLinearKeys_MaxEffectorDiff_Offset = offsetof(UAnimCompress_RemoveLinearKeys, MaxEffectorDiff);
	static_assert(UAnimCompress_RemoveLinearKeys_MaxEffectorDiff_Offset == 0x5c, "UAnimCompress_RemoveLinearKeys::MaxEffectorDiff offset is not 5c");
	auto constexpr UAnimCompress_RemoveLinearKeys_MinEffectorDiff_Offset = offsetof(UAnimCompress_RemoveLinearKeys, MinEffectorDiff);
	static_assert(UAnimCompress_RemoveLinearKeys_MinEffectorDiff_Offset == 0x60, "UAnimCompress_RemoveLinearKeys::MinEffectorDiff offset is not 60");
	auto constexpr UAnimCompress_RemoveLinearKeys_EffectorDiffSocket_Offset = offsetof(UAnimCompress_RemoveLinearKeys, EffectorDiffSocket);
	static_assert(UAnimCompress_RemoveLinearKeys_EffectorDiffSocket_Offset == 0x64, "UAnimCompress_RemoveLinearKeys::EffectorDiffSocket offset is not 64");
	auto constexpr UAnimCompress_RemoveLinearKeys_ParentKeyScale_Offset = offsetof(UAnimCompress_RemoveLinearKeys, ParentKeyScale);
	static_assert(UAnimCompress_RemoveLinearKeys_ParentKeyScale_Offset == 0x68, "UAnimCompress_RemoveLinearKeys::ParentKeyScale offset is not 68");
	auto constexpr UAnimCompress_RemoveLinearKeys_boolField6C_Offset = offsetof(UAnimCompress_RemoveLinearKeys, boolField6C);
	static_assert(UAnimCompress_RemoveLinearKeys_boolField6C_Offset == 0x6c, "UAnimCompress_RemoveLinearKeys::boolField6C offset is not 6c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
