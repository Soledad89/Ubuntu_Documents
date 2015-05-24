#-------------------------------------------------
#
# Project created by QtCreator 2015-05-15T08:57:15
#
#-------------------------------------------------

QT       += core gui

TARGET = test_for_MLGVIDMW
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp

HEADERS  += widget.h

FORMS    += widget.ui

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../ML_GVIDMW-build-desktop-Qt_4_8_2__4_8_2____/release/ -lML_GVIDMW
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../ML_GVIDMW-build-desktop-Qt_4_8_2__4_8_2____/debug/ -lML_GVIDMW
else:unix:!macx:!symbian: LIBS += -L$$PWD/../ML_GVIDMW-build-desktop-Qt_4_8_2__4_8_2____/ -lML_GVIDMW

INCLUDEPATH += $$PWD/../ML_GVIDMW
DEPENDPATH += $$PWD/../ML_GVIDMW

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../ML_GVIDMW-build-desktop-Qt_4_8_2__4_8_2____/release/ -lML_GVIDMW
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../ML_GVIDMW-build-desktop-Qt_4_8_2__4_8_2____/debug/ -lML_GVIDMW
else:unix:!macx:!symbian: LIBS += -L$$PWD/../ML_GVIDMW-build-desktop-Qt_4_8_2__4_8_2____/ -lML_GVIDMW

INCLUDEPATH += $$PWD/../ML_GVIDMW
DEPENDPATH += $$PWD/../ML_GVIDMW

unix:!macx: LIBS += -L$$PWD/../build-ML_GVIDMW-桌面-Debug/ -lML_GVIDMW

INCLUDEPATH += $$PWD/../ML_GVIDMW
DEPENDPATH += $$PWD/../ML_GVIDMW
