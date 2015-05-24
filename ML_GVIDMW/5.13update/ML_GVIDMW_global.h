#ifndef ML_GVIDMW_GLOBAL_H
#define ML_GVIDMW_GLOBAL_H

#include <QtCore/qglobal.h>
#include "ml_gvidmw.h"
#include <QtGui/QMainWindow>
#include <QWidget>
#include <mywidget.h>
#include <QtGui>
#include "datapool.h"
#include "subwidget.h"
#include "udpserver.h"
#include  "ML_GVIDMW_sys.h"

#include <stdio.h>
#include "ppidef.h"

static s_ppi_video_for_disp * dispbuf1;
static s_ppi_video_for_disp * dispbuf2;
static s_ppi_video_for_disp *dispbufnet1;//=new s_ppi_video_for_disp[50];//global variant
static s_ppi_video_for_disp *dispbufnet2;//=new s_ppi_video_for_disp[50];//global variant

static FILE * rpkgfp;
static FILE * hpkgfp;
static bool radarOpenState[2]={true,true};
static bool TVopenState[2] = {false,false};

static bool blocal=true;
static bool PPItogether=false;
static qint32 aziLine[2];
static bool checkini=true;
static bool checkradardata=true;
static bool isOK=true;
static short scanMode[2]={0,0};

static void *ch1=new unsigned int[1200*1200];
static void *ch2=new unsigned int[360*300];
static void *ch3=new unsigned int[340*340];
static void *ch11=new unsigned int[1200*1200];
static void *ch21=new unsigned int[360*300];
static void *ch31=new unsigned int[340*340];

#define _TREADBUFNUM 3600*7
#define NEWPKGNUM 15//control the scan speed
extern bool bHmode;//声明全局变量
extern bool bpkg;
//***************************************************//
//ready the local radar1 data

static bool initPpiThread()
{
    FILE *inifile;
    if( (inifile=fopen("dat/sysconfig.ini","rb"))==NULL )
    {
        printf("error open ini file\n");
        checkini=false;
        isOK=false;
    }

    QSettings settings("dat/sysconfig.ini", QSettings::IniFormat);
    bool btmp=settings.value("radar/islocalsource").toBool();
    if(btmp) blocal=true;
    else blocal=false;

    PPItogether=false;

    if(blocal)
    {
        if( (rpkgfp=fopen("save/radar1","rb"))==NULL )//C:\\Qt\\qtcreator-2.4.1\\QTcreatpro1\\save\\radar1
        {
            printf("error open pkg file\n");
            checkradardata=false;
            isOK=false;
        }
        else
            isOK=true;

        if( (hpkgfp=fopen("save/radar2","rb"))==NULL ){
            printf("error open pkg file\n");
            checkradardata=false;
            isOK=false;
        }
        else
            isOK=true;

        if(isOK==false)return false;

        dispbuf1 = new s_ppi_video_for_disp[_TREADBUFNUM];
        if(dispbuf1==NULL)isOK=false;
        fread(dispbuf1,sizeof(s_ppi_video_for_disp),_TREADBUFNUM,rpkgfp);

        dispbuf2 = new s_ppi_video_for_disp[_TREADBUFNUM];
        if(dispbuf2==NULL)isOK=false;
        fread(dispbuf2,sizeof(s_ppi_video_for_disp),_TREADBUFNUM,hpkgfp);

    }
    else
    {
        dispbufnet1=new s_ppi_video_for_disp[100];//global variant
        if(dispbufnet1==NULL)isOK=false;
        dispbufnet2=new s_ppi_video_for_disp[100];//global variant
        if(dispbufnet2==NULL)isOK=false;
    }




    //	netCom.CreateServer();

    return isOK;
}

static void freePpiThread()
{
    delete[] ch1;
    delete[] ch2;
    delete[] ch3;
    delete[] ch11;
    delete[] ch21;
    delete[] ch31;

    if(blocal)
    {
        if(rpkgfp)fclose(rpkgfp);
        if(hpkgfp)fclose(hpkgfp);

        delete dispbuf1;
        delete dispbuf2;
    }
    else
    {
        delete dispbufnet1;
        delete dispbufnet2;
    }

}

