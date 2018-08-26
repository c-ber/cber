#pragma once
#include "UCameraShake.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UCameraShake_HitReaction_C // Size: 0x170
	: public UCameraShake // Size: 0x170
{
private:
	typedef UCameraShake_HitReaction_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(88691); // id32("BlueprintGeneratedClass CameraShake_HitReaction.CameraShake_HitReaction_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUCameraShake_HitReaction_C = sizeof(UCameraShake_HitReaction_C); // 368
    static_assert(sizeof(UCameraShake_HitReaction_C) == 0x170, "Size of UCameraShake_HitReaction_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
