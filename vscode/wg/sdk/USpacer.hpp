#pragma once
#include "UWidget.hpp"
#include "FVector2D.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USpacer // Size: 0x148
	: public UWidget // Size: 0x130
{
private:
	typedef USpacer t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(518); // id32("Class UMG.Spacer")
		return ptr;
	}
	FVector2D Size; /* Ofs: 0x130 Size: 0x8 - StructProperty UMG.Spacer.Size */
	uint8_t UnknownData138[0x10];


	inline bool SetSize(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x130, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSpacer = sizeof(USpacer); // 328
    static_assert(sizeof(USpacer) == 0x148, "Size of USpacer is not correct.");
	auto constexpr USpacer_Size_Offset = offsetof(USpacer, Size);
	static_assert(USpacer_Size_Offset == 0x130, "USpacer::Size offset is not 130");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
