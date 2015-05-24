//******************************
//
//  author : zhaolimin, lishidan
//
//  create time: 
//
//  last modify time:2007-10-30
//
//  Version: 0.2
//
//******************************
//#include "stdafx.h"
#include "pcidev.h"

CPCIDEV::CPCIDEV()
{
}

CPCIDEV::~CPCIDEV()
{
}

//interface to user///////////////////////////////////////////////////////////////////////////

void CPCIDEV::PCI_Open()
{
    //if(( testfp=open("/dev/ib_leiyin",O_RDWR))==-1)
    //{
    //    printf("----open device failed\n");
    //    //exit(0);
    //    return;
    //}

    ////defined in common.h/cpp
    //databuf=(uint8 *)mmap(NULL, MEM_LENGTH, PROT_READ|PROT_WRITE,MAP_SHARED, testfp,0);
    //if( databuf==MAP_FAILED)
    //{
    //    printf("----map failed\n");
    //    close( testfp);
    //    exit(0);
    //}
    //else
    //{
    //    printf("----dma test: %c,%c,%c,%c,%c\n",*databuf,*(databuf+1),*(databuf+2),*(databuf+3),*(databuf+4));

    //    //for(int i=0;i<PKGNUM;i++)
    //    //    dispPkg[i]=databuf+PKGLEN*i;
    //}

    //TRACE("pcidev open");
}

void CPCIDEV::PCI_Close()
{
    /*munmap( databuf,MEM_LENGTH );
    close(testfp);

    TRACE("pcidev close");*/
}

void CPCIDEV::PCI_WriteDword( uint32 val, uint32 oft )
{
    iodata0.value = val;
    iodata0.offset = oft;
    //ioctl( testfp, IB_PCI_WRITE, &iodata0 );
}

void CPCIDEV::PCI_ReadDword( uint32 &val, uint32 oft )
{
    iodata0.offset = oft;
    //ioctl( testfp, IB_PCI_READ, &iodata0 );
    val = iodata0.value;
}


void CPCIDEV::PCI_SetGain(int g)
{
    int n;
    if( (g>=-10) && (g<=30) )
    {
        n = (int)((g+14)*21.3);//g dB
        PCI_WriteDword( n, IB_REG_VIDEOGAIN );
    }
}

void CPCIDEV::PCI_SetTune(int v)//设置调谐  0：自动 ； 其他：级数
{

}
void CPCIDEV::PCI_SetRange( int v, int mk )// v: 0~10 ; mk: mile:0  ; kilo : 11    //range + milekilo 对应常量数组索引
{

}

void CPCIDEV::PCI_SetPulseWidth(int v)//设置脉宽：0： 短脉宽 ； 1： 中脉宽 ； 2： 长脉宽
{

}

void CPCIDEV::PCI_SetTransmit(int v)// 设置发射：0：停止发射；1：启动发射
{

}
