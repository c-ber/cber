#pragma once
#include "UInterpTrackFloatBase.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UInterpTrackFloatAnimBPParam // Size: 0xB8
	: public UInterpTrackFloatBase // Size: 0x98
{
private:
	typedef UInterpTrackFloatAnimBPParam t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(803); // id32("Class Engine.InterpTrackFloatAnimBPParam")
		return ptr;
	}
	ExternalPtr<struct UAnimBlueprintGeneratedClass> AnimBlueprintClass; /* Ofs: 0x98 Size: 0x8 - ClassProperty Engine.InterpTrackFloatAnimBPParam.AnimBlueprintClass */
	ExternalPtr<struct UClass> AnimClass; /* Ofs: 0xA0 Size: 0x8 - ClassProperty Engine.InterpTrackFloatAnimBPParam.AnimClass */
	FName ParamName; /* Ofs: 0xA8 Size: 0x8 - NameProperty Engine.InterpTrackFloatAnimBPParam.ParamName */
	uint8_t UnknownDataB0[0x8];


	inline bool SetAnimBlueprintClass(t_structHelper inst, ExternalPtr<struct UAnimBlueprintGeneratedClass> value) { inst.WriteOffset(0x98, value); }
	inline bool SetAnimClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0xA0, value); }
	inline bool SetParamName(t_structHelper inst, FName value) { inst.WriteOffset(0xA8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUInterpTrackFloatAnimBPParam = sizeof(UInterpTrackFloatAnimBPParam); // 184
    static_assert(sizeof(UInterpTrackFloatAnimBPParam) == 0xB8, "Size of UInterpTrackFloatAnimBPParam is not correct.");
	auto constexpr UInterpTrackFloatAnimBPParam_AnimBlueprintClass_Offset = offsetof(UInterpTrackFloatAnimBPParam, AnimBlueprintClass);
	static_assert(UInterpTrackFloatAnimBPParam_AnimBlueprintClass_Offset == 0x98, "UInterpTrackFloatAnimBPParam::AnimBlueprintClass offset is not 98");
	auto constexpr UInterpTrackFloatAnimBPParam_AnimClass_Offset = offsetof(UInterpTrackFloatAnimBPParam, AnimClass);
	static_assert(UInterpTrackFloatAnimBPParam_AnimClass_Offset == 0xa0, "UInterpTrackFloatAnimBPParam::AnimClass offset is not a0");
	auto constexpr UInterpTrackFloatAnimBPParam_ParamName_Offset = offsetof(UInterpTrackFloatAnimBPParam, ParamName);
	static_assert(UInterpTrackFloatAnimBPParam_ParamName_Offset == 0xa8, "UInterpTrackFloatAnimBPParam::ParamName offset is not a8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
