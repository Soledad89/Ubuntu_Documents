#include "ML_GVIDMW_global.h"

thu_gvidwidget *pthu_gvidwidget;
bool bInit=false;
//bool haselevinfo=false; //for mode 3,高度角信息
bool bInitPPI[2]= {false,false};
bool bInitAR[2]={false,false};
bool bInitMiniWin[2]={false,false};
bool bHmode=false;//flag add by shen for H mode
bool bpkg=false;//flag add by shen for 是否内部雷达数据送显

#define interwin 10//the interval between windows

//-------------- 用于参数有效性判定的宏定义 --------------------------

static qint32 screenMode=2;

bool checkXY(int x,int y)
{
    switch(screenMode)
    {
    case 0:
        if(x<0 || x>=3200 || y<0 || y>=1200)
            return false;
        break;
    case 1:
        if(x<0 || x>=1600 || y<0 || y>=2400)
            return false;
        break;
    case 2:
        if(x<0 || x>=1600 || y<0 || y>=1200)
            return false;
        break;
    }

    return true;
}

// valid region(low up)
#define VR_CHECK(n,l,u) if(n<l || n>u)return -6;
// axis
#define XY_CHECK   if(!checkXY(theX,theY))return -3;
//if(theX<0 || theX>1599 || theY<0 || theY>2399)return -3;
// valid channel
#define VC_CHECK   if(VideoChannel!=1 && VideoChannel!=2)return -4;else VideoChannel--;
// is init
#define INIT_CHECK if(!bInit)return -5;//-3
#define INIT_PPI_CHECK if(!bInitPPI[VideoChannel-1])return -5;
#define INIT_AR_CHECK if(!bInitAR[VideoChannel-1])return -5;
#define INIT_MiniWin_CHECK if(!bInitMiniWin[VideoChannel-1])return -5;
#define INIT_TV_CHECK if(!bInitTV[VideoChannel-1])return -5;
#define INIT_PPIWH_CHECK if(theWidth!=theHeight)return -5;

//---------------------------------------------------------------------------
//---------------------------对外接口函数实现-------------------------------------
extern FILE* debugfp=fopen("save/dlldebug.txt","w");

