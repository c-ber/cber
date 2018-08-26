#pragma once
#include "FVector.hpp"
#include "FRotator.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UStaticMeshSocket // Size: 0x70
	: public UObject // Size: 0x30
{
private:
	typedef UStaticMeshSocket t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1235); // id32("Class Engine.StaticMeshSocket")
		return ptr;
	}
	FName SocketName; /* Ofs: 0x30 Size: 0x8 - NameProperty Engine.StaticMeshSocket.SocketName */
	FVector RelativeLocation; /* Ofs: 0x38 Size: 0xC - StructProperty Engine.StaticMeshSocket.RelativeLocation */
	FRotator RelativeRotation; /* Ofs: 0x44 Size: 0xC - StructProperty Engine.StaticMeshSocket.RelativeRotation */
	FVector RelativeScale; /* Ofs: 0x50 Size: 0xC - StructProperty Engine.StaticMeshSocket.RelativeScale */
	uint8_t UnknownData5C[0x4];
	FString Tag; /* Ofs: 0x60 Size: 0x10 - StrProperty Engine.StaticMeshSocket.Tag */


	inline bool SetSocketName(t_structHelper inst, FName value) { inst.WriteOffset(0x30, value); }
	inline bool SetRelativeLocation(t_structHelper inst, FVector value) { inst.WriteOffset(0x38, value); }
	inline bool SetRelativeRotation(t_structHelper inst, FRotator value) { inst.WriteOffset(0x44, value); }
	inline bool SetRelativeScale(t_structHelper inst, FVector value) { inst.WriteOffset(0x50, value); }
	inline bool SetTag(t_structHelper inst, FString value) { inst.WriteOffset(0x60, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUStaticMeshSocket = sizeof(UStaticMeshSocket); // 112
    static_assert(sizeof(UStaticMeshSocket) == 0x70, "Size of UStaticMeshSocket is not correct.");
	auto constexpr UStaticMeshSocket_SocketName_Offset = offsetof(UStaticMeshSocket, SocketName);
	static_assert(UStaticMeshSocket_SocketName_Offset == 0x30, "UStaticMeshSocket::SocketName offset is not 30");
	auto constexpr UStaticMeshSocket_RelativeLocation_Offset = offsetof(UStaticMeshSocket, RelativeLocation);
	static_assert(UStaticMeshSocket_RelativeLocation_Offset == 0x38, "UStaticMeshSocket::RelativeLocation offset is not 38");
	auto constexpr UStaticMeshSocket_RelativeRotation_Offset = offsetof(UStaticMeshSocket, RelativeRotation);
	static_assert(UStaticMeshSocket_RelativeRotation_Offset == 0x44, "UStaticMeshSocket::RelativeRotation offset is not 44");
	auto constexpr UStaticMeshSocket_RelativeScale_Offset = offsetof(UStaticMeshSocket, RelativeScale);
	static_assert(UStaticMeshSocket_RelativeScale_Offset == 0x50, "UStaticMeshSocket::RelativeScale offset is not 50");
	auto constexpr UStaticMeshSocket_Tag_Offset = offsetof(UStaticMeshSocket, Tag);
	static_assert(UStaticMeshSocket_Tag_Offset == 0x60, "UStaticMeshSocket::Tag offset is not 60");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
