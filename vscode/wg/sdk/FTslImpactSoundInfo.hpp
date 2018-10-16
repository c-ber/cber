#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FTslImpactSoundInfo // Size: 0x60
{
public:
    ExternalPtr<struct UAkAudioEvent> DefaultSoundAk; /* Ofs: 0x0 Size: 0x8 ObjectProperty TslGame.TslImpactSoundInfo.DefaultSoundAk */
    ExternalPtr<struct UAkAudioEvent> ConcreteSoundAk; /* Ofs: 0x8 Size: 0x8 ObjectProperty TslGame.TslImpactSoundInfo.ConcreteSoundAk */
    ExternalPtr<struct UAkAudioEvent> DirtSoundAk; /* Ofs: 0x10 Size: 0x8 ObjectProperty TslGame.TslImpactSoundInfo.DirtSoundAk */
    ExternalPtr<struct UAkAudioEvent> WaterSoundAk; /* Ofs: 0x18 Size: 0x8 ObjectProperty TslGame.TslImpactSoundInfo.WaterSoundAk */
    ExternalPtr<struct UAkAudioEvent> MetalSoundAk; /* Ofs: 0x20 Size: 0x8 ObjectProperty TslGame.TslImpactSoundInfo.MetalSoundAk */
    ExternalPtr<struct UAkAudioEvent> WoodSoundAk; /* Ofs: 0x28 Size: 0x8 ObjectProperty TslGame.TslImpactSoundInfo.WoodSoundAk */
    ExternalPtr<struct UAkAudioEvent> GrassSoundAk; /* Ofs: 0x30 Size: 0x8 ObjectProperty TslGame.TslImpactSoundInfo.GrassSoundAk */
    ExternalPtr<struct UAkAudioEvent> GlassSoundAk; /* Ofs: 0x38 Size: 0x8 ObjectProperty TslGame.TslImpactSoundInfo.GlassSoundAk */
    ExternalPtr<struct UAkAudioEvent> FleshSoundAk; /* Ofs: 0x40 Size: 0x8 ObjectProperty TslGame.TslImpactSoundInfo.FleshSoundAk */
    ExternalPtr<struct UAkAudioEvent> RockSoundAk; /* Ofs: 0x48 Size: 0x8 ObjectProperty TslGame.TslImpactSoundInfo.RockSoundAk */
    ExternalPtr<struct UAkAudioEvent> SandSoundAk; /* Ofs: 0x50 Size: 0x8 ObjectProperty TslGame.TslImpactSoundInfo.SandSoundAk */
    ExternalPtr<struct UAkAudioEvent> MudSoundAk; /* Ofs: 0x58 Size: 0x8 ObjectProperty TslGame.TslImpactSoundInfo.MudSoundAk */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFTslImpactSoundInfo = sizeof(FTslImpactSoundInfo); // 96
    static_assert(sizeof(FTslImpactSoundInfo) == 0x60, "Size of FTslImpactSoundInfo is not correct.");
	auto constexpr FTslImpactSoundInfo_DefaultSoundAk_Offset = offsetof(FTslImpactSoundInfo, DefaultSoundAk);
	static_assert(FTslImpactSoundInfo_DefaultSoundAk_Offset == 0x0, "FTslImpactSoundInfo::DefaultSoundAk offset is not 0");
	auto constexpr FTslImpactSoundInfo_ConcreteSoundAk_Offset = offsetof(FTslImpactSoundInfo, ConcreteSoundAk);
	static_assert(FTslImpactSoundInfo_ConcreteSoundAk_Offset == 0x8, "FTslImpactSoundInfo::ConcreteSoundAk offset is not 8");
	auto constexpr FTslImpactSoundInfo_DirtSoundAk_Offset = offsetof(FTslImpactSoundInfo, DirtSoundAk);
	static_assert(FTslImpactSoundInfo_DirtSoundAk_Offset == 0x10, "FTslImpactSoundInfo::DirtSoundAk offset is not 10");
	auto constexpr FTslImpactSoundInfo_WaterSoundAk_Offset = offsetof(FTslImpactSoundInfo, WaterSoundAk);
	static_assert(FTslImpactSoundInfo_WaterSoundAk_Offset == 0x18, "FTslImpactSoundInfo::WaterSoundAk offset is not 18");
	auto constexpr FTslImpactSoundInfo_MetalSoundAk_Offset = offsetof(FTslImpactSoundInfo, MetalSoundAk);
	static_assert(FTslImpactSoundInfo_MetalSoundAk_Offset == 0x20, "FTslImpactSoundInfo::MetalSoundAk offset is not 20");
	auto constexpr FTslImpactSoundInfo_WoodSoundAk_Offset = offsetof(FTslImpactSoundInfo, WoodSoundAk);
	static_assert(FTslImpactSoundInfo_WoodSoundAk_Offset == 0x28, "FTslImpactSoundInfo::WoodSoundAk offset is not 28");
	auto constexpr FTslImpactSoundInfo_GrassSoundAk_Offset = offsetof(FTslImpactSoundInfo, GrassSoundAk);
	static_assert(FTslImpactSoundInfo_GrassSoundAk_Offset == 0x30, "FTslImpactSoundInfo::GrassSoundAk offset is not 30");
	auto constexpr FTslImpactSoundInfo_GlassSoundAk_Offset = offsetof(FTslImpactSoundInfo, GlassSoundAk);
	static_assert(FTslImpactSoundInfo_GlassSoundAk_Offset == 0x38, "FTslImpactSoundInfo::GlassSoundAk offset is not 38");
	auto constexpr FTslImpactSoundInfo_FleshSoundAk_Offset = offsetof(FTslImpactSoundInfo, FleshSoundAk);
	static_assert(FTslImpactSoundInfo_FleshSoundAk_Offset == 0x40, "FTslImpactSoundInfo::FleshSoundAk offset is not 40");
	auto constexpr FTslImpactSoundInfo_RockSoundAk_Offset = offsetof(FTslImpactSoundInfo, RockSoundAk);
	static_assert(FTslImpactSoundInfo_RockSoundAk_Offset == 0x48, "FTslImpactSoundInfo::RockSoundAk offset is not 48");
	auto constexpr FTslImpactSoundInfo_SandSoundAk_Offset = offsetof(FTslImpactSoundInfo, SandSoundAk);
	static_assert(FTslImpactSoundInfo_SandSoundAk_Offset == 0x50, "FTslImpactSoundInfo::SandSoundAk offset is not 50");
	auto constexpr FTslImpactSoundInfo_MudSoundAk_Offset = offsetof(FTslImpactSoundInfo, MudSoundAk);
	static_assert(FTslImpactSoundInfo_MudSoundAk_Offset == 0x58, "FTslImpactSoundInfo::MudSoundAk offset is not 58");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
