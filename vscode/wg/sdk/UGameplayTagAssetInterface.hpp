#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UGameplayTagAssetInterface // Size: 0x30
	: public UInterface // Size: 0x30
{
private:
	typedef UGameplayTagAssetInterface t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(175); // id32("Class GameplayTags.GameplayTagAssetInterface")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUGameplayTagAssetInterface = sizeof(UGameplayTagAssetInterface); // 48
    static_assert(sizeof(UGameplayTagAssetInterface) == 0x30, "Size of UGameplayTagAssetInterface is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
