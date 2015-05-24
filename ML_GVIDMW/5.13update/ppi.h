
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

    void updateAziBase();//���·�λ��׼,������ʾģʽ����
    void updateCorrectIndex();//����У����ֵ
    void updateWinOrigin();//���´�����ʼ��
    void setWinOrigin(int x, int y);//���ô�����ʼ��
    

    inline bool isValid( int &x, int &y );
    inline void setFirstPixel(int x, int y, VIDEODATATYPE d);

    void extractVideoData( int i );//�Ͻӿڣ���ʱ����
	void ppiDraw();//�Ͻӿڣ���ʱ����
    void ppiDraw( int azicnt );
	void ppiDraw(s_ppi_video_for_disp*);//��ͼ�½ӿ�
    void ppiWidenDraw( int azicnt );

	void BScopeDraw( int azicnt );
	void EScopeDraw( int azicnt );

	void ppiDrawScanLine(int a);
	void ppiClearScanLine(int a);
    
    inline void winDraw(int azicnt, int x, int y, int i);

	void updateRegion(void);//������ͼ��λ�ã�����DataPool�л�ȡ����λ������
	void updateFbp(void);//���»�ͼ�Դ�����ַ

	void updateTransTable();

	//-------- ����С������ɫ���Ա��PPI������� --------
	//--------------- �޸����ڣ�2008-09-01 ----------------------
	inline void winSetFirstPixel(int x, int y, VIDEODATATYPE d);
	inline bool winIsValid( int &x, int &y );
	//void winSetColor(int r,int g,int b);

	//----------------------- �޸Ľ��� -----------------------------

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

    bool bDivert;	//ƫ��
    bool bFirstInfo;
    bool bSplitDisp;
    bool bWindowDisp;
    bool bEchoWiden;
	bool bScanLine;
	bool benCloseFlag;

    unsigned char dispMode;	    //0���������ϣ�1���������ϣ�2����������
    unsigned char moveMode;	//0������˶���1�����˶�
    unsigned char scopeMode;//1: PPI; 0: B; 2: E;3 H


	int hollowNum;// ���ĵ�����ֵ

    int northIndex;
    int prowIndex;
	
    int prowCorrectIndex;
    int distanceCorrectIndex;

    int halfwidth;//��λչ����ֵ
    int distancelen;//����չ����

    int win_xstart;//������أ�ȡ����λ��
    int win_ystart;
    int win_astart;
    int win_aend;

	int win_disIndex;//���������ĵ���롢��λ
	int win_aziIndex;

	int dispRadius;//��ʾ�뾶����ͼ�뾶��
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
	
    
    VIDEODATATYPE *video_data;//��ʾ��Ƶ������Ƶ������ָ��

	VIDEODATATYPE transTable[256];// for gain and base usage
};

#endif
