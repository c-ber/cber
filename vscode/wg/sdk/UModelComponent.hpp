#pragma once
#include "UPrimitiveComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UModelComponent // Size: 0x930
	: public UPrimitiveComponent // Size: 0x8F0
{
private:
	typedef UModelComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(216); // id32("Class Engine.ModelComponent")
		return ptr;
	}
	uint8_t UnknownData8F0[0x10];
	ExternalPtr<struct UBodySetup> ModelBodySetup; /* Ofs: 0x900 Size: 0x8 - ObjectProperty Engine.ModelComponent.ModelBodySetup */
	uint8_t UnknownData908[0x28];


	inline bool SetModelBodySetup(t_structHelper inst, ExternalPtr<struct UBodySetup> value) { inst.WriteOffset(0x900, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUModelComponent = sizeof(UModelComponent); // 2352
    static_assert(sizeof(UModelComponent) == 0x930, "Size of UModelComponent is not correct.");
	auto constexpr UModelComponent_ModelBodySetup_Offset = offsetof(UModelComponent, ModelBodySetup);
	static_assert(UModelComponent_ModelBodySetup_Offset == 0x900, "UModelComponent::ModelBodySetup offset is not 900");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
