/********************************************************************************
** Form generated from reading UI file 'formatdisk.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMATDISK_H
#define UI_FORMATDISK_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>

QT_BEGIN_NAMESPACE

class Ui_FormatDiskClass
{
public:
    QComboBox *comboBox;
    QLabel *label;
    QPushButton *pushButton_format;
    QPushButton *pushButton_exit;
    QSlider *horizontalSlider;

    void setupUi(QDialog *FormatDiskClass)
    {
        if (FormatDiskClass->objectName().isEmpty())
            FormatDiskClass->setObjectName(QString::fromUtf8("FormatDiskClass"));
        FormatDiskClass->resize(379, 241);
        comboBox = new QComboBox(FormatDiskClass);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(150, 40, 151, 22));
        label = new QLabel(FormatDiskClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 40, 91, 31));
        pushButton_format = new QPushButton(FormatDiskClass);
        pushButton_format->setObjectName(QString::fromUtf8("pushButton_format"));
        pushButton_format->setGeometry(QRect(40, 100, 75, 23));
        pushButton_exit = new QPushButton(FormatDiskClass);
        pushButton_exit->setObjectName(QString::fromUtf8("pushButton_exit"));
        pushButton_exit->setGeometry(QRect(220, 100, 81, 23));
        horizontalSlider = new QSlider(FormatDiskClass);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(40, 140, 261, 21));
        horizontalSlider->setOrientation(Qt::Horizontal);

        retranslateUi(FormatDiskClass);

        QMetaObject::connectSlotsByName(FormatDiskClass);
    } // setupUi

    void retranslateUi(QDialog *FormatDiskClass)
    {
        FormatDiskClass->setWindowTitle(QApplication::translate("FormatDiskClass", "FormatDisk", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("FormatDiskClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\256\213\344\275\223'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">Disk</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        pushButton_format->setText(QApplication::translate("FormatDiskClass", "Format", 0, QApplication::UnicodeUTF8));
        pushButton_exit->setText(QApplication::translate("FormatDiskClass", "Exit", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class FormatDiskClass: public Ui_FormatDiskClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMATDISK_H
