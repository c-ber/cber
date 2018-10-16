#pragma once
#include "UTexture.hpp"
#include "EPixelFormat.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTexture2DDynamic // Size: 0xE8
	: public UTexture // Size: 0xD0
{
private:
	typedef UTexture2DDynamic t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1243); // id32("Class Engine.Texture2DDynamic")
		return ptr;
	}
	uint8_t UnknownDataD0[0x8];
	TEnumAsByte<enum EPixelFormat> Format; /* Ofs: 0xD8 Size: 0x1 - ByteProperty Engine.Texture2DDynamic.Format */
	uint8_t UnknownDataD9[0xF];


	inline bool SetFormat(t_structHelper inst, TEnumAsByte<enum EPixelFormat> value) { inst.WriteOffset(0xD8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTexture2DDynamic = sizeof(UTexture2DDynamic); // 232
    static_assert(sizeof(UTexture2DDynamic) == 0xE8, "Size of UTexture2DDynamic is not correct.");
	auto constexpr UTexture2DDynamic_Format_Offset = offsetof(UTexture2DDynamic, Format);
	static_assert(UTexture2DDynamic_Format_Offset == 0xd8, "UTexture2DDynamic::Format offset is not d8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
