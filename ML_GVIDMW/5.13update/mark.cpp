//#include "StdAfx.h"

#include "mark.h"
#include "mycolor.h"


#define DRAW_HANDLE if(!markEnable)return;

CMark::CMark(MyWidget *tmw)
{
	mw=tmw;
	dp=mw->dp;

	updateRegion();

	markEnable = false;

	xorg=PPI_XSTART+PPI_WIDTH/2;
	yorg=PPI_YSTART+PPI_HEIGHT/2;
	backColor=0x00;//black
	foreColor=0x00ff0000;//green
	echoColor=0xffff0000;//yellow

	boldDisColor=changeBright(foreColor,130);
	thinDisColor=changeBright(foreColor,50);
	boldAziColor=changeBright(foreColor,130);
	thinAziColor=changeBright(foreColor,50);
	scaleColor=changeBright(foreColor,120);

	for(int i=0;i<5;i++)layerFlag[i]=true;

	fixLabelType=0;
	labelNum=0;
	pNum=0;

	boldDisStep=200;// unit pixel 0~600
	thinDisStep=200;
	boldAziStep=1024;// unit aziIndex 0~4095
	thinAziStep=512;

	rangeNum=600;

	hasc=false;// dis circle
	hasa=false;// azi line
	hass=false;// scale

	hasw=true;
	wx=PPI_XSTART+PPI_WIDTH/2+150;
	wy=PPI_YSTART+PPI_HEIGHT/2-200;
	wd=170;

	hasp=false;
	pxorg=PPI_XSTART+PPI_WIDTH/2;
	pyorg=PPI_YSTART+PPI_HEIGHT/2;
	prowLen=ADDR_NEAR_SMP_LEN;

	layerS2=new CLayerBase(dp->fbpPPI,dp->layerPPI,2,true);
	layerR2=new CLayerBase(dp->fbpPPI,dp->layerPPI,2,false);

	painter2=new CPainter(dp->painterPool,layerS2);
	eraser2=new CPainter(dp->painterPool,layerR2);

	painter2->setColor(MFB_GREEN);


}


CMark::~CMark()
{
delete layerR2;
delete layerS2;
delete painter2;
delete eraser2;

}

void CMark::setOrigin(int theX,int theY)
{
	clearAziLine();
	clearFixCircle();
	clearScale();
	clearProw();

	xorg=theX;
	yorg=theY;

	updateAziLine();
	updateFixCircle();
	updateScale();
	updateProw();

}

int CMark::setFixCircleLabel(int type,float*pLabel,int lNum,int pn)
//type 0：量程均匀标注（此时后两个参数无效）；
//       1：指定数字标注，pLabel：数字标注首指针；
//lNum：数字标注数目；pn：小数部分显示的位数
{
	clearFixCircle();
	if(type==0)
	{
		fixLabelType=0;
		labelNum=0;
		pNum=0;
	}
	else
	{
		
		if(lNum>20)lNum=20;

		memcpy(fixLabel,pLabel,sizeof(float)*lNum);

		fixLabelType=1;
		labelNum=lNum;
		pNum=pn;
	}

	updateFixCircle();

	return 0;

}

void CMark::updateProw()
{
DRAW_HANDLE
}

void CMark::updateFixCircle(int cn)
{
	DRAW_HANDLE
	clearFixCircle();
	rangeNum = cn;
	updateFixCircle();
}

void CMark::updateFixCircle()
{
	DRAW_HANDLE

	int circleNum;
	circleNum=600/boldDisStep;

	if(hasc)
	{
		eraser2->drawDistantCircle(xorg,yorg,circleNum,rangeNum);
		eraser2->drawCircles(xorg,yorg,thinDisStep);
	}

	painter2->setColor(thinDisColor);
	painter2->drawCircles(xorg,yorg,thinDisStep);
	painter2->setColor(boldDisColor);
	if(fixLabelType==0)
		painter2->drawDistantCircle(xorg,yorg,circleNum,rangeNum);
	else
	{
		painter2->drawCircles(xorg,yorg,boldDisStep);
		for(int i=0;i<labelNum && i<=circleNum;i++)
		{
			painter2->drawFloat(xorg+4,yorg-boldDisStep*i-16,fixLabel[i],pNum);
			if(i==circleNum)//最外圈的数值向内写
				painter2->drawFloat(xorg+4,yorg-boldDisStep*i+3,fixLabel[i],pNum);
		}
	}
	hasc=true;

}

