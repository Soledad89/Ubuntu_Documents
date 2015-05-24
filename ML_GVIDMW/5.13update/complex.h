#ifndef _COMPLEX_H_
#define _COMPLEX_H_

#include <iostream>
using std::cout;
using std::cin;
using std::endl;


#include <math.h>
const float complex_pi=3.1416f;
class complex
{
    public:
        complex() { real=imag=0; }
        complex(float r, float i)
        {
            real = r, imag = i;
        }
        complex operator +(const complex &c);
        complex operator -(const complex &c);
        complex operator *(const complex &c);
        complex operator /(const complex &c);
        void disp();
        
        
        float getRo();
        float getTheta();
        float getThetaDeg();
        void setRTh(float r, float th);
        void setRThDeg(float r, float th);
        float getMyThetaDeg();
        
        
    private:
        float real, imag;
};

#endif
