#pragma once
#include "FVector.hpp"
#include "FRotator.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USkeletalMeshSocket // Size: 0x68
	: public UObject // Size: 0x30
{
private:
	typedef USkeletalMeshSocket t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1198); // id32("Class Engine.SkeletalMeshSocket")
		return ptr;
	}
	FName SocketName; /* Ofs: 0x30 Size: 0x8 - NameProperty Engine.SkeletalMeshSocket.SocketName */
	FName BoneName; /* Ofs: 0x38 Size: 0x8 - NameProperty Engine.SkeletalMeshSocket.BoneName */
	FVector RelativeLocation; /* Ofs: 0x40 Size: 0xC - StructProperty Engine.SkeletalMeshSocket.RelativeLocation */
	FRotator RelativeRotation; /* Ofs: 0x4C Size: 0xC - StructProperty Engine.SkeletalMeshSocket.RelativeRotation */
	FVector RelativeScale; /* Ofs: 0x58 Size: 0xC - StructProperty Engine.SkeletalMeshSocket.RelativeScale */
	uint8_t boolField64;
	uint8_t UnknownData65[0x3];


	inline bool SetSocketName(t_structHelper inst, FName value) { inst.WriteOffset(0x30, value); }
	inline bool SetBoneName(t_structHelper inst, FName value) { inst.WriteOffset(0x38, value); }
	inline bool SetRelativeLocation(t_structHelper inst, FVector value) { inst.WriteOffset(0x40, value); }
	inline bool SetRelativeRotation(t_structHelper inst, FRotator value) { inst.WriteOffset(0x4C, value); }
	inline bool SetRelativeScale(t_structHelper inst, FVector value) { inst.WriteOffset(0x58, value); }
	inline bool bForceAlwaysAnimated()
	{
		return boolField64& 0x1;
	}
	inline bool SetbForceAlwaysAnimated(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x64, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSkeletalMeshSocket = sizeof(USkeletalMeshSocket); // 104
    static_assert(sizeof(USkeletalMeshSocket) == 0x68, "Size of USkeletalMeshSocket is not correct.");
	auto constexpr USkeletalMeshSocket_SocketName_Offset = offsetof(USkeletalMeshSocket, SocketName);
	static_assert(USkeletalMeshSocket_SocketName_Offset == 0x30, "USkeletalMeshSocket::SocketName offset is not 30");
	auto constexpr USkeletalMeshSocket_BoneName_Offset = offsetof(USkeletalMeshSocket, BoneName);
	static_assert(USkeletalMeshSocket_BoneName_Offset == 0x38, "USkeletalMeshSocket::BoneName offset is not 38");
	auto constexpr USkeletalMeshSocket_RelativeLocation_Offset = offsetof(USkeletalMeshSocket, RelativeLocation);
	static_assert(USkeletalMeshSocket_RelativeLocation_Offset == 0x40, "USkeletalMeshSocket::RelativeLocation offset is not 40");
	auto constexpr USkeletalMeshSocket_RelativeRotation_Offset = offsetof(USkeletalMeshSocket, RelativeRotation);
	static_assert(USkeletalMeshSocket_RelativeRotation_Offset == 0x4c, "USkeletalMeshSocket::RelativeRotation offset is not 4c");
	auto constexpr USkeletalMeshSocket_RelativeScale_Offset = offsetof(USkeletalMeshSocket, RelativeScale);
	static_assert(USkeletalMeshSocket_RelativeScale_Offset == 0x58, "USkeletalMeshSocket::RelativeScale offset is not 58");
	auto constexpr USkeletalMeshSocket_boolField64_Offset = offsetof(USkeletalMeshSocket, boolField64);
	static_assert(USkeletalMeshSocket_boolField64_Offset == 0x64, "USkeletalMeshSocket::boolField64 offset is not 64");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
