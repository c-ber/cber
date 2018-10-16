#pragma once
#include <Windows.h>
#include <Winternl.h>
#include <Psapi.h>
#include <string>
#define SYSTEMHANDLEINFORMATION 16
#pragma comment (lib, "ntdll.lib")

#define STATUS_UNSUCCESSFUL              ((NTSTATUS)0xC0000001L)
#define STATUS_INFO_LENGTH_MISMATCH      ((NTSTATUS)0xC0000004L)
typedef struct _SYSTEM_HANDLE {
	ULONG ProcessId;
	UCHAR ObjectTypeNumber;
	UCHAR Flags;
	USHORT Handle;
	PVOID Object;
	ACCESS_MASK GrantedAccess;
} SYSTEM_HANDLE, *PSYSTEM_HANDLE;

typedef struct _SYSTEM_HANDLE_INFORMATION {
	ULONG HandleCount; // Or NumberOfHandles if you prefer
	SYSTEM_HANDLE Handles[1];
} SYSTEM_HANDLE_INFORMATION, *PSYSTEM_HANDLE_INFORMATION;

typedef struct _SYSTEM_HANDLE_TABLE_ENTRY_INFO {
	DWORD UniqueProcessId;
	WORD HandleType;
	USHORT HandleValue;
	PVOID Object;
	ACCESS_MASK GrantedAccess;
} SYSTEM_HANDLE_TABLE_ENTRY_INFO, *PSYSTEM_HANDLE_TABLE_ENTRY_INFO;

typedef struct _OBJECT_TYPE_INFORMATION {
	UNICODE_STRING TypeName;
	ULONG TotalNumberOfObjects;
	ULONG TotalNumberOfHandles;
	ULONG TotalPagedPoolUsage;
	ULONG TotalNonPagedPoolUsage;
	ULONG TotalNamePoolUsage;
	ULONG TotalHandleTableUsage;
	ULONG HighWaterNumberOfObjects;
	ULONG HighWaterNumberOfHandles;
	ULONG HighWaterPagedPoolUsage;
	ULONG HighWaterNonPagedPoolUsage;
	ULONG HighWaterNamePoolUsage;
	ULONG HighWaterHandleTableUsage;
	ULONG InvalidAttributes;
	GENERIC_MAPPING GenericMapping;
	ULONG ValidAccessMask;
	BOOLEAN SecurityRequired;
	BOOLEAN MaintainHandleCount;
	UCHAR TypeIndex;
	CHAR ReservedByte;
	ULONG PoolType;
	ULONG DefaultPagedPoolCharge;
	ULONG DefaultNonPagedPoolCharge;
} OBJECT_TYPE_INFORMATION, *POBJECT_TYPE_INFORMATION;


HANDLE GetHandleIdTo(std::wstring targetProcessName, DWORD pidOwner = NULL) {
	if (targetProcessName == L"")
		return (HANDLE)0x0; 

	if (pidOwner == NULL) 
		pidOwner = GetCurrentProcessId();

	NTSTATUS status = STATUS_UNSUCCESSFUL;
	PVOID buffer = NULL;
	ULONG buffersize = 0;
	while (true) {
		status = NtQuerySystemInformation((SYSTEM_INFORMATION_CLASS)SYSTEMHANDLEINFORMATION, buffer, buffersize, &buffersize);
		if (!NT_SUCCESS(status)) {
			if (status == STATUS_INFO_LENGTH_MISMATCH) {
				if (buffer != NULL)
					VirtualFree(buffer, 0, MEM_RELEASE);
				buffer = VirtualAlloc(NULL, buffersize, MEM_COMMIT, PAGE_READWRITE);
			}
			continue;
		}
		else
			break;
	}

	// Enumerate all handles on system
	PSYSTEM_HANDLE_INFORMATION handleInfo = (PSYSTEM_HANDLE_INFORMATION)buffer;

	PVOID buffer2 = NULL;
	ULONG buffersize2 = 0;
	for (ULONG i = 0; i < handleInfo->HandleCount; i++) {
		PSYSTEM_HANDLE_TABLE_ENTRY_INFO Handle = (PSYSTEM_HANDLE_TABLE_ENTRY_INFO)&handleInfo->Handles[i];
		if (!Handle)
			continue; // Error, no handle
		if (!Handle->HandleValue)
			continue; // Error, empty handle value
		if (Handle->UniqueProcessId != pidOwner)
			continue; // The handle doesn't belong to the owner we target

		HANDLE localHandle = (HANDLE)Handle->HandleValue;
		if (pidOwner != GetCurrentProcessId()) { // Only if trying to get handle from another process (OpenProcess + DuplicateHandle)
			HANDLE hProcessHandleOwner = OpenProcess(PROCESS_DUP_HANDLE, FALSE, pidOwner);
			BOOL dupStatus = DuplicateHandle(hProcessHandleOwner, HANDLE(Handle->HandleValue), GetCurrentProcess(), &localHandle, PROCESS_QUERY_LIMITED_INFORMATION, FALSE, 0);
			CloseHandle(hProcessHandleOwner);
			if (!dupStatus)
				continue; // Couldn't get a handle to get info, will not be able to define if it is a handle to our process, exiting
		}

		int trys = 0;
		while (true) {
			if (trys == 20)
				break;
			trys += 1;

			
			status = NtQueryObject(localHandle, ObjectTypeInformation, buffer2, buffersize2, &buffersize2); 
			if (!NT_SUCCESS(status)) {
				if (buffer2 != NULL)
					VirtualFree(buffer2, 0, MEM_RELEASE);
				buffer2 = VirtualAlloc(NULL, buffersize2, MEM_COMMIT, PAGE_READWRITE); // Allocate with new mem
			}
			else {
				if (wcsncmp(((POBJECT_TYPE_INFORMATION)buffer2)->TypeName.Buffer, L"Process", ((POBJECT_TYPE_INFORMATION)buffer2)->TypeName.Length + 1) == 0) {
					wchar_t process[MAX_PATH];
					if (GetModuleFileNameExW(localHandle, NULL, process, MAX_PATH)) {
						std::wstring processname = process;
						size_t pos = processname.find_last_of(L"\\");
						processname = processname.substr(pos + 1, processname.length());
						if (processname == targetProcessName) {
							HANDLE handleFound = (HANDLE)Handle->HandleValue;
							VirtualFree(buffer, 0, MEM_RELEASE); 
							VirtualFree(buffer2, 0, MEM_RELEASE);
							if (pidOwner != GetCurrentProcessId())
								CloseHandle(localHandle);
							return handleFound; // TODO: Improve by returning a vector of handles, there might be several with different access rights
						}
						else
							break;
					}
				}
				else
					break;
			}
		}
		if (Handle->UniqueProcessId != GetCurrentProcessId())
			CloseHandle(localHandle); // Cleanup
		continue;
	}

	VirtualFree(buffer, 0, MEM_RELEASE); // Empties buffers to avoid memory leaks
	VirtualFree(buffer2, 0, MEM_RELEASE); // Empties buffers to avoid memory leaks
	return (HANDLE)0x0;
}