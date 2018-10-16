#pragma once
#include "UTslHUD.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UShooterHUD_Default_C // Size: 0xB28
	: public UTslHUD // Size: 0xB20
{
private:
	typedef UShooterHUD_Default_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(135553); // id32("BlueprintGeneratedClass ShooterHUD_Default.ShooterHUD_Default_C")
		return ptr;
	}
	ExternalPtr<struct USceneComponent> DefaultSceneRoot; /* Ofs: 0xB20 Size: 0x8 - ObjectProperty ShooterHUD_Default.ShooterHUD_Default_C.DefaultSceneRoot */


	inline bool SetDefaultSceneRoot(t_structHelper inst, ExternalPtr<struct USceneComponent> value) { inst.WriteOffset(0xB20, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUShooterHUD_Default_C = sizeof(UShooterHUD_Default_C); // 2856
    static_assert(sizeof(UShooterHUD_Default_C) == 0xB28, "Size of UShooterHUD_Default_C is not correct.");
	auto constexpr UShooterHUD_Default_C_DefaultSceneRoot_Offset = offsetof(UShooterHUD_Default_C, DefaultSceneRoot);
	static_assert(UShooterHUD_Default_C_DefaultSceneRoot_Offset == 0xb20, "UShooterHUD_Default_C::DefaultSceneRoot offset is not b20");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