Status ML_GVID_Init()
{
    if(bInit)  {
        qDebug("////    重复初始化 -1   ////");
        return -1;}//重复初始化

    if(debugfp==NULL) {
        qDebug("//// save/dlldebug.txt未能建立 -2  ////");
        return -2;}
    isOK=initPpiThread();//prepare the buffer and read data from E_CARD;
    if(checkini==false) {
        qDebug("//// 未能打开配置文件ini -3  ////");
        return -3;}
    if(checkradardata==false) {
        qDebug("////  未能打开本地雷达数据 -4  ////");
        return -4;}
        if (!isOK) {
            qDebug("//// 未能成功初始化initPpiThread（） -4  ////");
            return -4;}
    FILE * fpsys;
    if((fpsys=fopen("dat/sysdat","rb"))==NULL) {qDebug("//// 未能打开dat/sysdat本地文件 -5  ////");return -5;}
    fclose(fpsys);

    pthu_gvidwidget=new thu_gvidwidget;
//    pthu_gvidwidget->setallwin_hide();//since no new subwin,do not need to hide;
    bInit=true;
    qDebug("Initial OK!!!");
    return 1;
}
//------PPI------
 Status ML_GVID_OpenPPI(char VideoChannel,short theX, short theY , short theWidth, short theHeight)
 {

     INIT_CHECK
     VC_CHECK
     XY_CHECK
     INIT_PPIWH_CHECK
     VR_CHECK(theWidth,1,1200)
     VR_CHECK(theHeight,1,1200)
     if(VideoChannel==0)
     {
//         pthu_gvidwidget->deleteopenedwin0();
         pthu_gvidwidget->ppix=theX;pthu_gvidwidget->ppiy=theY;
         pthu_gvidwidget->ppiw=theWidth;pthu_gvidwidget->ppih=theHeight;
         pthu_gvidwidget->setwin_ppi();
//         pthu_gvidwidget->setwin_ppi(QRect(theX, theY, theWidth, theHeight));//set window size and the image recdst size
         pthu_gvidwidget->recreatewin0();
         pthu_gvidwidget->setwinshow0();
     }

     if(VideoChannel==1)
     {
//        pthu_gvidwidget->deleteopenedwin3();
         pthu_gvidwidget->ppi1x=theX;pthu_gvidwidget->ppi1y=theY;
         pthu_gvidwidget->ppi1w=theWidth;pthu_gvidwidget->ppi1h=theHeight;
         pthu_gvidwidget->setwin_ppi1();
//         pthu_gvidwidget->setwin_ppi1(QRect(theX, theY, theWidth, theHeight));//set window size and the image recdst size
         pthu_gvidwidget->recreatewin3();
         pthu_gvidwidget->setwinshow3();
     }
     bInitPPI[VideoChannel]=true;
     return 1;

 }
 Status ML_GVID_ClosePPI(char VideoChannel)
 {
     INIT_CHECK
     INIT_PPI_CHECK
     VC_CHECK
     if(VideoChannel==0)
     {
         //pthu_gvidwidget->setwinhide0();
         pthu_gvidwidget->deleteopenedwin0();
     }

     if(VideoChannel==1)
     {
        //pthu_gvidwidget->setwinhide3();
        pthu_gvidwidget->deleteopenedwin3();
     }
     bInitPPI[VideoChannel]=false;
     return 1;
 }

 Status ML_GVID_SetPPIXY(char VideoChannel ,short theX ,short theY)
 {
     INIT_CHECK
     INIT_PPI_CHECK
     VC_CHECK
     XY_CHECK

     if(VideoChannel==0)
     {
         pthu_gvidwidget->ppix=theX;pthu_gvidwidget->ppiy=theY;
         pthu_gvidwidget->setwin_ppi();//set window size and the image recdst size
         pthu_gvidwidget->deleteopenedwin0();
         pthu_gvidwidget->recreatewin0();
         pthu_gvidwidget->setwinshow0();
     }

     else
     {
         pthu_gvidwidget->ppi1x=theX;pthu_gvidwidget->ppi1y=theY;
         pthu_gvidwidget->setwin_ppi1();
         pthu_gvidwidget->deleteopenedwin3();
         pthu_gvidwidget->recreatewin3();
         pthu_gvidwidget->setwinshow3();
     }
 //    qDebug("ML_GVIDMW_SetPPIXY finished ");
     return 1;
 }

 Status ML_GVID_SetPPIWH(char VideoChannel ,short theWidth, short theHeight)
 {
     INIT_CHECK
     INIT_PPI_CHECK
     INIT_PPIWH_CHECK
     VC_CHECK
     VR_CHECK(theWidth,1,1200)
     VR_CHECK(theHeight,1,1200)


     if(VideoChannel==0)
     {
         pthu_gvidwidget->ppiw=theWidth;pthu_gvidwidget->ppih=theHeight;
         pthu_gvidwidget->setwin_ppi();//set window size and the image recdst size
         pthu_gvidwidget->deleteopenedwin0();
         pthu_gvidwidget->recreatewin0();
         pthu_gvidwidget->setwinshow0();
     }

     else
     {
         pthu_gvidwidget->ppi1w=theWidth;pthu_gvidwidget->ppi1h=theHeight;
         pthu_gvidwidget->setwin_ppi1();
         pthu_gvidwidget->deleteopenedwin3();
         pthu_gvidwidget->recreatewin3();
         pthu_gvidwidget->setwinshow3();
     }
//     qDebug("ML_GVIDMW_SetPPIHW finished ");

/*  //以下方法只能改变窗口尺寸而已 ，雷达画面不变
    if(VideoChannel==0)
     {
         pthu_gvidwidget->resizesubwin0(theWidth,theHeight);
     }

     else
     {
         pthu_gvidwidget->resizesubwin3(theWidth,theHeight);
     }
 /**/
     return 1;
 }

 Status ML_GVID_SetPPIMode(char VideoChannel, short theMode)
 {
    INIT_CHECK
    INIT_PPI_CHECK
    VC_CHECK
    VR_CHECK(theMode,0,3)

    bHmode=false;//add by shen
    if(theMode == 3)
//		theMode = 1;
    {//alternated by shen
        theMode=0;//用B显的方式来显示H显，相应调整ML_DVID_SendRadarPkg的数据azi数据替换为elev仰角信息。
        bHmode=true;//global flag

    }//end by shen
    pthu_gvidwidget->setppimode(VideoChannel,theMode,bHmode);
    return 1;
 }

 Status ML_GVID_SetPPICenter(char VideoChannel ,short theX ,short theY)
 {
    INIT_CHECK
    INIT_PPI_CHECK
    VC_CHECK
    VR_CHECK(theX,0,1199)
    VR_CHECK(theY,0,1199)
    pthu_gvidwidget->setppicenter(VideoChannel ,theX ,theY);
    return 1;
 }
 Status ML_GVID_SetPPIShipDir(char VideoChannel,float theShipDir)
 {
     INIT_CHECK
     INIT_PPI_CHECK
     VC_CHECK
    while(theShipDir<0)
             theShipDir+=360.0;
     while(theShipDir>=360)
         theShipDir -= 360.0;
     pthu_gvidwidget->setppishipdir(VideoChannel,theShipDir);
     return 1;
 }

 Status ML_GVID_SetPPIColor(char VideoChannel,unsigned int theColor)
 {
     INIT_CHECK
     VC_CHECK
     pthu_gvidwidget->setppicolor(VideoChannel,theColor);
     return 1;
 }

 Status ML_GVID_SetPPIScan(char VideoChannel,int theScan)
 {
     INIT_CHECK
     INIT_PPI_CHECK
     VC_CHECK
     VR_CHECK(theScan,0,1)
     pthu_gvidwidget->setppiscan(VideoChannel,theScan);
     return 1;
 }

 Status ML_GVID_SetPPILineColor(char VideoChannel,unsigned int theColor)
 {
     INIT_CHECK
     VC_CHECK
     pthu_gvidwidget->setppilinecolor(VideoChannel,theColor);
     return 1;


 }

 Status ML_GVID_FrostPPI(char VideoChannel,char theFrost)
 {
     INIT_CHECK
     INIT_PPI_CHECK
     VC_CHECK
     VR_CHECK(theFrost,0,1)
     pthu_gvidwidget->frostppi(VideoChannel,theFrost);
     return 1;

 }

 Status ML_GVID_SetPPIDist(char VideoChannel,short theDist)
 {

     INIT_CHECK
     VC_CHECK
     VR_CHECK(theDist,1,32767)
     pthu_gvidwidget->setppidist(VideoChannel,theDist);
     return 1;
 }

 Status ML_GVID_SetPPISwitch(char VideoChannel,short theSwitch)
 {

     INIT_CHECK
     INIT_PPI_CHECK
     VC_CHECK
     VR_CHECK(theSwitch,0,1)

     pthu_gvidwidget->setppiswitch(VideoChannel, theSwitch);
     return 1;
 }

 Status ML_GVID_SetPPIGate(char VideoChannel,char theGate)
 {
     INIT_CHECK
     VC_CHECK
     VR_CHECK(theGate,0,7)
     int gate;
     gate = theGate * 36;//分档

     pthu_gvidwidget->setppigate(VideoChannel,gate);
     return 1;
 }

 Status ML_GVID_SetPPITail(char VideoChannel,int theTail)
 {

     INIT_CHECK
     INIT_PPI_CHECK
     VC_CHECK
     if (theTail < 0 || theTail >65535 ) return -1;
     theTail = (double)theTail/256;
     theTail = 255 - theTail;
     pthu_gvidwidget->setppitail(VideoChannel,theTail);
     return 1;
 }

 Status ML_GVID_SetTailSwitch(char VideoChannel,short theSwitch)
 {
     INIT_CHECK
     INIT_PPI_CHECK
     VC_CHECK
     pthu_gvidwidget->settailswitch(VideoChannel,theSwitch);
     return 1;
 }

 Status ML_GVID_SetTailColor(char VideoChannel,unsigned int theColor)
 {
     INIT_CHECK
     VC_CHECK
     pthu_gvidwidget->settailcolor(VideoChannel,theColor);
     return 1;

 }

 Status ML_GVID_SetTailGate(char VideoChannel,unsigned char theGate)
 {
     INIT_CHECK
     INIT_PPI_CHECK
     VC_CHECK
     VR_CHECK(theGate,0,255)

     pthu_gvidwidget->settailgate(VideoChannel,theGate)  ;
     return 1;
 }

 Status ML_GVID_SetTailTime(char VideoChannel,int theTime)
 {
     INIT_CHECK
     INIT_PPI_CHECK
     VC_CHECK
     if(theTime<0||theTime>65535) return -1;
     theTime = (double)theTime/256;
     theTime= 255 - theTime;
     pthu_gvidwidget->settailtime(VideoChannel,theTime);
     return 1;


 }

 Status ML_GVID_SetPPITogether(short theSwitch)
 {
     INIT_CHECK
     VR_CHECK(theSwitch,0,1)

     if(theSwitch==1) PPItogether=true;
     else PPItogether=false;
     return 1;

 }

 Status ML_GVID_SetPPIColorTable(char VideoChannel,unsigned int* colorTable)
 {
     INIT_CHECK
     VC_CHECK

     unsigned int* colorTableT= new unsigned int[256];
     memcpy(colorTableT,colorTable,256*4);
     pthu_gvidwidget->setppicolortable(VideoChannel,colorTableT);
     delete colorTableT;
     return 1;
 }

 Status ML_GVID_ClearPPI(char VideoChannel)
 {
     INIT_CHECK
     INIT_PPI_CHECK
     VC_CHECK

     pthu_gvidwidget->clearppi(VideoChannel);
     return 1;

 }

 Status ML_GVID_SetPPIMoveMode(char VideoChannel, short theMode)
 {
     INIT_CHECK
     INIT_PPI_CHECK
     VC_CHECK
     VR_CHECK(theMode,0,1)

     pthu_gvidwidget->setppimovemode(VideoChannel,theMode);
     return 1;
 }



