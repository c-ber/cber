#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBlueprintFunctionLibrary // Size: 0x30
	: public UObject // Size: 0x30
{
private:
	typedef UBlueprintFunctionLibrary t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(28); // id32("Class Engine.BlueprintFunctionLibrary")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBlueprintFunctionLibrary = sizeof(UBlueprintFunctionLibrary); // 48
    static_assert(sizeof(UBlueprintFunctionLibrary) == 0x30, "Size of UBlueprintFunctionLibrary is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
