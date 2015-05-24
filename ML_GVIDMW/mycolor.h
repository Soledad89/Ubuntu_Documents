
#ifndef __COLOR_H__
#define __COLOR_H__

#include "ppidef.h"

#define GET32R(c) ((c>>24) & 0x0ff)
#define GET32G(c) ((c>>16) & 0x0ff)
#define GET32B(c) ((c>>8) & 0x0ff)

#define GET16R(c) ((c>>8)&0x0f8)
#define GET16G(c) ((c>>3)&0x0fc)
#define GET16B(c) ((c<<3)&0x0f8)

 /* global using with reference to the system color bits depth*/
//----
#define  REFC(r,g,b) REFC32(r,g,b)
#define csectocmem(c) c32toc32(c)
#define cmemtocsec(c) c<<8
//----

#define REFC16(r,g,b) (unsigned short)( ( (b & 0x000000f8) >> 3 ) | ( (g & 0x000000fc) << 3 ) | ( (r & 0x000000f8) << 8 ) )
//#define REFC32(r,g,b) (unsigned int)( ((r&0xff)<<24) | ((g&0xff)<<16) | ((b&0xff)<<8) )
#define REFC32(r,g,b) (unsigned int)( ((r&0xff)<<16) | ((g&0xff)<<8) | (b&0xff) )

/*
the output 16 bits color format is  r-g-b:5-6-5
the output 32 bits color format is  a-r-g-b:8-8-8-8, (a=0), is the same with video memory format

the input 16 bits color format is  r-g-b:5-6-5
the input 32 bits color format is  r-g-b-a:8-8-8-8, (a=0), is the same with SecGen color format
*/
void hsv_to_rgb(float h, float s, float v, int *r, int *g, int *b);
void rgb_to_hsv(int r, int g, int b, float *h, float *s, float *v);

unsigned short changeBright(unsigned short color,unsigned char bright);
unsigned int changeBright(unsigned int color,unsigned char bright);
unsigned char getBright(unsigned short color);
unsigned char getBright(unsigned int color);
unsigned short c32toc16(unsigned int color);
unsigned int c16toc32(unsigned short color);
unsigned int c32toc32(unsigned int color);

#endif