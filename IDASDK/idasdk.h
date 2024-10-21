#ifndef _IDASDK_H_
#define _IDASDK_H_

#define NO_OLDNAMES
#define USE_DANGEROUS_FUNCTIONS

#if defined(__clang__)
#pragma clang diagnostic ignored "-Wzero-as-null-pointer-constant"
#pragma clang diagnostic ignored "-Wsign-conversion"
#pragma clang diagnostic ignored "-Wmissing-prototypes"
#pragma clang diagnostic ignored "-Wreserved-macro-identifier"
#pragma clang diagnostic ignored "-Wc++98-compat"
#pragma clang diagnostic ignored "-Wc++98-compat-pedantic"
#pragma clang diagnostic ignored "-Wold-style-cast"
#pragma clang diagnostic ignored "-Wreserved-identifier"
#pragma clang diagnostic ignored "-Wreserved-macro-identifier"
#pragma clang diagnostic ignored "-Wextra-semi"

// clang don't recognize some #pragma of C++Builder
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#endif

#include "enums_idasdk.h"   // must be included first

#include <pro.h>
#include <allins.hpp>
#include <auto.hpp>
#include <bitrange.hpp>
#include <bytes.hpp>
#include <compress.hpp>
#include <expr.hpp>
#include <config.hpp>
#include <dbg.hpp>
#include <demangle.hpp>
#include <dirtree.hpp>
#include <diskio.hpp>
#include <entry.hpp>

#ifndef __NO_ENUM_STRUCT__
#include <enum.hpp>
#endif

#include <err.h>
#include <exehdr.h>
#include <fixup.hpp>
#include <fpro.h>
#include <frame.hpp>
#include <funcs.hpp>
#include <gdl.hpp>
#include <graph.hpp>
#include <help.h>
#include <hexrays.hpp>
#include <ida.hpp>
#include <ida_highlighter.hpp>
#include <idacfg.hpp>
#include <idd.hpp>
#include <idp.hpp>
#include <ieee.h>
#include <intel.hpp>
#include <jumptable.hpp>
#include <kernwin.hpp>
#include <lex.hpp>
#include <lines.hpp>
#include <llong.hpp>
#include <loader.hpp>
#include <md5.h>
#include <moves.hpp>
#include <nalt.hpp>
#include <name.hpp>
#include <netnode.hpp>
#include <offset.hpp>
#include <parsejson.hpp>
#include <problems.hpp>
#include <prodir.h>
#include <range.hpp>
#include <regex.h>
#include <registry.hpp>
#include <search.hpp>
#include <segment.hpp>
#include <segregs.hpp>
#include <srclang.hpp>
#include <strlist.hpp>

#ifndef __NO_ENUM_STRUCT__
#include <struct.hpp>
#endif

#include <tryblks.hpp>
#include <typeinf.hpp>
#include <ua.hpp>
#include <workarounds.hpp>
#include <xref.hpp>

#include "lumina.h"

// IDA Server
#include <network.hpp>
#include <pronet.h>

// hexdsp_t *hexdsp = nullptr;

// #pragma comment(lib, "ida")

#endif  //  _IDASDK_H_

