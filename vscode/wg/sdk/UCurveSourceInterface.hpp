#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UCurveSourceInterface // Size: 0x30
	: public UInterface // Size: 0x30
{
private:
	typedef UCurveSourceInterface t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(709); // id32("Class Engine.CurveSourceInterface")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUCurveSourceInterface = sizeof(UCurveSourceInterface); // 48
    static_assert(sizeof(UCurveSourceInterface) == 0x30, "Size of UCurveSourceInterface is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