//------AR------
 Status ML_GVID_OpenAr(char VideoChannel,short theX, short theY , short theWidth, short theHeight)
 {
     INIT_CHECK
     VC_CHECK
     XY_CHECK
     VR_CHECK(theWidth,1,512)
     VR_CHECK(theHeight,1,512)
     if(VideoChannel==0)
     {
         pthu_gvidwidget->arx=theX;pthu_gvidwidget->ary=theY;
         pthu_gvidwidget->arw=theWidth;pthu_gvidwidget->arh=theHeight;
         pthu_gvidwidget->setwin_ar();
         pthu_gvidwidget->recreatewin2();
         pthu_gvidwidget->setwinshow2();
     }

     if(VideoChannel==1)
     {
         pthu_gvidwidget->ar1x=theX;pthu_gvidwidget->ar1y=theY;
         pthu_gvidwidget->ar1w=theWidth;pthu_gvidwidget->ar1h=theHeight;
         pthu_gvidwidget->setwin_ar1();
         pthu_gvidwidget->recreatewin5();
         pthu_gvidwidget->setwinshow5();
     }
     bInitAR[VideoChannel]=true;
     return 1;

 }

 Status ML_GVID_CloseAr(char VideoChannel)
 {
     INIT_CHECK
     INIT_AR_CHECK
     VC_CHECK
     if(VideoChannel==0)
     {
         pthu_gvidwidget->deleteopenedwin2();
     }

     if(VideoChannel==1)
     {
        pthu_gvidwidget->deleteopenedwin5();
     }

     bInitAR[VideoChannel]=false;
     return 1;
 }

 Status ML_GVID_SetArXY(char VideoChannel ,short theX ,short theY)
 {
     INIT_CHECK
     INIT_AR_CHECK
     VC_CHECK
     XY_CHECK

     if(VideoChannel==0)
     {
         pthu_gvidwidget->arx=theX;pthu_gvidwidget->ary=theY;
         pthu_gvidwidget->setwin_ar();//set window size and the image recdst size
         pthu_gvidwidget->deleteopenedwin2();
         pthu_gvidwidget->recreatewin2();
         pthu_gvidwidget->setwinshow2();
     }

     else
     {
         pthu_gvidwidget->ar1x=theX;pthu_gvidwidget->ar1y=theY;
         pthu_gvidwidget->setwin_ar1();
         pthu_gvidwidget->deleteopenedwin5();
         pthu_gvidwidget->recreatewin5();
         pthu_gvidwidget->setwinshow5();
     }
      return 1;


 }

 Status ML_GVID_SetArWH(char VideoChannel ,short theWidth, short theHeight)
 {
     INIT_CHECK
     INIT_AR_CHECK
     VC_CHECK
     VR_CHECK(theWidth,1,512)
     VR_CHECK(theHeight,1,512)


     if(VideoChannel==0)
     {
         pthu_gvidwidget->arw=theWidth;pthu_gvidwidget->arh=theHeight;
         pthu_gvidwidget->setwin_ar();//set window size and the image recdst size
         pthu_gvidwidget->deleteopenedwin2();
         pthu_gvidwidget->recreatewin2();
         pthu_gvidwidget->setwinshow2();
     }

     else
     {
         pthu_gvidwidget->ar1w=theWidth;pthu_gvidwidget->ar1h=theHeight;
         pthu_gvidwidget->setwin_ar1();
         pthu_gvidwidget->deleteopenedwin5();
         pthu_gvidwidget->recreatewin5();
         pthu_gvidwidget->setwinshow5();
     }
     return 1;

 }

 Status ML_GVID_SetArGate (char VideoChannel ,char theGate)
 {
     INIT_CHECK
     INIT_AR_CHECK
     VC_CHECK
     VR_CHECK(theGate,0,7)
     int Gate= theGate *35;
     pthu_gvidwidget->setargate(VideoChannel,Gate);

     return 1;

 }

 Status ML_GVID_SetArDist (char VideoChannel ,short theDist)
 {
     INIT_CHECK
     VC_CHECK
     VR_CHECK(theDist,1,32767)
     pthu_gvidwidget->setardist(VideoChannel,theDist);
     return 1;
 }

 Status ML_GVID_SetArColor(char VideoChannel,unsigned int theColor)
 {
     INIT_CHECK
     INIT_AR_CHECK
     VC_CHECK

     pthu_gvidwidget->setarcolor(VideoChannel,theColor);
     return 1;
 }

 Status ML_GVID_SetArTail(char VideoChannel,int theTail)
 {
     INIT_CHECK
     INIT_AR_CHECK
     VC_CHECK
     VR_CHECK(theTail,0,65535)

    if(VideoChannel==0)
     {

         if(theTail<=1000)
         pthu_gvidwidget->getsubwin2()->setardecayby(128);
         else if(theTail<=2000)
             pthu_gvidwidget->getsubwin2()->setardecayby(84);
         else if(theTail<=3000)
             pthu_gvidwidget->getsubwin2()->setardecayby(60);
         else if(theTail<=4000)
             pthu_gvidwidget->getsubwin2()->setardecayby(50);
         else if(theTail<=5000)
             pthu_gvidwidget->getsubwin2()->setardecayby(46);
         else if(theTail<=6000)
             pthu_gvidwidget->getsubwin2()->setardecayby(42);
         else if(theTail<=7000)
             pthu_gvidwidget->getsubwin2()->setardecayby(38);
         else if(theTail<=8000)
             pthu_gvidwidget->getsubwin2()->setardecayby(34);
         else if(theTail<=10000)
             pthu_gvidwidget->getsubwin2()->setardecayby(30);
         else if(theTail<=8192*2)
             pthu_gvidwidget->getsubwin2()->setardecayby(26);
         else if(theTail<=8192*2)
             pthu_gvidwidget->getsubwin2()->setardecayby(20);
         else if(theTail<=8192*3)
             pthu_gvidwidget->getsubwin2()->setardecayby(16);
         else if(theTail<=8192*4)
             pthu_gvidwidget->getsubwin2()->setardecayby(8);
         else if(theTail<=8192*5)
             pthu_gvidwidget->getsubwin2()->setardecayby(4);
         else if(theTail<=8192*6)
             pthu_gvidwidget->getsubwin2()->setardecayby(2);
         else if(theTail<=8192*7)
             pthu_gvidwidget->getsubwin2()->setardecayby(1);
         else if(theTail<=8192*8)
             pthu_gvidwidget->getsubwin2()->setardecayby(0);
         else pthu_gvidwidget->getsubwin2()->setardecayby(16);
         /**/
        // pthu_gvidwidget->getsubwin2()->setardecayby(255-theTail/256);

     }
     if(VideoChannel==1)
      {
         if(theTail<=1000)
         pthu_gvidwidget->getsubwin5()->setardecayby(128);
         else if(theTail<=2000)
             pthu_gvidwidget->getsubwin5()->setardecayby(84);
         else if(theTail<=3000)
             pthu_gvidwidget->getsubwin5()->setardecayby(60);
         else if(theTail<=4000)
             pthu_gvidwidget->getsubwin5()->setardecayby(50);
         else if(theTail<=5000)
             pthu_gvidwidget->getsubwin5()->setardecayby(46);
         else if(theTail<=6000)
             pthu_gvidwidget->getsubwin5()->setardecayby(42);
         else if(theTail<=7000)
             pthu_gvidwidget->getsubwin5()->setardecayby(38);
         else if(theTail<=8000)
             pthu_gvidwidget->getsubwin5()->setardecayby(34);
         else if(theTail<=10000)
             pthu_gvidwidget->getsubwin5()->setardecayby(30);
         else if(theTail<=8192*2)
             pthu_gvidwidget->getsubwin5()->setardecayby(26);
         else if(theTail<=8192*2)
             pthu_gvidwidget->getsubwin5()->setardecayby(20);
         else if(theTail<=8192*3)
             pthu_gvidwidget->getsubwin5()->setardecayby(16);
         else if(theTail<=8192*4)
             pthu_gvidwidget->getsubwin5()->setardecayby(8);
         else if(theTail<=8192*5)
             pthu_gvidwidget->getsubwin5()->setardecayby(4);
         else if(theTail<=8192*6)
             pthu_gvidwidget->getsubwin5()->setardecayby(2);
         else if(theTail<=8192*7)
             pthu_gvidwidget->getsubwin5()->setardecayby(1);
         else if(theTail<=8192*8)
             pthu_gvidwidget->getsubwin5()->setardecayby(0);
         else pthu_gvidwidget->getsubwin5()->setardecayby(16);
          /**/
         //pthu_gvidwidget->getsubwin5()->setardecayby(255-theTail/256);

      }
     return 1;
 }

 Status ML_GVID_SetArBackgroundColor(char VideoChannel,unsigned int theColor)
 {
     INIT_CHECK
     INIT_AR_CHECK
     VC_CHECK
     pthu_gvidwidget->setarbackgroundcolor(VideoChannel,theColor);

     if(VideoChannel==0)
     {
         pthu_gvidwidget->deleteopenedwin2();
         pthu_gvidwidget->settmparbackcolor1();
         pthu_gvidwidget->recreatewin2();
         pthu_gvidwidget->setwinshow2();
     }
     if(VideoChannel==1)
     {
         pthu_gvidwidget->deleteopenedwin5();
         pthu_gvidwidget->settmparbackcolor2();
         pthu_gvidwidget->recreatewin5();
         pthu_gvidwidget->setwinshow5();
     }
     return 1;

 }



