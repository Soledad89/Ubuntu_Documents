#include <QtGui/QApplication>
#include "widget.h"
#include "ml_gvidmw.h"
#include <QTextCodec>
int main(int argc, char *argv[])
{
    QTextCodec::setCodecForCStrings(QTextCodec::codecForLocale());
    QTextCodec::setCodecForLocale(QTextCodec::codecForLocale());
    QTextCodec::setCodecForTr(QTextCodec::codecForLocale());
    QApplication a(argc, argv);


    int ret=ML_GVID_Init();
    Widget w;
//    ret=ML_GVID_OpenPPI(1,0,0,500,500);

    w.show();
    
    return a.exec();
}
