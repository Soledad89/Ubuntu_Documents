#include "tvwidget.h"
#include "ui_tvwidget.h"
#include "HCNetSDK.h"
#include "LinuxPlayM4.h"

#include <stdio.h>

/**  @fn  void CALLBACK ExceptionCallBack(DWORD dwType, LONG lUserID, LONG lHandle, void *pUser)
 *   @brief Process exception.
 *   @param (IN) DWORD dwType
 *   @param (IN) LONG lUserID
 *   @param (IN) LONG lHandle
 *   @param (IN) void *pUser
 *   @return none.
 */
#if defined(_WIN32)
void CALLBACK ExceptionCallBack(DWORD dwType, LONG lUserID, LONG lHandle, void *pUser)
#else
void CALLBACK ExceptionCallBack(DWORD dwType, LONG lUserID, LONG lHandle, void *pUser)
#endif
{
    qDebug("ExceptionCallBack lUserID:%d, handle:%d, user data:%p", lUserID, lHandle, pUser);

    char tempbuf[256];
    memset(tempbuf, 0, 256);
    switch(dwType)
    {
    case EXCEPTION_AUDIOEXCHANGE:		//Audio exchange exception
        sprintf(tempbuf,"Audio exchange exception!");
        //gqtclinetdemo->m_logtable->addLogAlarmInfo(0, "", "", QString(tempbuf));
        //TODO: close audio exchange
        break;

    //Alarm//
    case EXCEPTION_ALARM:			            //Alarm exception
        sprintf(tempbuf,"Alarm exception!");
        //gqtclinetdemo->m_logtable->addLogAlarmInfo(0, "", "", QString(tempbuf));
        //TODO: close alarm update
        break;
    case EXCEPTION_ALARMRECONNECT:  //Alarm reconnect
        sprintf(tempbuf,"Alarm reconnect.");
        //gqtclinetdemo->m_logtable->addLogAlarmInfo(0, "", "", QString(tempbuf));
        break;
    case ALARM_RECONNECTSUCCESS:      //Alarm reconnect success
        sprintf(tempbuf,"Alarm reconnect success.");
        //gqtclinetdemo->m_logtable->addLogAlarmInfo(1, "", "", QString(tempbuf));
        break;

    case EXCEPTION_SERIAL:			           //Serial exception
        sprintf(tempbuf,"Serial exception!");
        //gqtclinetdemo->m_logtable->addLogAlarmInfo(0, "", "", QString(tempbuf));
        //TODO: close exception
        break;

    //Preview//
    case EXCEPTION_PREVIEW:			     //Preview exception
        sprintf(tempbuf,"Preview exception!");
        //gqtclinetdemo->m_logtable->addLogAlarmInfo(0, "", "", QString(tempbuf));
        //TODO: close preview
        break;
    case EXCEPTION_RECONNECT:			 //preview reconnect
        sprintf(tempbuf,"preview reconnecting.");
        //gqtclinetdemo->m_logtable->addLogAlarmInfo(0, "", "", QString(tempbuf));
        break;
    case PREVIEW_RECONNECTSUCCESS: //Preview reconnect success
        sprintf(tempbuf,"Preview reconncet success.");
        //gqtclinetdemo->m_logtable->addLogAlarmInfo(1, "", "", QString(tempbuf));
        break;
    default:
        break;
    }
}