//------MiniWin------
 Status ML_GVID_OpenMiniWin(char VideoChannel,short theX, short theY , short theWidth, short theHeight)
 {
     INIT_CHECK
     VC_CHECK //这里VideoChannel已经被减一了
     XY_CHECK
     VR_CHECK(theWidth,1,1200)
     VR_CHECK(theHeight,1,1200)
     if(VideoChannel==0)
     {
         pthu_gvidwidget->minix=theX;pthu_gvidwidget->miniy=theY;
         pthu_gvidwidget->miniw=theWidth;pthu_gvidwidget->minih=theHeight;
         pthu_gvidwidget->setwin_mini();
         pthu_gvidwidget->recreatewin1();
         pthu_gvidwidget->setwinshow1();
     }

     if(VideoChannel==1)
     {
         pthu_gvidwidget->mini1x=theX;pthu_gvidwidget->mini1y=theY;
         pthu_gvidwidget->mini1w=theWidth;pthu_gvidwidget->mini1h=theHeight;
         pthu_gvidwidget->setwin_mini1();
         pthu_gvidwidget->recreatewin4();
         pthu_gvidwidget->setwinshow4();
     }
     bInitMiniWin[VideoChannel]=true;
     return 1;


 }

 Status ML_GVID_CloseMiniWin(char VideoChannel)
 {
     INIT_CHECK
     INIT_MiniWin_CHECK
     VC_CHECK

     if(VideoChannel==0)
     {
         pthu_gvidwidget->deleteopenedwin1();
     }

     if(VideoChannel==1)
     {
        pthu_gvidwidget->deleteopenedwin4();
     }

     bInitMiniWin[VideoChannel]=false;
     return 1;
 }

 Status ML_GVID_SetMiniWinXY(char VideoChannel ,short theX ,short theY)
 {
     INIT_CHECK
     INIT_MiniWin_CHECK
     VC_CHECK
     XY_CHECK

     if(VideoChannel==0)
     {
         pthu_gvidwidget->minix=theX;pthu_gvidwidget->miniy=theY;
         pthu_gvidwidget->setwin_mini();//set window size and the image recdst size
         pthu_gvidwidget->deleteopenedwin1();
         pthu_gvidwidget->recreatewin1();
         pthu_gvidwidget->setwinshow1();
     }

     else
     {
         pthu_gvidwidget->mini1x=theX;pthu_gvidwidget->mini1y=theY;
         pthu_gvidwidget->setwin_mini1();
         pthu_gvidwidget->deleteopenedwin4();
         pthu_gvidwidget->recreatewin4();
         pthu_gvidwidget->setwinshow4();
     }
      return 1;

 }

 Status ML_GVID_SetMiniWinWH(char VideoChannel ,short theWidth, short theHeight)
 {
     INIT_CHECK
     INIT_MiniWin_CHECK
     VC_CHECK
     VR_CHECK(theWidth,1,1200)
     VR_CHECK(theHeight,1,1200)

     if(VideoChannel==0)
     {
         pthu_gvidwidget->miniw=theWidth;pthu_gvidwidget->minih=theHeight;
         pthu_gvidwidget->setwin_mini();//set window size and the image recdst size
         pthu_gvidwidget->deleteopenedwin1();
         pthu_gvidwidget->recreatewin1();
         pthu_gvidwidget->setwinshow1();
     }

     else
     {
         pthu_gvidwidget->mini1w=theWidth;pthu_gvidwidget->mini1h=theHeight;
         pthu_gvidwidget->setwin_mini1();
         pthu_gvidwidget->deleteopenedwin4();
         pthu_gvidwidget->recreatewin4();
         pthu_gvidwidget->setwinshow4();
     }
      return 1;
 }

 Status ML_GVID_SetMiniWinMode(char VideoChannel, short theMode)
 {
     INIT_CHECK
     INIT_PPI_CHECK
     INIT_MiniWin_CHECK
     VC_CHECK
     VR_CHECK(theMode,0,1)
     pthu_gvidwidget->setminiwinmode(VideoChannel,theMode);
     return 1;
 }

 Status ML_GVID_SetMiniWinColor(char VideoChannel,unsigned int theColor)
 {
     INIT_CHECK
     INIT_PPI_CHECK
     INIT_MiniWin_CHECK
     VC_CHECK
     pthu_gvidwidget->setminiwincolor(VideoChannel,theColor);
     return 1;

 }

 Status ML_GVID_SetMiniWinDistDir(char VideoChannel ,short theDistance ,float theDirection)
 {
     INIT_CHECK
     VC_CHECK
     VR_CHECK(theDistance,0,300)
     while(theDirection<0)
     theDirection += 360.0;
     while(theDirection>=360)
     theDirection -= 360.0;

     pthu_gvidwidget->setminiwindistdir(VideoChannel,theDistance,theDirection);
     return 1;

 }

 Status ML_GVID_SetMiniWinScale(char VideoChannel,int theScale)
 {
     INIT_CHECK
     VR_CHECK(theScale,1,8)
     VC_CHECK

     pthu_gvidwidget->setminiwinscale(VideoChannel,theScale);
     return 1;

 }

 Status ML_GVID_SetMiniWinColorTable(char VideoChannel,unsigned int* colorTable)
 {
     INIT_CHECK
     INIT_PPI_CHECK
     INIT_MiniWin_CHECK
     VC_CHECK

     unsigned int* colorTableT= new unsigned int[256];
     memcpy(colorTableT,colorTable,256*4);
     pthu_gvidwidget->setminiwincolortable(VideoChannel,colorTableT);
     delete colorTableT;
     return 1;

 }
