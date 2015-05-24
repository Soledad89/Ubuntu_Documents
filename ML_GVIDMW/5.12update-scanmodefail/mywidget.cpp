
//******************************
//
//  author : lishidan
//
//  create time: 2007-10-9
//
//  last modify time:2007-10-31
//
//  Version: 1.5
//
//******************************
//#include "stdafx.h"

#include "mywidget.h"


#define GVID_Handler(disp,channel) 


MyWidget::MyWidget( void *fbplinearPPI,int pitchPPI,
								   void *fbplinearAR,int pitchAR,
								   void *fbplinearMINI,int pitchMINI)
{
   

    workstate = 1;
    tmpstmp = 0;

    
    //pcidev = new CPCIDEV();
    //pcidev->PCI_Open();
	
    TRACEN;
   
    //pcidev->PCI_SetGain(13);//0 dB
    TRACEN;
    dp = new CDataPool( fbplinearPPI, pitchPPI,fbplinearAR,pitchAR,fbplinearMINI,pitchMINI );
    //dp->setDataBuf( pcidev->PCI_GetDataBuf() );
	MEMALLOCCHECK(dp);
	fprintf(debugfp,"---------data pool created! -----\n");
//  printf("---------data pool created! -----\n");
    initState();

    //ppid = new CPPIData(dp);
	//TRACEN

    ppi = new CPPI( dp );
	MEMALLOCCHECK(ppi);
	fprintf(debugfp,"---------ppi class created! -----\n");
//  printf("---------ppi class created! -----\n");
    //track=new CTrack( dp );
	//MEMALLOCCHECK(track);
	//fprintf(debugfp,"---------tracking class created! -----\n");
	
    yh = new CYh( dp );
	MEMALLOCCHECK(yh);
	fprintf(debugfp,"---------decay class created! -----\n");

	map = new CMark(this);
	MEMALLOCCHECK(map);
	fprintf(debugfp,"---------mark class created! -----\n");

	ar = new CAR(dp);
	MEMALLOCCHECK(ar);
	fprintf(debugfp,"---------AR class created! -----\n");

    time = 0;

	curDisplay=1;
	curChannel=1;

//------------------------------------------------------------
	layerS4=new CLayerBase(dp->fbpPPI,dp->layerPPI,TOP,true); 
	MEMALLOCCHECK(layerS4);
	layerR4=new CLayerBase(dp->fbpPPI,dp->layerPPI,TOP,false);

	MousePainter=new CPainter(dp->painterPool,layerS4);
	MEMALLOCCHECK(MousePainter);
	MouseEraser=new CPainter(dp->painterPool,layerR4);

	fprintf(debugfp,"---------my widget's painter created! -----\n");

	MousePainter->setColor(MFB_BLUE);
    
	mx=0;
	my=0;
//-------------------------------------小窗口的位置-----------------------
//	ppi->setWinOrigin(dp->PPI_XSTART+dp->PPI_WIDTH/2-200 ,dp->PPI_YSTART+dp->PPI_HEIGHT/2-200);
//-------------------------------------------------------------------------------
	
    TRACE("MyWidget::MyWidget");
}

 void MyWidget::initSurface()
{
    map->updateProw();
    map->updateCrossLine();
    map->updateFixCircle();
    map->updateScale();
	map->updateWindow();

}
 void MyWidget::setFbp()
 {
	 //dp->setFbp(f);
	 ppi->updateFbp();
	 yh->updateFbp();
	 map->updateFbp();
	 ar->updateFbp();
	 //track->updateFbp();

	 layerS4->setFbp(dp->fbpPPI);
	 layerR4->setFbp(dp->fbpPPI);

 }

void MyWidget::close()
{
    TRACE("MyWidget::close()");

    //delete ppithread;
    //delete udpthread;

    delete ppi;
    //delete ppid;
    delete yh;
    delete dp;
	delete map;
	delete ar;

	//delete track;

    TRACE("MyWidget::close() end");
}

