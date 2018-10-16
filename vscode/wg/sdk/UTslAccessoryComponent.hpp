#pragma once
#include "USceneComponent.hpp"
#include "FTransform.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslAccessoryComponent // Size: 0x4D0
	: public USceneComponent // Size: 0x490
{
private:
	typedef UTslAccessoryComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1980); // id32("Class TslGame.TslAccessoryComponent")
		return ptr;
	}
	FTransform InitialTransformAttachmentScene; /* Ofs: 0x490 Size: 0x30 - StructProperty TslGame.TslAccessoryComponent.InitialTransformAttachmentScene */
	uint8_t UnknownData4C0[0x10];


	inline bool SetInitialTransformAttachmentScene(t_structHelper inst, FTransform value) { inst.WriteOffset(0x490, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslAccessoryComponent = sizeof(UTslAccessoryComponent); // 1232
    static_assert(sizeof(UTslAccessoryComponent) == 0x4D0, "Size of UTslAccessoryComponent is not correct.");
	auto constexpr UTslAccessoryComponent_InitialTransformAttachmentScene_Offset = offsetof(UTslAccessoryComponent, InitialTransformAttachmentScene);
	static_assert(UTslAccessoryComponent_InitialTransformAttachmentScene_Offset == 0x490, "UTslAccessoryComponent::InitialTransformAttachmentScene offset is not 490");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
