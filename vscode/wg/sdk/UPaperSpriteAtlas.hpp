#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPaperSpriteAtlas // Size: 0x30
	: public UObject // Size: 0x30
{
private:
	typedef UPaperSpriteAtlas t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2032); // id32("Class Paper2D.PaperSpriteAtlas")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPaperSpriteAtlas = sizeof(UPaperSpriteAtlas); // 48
    static_assert(sizeof(UPaperSpriteAtlas) == 0x30, "Size of UPaperSpriteAtlas is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
