#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UClothingAssetCustomData // Size: 0x30
	: public UObject // Size: 0x30
{
private:
	typedef UClothingAssetCustomData t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(315); // id32("Class ClothingSystemRuntime.ClothingAssetCustomData")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUClothingAssetCustomData = sizeof(UClothingAssetCustomData); // 48
    static_assert(sizeof(UClothingAssetCustomData) == 0x30, "Size of UClothingAssetCustomData is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
