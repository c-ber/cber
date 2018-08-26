#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USlateTextureAtlasInterface // Size: 0x30
	: public UInterface // Size: 0x30
{
private:
	typedef USlateTextureAtlasInterface t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1200); // id32("Class Engine.SlateTextureAtlasInterface")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSlateTextureAtlasInterface = sizeof(USlateTextureAtlasInterface); // 48
    static_assert(sizeof(USlateTextureAtlasInterface) == 0x30, "Size of USlateTextureAtlasInterface is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
