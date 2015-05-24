
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
    void PCI_SetTune(int v);//���õ�г  0���Զ� �� ����������
    void PCI_SetRange( int v, int mk );// v: 0~10 ; mk: mile:0  ; kilo : 11    //range + milekilo ��Ӧ������������
    void PCI_SetPulseWidth(int);//��������0�� ������ �� 1�� ������ �� 2�� ������
    void PCI_SetTransmit(int);// ���÷��䣺0��ֹͣ���䣻1����������

    unsigned char * PCI_GetDataBuf(){return databuf;}

private:

    int testfp;
    struct iodata iodata0;
    unsigned char * databuf;
};

#endif
