#pragma once
#include "UTslProjectile.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UProjApple_C // Size: 0x5C0
	: public UTslProjectile // Size: 0x5B0
{
private:
	typedef UProjApple_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(91466); // id32("BlueprintGeneratedClass ProjApple.ProjApple_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x5B0 Size: 0x8 - StructProperty ProjApple.ProjApple_C.UberGraphFrame */
	ExternalPtr<struct UAudioComponent> Audio1; /* Ofs: 0x5B8 Size: 0x8 - ObjectProperty ProjApple.ProjApple_C.Audio1 */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x5B0, value); }
	inline bool SetAudio1(t_structHelper inst, ExternalPtr<struct UAudioComponent> value) { inst.WriteOffset(0x5B8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUProjApple_C = sizeof(UProjApple_C); // 1472
    static_assert(sizeof(UProjApple_C) == 0x5C0, "Size of UProjApple_C is not correct.");
	auto constexpr UProjApple_C_UberGraphFrame_Offset = offsetof(UProjApple_C, UberGraphFrame);
	static_assert(UProjApple_C_UberGraphFrame_Offset == 0x5b0, "UProjApple_C::UberGraphFrame offset is not 5b0");
	auto constexpr UProjApple_C_Audio1_Offset = offsetof(UProjApple_C, Audio1);
	static_assert(UProjApple_C_Audio1_Offset == 0x5b8, "UProjApple_C::Audio1 offset is not 5b8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
