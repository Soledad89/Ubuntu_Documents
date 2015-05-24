/********************************************************************************
** Form generated from reading UI file 'cuserparams.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSERPARAMS_H
#define UI_CUSERPARAMS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QTableWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CUserParamsClass
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout_8;
    QLabel *label_5;
    QFrame *line;
    QWidget *layoutWidget_2;
    QGridLayout *gridLayout_9;
    QLabel *label_6;
    QFrame *line_2;
    QFrame *line_3;
    QTableWidget *tableLocalChannel;
    QFrame *line_4;
    QTableWidget *tableRemoteChannel;
    QWidget *layoutWidget_4;
    QGridLayout *gridLayout_17;
    QLabel *label_16;
    QComboBox *comboNetRight;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_10;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QComboBox *comboUserNo;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLineEdit *editUserName;
    QGridLayout *gridLayout_11;
    QLabel *label_2;
    QComboBox *comboPriority;
    QGridLayout *gridLayout_3;
    QLabel *label_7;
    QLineEdit *editPassword;
    QGridLayout *gridLayout_4;
    QLabel *label_8;
    QLineEdit *editPassword2;
    QWidget *layoutWidget2;
    QGridLayout *gridLayout_5;
    QLineEdit *editMACAddr1;
    QLabel *label_10;
    QLineEdit *editMACAddr2;
    QLabel *label_11;
    QLineEdit *editMACAddr3;
    QLabel *label_12;
    QLineEdit *editMACAddr4;
    QLabel *label_13;
    QLineEdit *editMACAddr5;
    QLabel *label_14;
    QLineEdit *editMACAddr6;
    QWidget *layoutWidget3;
    QGridLayout *gridLayout_13;
    QGridLayout *gridLayout_12;
    QLabel *label_4;
    QLineEdit *editUserIP;
    QLabel *label_9;
    QWidget *layoutWidget4;
    QGridLayout *gridLayout_15;
    QLabel *label_15;
    QComboBox *comboLocalRight;
    QWidget *layoutWidget5;
    QGridLayout *gridLayout_6;
    QCheckBox *checkLocalRight5;
    QCheckBox *checkLocalRight6;
    QCheckBox *checkLocalRight7;
    QCheckBox *checkLocalRight8;
    QCheckBox *checkLocalRight9;
    QWidget *layoutWidget6;
    QGridLayout *gridLayout_14;
    QCheckBox *checkLocalRight0;
    QCheckBox *checkLocalRight1;
    QCheckBox *checkLocalRight2;
    QCheckBox *checkLocalRight3;
    QCheckBox *checkLocalRight4;
    QWidget *layoutWidget7;
    QGridLayout *gridLayout_7;
    QCheckBox *checkRemoteRight0;
    QCheckBox *checkRemoteRight1;
    QCheckBox *checkRemoteRight2;
    QCheckBox *checkRemoteRight3;
    QCheckBox *checkRemoteRight4;
    QCheckBox *checkRemoteRight5;
    QCheckBox *checkRemoteRight6;
    QWidget *layoutWidget8;
    QGridLayout *gridLayout_16;
    QCheckBox *checkRemoteRight7;
    QCheckBox *checkRemoteRight8;
    QCheckBox *checkRemoteRight9;
    QCheckBox *checkRemoteRight10;
    QCheckBox *checkRemoteRight11;
    QCheckBox *checkRemoteRight12;
    QCheckBox *checkRemoteRight13;

    void setupUi(QDialog *CUserParamsClass)
    {
        if (CUserParamsClass->objectName().isEmpty())
            CUserParamsClass->setObjectName(QString::fromUtf8("CUserParamsClass"));
        CUserParamsClass->resize(671, 577);
        layoutWidget = new QWidget(CUserParamsClass);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 90, 621, 31));
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

        layoutWidget_2 = new QWidget(CUserParamsClass);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(30, 290, 621, 31));
        gridLayout_9 = new QGridLayout(layoutWidget_2);
        gridLayout_9->setSpacing(6);
        gridLayout_9->setContentsMargins(11, 11, 11, 11);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        gridLayout_9->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_9->addWidget(label_6, 0, 0, 1, 1);

        line_2 = new QFrame(layoutWidget_2);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout_9->addWidget(line_2, 0, 1, 1, 1);

        line_3 = new QFrame(CUserParamsClass);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(350, 120, 20, 161));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);
        tableLocalChannel = new QTableWidget(CUserParamsClass);
        tableLocalChannel->setObjectName(QString::fromUtf8("tableLocalChannel"));
        tableLocalChannel->setGeometry(QRect(380, 170, 256, 111));
        line_4 = new QFrame(CUserParamsClass);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(640, 310, 20, 211));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);
        tableRemoteChannel = new QTableWidget(CUserParamsClass);
        tableRemoteChannel->setObjectName(QString::fromUtf8("tableRemoteChannel"));
        tableRemoteChannel->setGeometry(QRect(380, 370, 256, 111));
        layoutWidget_4 = new QWidget(CUserParamsClass);
        layoutWidget_4->setObjectName(QString::fromUtf8("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(380, 340, 161, 23));
        gridLayout_17 = new QGridLayout(layoutWidget_4);
        gridLayout_17->setSpacing(6);
        gridLayout_17->setContentsMargins(11, 11, 11, 11);
        gridLayout_17->setObjectName(QString::fromUtf8("gridLayout_17"));
        gridLayout_17->setContentsMargins(0, 0, 0, 0);
        label_16 = new QLabel(layoutWidget_4);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout_17->addWidget(label_16, 0, 0, 1, 1);

        comboNetRight = new QComboBox(layoutWidget_4);
        comboNetRight->setObjectName(QString::fromUtf8("comboNetRight"));

        gridLayout_17->addWidget(comboNetRight, 0, 1, 1, 1);

        layoutWidget1 = new QWidget(CUserParamsClass);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(30, 20, 621, 25));
        gridLayout_10 = new QGridLayout(layoutWidget1);
        gridLayout_10->setSpacing(6);
        gridLayout_10->setContentsMargins(11, 11, 11, 11);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        gridLayout_10->setContentsMargins(0, 0, 0, 0);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label = new QLabel(layoutWidget1);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        comboUserNo = new QComboBox(layoutWidget1);
        comboUserNo->setObjectName(QString::fromUtf8("comboUserNo"));

        gridLayout_2->addWidget(comboUserNo, 0, 1, 1, 1);


        gridLayout_10->addLayout(gridLayout_2, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        editUserName = new QLineEdit(layoutWidget1);
        editUserName->setObjectName(QString::fromUtf8("editUserName"));

        gridLayout->addWidget(editUserName, 0, 1, 1, 1);


        gridLayout_10->addLayout(gridLayout, 0, 1, 1, 1);

        gridLayout_11 = new QGridLayout();
        gridLayout_11->setSpacing(6);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_11->addWidget(label_2, 0, 0, 1, 1);

        comboPriority = new QComboBox(layoutWidget1);
        comboPriority->setObjectName(QString::fromUtf8("comboPriority"));

        gridLayout_11->addWidget(comboPriority, 0, 1, 1, 1);


        gridLayout_10->addLayout(gridLayout_11, 0, 2, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_7 = new QLabel(layoutWidget1);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_3->addWidget(label_7, 0, 0, 1, 1);

        editPassword = new QLineEdit(layoutWidget1);
        editPassword->setObjectName(QString::fromUtf8("editPassword"));

        gridLayout_3->addWidget(editPassword, 0, 1, 1, 1);


        gridLayout_10->addLayout(gridLayout_3, 0, 3, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_8 = new QLabel(layoutWidget1);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_4->addWidget(label_8, 0, 0, 1, 1);

        editPassword2 = new QLineEdit(layoutWidget1);
        editPassword2->setObjectName(QString::fromUtf8("editPassword2"));

        gridLayout_4->addWidget(editPassword2, 0, 1, 1, 1);


        gridLayout_10->addLayout(gridLayout_4, 0, 4, 1, 1);

        layoutWidget2 = new QWidget(CUserParamsClass);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(280, 50, 381, 23));
        gridLayout_5 = new QGridLayout(layoutWidget2);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        editMACAddr1 = new QLineEdit(layoutWidget2);
        editMACAddr1->setObjectName(QString::fromUtf8("editMACAddr1"));

        gridLayout_5->addWidget(editMACAddr1, 0, 0, 1, 1);

        label_10 = new QLabel(layoutWidget2);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_5->addWidget(label_10, 0, 1, 1, 1);

        editMACAddr2 = new QLineEdit(layoutWidget2);
        editMACAddr2->setObjectName(QString::fromUtf8("editMACAddr2"));

        gridLayout_5->addWidget(editMACAddr2, 0, 2, 1, 1);

        label_11 = new QLabel(layoutWidget2);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_5->addWidget(label_11, 0, 3, 1, 1);

        editMACAddr3 = new QLineEdit(layoutWidget2);
        editMACAddr3->setObjectName(QString::fromUtf8("editMACAddr3"));

        gridLayout_5->addWidget(editMACAddr3, 0, 4, 1, 1);

        label_12 = new QLabel(layoutWidget2);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_5->addWidget(label_12, 0, 5, 1, 1);

        editMACAddr4 = new QLineEdit(layoutWidget2);
        editMACAddr4->setObjectName(QString::fromUtf8("editMACAddr4"));

        gridLayout_5->addWidget(editMACAddr4, 0, 6, 1, 1);

        label_13 = new QLabel(layoutWidget2);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_5->addWidget(label_13, 0, 7, 1, 1);

        editMACAddr5 = new QLineEdit(layoutWidget2);
        editMACAddr5->setObjectName(QString::fromUtf8("editMACAddr5"));

        gridLayout_5->addWidget(editMACAddr5, 0, 8, 1, 1);

        label_14 = new QLabel(layoutWidget2);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_5->addWidget(label_14, 0, 9, 1, 1);

        editMACAddr6 = new QLineEdit(layoutWidget2);
        editMACAddr6->setObjectName(QString::fromUtf8("editMACAddr6"));

        gridLayout_5->addWidget(editMACAddr6, 0, 10, 1, 1);

        layoutWidget3 = new QWidget(CUserParamsClass);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(30, 50, 231, 25));
        gridLayout_13 = new QGridLayout(layoutWidget3);
        gridLayout_13->setSpacing(6);
        gridLayout_13->setContentsMargins(11, 11, 11, 11);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        gridLayout_13->setContentsMargins(0, 0, 0, 0);
        gridLayout_12 = new QGridLayout();
        gridLayout_12->setSpacing(6);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        label_4 = new QLabel(layoutWidget3);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_12->addWidget(label_4, 0, 0, 1, 1);

        editUserIP = new QLineEdit(layoutWidget3);
        editUserIP->setObjectName(QString::fromUtf8("editUserIP"));

        gridLayout_12->addWidget(editUserIP, 0, 1, 1, 1);


        gridLayout_13->addLayout(gridLayout_12, 0, 0, 1, 1);

        label_9 = new QLabel(layoutWidget3);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_13->addWidget(label_9, 0, 1, 1, 1);

        layoutWidget4 = new QWidget(CUserParamsClass);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(380, 140, 161, 23));
        gridLayout_15 = new QGridLayout(layoutWidget4);
        gridLayout_15->setSpacing(6);
        gridLayout_15->setContentsMargins(11, 11, 11, 11);
        gridLayout_15->setObjectName(QString::fromUtf8("gridLayout_15"));
        gridLayout_15->setContentsMargins(0, 0, 0, 0);
        label_15 = new QLabel(layoutWidget4);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout_15->addWidget(label_15, 0, 0, 1, 1);

        comboLocalRight = new QComboBox(layoutWidget4);
        comboLocalRight->setObjectName(QString::fromUtf8("comboLocalRight"));

        gridLayout_15->addWidget(comboLocalRight, 0, 1, 1, 1);

        layoutWidget5 = new QWidget(CUserParamsClass);
        layoutWidget5->setObjectName(QString::fromUtf8("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(200, 130, 157, 141));
        gridLayout_6 = new QGridLayout(layoutWidget5);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        checkLocalRight5 = new QCheckBox(layoutWidget5);
        checkLocalRight5->setObjectName(QString::fromUtf8("checkLocalRight5"));

        gridLayout_6->addWidget(checkLocalRight5, 0, 0, 1, 1);

        checkLocalRight6 = new QCheckBox(layoutWidget5);
        checkLocalRight6->setObjectName(QString::fromUtf8("checkLocalRight6"));

        gridLayout_6->addWidget(checkLocalRight6, 1, 0, 1, 1);

        checkLocalRight7 = new QCheckBox(layoutWidget5);
        checkLocalRight7->setObjectName(QString::fromUtf8("checkLocalRight7"));

        gridLayout_6->addWidget(checkLocalRight7, 2, 0, 1, 1);

        checkLocalRight8 = new QCheckBox(layoutWidget5);
        checkLocalRight8->setObjectName(QString::fromUtf8("checkLocalRight8"));

        gridLayout_6->addWidget(checkLocalRight8, 3, 0, 1, 1);

        checkLocalRight9 = new QCheckBox(layoutWidget5);
        checkLocalRight9->setObjectName(QString::fromUtf8("checkLocalRight9"));

        gridLayout_6->addWidget(checkLocalRight9, 4, 0, 1, 1);

        layoutWidget6 = new QWidget(CUserParamsClass);
        layoutWidget6->setObjectName(QString::fromUtf8("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(30, 131, 171, 141));
        gridLayout_14 = new QGridLayout(layoutWidget6);
        gridLayout_14->setSpacing(6);
        gridLayout_14->setContentsMargins(11, 11, 11, 11);
        gridLayout_14->setObjectName(QString::fromUtf8("gridLayout_14"));
        gridLayout_14->setContentsMargins(0, 0, 0, 0);
        checkLocalRight0 = new QCheckBox(layoutWidget6);
        checkLocalRight0->setObjectName(QString::fromUtf8("checkLocalRight0"));

        gridLayout_14->addWidget(checkLocalRight0, 0, 0, 1, 1);

        checkLocalRight1 = new QCheckBox(layoutWidget6);
        checkLocalRight1->setObjectName(QString::fromUtf8("checkLocalRight1"));

        gridLayout_14->addWidget(checkLocalRight1, 1, 0, 1, 1);

        checkLocalRight2 = new QCheckBox(layoutWidget6);
        checkLocalRight2->setObjectName(QString::fromUtf8("checkLocalRight2"));

        gridLayout_14->addWidget(checkLocalRight2, 2, 0, 1, 1);

        checkLocalRight3 = new QCheckBox(layoutWidget6);
        checkLocalRight3->setObjectName(QString::fromUtf8("checkLocalRight3"));

        gridLayout_14->addWidget(checkLocalRight3, 3, 0, 1, 1);

        checkLocalRight4 = new QCheckBox(layoutWidget6);
        checkLocalRight4->setObjectName(QString::fromUtf8("checkLocalRight4"));

        gridLayout_14->addWidget(checkLocalRight4, 4, 0, 1, 1);

        layoutWidget7 = new QWidget(CUserParamsClass);
        layoutWidget7->setObjectName(QString::fromUtf8("layoutWidget7"));
        layoutWidget7->setGeometry(QRect(30, 330, 141, 191));
        gridLayout_7 = new QGridLayout(layoutWidget7);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        checkRemoteRight0 = new QCheckBox(layoutWidget7);
        checkRemoteRight0->setObjectName(QString::fromUtf8("checkRemoteRight0"));

        gridLayout_7->addWidget(checkRemoteRight0, 0, 0, 1, 1);

        checkRemoteRight1 = new QCheckBox(layoutWidget7);
        checkRemoteRight1->setObjectName(QString::fromUtf8("checkRemoteRight1"));

        gridLayout_7->addWidget(checkRemoteRight1, 1, 0, 1, 1);

        checkRemoteRight2 = new QCheckBox(layoutWidget7);
        checkRemoteRight2->setObjectName(QString::fromUtf8("checkRemoteRight2"));

        gridLayout_7->addWidget(checkRemoteRight2, 2, 0, 1, 1);

        checkRemoteRight3 = new QCheckBox(layoutWidget7);
        checkRemoteRight3->setObjectName(QString::fromUtf8("checkRemoteRight3"));

        gridLayout_7->addWidget(checkRemoteRight3, 3, 0, 1, 1);

        checkRemoteRight4 = new QCheckBox(layoutWidget7);
        checkRemoteRight4->setObjectName(QString::fromUtf8("checkRemoteRight4"));

        gridLayout_7->addWidget(checkRemoteRight4, 4, 0, 1, 1);

        checkRemoteRight5 = new QCheckBox(layoutWidget7);
        checkRemoteRight5->setObjectName(QString::fromUtf8("checkRemoteRight5"));

        gridLayout_7->addWidget(checkRemoteRight5, 5, 0, 1, 1);

        checkRemoteRight6 = new QCheckBox(layoutWidget7);
        checkRemoteRight6->setObjectName(QString::fromUtf8("checkRemoteRight6"));

        gridLayout_7->addWidget(checkRemoteRight6, 6, 0, 1, 1);

        layoutWidget8 = new QWidget(CUserParamsClass);
        layoutWidget8->setObjectName(QString::fromUtf8("layoutWidget8"));
        layoutWidget8->setGeometry(QRect(191, 330, 187, 191));
        gridLayout_16 = new QGridLayout(layoutWidget8);
        gridLayout_16->setSpacing(6);
        gridLayout_16->setContentsMargins(11, 11, 11, 11);
        gridLayout_16->setObjectName(QString::fromUtf8("gridLayout_16"));
        gridLayout_16->setContentsMargins(0, 0, 0, 0);
        checkRemoteRight7 = new QCheckBox(layoutWidget8);
        checkRemoteRight7->setObjectName(QString::fromUtf8("checkRemoteRight7"));

        gridLayout_16->addWidget(checkRemoteRight7, 0, 0, 1, 1);

        checkRemoteRight8 = new QCheckBox(layoutWidget8);
        checkRemoteRight8->setObjectName(QString::fromUtf8("checkRemoteRight8"));

        gridLayout_16->addWidget(checkRemoteRight8, 1, 0, 1, 1);

        checkRemoteRight9 = new QCheckBox(layoutWidget8);
        checkRemoteRight9->setObjectName(QString::fromUtf8("checkRemoteRight9"));

        gridLayout_16->addWidget(checkRemoteRight9, 2, 0, 1, 1);

        checkRemoteRight10 = new QCheckBox(layoutWidget8);
        checkRemoteRight10->setObjectName(QString::fromUtf8("checkRemoteRight10"));

        gridLayout_16->addWidget(checkRemoteRight10, 3, 0, 1, 1);

        checkRemoteRight11 = new QCheckBox(layoutWidget8);
        checkRemoteRight11->setObjectName(QString::fromUtf8("checkRemoteRight11"));

        gridLayout_16->addWidget(checkRemoteRight11, 4, 0, 1, 1);

        checkRemoteRight12 = new QCheckBox(layoutWidget8);
        checkRemoteRight12->setObjectName(QString::fromUtf8("checkRemoteRight12"));

        gridLayout_16->addWidget(checkRemoteRight12, 5, 0, 1, 1);

        checkRemoteRight13 = new QCheckBox(layoutWidget8);
        checkRemoteRight13->setObjectName(QString::fromUtf8("checkRemoteRight13"));

        gridLayout_16->addWidget(checkRemoteRight13, 6, 0, 1, 1);


        retranslateUi(CUserParamsClass);

        QMetaObject::connectSlotsByName(CUserParamsClass);
    } // setupUi

    void retranslateUi(QDialog *CUserParamsClass)
    {
        CUserParamsClass->setWindowTitle(QApplication::translate("CUserParamsClass", "CUserParams", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("CUserParamsClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\256\213\344\275\223'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans'; font-size:10pt; color:#0000ff;\">Local authority</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("CUserParamsClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\256\213\344\275\223'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; color:#0000ff;\">Remote authority of client</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("CUserParamsClass", "Authority", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CUserParamsClass", "User", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("CUserParamsClass", "Username", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("CUserParamsClass", "Priority", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("CUserParamsClass", "Password", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("CUserParamsClass", "Confirm", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("CUserParamsClass", "\357\274\232", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("CUserParamsClass", "\357\274\232", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("CUserParamsClass", "\357\274\232", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("CUserParamsClass", "\357\274\232", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("CUserParamsClass", "\357\274\232", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("CUserParamsClass", "IP allowed", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("CUserParamsClass", "Mac allowed", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("CUserParamsClass", "Authority", 0, QApplication::UnicodeUTF8));
        checkLocalRight5->setText(QApplication::translate("CUserParamsClass", "Upgrade/format", 0, QApplication::UnicodeUTF8));
        checkLocalRight6->setText(QApplication::translate("CUserParamsClass", "Check local parameter", 0, QApplication::UnicodeUTF8));
        checkLocalRight7->setText(QApplication::translate("CUserParamsClass", "Local config of IP", 0, QApplication::UnicodeUTF8));
        checkLocalRight8->setText(QApplication::translate("CUserParamsClass", "Local backup", 0, QApplication::UnicodeUTF8));
        checkLocalRight9->setText(QApplication::translate("CUserParamsClass", "Local reboot/shut down", 0, QApplication::UnicodeUTF8));
        checkLocalRight0->setText(QApplication::translate("CUserParamsClass", "Local PTZ control", 0, QApplication::UnicodeUTF8));
        checkLocalRight1->setText(QApplication::translate("CUserParamsClass", "Local record", 0, QApplication::UnicodeUTF8));
        checkLocalRight2->setText(QApplication::translate("CUserParamsClass", "Local playback", 0, QApplication::UnicodeUTF8));
        checkLocalRight3->setText(QApplication::translate("CUserParamsClass", "Local parameter set", 0, QApplication::UnicodeUTF8));
        checkLocalRight4->setText(QApplication::translate("CUserParamsClass", "Local state/log", 0, QApplication::UnicodeUTF8));
        checkRemoteRight0->setText(QApplication::translate("CUserParamsClass", "PTZ control", 0, QApplication::UnicodeUTF8));
        checkRemoteRight1->setText(QApplication::translate("CUserParamsClass", "Manual record", 0, QApplication::UnicodeUTF8));
        checkRemoteRight2->setText(QApplication::translate("CUserParamsClass", "Playback", 0, QApplication::UnicodeUTF8));
        checkRemoteRight3->setText(QApplication::translate("CUserParamsClass", "Parameter config", 0, QApplication::UnicodeUTF8));
        checkRemoteRight4->setText(QApplication::translate("CUserParamsClass", "Check state/log", 0, QApplication::UnicodeUTF8));
        checkRemoteRight5->setText(QApplication::translate("CUserParamsClass", "Upgrade/format", 0, QApplication::UnicodeUTF8));
        checkRemoteRight6->setText(QApplication::translate("CUserParamsClass", "Audio talk", 0, QApplication::UnicodeUTF8));
        checkRemoteRight7->setText(QApplication::translate("CUserParamsClass", "preview", 0, QApplication::UnicodeUTF8));
        checkRemoteRight8->setText(QApplication::translate("CUserParamsClass", "Alarm upload/output", 0, QApplication::UnicodeUTF8));
        checkRemoteRight9->setText(QApplication::translate("CUserParamsClass", "Remote control local output", 0, QApplication::UnicodeUTF8));
        checkRemoteRight10->setText(QApplication::translate("CUserParamsClass", "Control serial port", 0, QApplication::UnicodeUTF8));
        checkRemoteRight11->setText(QApplication::translate("CUserParamsClass", "Reversed", 0, QApplication::UnicodeUTF8));
        checkRemoteRight12->setText(QApplication::translate("CUserParamsClass", "Remote config of IP", 0, QApplication::UnicodeUTF8));
        checkRemoteRight13->setText(QApplication::translate("CUserParamsClass", "Remote reboot/shut down", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CUserParamsClass: public Ui_CUserParamsClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSERPARAMS_H
