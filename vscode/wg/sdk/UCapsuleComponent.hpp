#pragma once
#include "UShapeComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UCapsuleComponent // Size: 0x920
	: public UShapeComponent // Size: 0x910
{
private:
	typedef UCapsuleComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(222); // id32("Class Engine.CapsuleComponent")
		return ptr;
	}
//	float CapsuleHalfHeight; /* Ofs: 0x908 Size: 0x4 - FloatProperty Engine.CapsuleComponent.CapsuleHalfHeight */
//	float CapsuleRadius; /* Ofs: 0x90C Size: 0x4 - FloatProperty Engine.CapsuleComponent.CapsuleRadius */
	float CapsuleHeight; /* Ofs: 0x910 Size: 0x4 - FloatProperty Engine.CapsuleComponent.CapsuleHeight */
	uint8_t UnknownData914[0xC];


//	inline bool SetCapsuleHalfHeight(t_structHelper inst, float value) { inst.WriteOffset(0x908, value); }
//	inline bool SetCapsuleRadius(t_structHelper inst, float value) { inst.WriteOffset(0x90C, value); }
	inline bool SetCapsuleHeight(t_structHelper inst, float value) { inst.WriteOffset(0x910, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUCapsuleComponent = sizeof(UCapsuleComponent); // 2336
    static_assert(sizeof(UCapsuleComponent) == 0x920, "Size of UCapsuleComponent is not correct.");
//	auto constexpr UCapsuleComponent_CapsuleHalfHeight_Offset = offsetof(UCapsuleComponent, CapsuleHalfHeight);
//	static_assert(UCapsuleComponent_CapsuleHalfHeight_Offset == 0x908, "UCapsuleComponent::CapsuleHalfHeight offset is not 908");
//	auto constexpr UCapsuleComponent_CapsuleRadius_Offset = offsetof(UCapsuleComponent, CapsuleRadius);
//	static_assert(UCapsuleComponent_CapsuleRadius_Offset == 0x90c, "UCapsuleComponent::CapsuleRadius offset is not 90c");
	auto constexpr UCapsuleComponent_CapsuleHeight_Offset = offsetof(UCapsuleComponent, CapsuleHeight);
	static_assert(UCapsuleComponent_CapsuleHeight_Offset == 0x910, "UCapsuleComponent::CapsuleHeight offset is not 910");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
