/********************************************************************************
** Form generated from reading UI file 'catmparams.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CATMPARAMS_H
#define UI_CATMPARAMS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CATMParamsClass
{
public:
    QFrame *line;
    QWidget *widget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QWidget *wPort;
    QWidget *layoutWidget1;
    QGridLayout *gLayoutType;
    QLineEdit *editPort;
    QLabel *label_2;
    QWidget *wType;
    QWidget *layoutWidget2;
    QGridLayout *gLayoutPort;
    QLabel *label_3;
    QComboBox *comboATMType;
    QWidget *layoutWidget3;
    QVBoxLayout *vLayout;
    QWidget *layoutWidget4;
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *comboInputType;

    void setupUi(QWidget *CATMParamsClass)
    {
        if (CATMParamsClass->objectName().isEmpty())
            CATMParamsClass->setObjectName(QString::fromUtf8("CATMParamsClass"));
        CATMParamsClass->resize(671, 577);
        line = new QFrame(CATMParamsClass);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(10, 70, 651, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        widget = new QWidget(CATMParamsClass);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(290, -30, 649, 449));
        layoutWidget = new QWidget(widget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 20, 381, 131));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        wPort = new QWidget(layoutWidget);
        wPort->setObjectName(QString::fromUtf8("wPort"));
        layoutWidget1 = new QWidget(wPort);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 10, 195, 31));
        gLayoutType = new QGridLayout(layoutWidget1);
        gLayoutType->setSpacing(6);
        gLayoutType->setContentsMargins(11, 11, 11, 11);
        gLayoutType->setObjectName(QString::fromUtf8("gLayoutType"));
        gLayoutType->setContentsMargins(0, 0, 0, 0);
        editPort = new QLineEdit(layoutWidget1);
        editPort->setObjectName(QString::fromUtf8("editPort"));

        gLayoutType->addWidget(editPort, 0, 1, 1, 1);

        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gLayoutType->addWidget(label_2, 0, 0, 1, 1);


        verticalLayout->addWidget(wPort);

        wType = new QWidget(layoutWidget);
        wType->setObjectName(QString::fromUtf8("wType"));
        layoutWidget2 = new QWidget(wType);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(20, 10, 131, 31));
        gLayoutPort = new QGridLayout(layoutWidget2);
        gLayoutPort->setSpacing(6);
        gLayoutPort->setContentsMargins(11, 11, 11, 11);
        gLayoutPort->setObjectName(QString::fromUtf8("gLayoutPort"));
        gLayoutPort->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gLayoutPort->addWidget(label_3, 0, 0, 1, 1);

        comboATMType = new QComboBox(layoutWidget2);
        comboATMType->setObjectName(QString::fromUtf8("comboATMType"));

        gLayoutPort->addWidget(comboATMType, 0, 1, 1, 1);


        verticalLayout->addWidget(wType);

        layoutWidget3 = new QWidget(CATMParamsClass);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(12, 90, 651, 451));
        vLayout = new QVBoxLayout(layoutWidget3);
        vLayout->setSpacing(6);
        vLayout->setContentsMargins(11, 11, 11, 11);
        vLayout->setObjectName(QString::fromUtf8("vLayout"));
        vLayout->setContentsMargins(0, 0, 0, 0);
        layoutWidget4 = new QWidget(CATMParamsClass);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(-60, 30, 291, 31));
        gridLayout = new QGridLayout(layoutWidget4);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget4);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\226\260\345\256\213\344\275\223"));
        label->setFont(font);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        comboInputType = new QComboBox(layoutWidget4);
        comboInputType->setObjectName(QString::fromUtf8("comboInputType"));

        gridLayout->addWidget(comboInputType, 0, 1, 1, 1);


        retranslateUi(CATMParamsClass);

        QMetaObject::connectSlotsByName(CATMParamsClass);
    } // setupUi

    void retranslateUi(QWidget *CATMParamsClass)
    {
        CATMParamsClass->setWindowTitle(QApplication::translate("CATMParamsClass", "CATMParams", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("CATMParamsClass", "Local port:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("CATMParamsClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\256\213\344\275\223'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">ATM type:</p></body></html>", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CATMParamsClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\346\226\260\345\256\213\344\275\223'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'\345\256\213\344\275\223'; font-size:10pt;\">Input mode</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CATMParamsClass: public Ui_CATMParamsClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CATMPARAMS_H
