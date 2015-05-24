/********************************************************************************
** Form generated from reading UI file 'exitdemo.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXITDEMO_H
#define UI_EXITDEMO_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ExitDemoClass
{
public:
    QPushButton *pushButton_sure;
    QPushButton *pushButton_cancel;
    QLabel *label;

    void setupUi(QDialog *ExitDemoClass)
    {
        if (ExitDemoClass->objectName().isEmpty())
            ExitDemoClass->setObjectName(QString::fromUtf8("ExitDemoClass"));
        ExitDemoClass->resize(283, 87);
        pushButton_sure = new QPushButton(ExitDemoClass);
        pushButton_sure->setObjectName(QString::fromUtf8("pushButton_sure"));
        pushButton_sure->setGeometry(QRect(20, 50, 77, 25));
        pushButton_cancel = new QPushButton(ExitDemoClass);
        pushButton_cancel->setObjectName(QString::fromUtf8("pushButton_cancel"));
        pushButton_cancel->setGeometry(QRect(160, 50, 77, 25));
        label = new QLabel(ExitDemoClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 10, 121, 31));

        retranslateUi(ExitDemoClass);

        QMetaObject::connectSlotsByName(ExitDemoClass);
    } // setupUi

    void retranslateUi(QDialog *ExitDemoClass)
    {
        ExitDemoClass->setWindowTitle(QApplication::translate("ExitDemoClass", "ExitDemo", 0, QApplication::UnicodeUTF8));
        pushButton_sure->setText(QApplication::translate("ExitDemoClass", "Sure", 0, QApplication::UnicodeUTF8));
        pushButton_cancel->setText(QApplication::translate("ExitDemoClass", "Cancel", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ExitDemoClass", "Sure to exit ?", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ExitDemoClass: public Ui_ExitDemoClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXITDEMO_H
