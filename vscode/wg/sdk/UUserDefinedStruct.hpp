#pragma once
#include "FGuid.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UUserDefinedStruct // Size: 0x108
	: public UScriptStruct // Size: 0xF8
{
private:
	typedef UUserDefinedStruct t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1255); // id32("Class Engine.UserDefinedStruct")
		return ptr;
	}
	FGuid Guid; /* Ofs: 0xF8 Size: 0x10 - StructProperty Engine.UserDefinedStruct.Guid */


	inline bool SetGuid(t_structHelper inst, FGuid value) { inst.WriteOffset(0xF8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUUserDefinedStruct = sizeof(UUserDefinedStruct); // 264
    static_assert(sizeof(UUserDefinedStruct) == 0x108, "Size of UUserDefinedStruct is not correct.");
	auto constexpr UUserDefinedStruct_Guid_Offset = offsetof(UUserDefinedStruct, Guid);
	static_assert(UUserDefinedStruct_Guid_Offset == 0xf8, "UUserDefinedStruct::Guid offset is not f8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
