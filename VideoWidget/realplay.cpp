   /*
* Copyright(C) 2010,Custom Co., Ltd 
*    FileName: realplay.cpp
* Description: realplay
*     Version: 1.0
*      Author: wanggongpu
* Create Date: 2009-11,12
* Modification Historyú?
*    2010-6-25 panyadong   Add border to frame.
*/
#include "realplay.h"
#include <QMessageBox>
#include <QApplication>

RealPlay::RealPlay(QWidget *parent): QWidget(parent)
{
	ui.setupUi(this);  

    m_pframePlay = ui.m_pframePlay;

}

RealPlay::~RealPlay()
{

}

int RealPlay::play()
{

     LONG lUserID;
    NET_DVR_DEVICEINFO_V30 struDeviceInfo;
    lUserID = NET_DVR_Login_V30("192.0.0.64", 8000, "admin", "12345", &struDeviceInfo);
    if (lUserID < 0)
     {
          printf("Login error, %d\n", NET_DVR_GetLastError());
          NET_DVR_Cleanup();
          return -1;
     }

    //---------------------------------------
    //设置异常消息回调函数

    NET_DVR_CLIENTINFO ClientInfo = {0};

    HWND hWnd =(HWND)m_pframePlay->winId();
    //HWND hWnd =(HWND)GetPlayWndId();
    hWnd = NULL;
    ClientInfo.hPlayWnd = hWnd;
    ClientInfo.lChannel     = 1;
    ClientInfo.lLinkMode    = 0;
    int realhandle = NET_DVR_RealPlay(lUserID, &ClientInfo);
    //int realhandle = NET_DVR_RealPlay_V40(lUserID, &ClientInfo, NULL, NULL, 1);
    //int realhandle = NET_DVR_RealPlay(0, &ClientInfo);
    if (realhandle < 0)
    {
        printf("NET_DVR_RealPlay_V30 error\n");
        NET_DVR_Logout(lUserID);
        NET_DVR_Cleanup();
        return -1;
    }
    return 0;
}

