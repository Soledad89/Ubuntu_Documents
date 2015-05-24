#-------------------------------------------------
#
# Project created by QtCreator 2015-05-17T20:44:41
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = VideoWidget
TEMPLATE = app


SOURCES += main.cpp\
    realplay.cpp \
    videowidget.cpp

HEADERS  += \
    realplay.h \
    HCNetSDK.h \
    videowidget.h

FORMS    += \
    realplay.ui \
    videowidget.ui

OTHER_FILES += \
    VideoWidget.pro.user

unix {
LIBS += -L../lib/ -Wl,-rpath=./:./HCNetSDKCom:../lib -lhcnetsdk -lPlayCtrl -lMPCtrl
}