MyWidget::~MyWidget()
{

TRACE("MyWidget::~MyWidget()");
}

void MyWidget::initState()
{
dp->dispState.northIndex = 0;
dp->dispState.prowIndex = 0;
dp->dispState.xorg = dp->PPI_XSTART+dp->PPI_WIDTH/2;
dp->dispState.yorg = dp->PPI_YSTART+dp->PPI_HEIGHT/2;
dp->dispState.prowCorrect = 0;
dp->dispState.distanceCorrect = 0;
dp->dispState.gain = 100;// gain/100 is the times
dp->dispState.range = 600;
dp->dispState.base = 0;
dp->dispState.dispMode = 0;
dp->dispState.moveMode = 0;
dp->dispState.mileKilo = 0;
dp->dispState.dayNight = 0;
dp->dispState.tailTime = 0;
dp->dispState.cluterControl = 1;
dp->dispState.rainSnowControl = 1;
dp->dispState.cofreqControl = 0;
dp->dispState.vecType = 0;
dp->dispState.vecTime = 1;

dp->dispState.enFirstInfo = 1;
dp->dispState.enDivert = false;
dp->dispState.enSplitDisp = 0;
dp->dispState.enWindowDisp = false;
dp->dispState.enProwLine = 0;
dp->dispState.enFixedScale = 1;
dp->dispState.enEchoWiden = 0;
dp->dispState.scopeMode = 1;
dp->dispState.enCloseFlag = false;

dp->shipState.speed = 7.7;
dp->shipState.sailingAzi = 45.0;
dp->shipState.prowAzi = 0;

}


void MyWidget::ppiUpdate(unsigned char *databufaddr)
{
    static int rnum = 0;
    if(workstate==1)//normal display
    {

	
    }

}


void MyWidget::debugPkg(unsigned char* buf)
{

ppiUpdate(buf);

}


void MyWidget::updateScanOrigin()
{
/*
int ai;
int dx,dy;
float r;

if(dp->dispState.moveMode==1) //真运动
{
    ai=(int)floorf(dp->shipState.sailingAzi / AZIDIS);
    ai += dp->dispState.northIndex;
    ai %= 4096;
    
    time += MOVEINTERVAL[dp->dispState.range];
    r = dp->shipState.speed*time/1000.0;
    
    dy = (int)floorf(r*cos(ai*AZIDIS*pi/180)/DOTDIS[dp->dispState.range+dp->dispState.mileKilo]);
    dx = (int)floorf(r*sin(ai*AZIDIS*pi/180)/DOTDIS[dp->dispState.range+dp->dispState.mileKilo]);
    
    if(dx!=0 || dy!=0)
    {
    
    dp->dispState.xorg += dx;
    dp->dispState.yorg -= dy;
    
    ppi->setOrigin(dp->dispState.xorg,dp->dispState.yorg);
    time = 0;

    map->updateProw();
    map->updateCrossLine();
    map->updateFixCircle(3);
    //map->updateScale();
    }
}
*/
}
//================================================================================




//-------------------system function slots--------------------------

void MyWidget:: setGain( int v )//设置硬件增益： -- unit dB : -10 - 30
{
if( v >= -10 && v <= 30)
    pcidev->PCI_SetGain(v);
}

void MyWidget:: setTuning( int v )//设置调谐  0：自动 ； 其他：级数
{
if( v >= 0 && v <= 100 )// 暂定最高100级，以后再改
    pcidev->PCI_SetTune(v);
}

void MyWidget:: setPulseWidth( int v )//设置脉宽：0： 短脉宽 ； 1： 中脉宽 ； 2： 长脉宽
{
if( v>=0 && v<=2 )
    pcidev->PCI_SetPulseWidth(v);
}

void MyWidget:: setTransmit( int v )// 设置发射：0：停止发射；1：启动发射
{
if( v==0 || v==1 )
    pcidev->PCI_SetTransmit(v);
}

