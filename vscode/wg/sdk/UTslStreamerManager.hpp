#pragma once
#include "UActor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslStreamerManager // Size: 0x430
	: public UActor // Size: 0x410
{
private:
	typedef UTslStreamerManager t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1509); // id32("Class TslGame.TslStreamerManager")
		return ptr;
	}
	TArray<ExternalPtr<struct UClass>> StreamerClasses; /* Ofs: 0x410 Size: 0x10 - ArrayProperty TslGame.TslStreamerManager.StreamerClasses */
	TArray<ExternalPtr<struct UTslStreamer>> TslStreamers; /* Ofs: 0x420 Size: 0x10 - ArrayProperty TslGame.TslStreamerManager.TslStreamers */


	inline bool SetStreamerClasses(t_structHelper inst, TArray<ExternalPtr<struct UClass>> value) { inst.WriteOffset(0x410, value); }
	inline bool SetTslStreamers(t_structHelper inst, TArray<ExternalPtr<struct UTslStreamer>> value) { inst.WriteOffset(0x420, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslStreamerManager = sizeof(UTslStreamerManager); // 1072
    static_assert(sizeof(UTslStreamerManager) == 0x430, "Size of UTslStreamerManager is not correct.");
	auto constexpr UTslStreamerManager_StreamerClasses_Offset = offsetof(UTslStreamerManager, StreamerClasses);
	static_assert(UTslStreamerManager_StreamerClasses_Offset == 0x410, "UTslStreamerManager::StreamerClasses offset is not 410");
	auto constexpr UTslStreamerManager_TslStreamers_Offset = offsetof(UTslStreamerManager, TslStreamers);
	static_assert(UTslStreamerManager_TslStreamers_Offset == 0x420, "UTslStreamerManager::TslStreamers offset is not 420");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
