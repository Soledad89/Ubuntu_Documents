

#include "mycolor.h"
#include <math.h>

////////////////////////////////////////////////////////////////////////////////////////////
#define MAX(a, b) (a > b ? a : b)
#define MIN(a, b) (a < b ? a : b)

/* hsv_to_rgb:
*  Converts from HSV colorspace to RGB values.
* H 色度; S 饱和度; V 亮度
*/
void hsv_to_rgb(float h, float s, float v, int *r, int *g, int *b)
{
	float f, x, y, z;
	int i;

	v *= 255.0;

	if (s == 0.0) {
		*r = *g = *b = (int)v;
	}
	else {
		while (h < 0)
			h += 360;
		h = fmod(h, 360) / 60.0;
		i = (int)h;
		f = h - i;
		x = v * (1.0 - s);
		y = v * (1.0 - (s * f));
		z = v * (1.0 - (s * (1.0 - f)));

		switch (i) {
		case 0: *r = v; *g = z; *b = x; break;
		case 1: *r = y; *g = v; *b = x; break;
		case 2: *r = x; *g = v; *b = z; break;
		case 3: *r = x; *g = y; *b = v; break;
		case 4: *r = z; *g = x; *b = v; break;
		case 5: *r = v; *g = x; *b = y; break;
		}
	}
}


/* rgb_to_hsv:
*  Converts an RGB value into the HSV colorspace.
*/
void rgb_to_hsv(int r, int g, int b, float *h, float *s, float *v)
{
	float min, max, delta, rc, gc, bc;

	rc = (float)r / 255.0;
	gc = (float)g / 255.0;
	bc = (float)b / 255.0;
	max = MAX(rc, MAX(gc, bc));
	min = MIN(rc, MIN(gc, bc));
	delta = max - min;
	*v = max;

	if (max != 0.0)
		*s = delta / max;
	else
		*s = 0.0;

	if (*s == 0.0) {
		*h = 0.0; 
	}
	else {
		if (rc == max)
			*h = (gc - bc) / delta;
		else if (gc == max)
			*h = 2 + (bc - rc) / delta;
		else if (bc == max)
			*h = 4 + (rc - gc) / delta;

		*h *= 60.0;
		if (*h < 0)
			*h += 360.0;
	}
}


//---------------------------------------------------

unsigned short changeBright(unsigned short color,unsigned char bright)
{
	float h,s,v;
	int r,g,b;

	rgb_to_hsv(GET16R(color),GET16G(color),GET16B(color),&h,&s,&v);
	v=(float)bright/255.0;
	hsv_to_rgb(h,s,v,&r,&g,&b);

	return REFC16(r,g,b);

}

unsigned int changeBright(unsigned int color,unsigned char bright)
{
	float h,s,v;
	int r,g,b;

	rgb_to_hsv(GET32R(color),GET32G(color),GET32B(color),&h,&s,&v);
	v=(float)bright/255.0;
	hsv_to_rgb(h,s,v,&r,&g,&b);

	return REFC32(r,g,b);

}

unsigned char getBright(unsigned short color)
{
	float h,s,v;

	rgb_to_hsv(GET16R(color),GET16G(color),GET16B(color),&h,&s,&v);

	return v*255;
}

unsigned char getBright(unsigned int color)
{
	float h,s,v;

	rgb_to_hsv(GET32R(color),GET32G(color),GET32B(color),&h,&s,&v);

	return v*255;
}

unsigned short c32toc16(unsigned int color)
{
	int r,g,b;
	r=GET32R(color);
	g=GET32G(color);
	b=GET32B(color);

	return REFC16(r,g,b);

}

unsigned int c16toc32(DISPMEMTYPE color)
{
	int r,g,b;
	r=GET16R(color);
	g=GET16G(color);
	b=GET16B(color);

	return REFC32(r,g,b);
}

unsigned int c32toc32(unsigned int color)
{
	int r,g,b;
	r=GET32R(color);
	g=GET32G(color);
	b=GET32B(color);

	return REFC32(r,g,b);
}
