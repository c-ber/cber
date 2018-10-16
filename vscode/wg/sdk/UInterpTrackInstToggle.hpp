#pragma once
#include "UInterpTrackInst.hpp"
#include "ETrackToggleAction.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UInterpTrackInstToggle // Size: 0x40
	: public UInterpTrackInst // Size: 0x30
{
private:
	typedef UInterpTrackInstToggle t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(842); // id32("Class Engine.InterpTrackInstToggle")
		return ptr;
	}
	TEnumAsByte<enum ETrackToggleAction> Action; /* Ofs: 0x30 Size: 0x1 - ByteProperty Engine.InterpTrackInstToggle.Action */
	uint8_t UnknownData31[0x3];
	float LastUpdatePosition; /* Ofs: 0x34 Size: 0x4 - FloatProperty Engine.InterpTrackInstToggle.LastUpdatePosition */
	uint8_t boolField38;
	uint8_t UnknownData39[0x7];


	inline bool SetAction(t_structHelper inst, TEnumAsByte<enum ETrackToggleAction> value) { inst.WriteOffset(0x30, value); }
	inline bool SetLastUpdatePosition(t_structHelper inst, float value) { inst.WriteOffset(0x34, value); }
	inline bool bSavedActiveState()
	{
		return boolField38& 0x1;
	}
	inline bool SetbSavedActiveState(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x38, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUInterpTrackInstToggle = sizeof(UInterpTrackInstToggle); // 64
    static_assert(sizeof(UInterpTrackInstToggle) == 0x40, "Size of UInterpTrackInstToggle is not correct.");
	auto constexpr UInterpTrackInstToggle_Action_Offset = offsetof(UInterpTrackInstToggle, Action);
	static_assert(UInterpTrackInstToggle_Action_Offset == 0x30, "UInterpTrackInstToggle::Action offset is not 30");
	auto constexpr UInterpTrackInstToggle_LastUpdatePosition_Offset = offsetof(UInterpTrackInstToggle, LastUpdatePosition);
	static_assert(UInterpTrackInstToggle_LastUpdatePosition_Offset == 0x34, "UInterpTrackInstToggle::LastUpdatePosition offset is not 34");
	auto constexpr UInterpTrackInstToggle_boolField38_Offset = offsetof(UInterpTrackInstToggle, boolField38);
	static_assert(UInterpTrackInstToggle_boolField38_Offset == 0x38, "UInterpTrackInstToggle::boolField38 offset is not 38");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
