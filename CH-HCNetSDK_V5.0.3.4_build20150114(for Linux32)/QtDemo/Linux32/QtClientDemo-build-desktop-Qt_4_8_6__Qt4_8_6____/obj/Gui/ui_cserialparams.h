/********************************************************************************
** Form generated from reading UI file 'cserialparams.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CSERIALPARAMS_H
#define UI_CSERIALPARAMS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CSerialParams
{
public:
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QComboBox *comboBox232BAUD;
    QComboBox *comboBox232DATABIT;
    QComboBox *comboBox232STOPBIT;
    QComboBox *comboBox232CHECKBIT;
    QComboBox *comboBox232FLOW;
    QComboBox *comboBox232workstate;
    QPushButton *pushButtonPPPSETUP;
    QGroupBox *groupBox_2;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QComboBox *comboBox485STOPBIT;
    QComboBox *comboBox485CHECKBIT;
    QComboBox *comboBox485FLOW;
    QComboBox *comboBox485BAUD;
    QComboBox *comboBox485DATABIT;
    QLabel *label_13;
    QLabel *label_14;
    QComboBox *comboBoxDECODETYPE;
    QLineEdit *lineEditDECODEADDRESS;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_7;
    QComboBox *comboBoxChanIndex;
    QPushButton *pushButton232refresh;
    QPushButton *pushButtonsave;

    void setupUi(QWidget *CSerialParams)
    {
        if (CSerialParams->objectName().isEmpty())
            CSerialParams->setObjectName(QString::fromUtf8("CSerialParams"));
        CSerialParams->resize(586, 503);
        groupBox = new QGroupBox(CSerialParams);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 10, 551, 181));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 30, 61, 21));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(133, 30, 71, 21));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(243, 30, 71, 21));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(353, 30, 71, 21));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(453, 30, 71, 21));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(20, 100, 91, 21));
        comboBox232BAUD = new QComboBox(groupBox);
        comboBox232BAUD->setObjectName(QString::fromUtf8("comboBox232BAUD"));
        comboBox232BAUD->setGeometry(QRect(20, 60, 81, 22));
        comboBox232BAUD->setIconSize(QSize(16, 16));
        comboBox232DATABIT = new QComboBox(groupBox);
        comboBox232DATABIT->setObjectName(QString::fromUtf8("comboBox232DATABIT"));
        comboBox232DATABIT->setGeometry(QRect(130, 60, 81, 25));
        comboBox232STOPBIT = new QComboBox(groupBox);
        comboBox232STOPBIT->setObjectName(QString::fromUtf8("comboBox232STOPBIT"));
        comboBox232STOPBIT->setGeometry(QRect(230, 60, 91, 25));
        comboBox232CHECKBIT = new QComboBox(groupBox);
        comboBox232CHECKBIT->setObjectName(QString::fromUtf8("comboBox232CHECKBIT"));
        comboBox232CHECKBIT->setGeometry(QRect(340, 60, 91, 25));
        comboBox232FLOW = new QComboBox(groupBox);
        comboBox232FLOW->setObjectName(QString::fromUtf8("comboBox232FLOW"));
        comboBox232FLOW->setGeometry(QRect(450, 60, 81, 25));
        comboBox232workstate = new QComboBox(groupBox);
        comboBox232workstate->setObjectName(QString::fromUtf8("comboBox232workstate"));
        comboBox232workstate->setGeometry(QRect(110, 100, 171, 25));
        pushButtonPPPSETUP = new QPushButton(groupBox);
        pushButtonPPPSETUP->setObjectName(QString::fromUtf8("pushButtonPPPSETUP"));
        pushButtonPPPSETUP->setEnabled(false);
        pushButtonPPPSETUP->setGeometry(QRect(40, 140, 211, 23));
        groupBox_2 = new QGroupBox(CSerialParams);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(20, 210, 551, 231));
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(450, 60, 71, 21));
        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(240, 60, 71, 21));
        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(350, 60, 71, 21));
        label_11 = new QLabel(groupBox_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(27, 60, 61, 21));
        label_12 = new QLabel(groupBox_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(130, 60, 71, 21));
        comboBox485STOPBIT = new QComboBox(groupBox_2);
        comboBox485STOPBIT->setObjectName(QString::fromUtf8("comboBox485STOPBIT"));
        comboBox485STOPBIT->setGeometry(QRect(240, 90, 81, 25));
        comboBox485CHECKBIT = new QComboBox(groupBox_2);
        comboBox485CHECKBIT->setObjectName(QString::fromUtf8("comboBox485CHECKBIT"));
        comboBox485CHECKBIT->setGeometry(QRect(340, 90, 91, 25));
        comboBox485FLOW = new QComboBox(groupBox_2);
        comboBox485FLOW->setObjectName(QString::fromUtf8("comboBox485FLOW"));
        comboBox485FLOW->setGeometry(QRect(450, 90, 81, 25));
        comboBox485BAUD = new QComboBox(groupBox_2);
        comboBox485BAUD->setObjectName(QString::fromUtf8("comboBox485BAUD"));
        comboBox485BAUD->setGeometry(QRect(10, 90, 91, 25));
        comboBox485DATABIT = new QComboBox(groupBox_2);
        comboBox485DATABIT->setObjectName(QString::fromUtf8("comboBox485DATABIT"));
        comboBox485DATABIT->setGeometry(QRect(130, 90, 81, 25));
        label_13 = new QLabel(groupBox_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(10, 150, 101, 21));
        label_14 = new QLabel(groupBox_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(270, 150, 101, 21));
        comboBoxDECODETYPE = new QComboBox(groupBox_2);
        comboBoxDECODETYPE->setObjectName(QString::fromUtf8("comboBoxDECODETYPE"));
        comboBoxDECODETYPE->setGeometry(QRect(120, 150, 101, 25));
        lineEditDECODEADDRESS = new QLineEdit(groupBox_2);
        lineEditDECODEADDRESS->setObjectName(QString::fromUtf8("lineEditDECODEADDRESS"));
        lineEditDECODEADDRESS->setGeometry(QRect(390, 150, 113, 25));
        layoutWidget = new QWidget(groupBox_2);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 30, 181, 23));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout->addWidget(label_7);

        comboBoxChanIndex = new QComboBox(layoutWidget);
        comboBoxChanIndex->setObjectName(QString::fromUtf8("comboBoxChanIndex"));

        horizontalLayout->addWidget(comboBoxChanIndex);

        pushButton232refresh = new QPushButton(CSerialParams);
        pushButton232refresh->setObjectName(QString::fromUtf8("pushButton232refresh"));
        pushButton232refresh->setGeometry(QRect(100, 460, 75, 25));
        pushButtonsave = new QPushButton(CSerialParams);
        pushButtonsave->setObjectName(QString::fromUtf8("pushButtonsave"));
        pushButtonsave->setGeometry(QRect(330, 460, 75, 25));

        retranslateUi(CSerialParams);

        QMetaObject::connectSlotsByName(CSerialParams);
    } // setupUi

    void retranslateUi(QWidget *CSerialParams)
    {
        CSerialParams->setWindowTitle(QApplication::translate("CSerialParams", "Form", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("CSerialParams", "232 setup", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CSerialParams", "Port speed", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("CSerialParams", "Data bit", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("CSerialParams", "Stop bit", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("CSerialParams", "Parity", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("CSerialParams", "Flow control", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("CSerialParams", "Operation mode", 0, QApplication::UnicodeUTF8));
        comboBox232BAUD->clear();
        comboBox232BAUD->insertItems(0, QStringList()
         << QApplication::translate("CSerialParams", "50", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "75", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "110", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "150", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "300", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "600", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "1200", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "2400", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "4800", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "9600", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "19200", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "38400", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "57600", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "76800", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "115.2k", 0, QApplication::UnicodeUTF8)
        );
        comboBox232DATABIT->clear();
        comboBox232DATABIT->insertItems(0, QStringList()
         << QApplication::translate("CSerialParams", "5", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "6", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "7", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "8", 0, QApplication::UnicodeUTF8)
        );
        comboBox232STOPBIT->clear();
        comboBox232STOPBIT->insertItems(0, QStringList()
         << QApplication::translate("CSerialParams", "1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "2", 0, QApplication::UnicodeUTF8)
        );
        comboBox232CHECKBIT->clear();
        comboBox232CHECKBIT->insertItems(0, QStringList()
         << QApplication::translate("CSerialParams", "None", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "Odd", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "Even", 0, QApplication::UnicodeUTF8)
        );
        comboBox232FLOW->clear();
        comboBox232FLOW->insertItems(0, QStringList()
         << QApplication::translate("CSerialParams", "None", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "Software", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "Hardware", 0, QApplication::UnicodeUTF8)
        );
        comboBox232workstate->clear();
        comboBox232workstate->insertItems(0, QStringList()
         << QApplication::translate("CSerialParams", "Narrow-band transmission", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "Console", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "Transpsrent channel", 0, QApplication::UnicodeUTF8)
        );
        pushButtonPPPSETUP->setText(QApplication::translate("CSerialParams", "Narrowband transparent setup", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("CSerialParams", "RS485 setup", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("CSerialParams", "Flow control", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("CSerialParams", "Stop bit", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("CSerialParams", "Parity", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("CSerialParams", "Port speed", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("CSerialParams", "Data bit", 0, QApplication::UnicodeUTF8));
        comboBox485STOPBIT->clear();
        comboBox485STOPBIT->insertItems(0, QStringList()
         << QApplication::translate("CSerialParams", "1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "2", 0, QApplication::UnicodeUTF8)
        );
        comboBox485CHECKBIT->clear();
        comboBox485CHECKBIT->insertItems(0, QStringList()
         << QApplication::translate("CSerialParams", "None", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "Odd", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "Even", 0, QApplication::UnicodeUTF8)
        );
        comboBox485FLOW->clear();
        comboBox485FLOW->insertItems(0, QStringList()
         << QApplication::translate("CSerialParams", "None", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "Software", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "Hardware", 0, QApplication::UnicodeUTF8)
        );
        comboBox485BAUD->clear();
        comboBox485BAUD->insertItems(0, QStringList()
         << QApplication::translate("CSerialParams", "50", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "75", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "110", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "150", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "300", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "600", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "1200", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "2400", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "4800", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "9600", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "19200", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "38400", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "57600", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "76800", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "115.2k", 0, QApplication::UnicodeUTF8)
        );
        comboBox485DATABIT->clear();
        comboBox485DATABIT->insertItems(0, QStringList()
         << QApplication::translate("CSerialParams", "5", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "6", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "7", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "8", 0, QApplication::UnicodeUTF8)
        );
        label_13->setText(QApplication::translate("CSerialParams", "Decoder model", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("CSerialParams", "Decoder IP", 0, QApplication::UnicodeUTF8));
        comboBoxDECODETYPE->clear();
        comboBoxDECODETYPE->insertItems(0, QStringList()
         << QApplication::translate("CSerialParams", "YouLi", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "LiLin-1016", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "LiLin-820", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "Pelco-p", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "DM DynaColor", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "HD600", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "JC-4116", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "Pelco-d WX", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "Pelco-d PICO", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "VCOM_VC_2000", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "NETSTREAMER", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "SAE", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "SAMSUNG", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "KALATEL_KTD_312", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "CELOTEX", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "TLPELCO_P", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "TL_HHX2000", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "BBV", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "RM110", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "KC3360S", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "ACES", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "ALSON", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "INV3609HD", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "HOWELL", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "TC_PELCO_P", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "TC_PELCO_D", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "AUTO_M", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "AUTO_H", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "ANTEN", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "CHANGLIN", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "DELTADOME", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "XYM_12", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "ADR8060", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "EVI", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "Demo_Speed", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "DM_PELCO_D", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "ST_832", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "LC_D2104", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "HUNTER", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "A01", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "TECHWIN", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "WEIHAN", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "LG", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "D_MAX", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "PANASONIC", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "KTD_348", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "INFINOVA", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "PIH-7625", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "IDOME/IVIEW/LCU", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "Dennar_dDome", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "Philips", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "SAMPLE", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "PLD", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "PARCO", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "HY", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "NAIJIE", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "YH_06", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "SP9096X", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "M_PANEL", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "M_MV2050", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "SAE_QUICK", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "RED_APPLE", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "NKO8G", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "DH_CC440", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "TX_CONTROL_232", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "VCL_SPEED_DOME", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "ST_2C160", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "TDWY", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "TWHC", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "USNT", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "KLT_NVD2200PS", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "VIDO_B01", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "LG_MULTIX", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "ENKEL", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "YT_PELCOD", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "HIKVISION", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "PE60", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "LiAo", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "NK16", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "DaLi", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "HN_4304", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "VIDEOTEC", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "HNDCB", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "Lion_2007", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "LG_LVC_C372", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "Gold_Video", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialParams", "NVD1600PS", 0, QApplication::UnicodeUTF8)
        );
        label_7->setText(QApplication::translate("CSerialParams", "Channel No.", 0, QApplication::UnicodeUTF8));
        pushButton232refresh->setText(QApplication::translate("CSerialParams", "Update", 0, QApplication::UnicodeUTF8));
        pushButtonsave->setText(QApplication::translate("CSerialParams", "Save", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CSerialParams: public Ui_CSerialParams {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CSERIALPARAMS_H
