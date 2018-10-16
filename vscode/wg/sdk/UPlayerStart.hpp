#pragma once
#include "UNavigationObjectBase.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPlayerStart // Size: 0x440
	: public UNavigationObjectBase // Size: 0x430
{
private:
	typedef UPlayerStart t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1764); // id32("Class Engine.PlayerStart")
		return ptr;
	}
	FName PlayerStartTag; /* Ofs: 0x430 Size: 0x8 - NameProperty Engine.PlayerStart.PlayerStartTag */
	uint8_t UnknownData438[0x8];


	inline bool SetPlayerStartTag(t_structHelper inst, FName value) { inst.WriteOffset(0x430, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPlayerStart = sizeof(UPlayerStart); // 1088
    static_assert(sizeof(UPlayerStart) == 0x440, "Size of UPlayerStart is not correct.");
	auto constexpr UPlayerStart_PlayerStartTag_Offset = offsetof(UPlayerStart, PlayerStartTag);
	static_assert(UPlayerStart_PlayerStartTag_Offset == 0x430, "UPlayerStart::PlayerStartTag offset is not 430");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