//---------------------------------------------------------------------------------------

void MyWidget:: setRainSnow( int v )//设置抗雨雪杂波  0：自动 ； 其他：级数  其中 1 为不抑制
{
if( v >= 0 && v <= 100 )// 暂定最高100级，以后再改
    dp->dispState.rainSnowControl = v;
}

void MyWidget:: setSeaWave( int v )//设置抗海浪杂波  0：自动 ； 其他：级数  其中 1 为不抑制
{
if( v >= 0 && v <= 100 )// 暂定最高100级，以后再改
    dp->dispState.cluterControl = v;
}

void MyWidget:: setRange( int v )//设置量程：0～300(old) 或 1 - 32767 
{
//if( (v >= 0 && v <= 10) && dp->dispState.range != v )
if( dp->dispState.range != v )

{
    //pcidev->PCI_SetRange( v , dp->dispState.mileKilo );
    dp->dispState.range = v;
    ppi->setRange( v );
	//ppi->updateWinOrigin();

    //ppi->updateCorrectIndex();

    //track->updateAllTraces();
    //map->updateProw();
    map->updateFixCircle(v);

	ar->setARRange(v);
}

}

void MyWidget:: setMileKilo( int v )//设置海里公里：0：海里；1：公里
{
if( (v == 0 || v == 1) && dp->dispState.mileKilo != v )
{
    pcidev->PCI_SetRange( dp->dispState.range , v );
    dp->dispState.mileKilo = v;
    ppi->updateCorrectIndex();

    //track->updateAllTraces();
    map->updateProw();
    map->updateFixCircle();
}
}


void MyWidget:: setDispMode( int mode)//设置显示模式  0: 正北向上  1: 舰首向上  2: 航向向上
{
//0: 正北向上  1: 舰首向上  2: 航向向上
if(mode == 1 || mode == 2 || mode == 0)
{
    if(dp->dispState.dispMode!=mode)
    {
        dp->dispState.dispMode=mode;
        ppi->setDispMode(mode);
        ppi->updateAziBase();
        ppi->clear();
        map->updateScale();
    }
}
}

void MyWidget:: setVectorType( int v )//设置矢量类型: 0  真矢量；1  相对矢量
{
if( (v==0 || v==1) && dp->dispState.vecType != v )
{
    dp->dispState.vecType = v;
    //track->vecType = v;
    //track->updateAllTraces();
}

}

void MyWidget:: setVectorTime( int v )// 单位：分钟； 范围：1～60
{
if( (v>=1 && v<=60) && dp->dispState.vecTime!=v )
{
    dp->dispState.vecTime = v;
    //track->vecTime = v;
    //track->updateAllTraces();
}

}


void MyWidget:: setDayNight( int v )//白天黑夜设置：0：白天；1：黑夜
{
// waiting for code
}

void MyWidget:: setMoveMode( int mode )//设置运动模式:  0: 相对运动  1:真运动
{
if(mode==0)//相对运动
{
    if(dp->dispState.moveMode==1)//若原来是真运动
    {
//    moveTimer->stop();
    time = 0;
    dp->dispState.moveMode=mode;
    dp->dispState.xorg = MFB_WIDTH/2;
    dp->dispState.yorg = MFB_HEIGHT/2;
    ppi->clear();
    ppi->resetOrigin();
    }
}

else//真运动
{
    if(dp->dispState.moveMode==0)//若原来是相对运动
    {
    time = 0;
    dp->dispState.moveMode=mode;
//    moveTimer->start(MOVEINTERVAL[dp->dispState.range]);
    }
}

}

void MyWidget:: setCofreqResist( int v )//设置抗同频异步干扰： 0：关闭；1：打开
{
if( (v==0 || v==1) && dp->dispState.cofreqControl != v )
{
    dp->dispState.cofreqControl = v;
}

}

void MyWidget:: setMoveCursorOrigin( int x, int y )//设置动标方位2偏心，屏幕左上角为（0，0），单位为像素
{
// waiting for code
}

