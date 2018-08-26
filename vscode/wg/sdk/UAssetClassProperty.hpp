#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAssetClassProperty // Size: 0xB0
	: public UAssetObjectProperty // Size: 0xA0
{
private:
	typedef UAssetClassProperty t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(430); // id32("Class CoreUObject.AssetClassProperty")
		return ptr;
	}
	uint8_t UnknownDataA0[0x10];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAssetClassProperty = sizeof(UAssetClassProperty); // 176
    static_assert(sizeof(UAssetClassProperty) == 0xB0, "Size of UAssetClassProperty is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
