#include "videowidget.h"
#include "ui_videowidget.h"
#include  <QMessageBox>
#include <QDebug>

VideoWidget::VideoWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::VideoWidget)
{
    ui->setupUi(this);

    NET_DVR_Init();
    //设置连接时间与重连时间
//    NET_DVR_SetConnectTime(2000, 1);
//    NET_DVR_SetReconnect(10000, true);

    m_realplay =new RealPlay();
    //qDebug() << "VideoWidget winid:" << this->winId();

    ui->gridLayout->addWidget(m_realplay);

    m_realplay->play();

    m_realplay->show();

}

VideoWidget::~VideoWidget()
{
    delete ui;
    if (m_realplay != NULL)
    {
        delete m_realplay;
        m_realplay = NULL;
    }

    NET_DVR_Cleanup();
}