void MyWidget:: setTailTime( int v )//设置尾迹时间：0：无；1：连续；2：15秒；3：30秒；4：1分钟；5：3分钟；6：6分钟
{
// waiting for code
}

void MyWidget:: setEchoWiden( int v )//设置回波展宽：0：关闭；1:打开
{
if( (v==0 || v==1) && dp->dispState.enEchoWiden != v )
{
    dp->dispState.enEchoWiden = v;
    ppi->setEchoWiden(v==1);
}
}

void MyWidget:: setSplitDisplay( int v)//设置分割显示：0：关闭；1：打开
{
if( (v==0 || v==1) && dp->dispState.enSplitDisp != v )
{
    dp->dispState.enSplitDisp = v;
    ppi->setSplitDisp(v==1);
}
}

void MyWidget:: setFixCircle( int v )//设置固定距标环显示：0：关闭；1：显示
{
if(v==0)
{
    map->clearFixCircle();
}
else
{
    map->updateFixCircle();
}

}

void MyWidget:: setSafeOutline( int v )//设置安全轮廓线：0：关闭；1：显示
{
if(v==0)
{
    //map->clearSafeOutline
}
else
{
    //map->drawSafeOutline
}
}

void MyWidget:: setSpeed( float v)//设置航速：单位：m/s
{
if(v>=0)
{
    dp->shipState.speed = v;
    //track->updateAllTraces();
    //arpa info
}

}

void MyWidget:: setSailingAzi( float v)//设置航向：单位：度，范围：0～360，正北为0度，按顺时针旋转
{
if(v>=0 && v<360)
{
    dp->shipState.sailingAzi = v;
    ppi->updateAziBase();
    //track->updateAllTraces();
    // arpa info
}

}

void MyWidget:: setProwCorrect( float v)//设置舰首校正方位值：单位：度，范围：0～360，正北为0度，按顺时针旋转
{
if( (v>=0 && v<360) && dp->dispState.prowCorrect != v)
{
    dp->dispState.prowCorrect = v;
    ppi->updateCorrectIndex();
    ppi->updateAziBase();
}
}

void MyWidget:: setDistantCorrect( float v)//设置距离校正值：单位：米
{
if( dp->dispState.distanceCorrect != v)
{
    dp->dispState.distanceCorrect = v;
    ppi->updateCorrectIndex();
}
}

void MyWidget:: setScanOrigin(int x, int y)//用于设置偏心显示，屏幕左上角为（0，0），单位为像素
{
//if(x!=dp->dispState.xorg || y!=dp->dispState.yorg)
{
    if( x==dp->PPI_XSTART+dp->PPI_WIDTH/2 && y==dp->PPI_YSTART+dp->PPI_HEIGHT/2 )
    {
    dp->dispState.enDivert=false;
    ppi->setDivert(false);
    }
    else
    {
    dp->dispState.enDivert=true;
    ppi->setDivert(true);
    }
    
    //dp->dispState.xorg=x;//如果设置该变量，重绘界面时会变中心
    //dp->dispState.yorg=y;
    ppi->setOrigin(x,y);
	ppi->updateWinOrigin();
	if(ppi->moveMode ==1)
		ppi->clear();
}

}


void MyWidget:: mouseInterface(int x, int y, int but)//鼠标接口，x,y：屏幕左上角为（0，0），单位为像素 ；
                                           //but：0：无按键；1：单极左键；2：单击右键；3：双击左键
{

}

//void MyWidget:: setWidowPosition(int x, int y)//用于设置开窗窗口位置，屏幕左上角为（0，0），单位为像素
//{
//	ppi->setWinOrigin(x,y);
//	map->updateWindow(x,y);
//}

//----------------system function slots end-------------------------

void MyWidget::debug(int cmd,int p1,int p2)
{

}

//======================================= 二代接口 ==================================================


