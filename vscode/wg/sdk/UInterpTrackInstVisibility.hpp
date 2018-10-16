#pragma once
#include "UInterpTrackInst.hpp"
#include "EVisibilityTrackAction.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UInterpTrackInstVisibility // Size: 0x38
	: public UInterpTrackInst // Size: 0x30
{
private:
	typedef UInterpTrackInstVisibility t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(844); // id32("Class Engine.InterpTrackInstVisibility")
		return ptr;
	}
	TEnumAsByte<enum EVisibilityTrackAction> Action; /* Ofs: 0x30 Size: 0x1 - ByteProperty Engine.InterpTrackInstVisibility.Action */
	uint8_t UnknownData31[0x3];
	float LastUpdatePosition; /* Ofs: 0x34 Size: 0x4 - FloatProperty Engine.InterpTrackInstVisibility.LastUpdatePosition */


	inline bool SetAction(t_structHelper inst, TEnumAsByte<enum EVisibilityTrackAction> value) { inst.WriteOffset(0x30, value); }
	inline bool SetLastUpdatePosition(t_structHelper inst, float value) { inst.WriteOffset(0x34, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUInterpTrackInstVisibility = sizeof(UInterpTrackInstVisibility); // 56
    static_assert(sizeof(UInterpTrackInstVisibility) == 0x38, "Size of UInterpTrackInstVisibility is not correct.");
	auto constexpr UInterpTrackInstVisibility_Action_Offset = offsetof(UInterpTrackInstVisibility, Action);
	static_assert(UInterpTrackInstVisibility_Action_Offset == 0x30, "UInterpTrackInstVisibility::Action offset is not 30");
	auto constexpr UInterpTrackInstVisibility_LastUpdatePosition_Offset = offsetof(UInterpTrackInstVisibility, LastUpdatePosition);
	static_assert(UInterpTrackInstVisibility_LastUpdatePosition_Offset == 0x34, "UInterpTrackInstVisibility::LastUpdatePosition offset is not 34");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