static void dispUpdate(int channel,s_ppi_video_for_disp *dispdat,MyWidget*  pmywidget)
{


    MyWidget *wd = pmywidget;//[channel];
/*
    if(wd->ppi->bFirstInfo == true)
    {

        wd->ar ->updateData(dispdat);
        wd->ar->ARDraw();
        wd->ppi->ppiDraw(dispdat);
        if(wd->ppi->isScanLine() && wd->ppi->scopeMode == 1)
        {
                //wd->ppi->ppiClearScanLine(aziLine[channel]);
                 aziLine[channel] = (dispdat->azicnt[dispdat->znum-1]+1)%4096;
                //wd->ppi->ppiDrawScanLine(aziLine[channel]);
        }
    }
    /**/
    if(wd->ppi->bFirstInfo == true)
    {
        //add by shen

        if(wd->ppi->scopeMode == 0&&bHmode)//H显
        {
            if(bpkg==true)
            {
            wd->ar ->updateData(dispdat);
            wd->ar->ARDraw();
            wd->ppi->ppiDraw(dispdat);
            //wd->ppi->ppiClearScanLine(aziLine[channel]);
            aziLine[channel] = (dispdat->azicnt[dispdat->znum-1]+1)%1024;
            //wd->ppi->ppiDrawScanLine(aziLine[channel]);
            }
            else
                ;

        }
        else
        {
            if(wd->ppi->scopeMode == 0)
             {
                  wd->ar ->updateData(dispdat);
                  wd->ar->ARDraw();
                  wd->ppi->ppiDraw(dispdat);
                  aziLine[channel] = (dispdat->azicnt[dispdat->znum-1]+1)%1024;
             }
             else
             {
              wd->ar ->updateData(dispdat);
              wd->ar->ARDraw();
              wd->ppi->ppiDraw(dispdat);
                 if(wd->ppi->isScanLine() && wd->ppi->scopeMode == 1)
                 {
                 //wd->ppi->ppiClearScanLine(aziLine[channel]);
                  aziLine[channel] = (dispdat->azicnt[dispdat->znum-1]+1)%4096;
                 //wd->ppi->ppiDrawScanLine(aziLine[channel]);
                 }
            }
        }
    }
    /**/
}