void CMark::updateCrossLine()
{
	DRAW_HANDLE

	if(hasl)eraser2->drawCrossLine(xorg,yorg,600);

	painter2->drawCrossLine(xorg,yorg,600);
	hasl=true;
}
void CMark::updateScale()
{
	DRAW_HANDLE

	if(hass)eraser2->drawScale(xorg,yorg,0);
	//sxorg=dp->dispState.xorg;
	//syorg=dp->dispState.yorg;
	//scaleAziIndex=dp->dispState.northIndex;
	painter2->drawScale(xorg,yorg,0);
	hass=true;
}

//  窗口区标绘改成两像素线，尽量防止缩放丢线
void CMark::updateWindow(int x, int y,int d)
{
	DRAW_HANDLE

		if(hasw){eraser2->drawNoFillRect( wx, wy, wx+wd, wy+wd );//先擦
	eraser2->drawNoFillRect( wx+1, wy+1, wx+wd-1, wy+wd-1 );}

	wx = x;//再更新参数
	wy = y;
	wd = d;
	painter2->drawNoFillRect( wx, wy, wx+wd, wy+wd );//最后画
	painter2->drawNoFillRect( wx+1, wy+1, wx+wd-1, wy+wd-1 );
	hasw = true;
}

void CMark::updateWindow(int x, int y)
{
	DRAW_HANDLE

		if(hasw){eraser2->drawNoFillRect( wx, wy, wx+wd, wy+wd );//先擦
	eraser2->drawNoFillRect( wx+1, wy+1, wx+wd-1, wy+wd-1 );}

	wx = x;//再更新参数
	wy = y;
	painter2->drawNoFillRect( wx, wy, wx+wd, wy+wd );//最后画
	painter2->drawNoFillRect( wx+1, wy+1, wx+wd-1, wy+wd-1 );
	hasw = true;
}
void CMark::updateWindow(int d)
{
	DRAW_HANDLE

		if(hasw){eraser2->drawNoFillRect( wx, wy, wx+wd, wy+wd );
	eraser2->drawNoFillRect( wx+1, wy+1, wx+wd-1, wy+wd-1 );}

	wx = wx + (wd-d)/2;
	wy = wy + (wd-d)/2;
	wd = d;
	painter2->drawNoFillRect( wx, wy, wx+wd, wy+wd );
	painter2->drawNoFillRect( wx+1, wy+1, wx+wd-1, wy+wd-1 );
	hasw = true;
}
void CMark::updateWindow()
{
	DRAW_HANDLE

		if(hasw){eraser2->drawNoFillRect( wx, wy, wx+wd, wy+wd );
	eraser2->drawNoFillRect( wx+1, wy+1, wx+wd-1, wy+wd-1 );}

	painter2->drawNoFillRect( wx, wy, wx+wd, wy+wd );
	painter2->drawNoFillRect( wx+1, wy+1, wx+wd-1, wy+wd-1 );
	hasw = true;
}

void CMark::updateAziLine()
{
	DRAW_HANDLE

	int a;

	if(hasa)
	{
		for(a=0;a<4096;a+=thinAziStep)
			eraser2->drawLine(xorg,yorg,a,600);
	}

	painter2->setColor(thinAziColor);
	for(a=0;a<4096;a+=thinAziStep)
		painter2->drawLine(xorg,yorg,a,600);

	painter2->setColor(boldAziColor);
	for(a=0;a<4096;a+=boldAziStep)
		painter2->drawLine(xorg,yorg,a,600);
	
	hasa=true;
}

void CMark::clearAziLine()
{
	DRAW_HANDLE

	int a;

	if(hasa)
	{
		for(a=0;a<4096;a+=thinAziStep)
			eraser2->drawLine(xorg,yorg,a,600);
	}
	hasa=false;
}

void CMark::clearProw()
{
	DRAW_HANDLE

	if(hasp)eraser2->drawLine(pxorg,pyorg,prowAzi,prowLen);
	hasp=false;
}

void CMark::clearFixCircle()
{
	DRAW_HANDLE

	int circleNum;
	circleNum=600/boldDisStep;
	if(hasc)
	{
		if(fixLabelType==0)
			eraser2->drawDistantCircle(xorg,yorg,circleNum,rangeNum);
		else
		{
			eraser2->drawCircles(xorg,yorg,boldDisStep);
			for(int i=0;i<labelNum && i<=circleNum;i++)
			{
				eraser2->drawFloat(xorg+4,yorg-boldDisStep*i-16,fixLabel[i],pNum);
				if(i==circleNum)//最外圈的数值向内写
					eraser2->drawFloat(xorg+4,yorg-boldDisStep*i+3,fixLabel[i],pNum);
			}
		}

		eraser2->drawCircles(xorg,yorg,thinDisStep);
	}
	hasc=false;
}

