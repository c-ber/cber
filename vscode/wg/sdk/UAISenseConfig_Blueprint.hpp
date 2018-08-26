#pragma once
#include "UAISenseConfig.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAISenseConfig_Blueprint // Size: 0x58
	: public UAISenseConfig // Size: 0x50
{
private:
	typedef UAISenseConfig_Blueprint t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1690); // id32("Class AIModule.AISenseConfig_Blueprint")
		return ptr;
	}
	ExternalPtr<struct UClass> Implementation; /* Ofs: 0x50 Size: 0x8 - ClassProperty AIModule.AISenseConfig_Blueprint.Implementation */


	inline bool SetImplementation(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x50, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAISenseConfig_Blueprint = sizeof(UAISenseConfig_Blueprint); // 88
    static_assert(sizeof(UAISenseConfig_Blueprint) == 0x58, "Size of UAISenseConfig_Blueprint is not correct.");
	auto constexpr UAISenseConfig_Blueprint_Implementation_Offset = offsetof(UAISenseConfig_Blueprint, Implementation);
	static_assert(UAISenseConfig_Blueprint_Implementation_Offset == 0x50, "UAISenseConfig_Blueprint::Implementation offset is not 50");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