int MyWidget::ML_GVID_Init()
{ 
	initSurface();
	return 0;
}
void MyWidget::ML_GVID_OpenOverlay (bool OpenFlag)
{ 

}
int MyWidget::ML_GVID_OpenAr (short  theDisplay,short VideoChannel,short theX, short theY , short theWidth, short theHeight)
{ 
	GVID_Handler(theDisplay,VideoChannel);

	if(ar->isAR())
		return 1;
	else
	{
		ar->setAR(true);
		ar->clear();
		ar->setAR(true);
	
		ar->updateSurface();

		return 0;

	}
}
int MyWidget::ML_GVID_CloseAr (short theDisplay,short VideoChannel)
{ 
	GVID_Handler(theDisplay,VideoChannel);

	if(!ar->isAR())
		return 1;
	else{
		ar->setAR(false);
		ar->clear();
		return 0;
	}
}
int MyWidget::ML_GVID_SetArXY (short theDisplay,short VideoChannel ,short theX ,short theY)
{ 
	GVID_Handler(theDisplay,VideoChannel);

	//dp->setARRegion(theX,theY,-1,-1);
	ar->updateRegion();
	return 0;
}
void MyWidget::ML_GVID_ChangArGate (short theDisplay,short VideoChannel ,int theGate)
{ 
	GVID_Handler(theDisplay,VideoChannel);
	ar->setARGate(theGate);
}
void MyWidget::ML_GVID_ChangArDist (short theDisplay,short VideoChannel ,int theDist)
{ 
	GVID_Handler(theDisplay,VideoChannel);

	ar->setARDistance(theDist);
}

//新增

void MyWidget::ML_GVID_SetArColor(short theDisplay,char VideoChannel,unsigned int theColor)
{
	GVID_Handler(theDisplay,VideoChannel);

	ar->setARColor(theColor);
}

void MyWidget::ML_GVID_SetArBackgroundColor(short theDisplay,char VideoChannel,unsigned int theColor)
{
	GVID_Handler(theDisplay,VideoChannel);

	ar->setArBackgroundColor(theColor);
}


int MyWidget::ML_GVID_OpenPPI(short  theDisplay,short VideoChannel,short theX, short theY , short theWidth, short theHeight)
{ 
	GVID_Handler(theDisplay,VideoChannel);
	ppi->benCloseFlag = false;
	{
		ppi->updateRegion();
		map->updateRegion();
		yh->updateRegion();
		//ppi->setWinOrigin(dp->PPI_XSTART+dp->PPI_WIDTH/2+150,dp->PPI_YSTART+dp->PPI_HEIGHT/2-200);
		initSurface();
		//track->updateAllTraces();

		ppi->setFirstInfo( true );
		pcidev->PCI_Open();
		return 0;
	}

}
int MyWidget::ML_GVID_ClosePPI(short  theDisplay,short VideoChannel)
{ 
	GVID_Handler(theDisplay,VideoChannel);
	ppi->benCloseFlag = true;
	ppi->setFirstInfo( false );
	pcidev->PCI_Close();
	return 0;
}
int MyWidget::ML_GVID_SetPPIXY(short theDisplay,short VideoChannel ,short theX ,short theY)
{ 
	GVID_Handler(theDisplay,VideoChannel);

	{
		ppi->updateRegion();
		map->updateRegion();
		yh->updateRegion();
		//ppi->setWinOrigin(dp->PPI_XSTART+dp->PPI_WIDTH/2+150,dp->PPI_YSTART+dp->PPI_HEIGHT/2-200);
		initSurface();
		//track->updateAllTraces();
		return 0;
	}


}
int MyWidget::ML_GVID_SetPPIWH(short theDisplay,short VideoChannel ,short theWidth, short theHeight)
{ 
	GVID_Handler(theDisplay,VideoChannel);//没有执行

	{
		ppi->updateRegion();
		map->updateRegion();
		yh->updateRegion();
		//ppi->setWinOrigin(dp->PPI_XSTART+dp->PPI_WIDTH/2+150,dp->PPI_YSTART+dp->PPI_HEIGHT/2-200);
		initSurface();
		//track->updateAllTraces();
		return 0;
	}

}