void CMark::clearCrossLine()
{
	DRAW_HANDLE

	if(hasl)eraser2->drawCrossLine(xorg,yorg,600);
	hasl=false;
}
void CMark::clearScale()
{
	DRAW_HANDLE

	if(hass)eraser2->drawScale(xorg,yorg,0);
	hass=false;
}

void CMark::clearWindow()
{
	DRAW_HANDLE

		if(hasw){eraser2->drawNoFillRect( wx, wy, wx+wd, wy+wd );
	eraser2->drawNoFillRect( wx+1, wy+1, wx+wd-1, wy+wd-1 );}

	hasw=false;
}

void CMark::updateRegion(void)
{
	PPI_XSTART= dp->PPI_XSTART;
	PPI_YSTART= dp->PPI_YSTART;
	PPI_WIDTH= dp->PPI_WIDTH;
	PPI_HEIGHT= dp->PPI_HEIGHT;

	WIN_XSTART= dp->WIN_XSTART;
	WIN_YSTART= dp->WIN_YSTART;
	WIN_WIDTH= dp->WIN_WIDTH;
	WIN_HEIGHT= dp->WIN_HEIGHT;

	AR_XSTART= dp->AR_XSTART;
	AR_YSTART= dp->AR_YSTART;
	AR_WIDTH= dp->AR_WIDTH;
	AR_HEIGHT= dp->AR_HEIGHT;
}

void CMark::updateFbp(void)//更新绘图显存区地址
{
	layerS2->setFbp(dp->fbpPPI);
	layerR2->setFbp(dp->fbpPPI);
}

//------------------------------------------------------

int CMark::setLayerDisplay(int theLayer,int flag)
{
	return 0;
}

int CMark::setBackColor(unsigned int color)
{
	backColor=color;
	dp->colortable[0]=csectocmem(backColor);
	mw->ppi->clear();
	return 0;
}

int CMark::setForeColor(unsigned int color)
{
	foreColor=color;

	setBoldAziLineBright(getBright( cmemtocsec(boldAziColor) ));
	setThinAziLineBright(getBright( cmemtocsec(thinAziColor) ));
	setBoldDisLineBright(getBright( cmemtocsec(boldDisColor) ));
	setThinDisLineBright(getBright( cmemtocsec(thinDisColor) ));
	setScaleBright(getBright( cmemtocsec(scaleColor) ));
	

	return 0;
}

int CMark::setRange(float range,float bstep,float tstep)// units are all kilometer
{
	int bnum=range/bstep;
	int tnum=range/tstep;

	//clearFixCircle();
	setLayerDisplay(2,0);

	rangeNum=range;

	boldDisStep=600/bnum;
	thinDisStep=600/tnum;

	//updateFixCircle();
	setLayerDisplay(2,1);

	return 0;
}

int CMark::setAziLine(float bstep,float tstep)// units are all degree
{
	int bnum=360.0/bstep;
	int tnum=360.0/tstep;

	//clearAziLine();
	setLayerDisplay(2,0);

	boldAziStep=4096/bnum;
	thinAziStep=4096/tnum;

	//updateAziLine();
	setLayerDisplay(2,1);

	return 0;
}

int CMark::setBoldAziLineBright(unsigned char bright)
{
	boldAziColor=changeBright(foreColor,bright);
	updateAziLine();

	return 0;
}

int CMark::setThinAziLineBright(unsigned char bright)
{
	thinAziColor=changeBright(foreColor,bright);
	updateAziLine();

	return 0;
}

int CMark::setBoldDisLineBright(unsigned char bright)
{
	boldDisColor=changeBright(foreColor,bright);
	updateFixCircle();

	return 0;
}

int CMark::setThinDisLineBright(unsigned char bright)
{
	thinDisColor=changeBright(foreColor,bright);
	updateFixCircle();

	return 0;
}

int CMark::setScaleBright(unsigned char bright)
{
	scaleColor=changeBright(foreColor,bright);
	updateScale();

	return 0;
}

int CMark::setBackBright(unsigned char bright)
{
	backColor=changeBright(backColor,bright);//c16toc32(changeBright(backColor,bright));

	for(int i=0;i<bright;i++)
		dp->colortable[i]=backColor;
	mw->ppi->clear();

	backColor=cmemtocsec(backColor);
	return 0;
}

int CMark::getRecord(int theX,int theY,float *azi,float *dis)
{

	return 0;
}
