#pragma once
#include "UAISenseConfig.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAISenseConfig_Damage // Size: 0x58
	: public UAISenseConfig // Size: 0x50
{
private:
	typedef UAISenseConfig_Damage t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1691); // id32("Class AIModule.AISenseConfig_Damage")
		return ptr;
	}
	ExternalPtr<struct UClass> Implementation; /* Ofs: 0x50 Size: 0x8 - ClassProperty AIModule.AISenseConfig_Damage.Implementation */


	inline bool SetImplementation(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x50, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAISenseConfig_Damage = sizeof(UAISenseConfig_Damage); // 88
    static_assert(sizeof(UAISenseConfig_Damage) == 0x58, "Size of UAISenseConfig_Damage is not correct.");
	auto constexpr UAISenseConfig_Damage_Implementation_Offset = offsetof(UAISenseConfig_Damage, Implementation);
	static_assert(UAISenseConfig_Damage_Implementation_Offset == 0x50, "UAISenseConfig_Damage::Implementation offset is not 50");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
