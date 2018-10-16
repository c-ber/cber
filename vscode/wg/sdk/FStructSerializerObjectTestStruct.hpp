#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FStructSerializerObjectTestStruct // Size: 0x10
{
public:
    ExternalPtr<struct UClass> Class; /* Ofs: 0x0 Size: 0x8 ClassProperty Serialization.StructSerializerObjectTestStruct.Class */
    ExternalPtr<struct UObject> ObjectPtr; /* Ofs: 0x8 Size: 0x8 ObjectProperty Serialization.StructSerializerObjectTestStruct.ObjectPtr */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFStructSerializerObjectTestStruct = sizeof(FStructSerializerObjectTestStruct); // 16
    static_assert(sizeof(FStructSerializerObjectTestStruct) == 0x10, "Size of FStructSerializerObjectTestStruct is not correct.");
	auto constexpr FStructSerializerObjectTestStruct_Class_Offset = offsetof(FStructSerializerObjectTestStruct, Class);
	static_assert(FStructSerializerObjectTestStruct_Class_Offset == 0x0, "FStructSerializerObjectTestStruct::Class offset is not 0");
	auto constexpr FStructSerializerObjectTestStruct_ObjectPtr_Offset = offsetof(FStructSerializerObjectTestStruct, ObjectPtr);
	static_assert(FStructSerializerObjectTestStruct_ObjectPtr_Offset == 0x8, "FStructSerializerObjectTestStruct::ObjectPtr offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
