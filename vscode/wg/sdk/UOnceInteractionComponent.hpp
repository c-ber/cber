#pragma once
#include "UInteractionComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UOnceInteractionComponent // Size: 0x380
	: public UInteractionComponent // Size: 0x370
{
private:
	typedef UOnceInteractionComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1899); // id32("Class TslGame.OnceInteractionComponent")
		return ptr;
	}
	TArray<struct FName> CharacterHistory; /* Ofs: 0x370 Size: 0x10 - ArrayProperty TslGame.OnceInteractionComponent.CharacterHistory */


	inline bool SetCharacterHistory(t_structHelper inst, TArray<struct FName> value) { inst.WriteOffset(0x370, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUOnceInteractionComponent = sizeof(UOnceInteractionComponent); // 896
    static_assert(sizeof(UOnceInteractionComponent) == 0x380, "Size of UOnceInteractionComponent is not correct.");
	auto constexpr UOnceInteractionComponent_CharacterHistory_Offset = offsetof(UOnceInteractionComponent, CharacterHistory);
	static_assert(UOnceInteractionComponent_CharacterHistory_Offset == 0x370, "UOnceInteractionComponent::CharacterHistory offset is not 370");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
