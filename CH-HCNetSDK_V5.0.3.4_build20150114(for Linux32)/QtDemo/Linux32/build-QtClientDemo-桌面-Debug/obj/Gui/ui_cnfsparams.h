/********************************************************************************
** Form generated from reading UI file 'cnfsparams.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CNFSPARAMS_H
#define UI_CNFSPARAMS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CNfsParamsClass
{
public:
    QPushButton *btnSave;
    QPushButton *btnExit;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QLineEdit *editServerIP;
    QGridLayout *gridLayout_3;
    QLabel *label_3;
    QLineEdit *editFilePath;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QComboBox *comboDiskNum;
    QPushButton *btnRefresh;

    void setupUi(QWidget *CNfsParamsClass)
    {
        if (CNfsParamsClass->objectName().isEmpty())
            CNfsParamsClass->setObjectName(QString::fromUtf8("CNfsParamsClass"));
        CNfsParamsClass->resize(400, 196);
        btnSave = new QPushButton(CNfsParamsClass);
        btnSave->setObjectName(QString::fromUtf8("btnSave"));
        btnSave->setGeometry(QRect(180, 140, 75, 23));
        btnExit = new QPushButton(CNfsParamsClass);
        btnExit->setObjectName(QString::fromUtf8("btnExit"));
        btnExit->setGeometry(QRect(280, 140, 75, 23));
        layoutWidget = new QWidget(CNfsParamsClass);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 70, 321, 54));
        gridLayout_4 = new QGridLayout(layoutWidget);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        editServerIP = new QLineEdit(layoutWidget);
        editServerIP->setObjectName(QString::fromUtf8("editServerIP"));

        gridLayout_2->addWidget(editServerIP, 0, 1, 1, 1);


        gridLayout_4->addLayout(gridLayout_2, 0, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_3->addWidget(label_3, 0, 0, 1, 1);

        editFilePath = new QLineEdit(layoutWidget);
        editFilePath->setObjectName(QString::fromUtf8("editFilePath"));

        gridLayout_3->addWidget(editFilePath, 0, 1, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 1, 0, 1, 1);

        layoutWidget1 = new QWidget(CNfsParamsClass);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(50, 30, 125, 23));
        gridLayout = new QGridLayout(layoutWidget1);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        comboDiskNum = new QComboBox(layoutWidget1);
        comboDiskNum->setObjectName(QString::fromUtf8("comboDiskNum"));

        gridLayout->addWidget(comboDiskNum, 0, 1, 1, 1);

        btnRefresh = new QPushButton(CNfsParamsClass);
        btnRefresh->setObjectName(QString::fromUtf8("btnRefresh"));
        btnRefresh->setGeometry(QRect(40, 140, 75, 23));

        retranslateUi(CNfsParamsClass);

        QMetaObject::connectSlotsByName(CNfsParamsClass);
    } // setupUi

    void retranslateUi(QWidget *CNfsParamsClass)
    {
        CNfsParamsClass->setWindowTitle(QApplication::translate("CNfsParamsClass", "CNfsParams", 0, QApplication::UnicodeUTF8));
        btnSave->setText(QApplication::translate("CNfsParamsClass", "Confirm", 0, QApplication::UnicodeUTF8));
        btnExit->setText(QApplication::translate("CNfsParamsClass", "Cannel", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("CNfsParamsClass", "NFS IP address", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("CNfsParamsClass", "Directory", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("CNfsParamsClass", "Disk No.", 0, QApplication::UnicodeUTF8));
        btnRefresh->setText(QApplication::translate("CNfsParamsClass", "Update", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CNfsParamsClass: public Ui_CNfsParamsClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CNFSPARAMS_H
