/********************************************************************************
** Form generated from reading UI file 'cadvancednetparams.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CADVANCEDNETPARAMS_H
#define UI_CADVANCEDNETPARAMS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CAdvancedNetParamsClass
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout_8;
    QLabel *label_5;
    QFrame *line;
    QWidget *layoutWidget_4;
    QGridLayout *gridLayout_11;
    QLabel *label_8;
    QFrame *line_4;
    QPushButton *btnSaveParams;
    QCheckBox *checkBoPPPoE;
    QCheckBox *checkBoNTP;
    QFrame *line_5;
    QPushButton *btnExit;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_2;
    QLabel *label_21;
    QLineEdit *editDDNSUserName;
    QLabel *label_22;
    QLineEdit *editDDNSPasswd;
    QLabel *label_20;
    QLineEdit *editDDNSpasswd2;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_11;
    QLineEdit *editNTFInterval;
    QLabel *label_12;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout;
    QLabel *label_9;
    QLineEdit *editNTPAddr;
    QLabel *label_10;
    QLineEdit *editNTPPort;
    QWidget *layoutWidget4;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *editPPPoEUserName;
    QLabel *label_3;
    QLineEdit *editPPPoEPasswd;
    QLabel *label_2;
    QLineEdit *editPPPoEIP;
    QLabel *label_4;
    QLineEdit *editPPPoEPass2;
    QWidget *layoutWidget5;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_13;
    QLineEdit *editTimeDifH;
    QLabel *label_14;
    QLineEdit *editTimeDifM;
    QLabel *label_15;
    QCheckBox *checkBoDDNS;
    QWidget *layoutWidget6;
    QGridLayout *gridLayout_5;
    QLabel *label_7;
    QFrame *line_3;
    QWidget *layoutWidget7;
    QGridLayout *gridLayout_7;
    QLineEdit *editDDNSDomainName;
    QLabel *label_17;
    QWidget *layoutWidget8;
    QGridLayout *gridLayout_3;
    QLabel *label_19;
    QLineEdit *editDDNSPort;
    QWidget *layoutWidget9;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_6;
    QLabel *label_16;
    QComboBox *comboDDNSType;
    QGridLayout *gridLayout_4;
    QLabel *label_18;
    QLineEdit *editDDNSServerName;
    QWidget *layoutWidget10;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_31;
    QComboBox *comboBoEmailInterval;
    QWidget *layoutWidget11;
    QGridLayout *gridLayout_14;
    QLabel *label_26;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnRefresh;
    QWidget *layoutWidget12;
    QGridLayout *gridLayout_12;
    QLabel *label_23;
    QLineEdit *editEmailAccount;
    QLabel *label_27;
    QLineEdit *editEmailPasswd;
    QLabel *label_28;
    QLineEdit *editEmailPasswd2;
    QWidget *layoutWidget13;
    QGridLayout *gridLayout_9;
    QLabel *label_32;
    QFrame *line_2;
    QWidget *layoutWidget14;
    QGridLayout *gridLayout_10;
    QLabel *label_24;
    QLineEdit *editEmailSenderName;
    QLabel *label_29;
    QLineEdit *editEmailSenderAddr;
    QLabel *label_25;
    QLineEdit *editEmailSMTP;
    QLabel *label_6;
    QLineEdit *editEmailSmtpPort;
    QWidget *layoutWidget15;
    QGridLayout *gridLayout_15;
    QLabel *label_33;
    QLineEdit *editEmailPop3;
    QWidget *layoutWidget16;
    QGridLayout *gridLayout_13;
    QCheckBox *checkBoEmailsmtp;
    QCheckBox *checkBoEmailAttach;
    QCheckBox *checkBoEmailSsl;
    QTableWidget *tabWEmail;

    void setupUi(QWidget *CAdvancedNetParamsClass)
    {
        if (CAdvancedNetParamsClass->objectName().isEmpty())
            CAdvancedNetParamsClass->setObjectName(QString::fromUtf8("CAdvancedNetParamsClass"));
        CAdvancedNetParamsClass->resize(777, 646);
        layoutWidget = new QWidget(CAdvancedNetParamsClass);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 10, 641, 31));
        gridLayout_8 = new QGridLayout(layoutWidget);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_8->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_8->addWidget(label_5, 0, 0, 1, 1);

        line = new QFrame(layoutWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_8->addWidget(line, 0, 1, 1, 1);

        layoutWidget_4 = new QWidget(CAdvancedNetParamsClass);
        layoutWidget_4->setObjectName(QString::fromUtf8("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(20, 380, 641, 25));
        gridLayout_11 = new QGridLayout(layoutWidget_4);
        gridLayout_11->setSpacing(6);
        gridLayout_11->setContentsMargins(11, 11, 11, 11);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        gridLayout_11->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget_4);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_11->addWidget(label_8, 0, 0, 1, 1);

        line_4 = new QFrame(layoutWidget_4);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        gridLayout_11->addWidget(line_4, 0, 1, 1, 1);

        btnSaveParams = new QPushButton(CAdvancedNetParamsClass);
        btnSaveParams->setObjectName(QString::fromUtf8("btnSaveParams"));
        btnSaveParams->setGeometry(QRect(434, 610, 121, 23));
        checkBoPPPoE = new QCheckBox(CAdvancedNetParamsClass);
        checkBoPPPoE->setObjectName(QString::fromUtf8("checkBoPPPoE"));
        checkBoPPPoE->setGeometry(QRect(20, 50, 111, 17));
        checkBoNTP = new QCheckBox(CAdvancedNetParamsClass);
        checkBoNTP->setObjectName(QString::fromUtf8("checkBoNTP"));
        checkBoNTP->setGeometry(QRect(20, 160, 191, 17));
        line_5 = new QFrame(CAdvancedNetParamsClass);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setGeometry(QRect(0, 590, 661, 16));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);
        btnExit = new QPushButton(CAdvancedNetParamsClass);
        btnExit->setObjectName(QString::fromUtf8("btnExit"));
        btnExit->setGeometry(QRect(570, 610, 91, 23));
        layoutWidget1 = new QWidget(CAdvancedNetParamsClass);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(50, 350, 611, 23));
        gridLayout_2 = new QGridLayout(layoutWidget1);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_21 = new QLabel(layoutWidget1);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        gridLayout_2->addWidget(label_21, 0, 0, 1, 1);

        editDDNSUserName = new QLineEdit(layoutWidget1);
        editDDNSUserName->setObjectName(QString::fromUtf8("editDDNSUserName"));

        gridLayout_2->addWidget(editDDNSUserName, 0, 1, 1, 1);

        label_22 = new QLabel(layoutWidget1);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        gridLayout_2->addWidget(label_22, 0, 2, 1, 1);

        editDDNSPasswd = new QLineEdit(layoutWidget1);
        editDDNSPasswd->setObjectName(QString::fromUtf8("editDDNSPasswd"));

        gridLayout_2->addWidget(editDDNSPasswd, 0, 3, 1, 1);

        label_20 = new QLabel(layoutWidget1);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        gridLayout_2->addWidget(label_20, 0, 4, 1, 1);

        editDDNSpasswd2 = new QLineEdit(layoutWidget1);
        editDDNSpasswd2->setObjectName(QString::fromUtf8("editDDNSpasswd2"));

        gridLayout_2->addWidget(editDDNSpasswd2, 0, 5, 1, 1);

        layoutWidget2 = new QWidget(CAdvancedNetParamsClass);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(50, 210, 241, 23));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(layoutWidget2);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_3->addWidget(label_11);

        editNTFInterval = new QLineEdit(layoutWidget2);
        editNTFInterval->setObjectName(QString::fromUtf8("editNTFInterval"));

        horizontalLayout_3->addWidget(editNTFInterval);

        label_12 = new QLabel(layoutWidget2);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        horizontalLayout_3->addWidget(label_12);

        layoutWidget3 = new QWidget(CAdvancedNetParamsClass);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(50, 180, 611, 23));
        horizontalLayout = new QHBoxLayout(layoutWidget3);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(layoutWidget3);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout->addWidget(label_9);

        editNTPAddr = new QLineEdit(layoutWidget3);
        editNTPAddr->setObjectName(QString::fromUtf8("editNTPAddr"));

        horizontalLayout->addWidget(editNTPAddr);

        label_10 = new QLabel(layoutWidget3);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout->addWidget(label_10);

        editNTPPort = new QLineEdit(layoutWidget3);
        editNTPPort->setObjectName(QString::fromUtf8("editNTPPort"));

        horizontalLayout->addWidget(editNTPPort);

        layoutWidget4 = new QWidget(CAdvancedNetParamsClass);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(50, 70, 561, 51));
        gridLayout = new QGridLayout(layoutWidget4);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget4);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        editPPPoEUserName = new QLineEdit(layoutWidget4);
        editPPPoEUserName->setObjectName(QString::fromUtf8("editPPPoEUserName"));

        gridLayout->addWidget(editPPPoEUserName, 0, 1, 1, 1);

        label_3 = new QLabel(layoutWidget4);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 2, 1, 1);

        editPPPoEPasswd = new QLineEdit(layoutWidget4);
        editPPPoEPasswd->setObjectName(QString::fromUtf8("editPPPoEPasswd"));

        gridLayout->addWidget(editPPPoEPasswd, 0, 3, 1, 1);

        label_2 = new QLabel(layoutWidget4);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        editPPPoEIP = new QLineEdit(layoutWidget4);
        editPPPoEIP->setObjectName(QString::fromUtf8("editPPPoEIP"));

        gridLayout->addWidget(editPPPoEIP, 1, 1, 1, 1);

        label_4 = new QLabel(layoutWidget4);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 1, 2, 1, 1);

        editPPPoEPass2 = new QLineEdit(layoutWidget4);
        editPPPoEPass2->setObjectName(QString::fromUtf8("editPPPoEPass2"));

        gridLayout->addWidget(editPPPoEPass2, 1, 3, 1, 1);

        layoutWidget5 = new QWidget(CAdvancedNetParamsClass);
        layoutWidget5->setObjectName(QString::fromUtf8("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(310, 210, 351, 23));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget5);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_13 = new QLabel(layoutWidget5);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        horizontalLayout_2->addWidget(label_13);

        editTimeDifH = new QLineEdit(layoutWidget5);
        editTimeDifH->setObjectName(QString::fromUtf8("editTimeDifH"));

        horizontalLayout_2->addWidget(editTimeDifH);

        label_14 = new QLabel(layoutWidget5);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        horizontalLayout_2->addWidget(label_14);

        editTimeDifM = new QLineEdit(layoutWidget5);
        editTimeDifM->setObjectName(QString::fromUtf8("editTimeDifM"));

        horizontalLayout_2->addWidget(editTimeDifM);

        label_15 = new QLabel(layoutWidget5);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        horizontalLayout_2->addWidget(label_15);

        checkBoDDNS = new QCheckBox(CAdvancedNetParamsClass);
        checkBoDDNS->setObjectName(QString::fromUtf8("checkBoDDNS"));
        checkBoDDNS->setGeometry(QRect(20, 270, 161, 21));
        layoutWidget6 = new QWidget(CAdvancedNetParamsClass);
        layoutWidget6->setObjectName(QString::fromUtf8("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(22, 240, 641, 25));
        gridLayout_5 = new QGridLayout(layoutWidget6);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget6);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_5->addWidget(label_7, 0, 0, 1, 1);

        line_3 = new QFrame(layoutWidget6);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout_5->addWidget(line_3, 0, 1, 1, 1);

        layoutWidget7 = new QWidget(CAdvancedNetParamsClass);
        layoutWidget7->setObjectName(QString::fromUtf8("layoutWidget7"));
        layoutWidget7->setGeometry(QRect(350, 290, 311, 23));
        gridLayout_7 = new QGridLayout(layoutWidget7);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        editDDNSDomainName = new QLineEdit(layoutWidget7);
        editDDNSDomainName->setObjectName(QString::fromUtf8("editDDNSDomainName"));

        gridLayout_7->addWidget(editDDNSDomainName, 0, 1, 1, 1);

        label_17 = new QLabel(layoutWidget7);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout_7->addWidget(label_17, 0, 0, 1, 1);

        layoutWidget8 = new QWidget(CAdvancedNetParamsClass);
        layoutWidget8->setObjectName(QString::fromUtf8("layoutWidget8"));
        layoutWidget8->setGeometry(QRect(351, 321, 189, 23));
        gridLayout_3 = new QGridLayout(layoutWidget8);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_19 = new QLabel(layoutWidget8);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        gridLayout_3->addWidget(label_19, 0, 0, 1, 1);

        editDDNSPort = new QLineEdit(layoutWidget8);
        editDDNSPort->setObjectName(QString::fromUtf8("editDDNSPort"));

        gridLayout_3->addWidget(editDDNSPort, 0, 1, 1, 1);

        layoutWidget9 = new QWidget(CAdvancedNetParamsClass);
        layoutWidget9->setObjectName(QString::fromUtf8("layoutWidget9"));
        layoutWidget9->setGeometry(QRect(50, 290, 281, 54));
        verticalLayout = new QVBoxLayout(layoutWidget9);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setSpacing(6);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        label_16 = new QLabel(layoutWidget9);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout_6->addWidget(label_16, 0, 0, 1, 1);

        comboDDNSType = new QComboBox(layoutWidget9);
        comboDDNSType->setObjectName(QString::fromUtf8("comboDDNSType"));

        gridLayout_6->addWidget(comboDDNSType, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_6);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_18 = new QLabel(layoutWidget9);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        gridLayout_4->addWidget(label_18, 0, 0, 1, 1);

        editDDNSServerName = new QLineEdit(layoutWidget9);
        editDDNSServerName->setObjectName(QString::fromUtf8("editDDNSServerName"));

        gridLayout_4->addWidget(editDDNSServerName, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_4);

        layoutWidget10 = new QWidget(CAdvancedNetParamsClass);
        layoutWidget10->setObjectName(QString::fromUtf8("layoutWidget10"));
        layoutWidget10->setGeometry(QRect(440, 570, 258, 23));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget10);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_31 = new QLabel(layoutWidget10);
        label_31->setObjectName(QString::fromUtf8("label_31"));

        horizontalLayout_4->addWidget(label_31);

        comboBoEmailInterval = new QComboBox(layoutWidget10);
        comboBoEmailInterval->setObjectName(QString::fromUtf8("comboBoEmailInterval"));

        horizontalLayout_4->addWidget(comboBoEmailInterval);

        layoutWidget11 = new QWidget(CAdvancedNetParamsClass);
        layoutWidget11->setObjectName(QString::fromUtf8("layoutWidget11"));
        layoutWidget11->setGeometry(QRect(50, 490, 261, 31));
        gridLayout_14 = new QGridLayout(layoutWidget11);
        gridLayout_14->setSpacing(6);
        gridLayout_14->setContentsMargins(11, 11, 11, 11);
        gridLayout_14->setObjectName(QString::fromUtf8("gridLayout_14"));
        gridLayout_14->setContentsMargins(0, 0, 0, 0);
        label_26 = new QLabel(layoutWidget11);
        label_26->setObjectName(QString::fromUtf8("label_26"));

        gridLayout_14->addWidget(label_26, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_14->addItem(horizontalSpacer, 0, 1, 1, 1);

        btnRefresh = new QPushButton(CAdvancedNetParamsClass);
        btnRefresh->setObjectName(QString::fromUtf8("btnRefresh"));
        btnRefresh->setGeometry(QRect(40, 610, 75, 23));
        layoutWidget12 = new QWidget(CAdvancedNetParamsClass);
        layoutWidget12->setObjectName(QString::fromUtf8("layoutWidget12"));
        layoutWidget12->setGeometry(QRect(51, 411, 587, 23));
        gridLayout_12 = new QGridLayout(layoutWidget12);
        gridLayout_12->setSpacing(6);
        gridLayout_12->setContentsMargins(11, 11, 11, 11);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        gridLayout_12->setContentsMargins(0, 0, 0, 0);
        label_23 = new QLabel(layoutWidget12);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        gridLayout_12->addWidget(label_23, 0, 0, 1, 1);

        editEmailAccount = new QLineEdit(layoutWidget12);
        editEmailAccount->setObjectName(QString::fromUtf8("editEmailAccount"));

        gridLayout_12->addWidget(editEmailAccount, 0, 1, 1, 1);

        label_27 = new QLabel(layoutWidget12);
        label_27->setObjectName(QString::fromUtf8("label_27"));

        gridLayout_12->addWidget(label_27, 0, 2, 1, 1);

        editEmailPasswd = new QLineEdit(layoutWidget12);
        editEmailPasswd->setObjectName(QString::fromUtf8("editEmailPasswd"));

        gridLayout_12->addWidget(editEmailPasswd, 0, 3, 1, 1);

        label_28 = new QLabel(layoutWidget12);
        label_28->setObjectName(QString::fromUtf8("label_28"));

        gridLayout_12->addWidget(label_28, 0, 4, 1, 1);

        editEmailPasswd2 = new QLineEdit(layoutWidget12);
        editEmailPasswd2->setObjectName(QString::fromUtf8("editEmailPasswd2"));

        gridLayout_12->addWidget(editEmailPasswd2, 0, 5, 1, 1);

        layoutWidget13 = new QWidget(CAdvancedNetParamsClass);
        layoutWidget13->setObjectName(QString::fromUtf8("layoutWidget13"));
        layoutWidget13->setGeometry(QRect(20, 136, 641, 20));
        gridLayout_9 = new QGridLayout(layoutWidget13);
        gridLayout_9->setSpacing(6);
        gridLayout_9->setContentsMargins(11, 11, 11, 11);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        gridLayout_9->setContentsMargins(0, 0, 0, 0);
        label_32 = new QLabel(layoutWidget13);
        label_32->setObjectName(QString::fromUtf8("label_32"));

        gridLayout_9->addWidget(label_32, 0, 0, 1, 1);

        line_2 = new QFrame(layoutWidget13);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout_9->addWidget(line_2, 0, 1, 1, 1);

        layoutWidget14 = new QWidget(CAdvancedNetParamsClass);
        layoutWidget14->setObjectName(QString::fromUtf8("layoutWidget14"));
        layoutWidget14->setGeometry(QRect(52, 440, 406, 50));
        gridLayout_10 = new QGridLayout(layoutWidget14);
        gridLayout_10->setSpacing(6);
        gridLayout_10->setContentsMargins(11, 11, 11, 11);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        gridLayout_10->setContentsMargins(0, 0, 0, 0);
        label_24 = new QLabel(layoutWidget14);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        gridLayout_10->addWidget(label_24, 0, 0, 1, 1);

        editEmailSenderName = new QLineEdit(layoutWidget14);
        editEmailSenderName->setObjectName(QString::fromUtf8("editEmailSenderName"));

        gridLayout_10->addWidget(editEmailSenderName, 0, 1, 1, 1);

        label_29 = new QLabel(layoutWidget14);
        label_29->setObjectName(QString::fromUtf8("label_29"));

        gridLayout_10->addWidget(label_29, 0, 2, 1, 1);

        editEmailSenderAddr = new QLineEdit(layoutWidget14);
        editEmailSenderAddr->setObjectName(QString::fromUtf8("editEmailSenderAddr"));

        gridLayout_10->addWidget(editEmailSenderAddr, 0, 3, 1, 1);

        label_25 = new QLabel(layoutWidget14);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        gridLayout_10->addWidget(label_25, 1, 0, 1, 1);

        editEmailSMTP = new QLineEdit(layoutWidget14);
        editEmailSMTP->setObjectName(QString::fromUtf8("editEmailSMTP"));

        gridLayout_10->addWidget(editEmailSMTP, 1, 1, 1, 1);

        label_6 = new QLabel(layoutWidget14);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_10->addWidget(label_6, 1, 2, 1, 1);

        editEmailSmtpPort = new QLineEdit(layoutWidget14);
        editEmailSmtpPort->setObjectName(QString::fromUtf8("editEmailSmtpPort"));

        gridLayout_10->addWidget(editEmailSmtpPort, 1, 3, 1, 1);

        layoutWidget15 = new QWidget(CAdvancedNetParamsClass);
        layoutWidget15->setObjectName(QString::fromUtf8("layoutWidget15"));
        layoutWidget15->setGeometry(QRect(470, 460, 201, 23));
        gridLayout_15 = new QGridLayout(layoutWidget15);
        gridLayout_15->setSpacing(6);
        gridLayout_15->setContentsMargins(11, 11, 11, 11);
        gridLayout_15->setObjectName(QString::fromUtf8("gridLayout_15"));
        gridLayout_15->setContentsMargins(0, 0, 0, 0);
        label_33 = new QLabel(layoutWidget15);
        label_33->setObjectName(QString::fromUtf8("label_33"));

        gridLayout_15->addWidget(label_33, 0, 0, 1, 1);

        editEmailPop3 = new QLineEdit(layoutWidget15);
        editEmailPop3->setObjectName(QString::fromUtf8("editEmailPop3"));

        gridLayout_15->addWidget(editEmailPop3, 0, 1, 1, 1);

        layoutWidget16 = new QWidget(CAdvancedNetParamsClass);
        layoutWidget16->setObjectName(QString::fromUtf8("layoutWidget16"));
        layoutWidget16->setGeometry(QRect(440, 501, 191, 65));
        gridLayout_13 = new QGridLayout(layoutWidget16);
        gridLayout_13->setSpacing(6);
        gridLayout_13->setContentsMargins(11, 11, 11, 11);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        gridLayout_13->setContentsMargins(0, 0, 0, 0);
        checkBoEmailsmtp = new QCheckBox(layoutWidget16);
        checkBoEmailsmtp->setObjectName(QString::fromUtf8("checkBoEmailsmtp"));
        checkBoEmailsmtp->setLayoutDirection(Qt::LeftToRight);
        checkBoEmailsmtp->setChecked(false);
        checkBoEmailsmtp->setTristate(false);

        gridLayout_13->addWidget(checkBoEmailsmtp, 0, 0, 1, 1);

        checkBoEmailAttach = new QCheckBox(layoutWidget16);
        checkBoEmailAttach->setObjectName(QString::fromUtf8("checkBoEmailAttach"));
        checkBoEmailAttach->setLayoutDirection(Qt::LeftToRight);
        checkBoEmailAttach->setChecked(false);
        checkBoEmailAttach->setTristate(false);

        gridLayout_13->addWidget(checkBoEmailAttach, 1, 0, 1, 1);

        checkBoEmailSsl = new QCheckBox(layoutWidget16);
        checkBoEmailSsl->setObjectName(QString::fromUtf8("checkBoEmailSsl"));
        checkBoEmailSsl->setLayoutDirection(Qt::LeftToRight);
        checkBoEmailSsl->setChecked(false);
        checkBoEmailSsl->setTristate(false);

        gridLayout_13->addWidget(checkBoEmailSsl, 2, 0, 1, 1);

        tabWEmail = new QTableWidget(CAdvancedNetParamsClass);
        tabWEmail->setObjectName(QString::fromUtf8("tabWEmail"));
        tabWEmail->setGeometry(QRect(50, 520, 351, 61));

        retranslateUi(CAdvancedNetParamsClass);

        QMetaObject::connectSlotsByName(CAdvancedNetParamsClass);
    } // setupUi

    void retranslateUi(QWidget *CAdvancedNetParamsClass)
    {
        CAdvancedNetParamsClass->setWindowTitle(QApplication::translate("CAdvancedNetParamsClass", "CAdvancedNetParams", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("CAdvancedNetParamsClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\256\213\344\275\223'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans'; font-size:10pt; color:#0000ff;\">PPPoE config</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("CAdvancedNetParamsClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\256\213\344\275\223'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans'; font-size:10pt; color:#0000ff;\">Email setup</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        btnSaveParams->setText(QApplication::translate("CAdvancedNetParamsClass", "Save parameter", 0, QApplication::UnicodeUTF8));
        checkBoPPPoE->setText(QApplication::translate("CAdvancedNetParamsClass", "Enable PPPoE", 0, QApplication::UnicodeUTF8));
        checkBoNTP->setText(QApplication::translate("CAdvancedNetParamsClass", "Enable NTP time corrention", 0, QApplication::UnicodeUTF8));
        btnExit->setText(QApplication::translate("CAdvancedNetParamsClass", "Quit", 0, QApplication::UnicodeUTF8));
        label_21->setText(QApplication::translate("CAdvancedNetParamsClass", "Username", 0, QApplication::UnicodeUTF8));
        label_22->setText(QApplication::translate("CAdvancedNetParamsClass", "Password", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("CAdvancedNetParamsClass", "Confirm password", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("CAdvancedNetParamsClass", "Setup interval", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("CAdvancedNetParamsClass", "min", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("CAdvancedNetParamsClass", "NTP server address", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("CAdvancedNetParamsClass", "NTP port", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CAdvancedNetParamsClass", "PPPoE username", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("CAdvancedNetParamsClass", "PPPoE password", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("CAdvancedNetParamsClass", "PPPoE address", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("CAdvancedNetParamsClass", "Confirm password", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("CAdvancedNetParamsClass", "Time difference with UTC ", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("CAdvancedNetParamsClass", "h", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("CAdvancedNetParamsClass", "min", 0, QApplication::UnicodeUTF8));
        checkBoDDNS->setText(QApplication::translate("CAdvancedNetParamsClass", "Enable domain analysis", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("CAdvancedNetParamsClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\256\213\344\275\223'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans'; font-size:10pt; color:#0000ff;\">DDNS config</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("CAdvancedNetParamsClass", "Device alias", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("CAdvancedNetParamsClass", "Port", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("CAdvancedNetParamsClass", "Server type", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("CAdvancedNetParamsClass", "Domain name", 0, QApplication::UnicodeUTF8));
        label_31->setText(QApplication::translate("CAdvancedNetParamsClass", "Interval of sending Email", 0, QApplication::UnicodeUTF8));
        label_26->setText(QApplication::translate("CAdvancedNetParamsClass", "E-mail receiver info(3 accounts)", 0, QApplication::UnicodeUTF8));
        btnRefresh->setText(QApplication::translate("CAdvancedNetParamsClass", "Update", 0, QApplication::UnicodeUTF8));
        label_23->setText(QApplication::translate("CAdvancedNetParamsClass", "Username", 0, QApplication::UnicodeUTF8));
        label_27->setText(QApplication::translate("CAdvancedNetParamsClass", "Password", 0, QApplication::UnicodeUTF8));
        label_28->setText(QApplication::translate("CAdvancedNetParamsClass", "Confirm password", 0, QApplication::UnicodeUTF8));
        label_32->setText(QApplication::translate("CAdvancedNetParamsClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\256\213\344\275\223'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans'; font-size:10pt; color:#0000ff;\">NTP config</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_24->setText(QApplication::translate("CAdvancedNetParamsClass", "Sender", 0, QApplication::UnicodeUTF8));
        label_29->setText(QApplication::translate("CAdvancedNetParamsClass", "E-mail address", 0, QApplication::UnicodeUTF8));
        label_25->setText(QApplication::translate("CAdvancedNetParamsClass", "Smtp server", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("CAdvancedNetParamsClass", "Smtp port", 0, QApplication::UnicodeUTF8));
        label_33->setText(QApplication::translate("CAdvancedNetParamsClass", "Pop3 server", 0, QApplication::UnicodeUTF8));
        checkBoEmailsmtp->setText(QApplication::translate("CAdvancedNetParamsClass", "Server need certification", 0, QApplication::UnicodeUTF8));
        checkBoEmailAttach->setText(QApplication::translate("CAdvancedNetParamsClass", "Send attachment", 0, QApplication::UnicodeUTF8));
        checkBoEmailSsl->setText(QApplication::translate("CAdvancedNetParamsClass", "Enable SSL", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CAdvancedNetParamsClass: public Ui_CAdvancedNetParamsClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CADVANCEDNETPARAMS_H
