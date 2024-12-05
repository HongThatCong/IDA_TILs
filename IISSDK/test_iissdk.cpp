#include "enums_iissdk.h"
#include "iissdk.h"

#define TEST

#ifdef TEST

#include <stdio.h>

int main()
{
    printf("HSE_VERSION = 0x%X\n", MAKELONG(HSE_VERSION_MINOR, HSE_VERSION_MAJOR));
    printf("HTTP_FILTER_REVISION = 0x%X\n", MAKELONG(0, 10));
}

#endif
