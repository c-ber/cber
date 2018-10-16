#pragma once
#include "UParticleModuleLocationBase.hpp"
#include "ELocationBoneSocketSource.hpp"
#include "FVector.hpp"
#include "ELocationBoneSocketSelectionMethod.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParticleModuleLocationBoneSocket // Size: 0x78
	: public UParticleModuleLocationBase // Size: 0x38
{
private:
	typedef UParticleModuleLocationBoneSocket t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1099); // id32("Class Engine.ParticleModuleLocationBoneSocket")
		return ptr;
	}
	TEnumAsByte<enum ELocationBoneSocketSource> SourceType; /* Ofs: 0x38 Size: 0x1 - ByteProperty Engine.ParticleModuleLocationBoneSocket.SourceType */
	uint8_t UnknownData39[0x3];
	FVector UniversalOffset; /* Ofs: 0x3C Size: 0xC - StructProperty Engine.ParticleModuleLocationBoneSocket.UniversalOffset */
	TArray<struct FLocationBoneSocketInfo> SourceLocations; /* Ofs: 0x48 Size: 0x10 - ArrayProperty Engine.ParticleModuleLocationBoneSocket.SourceLocations */
	TEnumAsByte<enum ELocationBoneSocketSelectionMethod> SelectionMethod; /* Ofs: 0x58 Size: 0x1 - ByteProperty Engine.ParticleModuleLocationBoneSocket.SelectionMethod */
	uint8_t UnknownData59[0x3];
	uint8_t boolField5C;
	uint8_t UnknownData5D[0x3];
	float InheritVelocityScale; /* Ofs: 0x60 Size: 0x4 - FloatProperty Engine.ParticleModuleLocationBoneSocket.InheritVelocityScale */
	uint8_t UnknownData64[0x4];
	FName SkelMeshActorParamName; /* Ofs: 0x68 Size: 0x8 - NameProperty Engine.ParticleModuleLocationBoneSocket.SkelMeshActorParamName */
	int32_t NumPreSelectedIndices; /* Ofs: 0x70 Size: 0x4 - IntProperty Engine.ParticleModuleLocationBoneSocket.NumPreSelectedIndices */
	uint8_t UnknownData74[0x4];


	inline bool SetSourceType(t_structHelper inst, TEnumAsByte<enum ELocationBoneSocketSource> value) { inst.WriteOffset(0x38, value); }
	inline bool SetUniversalOffset(t_structHelper inst, FVector value) { inst.WriteOffset(0x3C, value); }
	inline bool SetSourceLocations(t_structHelper inst, TArray<struct FLocationBoneSocketInfo> value) { inst.WriteOffset(0x48, value); }
	inline bool SetSelectionMethod(t_structHelper inst, TEnumAsByte<enum ELocationBoneSocketSelectionMethod> value) { inst.WriteOffset(0x58, value); }
	inline bool bUpdatePositionEachFrame()
	{
		return boolField5C& 0x1;
	}
	inline bool SetbUpdatePositionEachFrame(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x5C, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bOrientMeshEmitters()
	{
		return boolField5C& 0x2;
	}
	inline bool SetbOrientMeshEmitters(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x5C, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bInheritBoneVelocity()
	{
		return boolField5C& 0x4;
	}
	inline bool SetbInheritBoneVelocity(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x5C, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool SetInheritVelocityScale(t_structHelper inst, float value) { inst.WriteOffset(0x60, value); }
	inline bool SetSkelMeshActorParamName(t_structHelper inst, FName value) { inst.WriteOffset(0x68, value); }
	inline bool SetNumPreSelectedIndices(t_structHelper inst, int32_t value) { inst.WriteOffset(0x70, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParticleModuleLocationBoneSocket = sizeof(UParticleModuleLocationBoneSocket); // 120
    static_assert(sizeof(UParticleModuleLocationBoneSocket) == 0x78, "Size of UParticleModuleLocationBoneSocket is not correct.");
	auto constexpr UParticleModuleLocationBoneSocket_SourceType_Offset = offsetof(UParticleModuleLocationBoneSocket, SourceType);
	static_assert(UParticleModuleLocationBoneSocket_SourceType_Offset == 0x38, "UParticleModuleLocationBoneSocket::SourceType offset is not 38");
	auto constexpr UParticleModuleLocationBoneSocket_UniversalOffset_Offset = offsetof(UParticleModuleLocationBoneSocket, UniversalOffset);
	static_assert(UParticleModuleLocationBoneSocket_UniversalOffset_Offset == 0x3c, "UParticleModuleLocationBoneSocket::UniversalOffset offset is not 3c");
	auto constexpr UParticleModuleLocationBoneSocket_SourceLocations_Offset = offsetof(UParticleModuleLocationBoneSocket, SourceLocations);
	static_assert(UParticleModuleLocationBoneSocket_SourceLocations_Offset == 0x48, "UParticleModuleLocationBoneSocket::SourceLocations offset is not 48");
	auto constexpr UParticleModuleLocationBoneSocket_SelectionMethod_Offset = offsetof(UParticleModuleLocationBoneSocket, SelectionMethod);
	static_assert(UParticleModuleLocationBoneSocket_SelectionMethod_Offset == 0x58, "UParticleModuleLocationBoneSocket::SelectionMethod offset is not 58");
	auto constexpr UParticleModuleLocationBoneSocket_boolField5C_Offset = offsetof(UParticleModuleLocationBoneSocket, boolField5C);
	static_assert(UParticleModuleLocationBoneSocket_boolField5C_Offset == 0x5c, "UParticleModuleLocationBoneSocket::boolField5C offset is not 5c");
	auto constexpr UParticleModuleLocationBoneSocket_InheritVelocityScale_Offset = offsetof(UParticleModuleLocationBoneSocket, InheritVelocityScale);
	static_assert(UParticleModuleLocationBoneSocket_InheritVelocityScale_Offset == 0x60, "UParticleModuleLocationBoneSocket::InheritVelocityScale offset is not 60");
	auto constexpr UParticleModuleLocationBoneSocket_SkelMeshActorParamName_Offset = offsetof(UParticleModuleLocationBoneSocket, SkelMeshActorParamName);
	static_assert(UParticleModuleLocationBoneSocket_SkelMeshActorParamName_Offset == 0x68, "UParticleModuleLocationBoneSocket::SkelMeshActorParamName offset is not 68");
	auto constexpr UParticleModuleLocationBoneSocket_NumPreSelectedIndices_Offset = offsetof(UParticleModuleLocationBoneSocket, NumPreSelectedIndices);
	static_assert(UParticleModuleLocationBoneSocket_NumPreSelectedIndices_Offset == 0x70, "UParticleModuleLocationBoneSocket::NumPreSelectedIndices offset is not 70");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
