#pragma once
#include "UBlueprintFunctionLibrary.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UGameLiveStreamingFunctionLibrary // Size: 0x30
	: public UBlueprintFunctionLibrary // Size: 0x30
{
private:
	typedef UGameLiveStreamingFunctionLibrary t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(457); // id32("Class GameLiveStreaming.GameLiveStreamingFunctionLibrary")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUGameLiveStreamingFunctionLibrary = sizeof(UGameLiveStreamingFunctionLibrary); // 48
    static_assert(sizeof(UGameLiveStreamingFunctionLibrary) == 0x30, "Size of UGameLiveStreamingFunctionLibrary is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
