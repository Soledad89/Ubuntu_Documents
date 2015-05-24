/*
 * Copyright(C) 2010,Custom Co., Ltd 
 *    FileName: FramePlayWnd.h
 * Description: 
 *     Version: 1.0
 *      Author: panyadong
 * Create Date: 2010-6-24
 * Modification History��
 */
#ifndef FRAMEPLAYWND_H
#define FRAMEPLAYWND_H

#include <QFrame>
#include "ui_FramePlayWnd.h"
#include "HCNetSDK.h"
//��������
typedef struct tagPlayRect
{
    int iX;
    int iY;
    int iWidth;
    int iHeight;
}CLIENT_PLAY_RECT, *LPCLIENT_PLAY_RECT;

//�ṩ���Ŵ��ڻ�����
class CFramePlayWnd : public QFrame
{
    Q_OBJECT

public:
    CFramePlayWnd(QWidget *parent = 0);
    ~CFramePlayWnd();

    WId GetPlayWndId();
    int GetPlayRect(CLIENT_PLAY_RECT* pPlayRect);


private:
    Ui::CFramePlayWndClass ui;

    QFrame *m_pframePlay;
    int m_iBorderWidth;
    int m_iBorderHeiht;
};

#endif // FRAMEPLAYWND_H
