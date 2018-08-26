#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FClassRedirect // Size: 0x40
{
public:
    FName ObjectName; /* Ofs: 0x0 Size: 0x8 NameProperty Engine.ClassRedirect.ObjectName */
    FName OldClassName; /* Ofs: 0x8 Size: 0x8 NameProperty Engine.ClassRedirect.OldClassName */
    FName NewClassName; /* Ofs: 0x10 Size: 0x8 NameProperty Engine.ClassRedirect.NewClassName */
    FName OldSubobjName; /* Ofs: 0x18 Size: 0x8 NameProperty Engine.ClassRedirect.OldSubobjName */
    FName NewSubobjName; /* Ofs: 0x20 Size: 0x8 NameProperty Engine.ClassRedirect.NewSubobjName */
    FName NewClassClass; /* Ofs: 0x28 Size: 0x8 NameProperty Engine.ClassRedirect.NewClassClass */
    FName NewClassPackage; /* Ofs: 0x30 Size: 0x8 NameProperty Engine.ClassRedirect.NewClassPackage */
    bool InstanceOnly; /* Ofs: 0x38 Size: 0x1 BitMask: 01 BoolProperty Engine.ClassRedirect.InstanceOnly */
    uint8_t UnknownData39[0x7];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFClassRedirect = sizeof(FClassRedirect); // 64
    static_assert(sizeof(FClassRedirect) == 0x40, "Size of FClassRedirect is not correct.");
	auto constexpr FClassRedirect_ObjectName_Offset = offsetof(FClassRedirect, ObjectName);
	static_assert(FClassRedirect_ObjectName_Offset == 0x0, "FClassRedirect::ObjectName offset is not 0");
	auto constexpr FClassRedirect_OldClassName_Offset = offsetof(FClassRedirect, OldClassName);
	static_assert(FClassRedirect_OldClassName_Offset == 0x8, "FClassRedirect::OldClassName offset is not 8");
	auto constexpr FClassRedirect_NewClassName_Offset = offsetof(FClassRedirect, NewClassName);
	static_assert(FClassRedirect_NewClassName_Offset == 0x10, "FClassRedirect::NewClassName offset is not 10");
	auto constexpr FClassRedirect_OldSubobjName_Offset = offsetof(FClassRedirect, OldSubobjName);
	static_assert(FClassRedirect_OldSubobjName_Offset == 0x18, "FClassRedirect::OldSubobjName offset is not 18");
	auto constexpr FClassRedirect_NewSubobjName_Offset = offsetof(FClassRedirect, NewSubobjName);
	static_assert(FClassRedirect_NewSubobjName_Offset == 0x20, "FClassRedirect::NewSubobjName offset is not 20");
	auto constexpr FClassRedirect_NewClassClass_Offset = offsetof(FClassRedirect, NewClassClass);
	static_assert(FClassRedirect_NewClassClass_Offset == 0x28, "FClassRedirect::NewClassClass offset is not 28");
	auto constexpr FClassRedirect_NewClassPackage_Offset = offsetof(FClassRedirect, NewClassPackage);
	static_assert(FClassRedirect_NewClassPackage_Offset == 0x30, "FClassRedirect::NewClassPackage offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
