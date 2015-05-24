#-------------------------------------------------
#
# Project created by QtCreator 2015-05-19T03:23:39
#
#-------------------------------------------------

QT       += core gui network


TARGET = thu_tv
TEMPLATE = app
win32 {
}

unix {
LIBS += -L../lib/ -Wl,-rpath=./:./HCNetSDKCom:../lib -lhcnetsdk -lPlayCtrl -lMPCtrl
}


SOURCES += main.cpp\
        tvwidget.cpp

HEADERS  += tvwidget.h

FORMS    += tvwidget.ui
