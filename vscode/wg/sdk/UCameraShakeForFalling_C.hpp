#pragma once
#include "UCameraShake.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UCameraShakeForFalling_C // Size: 0x178
	: public UCameraShake // Size: 0x170
{
private:
	typedef UCameraShakeForFalling_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(91778); // id32("BlueprintGeneratedClass CameraShakeForFalling.CameraShakeForFalling_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x170 Size: 0x8 - StructProperty CameraShakeForFalling.CameraShakeForFalling_C.UberGraphFrame */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x170, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUCameraShakeForFalling_C = sizeof(UCameraShakeForFalling_C); // 376
    static_assert(sizeof(UCameraShakeForFalling_C) == 0x178, "Size of UCameraShakeForFalling_C is not correct.");
	auto constexpr UCameraShakeForFalling_C_UberGraphFrame_Offset = offsetof(UCameraShakeForFalling_C, UberGraphFrame);
	static_assert(UCameraShakeForFalling_C_UberGraphFrame_Offset == 0x170, "UCameraShakeForFalling_C::UberGraphFrame offset is not 170");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
