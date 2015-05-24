#ifndef _FBINCLUDE_H_
#define _FBINCLUDE_H_

#include "debug.h"

//font file
#define MFB_FONTFILE "./dat/gb2312_16.fon"

//pitch = how many bytes in the linuear framebuffer there are between a pixel's data, and
//the data of the pixel imediately below
//pitch = horizontal resolution * bytes_per_pixel
//But in practice, the pitch may be more than this product due to alignment constraints
//const int MFB_PITCH = 1664;//the value seems correct
//const int MFB_PITCH = 1792;//the value seems correct
const int MFB_PITCH = 1664;//the value seems correct  server: 1280*1024 is 1280; 1600*1200 is 1664;

//draw area
const int MFB_XSTART = 0;
const int MFB_YSTART = 0;
const int MFB_WIDTH = 1200;
const int MFB_HEIGHT = 1200;

//const int PPI_XSTART = 0;
//const int PPI_YSTART = 0;
//const int PPI_WIDTH = 1200;
//const int PPI_HEIGHT = 1200;//1200;
//
//const int WIN_XSTART = 1260;//1600-340
//const int WIN_YSTART = 0;
//const int WIN_WIDTH = 340;
//const int WIN_HEIGHT = 340;

//32bits color define
const unsigned int MFB_RED = 0xff0000;
const unsigned int MFB_GREEN = 0x00ff00;
const unsigned int MFB_BLUE = 0x0000ff;
const unsigned int MFB_YELLOW =0xffff00;
const unsigned int MFB_WHITE = 0xffffff;
const unsigned int MFB_BLACK = 0x0;

//clear color
const unsigned int MFB_CLEAR=0x0;


typedef unsigned int MFB_COLORTYPE;

#endif
