
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

	int curChannel;//��ǰ�״�ͨ���ţ�1��2
	int curDisplay;//��ǰ�״���ʾ����1��2

private:
    CPCIDEV * pcidev;
  
     //����״̬
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
    void initSurface();//��ʾPPI��ʼ����
    void updateScanOrigin();//�������˶�ʱ��̬����ɨ������
	void setFbp();

	void MouseEventHandler(unsigned int type,int x,int y);

    void setArMarkDisplay(bool disp);
	void setRadarMarkDisplay(bool disp);



//----------debug slots--------------
    void debug(int,int,int);
    void debugPkg(unsigned char*);

//-------------------system function slots--------------------------

void setGain( int );//����Ӳ�����棺 -- unit dB : -10 - 30
void setTuning( int );//���õ�г  0���Զ� �� ����������
void setRainSnow( int );//���ÿ���ѩ�Ӳ�  0���Զ� �� ����������
void setSeaWave( int );//���ÿ������Ӳ�  0���Զ� �� ����������
void setRange( int );//�������̣�0��10
void setDispMode( int );//������ʾģʽ  0: ��������  1: ��������  2: ��������
void setVectorType( int );//����ʸ������: 0  ��ʸ����1  ���ʸ��
void setVectorTime( int );// ��λ�����ӣ� ��Χ��1��60
void setPulseWidth( int );//��������0�� ������ �� 1�� ������ �� 2�� ������
void setTransmit( int );// ���÷��䣺0��ֹͣ���䣻1����������
void setDayNight( int );//�����ҹ���ã�0�����죻1����ҹ
void setMoveMode( int );//�����˶�ģʽ:  0: ����˶�  1:���˶�
void setMileKilo( int );//���ú��﹫�0�����1������
void setCofreqResist( int );//���ÿ�ͬƵ�첽���ţ� 0���رգ�1����
void setMoveCursorOrigin( int x, int y );//���ö��귽λ2ƫ��,��Ļ���Ͻ�Ϊ��0,0��,��λΪ����
void setTailTime( int );//����β��ʱ�䣺0���ޣ�1��������2��15�룻3��30�룻4��1���ӣ�5��3���ӣ�6��6����
void setEchoWiden( int );//���ûز�չ��0���رգ�1:��
void setSplitDisplay( int );//���÷ָ���ʾ��0���رգ�1����
void setFixCircle( int );//���ù̶���껷��ʾ��0���رգ�1����ʾ
void setSafeOutline( int );//���ð�ȫ�����ߣ�0���رգ�1����ʾ
void setSpeed( float );//���ú��٣���λ��m/s
void setSailingAzi( float );//���ú��򣺵�λ����,��Χ��0��360,����Ϊ0��,��˳ʱ����ת
void setProwCorrect( float );//���ý���У����λֵ����λ����,��Χ��0��360,����Ϊ0��,��˳ʱ����ת
void setDistantCorrect( float );//���þ���У��ֵ����λ����
void setScanOrigin(int x, int y);//��������ƫ����ʾ,��Ļ���Ͻ�Ϊ��0,0��,��λΪ����

void mouseInterface(int x, int y, int but);//���ӿ�,x,y����Ļ���Ͻ�Ϊ��0,0��,��λΪ���� ��
                                           //but��0���ް�����1�����������2�������Ҽ���3��˫�����

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
	//void GVID_Handler(short theDisplay,short VideoChannel);//���ڴ�����ʾ�����״�ͨ���ı�ĺ�����
	                                                       //ÿ���������ӿڶ������ȵ��øú���.


};

#endif // FRMMAIN_H
