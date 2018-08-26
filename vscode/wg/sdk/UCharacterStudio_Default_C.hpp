#pragma once
#include "UCharacterStudio.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UCharacterStudio_Default_C // Size: 0x518
	: public UCharacterStudio // Size: 0x510
{
private:
	typedef UCharacterStudio_Default_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(60017); // id32("BlueprintGeneratedClass CharacterStudio_Default.CharacterStudio_Default_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x510 Size: 0x8 - StructProperty CharacterStudio_Default.CharacterStudio_Default_C.UberGraphFrame */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x510, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUCharacterStudio_Default_C = sizeof(UCharacterStudio_Default_C); // 1304
    static_assert(sizeof(UCharacterStudio_Default_C) == 0x518, "Size of UCharacterStudio_Default_C is not correct.");
	auto constexpr UCharacterStudio_Default_C_UberGraphFrame_Offset = offsetof(UCharacterStudio_Default_C, UberGraphFrame);
	static_assert(UCharacterStudio_Default_C_UberGraphFrame_Offset == 0x510, "UCharacterStudio_Default_C::UberGraphFrame offset is not 510");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
