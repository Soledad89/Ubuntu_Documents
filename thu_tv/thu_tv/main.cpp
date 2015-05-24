#include <QtGui/QApplication>
#include "tvwidget.h"
#include "HCNetSDK.h"
#include "LinuxPlayM4.h"
//#include "PlayM4.h"
#include <stdio.h>

int main(int argc, char *argv[])
{
     QApplication a(argc, argv);

    tvwidget w1;

    w1.show();
    
    return a.exec();
}
