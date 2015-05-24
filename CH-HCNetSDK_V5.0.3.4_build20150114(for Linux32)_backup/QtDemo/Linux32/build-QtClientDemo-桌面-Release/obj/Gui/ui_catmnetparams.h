/********************************************************************************
** Form generated from reading UI file 'catmnetparams.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CATMNETPARAMS_H
#define UI_CATMNETPARAMS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CATMNetParamsClass
{
public:
    QLabel *label_3;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_4;
    QLabel *label_5;
    QLineEdit *editSignLength;
    QWidget *layoutWidget_2;
    QGridLayout *gridLayout_5;
    QLabel *label_6;
    QLineEdit *editSignContent;
    QWidget *layoutWidget_3;
    QGridLayout *gridLayout_6;
    QLabel *label_7;
    QLineEdit *editCardLenBeginPos;
    QWidget *layoutWidget_4;
    QGridLayout *gridLayout_7;
    QLabel *label_8;
    QLineEdit *editCardLenLen;
    QWidget *layoutWidget_5;
    QGridLayout *gridLayout_8;
    QLabel *label_10;
    QLineEdit *editCardPos;
    QWidget *layoutWidget_6;
    QGridLayout *gridLayout_9;
    QLabel *label_11;
    QLineEdit *editCardLen;
    QWidget *layoutWidget_7;
    QGridLayout *gridLayout_10;
    QLabel *label_13;
    QLineEdit *editBusinessPos;
    QWidget *layoutWidget_8;
    QGridLayout *gridLayout_11;
    QLabel *label_14;
    QLineEdit *editBusinessLen;
    QLabel *label_9;
    QLabel *label_12;
    QLabel *label_15;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QComboBox *comboATMType;
    QWidget *layoutWidget2;
    QGridLayout *gridLayout_3;
    QLabel *label_4;
    QLineEdit *editSignBeginPos;
    QWidget *layoutWidget3;
    QGridLayout *gridLayout_12;
    QLabel *label_17;
    QLineEdit *editCode;
    QWidget *layoutWidget4;
    QGridLayout *gridLayout_13;
    QLabel *label_16;
    QComboBox *comboCodeType;
    QWidget *layoutWidget5;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *editIP;

    void setupUi(QWidget *CATMNetParamsClass)
    {
        if (CATMNetParamsClass->objectName().isEmpty())
            CATMNetParamsClass->setObjectName(QString::fromUtf8("CATMNetParamsClass"));
        CATMNetParamsClass->resize(642, 443);
        label_3 = new QLabel(CATMNetParamsClass);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 65, 81, 21));
        layoutWidget = new QWidget(CATMNetParamsClass);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(220, 90, 111, 23));
        gridLayout_4 = new QGridLayout(layoutWidget);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_4->addWidget(label_5, 0, 0, 1, 1);

        editSignLength = new QLineEdit(layoutWidget);
        editSignLength->setObjectName(QString::fromUtf8("editSignLength"));

        gridLayout_4->addWidget(editSignLength, 0, 1, 1, 1);

        layoutWidget_2 = new QWidget(CATMNetParamsClass);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(360, 90, 181, 23));
        gridLayout_5 = new QGridLayout(layoutWidget_2);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_5->addWidget(label_6, 0, 0, 1, 1);

        editSignContent = new QLineEdit(layoutWidget_2);
        editSignContent->setObjectName(QString::fromUtf8("editSignContent"));

        gridLayout_5->addWidget(editSignContent, 0, 1, 1, 1);

        layoutWidget_3 = new QWidget(CATMNetParamsClass);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(60, 150, 141, 23));
        gridLayout_6 = new QGridLayout(layoutWidget_3);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_6->addWidget(label_7, 0, 0, 1, 1);

        editCardLenBeginPos = new QLineEdit(layoutWidget_3);
        editCardLenBeginPos->setObjectName(QString::fromUtf8("editCardLenBeginPos"));

        gridLayout_6->addWidget(editCardLenBeginPos, 0, 1, 1, 1);

        layoutWidget_4 = new QWidget(CATMNetParamsClass);
        layoutWidget_4->setObjectName(QString::fromUtf8("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(220, 150, 111, 23));
        gridLayout_7 = new QGridLayout(layoutWidget_4);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget_4);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_7->addWidget(label_8, 0, 0, 1, 1);

        editCardLenLen = new QLineEdit(layoutWidget_4);
        editCardLenLen->setObjectName(QString::fromUtf8("editCardLenLen"));

        gridLayout_7->addWidget(editCardLenLen, 0, 1, 1, 1);

        layoutWidget_5 = new QWidget(CATMNetParamsClass);
        layoutWidget_5->setObjectName(QString::fromUtf8("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(60, 210, 141, 23));
        gridLayout_8 = new QGridLayout(layoutWidget_5);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_8->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(layoutWidget_5);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_8->addWidget(label_10, 0, 0, 1, 1);

        editCardPos = new QLineEdit(layoutWidget_5);
        editCardPos->setObjectName(QString::fromUtf8("editCardPos"));

        gridLayout_8->addWidget(editCardPos, 0, 1, 1, 1);

        layoutWidget_6 = new QWidget(CATMNetParamsClass);
        layoutWidget_6->setObjectName(QString::fromUtf8("layoutWidget_6"));
        layoutWidget_6->setGeometry(QRect(220, 210, 111, 23));
        gridLayout_9 = new QGridLayout(layoutWidget_6);
        gridLayout_9->setSpacing(6);
        gridLayout_9->setContentsMargins(11, 11, 11, 11);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        gridLayout_9->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(layoutWidget_6);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_9->addWidget(label_11, 0, 0, 1, 1);

        editCardLen = new QLineEdit(layoutWidget_6);
        editCardLen->setObjectName(QString::fromUtf8("editCardLen"));

        gridLayout_9->addWidget(editCardLen, 0, 1, 1, 1);

        layoutWidget_7 = new QWidget(CATMNetParamsClass);
        layoutWidget_7->setObjectName(QString::fromUtf8("layoutWidget_7"));
        layoutWidget_7->setGeometry(QRect(60, 270, 141, 23));
        gridLayout_10 = new QGridLayout(layoutWidget_7);
        gridLayout_10->setSpacing(6);
        gridLayout_10->setContentsMargins(11, 11, 11, 11);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        gridLayout_10->setContentsMargins(0, 0, 0, 0);
        label_13 = new QLabel(layoutWidget_7);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_10->addWidget(label_13, 0, 0, 1, 1);

        editBusinessPos = new QLineEdit(layoutWidget_7);
        editBusinessPos->setObjectName(QString::fromUtf8("editBusinessPos"));

        gridLayout_10->addWidget(editBusinessPos, 0, 1, 1, 1);

        layoutWidget_8 = new QWidget(CATMNetParamsClass);
        layoutWidget_8->setObjectName(QString::fromUtf8("layoutWidget_8"));
        layoutWidget_8->setGeometry(QRect(220, 270, 111, 23));
        gridLayout_11 = new QGridLayout(layoutWidget_8);
        gridLayout_11->setSpacing(6);
        gridLayout_11->setContentsMargins(11, 11, 11, 11);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        gridLayout_11->setContentsMargins(0, 0, 0, 0);
        label_14 = new QLabel(layoutWidget_8);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_11->addWidget(label_14, 0, 0, 1, 1);

        editBusinessLen = new QLineEdit(layoutWidget_8);
        editBusinessLen->setObjectName(QString::fromUtf8("editBusinessLen"));

        gridLayout_11->addWidget(editBusinessLen, 0, 1, 1, 1);

        label_9 = new QLabel(CATMNetParamsClass);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(30, 130, 81, 21));
        label_12 = new QLabel(CATMNetParamsClass);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(30, 190, 81, 21));
        label_15 = new QLabel(CATMNetParamsClass);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(30, 250, 81, 21));
        layoutWidget1 = new QWidget(CATMNetParamsClass);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(330, 20, 161, 23));
        gridLayout_2 = new QGridLayout(layoutWidget1);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        comboATMType = new QComboBox(layoutWidget1);
        comboATMType->setObjectName(QString::fromUtf8("comboATMType"));

        gridLayout_2->addWidget(comboATMType, 0, 1, 1, 1);

        layoutWidget2 = new QWidget(CATMNetParamsClass);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(60, 90, 141, 23));
        gridLayout_3 = new QGridLayout(layoutWidget2);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_3->addWidget(label_4, 0, 0, 1, 1);

        editSignBeginPos = new QLineEdit(layoutWidget2);
        editSignBeginPos->setObjectName(QString::fromUtf8("editSignBeginPos"));

        gridLayout_3->addWidget(editSignBeginPos, 0, 1, 1, 1);

        layoutWidget3 = new QWidget(CATMNetParamsClass);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(170, 320, 195, 23));
        gridLayout_12 = new QGridLayout(layoutWidget3);
        gridLayout_12->setSpacing(6);
        gridLayout_12->setContentsMargins(11, 11, 11, 11);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        gridLayout_12->setContentsMargins(0, 0, 0, 0);
        label_17 = new QLabel(layoutWidget3);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout_12->addWidget(label_17, 0, 0, 1, 1);

        editCode = new QLineEdit(layoutWidget3);
        editCode->setObjectName(QString::fromUtf8("editCode"));

        gridLayout_12->addWidget(editCode, 0, 1, 1, 1);

        layoutWidget4 = new QWidget(CATMNetParamsClass);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(40, 320, 111, 23));
        gridLayout_13 = new QGridLayout(layoutWidget4);
        gridLayout_13->setSpacing(6);
        gridLayout_13->setContentsMargins(11, 11, 11, 11);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        gridLayout_13->setContentsMargins(0, 0, 0, 0);
        label_16 = new QLabel(layoutWidget4);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout_13->addWidget(label_16, 0, 0, 1, 1);

        comboCodeType = new QComboBox(layoutWidget4);
        comboCodeType->setObjectName(QString::fromUtf8("comboCodeType"));

        gridLayout_13->addWidget(comboCodeType, 0, 1, 1, 1);

        layoutWidget5 = new QWidget(CATMNetParamsClass);
        layoutWidget5->setObjectName(QString::fromUtf8("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(61, 21, 251, 23));
        gridLayout = new QGridLayout(layoutWidget5);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget5);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        editIP = new QLineEdit(layoutWidget5);
        editIP->setObjectName(QString::fromUtf8("editIP"));

        gridLayout->addWidget(editIP, 0, 1, 1, 1);


        retranslateUi(CATMNetParamsClass);

        QMetaObject::connectSlotsByName(CATMNetParamsClass);
    } // setupUi

    void retranslateUi(QWidget *CATMNetParamsClass)
    {
        CATMNetParamsClass->setWindowTitle(QApplication::translate("CATMNetParamsClass", "CATMNetParams", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("CATMNetParamsClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\256\213\344\275\223'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#0000ff;\">Package flag:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("CATMNetParamsClass", "Length", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("CATMNetParamsClass", "Content", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("CATMNetParamsClass", "Start", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("CATMNetParamsClass", "Length", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("CATMNetParamsClass", "Start", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("CATMNetParamsClass", "Length", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("CATMNetParamsClass", "Start", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("CATMNetParamsClass", "Length", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("CATMNetParamsClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\256\213\344\275\223'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#0000ff;\">Card length info:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("CATMNetParamsClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\256\213\344\275\223'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#0000ff;\">Card info:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("CATMNetParamsClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\256\213\344\275\223'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#0000ff;\">Trade type:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("CATMNetParamsClass", "ATM model", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("CATMNetParamsClass", "Start", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("CATMNetParamsClass", "Code", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("CATMNetParamsClass", "Type", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CATMNetParamsClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\256\213\344\275\223'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">ATM IP</p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CATMNetParamsClass: public Ui_CATMNetParamsClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CATMNETPARAMS_H
