/********************************************************************************
** Form generated from reading UI file 'qtclientdemo.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTCLIENTDEMO_H
#define UI_QTCLIENTDEMO_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTreeView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtClientDemoClass
{
public:
    QWidget *centralwidget;
    QFrame *line_25;
    QPushButton *Manage_pushButton;
    QPushButton *pushButton_logaramsave;
    QFrame *line_9;
    QPushButton *Other_pushButton;
    QFrame *line_12;
    QFrame *line_10;
    QFrame *line_13;
    QPushButton *Exit_pushButton;
    QFrame *line_7;
    QFrame *line_3;
    QTreeView *DVRsets_treeView;
    QPushButton *PlayBack_pushButton;
    QRadioButton *radioButton_alarminfo;
    QFrame *line;
    QRadioButton *radioButton_locallog;
    QPushButton *pushButton_logaramclear;
    QLabel *CurrDataTime_label;
    QPushButton *pushButton_logaramtest;
    QFrame *line_8;
    QFrame *line_22;
    QFrame *line_6;
    QFrame *line_11;
    QFrame *line_14;
    QFrame *line_24;
    QPushButton *Preview_pushButton;
    QFrame *line_23;
    QPushButton *pushButton_logaramlistconf;
    QPushButton *Configure_pushButton;
    QFrame *line_2;
    QWidget *verticalLayout;
    QVBoxLayout *vboxLayout;
    QLabel *m_labelNetSDKVersion;
    QLabel *m_labelPlayerSDKVersion;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *QtClientDemoClass)
    {
        if (QtClientDemoClass->objectName().isEmpty())
            QtClientDemoClass->setObjectName(QString::fromUtf8("QtClientDemoClass"));
        QtClientDemoClass->resize(1049, 877);
        QtClientDemoClass->setMinimumSize(QSize(1049, 877));
        QtClientDemoClass->setMaximumSize(QSize(1049, 877));
        centralwidget = new QWidget(QtClientDemoClass);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        line_25 = new QFrame(centralwidget);
        line_25->setObjectName(QString::fromUtf8("line_25"));
        line_25->setGeometry(QRect(200, 820, 841, 20));
        line_25->setFrameShape(QFrame::HLine);
        line_25->setFrameShadow(QFrame::Sunken);
        Manage_pushButton = new QPushButton(centralwidget);
        Manage_pushButton->setObjectName(QString::fromUtf8("Manage_pushButton"));
        Manage_pushButton->setGeometry(QRect(540, 20, 91, 41));
        pushButton_logaramsave = new QPushButton(centralwidget);
        pushButton_logaramsave->setObjectName(QString::fromUtf8("pushButton_logaramsave"));
        pushButton_logaramsave->setGeometry(QRect(950, 770, 75, 23));
        line_9 = new QFrame(centralwidget);
        line_9->setObjectName(QString::fromUtf8("line_9"));
        line_9->setGeometry(QRect(900, 60, 141, 21));
        line_9->setFrameShape(QFrame::HLine);
        line_9->setFrameShadow(QFrame::Sunken);
        Other_pushButton = new QPushButton(centralwidget);
        Other_pushButton->setObjectName(QString::fromUtf8("Other_pushButton"));
        Other_pushButton->setGeometry(QRect(660, 20, 91, 41));
        line_12 = new QFrame(centralwidget);
        line_12->setObjectName(QString::fromUtf8("line_12"));
        line_12->setGeometry(QRect(160, 10, 20, 61));
        line_12->setFrameShape(QFrame::VLine);
        line_12->setFrameShadow(QFrame::Sunken);
        line_10 = new QFrame(centralwidget);
        line_10->setObjectName(QString::fromUtf8("line_10"));
        line_10->setGeometry(QRect(170, 60, 721, 20));
        line_10->setFrameShape(QFrame::HLine);
        line_10->setFrameShadow(QFrame::Sunken);
        line_13 = new QFrame(centralwidget);
        line_13->setObjectName(QString::fromUtf8("line_13"));
        line_13->setGeometry(QRect(880, 10, 20, 61));
        line_13->setFrameShape(QFrame::VLine);
        line_13->setFrameShadow(QFrame::Sunken);
        Exit_pushButton = new QPushButton(centralwidget);
        Exit_pushButton->setObjectName(QString::fromUtf8("Exit_pushButton"));
        Exit_pushButton->setGeometry(QRect(780, 20, 91, 41));
        line_7 = new QFrame(centralwidget);
        line_7->setObjectName(QString::fromUtf8("line_7"));
        line_7->setGeometry(QRect(1030, 10, 20, 61));
        line_7->setFrameShape(QFrame::VLine);
        line_7->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(centralwidget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(0, 10, 20, 61));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);
        DVRsets_treeView = new QTreeView(centralwidget);
        DVRsets_treeView->setObjectName(QString::fromUtf8("DVRsets_treeView"));
        DVRsets_treeView->setGeometry(QRect(10, 80, 171, 751));
        PlayBack_pushButton = new QPushButton(centralwidget);
        PlayBack_pushButton->setObjectName(QString::fromUtf8("PlayBack_pushButton"));
        PlayBack_pushButton->setGeometry(QRect(420, 20, 91, 41));
        radioButton_alarminfo = new QRadioButton(centralwidget);
        radioButton_alarminfo->setObjectName(QString::fromUtf8("radioButton_alarminfo"));
        radioButton_alarminfo->setGeometry(QRect(940, 745, 101, 20));
        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(10, 60, 151, 21));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        radioButton_locallog = new QRadioButton(centralwidget);
        radioButton_locallog->setObjectName(QString::fromUtf8("radioButton_locallog"));
        radioButton_locallog->setGeometry(QRect(850, 745, 91, 17));
        pushButton_logaramclear = new QPushButton(centralwidget);
        pushButton_logaramclear->setObjectName(QString::fromUtf8("pushButton_logaramclear"));
        pushButton_logaramclear->setGeometry(QRect(850, 770, 75, 23));
        CurrDataTime_label = new QLabel(centralwidget);
        CurrDataTime_label->setObjectName(QString::fromUtf8("CurrDataTime_label"));
        CurrDataTime_label->setGeometry(QRect(930, 10, 91, 51));
        pushButton_logaramtest = new QPushButton(centralwidget);
        pushButton_logaramtest->setObjectName(QString::fromUtf8("pushButton_logaramtest"));
        pushButton_logaramtest->setGeometry(QRect(950, 800, 75, 23));
        line_8 = new QFrame(centralwidget);
        line_8->setObjectName(QString::fromUtf8("line_8"));
        line_8->setGeometry(QRect(900, 0, 141, 20));
        line_8->setFrameShape(QFrame::HLine);
        line_8->setFrameShadow(QFrame::Sunken);
        line_22 = new QFrame(centralwidget);
        line_22->setObjectName(QString::fromUtf8("line_22"));
        line_22->setGeometry(QRect(1030, 740, 20, 91));
        line_22->setFrameShape(QFrame::VLine);
        line_22->setFrameShadow(QFrame::Sunken);
        line_6 = new QFrame(centralwidget);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setGeometry(QRect(890, 10, 20, 61));
        line_6->setFrameShape(QFrame::VLine);
        line_6->setFrameShadow(QFrame::Sunken);
        line_11 = new QFrame(centralwidget);
        line_11->setObjectName(QString::fromUtf8("line_11"));
        line_11->setGeometry(QRect(170, 0, 721, 20));
        line_11->setFrameShape(QFrame::HLine);
        line_11->setFrameShadow(QFrame::Sunken);
        line_14 = new QFrame(centralwidget);
        line_14->setObjectName(QString::fromUtf8("line_14"));
        line_14->setGeometry(QRect(10, 0, 151, 20));
        line_14->setFrameShape(QFrame::HLine);
        line_14->setFrameShadow(QFrame::Sunken);
        line_24 = new QFrame(centralwidget);
        line_24->setObjectName(QString::fromUtf8("line_24"));
        line_24->setGeometry(QRect(200, 730, 841, 20));
        line_24->setFrameShape(QFrame::HLine);
        line_24->setFrameShadow(QFrame::Sunken);
        Preview_pushButton = new QPushButton(centralwidget);
        Preview_pushButton->setObjectName(QString::fromUtf8("Preview_pushButton"));
        Preview_pushButton->setGeometry(QRect(300, 20, 91, 41));
        line_23 = new QFrame(centralwidget);
        line_23->setObjectName(QString::fromUtf8("line_23"));
        line_23->setGeometry(QRect(190, 740, 21, 91));
        line_23->setFrameShape(QFrame::VLine);
        line_23->setFrameShadow(QFrame::Sunken);
        pushButton_logaramlistconf = new QPushButton(centralwidget);
        pushButton_logaramlistconf->setObjectName(QString::fromUtf8("pushButton_logaramlistconf"));
        pushButton_logaramlistconf->setGeometry(QRect(850, 803, 75, 23));
        Configure_pushButton = new QPushButton(centralwidget);
        Configure_pushButton->setObjectName(QString::fromUtf8("Configure_pushButton"));
        Configure_pushButton->setGeometry(QRect(180, 20, 91, 41));
        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(150, 10, 20, 61));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        verticalLayout = new QWidget(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setGeometry(QRect(200, 739, 631, 91));
        vboxLayout = new QVBoxLayout(verticalLayout);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        m_labelNetSDKVersion = new QLabel(centralwidget);
        m_labelNetSDKVersion->setObjectName(QString::fromUtf8("m_labelNetSDKVersion"));
        m_labelNetSDKVersion->setGeometry(QRect(20, 20, 131, 17));
        m_labelPlayerSDKVersion = new QLabel(centralwidget);
        m_labelPlayerSDKVersion->setObjectName(QString::fromUtf8("m_labelPlayerSDKVersion"));
        m_labelPlayerSDKVersion->setGeometry(QRect(20, 40, 131, 17));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(190, 80, 851, 651));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        QtClientDemoClass->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(QtClientDemoClass);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        QtClientDemoClass->setStatusBar(statusbar);

        retranslateUi(QtClientDemoClass);

        QMetaObject::connectSlotsByName(QtClientDemoClass);
    } // setupUi

    void retranslateUi(QMainWindow *QtClientDemoClass)
    {
        QtClientDemoClass->setWindowTitle(QApplication::translate("QtClientDemoClass", "MainWindow", 0, QApplication::UnicodeUTF8));
        Manage_pushButton->setText(QApplication::translate("QtClientDemoClass", "Management", 0, QApplication::UnicodeUTF8));
        pushButton_logaramsave->setText(QApplication::translate("QtClientDemoClass", "Save", 0, QApplication::UnicodeUTF8));
        Other_pushButton->setText(QApplication::translate("QtClientDemoClass", "Other", 0, QApplication::UnicodeUTF8));
        Exit_pushButton->setText(QApplication::translate("QtClientDemoClass", "Exit", 0, QApplication::UnicodeUTF8));
        PlayBack_pushButton->setText(QApplication::translate("QtClientDemoClass", "Playback", 0, QApplication::UnicodeUTF8));
        radioButton_alarminfo->setText(QApplication::translate("QtClientDemoClass", "Alarm info", 0, QApplication::UnicodeUTF8));
        radioButton_locallog->setText(QApplication::translate("QtClientDemoClass", "Local log", 0, QApplication::UnicodeUTF8));
        pushButton_logaramclear->setText(QApplication::translate("QtClientDemoClass", "Clean", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        CurrDataTime_label->setToolTip(QApplication::translate("QtClientDemoClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\256\213\344\275\223'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        CurrDataTime_label->setWhatsThis(QApplication::translate("QtClientDemoClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\256\213\344\275\223'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        CurrDataTime_label->setText(QApplication::translate("QtClientDemoClass", "TextLabel", 0, QApplication::UnicodeUTF8));
        pushButton_logaramtest->setText(QApplication::translate("QtClientDemoClass", "Test", 0, QApplication::UnicodeUTF8));
        Preview_pushButton->setText(QApplication::translate("QtClientDemoClass", "Preview", 0, QApplication::UnicodeUTF8));
        pushButton_logaramlistconf->setText(QApplication::translate("QtClientDemoClass", "List config", 0, QApplication::UnicodeUTF8));
        Configure_pushButton->setText(QApplication::translate("QtClientDemoClass", "Configure", 0, QApplication::UnicodeUTF8));
        m_labelNetSDKVersion->setText(QApplication::translate("QtClientDemoClass", "HCNetSDK", 0, QApplication::UnicodeUTF8));
        m_labelPlayerSDKVersion->setText(QApplication::translate("QtClientDemoClass", "PlayCtrl", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QtClientDemoClass: public Ui_QtClientDemoClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTCLIENTDEMO_H
