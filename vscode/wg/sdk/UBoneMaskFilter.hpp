#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBoneMaskFilter // Size: 0x40
	: public UObject // Size: 0x30
{
private:
	typedef UBoneMaskFilter t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(680); // id32("Class Engine.BoneMaskFilter")
		return ptr;
	}
	TArray<struct FInputBlendPose> BlendPoses; /* Ofs: 0x30 Size: 0x10 - ArrayProperty Engine.BoneMaskFilter.BlendPoses */


	inline bool SetBlendPoses(t_structHelper inst, TArray<struct FInputBlendPose> value) { inst.WriteOffset(0x30, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBoneMaskFilter = sizeof(UBoneMaskFilter); // 64
    static_assert(sizeof(UBoneMaskFilter) == 0x40, "Size of UBoneMaskFilter is not correct.");
	auto constexpr UBoneMaskFilter_BlendPoses_Offset = offsetof(UBoneMaskFilter, BlendPoses);
	static_assert(UBoneMaskFilter_BlendPoses_Offset == 0x30, "UBoneMaskFilter::BlendPoses offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