int MyWidget::ML_GVID_SetWinWH(short theDisplay,short VideoChannel ,short theWidth, short theHeight)
{
	GVID_Handler(theDisplay,VideoChannel);

	{
		ppi->updateRegion();
		//map->updateRegion();
		yh->updateRegion();
		//ppi->setWinOrigin(dp->PPI_XSTART+dp->PPI_WIDTH/2+150,dp->PPI_YSTART+dp->PPI_HEIGHT/2-200);
		//initSurface();
		//track->updateAllTraces();
		return 0;
	}

}
int MyWidget::ML_GVID_SetArWH(short theDisplay,short VideoChannel ,short theWidth, short theHeight)
{
	GVID_Handler(theDisplay,VideoChannel);

	{
		//ppi->updateRegion();
		//map->updateRegion();
		//yh->updateRegion();
		//ppi->setWinOrigin(dp->PPI_XSTART+dp->PPI_WIDTH/2+150,dp->PPI_YSTART+dp->PPI_HEIGHT/2-200);
		ar->updateRegion();
		//initSurface();
		//track->updateAllTraces();
		return 0;
	}

}

void MyWidget::ML_GVID_SetPPICenter(short theDisplay,short VideoChannel ,short theX ,short theY)
{ 
	GVID_Handler(theDisplay,VideoChannel);

	if(theX>dp->PPI_XSTART+dp->PPI_WIDTH)
		setScanOrigin(dp->PPI_XSTART+dp->PPI_WIDTH/2 ,dp->PPI_YSTART+dp->PPI_HEIGHT/2);
	else
		setScanOrigin(theX,theY);
}

void MyWidget::ML_GVID_SetPPIWinDistDir(short theDisplay,short VideoChannel ,short theDistance ,float theDirection)
{ 
int x,y;
int dis,azi;

GVID_Handler(theDisplay,VideoChannel);

//if(theDistance>METER[dp->dispState.range+dp->dispState.mileKilo]*2/3)return;//偏心不超过2/3

//dis = floorf(theDistance*1000/DOTDIS[dp->dispState.range+dp->dispState.mileKilo]);//像素距离
dis  = ppi->dispRadius *((double)theDistance /(double)dp->dispState.range);
if(dis > 511) dis = 511;

azi = (int)(floorf(theDirection/AZIDIS)+dp->dispState.northIndex)%4096;//角度相对正北

x=dp->addr_near_x[azi][dis]+dp->dispState.xorg;
y=-dp->addr_near_y[azi][dis]+dp->dispState.yorg;

x -= 85;//小窗口长宽170x170，输入参数为窗口中心位置，需换算为窗口左上角坐标
y -= 85;

ppi->setWinOrigin(x,y);
map->updateWindow(x,y,170);

}

void MyWidget::setPPIWinXY(short theDisplay,short VideoChannel ,short x ,short y)
{
	GVID_Handler(theDisplay,VideoChannel);

	if( x>dp->PPI_XSTART+dp->PPI_WIDTH/6 && x<dp->PPI_XSTART+dp->PPI_WIDTH*5/6 && \
	    y>dp->PPI_YSTART+dp->PPI_HEIGHT/6 && y<dp->PPI_YSTART+dp->PPI_HEIGHT*5/6 )
	{
		x -= 85;//小窗口长宽170x170，输入参数为窗口中心位置，需换算为窗口左上角坐标
		y -= 85;

		ppi->setWinOrigin(x,y);
		map->updateWindow(x,y);
	}

}


void MyWidget::ML_GVID_SetPPIShipDir(short theDisplay,short VideoChannel,float theDirection)
{ 
	GVID_Handler(theDisplay,VideoChannel);

	if(theDirection>=0 && theDirection<360){
		dp->shipState.prowAzi=theDirection;
		ppi->updateAziBase();
		map->updateProw();
	}
}

