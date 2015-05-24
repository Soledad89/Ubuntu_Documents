#include "subwidget.h"
#include <QtGui>

extern short minisrconppi1[2];//the center of src mini on ppi
extern short minisrconppi2[2];//the center of src mini on ppi
extern bool bshowminionppi;
extern bool bshowmarkonPPI;
extern bool bshowcircleonppi;

subwidget::subwidget(QRect & dst1, QImage *image1,bool isARWindow,quint32 arbgcolor,QWidget *parent) :
    QWidget(parent),
    dst(dst1),
    image(image1),
    isAR(isARWindow),
    drawMini1(false),
    drawMini2(false),
    arbackcolor(arbgcolor),
    ardecayby(32),
    isminiscale(false),
    isPPIwin1(false),
    isPPIwin2(false),
    penmarkcolor(Qt::green),
    northIndex(0)

{
    arbackcolor=arbgcolor;
    b=(arbackcolor)&0xff;
    g=(arbackcolor>>8)&0xff;
    r=(arbackcolor>>16)&0xff;

    scalenum=1;

    QTimer* timer=new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(update()));
    timer->start(50);

    if(isAR)
    {
        connect(timer, SIGNAL(timeout()), this, SLOT(ardecay()));
    }
    this->setAttribute(Qt::WA_DeleteOnClose);

}

void subwidget::paintEvent( QPaintEvent *event)
{
    QPainter painter(this);//if static added,memory erro;
    if(isminiscale)
    {
        minisrc=QRect(SURF_MINI_WIDTH/2-SURF_MINI_WIDTH/(2*scalenum),SURF_MINI_HEIGHT/2-SURF_MINI_HEIGHT/(2*scalenum),SURF_MINI_WIDTH/scalenum,SURF_MINI_HEIGHT/scalenum);
        painter.drawImage(dst, *image,minisrc);
    }
    else
    {
        painter.drawImage(dst, *image);

        float zoominout=dst.width()/1200.0;

        painter.setPen(Qt::green);
        painter.setPen(Qt::DashLine);
        if(isPPIwin1&&bshowcircleonppi&&bshowmarkonPPI)
        {
            for(int i=0;i<6;i++)
            {
                 painter.drawEllipse(QRect(100*i*zoominout,100*i*zoominout,(1200-i*200)*zoominout,(1200-i*200)*zoominout));
            }

            painter.rotate(northIndex);
            painter.drawLine(600*zoominout,600*zoominout,600*zoominout,0);

        }
        if(isPPIwin2&&bshowcircleonppi&&bshowmarkonPPI)
        {
            for(int i=0;i<6;i++)
            {
                painter.drawEllipse(QRect(100*i*zoominout,100*i*zoominout,(1200-i*200)*zoominout,(1200-i*200)*zoominout));
            }

            painter.rotate(northIndex);
            painter.drawLine(600*zoominout,600*zoominout,600*zoominout,0);

        }
    //--------draw mini win on ppi---------
        painter.save();
        painter.setPen(Qt::green);
        painter.setPen(Qt::SolidLine);
        if(isPPIwin1&&bshowminionppi&&bshowmarkonPPI)
        {
            painter.drawRect(QRect((minisrconppi1[0]-85)*zoominout,(minisrconppi1[1]-85)*zoominout,170*zoominout,170*zoominout));//(minisrconppi1[0],minisrconppi1[1],170,170)
        }
        if(isPPIwin2&&bshowminionppi&&bshowmarkonPPI)
        {
            painter.drawRect(QRect((minisrconppi2[0]-85)*zoominout,(minisrconppi2[1]-85)*zoominout,170*zoominout,170*zoominout));//(minisrconppi2[0],minisrconppi2[1],170,170)
        }
        painter.restore();
   //---------draw scaled mini original on ppi-----

        painter.setPen(Qt::green);
        painter.setPen(Qt::DashLine);
        if(drawMini1)
        {

            float tmpsize=170.0/scalenum;
            if(isPPIwin1&&bshowminionppi&&bshowmarkonPPI)
            {
                painter.drawRect(QRect((minisrconppi1[0])*zoominout-tmpsize*zoominout/2.0,(minisrconppi1[1])*zoominout-tmpsize*zoominout/2.0,tmpsize*zoominout,tmpsize*zoominout));
            }

        }
        else
        {
            if(drawMini2)
            {

                float tmpsize=170.0/scalenum;
                if(isPPIwin2&&bshowminionppi&&bshowmarkonPPI)
                {
                    painter.drawRect(QRect((minisrconppi2[0])*zoominout-tmpsize*zoominout/2.0,(minisrconppi2[1])*zoominout-tmpsize*zoominout/2.0,tmpsize*zoominout,tmpsize*zoominout));//(minisrconppi1[0],minisrconppi1[1],170,170)
                }
            }
        }


    }

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
