#pragma once
#include "FConstraintInstance.hpp"
#include "FConstraintProfileProperties.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPhysicsConstraintTemplate // Size: 0x340
	: public UObject // Size: 0x30
{
private:
	typedef UPhysicsConstraintTemplate t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1176); // id32("Class Engine.PhysicsConstraintTemplate")
		return ptr;
	}
	FConstraintInstance DefaultInstance; /* Ofs: 0x30 Size: 0x1F0 - StructProperty Engine.PhysicsConstraintTemplate.DefaultInstance */
	TArray<struct FPhysicsConstraintProfileHandle> ProfileHandles; /* Ofs: 0x220 Size: 0x10 - ArrayProperty Engine.PhysicsConstraintTemplate.ProfileHandles */
	FConstraintProfileProperties DefaultProfile; /* Ofs: 0x230 Size: 0x104 - StructProperty Engine.PhysicsConstraintTemplate.DefaultProfile */
	uint8_t UnknownData334[0xC];


	inline bool SetDefaultInstance(t_structHelper inst, FConstraintInstance value) { inst.WriteOffset(0x30, value); }
	inline bool SetProfileHandles(t_structHelper inst, TArray<struct FPhysicsConstraintProfileHandle> value) { inst.WriteOffset(0x220, value); }
	inline bool SetDefaultProfile(t_structHelper inst, FConstraintProfileProperties value) { inst.WriteOffset(0x230, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPhysicsConstraintTemplate = sizeof(UPhysicsConstraintTemplate); // 832
    static_assert(sizeof(UPhysicsConstraintTemplate) == 0x340, "Size of UPhysicsConstraintTemplate is not correct.");
	auto constexpr UPhysicsConstraintTemplate_DefaultInstance_Offset = offsetof(UPhysicsConstraintTemplate, DefaultInstance);
	static_assert(UPhysicsConstraintTemplate_DefaultInstance_Offset == 0x30, "UPhysicsConstraintTemplate::DefaultInstance offset is not 30");
	auto constexpr UPhysicsConstraintTemplate_ProfileHandles_Offset = offsetof(UPhysicsConstraintTemplate, ProfileHandles);
	static_assert(UPhysicsConstraintTemplate_ProfileHandles_Offset == 0x220, "UPhysicsConstraintTemplate::ProfileHandles offset is not 220");
	auto constexpr UPhysicsConstraintTemplate_DefaultProfile_Offset = offsetof(UPhysicsConstraintTemplate, DefaultProfile);
	static_assert(UPhysicsConstraintTemplate_DefaultProfile_Offset == 0x230, "UPhysicsConstraintTemplate::DefaultProfile offset is not 230");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