tvwidget::tvwidget(long chnum,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::tvwidget),
    ChannelNum(chnum)
{
    ui->setupUi(this);
    if(!NET_DVR_Init())
        qDebug("initial error");
    BOOL bRet = NET_DVR_SetLogToFile(3, "./sdkLog", false);
        NET_DVR_SetLogPrint(true);
    qDebug("NET_DVR_SetLogToFile %d", bRet);

    NET_DVR_SetConnectTime(10000, 1);
    qDebug("NET_DVR_SetConnectTime");

   NET_DVR_SetExceptionCallBack_V30(0, NULL, ExceptionCallBack, NULL);
   qDebug("NET_DVR_SetExceptionCallBack_V30");

    m_gcurrentuserid =-1;
    m_guseridbackup =m_gcurrentuserid;
    m_gcurrentchannelnum =1;
    m_gchannelnumbackup =1;
    m_gcurrentchannellinkmode =0x0;

   // char *m_serverIP = "192.0.0.64";
    long lUserID=NET_DVR_Login_V30("192.0.0.64", 8000, "admin", "12345", &m_rpdeviceinfo);

    qDebug("NET_DVR_Login_V30   lUserID %ld", lUserID);


//    NET_DVR_SetShowMode(0,0x00000000 );//colorkey 0x00bbggrr

//channel one
    m_rppreinfo[0].lChannel=1;
    m_rppreinfo[0].dwStreamType=0;
    m_rppreinfo[0].dwLinkMode=0;//0 tcp 1 udp
    m_rppreinfo[0].hPlayWnd=ui->frame->winId();
    m_rppreinfo[0].bBlocked=0;
    m_rppreinfo[0].bPassbackRecord=0;
    m_rppreinfo[0].byPreviewMode=0;
    m_rppreinfo[0].byStreamID[0]=0;
    m_rppreinfo[0].byProtoType=0;
    m_rppreinfo[0].byRes1[0]=0;
    m_rppreinfo[0].dwDisplayBufNum=1;
    m_rppreinfo[0].byRes[0]=0;

//channel two
    m_rppreinfo[1].lChannel=1;
    m_rppreinfo[1].dwStreamType=0;
    m_rppreinfo[1].dwLinkMode=0;
    m_rppreinfo[1].hPlayWnd=ui->frame_2->winId();
    m_rppreinfo[1].bBlocked=0;
    m_rppreinfo[1].bPassbackRecord=0;
    m_rppreinfo[1].byPreviewMode=0;
    m_rppreinfo[1].byStreamID[0]=0xff;
    m_rppreinfo[1].byProtoType=0;
    m_rppreinfo[1].byRes1[0]=0;
    m_rppreinfo[1].dwDisplayBufNum=1;
    m_rppreinfo[1].byRes[0]=0;


    long retrp=NET_DVR_RealPlay_V40(lUserID, &(m_rppreinfo[0]),  NULL,NULL);
    NET_DVR_RealPlay_V40(lUserID, &(m_rppreinfo[1]),  NULL,NULL);
/**/

/*
//channel 0ne
    m_rpclientinfo[0].lChannel=ChannelNum;
    m_rpclientinfo[0].hPlayWnd=ui->frame->winId();
    m_rpclientinfo[0].lLinkMode=0;
    m_rpclientinfo[0].byProtoType=0;
    m_rpclientinfo[0].byRes[0]=0;
    m_rpclientinfo[0].sMultiCastIP=NULL;
//channel two
    m_rpclientinfo[1].lChannel=1;
    m_rpclientinfo[1].hPlayWnd=ui->frame_2->winId();
    m_rpclientinfo[1].lLinkMode=0;
    m_rpclientinfo[1].byProtoType=0;
    m_rpclientinfo[1].byRes[0]=0;
    m_rpclientinfo[1].sMultiCastIP=NULL;


    long retrp=NET_DVR_RealPlay(lUserID, &m_rpclientinfo[0]);
//    NET_DVR_RealPlay(lUserID, &m_rpclientinfo[1]);

/**/



    NET_DVR_ClientGetVideoEffect(retrp,&BrightValue,&ContrastValue,&SaturationValue,&HueValue);
//    qDebug("%ld %ld %ld %ld ",BrightValue,ContrastValue,SaturationValue,HueValue);
    NET_DVR_ClientSetVideoEffect(retrp,BrightValue,ContrastValue,SaturationValue,HueValue);
//    qDebug("%d %d %d %d ",*pBrightValue,*pContrastValue,*pSaturationValue,*pHueValue);

}

tvwidget::~tvwidget()
{
    delete ui;
}
