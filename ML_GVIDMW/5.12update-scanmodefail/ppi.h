
//******************************
//
//  author : lishidan
//
//  create time: 2007-9-5
//
//  last modify time:2007-10-23
//
//  Version: 1.4
//
//******************************


#ifndef _PPI_H_
#define _PPI_H_

#include "debug.h"
#include "ppidef.h"
#include "fbinclude.h"
#include "cfg/ib_pkg.h"
#include "datapool.h"
#include "complex.h"
#include "mycolor.h"

#include <math.h>
//static bool bHmode=false;

class CPPI
{
public:
    CPPI( CDataPool *dp );
    ~CPPI();

public:
    void setOrigin( int mx, int my );
    int getXorg(){return xorg;}
    int getYorg(){return yorg;}
    void resetOrigin();

    void setGain( int g );
    int getGain(){return gain;}

    void setBase( int b );
    int  getBase(){return base;}

    void setRange( int r ){range=r;}
    int getRange(){return range;}
    
    void setDivert(bool b) { bDivert = b; }
    bool isDivert() { return bDivert; }

    void setFirstInfo(bool b){ bFirstInfo = b; }
    bool isFirstInfo(){ return bFirstInfo; }

    void setSplitDisp(bool b){bSplitDisp = b;}
    bool isSplitDisp(){return bSplitDisp;}

    void setWindowDisp(bool b){bWindowDisp=b;}
    bool isWindowDisp(){return bWindowDisp;}

    void setEchoWiden(bool b){bEchoWiden=b;}
    bool isEchoWiden(){return bEchoWiden;}

    void setDispMode(unsigned char n){dispMode=n;}
    unsigned char getDispMode(){return dispMode;}

    void setMoveMode(unsigned char n){moveMode=n;}
    unsigned char getMoveMode(){return moveMode;}

    void setScopeMode(unsigned char n,bool bhmode);//{scopeMode=n;}
	unsigned char getScopeMode(){return scopeMode;}

	void setHollowNum(int n){hollowNum=n;}

	void setScanLine(bool b){bScanLine=b;}
	bool isScanLine(){return bScanLine;}
	void setScanLineColor(MFB_COLORTYPE c){scanLineColor=c;}

	void setDispRadius(int r){if(r<=600)dispRadius=r;}

    void clear();

    void updateAziBase();//更新方位基准,用于显示模式更新
    void updateCorrectIndex();//更新校正序值
    void updateWinOrigin();//更新窗口起始点
    void setWinOrigin(int x, int y);//设置窗口起始点
    

    inline bool isValid( int &x, int &y );
    inline void setFirstPixel(int x, int y, VIDEODATATYPE d);

    void extractVideoData( int i );//老接口，暂时不用
	void ppiDraw();//老接口，暂时不用
    void ppiDraw( int azicnt );
	void ppiDraw(s_ppi_video_for_disp*);//作图新接口
    void ppiWidenDraw( int azicnt );

	void BScopeDraw( int azicnt );
	void EScopeDraw( int azicnt );

	void ppiDrawScanLine(int a);
	void ppiClearScanLine(int a);
    
    inline void winDraw(int azicnt, int x, int y, int i);

	void updateRegion(void);//更新作图区位置，即从DataPool中获取区域位置数据
	void updateFbp(void);//更新绘图显存区地址

	void updateTransTable();

	//-------- 加入小窗口颜色表，以便和PPI大窗相独立 --------
	//--------------- 修改日期：2008-09-01 ----------------------
	inline void winSetFirstPixel(int x, int y, VIDEODATATYPE d);
	inline bool winIsValid( int &x, int &y );
	//void winSetColor(int r,int g,int b);

	//----------------------- 修改结束 -----------------------------

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
    int xorg, yorg;
    int gain;
    int base;
    int range;  	//

    bool bDivert;	//偏心
    bool bFirstInfo;
    bool bSplitDisp;
    bool bWindowDisp;
    bool bEchoWiden;
	bool bScanLine;
	bool benCloseFlag;

    unsigned char dispMode;	    //0：正北向上；1：舰首向上；2：航向向上
    unsigned char moveMode;	//0：相对运动；1：真运动
    unsigned char scopeMode;//1: PPI; 0: B; 2: E;3 H


	int hollowNum;// 空心的像素值

    int northIndex;
    int prowIndex;
	
    int prowCorrectIndex;
    int distanceCorrectIndex;

    int halfwidth;//方位展宽半宽值
    int distancelen;//距离展宽长度

    int win_xstart;//开窗相关，取景窗位置
    int win_ystart;
    int win_astart;
    int win_aend;

	int win_disIndex;//开窗区中心点距离、方位
	int win_aziIndex;

	int dispRadius;//显示半径（作图半径）
	MFB_COLORTYPE scanLineColor;

    CDataPool *m_dp;
    int ** addr_near_x;
    int ** addr_near_y;
    int ** addr_far_x;
    int ** addr_far_y;

    DISPMEMTYPE *colortable;
    DISPMEMTYPE** fbp;//pointer to framebuffer mem
    s_layer_unit ** layer;//frame buffer layer

	DISPMEMTYPE *winColorTable;
	DISPMEMTYPE** fbpMINI;//pointer to framebuffer mem
	s_layer_unit ** layerMINI;//frame buffer layer
	
    
    VIDEODATATYPE *video_data;//显示视频包中视频区的首指针

	VIDEODATATYPE transTable[256];// for gain and base usage
};

#endif
