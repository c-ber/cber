#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UOnlineBlueprintCallProxyBase // Size: 0x30
	: public UObject // Size: 0x30
{
private:
	typedef UOnlineBlueprintCallProxyBase t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(458); // id32("Class Engine.OnlineBlueprintCallProxyBase")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUOnlineBlueprintCallProxyBase = sizeof(UOnlineBlueprintCallProxyBase); // 48
    static_assert(sizeof(UOnlineBlueprintCallProxyBase) == 0x30, "Size of UOnlineBlueprintCallProxyBase is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
