 /*
 * Copyright(C) 2010,Custom Co., Ltd 
 *    FileName: FramePlayWnd.cpp
 * Description: 
 *     Version: 1.0
 *      Author: panyadong
 * Create Date: 2010-6-24
 * Modification History：
 */

#include <QtGui>
#include "FramePlayWnd.h"

CFramePlayWnd::CFramePlayWnd(QWidget *parent): QFrame(parent)
{
    ui.setupUi(this);
    m_iBorderWidth = 2;
    m_iBorderHeiht = 2;

    m_pframePlay = ui.framePlayWnd;
    m_pframePlay->move(m_iBorderWidth, m_iBorderHeiht);//和上面的border保持一致
    m_pframePlay->setStyleSheet("border: none;");

    //qDebug() << "FramePlaywin winid:" << this->winId();

}

CFramePlayWnd::~CFramePlayWnd()
{
}


WId CFramePlayWnd::GetPlayWndId()
{
    return m_pframePlay->winId();
}

int CFramePlayWnd::GetPlayRect(CLIENT_PLAY_RECT* pPlayRect)
{
    if (NULL == pPlayRect)
    {
        return -1;
    }
    pPlayRect->iX = x() + m_iBorderWidth;
    pPlayRect->iY = y() + m_iBorderHeiht;

    //计算尺寸
    pPlayRect->iWidth = m_pframePlay->width();
    pPlayRect->iHeight = m_pframePlay->height();
    return 0;
}



