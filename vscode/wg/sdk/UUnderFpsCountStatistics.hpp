#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UUnderFpsCountStatistics // Size: 0x80
	: public UObject // Size: 0x30
{
private:
	typedef UUnderFpsCountStatistics t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(52); // id32("Class TslGame.UnderFpsCountStatistics")
		return ptr;
	}
	uint8_t UnknownData30[0x50];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUUnderFpsCountStatistics = sizeof(UUnderFpsCountStatistics); // 128
    static_assert(sizeof(UUnderFpsCountStatistics) == 0x80, "Size of UUnderFpsCountStatistics is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
