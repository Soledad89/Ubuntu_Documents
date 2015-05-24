#ifndef SUBWIDGET_H
#define SUBWIDGET_H

#include <QWidget>
#include "ML_GVIDMW_sys.h"

class subwidget : public QWidget
{
    Q_OBJECT
public:
    explicit subwidget(QRect & , QImage *,bool isARWin=false,quint32 bgcolor=0,QWidget *parent = 0);
    void setardecayby(quint8 const &tmpardecay){ardecayby=tmpardecay;}
    void setarbackcolor1(quint32 const &tmpcolor){arbackcolor=tmpcolor;}
    void setscale (short valminiscale){isminiscale=true;scalenum=valminiscale;}
    void setPPIwin1(){isPPIwin1=true;}
    void setPPIwin2(){isPPIwin2=true;}
    void setminiwin1(short valminiscale){drawMini1=true;scalenum=valminiscale;}
    void setminiwin2(short valminiscale){drawMini2=true;scalenum=valminiscale;}
    void setmarklinecolor(int r,int g,int b,int opaque=255){penmarkcolor=QColor(r,g,b,opaque);}//设置PI标绘线颜色

private:
    QRect  dst;//the region where the Image to draw on,image scaled automatic
    QRect minisrc;//mini 源位置，for scale 1-8
    QImage* image;
    bool isAR;
    bool drawMini1,drawMini2;//判断小窗是否缩放，若缩放，需要画出缩放画面对应的小窗
    quint32 arbackcolor;//0x00rrggbb
    quint8 ardecayby;//every time,the strength decreased by ardecay,ardecay the larger,tail the shorter.range 0-128,recommend 0 1 2 4 8 16 32 64 128
    int r,g,b;// r g b value of AR background color
    bool isminiscale;
    short scalenum;
    bool isPPIwin1,isPPIwin2;//to define whether is PPI win for draw mini win on ppi
    QColor penmarkcolor;
signals:
    
public slots:
    void ardecay();
protected:
void paintEvent( QPaintEvent *event);
    
};

#endif // SUBWIDGET_H
