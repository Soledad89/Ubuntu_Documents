
//******************************
//
//  author : lishidan
//
//  create time: 2007-10-9
//
//  last modify time:2007-10-9
//
//  Version: 0.1
//
//******************************

#ifndef _IB_PKG_H_
#define _IB_PKG_H_

//para used to allocate mem space in kernel:6->256K, 8->1M, ...
//#define DMA_ORDER   6
////256K
#define DMA_ORDER   8
////1M

//#define MEM_LENGTH ( 256*1024 )
#define MEM_LENGTH ( 900*1024 )

//pkg num of one interrupt
#define PKGNUM 4

//pkg and dma length
#define PKGLEN ( 3*1024 )

#define DMA_LENGTH PKGNUM*PKGLEN
#define MAX_BUFF_NUM (int)(MEM_LENGTH/(PKGNUM*PKGLEN))

typedef struct pkg
{
    unsigned long head[2];//8bytes
    unsigned char video[4*580];//2320bytes
    unsigned long smp[16];//64bytes
    unsigned long heli[16];//64 bytes
    unsigned long bitinfo;//4bytes
    unsigned long ctlinfo;//4bytes
    unsigned long tail[2];//8bytes
    unsigned long stuff[150];//3k total
}pkg;

#define PKGHEADVAL  0x12121212
#define PKGTAILVAL  0x89898989

//---------------------------------------
//IM0   主脉冲 31
//IM14  零距离 30
//IM15  零方位 29
//IM16  正北   28
//IM17  舰首   27
//IM18  方位   26
//IM19  正反转 25
//IMS   秒脉冲 24


//---------------------------------------

//时标结构体
typedef struct s_smp
{
    unsigned long time      : 24;//时标

    unsigned long sec       : 1;//秒脉冲
    unsigned long heli        : 1;//直升机
    unsigned long azi       : 1;//方位
    unsigned long prow      : 1;//舰首
    unsigned long unuse1     : 1;//
    unsigned long unuse2   : 1;//
    unsigned long unuse3   : 1;//
    unsigned long main      : 1;//主脉冲
}s_smp;

#define CNTSMP  16
//32bits
#define CNTHELI 16
#define CNTVIDEO 4*512
//16bits
#endif
