TIL_NAME = idasdk90_win
TIL_DESC = "IDA SDK 9.0 for Windows x64 [HTC]"
INPUT_FILE = idasdk.h
CLANG_ARGV = -target x86_64-pc-win32        \
             -x c++                         \
             -IZ:/ida/90/sdk/include        \
             -D__NT__                       \
             -D__IDP__                      \
             -D__EA64__                     \
             -D__NO_ENUM_STRUCT__           \
             -Wno-nullability-completeness

include ../idaclang.mak
