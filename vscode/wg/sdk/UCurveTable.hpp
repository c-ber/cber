#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UCurveTable // Size: 0x88
	: public UObject // Size: 0x30
{
private:
	typedef UCurveTable t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(710); // id32("Class Engine.CurveTable")
		return ptr;
	}
	uint8_t UnknownData30[0x58];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUCurveTable = sizeof(UCurveTable); // 136
    static_assert(sizeof(UCurveTable) == 0x88, "Size of UCurveTable is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
