/********************************************************************************
** Form generated from reading UI file 'ptzpreset.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PTZPRESET_H
#define UI_PTZPRESET_H

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

class Ui_PtzPresetClass
{
public:
    QLabel *label_presetpoint;
    QComboBox *comboBox_ptzpresetpointindex;
    QPushButton *pushButton_exit;
    QFrame *line_2;
    QFrame *line;
    QPushButton *pushButton_deleteptzpresetpoint;
    QFrame *line_4;
    QPushButton *pushButton_addptzpresetpoint;
    QFrame *line_3;

    void setupUi(QDialog *PtzPresetClass)
    {
        if (PtzPresetClass->objectName().isEmpty())
            PtzPresetClass->setObjectName(QString::fromUtf8("PtzPresetClass"));
        PtzPresetClass->resize(400, 160);
        label_presetpoint = new QLabel(PtzPresetClass);
        label_presetpoint->setObjectName(QString::fromUtf8("label_presetpoint"));
        label_presetpoint->setGeometry(QRect(100, 30, 51, 21));
        comboBox_ptzpresetpointindex = new QComboBox(PtzPresetClass);
        comboBox_ptzpresetpointindex->setObjectName(QString::fromUtf8("comboBox_ptzpresetpointindex"));
        comboBox_ptzpresetpointindex->setGeometry(QRect(170, 30, 111, 22));
        pushButton_exit = new QPushButton(PtzPresetClass);
        pushButton_exit->setObjectName(QString::fromUtf8("pushButton_exit"));
        pushButton_exit->setGeometry(QRect(290, 130, 75, 23));
        line_2 = new QFrame(PtzPresetClass);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(20, 100, 361, 20));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line = new QFrame(PtzPresetClass);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(20, 0, 361, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        pushButton_deleteptzpresetpoint = new QPushButton(PtzPresetClass);
        pushButton_deleteptzpresetpoint->setObjectName(QString::fromUtf8("pushButton_deleteptzpresetpoint"));
        pushButton_deleteptzpresetpoint->setGeometry(QRect(210, 70, 75, 23));
        line_4 = new QFrame(PtzPresetClass);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(370, 10, 20, 101));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);
        pushButton_addptzpresetpoint = new QPushButton(PtzPresetClass);
        pushButton_addptzpresetpoint->setObjectName(QString::fromUtf8("pushButton_addptzpresetpoint"));
        pushButton_addptzpresetpoint->setGeometry(QRect(70, 70, 75, 23));
        line_3 = new QFrame(PtzPresetClass);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(10, 10, 20, 101));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        retranslateUi(PtzPresetClass);

        QMetaObject::connectSlotsByName(PtzPresetClass);
    } // setupUi

    void retranslateUi(QDialog *PtzPresetClass)
    {
        PtzPresetClass->setWindowTitle(QApplication::translate("PtzPresetClass", "PtzPreset", 0, QApplication::UnicodeUTF8));
        label_presetpoint->setText(QApplication::translate("PtzPresetClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\256\213\344\275\223'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">\351\242\204\347\275\256\347\202\271</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        pushButton_exit->setText(QApplication::translate("PtzPresetClass", "\351\200\200\345\207\272", 0, QApplication::UnicodeUTF8));
        pushButton_deleteptzpresetpoint->setText(QApplication::translate("PtzPresetClass", "\345\210\240\351\231\244", 0, QApplication::UnicodeUTF8));
        pushButton_addptzpresetpoint->setText(QApplication::translate("PtzPresetClass", "\346\267\273\345\212\240", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PtzPresetClass: public Ui_PtzPresetClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PTZPRESET_H
