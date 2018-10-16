#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UScriptViewportClient // Size: 0x38
	: public UObject // Size: 0x30
{
private:
	typedef UScriptViewportClient t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(234); // id32("Class Engine.ScriptViewportClient")
		return ptr;
	}
	uint8_t UnknownData30[0x8];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUScriptViewportClient = sizeof(UScriptViewportClient); // 56
    static_assert(sizeof(UScriptViewportClient) == 0x38, "Size of UScriptViewportClient is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
