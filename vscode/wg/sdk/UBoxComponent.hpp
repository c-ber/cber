#pragma once
#include "UShapeComponent.hpp"
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBoxComponent // Size: 0x920
	: public UShapeComponent // Size: 0x910
{
private:
	typedef UBoxComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(221); // id32("Class Engine.BoxComponent")
		return ptr;
	}
//	FVector BoxExtent; /* Ofs: 0x908 Size: 0xC - StructProperty Engine.BoxComponent.BoxExtent */
	uint8_t UnknownData910[0x10];


//	inline bool SetBoxExtent(t_structHelper inst, FVector value) { inst.WriteOffset(0x908, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBoxComponent = sizeof(UBoxComponent); // 2336
    static_assert(sizeof(UBoxComponent) == 0x920, "Size of UBoxComponent is not correct.");
//	auto constexpr UBoxComponent_BoxExtent_Offset = offsetof(UBoxComponent, BoxExtent);
//	static_assert(UBoxComponent_BoxExtent_Offset == 0x908, "UBoxComponent::BoxExtent offset is not 908");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
