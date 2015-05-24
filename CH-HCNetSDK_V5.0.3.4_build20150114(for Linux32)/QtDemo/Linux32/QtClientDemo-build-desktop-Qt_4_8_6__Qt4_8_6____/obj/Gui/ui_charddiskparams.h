/********************************************************************************
** Form generated from reading UI file 'charddiskparams.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHARDDISKPARAMS_H
#define UI_CHARDDISKPARAMS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QTableWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CHardDiskParamsClass
{
public:
    QPushButton *btnHDSave;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_8;
    QLabel *label_5;
    QFrame *line;
    QTableWidget *tableHardDisk;
    QPushButton *btnHDUpdate;
    QTableWidget *tableHDGroup;
    QPushButton *btnHDGroupUpdate;
    QPushButton *btnHDGroupSave;
    QWidget *layoutWidget_2;
    QGridLayout *gridLayout_9;
    QLabel *label_6;
    QFrame *line_2;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *comboDGroup;
    QCheckBox *checkAllChan;

    void setupUi(QWidget *CHardDiskParamsClass)
    {
        if (CHardDiskParamsClass->objectName().isEmpty())
            CHardDiskParamsClass->setObjectName(QString::fromUtf8("CHardDiskParamsClass"));
        CHardDiskParamsClass->resize(683, 633);
        btnHDSave = new QPushButton(CHardDiskParamsClass);
        btnHDSave->setObjectName(QString::fromUtf8("btnHDSave"));
        btnHDSave->setGeometry(QRect(500, 270, 75, 31));
        layoutWidget = new QWidget(CHardDiskParamsClass);
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

        tableHardDisk = new QTableWidget(CHardDiskParamsClass);
        tableHardDisk->setObjectName(QString::fromUtf8("tableHardDisk"));
        tableHardDisk->setGeometry(QRect(20, 50, 641, 211));
        btnHDUpdate = new QPushButton(CHardDiskParamsClass);
        btnHDUpdate->setObjectName(QString::fromUtf8("btnHDUpdate"));
        btnHDUpdate->setGeometry(QRect(580, 270, 75, 31));
        tableHDGroup = new QTableWidget(CHardDiskParamsClass);
        tableHDGroup->setObjectName(QString::fromUtf8("tableHDGroup"));
        tableHDGroup->setGeometry(QRect(160, 340, 501, 211));
        btnHDGroupUpdate = new QPushButton(CHardDiskParamsClass);
        btnHDGroupUpdate->setObjectName(QString::fromUtf8("btnHDGroupUpdate"));
        btnHDGroupUpdate->setGeometry(QRect(580, 560, 75, 31));
        btnHDGroupSave = new QPushButton(CHardDiskParamsClass);
        btnHDGroupSave->setObjectName(QString::fromUtf8("btnHDGroupSave"));
        btnHDGroupSave->setGeometry(QRect(500, 560, 75, 31));
        layoutWidget_2 = new QWidget(CHardDiskParamsClass);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(20, 300, 641, 31));
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

        layoutWidget1 = new QWidget(CHardDiskParamsClass);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 340, 131, 31));
        gridLayout = new QGridLayout(layoutWidget1);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget1);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        comboDGroup = new QComboBox(layoutWidget1);
        comboDGroup->setObjectName(QString::fromUtf8("comboDGroup"));

        gridLayout->addWidget(comboDGroup, 0, 1, 1, 1);

        checkAllChan = new QCheckBox(CHardDiskParamsClass);
        checkAllChan->setObjectName(QString::fromUtf8("checkAllChan"));
        checkAllChan->setGeometry(QRect(160, 560, 161, 31));

        retranslateUi(CHardDiskParamsClass);

        QMetaObject::connectSlotsByName(CHardDiskParamsClass);
    } // setupUi

    void retranslateUi(QWidget *CHardDiskParamsClass)
    {
        CHardDiskParamsClass->setWindowTitle(QApplication::translate("CHardDiskParamsClass", "CHardDiskParams", 0, QApplication::UnicodeUTF8));
        btnHDSave->setText(QApplication::translate("CHardDiskParamsClass", "Set", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("CHardDiskParamsClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\256\213\344\275\223'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans'; font-size:12pt; color:#0000ff;\">Hard disk management</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        btnHDUpdate->setText(QApplication::translate("CHardDiskParamsClass", "Update", 0, QApplication::UnicodeUTF8));
        btnHDGroupUpdate->setText(QApplication::translate("CHardDiskParamsClass", "Update", 0, QApplication::UnicodeUTF8));
        btnHDGroupSave->setText(QApplication::translate("CHardDiskParamsClass", "Set", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("CHardDiskParamsClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\256\213\344\275\223'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans'; font-size:12pt; color:#0000ff;\">Setup disk group</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CHardDiskParamsClass", "Disk", 0, QApplication::UnicodeUTF8));
        checkAllChan->setText(QApplication::translate("CHardDiskParamsClass", "Select all channel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CHardDiskParamsClass: public Ui_CHardDiskParamsClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHARDDISKPARAMS_H
