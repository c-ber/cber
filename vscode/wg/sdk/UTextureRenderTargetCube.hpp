#pragma once
#include "UTextureRenderTarget.hpp"
#include "FLinearColor.hpp"
#include "EPixelFormat.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTextureRenderTargetCube // Size: 0xF8
	: public UTextureRenderTarget // Size: 0xD8
{
private:
	typedef UTextureRenderTargetCube t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1248); // id32("Class Engine.TextureRenderTargetCube")
		return ptr;
	}
	int32_t SizeX; /* Ofs: 0xD8 Size: 0x4 - IntProperty Engine.TextureRenderTargetCube.SizeX */
	FLinearColor ClearColor; /* Ofs: 0xDC Size: 0x10 - StructProperty Engine.TextureRenderTargetCube.ClearColor */
	TEnumAsByte<enum EPixelFormat> OverrideFormat; /* Ofs: 0xEC Size: 0x1 - ByteProperty Engine.TextureRenderTargetCube.OverrideFormat */
	uint8_t UnknownDataED[0x3];
	uint8_t boolFieldF0;
	uint8_t UnknownDataF1[0x7];


	inline bool SetSizeX(t_structHelper inst, int32_t value) { inst.WriteOffset(0xD8, value); }
	inline bool SetClearColor(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0xDC, value); }
	inline bool SetOverrideFormat(t_structHelper inst, TEnumAsByte<enum EPixelFormat> value) { inst.WriteOffset(0xEC, value); }
	inline bool bHDR()
	{
		return boolFieldF0& 0x1;
	}
	inline bool SetbHDR(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xF0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bForceLinearGamma()
	{
		return boolFieldF0& 0x2;
	}
	inline bool SetbForceLinearGamma(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xF0, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTextureRenderTargetCube = sizeof(UTextureRenderTargetCube); // 248
    static_assert(sizeof(UTextureRenderTargetCube) == 0xF8, "Size of UTextureRenderTargetCube is not correct.");
	auto constexpr UTextureRenderTargetCube_SizeX_Offset = offsetof(UTextureRenderTargetCube, SizeX);
	static_assert(UTextureRenderTargetCube_SizeX_Offset == 0xd8, "UTextureRenderTargetCube::SizeX offset is not d8");
	auto constexpr UTextureRenderTargetCube_ClearColor_Offset = offsetof(UTextureRenderTargetCube, ClearColor);
	static_assert(UTextureRenderTargetCube_ClearColor_Offset == 0xdc, "UTextureRenderTargetCube::ClearColor offset is not dc");
	auto constexpr UTextureRenderTargetCube_OverrideFormat_Offset = offsetof(UTextureRenderTargetCube, OverrideFormat);
	static_assert(UTextureRenderTargetCube_OverrideFormat_Offset == 0xec, "UTextureRenderTargetCube::OverrideFormat offset is not ec");
	auto constexpr UTextureRenderTargetCube_boolFieldF0_Offset = offsetof(UTextureRenderTargetCube, boolFieldF0);
	static_assert(UTextureRenderTargetCube_boolFieldF0_Offset == 0xf0, "UTextureRenderTargetCube::boolFieldF0 offset is not f0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
