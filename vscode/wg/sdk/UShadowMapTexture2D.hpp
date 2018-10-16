#pragma once
#include "UTexture2D.hpp"
#include "EShadowMapFlags.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UShadowMapTexture2D // Size: 0x120
	: public UTexture2D // Size: 0x118
{
private:
	typedef UShadowMapTexture2D t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1241); // id32("Class Engine.ShadowMapTexture2D")
		return ptr;
	}
	TEnumAsByte<enum EShadowMapFlags> ShadowmapFlags; /* Ofs: 0x118 Size: 0x1 - ByteProperty Engine.ShadowMapTexture2D.ShadowmapFlags */
	uint8_t UnknownData119[0x7];


	inline bool SetShadowmapFlags(t_structHelper inst, TEnumAsByte<enum EShadowMapFlags> value) { inst.WriteOffset(0x118, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUShadowMapTexture2D = sizeof(UShadowMapTexture2D); // 288
    static_assert(sizeof(UShadowMapTexture2D) == 0x120, "Size of UShadowMapTexture2D is not correct.");
	auto constexpr UShadowMapTexture2D_ShadowmapFlags_Offset = offsetof(UShadowMapTexture2D, ShadowmapFlags);
	static_assert(UShadowMapTexture2D_ShadowmapFlags_Offset == 0x118, "UShadowMapTexture2D::ShadowmapFlags offset is not 118");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