//------RADAR-----
 Status ML_GVID_SetScanMode(char VideoChannel, short theScanMode)
 {
     INIT_CHECK
     INIT_PPI_CHECK
     INIT_MiniWin_CHECK
     VC_CHECK
     VR_CHECK(theScanMode,0,4)
     pthu_gvidwidget->setscanmode(VideoChannel,theScanMode);

     return 1;

 }

 Status ML_GVID_SendRadarPkg(char VideoChannel, int pkgNum, ML_GVIDMW_RadarPkg_t *pkgBuf)
 {
     INIT_CHECK
     VC_CHECK

     bpkg=true;
     return pthu_gvidwidget->ML_GVID_SendRadarPkg(VideoChannel,pkgNum,pkgBuf,bHmode);

 }

//------TV------
 Status ML_GVID_OpenTV (char VideoChannel ,short theX, short theY,short theWidth,short theHeight);
 Status ML_GVID_CloseTV (char VideoChannel );
 Status ML_GVID_SetTVXY(char VideoChannel ,short theX, short theY);
 Status ML_GVID_SetTVWH(char VideoChannel ,short theWidth, short theHeight);
 Status ML_GVID_FrostTV(char VideoChannel,char theFrost);
 Status ML_GVID_SetTVBright(char VideoChannel,unsigned char theBright);
 Status ML_GVID_SetTVContrast(char VideoChannel,unsigned char theContrast);
 Status ML_GVID_SetTVColor(char VideoChannel,unsigned char theColor);

 int ML_GVID_SetPMLayerColors(char VideoChannel, char theMode, int theNum, unsigned int *colors);
 int ML_GVID_SetATLayerColorKey(char VideoChannel, unsigned int colorKey);

