TIL_NAME = phnt64
TIL_DESC = "System Informer (Process Hacker) Native API header files - x64 (WinXP to Win11 24H2) [HTC]"
INPUT_FILE = test_phnt.cpp
CLANG_ARGV = -target x86_64-pc-win32 -D_WIN32 -D_WIN64 -DCOBJMACROS -DCINTERFACE
include ../idaclang.mak
