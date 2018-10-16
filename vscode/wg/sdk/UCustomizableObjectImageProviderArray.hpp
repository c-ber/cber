#pragma once
#include "UCustomizableSystemImageProvider.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UCustomizableObjectImageProviderArray // Size: 0xC0
	: public UCustomizableSystemImageProvider // Size: 0x30
{
private:
	typedef UCustomizableObjectImageProviderArray t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2019); // id32("Class CustomizableObject.CustomizableObjectImageProviderArray")
		return ptr;
	}
	TArray<ExternalPtr<struct UTexture2D>> Textures; /* Ofs: 0x30 Size: 0x10 - ArrayProperty CustomizableObject.CustomizableObjectImageProviderArray.Textures */
	uint8_t UnknownData40[0x80];


	inline bool SetTextures(t_structHelper inst, TArray<ExternalPtr<struct UTexture2D>> value) { inst.WriteOffset(0x30, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUCustomizableObjectImageProviderArray = sizeof(UCustomizableObjectImageProviderArray); // 192
    static_assert(sizeof(UCustomizableObjectImageProviderArray) == 0xC0, "Size of UCustomizableObjectImageProviderArray is not correct.");
	auto constexpr UCustomizableObjectImageProviderArray_Textures_Offset = offsetof(UCustomizableObjectImageProviderArray, Textures);
	static_assert(UCustomizableObjectImageProviderArray_Textures_Offset == 0x30, "UCustomizableObjectImageProviderArray::Textures offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
