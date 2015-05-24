#include <QtGui/QApplication>
#include "thu_gvidwidget.h"
#include <QTextCodec>
#include <ML_GVIDMW.h>

int main(int argc, char *argv[])
{
    QTextCodec::setCodecForCStrings(QTextCodec::codecForLocale());
    QTextCodec::setCodecForLocale(QTextCodec::codecForLocale());
    QTextCodec::setCodecForTr(QTextCodec::codecForLocale());

    QApplication a(argc, argv);
    thu_gvidwidget w;
//    w.show();

    freePpiThread();

    return a.exec();
}
