
//ErrorStateChange

#include <stdio.h>
#include <tchar.h>
#include <Windows.h>

int _tmain(void)
{
	HANDLE hFile =
		CreateFile(
		_T("ABC.DAT"), GENERIC_READ, FILE_SHARE_READ,
		NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL,
		NULL);

	_tprintf(_T("error code: %d\n"), GetLastError());

	hFile =
		CreateFile(
		_T("ABC.DAT"), GENERIC_WRITE, FILE_SHARE_READ,
		NULL, CREATE_NEW, FILE_ATTRIBUTE_NORMAL,
		NULL);
	
	_tprintf(_T("error code: %d\n"), GetLastError()); // ����Ȯ��

	return 0;
}