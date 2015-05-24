#ifndef _DEBUG_H_
#define _DEBUG_H_

#include <stdio.h>

#define TRACEN
//#define TRACEN fprintf(debugfp,"%s  @  %u \n", __FILE__, __LINE__);
#define TRACE(s)
//#define TRACE(s) { fprintf(debugfp," %s  @  %u ,  %s\n", __FILE__, __LINE__, s );}


#define MEMALLOCCHECK(p) if(p == NULL){ fprintf(debugfp,"allocate mem failed and exit\n %s  @  %u",__FILE__, __LINE__); fclose(debugfp);exit(0); }

extern FILE* debugfp;
//extern FILE *savefp;


#endif