void MyWidget::ML_GVID_SetPPIWinScale(short theDisplay,short VideoChannel,int theScale)
{ 
	GVID_Handler(theDisplay,VideoChannel);
	 int width  = dp->WIN_WIDTH * theScale;
	 int height = dp->WIN_HEIGHT * theScale;

ML_GVID_SetWinWH(theDisplay,VideoChannel,width,height);
}

void MyWidget::ML_GVID_SetPPIScan(short theDisplay,short VideoChannel,int theScan)
{ 
	GVID_Handler(theDisplay,VideoChannel);

	ppi->setScanLine( (theScan==0) );
}
void MyWidget::ML_GVID_SetPPIFrost(short theDisplay,short VideoChannel,int theFrost)
{ 
	GVID_Handler(theDisplay,VideoChannel);
	if (theFrost == 0|| theFrost ==1)
	{
		ppi->setFirstInfo( theFrost== 1);
	}
	
}
void MyWidget::ML_GVID_SetPPIDist(short theDisplay,short VideoChannel,short theDist)
{ 
	GVID_Handler(theDisplay,VideoChannel);

	setRange(theDist);
}
void MyWidget::ML_GVID_GetPPIDist(short theDisplay,short VideoChannel,short* theDist)
{ 
	GVID_Handler(theDisplay,VideoChannel);

	*theDist = dp->dispState.range;
}
void MyWidget::ML_GVID_SetPPISwitch(short theDisplay,short VideoChannel,int theSwitch)
{ 
	GVID_Handler(theDisplay,VideoChannel);

	ppi->setFirstInfo( theSwitch==0 );
	if(theSwitch==1)ppi->clear();
	pcidev->PCI_Close();
}
void MyWidget::ML_GVID_SetPPIGate(short theDisplay,short VideoChannel,int theGate)
{ 
	GVID_Handler(theDisplay,VideoChannel);

	ppi->setBase(theGate);
}
void MyWidget::ML_GVID_SetPPITail(short theDisplay,short VideoChannel,int theTail)
{ 
	GVID_Handler(theDisplay,VideoChannel);

	yh->setYhWeight(theTail);// theTail is 1~16, small num refers to the fast yh
}

void MyWidget::ML_GVID_SetWinDisp(short theDisplay,short VideoChannel,int theDisp)
{
	GVID_Handler(theDisplay,VideoChannel);

	dp->dispState.enWindowDisp=(theDisp==0);
	ppi->setWindowDisp(theDisp==0);
	ppi->setWinOrigin(700,200);
	if(theDisp==0)map->updateWindow(700,200);
	yh->setYhWin(theDisp==0);
}

void MyWidget::ML_GVID_SetWinXY(short theDisplay,short VideoChannel ,short theX, short theY)
{
	GVID_Handler(theDisplay,VideoChannel);
	//dp->setWinRegion(theX,theY,-1,-1);
	ppi->updateRegion();
	yh->updateRegion();
}

void MyWidget::ML_GVID_SetPPIColor(short theDisplay,short VideoChannel,unsigned int theColor)
{
	GVID_Handler(theDisplay,VideoChannel);

	dp->setPPIColor( (theColor>>24) & 0x0ff,(theColor>>16) & 0x0ff,(theColor>>8) & 0x0ff );
}

void MyWidget::ML_GVID_SetPPILineColor(short theDisplay,char VideoChannel,unsigned int theColor)
{
	GVID_Handler(theDisplay,VideoChannel);

	//ppi->setScanLineColor(  ((theColor & 0xf8000000)>>16 | (theColor & 0x00fc0000)>>13 | (theColor & 0x0000f800)>>11) & 0x0000ffff );
	ppi->setScanLineColor(csectocmem(theColor));

}


