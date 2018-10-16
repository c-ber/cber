#pragma once
#include "UTextureRenderTarget.hpp"
#include "FLinearColor.hpp"
#include "TextureAddress.hpp"
#include "EPixelFormat.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTextureRenderTarget2D // Size: 0x100
	: public UTextureRenderTarget // Size: 0xD8
{
private:
	typedef UTextureRenderTarget2D t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1246); // id32("Class Engine.TextureRenderTarget2D")
		return ptr;
	}
	int32_t SizeX; /* Ofs: 0xD8 Size: 0x4 - IntProperty Engine.TextureRenderTarget2D.SizeX */
	int32_t SizeY; /* Ofs: 0xDC Size: 0x4 - IntProperty Engine.TextureRenderTarget2D.SizeY */
	FLinearColor ClearColor; /* Ofs: 0xE0 Size: 0x10 - StructProperty Engine.TextureRenderTarget2D.ClearColor */
	TEnumAsByte<enum TextureAddress> AddressX; /* Ofs: 0xF0 Size: 0x1 - ByteProperty Engine.TextureRenderTarget2D.AddressX */
	TEnumAsByte<enum TextureAddress> AddressY; /* Ofs: 0xF1 Size: 0x1 - ByteProperty Engine.TextureRenderTarget2D.AddressY */
	uint8_t UnknownDataF2[0x2];
	uint8_t boolFieldF4;
	uint8_t UnknownDataF5[0x3];
	TEnumAsByte<enum EPixelFormat> OverrideFormat; /* Ofs: 0xF8 Size: 0x1 - ByteProperty Engine.TextureRenderTarget2D.OverrideFormat */
	uint8_t UnknownDataF9[0x7];


	inline bool SetSizeX(t_structHelper inst, int32_t value) { inst.WriteOffset(0xD8, value); }
	inline bool SetSizeY(t_structHelper inst, int32_t value) { inst.WriteOffset(0xDC, value); }
	inline bool SetClearColor(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0xE0, value); }
	inline bool SetAddressX(t_structHelper inst, TEnumAsByte<enum TextureAddress> value) { inst.WriteOffset(0xF0, value); }
	inline bool SetAddressY(t_structHelper inst, TEnumAsByte<enum TextureAddress> value) { inst.WriteOffset(0xF1, value); }
	inline bool bForceLinearGamma()
	{
		return boolFieldF4& 0x1;
	}
	inline bool SetbForceLinearGamma(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xF4, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bHDR()
	{
		return boolFieldF4& 0x2;
	}
	inline bool SetbHDR(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xF4, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bGPUSharedFlag()
	{
		return boolFieldF4& 0x4;
	}
	inline bool SetbGPUSharedFlag(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xF4, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool bAutoGenerateMips()
	{
		return boolFieldF4& 0x8;
	}
	inline bool SetbAutoGenerateMips(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xF4, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool SetOverrideFormat(t_structHelper inst, TEnumAsByte<enum EPixelFormat> value) { inst.WriteOffset(0xF8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTextureRenderTarget2D = sizeof(UTextureRenderTarget2D); // 256
    static_assert(sizeof(UTextureRenderTarget2D) == 0x100, "Size of UTextureRenderTarget2D is not correct.");
	auto constexpr UTextureRenderTarget2D_SizeX_Offset = offsetof(UTextureRenderTarget2D, SizeX);
	static_assert(UTextureRenderTarget2D_SizeX_Offset == 0xd8, "UTextureRenderTarget2D::SizeX offset is not d8");
	auto constexpr UTextureRenderTarget2D_SizeY_Offset = offsetof(UTextureRenderTarget2D, SizeY);
	static_assert(UTextureRenderTarget2D_SizeY_Offset == 0xdc, "UTextureRenderTarget2D::SizeY offset is not dc");
	auto constexpr UTextureRenderTarget2D_ClearColor_Offset = offsetof(UTextureRenderTarget2D, ClearColor);
	static_assert(UTextureRenderTarget2D_ClearColor_Offset == 0xe0, "UTextureRenderTarget2D::ClearColor offset is not e0");
	auto constexpr UTextureRenderTarget2D_AddressX_Offset = offsetof(UTextureRenderTarget2D, AddressX);
	static_assert(UTextureRenderTarget2D_AddressX_Offset == 0xf0, "UTextureRenderTarget2D::AddressX offset is not f0");
	auto constexpr UTextureRenderTarget2D_AddressY_Offset = offsetof(UTextureRenderTarget2D, AddressY);
	static_assert(UTextureRenderTarget2D_AddressY_Offset == 0xf1, "UTextureRenderTarget2D::AddressY offset is not f1");
	auto constexpr UTextureRenderTarget2D_boolFieldF4_Offset = offsetof(UTextureRenderTarget2D, boolFieldF4);
	static_assert(UTextureRenderTarget2D_boolFieldF4_Offset == 0xf4, "UTextureRenderTarget2D::boolFieldF4 offset is not f4");
	auto constexpr UTextureRenderTarget2D_OverrideFormat_Offset = offsetof(UTextureRenderTarget2D, OverrideFormat);
	static_assert(UTextureRenderTarget2D_OverrideFormat_Offset == 0xf8, "UTextureRenderTarget2D::OverrideFormat offset is not f8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
