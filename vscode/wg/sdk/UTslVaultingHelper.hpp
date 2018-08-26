#pragma once
#include "UActor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslVaultingHelper // Size: 0x420
	: public UActor // Size: 0x410
{
private:
	typedef UTslVaultingHelper t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1869); // id32("Class TslGame.TslVaultingHelper")
		return ptr;
	}
//	ExternalPtr<struct USceneComponent> RootSceneComponent; /* Ofs: 0x408 Size: 0x8 - ObjectProperty TslGame.TslVaultingHelper.RootSceneComponent */
	ExternalPtr<struct USceneComponent> ActorAttachScene; /* Ofs: 0x410 Size: 0x8 - ObjectProperty TslGame.TslVaultingHelper.ActorAttachScene */
	uint8_t UnknownData418[0x8];


//	inline bool SetRootSceneComponent(t_structHelper inst, ExternalPtr<struct USceneComponent> value) { inst.WriteOffset(0x408, value); }
	inline bool SetActorAttachScene(t_structHelper inst, ExternalPtr<struct USceneComponent> value) { inst.WriteOffset(0x410, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslVaultingHelper = sizeof(UTslVaultingHelper); // 1056
    static_assert(sizeof(UTslVaultingHelper) == 0x420, "Size of UTslVaultingHelper is not correct.");
//	auto constexpr UTslVaultingHelper_RootSceneComponent_Offset = offsetof(UTslVaultingHelper, RootSceneComponent);
//	static_assert(UTslVaultingHelper_RootSceneComponent_Offset == 0x408, "UTslVaultingHelper::RootSceneComponent offset is not 408");
	auto constexpr UTslVaultingHelper_ActorAttachScene_Offset = offsetof(UTslVaultingHelper, ActorAttachScene);
	static_assert(UTslVaultingHelper_ActorAttachScene_Offset == 0x410, "UTslVaultingHelper::ActorAttachScene offset is not 410");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
