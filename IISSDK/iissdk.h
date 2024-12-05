// IIS Native SDK for IIS 7.0, 7.5, 8.0, 8.5, 10.0
// HTC (@VCS): 2023 - 2024
// Ref: https://learn.microsoft.com/en-us/iis/web-development-reference/native-code-api-reference/native-code-api-reference

#pragma once

#ifndef IISSDK
#define IISSDK

#define _WINSOCKAPI_    // stops windows.h including winsock.h

#include <ahadmin.h>
#include <httpserv.h>
#include <httpcach.h>
#include <httptrace.h>
#include <hwebcore.h>
#include <httpcompression.h>
#include <iiswebsocket.h>
#include <listeneradapter.h>
#include <Nativerd_pub.h>   // Created from typelib tlb of nativerd.dll
#include <webhost.h>
#include <wpframework.h>
#include <ftpext.h>

// IIS 5, 6 ISAPI
#include <httpext.h>
#include <httpfilt.h>

#endif  // IISSDK
