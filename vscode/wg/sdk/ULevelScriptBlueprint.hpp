#pragma once
#include "UBlueprint.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) ULevelScriptBlueprint // Size: 0x1A0
	: public UBlueprint // Size: 0x1A0
{
private:
	typedef ULevelScriptBlueprint t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(291); // id32("Class Engine.LevelScriptBlueprint")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofULevelScriptBlueprint = sizeof(ULevelScriptBlueprint); // 416
    static_assert(sizeof(ULevelScriptBlueprint) == 0x1A0, "Size of ULevelScriptBlueprint is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
