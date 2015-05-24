#include "ML_GVIDMW_global.h"

//-------------------------------------global defined variants  begin--------------------------------------------------
thu_gvidwidget *pthu_gvidwidget;
bool bInit=false;
//bool haselevinfo=false; //for mode 3,�߶Ƚ���Ϣ
bool bInitPPI[2]= {false,false};
bool bInitAR[2]={false,false};
bool bInitMiniWin[2]={false,false};
bool bHmode[2]={false,false};//flag add by shen for H mode
bool bpkg=false;//flag add by shen for �Ƿ��ڲ��״���������
short minisrconppi1[2]={600+85,300+85};//��¼PPI�������ĵ�����
short minisrconppi2[2]={600+85,300+85};

bool bshowmarkonPPI=false;//�����Ƿ����PPi����(�۱껷�Ϳ�����)���ܿ���
bool bshowminionppi=true;
bool bshowcircleonppi=true;
#define interwin 10//the interval between windows
int PORTNUM1=7000;
int PORTNUM2=8000;

 s_ppi_video_for_disp * dispbuf1;
 s_ppi_video_for_disp * dispbuf2;
 s_ppi_video_for_disp *dispbufnet1;//=new s_ppi_video_for_disp[50];//global variant
 s_ppi_video_for_disp *dispbufnet2;//=new s_ppi_video_for_disp[50];//global variant

 FILE * rpkgfp;
 FILE * hpkgfp;
 bool radarOpenState[2]={true,true};
 bool TVopenState[2] = {false,false};

 bool blocal=true;
 bool PPItogether=false;
 qint32 aziLine[2];
 bool checkini=true;
 bool checkradardata=true;
 bool isOK=true;
 short scanMode[2]={0,0};

 void *ch1=new unsigned int[1200*1200];
 void *ch2=new unsigned int[360*300];
 void *ch3=new unsigned int[340*340];
 void *ch11=new unsigned int[1200*1200];
 void *ch21=new unsigned int[360*300];
 void *ch31=new unsigned int[340*340];
 /**/
 /*
 int ch1[1200*1200];
 int ch2[360*300];
 int ch3[340*340];
 int ch11[1200*1200];
 int ch21[360*300];
 int ch31[340*340];
 /**/

 //----------------FROM GLOBAL.H---------------------------