static void pkgTimerHandler(MyWidget**  pmywidget)
{
    static int n1=0;
    static int n2=0;

    if(isOK)
    {
        if(radarOpenState[0])
        {

            for(int i=0;i<NEWPKGNUM;i++)
            {
                dispUpdate(0,(dispbuf1+n1+i),pmywidget[0]);//set channel=0;
//				tshTestDispUpdate(0,(LPARAM)(dispbuf1+n1+i));
                if(PPItogether==TRUE)dispUpdate(0,(dispbuf2+n2+i),pmywidget[0]);//by shen
            }
            n1 += NEWPKGNUM;
            if(n1+NEWPKGNUM>_TREADBUFNUM)
            {
                n1=0;
                rewind(rpkgfp);
                fread(dispbuf1,sizeof(s_ppi_video_for_disp),_TREADBUFNUM,rpkgfp);
            }
        }
        if(radarOpenState[1])
        {

            for(int i=0;i<NEWPKGNUM;i++)
            {
                if(!PPItogether)
                {
                    dispUpdate(1,(dispbuf2+n2+i),pmywidget[1]);//set channel=0;
//                  tshTestDispUpdate(0,(LPARAM)(dispbuf1+n1+i));
                }
            }
            n2 += NEWPKGNUM;
            if(n2+NEWPKGNUM>_TREADBUFNUM)
            {
                n2=0;
                rewind(hpkgfp);
                fread(dispbuf2,sizeof(s_ppi_video_for_disp),_TREADBUFNUM,hpkgfp);
            }
        }
    }

}
static void pkgTimerHandler_net(MyWidget**  pmywidget,char pkgnum,char ch)
{

    if((ch!=10)&&(ch!=11))
    {
        qDebug("char pkgnum,char ch参数 ch错误");
        exit(4);
    }
    if(isOK)
    {
        if(radarOpenState[0]&&ch==10)
        {

            for(int i=0;i<pkgnum;i++)
            {
                dispUpdate(0,dispbufnet1+i,pmywidget[0]);//set channel=0;
                if(PPItogether==TRUE)dispUpdate(0,dispbufnet2+i,pmywidget[0]);//by shen

            }

        }
        else
            if(radarOpenState[1]&&ch==11)
            {
                for(int i=0;i<pkgnum;i++)
                {
                    if(!PPItogether)dispUpdate(1,(dispbufnet2+i),pmywidget[1]);//set channel=0;
                }
            }
    }
}
static int convertRadarPkg(char VideoChannel, ML_GVIDMW_RadarPkg_t* dat, s_ppi_video_for_disp* dispbuf,bool bHmode)//modified by shen
{
    static int lastAzi1 = 0;
    static int lastAzi2 = 0;

    int lastAzi;
    int curAzi;
//add by shen,如果是H显，要把elev赋值给azi，然后套用B显的方式显示
if(bHmode)
{
        curAzi = dat->elev;
//		if(curAzi==NULL)bHmode=false;
        extern bool bpkg;
        bpkg=true;

        if(VideoChannel == 0)
        lastAzi = lastAzi1;
        else if(VideoChannel==1)
        lastAzi = lastAzi2;
        else
        return -1;

        if(scanMode[VideoChannel] ==0|| scanMode[VideoChannel] == 2 || scanMode[VideoChannel] == 4 )                              //正向扫描时
        {
            if(curAzi>lastAzi && curAzi<lastAzi+5)                           //连续补线：  < 20
            {
            dispbuf->znum=curAzi-lastAzi;                                      //多少条线
            for(int i=0;i<dispbuf->znum && i<max_azi_num_per_video;i++)
                dispbuf->azicnt[i]=lastAzi+i;                                  //线的方位
            }
            else if(curAzi<lastAzi && curAzi<5 && lastAzi > 1024-5)         //首尾补线：  < 40  24
            {
            dispbuf->znum=1024+curAzi-lastAzi;
            for(int i=0;i<dispbuf->znum && i<max_azi_num_per_video;i++)            //可能没有补全？
                dispbuf->azicnt[i]=(lastAzi+i)%1024;
            }
            else                                                              //不补线
            {
            dispbuf->znum=1;
            dispbuf->azicnt[0]=curAzi;
            //return;
            }
        }
        else                                                                 //反向扫描时
        {
            if(curAzi< lastAzi && curAzi>lastAzi-5)                           //连续补线：  < 20
            {
            dispbuf->znum=lastAzi-curAzi;                                      //多少条线
            for(int i=0;i<dispbuf->znum && i<max_azi_num_per_video;i++)
                dispbuf->azicnt[i]=lastAzi-i;                                  //线的方位
            }
            else if(curAzi>lastAzi && curAzi > 1024-5<5 && lastAzi<5)         //首尾补线：  < 40  24
            {
            dispbuf->znum=1024+lastAzi-curAzi;
            for(int i=0;i<dispbuf->znum && i<max_azi_num_per_video;i++)            //可能没有补全？
                dispbuf->azicnt[i]=(curAzi+i)%1024;
            }
            else                                                              //不补线
            {
            dispbuf->znum=1;
            dispbuf->azicnt[0]=curAzi;
            //return;
            }
        }

        if(VideoChannel==0)
        lastAzi1 = curAzi;
        else
        lastAzi2 = curAzi;

}
else
//end by shen
{
    curAzi = dat->azi;

    if(VideoChannel == 0)
        lastAzi = lastAzi1;
    else if(VideoChannel==1)
        lastAzi = lastAzi2;
    else
        return -1;


    if(scanMode[VideoChannel] ==0|| scanMode[VideoChannel] == 2 || scanMode[VideoChannel] == 4 )                              //正向扫描时
    {
        if(curAzi>lastAzi && curAzi<lastAzi+20)                           //连续补线：  < 20
        {
            dispbuf->znum=curAzi-lastAzi;                                      //多少条线
            for(int i=0;i<dispbuf->znum && i<max_azi_num_per_video;i++)
                dispbuf->azicnt[i]=lastAzi+i;                                  //线的方位
        }
        else if(curAzi<lastAzi && curAzi<20 && lastAzi > 4096-20)         //首尾补线：  < 40  24
        {
            dispbuf->znum=4096+curAzi-lastAzi;
            for(int i=0;i<dispbuf->znum && i<max_azi_num_per_video;i++)            //可能没有补全？
                dispbuf->azicnt[i]=(lastAzi+i)%4096;
        }
        else                                                              //不补线
        {
            dispbuf->znum=1;
            dispbuf->azicnt[0]=curAzi;
            //return;
        }
    }
    else                                                                 //反向扫描时
    {
        if(curAzi< lastAzi && curAzi>lastAzi-20)                           //连续补线：  < 20
        {
            dispbuf->znum=lastAzi-curAzi;                                      //多少条线
            for(int i=0;i<dispbuf->znum && i<max_azi_num_per_video;i++)
                dispbuf->azicnt[i]=lastAzi-i;                                  //线的方位
        }
        else if(curAzi>lastAzi && curAzi > 4096-20<20 && lastAzi<20)         //首尾补线：  < 40  24
        {
            dispbuf->znum=4096+lastAzi-curAzi;
            for(int i=0;i<dispbuf->znum && i<max_azi_num_per_video;i++)            //可能没有补全？
                dispbuf->azicnt[i]=(curAzi+i)%4096;
        }
        else                                                              //不补线
        {
            dispbuf->znum=1;
            dispbuf->azicnt[0]=curAzi;
            //return;
        }
    }

    if(VideoChannel==0)
        lastAzi1 = curAzi;
    else
        lastAzi2 = curAzi;

}
    memcpy(dispbuf->videodata,dat->video,1200);        //pData中前四个字节为其他信息

    return 0;
}


