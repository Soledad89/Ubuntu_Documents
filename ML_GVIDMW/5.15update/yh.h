//******************************
//
//  author : lishidan
//
//  create time: 2007-10-23
//
//  last modify time:2007-10-23
//
//  Version: 0.1
//
//******************************

#ifndef _YH_H_
#define _YH_H_

//#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include "debug.h"
#include "ppidef.h"
#include "fbinclude.h"
#include "datapool.h"

//#include <qtimer.h>

const int YH_NUM=600*50;
const int CNUM = 4; //连点数

class CYh //: public QObject
{
    //Q_OBJECT

public:
    CYh( CDataPool *dp );
    ~CYh();

public:
    void setYhWeight( int yhmul );
	void setYhTail(int tailDecay);
	void setYhLen(int len){yhLen=len;}
	int getYhWeight(){return yhDecWeight;}

	void setTailSwitch(bool theSwitch);
	void setTailGate(unsigned int theGate);

    void enableYh(){ bYh = 1; }
    void disableYh(){ bYh = 0; }
    bool isYh(){ return bYh; }

	void setYhWin(bool b){bWin=b;}
/* //add by shen
    int  arDecay();
    int ML_GVID_SetArTail(int theTail);
    int setArBackgroundColor(unsigned int theColor);
    //end by shen
*/

public: // slots:
    void yh();
	void updateRegion(void);//更新作图区位置，即从DataPool中获取区域位置数据
	void updateFbp(void);//更新绘图显存区地址

	void updateTransTable();
    void updateTransTableTail();

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

private:
	DISPMEMTYPE *winColorTable;

public:
    //QTimer *timer;

    int yhDecWeight;
	int tailDecay;
    int yhLen;
    int yh_index;
    bool bYh;
/*  add by shen
    bool bAR;
    bool artailSwitch;
    //end by shen

*/	bool tailSwitch;          //尾迹开关
	unsigned int tailGate;                //尾迹门限

	bool bWin;

    CDataPool *m_dp;
    int * randomx;
    int * randomy;
    MFB_COLORTYPE *colortable;
	MFB_COLORTYPE *colortableTail;
    DISPMEMTYPE ** fbpPPI;//pointer to framebuffer mem
    s_layer_unit ** layerPPI;//frame buffer layer
	DISPMEMTYPE ** fbpMINI;//pointer to framebuffer mem
	s_layer_unit ** layerMINI;//frame buffer layer
//add by shen
//    DISPMEMTYPE ** fbpAR;//pointer to framebuffer mem
//    s_layer_unit ** layerAR;//frame buffer layer
//end by shen
	//DISPMEMTYPE fbpbuf[CNUM];//用于连点作余辉时，缓存数据

	VIDEODATATYPE transTable[256];
	VIDEODATATYPE transTableTail[256];
};

#endif
