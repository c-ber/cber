#pragma once
#include "UTexture.hpp"
#include "TextureAddress.hpp"
#include "FLinearColor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMediaTexture // Size: 0x1B0
	: public UTexture // Size: 0xD0
{
private:
	typedef UMediaTexture t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(357); // id32("Class MediaAssets.MediaTexture")
		return ptr;
	}
	uint8_t UnknownDataD0[0x8];
	TEnumAsByte<enum TextureAddress> AddressX; /* Ofs: 0xD8 Size: 0x1 - ByteProperty MediaAssets.MediaTexture.AddressX */
	TEnumAsByte<enum TextureAddress> AddressY; /* Ofs: 0xD9 Size: 0x1 - ByteProperty MediaAssets.MediaTexture.AddressY */
	uint8_t UnknownDataDA[0x2];
	FLinearColor ClearColor; /* Ofs: 0xDC Size: 0x10 - StructProperty MediaAssets.MediaTexture.ClearColor */
	uint8_t UnknownDataEC[0x4];
	ExternalPtr<struct UMediaPlayer> MediaPlayer; /* Ofs: 0xF0 Size: 0x8 - ObjectProperty MediaAssets.MediaTexture.MediaPlayer */
	int32_t VideoTrackIndex; /* Ofs: 0xF8 Size: 0x4 - IntProperty MediaAssets.MediaTexture.VideoTrackIndex */
	uint8_t UnknownDataFC[0xB4];


	inline bool SetAddressX(t_structHelper inst, TEnumAsByte<enum TextureAddress> value) { inst.WriteOffset(0xD8, value); }
	inline bool SetAddressY(t_structHelper inst, TEnumAsByte<enum TextureAddress> value) { inst.WriteOffset(0xD9, value); }
	inline bool SetClearColor(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0xDC, value); }
	inline bool SetMediaPlayer(t_structHelper inst, ExternalPtr<struct UMediaPlayer> value) { inst.WriteOffset(0xF0, value); }
	inline bool SetVideoTrackIndex(t_structHelper inst, int32_t value) { inst.WriteOffset(0xF8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMediaTexture = sizeof(UMediaTexture); // 432
    static_assert(sizeof(UMediaTexture) == 0x1B0, "Size of UMediaTexture is not correct.");
	auto constexpr UMediaTexture_AddressX_Offset = offsetof(UMediaTexture, AddressX);
	static_assert(UMediaTexture_AddressX_Offset == 0xd8, "UMediaTexture::AddressX offset is not d8");
	auto constexpr UMediaTexture_AddressY_Offset = offsetof(UMediaTexture, AddressY);
	static_assert(UMediaTexture_AddressY_Offset == 0xd9, "UMediaTexture::AddressY offset is not d9");
	auto constexpr UMediaTexture_ClearColor_Offset = offsetof(UMediaTexture, ClearColor);
	static_assert(UMediaTexture_ClearColor_Offset == 0xdc, "UMediaTexture::ClearColor offset is not dc");
	auto constexpr UMediaTexture_MediaPlayer_Offset = offsetof(UMediaTexture, MediaPlayer);
	static_assert(UMediaTexture_MediaPlayer_Offset == 0xf0, "UMediaTexture::MediaPlayer offset is not f0");
	auto constexpr UMediaTexture_VideoTrackIndex_Offset = offsetof(UMediaTexture, VideoTrackIndex);
	static_assert(UMediaTexture_VideoTrackIndex_Offset == 0xf8, "UMediaTexture::VideoTrackIndex offset is not f8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