//*****************************************************//
class thu_gvidwidget : public QWidget//,public  QObject
{
    Q_OBJECT
    friend class subwidget;
public:
    thu_gvidwidget(QWidget *parent = 0);
    ~thu_gvidwidget();
    void setwin_ppi(QRect const&p){win_ppi=p;recdst_ppi=QRect(0,0,p.width(),p.height());
                                   ppix=p.x();ppiy=p.y();ppiw=p.width();ppih=p.height();}
    void setwin_mini(QRect const&p){win_mini=p;recdst_mini=QRect(0,0,p.width(),p.height());
                                   minix=p.x();miniy=p.y();minih=p.height();miniw=p.width();}
    void setwin_ar(QRect const&p){win_ar=p;recdst_ar=QRect(0,0,p.width(),p.height());
                                    arx=p.x();ary=p.y();arw=p.width();arh=p.height();}
    void setwin_ppi1(QRect const&p){win_ppi1=p;recdst_ppi1=QRect(0,0,p.width(),p.height());
                                   ppi1x=p.x();ppi1y=p.y();ppi1w=p.width();ppi1h=p.height();}
    void setwin_mini1(QRect const&p){win_mini1=p;recdst_mini1=QRect(0,0,p.width(),p.height());
                                    mini1x=p.x();mini1y=p.y();mini1h=p.height();mini1w=p.width();}
    void setwin_ar1(QRect const&p){win_ar1=p;recdst_ar1=QRect(0,0,p.width(),p.height());
                                  ar1x=p.x();ar1y=p.y();ar1w=p.width();ar1h=p.height();}

    void setwin_ppi(){win_ppi=QRect(ppix,ppiy,ppiw,ppih);recdst_ppi=QRect(0,0,ppiw,ppih);}
    void setwin_mini(){win_mini=QRect(minix,miniy,miniw,minih);recdst_mini=QRect(0,0,miniw,minih);}
    void setwin_ar(){win_ar=QRect(arx,ary,arw,arh);recdst_ar=QRect(0,0,arw,arh);}
    void setwin_ppi1(){win_ppi1=QRect(ppi1x,ppi1y,ppi1w,ppi1h);recdst_ppi1=QRect(0,0,ppi1w,ppi1h);}
    void setwin_mini1(){win_mini1=QRect(mini1x,mini1y,mini1w,mini1h);recdst_mini1=QRect(0,0,mini1w,mini1h);}
    void setwin_ar1(){win_ar1=QRect(ar1x,ar1y,ar1w,ar1h);recdst_ar1=QRect(0,0,ar1w,ar1h);}

