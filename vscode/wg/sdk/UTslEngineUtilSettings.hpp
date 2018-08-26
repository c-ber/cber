#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslEngineUtilSettings // Size: 0x68
	: public UObject // Size: 0x30
{
private:
	typedef UTslEngineUtilSettings t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1368); // id32("Class TslGame.TslEngineUtilSettings")
		return ptr;
	}
	FStringAssetReference TiledDoorMaterialName; /* Ofs: 0x30 Size: 0x10 - StructProperty TslGame.TslEngineUtilSettings.TiledDoorMaterialName */
	FStringAssetReference TiledDoorProxyMeshName; /* Ofs: 0x40 Size: 0x10 - StructProperty TslGame.TslEngineUtilSettings.TiledDoorProxyMeshName */
	TArray<struct FStringAssetReference> TiledDoorMeshes; /* Ofs: 0x50 Size: 0x10 - ArrayProperty TslGame.TslEngineUtilSettings.TiledDoorMeshes */
	int32_t TiledFrameWidth; /* Ofs: 0x60 Size: 0x4 - IntProperty TslGame.TslEngineUtilSettings.TiledFrameWidth */
	uint8_t UnknownData64[0x4];


	inline bool SetTiledDoorMaterialName(t_structHelper inst, FStringAssetReference value) { inst.WriteOffset(0x30, value); }
	inline bool SetTiledDoorProxyMeshName(t_structHelper inst, FStringAssetReference value) { inst.WriteOffset(0x40, value); }
	inline bool SetTiledDoorMeshes(t_structHelper inst, TArray<struct FStringAssetReference> value) { inst.WriteOffset(0x50, value); }
	inline bool SetTiledFrameWidth(t_structHelper inst, int32_t value) { inst.WriteOffset(0x60, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslEngineUtilSettings = sizeof(UTslEngineUtilSettings); // 104
    static_assert(sizeof(UTslEngineUtilSettings) == 0x68, "Size of UTslEngineUtilSettings is not correct.");
	auto constexpr UTslEngineUtilSettings_TiledDoorMaterialName_Offset = offsetof(UTslEngineUtilSettings, TiledDoorMaterialName);
	static_assert(UTslEngineUtilSettings_TiledDoorMaterialName_Offset == 0x30, "UTslEngineUtilSettings::TiledDoorMaterialName offset is not 30");
	auto constexpr UTslEngineUtilSettings_TiledDoorProxyMeshName_Offset = offsetof(UTslEngineUtilSettings, TiledDoorProxyMeshName);
	static_assert(UTslEngineUtilSettings_TiledDoorProxyMeshName_Offset == 0x40, "UTslEngineUtilSettings::TiledDoorProxyMeshName offset is not 40");
	auto constexpr UTslEngineUtilSettings_TiledDoorMeshes_Offset = offsetof(UTslEngineUtilSettings, TiledDoorMeshes);
	static_assert(UTslEngineUtilSettings_TiledDoorMeshes_Offset == 0x50, "UTslEngineUtilSettings::TiledDoorMeshes offset is not 50");
	auto constexpr UTslEngineUtilSettings_TiledFrameWidth_Offset = offsetof(UTslEngineUtilSettings, TiledFrameWidth);
	static_assert(UTslEngineUtilSettings_TiledFrameWidth_Offset == 0x60, "UTslEngineUtilSettings::TiledFrameWidth offset is not 60");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
