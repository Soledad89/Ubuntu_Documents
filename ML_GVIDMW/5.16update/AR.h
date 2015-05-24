#ifndef _AR_H_
#define _AR_H_

#include "datapool.h"
#include "fbinclude.h"
#include "ppidef.h"
//#include "mycolor.h"

#define TAILNUM 10                          //保留10条线实现余辉效果

class CAR
{
public:
	CAR(CDataPool * m_dp);
public:
	~CAR(void);

public:
	void setMarkEnable(bool b){markEnable = b;}

	void ARDraw();
	void ARDraw(unsigned char * dat,int len);
	void ARDrawEnlarge(unsigned char * dat,int len);

	void updateRegion(void);//更新作图区位置，即从DataPool中获取区域位置数据
	void clear();
	void setAR(bool b){bAR = b;}
	bool isAR(){return bAR;}
	void setEnlarge(bool b){bEnlarge = b;}
	bool isEnlarge(){return bEnlarge;}
	void setARGate(int g);
	int getARGate(){return gate;}
	void setARDistance(int d);
	int getARDistance(){return distance;}

	void updateSurface();
	void clearSurface(int y,int r1,int r2);
	void drawSurface(int y,int r1,int r2);
	void updateRegionLine();
	void clearRegionLine();
	void setARColor(unsigned int c);
	void setForeColor(unsigned int c);
	void setMeshBright(unsigned char b);
	void setARRange(int r);
	void setEnlargeRegion(int st,int ed);//unit as range--km

	void updateFbp(void);//更新绘图显存区地址

	void setArBackgroundColor(unsigned int theColor);
    int getArBackgroundColor(void){return ARbackgroundColor;}//add by shen
	void updateData(s_ppi_video_for_disp*);


private:
	inline bool isValid( int &x, int &y,int xStart, int yStart, int width,int height );
	inline void setFirstPixel(int x, int y, DISPMEMTYPE color,int xStart, int yStart, int width,int height);
	void drawVideo(DISPMEMTYPE color);
	void drawEnlargeVideo( DISPMEMTYPE color);
	void drawLineP2P(int x1,int y1,int x2,int y2,DISPMEMTYPE color);

	inline bool isValidD( int &x, int &y );
	inline void setFirstPixvelD(int x, int y, DISPMEMTYPE color);

private:
	int AR_XSTART;//上半区（完整回波）尺寸
	int AR_YSTART;
	int AR_WIDTH;
	int AR_HEIGHT;

	int AR_LXSTART;
	int AR_LYSTART;
	int AR_LHEIGHT;  //绘图区域的起始
	int AR_LWIDTH;

	int AR_XSTART2;//下半区（放大回波）尺寸
	int AR_YSTART2;
	int AR_WIDTH2;
	int AR_HEIGHT2;

	DISPMEMTYPE ARcolor;
	DISPMEMTYPE	 ARbackgroundColor;

	bool markEnable;

	bool bAR;
	bool bEnlarge;
    static const int oncevn=20;// once every video number,每多少条视频画一次AR
	int videoCount;// count for video passed

	int gate;
	int distance;//显示的像素点范围


	CDataPool *dp;
	DISPMEMTYPE** fbp;//pointer to framebuffer mem
	s_layer_unit ** layer;//frame buffer layer

	int video_data[SAMPLE_NUM];//合并后的视频数据	
	int *video_enlarge;//局部区域放大后的视频
	VIDEODATATYPE *datbuf;//缓存当前显示图形的雷达数据
	int datbufLen;

	s_ppi_video_for_disp *dispdat;            //暂存数据

	//for surface
	CLayerBase *layerS2;
	CLayerBase *layerR2;

	CPainter *painter2;
	CPainter *eraser2;

	// for enlarge line
	CLayerBase *layerS3;
	CLayerBase *layerR3;

	CPainter *painter3;
	CPainter *eraser3;

	bool bSurface;
	bool bRegionLine;
	bool hasLine1;
	bool hasLine2;
	int range;// unit km
	int stR,edR;// unit km

	DISPMEMTYPE foreColor;
	DISPMEMTYPE meshColor;
	int markNum;

};
#endif
