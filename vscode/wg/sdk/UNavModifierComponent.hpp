#pragma once
#include "UNavRelevantComponent.hpp"
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UNavModifierComponent // Size: 0x240
	: public UNavRelevantComponent // Size: 0x220
{
private:
	typedef UNavModifierComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1808); // id32("Class Engine.NavModifierComponent")
		return ptr;
	}
//	ExternalPtr<struct UClass> AreaClass; /* Ofs: 0x218 Size: 0x8 - ClassProperty Engine.NavModifierComponent.AreaClass */
	FVector FailsafeExtent; /* Ofs: 0x220 Size: 0xC - StructProperty Engine.NavModifierComponent.FailsafeExtent */
	uint8_t UnknownData22C[0x14];


//	inline bool SetAreaClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x218, value); }
	inline bool SetFailsafeExtent(t_structHelper inst, FVector value) { inst.WriteOffset(0x220, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUNavModifierComponent = sizeof(UNavModifierComponent); // 576
    static_assert(sizeof(UNavModifierComponent) == 0x240, "Size of UNavModifierComponent is not correct.");
//	auto constexpr UNavModifierComponent_AreaClass_Offset = offsetof(UNavModifierComponent, AreaClass);
//	static_assert(UNavModifierComponent_AreaClass_Offset == 0x218, "UNavModifierComponent::AreaClass offset is not 218");
	auto constexpr UNavModifierComponent_FailsafeExtent_Offset = offsetof(UNavModifierComponent, FailsafeExtent);
	static_assert(UNavModifierComponent_FailsafeExtent_Offset == 0x220, "UNavModifierComponent::FailsafeExtent offset is not 220");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
