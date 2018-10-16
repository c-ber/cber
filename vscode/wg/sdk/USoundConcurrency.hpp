#pragma once
#include "FSoundConcurrencySettings.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USoundConcurrency // Size: 0x40
	: public UObject // Size: 0x30
{
private:
	typedef USoundConcurrency t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1201); // id32("Class Engine.SoundConcurrency")
		return ptr;
	}
	FSoundConcurrencySettings Concurrency; /* Ofs: 0x30 Size: 0x10 - StructProperty Engine.SoundConcurrency.Concurrency */


	inline bool SetConcurrency(t_structHelper inst, FSoundConcurrencySettings value) { inst.WriteOffset(0x30, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSoundConcurrency = sizeof(USoundConcurrency); // 64
    static_assert(sizeof(USoundConcurrency) == 0x40, "Size of USoundConcurrency is not correct.");
	auto constexpr USoundConcurrency_Concurrency_Offset = offsetof(USoundConcurrency, Concurrency);
	static_assert(USoundConcurrency_Concurrency_Offset == 0x30, "USoundConcurrency::Concurrency offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
