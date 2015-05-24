/********************************************************************************
** Form generated from reading UI file 'ptzcruise.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PTZCRUISE_H
#define UI_PTZCRUISE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_PtzCruiseClass
{
public:
    QLabel *label_presetpoint;
    QComboBox *comboBox_ptzcruisepath;
    QPushButton *pushButton_exit;
    QFrame *line_2;
    QFrame *line;
    QPushButton *pushButton_deletecruisepoint;
    QFrame *line_4;
    QPushButton *pushButton_addcruisepoint;
    QFrame *line_3;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QComboBox *comboBox_ptzcruisepoint;
    QComboBox *comboBox_ptzcruisepresetpoint;
    QComboBox *comboBox_ptzcruisetime;
    QComboBox *comboBox_ptzcruisespeed;

    void setupUi(QDialog *PtzCruiseClass)
    {
        if (PtzCruiseClass->objectName().isEmpty())
            PtzCruiseClass->setObjectName(QString::fromUtf8("PtzCruiseClass"));
        PtzCruiseClass->resize(621, 150);
        label_presetpoint = new QLabel(PtzCruiseClass);
        label_presetpoint->setObjectName(QString::fromUtf8("label_presetpoint"));
        label_presetpoint->setGeometry(QRect(180, 20, 71, 21));
        comboBox_ptzcruisepath = new QComboBox(PtzCruiseClass);
        comboBox_ptzcruisepath->setObjectName(QString::fromUtf8("comboBox_ptzcruisepath"));
        comboBox_ptzcruisepath->setGeometry(QRect(270, 20, 171, 22));
        pushButton_exit = new QPushButton(PtzCruiseClass);
        pushButton_exit->setObjectName(QString::fromUtf8("pushButton_exit"));
        pushButton_exit->setGeometry(QRect(530, 120, 75, 23));
        line_2 = new QFrame(PtzCruiseClass);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(10, 100, 601, 20));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line = new QFrame(PtzCruiseClass);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(10, 40, 601, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        pushButton_deletecruisepoint = new QPushButton(PtzCruiseClass);
        pushButton_deletecruisepoint->setObjectName(QString::fromUtf8("pushButton_deletecruisepoint"));
        pushButton_deletecruisepoint->setGeometry(QRect(290, 122, 111, 21));
        line_4 = new QFrame(PtzCruiseClass);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(600, 50, 20, 61));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);
        pushButton_addcruisepoint = new QPushButton(PtzCruiseClass);
        pushButton_addcruisepoint->setObjectName(QString::fromUtf8("pushButton_addcruisepoint"));
        pushButton_addcruisepoint->setGeometry(QRect(130, 120, 101, 23));
        line_3 = new QFrame(PtzCruiseClass);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(0, 50, 20, 61));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);
        label = new QLabel(PtzCruiseClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 70, 41, 16));
        label_2 = new QLabel(PtzCruiseClass);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(160, 70, 51, 20));
        label_3 = new QLabel(PtzCruiseClass);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(310, 70, 51, 21));
        label_4 = new QLabel(PtzCruiseClass);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(470, 70, 31, 21));
        comboBox_ptzcruisepoint = new QComboBox(PtzCruiseClass);
        comboBox_ptzcruisepoint->setObjectName(QString::fromUtf8("comboBox_ptzcruisepoint"));
        comboBox_ptzcruisepoint->setGeometry(QRect(60, 70, 91, 22));
        comboBox_ptzcruisepresetpoint = new QComboBox(PtzCruiseClass);
        comboBox_ptzcruisepresetpoint->setObjectName(QString::fromUtf8("comboBox_ptzcruisepresetpoint"));
        comboBox_ptzcruisepresetpoint->setGeometry(QRect(210, 70, 91, 22));
        comboBox_ptzcruisetime = new QComboBox(PtzCruiseClass);
        comboBox_ptzcruisetime->setObjectName(QString::fromUtf8("comboBox_ptzcruisetime"));
        comboBox_ptzcruisetime->setGeometry(QRect(370, 70, 91, 22));
        comboBox_ptzcruisespeed = new QComboBox(PtzCruiseClass);
        comboBox_ptzcruisespeed->setObjectName(QString::fromUtf8("comboBox_ptzcruisespeed"));
        comboBox_ptzcruisespeed->setGeometry(QRect(510, 70, 91, 22));

        retranslateUi(PtzCruiseClass);

        QMetaObject::connectSlotsByName(PtzCruiseClass);
    } // setupUi

    void retranslateUi(QDialog *PtzCruiseClass)
    {
        PtzCruiseClass->setWindowTitle(QApplication::translate("PtzCruiseClass", "PtzCruise", 0, QApplication::UnicodeUTF8));
        label_presetpoint->setText(QApplication::translate("PtzCruiseClass", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\256\213\344\275\223'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">\345\267\241\350\210\252\350\267\257\345\276\204</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        pushButton_exit->setText(QApplication::translate("PtzCruiseClass", "\351\200\200\345\207\272", 0, QApplication::UnicodeUTF8));
        pushButton_deletecruisepoint->setText(QApplication::translate("PtzCruiseClass", "\345\210\240\351\231\244\345\267\241\350\210\252\347\202\271", 0, QApplication::UnicodeUTF8));
        pushButton_addcruisepoint->setText(QApplication::translate("PtzCruiseClass", "\346\267\273\345\212\240\345\267\241\350\210\252\347\202\271", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("PtzCruiseClass", "\345\267\241\350\210\252\347\202\271", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("PtzCruiseClass", "\351\242\204\347\275\256\347\202\271", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("PtzCruiseClass", "\346\227\266\351\227\264(\347\247\222)", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("PtzCruiseClass", "\351\200\237\345\272\246", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PtzCruiseClass: public Ui_PtzCruiseClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PTZCRUISE_H
