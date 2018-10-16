#pragma once
#include "UDataAsset.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslEmoteTraceData // Size: 0x48
	: public UDataAsset // Size: 0x38
{
private:
	typedef UTslEmoteTraceData t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1878); // id32("Class TslGame.TslEmoteTraceData")
		return ptr;
	}
	TArray<struct FEmoteTraceCheck> TraceCheckArray; /* Ofs: 0x38 Size: 0x10 - ArrayProperty TslGame.TslEmoteTraceData.TraceCheckArray */


	inline bool SetTraceCheckArray(t_structHelper inst, TArray<struct FEmoteTraceCheck> value) { inst.WriteOffset(0x38, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslEmoteTraceData = sizeof(UTslEmoteTraceData); // 72
    static_assert(sizeof(UTslEmoteTraceData) == 0x48, "Size of UTslEmoteTraceData is not correct.");
	auto constexpr UTslEmoteTraceData_TraceCheckArray_Offset = offsetof(UTslEmoteTraceData, TraceCheckArray);
	static_assert(UTslEmoteTraceData_TraceCheckArray_Offset == 0x38, "UTslEmoteTraceData::TraceCheckArray offset is not 38");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
