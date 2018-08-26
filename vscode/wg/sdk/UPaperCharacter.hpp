#pragma once
#include "UCharacter.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPaperCharacter // Size: 0x880
	: public UCharacter // Size: 0x870
{
private:
	typedef UPaperCharacter t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2023); // id32("Class Paper2D.PaperCharacter")
		return ptr;
	}
	ExternalPtr<struct UPaperFlipbookComponent> Sprite; /* Ofs: 0x870 Size: 0x8 - ObjectProperty Paper2D.PaperCharacter.Sprite */
	uint8_t UnknownData878[0x8];


	inline bool SetSprite(t_structHelper inst, ExternalPtr<struct UPaperFlipbookComponent> value) { inst.WriteOffset(0x870, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPaperCharacter = sizeof(UPaperCharacter); // 2176
    static_assert(sizeof(UPaperCharacter) == 0x880, "Size of UPaperCharacter is not correct.");
	auto constexpr UPaperCharacter_Sprite_Offset = offsetof(UPaperCharacter, Sprite);
	static_assert(UPaperCharacter_Sprite_Offset == 0x870, "UPaperCharacter::Sprite offset is not 870");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