    QRect getwin_ppi(){return win_ppi;}
    QRect getwin_mini(){return win_mini;}
    QRect getwin_ar(){return win_ar;}
    QRect getwin_ppi1(){return win_ppi1;}
    QRect getwin_mini1(){return win_mini1;}
    QRect getwin_ar1(){return win_ar1;}

    void setallwin_hide(){ psubwin[0]->hide();psubwin[1]->hide();psubwin[2]->hide();
                           psubwin[3]->hide();psubwin[4]->hide();psubwin[5]->hide(); }
    void setwinhide0(){psubwin[0]->hide();}
    void setwinhide1(){psubwin[1]->hide();}
    void setwinhide2(){psubwin[2]->hide();}
    void setwinhide3(){psubwin[3]->hide();}
    void setwinhide4(){psubwin[4]->hide();}
    void setwinhide5(){psubwin[5]->hide();}

    void setwinshow0(){psubwin[0]->show();}
    void setwinshow1(){psubwin[1]->show();}
    void setwinshow2(){psubwin[2]->show();}
    void setwinshow3(){psubwin[3]->show();}
    void setwinshow4(){psubwin[4]->show();}
    void setwinshow5(){psubwin[5]->show();}


    void setwin_show(subwidget* tmp){tmp->show();}
    void deleteopenedwin0(){psubwin[0]->close();psubwin[0]->hide();if(bwin[0]==true)delete psubwin[0];bwin[0]=false;psubwin[0]=NULL;}
    void deleteopenedwin1(){psubwin[1]->close();psubwin[1]->hide();if(bwin[1]==true)delete psubwin[1];bwin[1]=false;psubwin[1]=NULL;}
    void deleteopenedwin2(){psubwin[2]->close();psubwin[2]->hide();if(bwin[2]==true)delete psubwin[2];bwin[2]=false;psubwin[2]=NULL;}
    void deleteopenedwin3(){psubwin[3]->close();psubwin[3]->hide();if(bwin[3]==true)delete psubwin[3];bwin[3]=false;psubwin[3]=NULL;}
    void deleteopenedwin4(){psubwin[4]->close();psubwin[4]->hide();if(bwin[4]==true)delete psubwin[4];bwin[4]=false;psubwin[4]=NULL;}
    void deleteopenedwin5(){psubwin[5]->close();psubwin[5]->hide();if(bwin[5]==true)delete psubwin[5];bwin[5]=false;psubwin[5]=NULL;}
    void recreatewin0();
    void recreatewin1();
    void recreatewin2();
    void recreatewin3();
    void recreatewin4();
    void recreatewin5();
    void resizesubwin0(short w,short h){psubwin[0]->resize(w,h);}
    void resizesubwin1(short w,short h){psubwin[1]->resize(w,h);}
    void resizesubwin2(short w,short h){psubwin[2]->resize(w,h);}
    void resizesubwin3(short w,short h){psubwin[3]->resize(w,h);}
    void resizesubwin4(short w,short h){psubwin[4]->resize(w,h);}
    void resizesubwin5(short w,short h){psubwin[5]->resize(w,h);}

    subwidget * getsubwin0(){return psubwin[0];}
    subwidget * getsubwin1(){return psubwin[1];}
    subwidget * getsubwin2(){return psubwin[2];}
    subwidget * getsubwin3(){return psubwin[3];}
    subwidget * getsubwin4(){return psubwin[4];}
    subwidget * getsubwin5(){return psubwin[5];}

