#pragma once
#include "UInterpTrackFloatBase.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UInterpTrackAnimControl // Size: 0xB8
	: public UInterpTrackFloatBase // Size: 0x98
{
private:
	typedef UInterpTrackAnimControl t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(801); // id32("Class Engine.InterpTrackAnimControl")
		return ptr;
	}
	FName SlotName; /* Ofs: 0x98 Size: 0x8 - NameProperty Engine.InterpTrackAnimControl.SlotName */
	TArray<struct FAnimControlTrackKey> AnimSeqs; /* Ofs: 0xA0 Size: 0x10 - ArrayProperty Engine.InterpTrackAnimControl.AnimSeqs */
	uint8_t boolFieldB0;
	uint8_t UnknownDataB1[0x7];


	inline bool SetSlotName(t_structHelper inst, FName value) { inst.WriteOffset(0x98, value); }
	inline bool SetAnimSeqs(t_structHelper inst, TArray<struct FAnimControlTrackKey> value) { inst.WriteOffset(0xA0, value); }
	inline bool bSkipAnimNotifiers()
	{
		return boolFieldB0& 0x1;
	}
	inline bool SetbSkipAnimNotifiers(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xB0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUInterpTrackAnimControl = sizeof(UInterpTrackAnimControl); // 184
    static_assert(sizeof(UInterpTrackAnimControl) == 0xB8, "Size of UInterpTrackAnimControl is not correct.");
	auto constexpr UInterpTrackAnimControl_SlotName_Offset = offsetof(UInterpTrackAnimControl, SlotName);
	static_assert(UInterpTrackAnimControl_SlotName_Offset == 0x98, "UInterpTrackAnimControl::SlotName offset is not 98");
	auto constexpr UInterpTrackAnimControl_AnimSeqs_Offset = offsetof(UInterpTrackAnimControl, AnimSeqs);
	static_assert(UInterpTrackAnimControl_AnimSeqs_Offset == 0xa0, "UInterpTrackAnimControl::AnimSeqs offset is not a0");
	auto constexpr UInterpTrackAnimControl_boolFieldB0_Offset = offsetof(UInterpTrackAnimControl, boolFieldB0);
	static_assert(UInterpTrackAnimControl_boolFieldB0_Offset == 0xb0, "UInterpTrackAnimControl::boolFieldB0 offset is not b0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
