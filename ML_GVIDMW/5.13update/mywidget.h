
//******************************
//
//  author : lishidan
//
//  create time: 2007-10-9
//
//  last modify time:2007-10-31
//
//  Version: 1.6
//
//******************************

#ifndef _MAINWIDGET_H_
#define _MAINWIDGET_H_

#include "debug.h"
#include "pcidev.h"
#include "ppi.h"
//#include "ppidata.h"

#include "yh.h"
//#include "ppithread.h"
#include "datapool.h"
#include "painter.h"
//#include "track.h" //by shen

#include "ppidef.h"

#include "AR.h"
#include "mark.h"

class CMark;
//#include "ppiudpthread.h"

class MyWidget 
{
    //Q_OBJECT

public:
	//MyWidget(){};
	MyWidget( void *fbplinearPPI,int pitchPPI,
					void *fbplinearAR,int pitchAR,
					void *fbplinearMINI,int pitchMINI);
	~MyWidget();

public:

    CDataPool * dp;
    CYh *yh; 
//	CTrack *track;
	CPPI *ppi;
	CAR *ar;

	CMark *map;

	int curChannel;//当前雷达通道号，1，2
	int curDisplay;//当前雷达显示器，1，2

private:
    CPCIDEV * pcidev;
  
     //工作状态
    int workstate;  ////1:normal 2:save 3:play 4:simulate
   
    int tmpstmp;
    int time;

	//--- for mouse paint
	CLayerBase * layerS4;
	CLayerBase * layerR4;
	CPainter * MousePainter;
	CPainter * MouseEraser;

	int mx;
	int my;
	int proState;
	//-------------------------

public: 
    void ppiUpdate(unsigned char *databufaddr);
   
    void close();
    void initSurface();//显示PPI初始画面
    void updateScanOrigin();//用于真运动时动态更新扫面中心
	void setFbp();

	void MouseEventHandler(unsigned int type,int x,int y);

