//#include "stdafx.h"
#include "complex.h"
 
 inline complex complex::operator +(const complex &c)
{
    return complex(real + c.real, imag + c.imag);
}

inline complex complex::operator -(const complex &c)
{
    return complex(real - c.real, imag - c.imag);
}

inline complex complex::operator *(const complex &c)
{
    return complex(real * c.real - imag * c.imag, real * c.imag + imag * c.real);
}

inline complex complex::operator /(const complex &c)
{
    return complex((real * c.real + imag + c.imag) / (c.real * c.real + c.imag * c.imag),
                    (imag * c.real - real * c.imag) / (c.real * c.real + c.imag * c.imag));
}

void complex::disp()
{
    if(imag<0)
        cout<<real<<imag<<'i'<<endl;
    else
        cout<<real<<'+'<<imag<<'i'<<endl;
} 

float complex::getRo()
{
    return sqrtf(imag*imag+real+real);

}

float complex::getTheta()// -complex_pi<theta<=complex_pi
{
    if(real>0)
        return atanf(imag/real);
    else if(real==0 && imag>0)
        return complex_pi/2;
    else if(real==0 && imag<0)
        return -complex_pi/2;
    else if(real<0 && imag>=0)
        return atanf(imag/real)+complex_pi;
    else if(real<0 && imag<0)
        return atanf(imag/real)-complex_pi;
    else
        return 0*complex_pi;
}

float complex::getThetaDeg()// -180<ThetaDeg<=180
{
    return getTheta()*180.0/complex_pi;
}

void complex::setRTh(float r, float th)
{
    real = r*cosf(th);
    imag = r*sinf(th);

}

void complex::setRThDeg(float r, float th)
{
    real = r*cosf(th*complex_pi/180.0);
    imag = r*sinf(th*complex_pi/180.0);

}

float complex::getMyThetaDeg()
{
    float t=90.0-getThetaDeg();
    return (t<0 ? t+360.0 : t ) ;
}