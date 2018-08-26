#pragma once
#include "FStringClassReference.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAISystemBase // Size: 0x50
	: public UObject // Size: 0x30
{
private:
	typedef UAISystemBase t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(245); // id32("Class Engine.AISystemBase")
		return ptr;
	}
	FStringClassReference AISystemClassName; /* Ofs: 0x30 Size: 0x10 - StructProperty Engine.AISystemBase.AISystemClassName */
	FName AISystemModuleName; /* Ofs: 0x40 Size: 0x8 - NameProperty Engine.AISystemBase.AISystemModuleName */
	uint8_t boolField48;
	uint8_t UnknownData49[0x7];


	inline bool SetAISystemClassName(t_structHelper inst, FStringClassReference value) { inst.WriteOffset(0x30, value); }
	inline bool SetAISystemModuleName(t_structHelper inst, FName value) { inst.WriteOffset(0x40, value); }
	inline bool bInstantiateAISystemOnClient()
	{
		return boolField48& 0x1;
	}
	inline bool SetbInstantiateAISystemOnClient(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x48, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAISystemBase = sizeof(UAISystemBase); // 80
    static_assert(sizeof(UAISystemBase) == 0x50, "Size of UAISystemBase is not correct.");
	auto constexpr UAISystemBase_AISystemClassName_Offset = offsetof(UAISystemBase, AISystemClassName);
	static_assert(UAISystemBase_AISystemClassName_Offset == 0x30, "UAISystemBase::AISystemClassName offset is not 30");
	auto constexpr UAISystemBase_AISystemModuleName_Offset = offsetof(UAISystemBase, AISystemModuleName);
	static_assert(UAISystemBase_AISystemModuleName_Offset == 0x40, "UAISystemBase::AISystemModuleName offset is not 40");
	auto constexpr UAISystemBase_boolField48_Offset = offsetof(UAISystemBase, boolField48);
	static_assert(UAISystemBase_boolField48_Offset == 0x48, "UAISystemBase::boolField48 offset is not 48");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
