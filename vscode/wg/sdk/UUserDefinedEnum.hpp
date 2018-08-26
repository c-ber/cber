#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UUserDefinedEnum // Size: 0xB8
	: public UEnum // Size: 0x68
{
private:
	typedef UUserDefinedEnum t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1254); // id32("Class Engine.UserDefinedEnum")
		return ptr;
	}
	TMap<struct FName, struct FText> DisplayNameMap; /* Ofs: 0x68 Size: 0x50 - MapProperty Engine.UserDefinedEnum.DisplayNameMap */


	inline bool SetDisplayNameMap(t_structHelper inst, TMap<struct FName, struct FText> value) { inst.WriteOffset(0x68, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUUserDefinedEnum = sizeof(UUserDefinedEnum); // 184
    static_assert(sizeof(UUserDefinedEnum) == 0xB8, "Size of UUserDefinedEnum is not correct.");
	auto constexpr UUserDefinedEnum_DisplayNameMap_Offset = offsetof(UUserDefinedEnum, DisplayNameMap);
	static_assert(UUserDefinedEnum_DisplayNameMap_Offset == 0x68, "UUserDefinedEnum::DisplayNameMap offset is not 68");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
