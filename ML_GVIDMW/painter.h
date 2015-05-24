
//******************************
//
//  author : lishidan , zhanghui
//
//  create time: 
//
//  last modify time:2007-10-23
//
//  Version: 2.1
//
//******************************

#ifndef _PAINTER_H_
#define _PAINTER_H_

#include "debug.h"
#include "ppidef.h"
#include "fbinclude.h"
#include "datapool.h"
#include "layers.h"
#include <math.h>

class CDataPool;
#define pi 3.14159 

const unsigned char picMask[]={1,2,4,8,16,32,64,128};

class CPainterPool
{
public:
    CPainterPool(CDataPool * dp);
    ~CPainterPool();


public:
    void getScaleCircle();
    void getAddrXY(int radius);


public:
    CDataPool *m_dp;
    int ** nx;
    int ** ny;
    int ** fx;
    int ** fy;

    int **chartAddrX,**chartAddrY;

    int radiusPPI;
    int rangePPI;//量程
    int centerX,centerY;
    char dot[12][16];// 

    int ** scaleTable;

};

//===============================================================================================

class CPainter
{
public:
    CPainter( CPainterPool * pp,CLayerBase * lbp);
    ~CPainter();
public:

    //inline bool isValid( int x, int y );
    void setPixel(int x, int y, DISPMEMTYPE c){m_lbp->setPixel(x,y,c);}
	void setPixel(int x, int y){m_lbp->setPixel(x,y,color);}
	void clear(){m_lbp->clear();}

    void drawRect(int left, int up, int right, int down);
    int drawText( int x, int y, int qh, int wh);
    void drawArc(int x,int y,int deg1, int deg2, int r);

    ///////////////////////////////////
    void drawCircle(int x,int y,int r);
	void drawCircles(int x,int y,int step);
    void drawDistantCircle(int x,int y,int distantCircleCount,int rangePPI);
    void drawPoint(int x,int y,int code);//draw single number
    void drawNum(int x,int y,int num);//draw integer
	void drawFloat(int x,int y,float f,int dn);//draw float, dn表示小数点后位数
    void drawScale(int x,int y,int r);
    void drawCrossLine(int x,int y,int r);
   
    void drawLine(int x,int y,int angle,int len);
	void drawLineP2P(int x1,int y1,int x2,int y2);
    void drawTrackDot(int x,int y);
    
    void drawSectorRegion(int centerX,int centerY,int r1,int degree1,int r2,int degree2);
    void drawSectorRegion(int centerX,int centerY,int r1,int degree1,int r2,int degree2,int idNum);
  
    
    void setColor(DISPMEMTYPE col){color = col;}
    DISPMEMTYPE getColor(){return color;}
    //////////////////////////////////

public:
	void drawSmallRect(int x,int y);
	void drawVector(int x, int y, int azi, int len, int num);
	//void drawVector(int x, int y, int azi, int len, int num);
	void drawNoFillRect(int leftX, int upY, int rightX, int downY);
	void drawCursor(int x,int y);


private:
    CLayerBase * m_lbp;
    
    int ** nx;
    int ** ny;
    int ** fx;
    int ** fy;
   

    DISPMEMTYPE color;

    int **chartAddrX,**chartAddrY;
    int **chartCircle;

    char (*dot)[16];

    int radiusPPI;

	int ** scaleTable;

    int textTransFlag;
};

#endif
