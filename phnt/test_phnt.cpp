/**
 * Compiler cmdline: cl test_phnt.cpp /GS- /O1 /link /ENTRY:main /NODEFAULTLIB /SUBSYSTEM:CONSOLE /EMITPOGOPHASEINFO /DEBUG:NONE ntdll.lib
 * Some undocument linker options, chưa test :)
 *  - /NOCOFFGRPINFO
 *  - /EMITTOOLVERSIONINFO:NO
 */

#include "enums_phnt.h"
#include <phnt.h>

#define TEST

#ifdef TEST

#include <strsafe.h>

int main()
{
    char* pszMsg = "Hello System Informer phnt!\r\n";
    size_t cbLen = 0;
    StringCbLengthA(pszMsg, STRSAFE_MAX_CCH, &cbLen);

    IO_STATUS_BLOCK IoStatusBlock =  {0, 0};
    NtWriteFile(NtCurrentPeb()->ProcessParameters->StandardOutput,
                nullptr,
                nullptr,
                nullptr,
                &IoStatusBlock,
                pszMsg,
                cbLen,
                nullptr,
                nullptr
                );
    return 0;
}

#endif  // TEST
