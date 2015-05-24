#ifndef _PPITIME_H_
#define _PPITIME_H_

#include <stdlib.h>
#include <stdio.h>

const int SMPBASE = 0x1000000;//smp计数范围0~SMPBASE-1
const int NSECPERTICK = 30;// micro seconds per pulse sample clock tick
const int NSECPERBASE = 503316480;//micro seconds per base

typedef struct s_ppi_time
{
    int smpbase;//时标扩展位,硬件时标计满时加1
    int smp;//硬件时标,24位,计时时钟12.5M
}s_ppi_time;

void smp_trim( s_ppi_time &t );
void smp_disp( const char *info, s_ppi_time t );
void smp_dispn( const char *info, s_ppi_time t );

s_ppi_time smp_setvalue( int smpb, int smp );

//get interval between t1 and t2
s_ppi_time smp_interval( s_ppi_time &t1, s_ppi_time &t2 );
//delay t1 to t1-t2
s_ppi_time smp_delay( s_ppi_time &t1, s_ppi_time &t2 );
//advance t1 to t1+t2
s_ppi_time smp_advance( s_ppi_time &t1, s_ppi_time &t2 );

//true if t1==t2
bool smp_equal( s_ppi_time &t1, s_ppi_time &t2 );

//true if t1>=t2
bool smp_cmp( s_ppi_time &t1, s_ppi_time &t2 );

//true if t1>=0
bool smp_cmp( s_ppi_time &t1 );

s_ppi_time smp_clear( );
void smp_clear( s_ppi_time &t1 );

//convert smp to micro second
int smp_nsecond(s_ppi_time t1);

//convert smp to mili second
int smp_msecond(s_ppi_time t1);

void smp_time(s_ppi_time t1, int& second, int& nsecond);

int smp_toint(s_ppi_time t1);


// operator
bool operator == (s_ppi_time &t1, s_ppi_time &t2 );
bool operator >= (s_ppi_time &t1, s_ppi_time &t2 );
bool operator <= (s_ppi_time &t1, s_ppi_time &t2 );
bool operator > (s_ppi_time &t1, s_ppi_time &t2 );
bool operator < (s_ppi_time &t1, s_ppi_time &t2 );


s_ppi_time operator + (s_ppi_time &t1, s_ppi_time &t2 );
s_ppi_time operator - (s_ppi_time &t1, s_ppi_time &t2 );

#endif