//--------------------------------------------------------------------------------
//------------------THU_GVIDWIDGET------------------------------------------------

thu_gvidwidget::thu_gvidwidget(QWidget *parent)
    : QWidget(parent),//,QObject(parent)
      ppiw(SURF_CM_WIDTH),ppih(SURF_CM_HEIGHT),miniw(SURF_MINI_WIDTH),minih(SURF_MINI_HEIGHT),arw(SURF_AR_WIDTH),arh(SURF_AR_HEIGHT),
      ppi1w(SURF_CM_WIDTH),ppi1h(SURF_CM_HEIGHT),mini1w(SURF_MINI_WIDTH),mini1h(SURF_MINI_HEIGHT),ar1w(SURF_AR_WIDTH),ar1h(SURF_AR_HEIGHT),
      ppix(0),ppiy(0),minix(0),miniy(0),arx(0),ary(0),ppi1x(0),ppi1y(0),mini1x(0),mini1y(0),ar1x(0),ar1y(0),
      recdst_ppi(QRect(0, 0,ppiw, ppih)),
      recdst_mini(QRect(0, 0,miniw,minih)),
      recdst_ar(QRect(0, 0,arw,arh)),
      recdst_ppi1(recdst_ppi),recdst_mini1(recdst_mini),recdst_ar1(recdst_ar),
      win_ppi(QRect(0, 0, ppiw, ppih)),
      win_mini(QRect(ppiw+interwin,0,miniw,minih)),
      win_ar(QRect(ppiw+interwin,minih+interwin,arw,arh)),
      win_ppi1(QRect(0, 0, ppiw, ppih)),
      win_mini1(QRect(ppiw+interwin,0,miniw,minih)),
      win_ar1(QRect(ppiw+interwin,minih+interwin,arw,arh)),
      myserver(NULL)//初始化
{

//    after initPpiThread();//prepare the buffer and read data from E_CARD;
//    if (!isOK) exit(-5);//if open datapool file fail， exit
    for(int i=0;i<6;i++)
        bwin[i]=false;
    memset(ch1,0,SURF_CM_WIDTH*SURF_CM_HEIGHT*sizeof(int));//initialize data array
    memset(ch11,0,SURF_CM_WIDTH*SURF_CM_HEIGHT*sizeof(int));
    memset(ch2,0,SURF_AR_WIDTH*SURF_AR_HEIGHT*sizeof(int));
    memset(ch21,0,SURF_AR_WIDTH*SURF_AR_HEIGHT*sizeof(int));
    memset(ch3,0,SURF_MINI_WIDTH*SURF_MINI_HEIGHT*sizeof(int));
    memset(ch31,0,SURF_MINI_WIDTH*SURF_MINI_HEIGHT*sizeof(int));

    pmywidget[0]=new MyWidget(ch1,SURF_CM_WIDTH*4,ch2,SURF_AR_WIDTH*4,ch3,SURF_MINI_WIDTH*4);
    pmywidget[1]=new MyWidget(ch11,SURF_CM_WIDTH*4,ch21,SURF_AR_WIDTH*4,ch31 ,SURF_MINI_WIDTH*4);

    tmparbackcolor=pmywidget[0]->ar->getArBackgroundColor();
    tmparbackcolor1=pmywidget[1]->ar->getArBackgroundColor();


    pmywidget[0]->yh->setTailSwitch(false);// default set true,the target colored red
    pmywidget[0]->yh->setYhLen(YH_NUM);//default 600*50;the larger,the tail shorter;

    pmywidget[1]->yh->setTailSwitch(false);// default set true,the target colored red
    pmywidget[1]->yh->setYhLen(YH_NUM);//default 600*50;the larger,the tail shorter;

    uch1=(uchar*) ch1;//PPI fb
    QImage tmpimg1(uch1,SURF_CM_WIDTH,SURF_CM_HEIGHT,QImage::Format_RGB32);//将要绘制的图像存为QImage型
    image_ppi=tmpimg1;
    uch3=(uchar*) ch3;//MINI fb
    QImage tmpimg3(uch3,SURF_MINI_WIDTH,SURF_MINI_HEIGHT,QImage::Format_RGB32);
    image_mini= tmpimg3;
    uch2=(uchar*) ch2;//AR fb
    QImage tmpimg2(uch2,SURF_AR_WIDTH,SURF_AR_HEIGHT,QImage::Format_RGB32);
    image_ar=tmpimg2;

    uch11=(uchar*) ch11;//PPI fb
    QImage tmpimg11(uch11,SURF_CM_WIDTH,SURF_CM_HEIGHT,QImage::Format_RGB32);//将要绘制的图像存为QImage型
    image_ppi1=tmpimg11;
    uch31=(uchar*) ch31;//MINI fb
    QImage tmpimg31(uch31,SURF_MINI_WIDTH,SURF_MINI_HEIGHT,QImage::Format_RGB32);
    image_mini1= tmpimg31;
    uch21=(uchar*) ch21;//AR fb
    QImage tmpimg21(uch21,SURF_AR_WIDTH,SURF_AR_HEIGHT,QImage::Format_RGB32);
    image_ar1=tmpimg21;

    pmywidget[0]->ppi->setWinOrigin(600,200);//set the mini window original position of the PPI window.
    pmywidget[0]->ppi->bFirstInfo=true;
    pmywidget[0]->ppi->setWindowDisp(true);//set to show the mini window
    pmywidget[0]->yh->setYhWin(true);
    pmywidget[0]->ar->setAR(true);  //set to show ar window
    pmywidget[1]->ppi->setWinOrigin(600,200);//set the mini window original position of the PPI window.
    pmywidget[1]->ppi->bFirstInfo=true;
    pmywidget[1]->ppi->setWindowDisp(true);//set to show the mini window
    pmywidget[1]->yh->setYhWin(true);
    pmywidget[1]->ar->setAR(true);  //set to show ar window


    /*//just for test1 begin

    //-------LARGE SCREEN---------//

    setwin_ppi(QRect(0, 0, 800, 800));//set window size and the image recdst size
    setwin_mini(QRect(0,800+interwin,miniw,minih));
    setwin_ar(QRect(miniw+interwin,800+interwin,arw,arh));
    setwin_ppi1(QRect(800+interwin, 0, 800, 800));
    setwin_mini1(QRect(800+interwin,800+interwin,miniw,minih));
    setwin_ar1(QRect(miniw+800+2*interwin,800+interwin,arw,arh));
    /**///just for test end
/*
    //just for test2 begin
    //--------SMALL SCREEN---------//

    setwin_ppi(QRect(0, 0, 500, 500));//set window size and the image recdst size
    setwin_mini(QRect(0,500+interwin,miniw/2,minih/2));
    setwin_ar(QRect(miniw/2+interwin,500+interwin,arw/2,arh/2));
    setwin_ppi1(QRect(500+interwin, 0, 500, 500));
    setwin_mini1(QRect(500+interwin,500+interwin,miniw/2,minih/2));
    setwin_ar1(QRect(miniw/2+500+2*interwin,500+interwin,arw/2,arh/2));
    /**///just for test end

//    pmywidget[0]->ML_GVID_SetPPIMode(-1,1,1);// 1 is channel 1,0 is mode;
//    pmywidget[0]->ML_GVID_SetPPICenter(-1,1,100,800);
//    pmywidget[0]->ML_GVID_SetPPIShipDir(-1,1,180);
//    pmywidget[0]->ML_GVID_SetPPIColor(-1,1,0xff000000);//color 0xrrggbb00
//    pmywidget[0]->ML_GVID_SetPPIScan(-1,1,0);
//    pmywidget[0]->ML_GVID_SetPPILineColor(1,1,0xff000000);
//    pmywidget[0]->ML_GVID_SetPPIFrost(-1,1,0);
//    pmywidget[0]->ML_GVID_SetPPIDist(-1,1,32576);
//    pmywidget[0]->ML_GVID_SetPPISwitch(-1,1,0);
//    pmywidget[0]->ML_GVID_SetPPIGate(-1,1,1);
//    pmywidget[0]->ML_GVID_SetPPITail(-1,1,500);
//    pmywidget[0]->ML_GVID_SetTailSwitch(-1,1,1);
//    pmywidget[0]->ML_GVID_SetTailColor(-1,1,0xff00ff00);
//    pmywidget[0]->ML_GVID_SetTailGate(-1,1,100);
//    pmywidget[0]->ML_GVID_SetTailTime(-1,1,300);

//    if(PPItogether)
    {
//       recdst_ppi1=(QRect(0, 0, 0, 0));
    }
/*//don't need to new the win when MI_GVIDMW_initial()
    psubwin[0]=new subwidget(recdst_ppi,&image_ppi);
    psubwin[1]=new subwidget(recdst_mini,&image_mini);
    psubwin[2]=new subwidget(recdst_ar,&image_ar,true,tmparbackcolor);
    psubwin[3]=new subwidget(recdst_ppi1,&image_ppi1);
    psubwin[4]=new subwidget(recdst_mini1,&image_mini1);
    psubwin[5]=new subwidget(recdst_ar1,&image_ar1,true,tmparbackcolor1);
    for(int i=0;i<6;i++)
        bwin[i]=true;

    psubwin[0]->setGeometry(win_ppi);
    psubwin[1]->setGeometry(win_mini);
    psubwin[2]->setGeometry(win_ar);
    psubwin[3]->setGeometry(win_ppi1);
    psubwin[4]->setGeometry(win_mini1);
    psubwin[5]->setGeometry(win_ar1);

    psubwin[0]->setWindowTitle("PPI_1");   psubwin[0]->setWindowFlags(Qt::FramelessWindowHint);    psubwin[0]->show();
    psubwin[1]->setWindowTitle("MINI_1");  psubwin[1]->setWindowFlags(Qt::FramelessWindowHint);    psubwin[1]->show();
    psubwin[2]->setWindowTitle("AR_1");    psubwin[2]->setWindowFlags(Qt::FramelessWindowHint);    psubwin[2]->show();
    psubwin[3]->setWindowTitle("PPI_2");   psubwin[3]->setWindowFlags(Qt::FramelessWindowHint);    psubwin[3]->show();
    psubwin[4]->setWindowTitle("MINI_2");  psubwin[4]->setWindowFlags(Qt::FramelessWindowHint);    psubwin[4]->show();
    psubwin[5]->setWindowTitle("AR_2");    psubwin[5]->setWindowFlags(Qt::FramelessWindowHint);    psubwin[5]->show();
/**/
/*  //an example to set window background color
    QPalette p=psubwin[0]->palette();
    p.setColor(QPalette::Window,QColor(0,0,0));
    psubwin[0]->setPalette(p);
/**/
   if(blocal)
   {
       QTimer *timer_update = new QTimer(this);//update local radar data
       connect(timer_update, SIGNAL(timeout()), this, SLOT(localdataup()));
       timer_update->start(20);//** ms 后调用update，重新执行paintEvent；
   }
   else
   {

       myserver=new UDPserver(dispbufnet1,dispbufnet2);
       connect(this->myserver, SIGNAL(receivedfinished1(char,char)), this, SLOT(netdataup1(char,char)));//char 参数为网络一次接收到的数据包数量
       connect(this->myserver, SIGNAL(receivedfinished2(char,char)), this, SLOT(netdataup2(char,char)));//char 参数为网络一次接收到的数据包数量
       QTimer *timer_yh = new QTimer(this);//update local radar data
       connect(timer_yh, SIGNAL(timeout()), this, SLOT(ppi_yh_timer()));
       timer_yh->start(20);//** ms 后调用update，重新执行paintEvent；
   }

//   QTimer *timer_ch = new QTimer(this);
//   connect(timer_ch, SIGNAL(timeout()), this, SLOT(change()));
//   timer_ch->start(2000);
/*
    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this->psubwin[0], SLOT(update()));
    connect(timer, SIGNAL(timeout()), this->psubwin[1], SLOT(update()));
    connect(timer, SIGNAL(timeout()), this->psubwin[2], SLOT(update()));
    connect(timer, SIGNAL(timeout()), this->psubwin[3], SLOT(update()));
    connect(timer, SIGNAL(timeout()), this->psubwin[4], SLOT(update()));
    connect(timer, SIGNAL(timeout()), this->psubwin[5], SLOT(update()));
    timer->start(25);//** ms 后调用update，重新执行paintEvent；
/**///定时器操作可以移到各个subwin中操作

 }
