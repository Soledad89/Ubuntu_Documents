//#include "stdafx.h"
#include "ppitime.h"

void smp_trim(s_ppi_time &t)
{
    
    if(t.smp<0)
    {
        t.smpbase--;
        t.smp += SMPBASE;
    }
    else
    {
    t.smpbase += t.smp/SMPBASE;
    t.smp = t.smp%SMPBASE;
    }
}

s_ppi_time smp_setvalue( int smpb, int smp )
{
    s_ppi_time t;
    t.smpbase = smpb;
    t.smp = smp;
    smp_trim(t);
    return t;
}

s_ppi_time smp_interval( s_ppi_time &t1, s_ppi_time &t2 )
{
    s_ppi_time tmp;
    if(smp_cmp(t1,t2))
    {
        tmp.smpbase = t1.smpbase-t2.smpbase;
        tmp.smp = t1.smp-t2.smp;
    }
    else
    {
        tmp.smpbase = t2.smpbase-t1.smpbase;
        tmp.smp = t2.smp-t1.smp;
    }
    smp_trim(tmp);
    return tmp;
}

s_ppi_time smp_delay( s_ppi_time &t1, s_ppi_time &t2 )
{
    s_ppi_time tmp;
    tmp.smpbase = t1.smpbase-t2.smpbase;
    tmp.smp = t1.smp-t2.smp;
    smp_trim(tmp);
    return tmp;
}

s_ppi_time smp_advance( s_ppi_time &t1, s_ppi_time &t2 )
{
    s_ppi_time tmp;
    tmp.smpbase = t1.smpbase+t2.smpbase;
    tmp.smp = t1.smp+t2.smp;
    smp_trim(tmp);
    return tmp;
}

bool smp_equal( s_ppi_time &t1, s_ppi_time &t2 )
{
    return (t1.smpbase==t2.smpbase)&&(t1.smp==t2.smp);
}

//t1>=t2 return 1;
bool smp_cmp( s_ppi_time &t1, s_ppi_time &t2 )
{
    return (t1.smpbase>t2.smpbase)||((t1.smpbase==t2.smpbase)&&(t1.smp>=t2.smp));
}

//t1>=0 return 1;
bool smp_cmp( s_ppi_time &t1 )
{
    return (t1.smpbase>0)||((t1.smpbase==0)&&(t1.smp>=0));
}

s_ppi_time smp_clear()
{
    s_ppi_time t1;
    t1.smpbase = 0;
    t1.smp = 0;
    return t1;
}
void smp_clear(s_ppi_time &t1){ t1=smp_clear();}

void smp_disp( const char *info, s_ppi_time t )
{
    printf("%s base=%d,smp=%x ",info, t.smpbase, t.smp);
}

void smp_dispn( const char *info, s_ppi_time t )
{
    printf("%s base=%d,smp=%x\n",info, t.smpbase, t.smp);
}

int smp_nsecond(s_ppi_time t1)
{
    return smp_toint(t1)*NSECPERTICK;
}

int smp_msecond(s_ppi_time t1)
{
    return smp_toint(t1)*NSECPERTICK/1000;
}

void smp_time(s_ppi_time t1, int& second, int& nsecond)
{
    nsecond = 0;
    second = 0;
    while( t1.smpbase )
    {
        nsecond += NSECPERBASE ;
        if(nsecond / 1000000000)
        {
            second += nsecond / 1000000000;
            nsecond %= 1000000000;
        }
        t1.smpbase--;
    }
    
    nsecond += NSECPERBASE *t1.smpbase + t1.smp*NSECPERTICK;
    if(nsecond / 1000000000)
    {
        second += nsecond / 1000000000;
        nsecond %= 1000000000;
    }
    
}

int smp_toint(s_ppi_time t1)
{
    return t1.smpbase*SMPBASE+t1.smp;
}

// operator
bool operator == (s_ppi_time &t1, s_ppi_time &t2 )
{
    return (t1.smpbase==t2.smpbase)&&(t1.smp==t2.smp);
}

bool operator >= (s_ppi_time &t1, s_ppi_time &t2 )
{
    return (t1.smpbase>t2.smpbase)||((t1.smpbase==t2.smpbase)&&(t1.smp>=t2.smp));
}

bool operator <= (s_ppi_time &t1, s_ppi_time &t2 )
{
    return (t1.smpbase<t2.smpbase)||((t1.smpbase==t2.smpbase)&&(t1.smp<=t2.smp));
}
bool operator > (s_ppi_time &t1, s_ppi_time &t2 )
{
    return (t1.smpbase>t2.smpbase)||((t1.smpbase==t2.smpbase)&&(t1.smp>t2.smp));
}

bool operator < (s_ppi_time &t1, s_ppi_time &t2 )
{
    return (t1.smpbase<t2.smpbase)||((t1.smpbase==t2.smpbase)&&(t1.smp<t2.smp));
}


s_ppi_time operator + (s_ppi_time &t1, s_ppi_time &t2 )
{
    s_ppi_time tmp;
    tmp.smpbase=t1.smpbase+t2.smpbase;
    tmp.smp=t1.smp+t2.smp;
    smp_trim(tmp);
    return tmp;
    
}

s_ppi_time operator - (s_ppi_time &t1, s_ppi_time &t2 )
{
    s_ppi_time tmp;
    if(t1>=t2)
    {
        tmp.smpbase=t1.smpbase-t2.smpbase;
        tmp.smp=t1.smp-t2.smp;
    }
    else
    {
        tmp.smpbase=t2.smpbase-t1.smpbase;
        tmp.smp=t2.smp-t1.smp;
    }
    smp_trim(tmp);
    return tmp;
}

