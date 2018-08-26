#pragma once
#include "UActor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) ULevelBounds // Size: 0x410
	: public UActor // Size: 0x410
{
private:
	typedef ULevelBounds t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1747); // id32("Class Engine.LevelBounds")
		return ptr;
	}
//	uint8_t boolField408;
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofULevelBounds = sizeof(ULevelBounds); // 1040
    static_assert(sizeof(ULevelBounds) == 0x410, "Size of ULevelBounds is not correct.");
//	auto constexpr ULevelBounds_boolField408_Offset = offsetof(ULevelBounds, boolField408);
//	static_assert(ULevelBounds_boolField408_Offset == 0x408, "ULevelBounds::boolField408 offset is not 408");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