    void settmparbackcolor1(){tmparbackcolor=pmywidget[0]->ar->getArBackgroundColor();}//getarbackgroundcolor()得到的颜色为0x00rrggbb
    void settmparbackcolor2(){tmparbackcolor1=pmywidget[1]->ar->getArBackgroundColor();}

//-----------PPI----------------------------------------------------
    void setppimode(char VideoChannel,short theMode,bool bhmode){pmywidget[VideoChannel]->ML_GVID_SetPPIMode(-1,VideoChannel,theMode,bhmode);}
    void setppicenter(char VideoChannel ,short theX ,short theY){pmywidget[VideoChannel]->ML_GVID_SetPPICenter(-1,VideoChannel,theX,theY);}
    void setppishipdir(char VideoChannel,float theShipDir){pmywidget[VideoChannel]->ML_GVID_SetPPIShipDir(-1,VideoChannel,theShipDir);}
    void setppicolor(char VideoChannel,unsigned int theColor){pmywidget[VideoChannel]->ML_GVID_SetPPIColor(-1,VideoChannel,theColor);}
    void setppiscan(char VideoChannel,int theScan){pmywidget[VideoChannel]->ML_GVID_SetPPIScan(-1,VideoChannel,theScan);}
    void setppilinecolor(char VideoChannel,unsigned int theColor){pmywidget[VideoChannel]->ML_GVID_SetPPILineColor(-1,VideoChannel,theColor);}
    void frostppi(char VideoChannel,char theFrost){pmywidget[VideoChannel]->ML_GVID_SetPPIFrost(-1,VideoChannel,theFrost);}
    void setppidist(char VideoChannel,short theDist){pmywidget[VideoChannel]->ML_GVID_SetPPIDist(-1,VideoChannel,theDist);}
    void setppiswitch(char VideoChannel,short theSwitch){pmywidget[VideoChannel]->ML_GVID_SetPPISwitch(-1,VideoChannel,1-theSwitch);}
    void setppigate(char VideoChannel,int gate){pmywidget[VideoChannel]->ML_GVID_SetPPIGate(-1,VideoChannel,gate);}
    void setppitail(char VideoChannel,int theTail){pmywidget[VideoChannel]->ML_GVID_SetPPITail(-1,VideoChannel,theTail);}
    void settailswitch(char VideoChannel,short theSwitch){pmywidget[VideoChannel]->ML_GVID_SetTailSwitch(-1,VideoChannel,theSwitch);}
    void settailcolor(char VideoChannel,unsigned int theColor){pmywidget[VideoChannel]->ML_GVID_SetTailColor(-1,VideoChannel,theColor);}
    void settailgate(char VideoChannel,unsigned char theGate){pmywidget[VideoChannel]->ML_GVID_SetTailGate(-1,VideoChannel,theGate);}
    void settailtime(char VideoChannel,int theTime){pmywidget[VideoChannel]->ML_GVID_SetTailTime(-1,VideoChannel,theTime);}
    void setppicolortable(char VideoChannel,unsigned int *colorTable){pmywidget[VideoChannel]->ML_GVID_SetPPIColorTable(-1,VideoChannel,colorTable);}
    void clearppi(char VideoChannel){pmywidget[VideoChannel]->ML_GVID_ClearPPI(-1,VideoChannel);}
    void setppimovemode(char VideoChannel,short theMode){pmywidget[VideoChannel]-> ML_GVID_SetPPIMoveMode(-1,VideoChannel,theMode);}

//------------AR----------------------------------------------------------
    void setargate(char VideoChannel,int Gate){pmywidget[VideoChannel]->ML_GVID_ChangArGate(-1,VideoChannel,Gate);}
    void setardist(char VideoChannel,short theDist){pmywidget[VideoChannel]->ML_GVID_ChangArDist(-1,VideoChannel,theDist);}
    void setarcolor(char VideoChannel,unsigned int theColor){pmywidget[VideoChannel]->ML_GVID_SetArColor(-1,VideoChannel,theColor);}
    void setarbackgroundcolor(char VideoChannel,unsigned int theColor){pmywidget[VideoChannel]->ML_GVID_SetArBackgroundColor(-1,VideoChannel,theColor);}

//------------MINI---------------------------------------------------------
    void setminiwinmode(char VideoChannel,short theMode){extern bool bHmode;pmywidget[VideoChannel]->ML_GVID_SetPPIMode(-1,VideoChannel,theMode,bHmode);}
    void setminiwincolor(char VideoChannel,unsigned int theColor){pmywidget[VideoChannel]->dp->setWinColor((theColor>>24) & 0x0ff,(theColor>>16) & 0x0ff,(theColor>>8) & 0x0ff);}
    void setminiwindistdir(char VideoChannel,short theDistance,float theDirection)
    {
        if(VideoChannel==0)
        {
            pmywidget[0]->ML_GVID_SetPPIWinDistDir(-1,VideoChannel,theDistance,theDirection);
            pmywidget[0]->map->updateWindow(miniw/2);
            psubwin[0]->setPPIwin1();

        }
        else
        {
            pmywidget[1]->ML_GVID_SetPPIWinDistDir(-1,VideoChannel,theDistance,theDirection);
            pmywidget[1]->map->updateWindow(mini1w/2);
            psubwin[3]->setPPIwin2();
        }
    }

