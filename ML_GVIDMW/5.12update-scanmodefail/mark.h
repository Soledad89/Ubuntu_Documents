
#ifndef __CMARK__
#define __CMARK__

#include "datapool.h"
#include "layers.h"
#include "painter.h"
#include "ppidef.h"

#include "mywidget.h"

class MyWidget;

class CMark
{

public:
	CMark(MyWidget *tmw);
	~CMark();

public:

	void setMarkEnable(bool b){markEnable = b;}

	void updateProw();
	void updateFixCircle(int cn);
	void updateFixCircle();
	void updateCrossLine();
	void updateScale();
	void updateWindow(int x, int y,int d);
	void updateWindow(int x, int y);
	void updateWindow(int d);
	void updateWindow();
	void updateAziLine();

	void clearProw();
	void clearFixCircle();
	void clearCrossLine();
	void clearScale();
	void clearWindow();
	void clearAziLine();

	void updateRegion(void);//������ͼ��λ�ã�����DataPool�л�ȡ����λ������
	void updateFbp(void);//���»�ͼ�Դ�����ַ

	int setLayerDisplay(int theLayer,int flag);
	int setBackColor(unsigned int color);
	int setForeColor(unsigned int color);
	int setRange(float range,float bstep,float tstep);// units are all kilometer
	int setAziLine(float bstep,float tstep);// units are all degree
	int setBoldAziLineBright(unsigned char bright);
	int setThinAziLineBright(unsigned char bright);
	int setBoldDisLineBright(unsigned char bright);
	int setThinDisLineBright(unsigned char bright);
	int setScaleBright(unsigned char bright);
	int setBackBright(unsigned char bright);

	int setFixCircleLabel(int type,float*pLabel,int lNum,int pn);//type 0�����̾��ȱ�ע����ʱ������������Ч����
	                                                                               //       1��ָ�����ֱ�ע��pLabel�����ֱ�ע��ָ�룻
	                                                                              //lNum�����ֱ�ע��Ŀ��pn��С��������ʾ��λ��

	int getRecord(int theX,int theY,float *azi,float *dis);

	void setOrigin(int theX,int theY);

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
	CDataPool *dp;
	MyWidget *mw;

	int xorg,yorg;
	// SecGen color format
	unsigned int backColor;
	unsigned int foreColor;
	unsigned int echoColor;

	// Mem color format
	DISPMEMTYPE boldDisColor;
	DISPMEMTYPE thinDisColor;
	DISPMEMTYPE boldAziColor;
	DISPMEMTYPE thinAziColor;
	DISPMEMTYPE scaleColor;

	bool layerFlag[5];

	int fixLabelType;//type 0�����̾��ȱ�ע��1��ָ�����ֱ�ע
	float fixLabel[20];
	int labelNum;
	int pNum;

	int boldDisStep;// unit pixel 0~600
	int thinDisStep;
	int boldAziStep;// unit aziIndex 0~4095
	int thinAziStep;

	int rangeNum;

	bool markEnable;

	bool hasc;// dis circle
	bool hasa;// azi line
	bool hass;// scale
	bool hasl;// cross line

	bool hasw;// window
	int wx,wy,wd;

	bool hasp;//prow
	int pxorg,pyorg;
	int prowAzi;
	int prowLen;

	CLayerBase *layerS2;
	CLayerBase *layerR2;

	CPainter *painter2;
	CPainter *eraser2;


};

#endif