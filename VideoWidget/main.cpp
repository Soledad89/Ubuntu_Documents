#include "videowidget.h"
#include <QApplication>
#include "realplay.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    VideoWidget w;
    w.show();
    return a.exec();
}
