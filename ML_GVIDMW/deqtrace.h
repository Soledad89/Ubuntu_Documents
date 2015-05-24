
#ifndef __DEQTRACE_H__
#define __DEQTRACE_H__

#include "ARPAInfo.h"
#include "ppidef.h"

typedef std::deque<s_arpa_trace> DeqArpaTrace;
typedef DeqArpaTrace::iterator DeqArpaTraceIte;

typedef std::deque<s_ppi_video_for_disp> DeqDispPkg;
typedef DeqDispPkg::iterator DeqDispPkgIte;

#endif