void MyWidget::MouseEventHandler(unsigned int type,int x,int y)
{
	MouseEraser->drawCursor(mx,my);
	mx=x;
	my=y;
	MousePainter->drawCursor(mx,my);

}

void MyWidget::setAROnlyDisplay()
{
	//ppi->setFirstInfo(false);
	//yh->disableYh();

	////track->clearAllTraces();
	////track->clearAllDots();
	////map->setLayerDisplay(2,false);
	//ppi->clear();

	//ar->setAR(true);
	//dp->AR_XSTART=0;
	//dp->AR_YSTART=600;
	//dp->AR_WIDTH=600;
	//dp->AR_HEIGHT=256;

	//ar->updateRegion();
	//ar->setARDistance(1200);
	//ar->setARRange(600);
	//ar->setEnlargeRegion(30,35);
	//ar->updateSurface();

}

void MyWidget::ML_GVID_SetPPIMode(short theDisplay,short VideoChannel,short theMode,bool bhmode)
{
	dp->dispState.scopeMode=theMode;
	dp->clear();
    ppi->setScopeMode(theMode,bhmode);

}

void MyWidget::ML_GVID_SetTailSwitch(short theDisplay,short VideoChannel,int theSwitch)
{ 
	GVID_Handler(theDisplay,VideoChannel);

	yh->setTailSwitch( theSwitch );
	if(theSwitch==1)ppi->clear();
	pcidev->PCI_Close();
}

void MyWidget::ML_GVID_SetTailColor(short theDisplay,short VideoChannel,unsigned int theColor)
{
	GVID_Handler(theDisplay,VideoChannel);

	dp->setPPITailColor( (theColor>>24) & 0x0ff,(theColor>>16) & 0x0ff,(theColor>>8) & 0x0ff );
}

void MyWidget::ML_GVID_SetTailGate(short theDisplay,short VideoChannel,unsigned int theGate)
{
	GVID_Handler(theDisplay,VideoChannel);
	yh->setTailGate(theGate);
}

void MyWidget::ML_GVID_SetTailTime(short theDisplay,short VideoChannel,int theTail)
{ 
	GVID_Handler(theDisplay,VideoChannel);

	yh->setYhTail(theTail);// theTail is 1~16, small num refers to the fast yh
}

void MyWidget::ML_GVID_SetPPIColorTable(short theDisplay,short VideoChannel,unsigned int* colorTable)
{
	GVID_Handler(theDisplay,VideoChannel);
	dp->setPPIColorTable( colorTable );
}

void MyWidget::ML_GVID_ClearPPI(short theDisplay,char VideoChannel)
{
	GVID_Handler(theDisplay,VideoChannel);
	ppi ->clear();
}

void MyWidget::ML_GVID_SetPPIMoveMode(short theDisplay,char VideoChannel, short theMode)
{
	GVID_Handler(theDisplay,VideoChannel);
	ppi ->setMoveMode(theMode);
}

void MyWidget::setArMarkDisplay(bool disp)
{
	if(disp)
	{
		ar->setMarkEnable(true);
		ar->updateSurface();
	}
	else
	{
		ar->clear();
		ar->setMarkEnable(false);
	}

}

void MyWidget::ML_GVID_SetMiniWinColorTable(short theDisplay,char VideoChannel,unsigned int* colorTable)
{
	GVID_Handler(theDisplay,VideoChannel);
	dp->setMiniWinColorTable( colorTable );
}

void MyWidget::setRadarMarkDisplay(bool disp)
{
	if(disp)
	{
		map->setMarkEnable(true);
		map->updateAziLine();
		map->updateFixCircle();
		map->updateScale();
		//map->updateProw();
		map->updateCrossLine();
		map->updateWindow();
	}
	else
	{
		map->clearAziLine();
		map->clearFixCircle();
		//map->clearProw();
		map->clearScale();
		map->clearCrossLine();
		map->clearWindow();
		map->setMarkEnable(false);
	}
}
