#pragma once
#include "UThingSpawnProcessor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UCombinedThingSpawnProcessor // Size: 0x68
	: public UThingSpawnProcessor // Size: 0x40
{
private:
	typedef UCombinedThingSpawnProcessor t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1973); // id32("Class TslGame.CombinedThingSpawnProcessor")
		return ptr;
	}
	TArray<ExternalPtr<struct UClass>> SubProcessorClasses; /* Ofs: 0x40 Size: 0x10 - ArrayProperty TslGame.CombinedThingSpawnProcessor.SubProcessorClasses */
	TArray<ExternalPtr<struct USubThingSpawnProcessor>> SubProcessors; /* Ofs: 0x50 Size: 0x10 - ArrayProperty TslGame.CombinedThingSpawnProcessor.SubProcessors */
	uint8_t UnknownData60[0x8];


	inline bool SetSubProcessorClasses(t_structHelper inst, TArray<ExternalPtr<struct UClass>> value) { inst.WriteOffset(0x40, value); }
	inline bool SetSubProcessors(t_structHelper inst, TArray<ExternalPtr<struct USubThingSpawnProcessor>> value) { inst.WriteOffset(0x50, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUCombinedThingSpawnProcessor = sizeof(UCombinedThingSpawnProcessor); // 104
    static_assert(sizeof(UCombinedThingSpawnProcessor) == 0x68, "Size of UCombinedThingSpawnProcessor is not correct.");
	auto constexpr UCombinedThingSpawnProcessor_SubProcessorClasses_Offset = offsetof(UCombinedThingSpawnProcessor, SubProcessorClasses);
	static_assert(UCombinedThingSpawnProcessor_SubProcessorClasses_Offset == 0x40, "UCombinedThingSpawnProcessor::SubProcessorClasses offset is not 40");
	auto constexpr UCombinedThingSpawnProcessor_SubProcessors_Offset = offsetof(UCombinedThingSpawnProcessor, SubProcessors);
	static_assert(UCombinedThingSpawnProcessor_SubProcessors_Offset == 0x50, "UCombinedThingSpawnProcessor::SubProcessors offset is not 50");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
