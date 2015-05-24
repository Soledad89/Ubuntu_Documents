
//******************************
//
//  author : zhaolimin, lishidan
//
//  create time: 2007-9-5
//
//  last modify time:2007-10-16
//
//  Version: 1.3
//
//******************************

#ifndef _DATAPOOL_H_
#define _DATAPOOL_H_

//#include <fcntl.h>

#include "debug.h"
#include "ppidef.h"
#include "fbinclude.h"
#include "cfg/ib_pkg.h"
#include "painter.h"
class CPainterPool;

class CDataPool
{
public:
    CDataPool( void *fbplinearPPI,int pitchPPI,
		             void *fbplinearAR,int pitchAR,
					 void *fbplinearMINI,int pitchMINI);
    ~CDataPool();
	
    void setDataBuf(unsigned char * d){ databuf = d ;}
    void clear(int t = 0);

    void sendDispPkg(int n,s_ppi_video_for_disp * buf){/*dispnum=n;dispbuf=buf;*/}//记录回放接口，外层负责数据缓存

	void setPPIColor(int r,int g,int b);
	void setWinColor(int r,int g,int b);
	void setPPITailColor(int r,int g,int b);

	void setPPIColorTable( unsigned int* colorTable );
	void setMiniWinColorTable( unsigned int* colorTable );

private:
    int initDataTable();
	int initFbDev( void *fbplinearPPI,int pitchPPI,
		                 void *fbplinearAR,int pitchAR,
		                 void *fbplinearMINI,int pitchMINI);
    int initFbLayer();

    void freeDataTable();
    void freeFbDev();
    void freeFbLayer();

public:
	int PPI_XSTART;
	int PPI_YSTART;
	int PPI_WIDTH;
	int PPI_HEIGHT;

	int WIN_XSTART;
	int WIN_YSTART;
	int WIN_WIDTH;
	int WIN_HEIGHT;

	int AR_XSTART;
	int AR_YSTART;
	int AR_WIDTH;
	int AR_HEIGHT;

public:
    //从文件中读取的作图地址表
    int ** addr_near_x;
    int ** addr_near_y;
    int ** addr_far_x;
    int ** addr_far_y;
    //余辉表
    int * randomx;
    int * randomy;
    //一次色彩表
    MFB_COLORTYPE *colortable;
	MFB_COLORTYPE *colortableTail;     //尾迹颜色查找表
	//DISPMEMTYPE winColorTable[256];
	DISPMEMTYPE *winColorTable;

    DISPMEMTYPE ** fbpPPI;//显示屏1的显存区
    DISPMEMTYPE ** fbpAR;//显示屏2的显存区
	DISPMEMTYPE ** fbpMINI; //当前绘图的显存区

    //frame buffer layer
    s_layer_unit ** layerPPI;
	s_layer_unit ** layerAR;
	s_layer_unit ** layerMINI;

    CPainterPool *painterPool;

    //pci share mem
    unsigned char * databuf;

    //用于显示的数据区指针，实际数据缓存区由外层维护
    //int dispnum;//(lsd) the number of videos draw at once 
    //s_ppi_video_for_disp *dispbuf;

    // ---- ship and system info ----
    s_ppi_time sysTime;
    s_disp_state dispState;
    s_ship_state shipState;
	
};

#endif
