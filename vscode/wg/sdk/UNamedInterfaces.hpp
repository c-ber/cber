#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UNamedInterfaces // Size: 0xC0
	: public UObject // Size: 0x30
{
private:
	typedef UNamedInterfaces t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2165); // id32("Class OnlineSubsystem.NamedInterfaces")
		return ptr;
	}
	TArray<struct FNamedInterface> NamedInterfaces; /* Ofs: 0x30 Size: 0x10 - ArrayProperty OnlineSubsystem.NamedInterfaces.NamedInterfaces */
	TArray<struct FNamedInterfaceDef> NamedInterfaceDefs; /* Ofs: 0x40 Size: 0x10 - ArrayProperty OnlineSubsystem.NamedInterfaces.NamedInterfaceDefs */
	uint8_t UnknownData50[0x70];


	inline bool SetNamedInterfaces(t_structHelper inst, TArray<struct FNamedInterface> value) { inst.WriteOffset(0x30, value); }
	inline bool SetNamedInterfaceDefs(t_structHelper inst, TArray<struct FNamedInterfaceDef> value) { inst.WriteOffset(0x40, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUNamedInterfaces = sizeof(UNamedInterfaces); // 192
    static_assert(sizeof(UNamedInterfaces) == 0xC0, "Size of UNamedInterfaces is not correct.");
	auto constexpr UNamedInterfaces_NamedInterfaces_Offset = offsetof(UNamedInterfaces, NamedInterfaces);
	static_assert(UNamedInterfaces_NamedInterfaces_Offset == 0x30, "UNamedInterfaces::NamedInterfaces offset is not 30");
	auto constexpr UNamedInterfaces_NamedInterfaceDefs_Offset = offsetof(UNamedInterfaces, NamedInterfaceDefs);
	static_assert(UNamedInterfaces_NamedInterfaceDefs_Offset == 0x40, "UNamedInterfaces::NamedInterfaceDefs offset is not 40");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
