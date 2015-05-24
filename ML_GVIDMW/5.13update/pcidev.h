
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

#ifndef __PCIDEV_H__
#define __PCIDEV_H__

//#include <unistd.h>
#include <fcntl.h>
// #include <pthread.h>
// #include <sys/types.h>
// #include <sys/mman.h>
// #include <sys/signal.h>
// #include <sys/ioctl.h>
// #include <linux/ioctl.h>

#include "debug.h"
#include "ppidef.h"
#include "fbinclude.h"
#include "cfg/ib_pkg.h"
#include "cfg/ib_ioctl.h"
#include "pcictldef.h"

typedef unsigned char uint8;
typedef unsigned long uint32;

class CPCIDEV
{

public:

    CPCIDEV();
    ~CPCIDEV();

public:

    void PCI_Open();
    void PCI_Close();

    void PCI_WriteDword( uint32 val , uint32 oft);
    void PCI_ReadDword( uint32 &val, uint32 oft );

    void PCI_Start(){ PCI_WriteDword( IB_CMD_START , IB_REG_START ); }
    void PCI_Stop(){ PCI_WriteDword( IB_CMD_RESET , IB_REG_START ); }
   
    void PCI_SetGain(int g);//g -- unit dB : -10 - 30
    void PCI_SetTune(int v);//设置调谐  0：自动 ； 其他：级数
    void PCI_SetRange( int v, int mk );// v: 0~10 ; mk: mile:0  ; kilo : 11    //range + milekilo 对应常量数组索引
    void PCI_SetPulseWidth(int);//设置脉宽：0： 短脉宽 ； 1： 中脉宽 ； 2： 长脉宽
    void PCI_SetTransmit(int);// 设置发射：0：停止发射；1：启动发射

    unsigned char * PCI_GetDataBuf(){return databuf;}

private:

    int testfp;
    struct iodata iodata0;
    unsigned char * databuf;
};

#endif
