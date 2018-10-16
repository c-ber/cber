#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBlueprintAsyncActionBase // Size: 0x30
	: public UObject // Size: 0x30
{
private:
	typedef UBlueprintAsyncActionBase t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(287); // id32("Class Engine.BlueprintAsyncActionBase")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBlueprintAsyncActionBase = sizeof(UBlueprintAsyncActionBase); // 48
    static_assert(sizeof(UBlueprintAsyncActionBase) == 0x30, "Size of UBlueprintAsyncActionBase is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
