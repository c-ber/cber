#pragma once
#include "UMaterialExpressionTextureSampleParameter2D.hpp"
#include "ETextureColorChannel.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionAntialiasedTextureMask // Size: 0x1C8
	: public UMaterialExpressionTextureSampleParameter2D // Size: 0x1C0
{
private:
	typedef UMaterialExpressionAntialiasedTextureMask t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1001); // id32("Class Engine.MaterialExpressionAntialiasedTextureMask")
		return ptr;
	}
	float Threshold; /* Ofs: 0x1C0 Size: 0x4 - FloatProperty Engine.MaterialExpressionAntialiasedTextureMask.Threshold */
	TEnumAsByte<enum ETextureColorChannel> Channel; /* Ofs: 0x1C4 Size: 0x1 - ByteProperty Engine.MaterialExpressionAntialiasedTextureMask.Channel */
	uint8_t UnknownData1C5[0x3];


	inline bool SetThreshold(t_structHelper inst, float value) { inst.WriteOffset(0x1C0, value); }
	inline bool SetChannel(t_structHelper inst, TEnumAsByte<enum ETextureColorChannel> value) { inst.WriteOffset(0x1C4, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionAntialiasedTextureMask = sizeof(UMaterialExpressionAntialiasedTextureMask); // 456
    static_assert(sizeof(UMaterialExpressionAntialiasedTextureMask) == 0x1C8, "Size of UMaterialExpressionAntialiasedTextureMask is not correct.");
	auto constexpr UMaterialExpressionAntialiasedTextureMask_Threshold_Offset = offsetof(UMaterialExpressionAntialiasedTextureMask, Threshold);
	static_assert(UMaterialExpressionAntialiasedTextureMask_Threshold_Offset == 0x1c0, "UMaterialExpressionAntialiasedTextureMask::Threshold offset is not 1c0");
	auto constexpr UMaterialExpressionAntialiasedTextureMask_Channel_Offset = offsetof(UMaterialExpressionAntialiasedTextureMask, Channel);
	static_assert(UMaterialExpressionAntialiasedTextureMask_Channel_Offset == 0x1c4, "UMaterialExpressionAntialiasedTextureMask::Channel offset is not 1c4");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
