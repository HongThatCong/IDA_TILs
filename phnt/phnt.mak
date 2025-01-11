TIL_NAME = phnt
TIL_DESC = "System Informer (Process Hacker) Native API header files - x86 (WinXP to Win11 24H2) [HTC]"
INPUT_FILE = test_phnt.cpp
CLANG_ARGV = -target i386-pc-win32 -D_WIN32 -DCOBJMACROS -DCINTERFACE 
include ../idaclang.mak
