#pragma once
#include "UTslGamepadOptionContentsWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslGamepadOptionGraphic // Size: 0x450
	: public UTslGamepadOptionContentsWidget // Size: 0x440
{
private:
	typedef UTslGamepadOptionGraphic t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1437); // id32("Class TslGame.TslGamepadOptionGraphic")
		return ptr;
	}
//	TArray<ExternalPtr<struct UTslGamepadStepperWidget>> QualitySteppers; /* Ofs: 0x438 Size: 0x10 - ArrayProperty TslGame.TslGamepadOptionGraphic.QualitySteppers */
	uint8_t UnknownData440[0x10];


//	inline bool SetQualitySteppers(t_structHelper inst, TArray<ExternalPtr<struct UTslGamepadStepperWidget>> value) { inst.WriteOffset(0x438, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslGamepadOptionGraphic = sizeof(UTslGamepadOptionGraphic); // 1104
    static_assert(sizeof(UTslGamepadOptionGraphic) == 0x450, "Size of UTslGamepadOptionGraphic is not correct.");
//	auto constexpr UTslGamepadOptionGraphic_QualitySteppers_Offset = offsetof(UTslGamepadOptionGraphic, QualitySteppers);
//	static_assert(UTslGamepadOptionGraphic_QualitySteppers_Offset == 0x438, "UTslGamepadOptionGraphic::QualitySteppers offset is not 438");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
