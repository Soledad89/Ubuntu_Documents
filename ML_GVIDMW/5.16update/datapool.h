
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

    void sendDispPkg(int n,s_ppi_video_for_disp * buf){/*dispnum=n;dispbuf=buf;*/}//��¼�طŽӿڣ���㸺�����ݻ���

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
    //���ļ��ж�ȡ����ͼ��ַ��
    int ** addr_near_x;
    int ** addr_near_y;
    int ** addr_far_x;
    int ** addr_far_y;
    //��Ա�
    int * randomx;
    int * randomy;
    //һ��ɫ�ʱ�
    MFB_COLORTYPE *colortable;
	MFB_COLORTYPE *colortableTail;     //β����ɫ���ұ�
	//DISPMEMTYPE winColorTable[256];
	DISPMEMTYPE *winColorTable;

    DISPMEMTYPE ** fbpPPI;//��ʾ��1���Դ���
    DISPMEMTYPE ** fbpAR;//��ʾ��2���Դ���
	DISPMEMTYPE ** fbpMINI; //��ǰ��ͼ���Դ���

    //frame buffer layer
    s_layer_unit ** layerPPI;
	s_layer_unit ** layerAR;
	s_layer_unit ** layerMINI;

    CPainterPool *painterPool;

    //pci share mem
    unsigned char * databuf;

    //������ʾ��������ָ�룬ʵ�����ݻ����������ά��
    //int dispnum;//(lsd) the number of videos draw at once 
    //s_ppi_video_for_disp *dispbuf;

    // ---- ship and system info ----
    s_ppi_time sysTime;
    s_disp_state dispState;
    s_ship_state shipState;
	
};

#endif
