#pragma once
#include "UTslLevelScriptActor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UDesert_Main_C // Size: 0x4C0
	: public UTslLevelScriptActor // Size: 0x4C0
{
private:
	typedef UDesert_Main_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(135957); // id32("BlueprintGeneratedClass Desert_Main.Desert_Main_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUDesert_Main_C = sizeof(UDesert_Main_C); // 1216
    static_assert(sizeof(UDesert_Main_C) == 0x4C0, "Size of UDesert_Main_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
