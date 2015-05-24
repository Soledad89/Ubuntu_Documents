/********************************************************************************
** Form generated from reading UI file 'realplay.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REALPLAY_H
#define UI_REALPLAY_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RealPlayClass
{
public:
    QComboBox *comboBox_windowsnum;
    QLabel *label_3;
    QFrame *line_24;
    QSlider *horizontalSlider_hue;
    QLabel *label_12;
    QFrame *line_27;
    QSlider *horizontalSlider_saturation;
    QFrame *line_9;
    QLabel *label;
    QSlider *horizontalSlider_volume;
    QFrame *line_22;
    QFrame *line_25;
    QFrame *line_2;
    QFrame *line;
    QPushButton *pushButton_largeaperture;
    QFrame *line_5;
    QFrame *line_13;
    QLabel *label_13;
    QSlider *horizontalSlider_contrast;
    QPushButton *pushButton_savefile;
    QFrame *line_12;
    QLabel *label_15;
    QPushButton *pushButton_right;
    QLabel *label_2;
    QFrame *line_11;
    QFrame *line_26;
    QLabel *label_14;
    QFrame *line_3;
    QLabel *label_10;
    QPushButton *pushButton_defaultparameter;
    QPushButton *pushButton_left;
    QLabel *label_11;
    QPushButton *pushButton_forceIframe;
    QPushButton *pushButton_ptzcruisepathcall;
    QFrame *line_8;
    QPushButton *pushButton_down;
    QFrame *line_15;
    QComboBox *comboBox_qualitydemand;
    QLabel *label_9;
    QPushButton *pushButton_ptzcruisepathset;
    QPushButton *pushButton_expandfocus;
    QLabel *label_8;
    QFrame *line_6;
    QFrame *line_10;
    QLabel *label_7;
    QPushButton *pushButton_farfocus;
    QFrame *line_4;
    QPushButton *pushButton_up;
    QFrame *line_19;
    QPushButton *pushButton_nearfocus;
    QPushButton *pushButton_ptzcruisepointset;
    QPushButton *pushButton_scrashPic;
    QLabel *label_6;
    QPushButton *pushButton_trackmemoryrun;
    QFrame *line_14;
    QFrame *line_16;
    QComboBox *comboBox_ptzcruisepoint;
    QPushButton *pushButton_trackmemorystop;
    QLabel *label_5;
    QPushButton *pushButton_narrowfocus;
    QComboBox *comboBox_ptzcruisepath;
    QPushButton *pushButton_trackmemorystart;
    QComboBox *comboBox_ptzspeed;
    QFrame *line_7;
    QPushButton *pushButton_smallaperture;
    QSlider *horizontalSlider_bright;
    QLabel *label_4;
    QPushButton *pushButton_realplay;
    QPushButton *pushButton_ptzcruisepointcall;
    QFrame *line_17;
    QFrame *line_18;
    QFrame *line_20;
    QFrame *line_21;
    QFrame *line_23;
    QFrame *line_28;
    QFrame *line_29;
    QFrame *m_pframePlay;

    void setupUi(QWidget *RealPlayClass)
    {
        if (RealPlayClass->objectName().isEmpty())
            RealPlayClass->setObjectName(QString::fromUtf8("RealPlayClass"));
        RealPlayClass->resize(869, 655);
        RealPlayClass->setMinimumSize(QSize(869, 655));
        RealPlayClass->setMaximumSize(QSize(869, 655));
        comboBox_windowsnum = new QComboBox(RealPlayClass);
        comboBox_windowsnum->setObjectName(QString::fromUtf8("comboBox_windowsnum"));
        comboBox_windowsnum->setGeometry(QRect(468, 620, 51, 22));
        label_3 = new QLabel(RealPlayClass);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(770, 130, 41, 31));
        line_24 = new QFrame(RealPlayClass);
        line_24->setObjectName(QString::fromUtf8("line_24"));
        line_24->setGeometry(QRect(370, 640, 161, 20));
        line_24->setFrameShape(QFrame::HLine);
        line_24->setFrameShadow(QFrame::Sunken);
        horizontalSlider_hue = new QSlider(RealPlayClass);
        horizontalSlider_hue->setObjectName(QString::fromUtf8("horizontalSlider_hue"));
        horizontalSlider_hue->setGeometry(QRect(780, 510, 71, 21));
        horizontalSlider_hue->setOrientation(Qt::Horizontal);
        label_12 = new QLabel(RealPlayClass);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(750, 260, 41, 20));
        line_27 = new QFrame(RealPlayClass);
        line_27->setObjectName(QString::fromUtf8("line_27"));
        line_27->setGeometry(QRect(530, 600, 191, 20));
        line_27->setFrameShape(QFrame::HLine);
        line_27->setFrameShadow(QFrame::Sunken);
        horizontalSlider_saturation = new QSlider(RealPlayClass);
        horizontalSlider_saturation->setObjectName(QString::fromUtf8("horizontalSlider_saturation"));
        horizontalSlider_saturation->setGeometry(QRect(780, 480, 71, 21));
        horizontalSlider_saturation->setOrientation(Qt::Horizontal);
        line_9 = new QFrame(RealPlayClass);
        line_9->setObjectName(QString::fromUtf8("line_9"));
        line_9->setGeometry(QRect(690, 420, 21, 181));
        line_9->setFrameShape(QFrame::VLine);
        line_9->setFrameShadow(QFrame::Sunken);
        label = new QLabel(RealPlayClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(370, 620, 91, 21));
        horizontalSlider_volume = new QSlider(RealPlayClass);
        horizontalSlider_volume->setObjectName(QString::fromUtf8("horizontalSlider_volume"));
        horizontalSlider_volume->setGeometry(QRect(780, 540, 71, 21));
        horizontalSlider_volume->setOrientation(Qt::Horizontal);
        line_22 = new QFrame(RealPlayClass);
        line_22->setObjectName(QString::fromUtf8("line_22"));
        line_22->setGeometry(QRect(10, 600, 351, 20));
        line_22->setFrameShape(QFrame::HLine);
        line_22->setFrameShadow(QFrame::Sunken);
        line_25 = new QFrame(RealPlayClass);
        line_25->setObjectName(QString::fromUtf8("line_25"));
        line_25->setGeometry(QRect(540, 640, 181, 20));
        line_25->setFrameShape(QFrame::HLine);
        line_25->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(RealPlayClass);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(0, 610, 20, 41));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line = new QFrame(RealPlayClass);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(700, 410, 151, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        pushButton_largeaperture = new QPushButton(RealPlayClass);
        pushButton_largeaperture->setObjectName(QString::fromUtf8("pushButton_largeaperture"));
        pushButton_largeaperture->setGeometry(QRect(730, 170, 31, 31));
        line_5 = new QFrame(RealPlayClass);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setGeometry(QRect(360, 610, 20, 41));
        line_5->setFrameShape(QFrame::VLine);
        line_5->setFrameShadow(QFrame::Sunken);
        line_13 = new QFrame(RealPlayClass);
        line_13->setObjectName(QString::fromUtf8("line_13"));
        line_13->setGeometry(QRect(840, 10, 20, 401));
        line_13->setFrameShape(QFrame::VLine);
        line_13->setFrameShadow(QFrame::Sunken);
        label_13 = new QLabel(RealPlayClass);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(740, 310, 91, 20));
        horizontalSlider_contrast = new QSlider(RealPlayClass);
        horizontalSlider_contrast->setObjectName(QString::fromUtf8("horizontalSlider_contrast"));
        horizontalSlider_contrast->setGeometry(QRect(780, 450, 71, 21));
        horizontalSlider_contrast->setOrientation(Qt::Horizontal);
        pushButton_savefile = new QPushButton(RealPlayClass);
        pushButton_savefile->setObjectName(QString::fromUtf8("pushButton_savefile"));
        pushButton_savefile->setGeometry(QRect(100, 620, 71, 23));
        line_12 = new QFrame(RealPlayClass);
        line_12->setObjectName(QString::fromUtf8("line_12"));
        line_12->setGeometry(QRect(694, 10, 12, 401));
        line_12->setFrameShape(QFrame::VLine);
        line_12->setFrameShadow(QFrame::Sunken);
        label_15 = new QLabel(RealPlayClass);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(740, 0, 71, 20));
        pushButton_right = new QPushButton(RealPlayClass);
        pushButton_right->setObjectName(QString::fromUtf8("pushButton_right"));
        pushButton_right->setGeometry(QRect(800, 40, 41, 23));
        label_2 = new QLabel(RealPlayClass);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(770, 89, 41, 31));
        line_11 = new QFrame(RealPlayClass);
        line_11->setObjectName(QString::fromUtf8("line_11"));
        line_11->setGeometry(QRect(700, 210, 151, 20));
        line_11->setFrameShape(QFrame::HLine);
        line_11->setFrameShadow(QFrame::Sunken);
        line_26 = new QFrame(RealPlayClass);
        line_26->setObjectName(QString::fromUtf8("line_26"));
        line_26->setGeometry(QRect(370, 600, 161, 20));
        line_26->setFrameShape(QFrame::HLine);
        line_26->setFrameShadow(QFrame::Sunken);
        label_14 = new QLabel(RealPlayClass);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(740, 360, 91, 20));
        line_3 = new QFrame(RealPlayClass);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(710, 610, 20, 41));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);
        label_10 = new QLabel(RealPlayClass);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(700, 480, 71, 20));
        pushButton_defaultparameter = new QPushButton(RealPlayClass);
        pushButton_defaultparameter->setObjectName(QString::fromUtf8("pushButton_defaultparameter"));
        pushButton_defaultparameter->setGeometry(QRect(750, 570, 61, 21));
        pushButton_left = new QPushButton(RealPlayClass);
        pushButton_left->setObjectName(QString::fromUtf8("pushButton_left"));
        pushButton_left->setGeometry(QRect(710, 40, 41, 23));
        label_11 = new QLabel(RealPlayClass);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(540, 620, 61, 21));
        pushButton_forceIframe = new QPushButton(RealPlayClass);
        pushButton_forceIframe->setObjectName(QString::fromUtf8("pushButton_forceIframe"));
        pushButton_forceIframe->setGeometry(QRect(250, 620, 101, 23));
        pushButton_ptzcruisepathcall = new QPushButton(RealPlayClass);
        pushButton_ptzcruisepathcall->setObjectName(QString::fromUtf8("pushButton_ptzcruisepathcall"));
        pushButton_ptzcruisepathcall->setGeometry(QRect(760, 330, 41, 21));
        line_8 = new QFrame(RealPlayClass);
        line_8->setObjectName(QString::fromUtf8("line_8"));
        line_8->setGeometry(QRect(700, 590, 151, 20));
        line_8->setFrameShape(QFrame::HLine);
        line_8->setFrameShadow(QFrame::Sunken);
        pushButton_down = new QPushButton(RealPlayClass);
        pushButton_down->setObjectName(QString::fromUtf8("pushButton_down"));
        pushButton_down->setGeometry(QRect(750, 60, 51, 23));
        line_15 = new QFrame(RealPlayClass);
        line_15->setObjectName(QString::fromUtf8("line_15"));
        line_15->setGeometry(QRect(700, 0, 41, 20));
        line_15->setFrameShape(QFrame::HLine);
        line_15->setFrameShadow(QFrame::Sunken);
        comboBox_qualitydemand = new QComboBox(RealPlayClass);
        comboBox_qualitydemand->setObjectName(QString::fromUtf8("comboBox_qualitydemand"));
        comboBox_qualitydemand->setGeometry(QRect(600, 620, 111, 22));
        label_9 = new QLabel(RealPlayClass);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(700, 540, 61, 20));
        pushButton_ptzcruisepathset = new QPushButton(RealPlayClass);
        pushButton_ptzcruisepathset->setObjectName(QString::fromUtf8("pushButton_ptzcruisepathset"));
        pushButton_ptzcruisepathset->setGeometry(QRect(800, 330, 41, 21));
        pushButton_expandfocus = new QPushButton(RealPlayClass);
        pushButton_expandfocus->setObjectName(QString::fromUtf8("pushButton_expandfocus"));
        pushButton_expandfocus->setGeometry(QRect(810, 90, 31, 31));
        label_8 = new QLabel(RealPlayClass);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(700, 510, 51, 20));
        line_6 = new QFrame(RealPlayClass);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setGeometry(QRect(520, 610, 20, 41));
        line_6->setFrameShape(QFrame::VLine);
        line_6->setFrameShadow(QFrame::Sunken);
        line_10 = new QFrame(RealPlayClass);
        line_10->setObjectName(QString::fromUtf8("line_10"));
        line_10->setGeometry(QRect(840, 420, 20, 181));
        line_10->setFrameShape(QFrame::VLine);
        line_10->setFrameShadow(QFrame::Sunken);
        label_7 = new QLabel(RealPlayClass);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(700, 450, 61, 20));
        pushButton_farfocus = new QPushButton(RealPlayClass);
        pushButton_farfocus->setObjectName(QString::fromUtf8("pushButton_farfocus"));
        pushButton_farfocus->setGeometry(QRect(810, 130, 31, 31));
        line_4 = new QFrame(RealPlayClass);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(350, 610, 20, 41));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);
        pushButton_up = new QPushButton(RealPlayClass);
        pushButton_up->setObjectName(QString::fromUtf8("pushButton_up"));
        pushButton_up->setGeometry(QRect(750, 20, 51, 23));
        line_19 = new QFrame(RealPlayClass);
        line_19->setObjectName(QString::fromUtf8("line_19"));
        line_19->setGeometry(QRect(10, 640, 351, 20));
        line_19->setFrameShape(QFrame::HLine);
        line_19->setFrameShadow(QFrame::Sunken);
        pushButton_nearfocus = new QPushButton(RealPlayClass);
        pushButton_nearfocus->setObjectName(QString::fromUtf8("pushButton_nearfocus"));
        pushButton_nearfocus->setGeometry(QRect(730, 130, 31, 31));
        pushButton_ptzcruisepointset = new QPushButton(RealPlayClass);
        pushButton_ptzcruisepointset->setObjectName(QString::fromUtf8("pushButton_ptzcruisepointset"));
        pushButton_ptzcruisepointset->setGeometry(QRect(800, 281, 41, 20));
        pushButton_scrashPic = new QPushButton(RealPlayClass);
        pushButton_scrashPic->setObjectName(QString::fromUtf8("pushButton_scrashPic"));
        pushButton_scrashPic->setGeometry(QRect(180, 620, 71, 23));
        label_6 = new QLabel(RealPlayClass);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(700, 420, 71, 20));
        pushButton_trackmemoryrun = new QPushButton(RealPlayClass);
        pushButton_trackmemoryrun->setObjectName(QString::fromUtf8("pushButton_trackmemoryrun"));
        pushButton_trackmemoryrun->setGeometry(QRect(810, 381, 31, 20));
        line_14 = new QFrame(RealPlayClass);
        line_14->setObjectName(QString::fromUtf8("line_14"));
        line_14->setGeometry(QRect(810, 0, 41, 20));
        line_14->setFrameShape(QFrame::HLine);
        line_14->setFrameShadow(QFrame::Sunken);
        line_16 = new QFrame(RealPlayClass);
        line_16->setObjectName(QString::fromUtf8("line_16"));
        line_16->setGeometry(QRect(700, 400, 151, 20));
        line_16->setFrameShape(QFrame::HLine);
        line_16->setFrameShadow(QFrame::Sunken);
        comboBox_ptzcruisepoint = new QComboBox(RealPlayClass);
        comboBox_ptzcruisepoint->setObjectName(QString::fromUtf8("comboBox_ptzcruisepoint"));
        comboBox_ptzcruisepoint->setGeometry(QRect(710, 280, 45, 21));
        pushButton_trackmemorystop = new QPushButton(RealPlayClass);
        pushButton_trackmemorystop->setObjectName(QString::fromUtf8("pushButton_trackmemorystop"));
        pushButton_trackmemorystop->setGeometry(QRect(770, 380, 31, 21));
        label_5 = new QLabel(RealPlayClass);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(730, 220, 81, 20));
        pushButton_narrowfocus = new QPushButton(RealPlayClass);
        pushButton_narrowfocus->setObjectName(QString::fromUtf8("pushButton_narrowfocus"));
        pushButton_narrowfocus->setGeometry(QRect(730, 90, 31, 31));
        comboBox_ptzcruisepath = new QComboBox(RealPlayClass);
        comboBox_ptzcruisepath->setObjectName(QString::fromUtf8("comboBox_ptzcruisepath"));
        comboBox_ptzcruisepath->setGeometry(QRect(710, 330, 45, 21));
        pushButton_trackmemorystart = new QPushButton(RealPlayClass);
        pushButton_trackmemorystart->setObjectName(QString::fromUtf8("pushButton_trackmemorystart"));
        pushButton_trackmemorystart->setGeometry(QRect(720, 380, 41, 21));
        comboBox_ptzspeed = new QComboBox(RealPlayClass);
        comboBox_ptzspeed->setObjectName(QString::fromUtf8("comboBox_ptzspeed"));
        comboBox_ptzspeed->setGeometry(QRect(730, 240, 101, 21));
        line_7 = new QFrame(RealPlayClass);
        line_7->setObjectName(QString::fromUtf8("line_7"));
        line_7->setGeometry(QRect(530, 610, 16, 41));
        line_7->setFrameShape(QFrame::VLine);
        line_7->setFrameShadow(QFrame::Sunken);
        pushButton_smallaperture = new QPushButton(RealPlayClass);
        pushButton_smallaperture->setObjectName(QString::fromUtf8("pushButton_smallaperture"));
        pushButton_smallaperture->setGeometry(QRect(810, 170, 31, 31));
        horizontalSlider_bright = new QSlider(RealPlayClass);
        horizontalSlider_bright->setObjectName(QString::fromUtf8("horizontalSlider_bright"));
        horizontalSlider_bright->setGeometry(QRect(780, 420, 71, 21));
        horizontalSlider_bright->setOrientation(Qt::Horizontal);
        label_4 = new QLabel(RealPlayClass);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(770, 170, 41, 31));
        pushButton_realplay = new QPushButton(RealPlayClass);
        pushButton_realplay->setObjectName(QString::fromUtf8("pushButton_realplay"));
        pushButton_realplay->setGeometry(QRect(20, 620, 71, 23));
        pushButton_ptzcruisepointcall = new QPushButton(RealPlayClass);
        pushButton_ptzcruisepointcall->setObjectName(QString::fromUtf8("pushButton_ptzcruisepointcall"));
        pushButton_ptzcruisepointcall->setGeometry(QRect(760, 280, 41, 21));
        line_17 = new QFrame(RealPlayClass);
        line_17->setObjectName(QString::fromUtf8("line_17"));
        line_17->setGeometry(QRect(700, 310, 41, 20));
        line_17->setFrameShape(QFrame::HLine);
        line_17->setFrameShadow(QFrame::Sunken);
        line_18 = new QFrame(RealPlayClass);
        line_18->setObjectName(QString::fromUtf8("line_18"));
        line_18->setGeometry(QRect(800, 650, 41, 16));
        line_18->setFrameShape(QFrame::HLine);
        line_18->setFrameShadow(QFrame::Sunken);
        line_20 = new QFrame(RealPlayClass);
        line_20->setObjectName(QString::fromUtf8("line_20"));
        line_20->setGeometry(QRect(831, 360, 20, 20));
        line_20->setFrameShape(QFrame::HLine);
        line_20->setFrameShadow(QFrame::Sunken);
        line_21 = new QFrame(RealPlayClass);
        line_21->setObjectName(QString::fromUtf8("line_21"));
        line_21->setGeometry(QRect(790, 260, 61, 20));
        line_21->setFrameShape(QFrame::HLine);
        line_21->setFrameShadow(QFrame::Sunken);
        line_23 = new QFrame(RealPlayClass);
        line_23->setObjectName(QString::fromUtf8("line_23"));
        line_23->setGeometry(QRect(700, 360, 41, 20));
        line_23->setFrameShape(QFrame::HLine);
        line_23->setFrameShadow(QFrame::Sunken);
        line_28 = new QFrame(RealPlayClass);
        line_28->setObjectName(QString::fromUtf8("line_28"));
        line_28->setGeometry(QRect(830, 310, 21, 20));
        line_28->setFrameShape(QFrame::HLine);
        line_28->setFrameShadow(QFrame::Sunken);
        line_29 = new QFrame(RealPlayClass);
        line_29->setObjectName(QString::fromUtf8("line_29"));
        line_29->setGeometry(QRect(700, 260, 51, 21));
        line_29->setFrameShape(QFrame::HLine);
        line_29->setFrameShadow(QFrame::Sunken);
        m_pframePlay = new QFrame(RealPlayClass);
        m_pframePlay->setObjectName(QString::fromUtf8("m_pframePlay"));
        m_pframePlay->setGeometry(QRect(10, 20, 681, 571));
        m_pframePlay->setFrameShape(QFrame::StyledPanel);
        m_pframePlay->setFrameShadow(QFrame::Raised);

        retranslateUi(RealPlayClass);

        QMetaObject::connectSlotsByName(RealPlayClass);
    } // setupUi

    void retranslateUi(QWidget *RealPlayClass)
    {
        RealPlayClass->setWindowTitle(QApplication::translate("RealPlayClass", "RealPlay", 0, QApplication::UnicodeUTF8));
        comboBox_windowsnum->clear();
        comboBox_windowsnum->insertItems(0, QStringList()
         << QApplication::translate("RealPlayClass", "1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "4", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "9", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "16", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "25", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "36", 0, QApplication::UnicodeUTF8)
        );
        label_3->setText(QApplication::translate("RealPlayClass", "Focus", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("RealPlayClass", "preset", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("RealPlayClass", "Window num", 0, QApplication::UnicodeUTF8));
        pushButton_largeaperture->setText(QApplication::translate("RealPlayClass", "+", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("RealPlayClass", "PTZ sequence", 0, QApplication::UnicodeUTF8));
        pushButton_savefile->setText(QApplication::translate("RealPlayClass", "Record", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("RealPlayClass", "PTZ control", 0, QApplication::UnicodeUTF8));
        pushButton_right->setText(QApplication::translate("RealPlayClass", "Right", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("RealPlayClass", "Zoom", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("RealPlayClass", "record cruise", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("RealPlayClass", "Saturation", 0, QApplication::UnicodeUTF8));
        pushButton_defaultparameter->setText(QApplication::translate("RealPlayClass", "Default", 0, QApplication::UnicodeUTF8));
        pushButton_left->setText(QApplication::translate("RealPlayClass", "Left", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("RealPlayClass", "Network", 0, QApplication::UnicodeUTF8));
        pushButton_forceIframe->setText(QApplication::translate("RealPlayClass", "Create I frame", 0, QApplication::UnicodeUTF8));
        pushButton_ptzcruisepathcall->setText(QApplication::translate("RealPlayClass", "Call", 0, QApplication::UnicodeUTF8));
        pushButton_down->setText(QApplication::translate("RealPlayClass", "Down", 0, QApplication::UnicodeUTF8));
        comboBox_qualitydemand->clear();
        comboBox_qualitydemand->insertItems(0, QStringList()
         << QApplication::translate("RealPlayClass", "Most realtime", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "More realtime", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "Realtime,smooth", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "More smooth", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "Most smooth", 0, QApplication::UnicodeUTF8)
        );
        label_9->setText(QApplication::translate("RealPlayClass", "Volume", 0, QApplication::UnicodeUTF8));
        pushButton_ptzcruisepathset->setText(QApplication::translate("RealPlayClass", "set", 0, QApplication::UnicodeUTF8));
        pushButton_expandfocus->setText(QApplication::translate("RealPlayClass", "+", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("RealPlayClass", "Hue", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("RealPlayClass", "Contrast", 0, QApplication::UnicodeUTF8));
        pushButton_farfocus->setText(QApplication::translate("RealPlayClass", "+", 0, QApplication::UnicodeUTF8));
        pushButton_up->setText(QApplication::translate("RealPlayClass", "Up", 0, QApplication::UnicodeUTF8));
        pushButton_nearfocus->setText(QApplication::translate("RealPlayClass", "-", 0, QApplication::UnicodeUTF8));
        pushButton_ptzcruisepointset->setText(QApplication::translate("RealPlayClass", "set", 0, QApplication::UnicodeUTF8));
        pushButton_scrashPic->setText(QApplication::translate("RealPlayClass", "Snapshot", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("RealPlayClass", "Brightness", 0, QApplication::UnicodeUTF8));
        pushButton_trackmemoryrun->setText(QApplication::translate("RealPlayClass", "run", 0, QApplication::UnicodeUTF8));
        comboBox_ptzcruisepoint->clear();
        comboBox_ptzcruisepoint->insertItems(0, QStringList()
         << QApplication::translate("RealPlayClass", "1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "3", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "4", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "5", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "6", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "7", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "8", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "9", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "10", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "11", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "12", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "13", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "14", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "15", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "16", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "17", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "18", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "19", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "20", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "21", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "22", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "23", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "24", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "25", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "26", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "27", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "28", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "29", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "30", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "31", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "32", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "33", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "34", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "35", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "36", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "37", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "38", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "39", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "40", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "41", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "42", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "43", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "44", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "45", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "46", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "47", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "48", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "49", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "50", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "51", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "52", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "53", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "54", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "55", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "56", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "57", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "58", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "59", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "60", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "61", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "62", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "63", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "64", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "65", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "66", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "67", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "68", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "69", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "70", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "71", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "72", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "73", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "74", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "75", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "76", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "77", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "78", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "79", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "80", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "81", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "82", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "83", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "84", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "85", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "86", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "87", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "88", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "89", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "90", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "91", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "92", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "93", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "94", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "95", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "96", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "97", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "98", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "99", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "100", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "101", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "102", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "103", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "104", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "105", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "106", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "107", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "108", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "109", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "110", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "111", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "112", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "113", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "114", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "115", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "116", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "117", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "118", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "119", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "120", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "121", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "122", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "123", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "124", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "125", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "126", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "127", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "128", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "129", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "130", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "131", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "132", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "133", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "134", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "135", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "136", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "137", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "138", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "139", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "140", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "141", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "142", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "143", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "144", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "145", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "146", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "147", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "148", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "149", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "150", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "151", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "152", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "153", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "154", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "155", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "156", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "257", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "158", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "159", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "160", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "161", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "162", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "163", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "164", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "165", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "166", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "167", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "168", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "169", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "170", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "171", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "172", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "173", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "174", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "175", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "176", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "177", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "178", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "179", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "180", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "181", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "182", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "183", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "184", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "185", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "186", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "187", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "188", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "189", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "190", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "191", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "192", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "193", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "194", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "195", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "196", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "197", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "198", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "199", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "200", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "201", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "202", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "203", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "204", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "205", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "206", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "207", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "208", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "209", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "210", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "211", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "212", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "213", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "214", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "215", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "216", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "217", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "218", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "219", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "220", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "221", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "222", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "223", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "224", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "225", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "226", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "227", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "228", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "229", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "230", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "231", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "232", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "233", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "234", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "235", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "236", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "237", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "238", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "239", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "240", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "241", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "242", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "243", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "244", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "245", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "246", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "247", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "248", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "249", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "250", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "251", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "252", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "253", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "254", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "255", 0, QApplication::UnicodeUTF8)
        );
        pushButton_trackmemorystop->setText(QApplication::translate("RealPlayClass", "stop", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("RealPlayClass", "PTZ speed", 0, QApplication::UnicodeUTF8));
        pushButton_narrowfocus->setText(QApplication::translate("RealPlayClass", "-", 0, QApplication::UnicodeUTF8));
        comboBox_ptzcruisepath->clear();
        comboBox_ptzcruisepath->insertItems(0, QStringList()
         << QApplication::translate("RealPlayClass", "1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "3", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "4", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "5", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "6", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "7", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "8", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "9", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "10", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "11", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "12", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "13", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "14", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "15", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "16", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "17", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "18", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "19", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "20", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "21", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "22", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "23", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "24", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "25", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "26", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "27", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "28", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "29", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "30", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "31", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "32", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "33", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "34", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "35", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "36", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "37", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "38", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "39", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "40", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "41", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "42", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "43", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "44", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "45", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "46", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "47", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "48", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "49", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "50", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "51", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "52", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "53", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "54", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "55", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "56", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "57", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "58", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "59", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "60", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "61", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "62", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "63", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "64", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "65", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "66", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "67", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "68", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "69", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "70", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "71", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "72", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "73", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "74", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "75", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "76", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "77", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "78", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "79", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "80", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "81", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "82", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "83", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "84", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "85", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "86", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "87", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "88", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "89", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "90", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "91", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "92", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "93", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "94", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "95", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "96", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "97", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "98", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "99", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "100", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "101", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "102", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "103", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "104", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "105", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "106", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "107", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "108", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "109", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "110", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "111", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "112", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "113", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "114", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "115", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "116", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "117", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "118", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "119", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "120", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "121", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "122", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "123", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "124", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "125", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "126", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "127", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "128", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "129", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "130", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "131", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "132", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "133", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "134", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "135", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "136", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "137", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "138", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "139", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "140", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "141", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "142", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "143", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "144", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "145", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "146", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "147", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "148", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "149", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "150", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "151", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "152", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "153", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "154", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "155", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "156", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "257", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "158", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "159", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "160", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "161", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "162", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "163", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "164", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "165", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "166", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "167", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "168", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "169", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "170", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "171", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "172", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "173", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "174", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "175", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "176", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "177", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "178", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "179", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "180", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "181", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "182", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "183", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "184", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "185", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "186", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "187", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "188", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "189", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "190", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "191", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "192", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "193", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "194", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "195", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "196", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "197", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "198", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "199", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "200", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "201", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "202", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "203", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "204", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "205", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "206", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "207", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "208", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "209", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "210", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "211", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "212", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "213", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "214", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "215", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "216", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "217", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "218", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "219", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "220", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "221", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "222", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "223", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "224", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "225", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "226", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "227", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "228", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "229", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "230", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "231", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "232", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "233", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "234", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "235", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "236", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "237", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "238", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "239", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "240", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "241", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "242", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "243", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "244", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "245", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "246", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "247", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "248", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "249", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "250", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "251", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "252", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "253", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "254", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "255", 0, QApplication::UnicodeUTF8)
        );
        pushButton_trackmemorystart->setText(QApplication::translate("RealPlayClass", "start", 0, QApplication::UnicodeUTF8));
        comboBox_ptzspeed->clear();
        comboBox_ptzspeed->insertItems(0, QStringList()
         << QApplication::translate("RealPlayClass", "Default", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "3", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "4", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "5", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "6", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RealPlayClass", "7", 0, QApplication::UnicodeUTF8)
        );
        pushButton_smallaperture->setText(QApplication::translate("RealPlayClass", "-", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("RealPlayClass", "Lris", 0, QApplication::UnicodeUTF8));
        pushButton_realplay->setText(QApplication::translate("RealPlayClass", "Play", 0, QApplication::UnicodeUTF8));
        pushButton_ptzcruisepointcall->setText(QApplication::translate("RealPlayClass", "call", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class RealPlayClass: public Ui_RealPlayClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REALPLAY_H
