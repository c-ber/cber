#pragma once
#include "UPrimitiveComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialBillboardComponent // Size: 0x900
	: public UPrimitiveComponent // Size: 0x8F0
{
private:
	typedef UMaterialBillboardComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(204); // id32("Class Engine.MaterialBillboardComponent")
		return ptr;
	}
//	TArray<struct FMaterialSpriteElement> Elements; /* Ofs: 0x8E8 Size: 0x10 - ArrayProperty Engine.MaterialBillboardComponent.Elements */
	uint8_t UnknownData8F0[0x10];


//	inline bool SetElements(t_structHelper inst, TArray<struct FMaterialSpriteElement> value) { inst.WriteOffset(0x8E8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialBillboardComponent = sizeof(UMaterialBillboardComponent); // 2304
    static_assert(sizeof(UMaterialBillboardComponent) == 0x900, "Size of UMaterialBillboardComponent is not correct.");
//	auto constexpr UMaterialBillboardComponent_Elements_Offset = offsetof(UMaterialBillboardComponent, Elements);
//	static_assert(UMaterialBillboardComponent_Elements_Offset == 0x8e8, "UMaterialBillboardComponent::Elements offset is not 8e8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