void thu_gvidwidget::recreatewin0()
{
    if(bwin[0])
        deleteopenedwin0();
    psubwin[0]=new subwidget(recdst_ppi,&image_ppi);
    //psubwin[0]=new subwidget(QRect(ppix,ppiy,ppiw,ppih),&image_ppi);
    bwin[0]=true   ;
    psubwin[0]->setGeometry(win_ppi);
    psubwin[0]->show();
    psubwin[0]->setWindowTitle("PPI_1"); psubwin[0]->setWindowFlags(Qt::FramelessWindowHint);
}
void thu_gvidwidget::recreatewin1()
{
    if(bwin[1])
        deleteopenedwin1();
    psubwin[1]=new subwidget(recdst_mini,&image_mini);
    bwin[1]=true   ;
    psubwin[1]->setGeometry(win_mini);
    psubwin[1]->show();
    psubwin[1]->setWindowTitle("MINI_1");   psubwin[1]->setWindowFlags(Qt::FramelessWindowHint);
}
void thu_gvidwidget::recreatewin2()
{
    if(bwin[2])
       deleteopenedwin2();
    psubwin[2]=new subwidget(recdst_ar,&image_ar,true,tmparbackcolor);
    bwin[2]=true   ;
    psubwin[2]->setGeometry(win_ar);
    psubwin[2]->show();
    psubwin[2]->setWindowTitle("AR_1");   psubwin[2]->setWindowFlags(Qt::FramelessWindowHint);
}
void thu_gvidwidget::recreatewin3()
{
    if(bwin[3])
        deleteopenedwin3();
    psubwin[3]=new subwidget(recdst_ppi1,&image_ppi1);
    bwin[3]=true   ;
    psubwin[3]->setGeometry(win_ppi1);
    psubwin[3]->show();
    psubwin[3]->setWindowTitle("PPI_2");   psubwin[3]->setWindowFlags(Qt::FramelessWindowHint);
}
void thu_gvidwidget::recreatewin4()
{
    if(bwin[4])
        deleteopenedwin4();
    psubwin[4]=new subwidget(recdst_mini1,&image_mini1);
    bwin[4]=true   ;
    psubwin[4]->setGeometry(win_mini1);
    psubwin[4]->show();
    psubwin[4]->setWindowTitle("MINI_2");   psubwin[4]->setWindowFlags(Qt::FramelessWindowHint);
}
void thu_gvidwidget::recreatewin5()
{
    if(bwin[5])
        deleteopenedwin5();
    psubwin[5]=new subwidget(recdst_ar1,&image_ar1,true,tmparbackcolor1);
    bwin[5]=true   ;
    psubwin[5]->setGeometry(win_ar1);
    psubwin[5]->show();
    psubwin[5]->setWindowTitle("AR_2");   psubwin[5]->setWindowFlags(Qt::FramelessWindowHint);
}


