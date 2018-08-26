#pragma once
#include "UHapticFeedbackEffect_Base.hpp"
#include "FHapticFeedbackDetails_Curve.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UHapticFeedbackEffect_Curve // Size: 0x120
	: public UHapticFeedbackEffect_Base // Size: 0x30
{
private:
	typedef UHapticFeedbackEffect_Curve t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(780); // id32("Class Engine.HapticFeedbackEffect_Curve")
		return ptr;
	}
	FHapticFeedbackDetails_Curve HapticDetails; /* Ofs: 0x30 Size: 0xF0 - StructProperty Engine.HapticFeedbackEffect_Curve.HapticDetails */


	inline bool SetHapticDetails(t_structHelper inst, FHapticFeedbackDetails_Curve value) { inst.WriteOffset(0x30, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUHapticFeedbackEffect_Curve = sizeof(UHapticFeedbackEffect_Curve); // 288
    static_assert(sizeof(UHapticFeedbackEffect_Curve) == 0x120, "Size of UHapticFeedbackEffect_Curve is not correct.");
	auto constexpr UHapticFeedbackEffect_Curve_HapticDetails_Offset = offsetof(UHapticFeedbackEffect_Curve, HapticDetails);
	static_assert(UHapticFeedbackEffect_Curve_HapticDetails_Offset == 0x30, "UHapticFeedbackEffect_Curve::HapticDetails offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
