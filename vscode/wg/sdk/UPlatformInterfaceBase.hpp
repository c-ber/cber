#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPlatformInterfaceBase // Size: 0x40
	: public UObject // Size: 0x30
{
private:
	typedef UPlatformInterfaceBase t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1178); // id32("Class Engine.PlatformInterfaceBase")
		return ptr;
	}
	TArray<struct FDelegateArray> AllDelegates; /* Ofs: 0x30 Size: 0x10 - ArrayProperty Engine.PlatformInterfaceBase.AllDelegates */


	inline bool SetAllDelegates(t_structHelper inst, TArray<struct FDelegateArray> value) { inst.WriteOffset(0x30, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPlatformInterfaceBase = sizeof(UPlatformInterfaceBase); // 64
    static_assert(sizeof(UPlatformInterfaceBase) == 0x40, "Size of UPlatformInterfaceBase is not correct.");
	auto constexpr UPlatformInterfaceBase_AllDelegates_Offset = offsetof(UPlatformInterfaceBase, AllDelegates);
	static_assert(UPlatformInterfaceBase_AllDelegates_Offset == 0x30, "UPlatformInterfaceBase::AllDelegates offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
