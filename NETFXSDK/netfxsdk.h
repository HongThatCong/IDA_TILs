//
// Microsoft .NET Framework SDK 4.8
// Ref: https://learn.microsoft.com/en-us/dotnet/framework/unmanaged-api
// Defines (-D): COBJMACROS and CINTERFACE for C language, not used with C++
//

#pragma once

#ifndef _NETFXSDK_H_
#define _NETFXSDK_H_

// Include enums_netfxsdk first
#include "enums_netfxsdk.h"

// Include Standard Headers, cor.h first
#include <cor.h>
#include <alink.h>
#include <clrdata.h>
#include <cordebug.h>
#include <CorError.h>
#include <CorHdr.h>
#include <corhlpr.h>
#include <corprof.h>
#include <corpub.h>
#include <corsym.h>
#include <dbgshim.h>
#include <fusion.h>
#include <gchost.h>
#include <ICeeFileGen.h>
#include <isolation.h>
#include <ivalidator.h>
#include <ivehandler.h>
#include <metahost.h>
#include <mscoree.h>
#include <openum.h>
#include <StrongName.h>
#include <tlbref.h>
#include <VerError.h>

// Include generated headers which were created from *.tlb
#include <mscorlib.tlh>
#include <System.tlh>
#include <System.Drawing.tlh>
#include <System.EnterpriseServices.tlh>
#include <System.Windows.Forms.tlh>
#include <WMINet_Utils.tlh>

#endif  // _NETFXSDK_H_
