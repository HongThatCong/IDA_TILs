TIL_NAME = netfxsdk64
TIL_DESC = ".NET Frameword 4.8 SDK Unmanaged API - x64 [HTC]"
INPUT_FILE = test_netfxsdk.cpp
CLANG_ARGV = -target x86_64-pc-win32 -D_WIN32 -D_WIN64 -DCOBJMACROS -DCINTERFACE
include ../idaclang.mak
