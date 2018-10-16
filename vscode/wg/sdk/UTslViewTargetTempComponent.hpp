#pragma once
#include "UActorComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslViewTargetTempComponent // Size: 0x200
	: public UActorComponent // Size: 0x1F0
{
private:
	typedef UTslViewTargetTempComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(35); // id32("Class TslGame.TslViewTargetTempComponent")
		return ptr;
	}
//	TArray<struct FTempComponentInfo> ComponentInfos; /* Ofs: 0x1E8 Size: 0x10 - ArrayProperty TslGame.TslViewTargetTempComponent.ComponentInfos */
	uint8_t UnknownData1F0[0x10];


//	inline bool SetComponentInfos(t_structHelper inst, TArray<struct FTempComponentInfo> value) { inst.WriteOffset(0x1E8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslViewTargetTempComponent = sizeof(UTslViewTargetTempComponent); // 512
    static_assert(sizeof(UTslViewTargetTempComponent) == 0x200, "Size of UTslViewTargetTempComponent is not correct.");
//	auto constexpr UTslViewTargetTempComponent_ComponentInfos_Offset = offsetof(UTslViewTargetTempComponent, ComponentInfos);
//	static_assert(UTslViewTargetTempComponent_ComponentInfos_Offset == 0x1e8, "UTslViewTargetTempComponent::ComponentInfos offset is not 1e8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
