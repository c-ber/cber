#pragma once
#include "UBlueprintAsyncActionBase.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAsyncTaskDownloadImage // Size: 0x50
	: public UBlueprintAsyncActionBase // Size: 0x30
{
private:
	typedef UAsyncTaskDownloadImage t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1626); // id32("Class UMG.AsyncTaskDownloadImage")
		return ptr;
	}
	FScriptMulticastDelegate OnSuccess; /* Ofs: 0x30 Size: 0x10 - MulticastDelegateProperty UMG.AsyncTaskDownloadImage.OnSuccess */
	FScriptMulticastDelegate OnFail; /* Ofs: 0x40 Size: 0x10 - MulticastDelegateProperty UMG.AsyncTaskDownloadImage.OnFail */


	inline bool SetOnSuccess(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x30, value); }
	inline bool SetOnFail(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x40, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAsyncTaskDownloadImage = sizeof(UAsyncTaskDownloadImage); // 80
    static_assert(sizeof(UAsyncTaskDownloadImage) == 0x50, "Size of UAsyncTaskDownloadImage is not correct.");
	auto constexpr UAsyncTaskDownloadImage_OnSuccess_Offset = offsetof(UAsyncTaskDownloadImage, OnSuccess);
	static_assert(UAsyncTaskDownloadImage_OnSuccess_Offset == 0x30, "UAsyncTaskDownloadImage::OnSuccess offset is not 30");
	auto constexpr UAsyncTaskDownloadImage_OnFail_Offset = offsetof(UAsyncTaskDownloadImage, OnFail);
	static_assert(UAsyncTaskDownloadImage_OnFail_Offset == 0x40, "UAsyncTaskDownloadImage::OnFail offset is not 40");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
