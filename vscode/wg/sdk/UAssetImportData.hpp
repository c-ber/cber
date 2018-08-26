#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAssetImportData // Size: 0x30
	: public UObject // Size: 0x30
{
private:
	typedef UAssetImportData t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(280); // id32("Class Engine.AssetImportData")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAssetImportData = sizeof(UAssetImportData); // 48
    static_assert(sizeof(UAssetImportData) == 0x30, "Size of UAssetImportData is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
