#-------------------------------------------------
#
# Project created by QtCreator 2015-05-10T13:10:22
#
#-------------------------------------------------

QT       += network

TARGET = ML_GVIDMW
TEMPLATE = lib

DEFINES += ML_GVIDMW_LIBRARY

SOURCES += ml_gvidmw.cpp \
    udpserver.cpp \
    subwidget.cpp \
    ppitime.cpp \
    ppi.cpp \
    pcidev.cpp \
    painter.cpp \
    mywidget.cpp \
    mythread.cpp \
    mycolor.cpp \
    mark.cpp \
    layers.cpp \
    datapool.cpp \
    complex.cpp \
    AR.cpp \
    yh.cpp

HEADERS += ml_gvidmw.h\
        ML_GVIDMW_global.h \
    yh.h \
    udpserver.h \
    subwidget.h \
    secSN.h \
    ppitime.h \
    ppidef.h \
    ppi.h \
    pcidev.h \
    pcictldef.h \
    painter.h \
    mywidget.h \
    mythread.h \
    mycolor.h \
    ML_GVIDMW_sys.h \
    mark.h \
    layers.h \
    fbinclude.h \
    deqtrace.h \
    debug.h \
    datapool.h \
    complex.h \
    ARPAInfo.h \
    AR.h

symbian {
    MMP_RULES += EXPORTUNFROZEN
    TARGET.UID3 = 0xE1F41E2C
    TARGET.CAPABILITY = 
    TARGET.EPOCALLOWDLLDATA = 1
    addFiles.sources = ML_GVIDMW.dll
    addFiles.path = !:/sys/bin
    DEPLOYMENT += addFiles
}

unix:!symbian {
    maemo5 {
        target.path = /opt/usr/lib
    } else {
        target.path = /usr/lib
    }
    INSTALLS += target
}
