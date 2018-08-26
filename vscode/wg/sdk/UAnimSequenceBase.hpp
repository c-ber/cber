#pragma once
#include "UAnimationAsset.hpp"
#include "FRawCurveTracks.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAnimSequenceBase // Size: 0xA8
	: public UAnimationAsset // Size: 0x80
{
private:
	typedef UAnimSequenceBase t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(247); // id32("Class Engine.AnimSequenceBase")
		return ptr;
	}
	TArray<struct FAnimNotifyEvent> Notifies; /* Ofs: 0x80 Size: 0x10 - ArrayProperty Engine.AnimSequenceBase.Notifies */
	float SequenceLength; /* Ofs: 0x90 Size: 0x4 - FloatProperty Engine.AnimSequenceBase.SequenceLength */
	float RateScale; /* Ofs: 0x94 Size: 0x4 - FloatProperty Engine.AnimSequenceBase.RateScale */
	FRawCurveTracks RawCurveData; /* Ofs: 0x98 Size: 0x10 - StructProperty Engine.AnimSequenceBase.RawCurveData */


	inline bool SetNotifies(t_structHelper inst, TArray<struct FAnimNotifyEvent> value) { inst.WriteOffset(0x80, value); }
	inline bool SetSequenceLength(t_structHelper inst, float value) { inst.WriteOffset(0x90, value); }
	inline bool SetRateScale(t_structHelper inst, float value) { inst.WriteOffset(0x94, value); }
	inline bool SetRawCurveData(t_structHelper inst, FRawCurveTracks value) { inst.WriteOffset(0x98, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAnimSequenceBase = sizeof(UAnimSequenceBase); // 168
    static_assert(sizeof(UAnimSequenceBase) == 0xA8, "Size of UAnimSequenceBase is not correct.");
	auto constexpr UAnimSequenceBase_Notifies_Offset = offsetof(UAnimSequenceBase, Notifies);
	static_assert(UAnimSequenceBase_Notifies_Offset == 0x80, "UAnimSequenceBase::Notifies offset is not 80");
	auto constexpr UAnimSequenceBase_SequenceLength_Offset = offsetof(UAnimSequenceBase, SequenceLength);
	static_assert(UAnimSequenceBase_SequenceLength_Offset == 0x90, "UAnimSequenceBase::SequenceLength offset is not 90");
	auto constexpr UAnimSequenceBase_RateScale_Offset = offsetof(UAnimSequenceBase, RateScale);
	static_assert(UAnimSequenceBase_RateScale_Offset == 0x94, "UAnimSequenceBase::RateScale offset is not 94");
	auto constexpr UAnimSequenceBase_RawCurveData_Offset = offsetof(UAnimSequenceBase, RawCurveData);
	static_assert(UAnimSequenceBase_RawCurveData_Offset == 0x98, "UAnimSequenceBase::RawCurveData offset is not 98");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
