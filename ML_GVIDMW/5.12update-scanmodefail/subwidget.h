#ifndef SUBWIDGET_H
#define SUBWIDGET_H

#include <QWidget>

class subwidget : public QWidget
{
    Q_OBJECT
public:
    explicit subwidget(QRect & , QImage *,bool isARWin=false,quint32 bgcolor=0,QWidget *parent = 0);
    explicit subwidget(QWidget *parent = 0);
    void setdst(QRect&);
    void setardecayby(quint8 const &tmpardecay){ardecayby=tmpardecay;}
    void setarbackcolor1(quint32 const &tmpcolor){arbackcolor=tmpcolor;}

private:
    QRect  dst;//the region where the Image to draw on,image scaled automatic
    QImage* image;
    bool isAR;
    quint32 arbackcolor;//0x00rrggbb
    quint8 ardecayby;//every time,the strength decreased by ardecay,ardecay the larger,tail the shorter.range 0-128,recommend 0 1 2 4 8 16 32 64 128
    quint8 r,g,b;// r g b value of AR background color

signals:
    
public slots:
    void ardecay();
protected:
void paintEvent( QPaintEvent *event);
    
};

#endif // SUBWIDGET_H
