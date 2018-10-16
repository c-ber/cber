#pragma once
#include "UTexture.hpp"
#include "FIntPoint.hpp"
#include "TextureAddress.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTexture2D // Size: 0x118
	: public UTexture // Size: 0xD0
{
private:
	typedef UTexture2D t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1239); // id32("Class Engine.Texture2D")
		return ptr;
	}
	int32_t RequestedMips; /* Ofs: 0xD0 Size: 0x4 - IntProperty Engine.Texture2D.RequestedMips */
	int32_t ResidentMips; /* Ofs: 0xD4 Size: 0x4 - IntProperty Engine.Texture2D.ResidentMips */
	int32_t StreamingIndex; /* Ofs: 0xD8 Size: 0x4 - IntProperty Engine.Texture2D.StreamingIndex */
	int32_t LevelIndex; /* Ofs: 0xDC Size: 0x4 - IntProperty Engine.Texture2D.LevelIndex */
	int32_t FirstResourceMemMip; /* Ofs: 0xE0 Size: 0x4 - IntProperty Engine.Texture2D.FirstResourceMemMip */
	FIntPoint ImportedSize; /* Ofs: 0xE4 Size: 0x8 - StructProperty Engine.Texture2D.ImportedSize */
	uint8_t UnknownDataEC[0x4];
	double ForceMipLevelsToBeResidentTimestamp; /* Ofs: 0xF0 Size: 0x8 - DoubleProperty Engine.Texture2D.ForceMipLevelsToBeResidentTimestamp */
	uint8_t boolFieldF8;
	uint8_t UnknownDataF9[0x3];
	TEnumAsByte<enum TextureAddress> AddressX; /* Ofs: 0xFC Size: 0x1 - ByteProperty Engine.Texture2D.AddressX */
	TEnumAsByte<enum TextureAddress> AddressY; /* Ofs: 0xFD Size: 0x1 - ByteProperty Engine.Texture2D.AddressY */
	uint8_t UnknownDataFE[0x1A];


	inline bool SetRequestedMips(t_structHelper inst, int32_t value) { inst.WriteOffset(0xD0, value); }
	inline bool SetResidentMips(t_structHelper inst, int32_t value) { inst.WriteOffset(0xD4, value); }
	inline bool SetStreamingIndex(t_structHelper inst, int32_t value) { inst.WriteOffset(0xD8, value); }
	inline bool SetLevelIndex(t_structHelper inst, int32_t value) { inst.WriteOffset(0xDC, value); }
	inline bool SetFirstResourceMemMip(t_structHelper inst, int32_t value) { inst.WriteOffset(0xE0, value); }
	inline bool SetImportedSize(t_structHelper inst, FIntPoint value) { inst.WriteOffset(0xE4, value); }
	inline bool SetForceMipLevelsToBeResidentTimestamp(t_structHelper inst, double value) { inst.WriteOffset(0xF0, value); }
	inline bool bTemporarilyDisableStreaming()
	{
		return boolFieldF8& 0x1;
	}
	inline bool SetbTemporarilyDisableStreaming(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xF8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bIsStreamable()
	{
		return boolFieldF8& 0x2;
	}
	inline bool SetbIsStreamable(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xF8, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bHasStreamingUpdatePending()
	{
		return boolFieldF8& 0x4;
	}
	inline bool SetbHasStreamingUpdatePending(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xF8, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool bHasCancelationPending()
	{
		return boolFieldF8& 0x8;
	}
	inline bool SetbHasCancelationPending(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xF8, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool bForceMiplevelsToBeResident()
	{
		return boolFieldF8& 0x10;
	}
	inline bool SetbForceMiplevelsToBeResident(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xF8, (uint8_t)(value ? curVal | (uint8_t)16 : curVal & ~(uint8_t)16));
	}
	inline bool bIgnoreStreamingMipBias()
	{
		return boolFieldF8& 0x20;
	}
	inline bool SetbIgnoreStreamingMipBias(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xF8, (uint8_t)(value ? curVal | (uint8_t)32 : curVal & ~(uint8_t)32));
	}
	inline bool bGlobalForceMipLevelsToBeResident()
	{
		return boolFieldF8& 0x40;
	}
	inline bool SetbGlobalForceMipLevelsToBeResident(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xF8, (uint8_t)(value ? curVal | (uint8_t)64 : curVal & ~(uint8_t)64));
	}
	inline bool SetAddressX(t_structHelper inst, TEnumAsByte<enum TextureAddress> value) { inst.WriteOffset(0xFC, value); }
	inline bool SetAddressY(t_structHelper inst, TEnumAsByte<enum TextureAddress> value) { inst.WriteOffset(0xFD, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTexture2D = sizeof(UTexture2D); // 280
    static_assert(sizeof(UTexture2D) == 0x118, "Size of UTexture2D is not correct.");
	auto constexpr UTexture2D_RequestedMips_Offset = offsetof(UTexture2D, RequestedMips);
	static_assert(UTexture2D_RequestedMips_Offset == 0xd0, "UTexture2D::RequestedMips offset is not d0");
	auto constexpr UTexture2D_ResidentMips_Offset = offsetof(UTexture2D, ResidentMips);
	static_assert(UTexture2D_ResidentMips_Offset == 0xd4, "UTexture2D::ResidentMips offset is not d4");
	auto constexpr UTexture2D_StreamingIndex_Offset = offsetof(UTexture2D, StreamingIndex);
	static_assert(UTexture2D_StreamingIndex_Offset == 0xd8, "UTexture2D::StreamingIndex offset is not d8");
	auto constexpr UTexture2D_LevelIndex_Offset = offsetof(UTexture2D, LevelIndex);
	static_assert(UTexture2D_LevelIndex_Offset == 0xdc, "UTexture2D::LevelIndex offset is not dc");
	auto constexpr UTexture2D_FirstResourceMemMip_Offset = offsetof(UTexture2D, FirstResourceMemMip);
	static_assert(UTexture2D_FirstResourceMemMip_Offset == 0xe0, "UTexture2D::FirstResourceMemMip offset is not e0");
	auto constexpr UTexture2D_ImportedSize_Offset = offsetof(UTexture2D, ImportedSize);
	static_assert(UTexture2D_ImportedSize_Offset == 0xe4, "UTexture2D::ImportedSize offset is not e4");
	auto constexpr UTexture2D_ForceMipLevelsToBeResidentTimestamp_Offset = offsetof(UTexture2D, ForceMipLevelsToBeResidentTimestamp);
	static_assert(UTexture2D_ForceMipLevelsToBeResidentTimestamp_Offset == 0xf0, "UTexture2D::ForceMipLevelsToBeResidentTimestamp offset is not f0");
	auto constexpr UTexture2D_boolFieldF8_Offset = offsetof(UTexture2D, boolFieldF8);
	static_assert(UTexture2D_boolFieldF8_Offset == 0xf8, "UTexture2D::boolFieldF8 offset is not f8");
	auto constexpr UTexture2D_AddressX_Offset = offsetof(UTexture2D, AddressX);
	static_assert(UTexture2D_AddressX_Offset == 0xfc, "UTexture2D::AddressX offset is not fc");
	auto constexpr UTexture2D_AddressY_Offset = offsetof(UTexture2D, AddressY);
	static_assert(UTexture2D_AddressY_Offset == 0xfd, "UTexture2D::AddressY offset is not fd");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