void thu_gvidwidget::localdataup()
{
    pkgTimerHandler(pmywidget);//for local

    pmywidget[0]->yh->yh();//try to add yh to PPI
    pmywidget[1]->yh->yh();//try to add yh to PPI
}
void thu_gvidwidget::netdataup1(char pkgnum,char ch)
{

    pkgTimerHandler_net(pmywidget,pkgnum,ch);//for net

//    pmywidget[0]->yh->yh();//try to add yh to PPI

}
void thu_gvidwidget::netdataup2(char pkgnum,char ch)
{

    pkgTimerHandler_net(pmywidget,pkgnum,ch);//for net
//    pmywidget[1]->yh->yh();//try to add yh to PPI
//如果此处yh操作，理论上，没有收到网络数据就不会进行yh操作，所以停止发送后屏幕上最后会保留断网前的数据
}
void thu_gvidwidget::change()//just for test
{
    if(!bwin[0]) exit(0);
    delete psubwin[0];
    recdst_ppi=QRect(0,0,(recdst_ppi.width()-10),(recdst_ppi.height()-10));
    psubwin[0]=new subwidget(recdst_ppi,&image_ppi);
    psubwin[0]->show();
}
void thu_gvidwidget::ppi_yh_timer()//just for test
{
   pmywidget[0]->yh->yh();//try to add yh to PPI
   pmywidget[1]->yh->yh();//try to add yh to PPI
}

thu_gvidwidget::~thu_gvidwidget()
{
    delete[] pmywidget;
    delete[] psubwin;
    if(!blocal)
    delete myserver;

}