    void setminiwinscale(char VideoChannel,short theScale)
    {
        if(VideoChannel==0)
        {
            psubwin[1]->setscale(theScale);
            psubwin[0]->setminiwin1(theScale);
        }
        if(VideoChannel==1)
        {
            psubwin[4]->setscale(theScale);
            psubwin[3]->setminiwin2(theScale);
        }
        pmywidget[VideoChannel]->map->updateWindow(miniw/2);
    }
    void setminiwincolortable(char VideoChannel,unsigned int *colorTableT){pmywidget[VideoChannel]->ML_GVID_SetMiniWinColorTable(-1,VideoChannel,colorTableT);}

//-----------Radar----------------------------------------------------------
    void setscanmode(char VideoChannel,short theScanMode){scanMode[VideoChannel]=theScanMode;}
    int ML_GVID_SendRadarPkg(char VideoChannel, int pkgNum, ML_GVIDMW_RadarPkg_t *pkgBuf,bool bHmode)//add parameter by shen
    {
        s_ppi_video_for_disp* dispbuf;
        if(VideoChannel==0)  dispbuf=dispbuf1;
        else  dispbuf =dispbuf2;
        for(int i = 0; i < pkgNum; i ++)
        {
            convertRadarPkg(VideoChannel, pkgBuf + i, dispbuf,bHmode);
            dispUpdate(VideoChannel,dispbuf,pmywidget[VideoChannel]);
        }
        return 1;
    }

private:
//    Ui::thu_gvidwidget *ui;
    uchar *uch1,*uch2,*uch3;
    uchar *uch11,*uch21,*uch31;
    QImage  image_ppi,image_ar,image_mini, image_ppi1,image_ar1,image_mini1;
    quint32 tmparbackcolor,tmparbackcolor1;//default farmat 0x00rrggbb
public:
    quint16 ppiw,ppih,miniw,minih,arw,arh,ppi1w,ppi1h,mini1w,mini1h,ar1w,ar1h;//window width and height
    quint16 ppix,ppiy,minix,miniy,arx,ary,ppi1x,ppi1y,mini1x,mini1y,ar1x,ar1y;//window start point location
private:
    QRect recdst_ppi,recdst_mini,recdst_ar,recdst_ppi1,recdst_mini1,recdst_ar1;//the region where the image will be mapped to
    QRect win_ppi,win_mini,win_ar,win_ppi1,win_mini1,win_ar1;//the seperate window location on the 1600*1200 screen
    MyWidget *pmywidget[2];
    subwidget* psubwin[6];//显示6个窗口用 PP11 MINI1 AR1 PPI2 MINI2 AR2
    bool bwin[6];//flags to see whether the subwidget is created
    UDPserver *myserver;
    QRect recsrc_mini,recsrc_mini1;

//    bool blocal,PPItogether,isOK;
//    qint32 aziLine[2];

private slots:
    void localdataup();
    void netdataup1(char,char);//paramerer for net oncepkgnum and channel
    void netdataup2(char,char);//paramerer for net oncepkgnum and channel
    void change();//just for test,can be deleted
    void ppi_yh_timer();
protected:
//    void paintEvent(QPaintEvent *event);

};

#endif // ML_GVIDMW_GLOBAL_H
