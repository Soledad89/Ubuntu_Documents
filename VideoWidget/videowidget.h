#ifndef VIDEOWIDGET_H
#define VIDEOWIDGET_H

#include <QWidget>
#include <QFrame>
//realplay
#include "realplay.h"

namespace Ui {
class VideoWidget;
}

class VideoWidget : public QWidget
{
    Q_OBJECT

public:
    explicit VideoWidget(QWidget *parent = 0);
    ~VideoWidget();

private:
    Ui::VideoWidget *ui;

    RealPlay *m_realplay;

};

#endif // VIDEOWIDGET_H
