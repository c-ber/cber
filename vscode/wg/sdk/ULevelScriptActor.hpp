#pragma once
#include "UActor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) ULevelScriptActor // Size: 0x410
	: public UActor // Size: 0x410
{
private:
	typedef ULevelScriptActor t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1423); // id32("Class Engine.LevelScriptActor")
		return ptr;
	}
//	uint8_t boolField408;
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofULevelScriptActor = sizeof(ULevelScriptActor); // 1040
    static_assert(sizeof(ULevelScriptActor) == 0x410, "Size of ULevelScriptActor is not correct.");
//	auto constexpr ULevelScriptActor_boolField408_Offset = offsetof(ULevelScriptActor, boolField408);
//	static_assert(ULevelScriptActor_boolField408_Offset == 0x408, "ULevelScriptActor::boolField408 offset is not 408");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
