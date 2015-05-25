/*
 * Copyright(C) 2010,Custom Co., Ltd 
 *    FileName: realplay.h
 * Description: ʵʱԤ��
 *     Version: 1.0
 *      Author: wanggongpu
 * Create Date: 2009-11,12
 * Modification History��
 *    2010-6-25 panyadong �����Ŵ��ڼӱ߿�
 */
#ifndef REALPLAY_H
#define REALPLAY_H

#include <QtGui>
#include "ui_realplay.h"
#include <QFrame>

#include "realplay.h"
#include "HCNetSDK.h"
  
class RealPlay : public QWidget
{
    Q_OBJECT

public:
	
    RealPlay(QWidget *parent = 0);
    ~RealPlay();

    int  play();

private:
    Ui::RealPlayClass ui;

    QWidget *m_pframePlay;

};
#endif // REALPLAY_H

