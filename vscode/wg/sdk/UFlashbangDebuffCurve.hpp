#pragma once
#include "UCurveBase.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UFlashbangDebuffCurve // Size: 0x50
	: public UCurveBase // Size: 0x38
{
private:
	typedef UFlashbangDebuffCurve t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1863); // id32("Class TslGame.FlashbangDebuffCurve")
		return ptr;
	}
	ExternalPtr<struct UEnum> Enum; /* Ofs: 0x38 Size: 0x8 - ObjectProperty TslGame.FlashbangDebuffCurve.Enum */
	TArray<struct FRichCurve> FloatCurves; /* Ofs: 0x40 Size: 0x10 - ArrayProperty TslGame.FlashbangDebuffCurve.FloatCurves */


	inline bool SetEnum(t_structHelper inst, ExternalPtr<struct UEnum> value) { inst.WriteOffset(0x38, value); }
	inline bool SetFloatCurves(t_structHelper inst, TArray<struct FRichCurve> value) { inst.WriteOffset(0x40, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUFlashbangDebuffCurve = sizeof(UFlashbangDebuffCurve); // 80
    static_assert(sizeof(UFlashbangDebuffCurve) == 0x50, "Size of UFlashbangDebuffCurve is not correct.");
	auto constexpr UFlashbangDebuffCurve_Enum_Offset = offsetof(UFlashbangDebuffCurve, Enum);
	static_assert(UFlashbangDebuffCurve_Enum_Offset == 0x38, "UFlashbangDebuffCurve::Enum offset is not 38");
	auto constexpr UFlashbangDebuffCurve_FloatCurves_Offset = offsetof(UFlashbangDebuffCurve, FloatCurves);
	static_assert(UFlashbangDebuffCurve_FloatCurves_Offset == 0x40, "UFlashbangDebuffCurve::FloatCurves offset is not 40");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