#define _TREADBUFNUM 3600*7
#define NEWPKGNUM 15//control the scan speed

 bool initPpiThread()
{

    MEMALLOCCHECK(ch1)
    MEMALLOCCHECK(ch2)
    MEMALLOCCHECK(ch3)
    MEMALLOCCHECK(ch11)
    MEMALLOCCHECK(ch21)
    MEMALLOCCHECK(ch31)


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
    PORTNUM1=settings.value("radar/port1").toInt();
    PORTNUM2=settings.value("radar/port2").toInt();


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


    return isOK;
}

 void freePpiThread()
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

 void dispUpdate(int channel,s_ppi_video_for_disp *dispdat,MyWidget*  pmywidget)
{


    MyWidget *wd = pmywidget;//[channel];
    if(wd->ppi->bFirstInfo == true)
    {
        //add by shen

        if(wd->ppi->scopeMode == 0&&bHmode[channel])//H��
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

 void pkgTimerHandler(MyWidget**  pmywidget)
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
 void pkgTimerHandler_net(MyWidget**  pmywidget,char pkgnum,char ch)
{

    if((ch!=10)&&(ch!=11))
    {
        qDebug("char pkgnum,char ch���� ch����");
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
 int convertRadarPkg(char VideoChannel, ML_GVIDMW_RadarPkg_t* dat, s_ppi_video_for_disp* dispbuf,bool bHmode)//modified by shen
{
    static int lastAzi1 = 0;
    static int lastAzi2 = 0;

    int lastAzi;
    int curAzi;
//add by shen,�����H�ԣ�Ҫ��elev��ֵ��azi��Ȼ������B�Եķ�ʽ��ʾ
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

        if(scanMode[VideoChannel] ==0|| scanMode[VideoChannel] == 2 || scanMode[VideoChannel] == 4 )                              //����ɨ��ʱ
        {
            if(curAzi>lastAzi && curAzi<lastAzi+5)                           //�������ߣ�  < 20
            {
            dispbuf->znum=curAzi-lastAzi;                                      //��������
            for(int i=0;i<dispbuf->znum && i<max_azi_num_per_video;i++)
                dispbuf->azicnt[i]=lastAzi+i;                                  //�ߵķ�λ
            }
            else if(curAzi<lastAzi && curAzi<5 && lastAzi > 1024-5)         //��β���ߣ�  < 40  24
            {
            dispbuf->znum=1024+curAzi-lastAzi;
            for(int i=0;i<dispbuf->znum && i<max_azi_num_per_video;i++)            //����û�в�ȫ��
                dispbuf->azicnt[i]=(lastAzi+i)%1024;
            }
            else                                                              //������
            {
            dispbuf->znum=1;
            dispbuf->azicnt[0]=curAzi;
            //return;
            }
        }
        else                                                                 //����ɨ��ʱ
        {
            if(curAzi< lastAzi && curAzi>lastAzi-5)                           //�������ߣ�  < 20
            {
            dispbuf->znum=lastAzi-curAzi;                                      //��������
            for(int i=0;i<dispbuf->znum && i<max_azi_num_per_video;i++)
                dispbuf->azicnt[i]=lastAzi-i;                                  //�ߵķ�λ
            }
            else if(curAzi>lastAzi && curAzi > 1024-5<5 && lastAzi<5)         //��β���ߣ�  < 40  24
            {
            dispbuf->znum=1024+lastAzi-curAzi;
            for(int i=0;i<dispbuf->znum && i<max_azi_num_per_video;i++)            //����û�в�ȫ��
                dispbuf->azicnt[i]=(curAzi+i)%1024;
            }
            else                                                              //������
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


    if(scanMode[VideoChannel] ==0|| scanMode[VideoChannel] == 2 || scanMode[VideoChannel] == 4 )                              //����ɨ��ʱ
    {
        if(curAzi>lastAzi && curAzi<lastAzi+20)                           //�������ߣ�  < 20
        {
            dispbuf->znum=curAzi-lastAzi;                                      //��������
            for(int i=0;i<dispbuf->znum && i<max_azi_num_per_video;i++)
                dispbuf->azicnt[i]=lastAzi+i;                                  //�ߵķ�λ
        }
        else if(curAzi<lastAzi && curAzi<20 && lastAzi > 4096-20)         //��β���ߣ�  < 40  24
        {
            dispbuf->znum=4096+curAzi-lastAzi;
            for(int i=0;i<dispbuf->znum && i<max_azi_num_per_video;i++)            //����û�в�ȫ��
                dispbuf->azicnt[i]=(lastAzi+i)%4096;
        }
        else                                                              //������
        {
            dispbuf->znum=1;
            dispbuf->azicnt[0]=curAzi;
            //return;
        }
    }
    else                                                                 //����ɨ��ʱ
    {
        if(curAzi< lastAzi && curAzi>lastAzi-20)                           //�������ߣ�  < 20
        {
            dispbuf->znum=lastAzi-curAzi;                                      //��������
            for(int i=0;i<dispbuf->znum && i<max_azi_num_per_video;i++)
                dispbuf->azicnt[i]=lastAzi-i;                                  //�ߵķ�λ
        }
        else if(curAzi>lastAzi && curAzi > 4096-20<20 && lastAzi<20)         //��β���ߣ�  < 40  24
        {
            dispbuf->znum=4096+lastAzi-curAzi;
            for(int i=0;i<dispbuf->znum && i<max_azi_num_per_video;i++)            //����û�в�ȫ��
                dispbuf->azicnt[i]=(curAzi+i)%4096;
        }
        else                                                              //������
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
    memcpy(dispbuf->videodata,dat->video,1200);        //pData��ǰ�ĸ��ֽ�Ϊ������Ϣ

    return 0;
}

 //-------------------------------------------------------------
//-------------- ���ڲ�����Ч���ж��ĺ궨�� --------------------------

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

//-------------------------------------global defined variants  end----------------------------------------------------
//---------------------------------------------------------------------------
//---------------------------����ӿں���ʵ��-------------------------------------
extern FILE* debugfp=fopen("save/dlldebug.txt","w");

Status ML_GVID_Init()
{
    if(bInit)  {
        qDebug("////    �ظ���ʼ�� -1   ////");
        return -1;
    }//�ظ���ʼ��

    if(debugfp==NULL) {
        qDebug("//// save/dlldebug.txtδ�ܽ��� -2  ////");
        return -2;}
    isOK=initPpiThread();//prepare the buffer and read data from E_CARD;
    if(checkini==false) {
        qDebug("//// δ�ܴ������ļ�ini -3  ////");
        return -3;}
    if(checkradardata==false) {
        qDebug("////  δ�ܴ򿪱����״����� -4  ////");
        return -4;}
        if (!isOK) {
            qDebug("//// δ�ܳɹ���ʼ��initPpiThread���� -4  ////");
            return -4;}
    FILE * fpsys;
    if((fpsys=fopen("dat/sysdat","rb"))==NULL) {qDebug("//// δ�ܴ�dat/sysdat�����ļ� -5  ////");return -5;}
    fclose(fpsys);

    pthu_gvidwidget=new thu_gvidwidget();
//    pthu_gvidwidget->setallwin_hide();//since no new subwin,do not need to hide;
    bInit=true;
//    qDebug("Initial OK!!!");
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

/*  //���·���ֻ�ܸı䴰�ڳߴ���� ���״ﻭ�治��
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
    ML_GVID_ClearPPI(VideoChannel+1);//�ı�ģʽ���������Է��¾�ģʽ����

    bHmode[VideoChannel]=false;//add by shen
    if(theMode == 3)
//		theMode = 1;
    {//alternated by shen
        theMode=0;//��B�Եķ�ʽ����ʾH�ԣ���Ӧ����ML_DVID_SendRadarPkg������azi�����滻Ϊelev������Ϣ��
        bHmode[VideoChannel]=true;//global flag

    }//end by shen
    pthu_gvidwidget->setppimode(VideoChannel,theMode,bHmode[VideoChannel]);
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

     if(theFrost==0)
     pthu_gvidwidget->closeyh(VideoChannel);
     if(theFrost==1)
     pthu_gvidwidget->openyh(VideoChannel);
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
     gate = theGate * 36;//�ֵ�

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
         /*
         if(theTail<30000)
             theTail+=25000;
         pthu_gvidwidget->getsubwin2()->setardecayby(255-theTail/256);
         /**/
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
         /*
         if(theTail<30000)
             theTail+=25000;
         pthu_gvidwidget->getsubwin5()->setardecayby(255-theTail/256);
         /**/

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
     VC_CHECK //����VideoChannel�Ѿ�����һ��
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
     VR_CHECK(theDistance,0,32767)

     while(theDirection<0)
     theDirection += 360.0;
     while(theDirection>=360)
     theDirection -= 360.0;
//dist dir ָ�����Ǵ�������λ��
     pthu_gvidwidget->setminiwindistdir(VideoChannel,theDistance,theDirection);
     return 1;

 }

 Status ML_GVID_SetMiniWinScale(char VideoChannel,short theScale)
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
     return pthu_gvidwidget->ML_GVID_SendRadarPkg(VideoChannel,pkgNum,pkgBuf,bHmode[VideoChannel]);

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

 Status ML_GVID_SetPMLayerColors(char VideoChannel, char theMode, int theNum, unsigned int *colors);
 Status ML_GVID_SetATLayerColorKey(char VideoChannel, unsigned int colorKey);

 //-------extent---
 Status ML_GVID_SetMarklayer(bool bvisible){bshowmarkonPPI=bvisible;return 1;}

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
      myserver(NULL)//��ʼ��
{

//    after initPpiThread();//prepare the buffer and read data from E_CARD;
//    if (!isOK) exit(-5);//if open datapool file fail�� exit
    for(int i=0;i<6;i++)
        bwin[i]=false;

    memset(ch1,0,SURF_CM_WIDTH*SURF_CM_HEIGHT*sizeof(int));//initialize data array,so when no radar data,the pic black
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
    QImage tmpimg1(uch1,SURF_CM_WIDTH,SURF_CM_HEIGHT,QImage::Format_RGB32);//��Ҫ���Ƶ�ͼ���ΪQImage��
    image_ppi=tmpimg1;
    uch3=(uchar*) ch3;//MINI fb
    QImage tmpimg3(uch3,SURF_MINI_WIDTH,SURF_MINI_HEIGHT,QImage::Format_RGB32);
    image_mini= tmpimg3;
    uch2=(uchar*) ch2;//AR fb
    QImage tmpimg2(uch2,SURF_AR_WIDTH,SURF_AR_HEIGHT,QImage::Format_RGB32);
    image_ar=tmpimg2;

    uch11=(uchar*) ch11;//PPI fb
    QImage tmpimg11(uch11,SURF_CM_WIDTH,SURF_CM_HEIGHT,QImage::Format_RGB32);//��Ҫ���Ƶ�ͼ���ΪQImage��
    image_ppi1=tmpimg11;
    uch31=(uchar*) ch31;//MINI fb
    QImage tmpimg31(uch31,SURF_MINI_WIDTH,SURF_MINI_HEIGHT,QImage::Format_RGB32);
    image_mini1= tmpimg31;
    uch21=(uchar*) ch21;//AR fb
    QImage tmpimg21(uch21,SURF_AR_WIDTH,SURF_AR_HEIGHT,QImage::Format_RGB32);
    image_ar1=tmpimg21;

    pmywidget[0]->ppi->setWinOrigin(600,300);//set the mini window original position of the PPI window.
    pmywidget[0]->ppi->bFirstInfo=true;
    pmywidget[0]->ppi->setWindowDisp(true);//set to show the mini window
    pmywidget[0]->yh->setYhWin(true);
    pmywidget[0]->ar->setAR(true);  //set to show ar window
    pmywidget[1]->ppi->setWinOrigin(600,300);//set the mini window original position of the PPI window.
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
       timer_update->start(20);//** ms �����update������ִ��paintEvent��
   }
   else
   {

       myserver=new UDPserver(dispbufnet1,dispbufnet2);
       connect(this->myserver, SIGNAL(receivedfinished1(char,char)), this, SLOT(netdataup1(char,char)));//char ����Ϊ����һ�ν��յ������ݰ�����
       connect(this->myserver, SIGNAL(receivedfinished2(char,char)), this, SLOT(netdataup2(char,char)));//char ����Ϊ����һ�ν��յ������ݰ�����
       QTimer *timer_yh = new QTimer(this);//update local radar data
       connect(timer_yh, SIGNAL(timeout()), this, SLOT(ppi_yh_timer()));
       timer_yh->start(20);//** ms �����update������ִ��paintEvent��
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
    timer->start(25);//** ms �����update������ִ��paintEvent��
/**///��ʱ�����������Ƶ�����subwin�в���

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
    psubwin[0]->setPPIwin1();
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
//    psubwin[1]->setminiwin(1);
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
    psubwin[3]->setPPIwin2();
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
//    psubwin[4]->setminiwin(1);
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
//����˴�yh�����������ϣ�û���յ��������ݾͲ������yh����������ֹͣ���ͺ���Ļ�����ᱣ������ǰ������
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
int thu_gvidwidget::ML_GVID_SendRadarPkg(char VideoChannel, int pkgNum, ML_GVIDMW_RadarPkg_t *pkgBuf,bool bhmode)//add parameter by shen
{
    s_ppi_video_for_disp* dispbuf;
    if(VideoChannel==0)  dispbuf=dispbuf1;
    else  dispbuf =dispbuf2;
    for(int i = 0; i < pkgNum; i ++)
    {
        convertRadarPkg(VideoChannel, pkgBuf + i, dispbuf,bhmode);
        dispUpdate(VideoChannel,dispbuf,pmywidget[VideoChannel]);
    }
    return 1;
}
