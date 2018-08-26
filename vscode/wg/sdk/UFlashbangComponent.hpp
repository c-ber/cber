#pragma once
#include "UActorComponent.hpp"
#include "EObjectTypeQuery.hpp"
#include "ECollisionChannel.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UFlashbangComponent // Size: 0x220
	: public UActorComponent // Size: 0x1F0
{
private:
	typedef UFlashbangComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1862); // id32("Class TslGame.FlashbangComponent")
		return ptr;
	}
//	TArray<EObjectTypeQuery> SphereQueryObjects; /* Ofs: 0x1E8 Size: 0x10 - ArrayProperty TslGame.FlashbangComponent.SphereQueryObjects */
	uint8_t UnknownData1F0[0x8];
	TArray<ECollisionChannel> BlockQueryObjects; /* Ofs: 0x1F8 Size: 0x10 - ArrayProperty TslGame.FlashbangComponent.BlockQueryObjects */
	FName CharacterTraceSocket; /* Ofs: 0x208 Size: 0x8 - NameProperty TslGame.FlashbangComponent.CharacterTraceSocket */
	float FlashMaxAngle; /* Ofs: 0x210 Size: 0x4 - FloatProperty TslGame.FlashbangComponent.FlashMaxAngle */
	uint8_t UnknownData214[0x4];
	ExternalPtr<struct UClass> DebuffClass; /* Ofs: 0x218 Size: 0x8 - ClassProperty TslGame.FlashbangComponent.DebuffClass */


//	inline bool SetSphereQueryObjects(t_structHelper inst, TArray<EObjectTypeQuery> value) { inst.WriteOffset(0x1E8, value); }
	inline bool SetBlockQueryObjects(t_structHelper inst, TArray<ECollisionChannel> value) { inst.WriteOffset(0x1F8, value); }
	inline bool SetCharacterTraceSocket(t_structHelper inst, FName value) { inst.WriteOffset(0x208, value); }
	inline bool SetFlashMaxAngle(t_structHelper inst, float value) { inst.WriteOffset(0x210, value); }
	inline bool SetDebuffClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x218, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUFlashbangComponent = sizeof(UFlashbangComponent); // 544
    static_assert(sizeof(UFlashbangComponent) == 0x220, "Size of UFlashbangComponent is not correct.");
//	auto constexpr UFlashbangComponent_SphereQueryObjects_Offset = offsetof(UFlashbangComponent, SphereQueryObjects);
//	static_assert(UFlashbangComponent_SphereQueryObjects_Offset == 0x1e8, "UFlashbangComponent::SphereQueryObjects offset is not 1e8");
	auto constexpr UFlashbangComponent_BlockQueryObjects_Offset = offsetof(UFlashbangComponent, BlockQueryObjects);
	static_assert(UFlashbangComponent_BlockQueryObjects_Offset == 0x1f8, "UFlashbangComponent::BlockQueryObjects offset is not 1f8");
	auto constexpr UFlashbangComponent_CharacterTraceSocket_Offset = offsetof(UFlashbangComponent, CharacterTraceSocket);
	static_assert(UFlashbangComponent_CharacterTraceSocket_Offset == 0x208, "UFlashbangComponent::CharacterTraceSocket offset is not 208");
	auto constexpr UFlashbangComponent_FlashMaxAngle_Offset = offsetof(UFlashbangComponent, FlashMaxAngle);
	static_assert(UFlashbangComponent_FlashMaxAngle_Offset == 0x210, "UFlashbangComponent::FlashMaxAngle offset is not 210");
	auto constexpr UFlashbangComponent_DebuffClass_Offset = offsetof(UFlashbangComponent, DebuffClass);
	static_assert(UFlashbangComponent_DebuffClass_Offset == 0x218, "UFlashbangComponent::DebuffClass offset is not 218");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