    void setArMarkDisplay(bool disp);
	void setRadarMarkDisplay(bool disp);



//----------debug slots--------------
    void debug(int,int,int);
    void debugPkg(unsigned char*);

//-------------------system function slots--------------------------

void setGain( int );//设置硬件增益： -- unit dB : -10 - 30
void setTuning( int );//设置调谐  0：自动 ； 其他：级数
void setRainSnow( int );//设置抗雨雪杂波  0：自动 ； 其他：级数
void setSeaWave( int );//设置抗海浪杂波  0：自动 ； 其他：级数
void setRange( int );//设置量程：0～10
void setDispMode( int );//设置显示模式  0: 正北向上  1: 舰首向上  2: 航向向上
void setVectorType( int );//设置矢量类型: 0  真矢量；1  相对矢量
void setVectorTime( int );// 单位：分钟； 范围：1～60
void setPulseWidth( int );//设置脉宽：0： 短脉宽 ； 1： 中脉宽 ； 2： 长脉宽
void setTransmit( int );// 设置发射：0：停止发射；1：启动发射
void setDayNight( int );//白天黑夜设置：0：白天；1：黑夜
void setMoveMode( int );//设置运动模式:  0: 相对运动  1:真运动
void setMileKilo( int );//设置海里公里：0：海里；1：公里
void setCofreqResist( int );//设置抗同频异步干扰： 0：关闭；1：打开
void setMoveCursorOrigin( int x, int y );//设置动标方位2偏心,屏幕左上角为（0,0）,单位为像素
void setTailTime( int );//设置尾迹时间：0：无；1：连续；2：15秒；3：30秒；4：1分钟；5：3分钟；6：6分钟
void setEchoWiden( int );//设置回波展宽：0：关闭；1:打开
void setSplitDisplay( int );//设置分割显示：0：关闭；1：打开
void setFixCircle( int );//设置固定距标环显示：0：关闭；1：显示
void setSafeOutline( int );//设置安全轮廓线：0：关闭；1：显示
void setSpeed( float );//设置航速：单位：m/s
void setSailingAzi( float );//设置航向：单位：度,范围：0～360,正北为0度,按顺时针旋转
void setProwCorrect( float );//设置舰首校正方位值：单位：度,范围：0～360,正北为0度,按顺时针旋转
void setDistantCorrect( float );//设置距离校正值：单位：米
void setScanOrigin(int x, int y);//用于设置偏心显示,屏幕左上角为（0,0）,单位为像素

void mouseInterface(int x, int y, int but);//鼠标接口,x,y：屏幕左上角为（0,0）,单位为像素 ；
                                           //but：0：无按键；1：单极左键；2：单击右键；3：双击左键

//----------------system function slots end-------------------------

int ML_GVID_Init();
void ML_GVID_OpenOverlay (bool OpenFlag);
int ML_GVID_OpenAr (short  theDisplay,short VideoChannel,short theX, short theY , short theWidth, short theHeight);
int ML_GVID_CloseAr (short theDisplay,short VideoChannel);
int ML_GVID_SetArXY (short theDisplay,short VideoChannel ,short theX ,short theY);
void ML_GVID_ChangArGate (short theDisplay,short VideoChannel ,int theGate);
void ML_GVID_ChangArDist (short theDisplay,short VideoChannel ,int theDist);
void ML_GVID_SetArColor(short theDisplay,char VideoChannel,unsigned int theColor);
void ML_GVID_SetArBackgroundColor(short theDisplay,char VideoChannel,unsigned int theColor);

int ML_GVID_OpenPPI(short  theDisplay,short VideoChannel,short theX, short theY , short theWidth, short theHeight);
int ML_GVID_ClosePPI(short  theDisplay,short VideoChannel);
int ML_GVID_SetPPIXY(short theDisplay,short VideoChannel ,short theX ,short theY);
int ML_GVID_SetPPIWH(short theDisplay,short VideoChannel ,short theWidth, short theHeight);
void ML_GVID_SetPPICenter(short theDisplay,short VideoChannel ,short theX ,short theY);
void ML_GVID_SetPPIWinDistDir(short theDisplay,short VideoChannel ,short theDistance ,float theDirection);
void ML_GVID_SetPPIShipDir(short theDisplay,short VideoChannel,float theDirection);
void ML_GVID_SetPPIWinScale(short theDisplay,short VideoChannel,int theScale);
void ML_GVID_SetPPIScan(short theDisplay,short VideoChannel,int theScan);
void ML_GVID_SetPPIFrost(short theDisplay,short VideoChannel,int theFrost);
void ML_GVID_SetPPIDist(short theDisplay,short VideoChannel,short theDist);
void ML_GVID_GetPPIDist(short theDisplay,short VideoChannel,short* theDist);
void ML_GVID_SetPPISwitch(short theDisplay,short VideoChannel,int theSwitch);
void ML_GVID_SetPPIGate(short theDisplay,short VideoChannel,int theGate);
void ML_GVID_SetPPITail(short theDisplay,short VideoChannel,int theTail);
void ML_GVID_SetPPIMode(short theDisplay,short VideoChannel,short theMode,bool bhmode);
void ML_GVID_SetTailSwitch(short theDisplay,short VideoChannel,int theSwitch);
void ML_GVID_SetTailColor(short theDisplay,short VideoChannel,unsigned int theColor);
void ML_GVID_SetTailGate(short theDisplay,short VideoChannel,unsigned int theGate);
void ML_GVID_SetTailTime(short theDisplay,short VideoChannel,int theTail);
void ML_GVID_SetPPIColorTable(short theDisplay,short VideoChannel,unsigned int* colorTable);
void ML_GVID_ClearPPI(short theDisplay,char VideoChannel);
void ML_GVID_SetPPIMoveMode(short theDisplay,char VideoChannel, short theMode);

int ML_GVID_SendRadarPkg(char VideoChannel, int pkgNum, ML_GVIDMW_RadarPkg_t *pkgBuf);

void ML_GVID_SetWinDisp(short theDisplay,short VideoChannel,int theDisp);
void ML_GVID_SetWinXY(short theDisplay,short VideoChannel ,short theX, short theY);
void ML_GVID_SetPPIColor(short theDisplay,short VideoChannel,unsigned int theColor);
int ML_GVID_SetWinWH(short theDisplay,short VideoChannel ,short theWidth, short theHeight);
int ML_GVID_SetArWH(short theDisplay,short VideoChannel ,short theWidth, short theHeight);
void ML_GVID_SetPPILineColor(short theDisplay,char VideoChannel,unsigned int theColor);

void ML_GVID_SetMiniWinColorTable(short theDisplay,char VideoChannel,unsigned int* colorTable);

void setPPIWinXY(short theDisplay,short VideoChannel ,short x ,short y);

//-------- for 7 ------------
void setAROnlyDisplay();

private:
    void initState();
	//void GVID_Handler(short theDisplay,short VideoChannel);//用于处理显示屏及雷达通道改变的函数，
	                                                       //每个对外程序接口都会首先调用该函数.


};

#endif // FRMMAIN_H
