#pragma once
#include "UCameraShake.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UCameraShake_GrenadeDamage_Left_TPP_C // Size: 0x170
	: public UCameraShake // Size: 0x170
{
private:
	typedef UCameraShake_GrenadeDamage_Left_TPP_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(88688); // id32("BlueprintGeneratedClass CameraShake_GrenadeDamage_Left_TPP.CameraShake_GrenadeDamage_Left_TPP_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUCameraShake_GrenadeDamage_Left_TPP_C = sizeof(UCameraShake_GrenadeDamage_Left_TPP_C); // 368
    static_assert(sizeof(UCameraShake_GrenadeDamage_Left_TPP_C) == 0x170, "Size of UCameraShake_GrenadeDamage_Left_TPP_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
