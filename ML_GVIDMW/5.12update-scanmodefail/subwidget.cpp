#include "subwidget.h"
#include <QtGui>
subwidget::subwidget(QRect & dst1, QImage *image1,bool isARWindow,quint32 arbgcolor,QWidget *parent) :
    QWidget(parent),
    dst(dst1),
    image(image1),
    isAR(isARWindow),
    arbackcolor(arbgcolor),
    ardecayby(32)
{
    arbackcolor=arbgcolor;
    b=(arbackcolor)&0xff;
    g=(arbackcolor>>8)&0xff;
    r=(arbackcolor>>16)&0xff;
    QTimer* timer=new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(update()));
    timer->start(50);

    if(isAR)
    {
        connect(timer, SIGNAL(timeout()), this, SLOT(ardecay()));
    }
    this->setAttribute(Qt::WA_DeleteOnClose);

}
subwidget::subwidget(QWidget *parent) :
    QWidget(parent),
    dst(),
    image(new QImage()),
    isAR(false),
    arbackcolor(0),
    ardecayby(10)
{
    b=(arbackcolor)&0xff;
    g=(arbackcolor>>8)&0xff;
    r=(arbackcolor>>16)&0xff;

}
void subwidget::setdst(QRect& rec)
{
    dst=rec;
}

void subwidget::paintEvent( QPaintEvent *event)
{
    QPainter painter(this);//if static added,memory erro;
    painter.drawImage(dst, *image);
//    painter.drawImage(*src, *image, *dst);
//    if(isAR) image->fill(QColor((arbackcolor>>16)&0xff,(arbackcolor>>8)&0xff,arbackcolor&0xff));//每次画完AR当前线条再用AR背景颜色覆盖画布。

}

void subwidget::ardecay()
{
    int width=image->width();
    int height=image->height();
    uchar* imagebits=image->bits();

    for(int i=0;i<height;i++)
    {
        imagebits=image->scanLine(i);
        for(int j=0;j<width;j++)
        {
            if(!((imagebits[j*4]==b)&&(imagebits[j*4+1]==g)&&(imagebits[j*4+2]==r)))
            {
                imagebits[j*4+0]=imagebits[j*4]>ardecayby+32?imagebits[j*4]-ardecayby:b;//blue
                imagebits[j*4+1]=imagebits[j*4+1]>ardecayby+32?imagebits[j*4+1]-ardecayby:g;//green
                imagebits[j*4+2]=imagebits[j*4+2]>ardecayby+32?imagebits[j*4+2]-ardecayby:r;//red
                //imagebits[j*4+3]=imagebits[j*4+3]>32?imagebits[j*4+3]-32:0;
            }

        }
    }
}
