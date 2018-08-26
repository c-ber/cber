#pragma once
#include "FColor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UInterpGroup // Size: 0x58
	: public UObject // Size: 0x30
{
private:
	typedef UInterpGroup t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(790); // id32("Class Engine.InterpGroup")
		return ptr;
	}
	uint8_t UnknownData30[0x8];
	TArray<ExternalPtr<struct UInterpTrack>> InterpTracks; /* Ofs: 0x38 Size: 0x10 - ArrayProperty Engine.InterpGroup.InterpTracks */
	FName GroupName; /* Ofs: 0x48 Size: 0x8 - NameProperty Engine.InterpGroup.GroupName */
	FColor GroupColor; /* Ofs: 0x50 Size: 0x4 - StructProperty Engine.InterpGroup.GroupColor */
	uint8_t boolField54;
	uint8_t UnknownData55[0x3];


	inline bool SetInterpTracks(t_structHelper inst, TArray<ExternalPtr<struct UInterpTrack>> value) { inst.WriteOffset(0x38, value); }
	inline bool SetGroupName(t_structHelper inst, FName value) { inst.WriteOffset(0x48, value); }
	inline bool SetGroupColor(t_structHelper inst, FColor value) { inst.WriteOffset(0x50, value); }
	inline bool bCollapsed()
	{
		return boolField54& 0x1;
	}
	inline bool SetbCollapsed(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x54, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bVisible()
	{
		return boolField54& 0x2;
	}
	inline bool SetbVisible(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x54, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bIsFolder()
	{
		return boolField54& 0x4;
	}
	inline bool SetbIsFolder(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x54, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool bIsParented()
	{
		return boolField54& 0x8;
	}
	inline bool SetbIsParented(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x54, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool bIsSelected()
	{
		return boolField54& 0x10;
	}
	inline bool SetbIsSelected(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x54, (uint8_t)(value ? curVal | (uint8_t)16 : curVal & ~(uint8_t)16));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUInterpGroup = sizeof(UInterpGroup); // 88
    static_assert(sizeof(UInterpGroup) == 0x58, "Size of UInterpGroup is not correct.");
	auto constexpr UInterpGroup_InterpTracks_Offset = offsetof(UInterpGroup, InterpTracks);
	static_assert(UInterpGroup_InterpTracks_Offset == 0x38, "UInterpGroup::InterpTracks offset is not 38");
	auto constexpr UInterpGroup_GroupName_Offset = offsetof(UInterpGroup, GroupName);
	static_assert(UInterpGroup_GroupName_Offset == 0x48, "UInterpGroup::GroupName offset is not 48");
	auto constexpr UInterpGroup_GroupColor_Offset = offsetof(UInterpGroup, GroupColor);
	static_assert(UInterpGroup_GroupColor_Offset == 0x50, "UInterpGroup::GroupColor offset is not 50");
	auto constexpr UInterpGroup_boolField54_Offset = offsetof(UInterpGroup, boolField54);
	static_assert(UInterpGroup_boolField54_Offset == 0x54, "UInterpGroup::boolField54 offset is not 54");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
