TIL_NAME = netfxsdk
TIL_DESC = ".NET Frameword 4.8 SDK Unmanaged API - x86 [HTC]"
INPUT_FILE = test_netfxsdk.cpp
CLANG_ARGV = -x c++ -target i386-pc-win32 -D_WIN32
include ../idaclang.mak