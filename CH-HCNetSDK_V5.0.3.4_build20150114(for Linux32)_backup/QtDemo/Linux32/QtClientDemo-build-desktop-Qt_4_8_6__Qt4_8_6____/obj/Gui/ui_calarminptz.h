/********************************************************************************
** Form generated from reading UI file 'calarminptz.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALARMINPTZ_H
#define UI_CALARMINPTZ_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CAlarmInPTZClass
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QRadioButton *rBtnPreset;
    QLineEdit *editPresetNo;
    QRadioButton *rBtnCruise;
    QLineEdit *editCruiseNo;
    QRadioButton *rBtnPtzTrack;
    QLineEdit *editPtzTrackNO;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QComboBox *comboChannel;
    QWidget *layoutWidget2;
    QGridLayout *gridLayout_3;
    QPushButton *btnSave;
    QPushButton *btnExit;

    void setupUi(QDialog *CAlarmInPTZClass)
    {
        if (CAlarmInPTZClass->objectName().isEmpty())
            CAlarmInPTZClass->setObjectName(QString::fromUtf8("CAlarmInPTZClass"));
        CAlarmInPTZClass->resize(400, 300);
        layoutWidget = new QWidget(CAlarmInPTZClass);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(80, 90, 232, 111));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        rBtnPreset = new QRadioButton(layoutWidget);
        rBtnPreset->setObjectName(QString::fromUtf8("rBtnPreset"));

        gridLayout->addWidget(rBtnPreset, 0, 0, 1, 1);

        editPresetNo = new QLineEdit(layoutWidget);
        editPresetNo->setObjectName(QString::fromUtf8("editPresetNo"));

        gridLayout->addWidget(editPresetNo, 0, 1, 1, 1);

        rBtnCruise = new QRadioButton(layoutWidget);
        rBtnCruise->setObjectName(QString::fromUtf8("rBtnCruise"));

        gridLayout->addWidget(rBtnCruise, 1, 0, 1, 1);

        editCruiseNo = new QLineEdit(layoutWidget);
        editCruiseNo->setObjectName(QString::fromUtf8("editCruiseNo"));

        gridLayout->addWidget(editCruiseNo, 1, 1, 1, 1);

        rBtnPtzTrack = new QRadioButton(layoutWidget);
        rBtnPtzTrack->setObjectName(QString::fromUtf8("rBtnPtzTrack"));

        gridLayout->addWidget(rBtnPtzTrack, 2, 0, 1, 1);

        editPtzTrackNO = new QLineEdit(layoutWidget);
        editPtzTrackNO->setObjectName(QString::fromUtf8("editPtzTrackNO"));

        gridLayout->addWidget(editPtzTrackNO, 2, 1, 1, 1);

        layoutWidget1 = new QWidget(CAlarmInPTZClass);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(30, 40, 221, 31));
        gridLayout_2 = new QGridLayout(layoutWidget1);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget1);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        comboChannel = new QComboBox(layoutWidget1);
        comboChannel->setObjectName(QString::fromUtf8("comboChannel"));

        gridLayout_2->addWidget(comboChannel, 0, 1, 1, 1);

        layoutWidget2 = new QWidget(CAlarmInPTZClass);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(100, 230, 181, 27));
        gridLayout_3 = new QGridLayout(layoutWidget2);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        btnSave = new QPushButton(layoutWidget2);
        btnSave->setObjectName(QString::fromUtf8("btnSave"));

        gridLayout_3->addWidget(btnSave, 0, 0, 1, 1);

        btnExit = new QPushButton(layoutWidget2);
        btnExit->setObjectName(QString::fromUtf8("btnExit"));

        gridLayout_3->addWidget(btnExit, 0, 1, 1, 1);


        retranslateUi(CAlarmInPTZClass);

        QMetaObject::connectSlotsByName(CAlarmInPTZClass);
    } // setupUi

    void retranslateUi(QDialog *CAlarmInPTZClass)
    {
        CAlarmInPTZClass->setWindowTitle(QApplication::translate("CAlarmInPTZClass", "CAlarmInPTZ", 0, QApplication::UnicodeUTF8));
        rBtnPreset->setText(QApplication::translate("CAlarmInPTZClass", "Preset", 0, QApplication::UnicodeUTF8));
        rBtnCruise->setText(QApplication::translate("CAlarmInPTZClass", "Sequence", 0, QApplication::UnicodeUTF8));
        rBtnPtzTrack->setText(QApplication::translate("CAlarmInPTZClass", "Cruise", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CAlarmInPTZClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\256\213\344\275\223'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Channel No.</p></body></html>", 0, QApplication::UnicodeUTF8));
        btnSave->setText(QApplication::translate("CAlarmInPTZClass", "Confirm", 0, QApplication::UnicodeUTF8));
        btnExit->setText(QApplication::translate("CAlarmInPTZClass", "Cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CAlarmInPTZClass: public Ui_CAlarmInPTZClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALARMINPTZ_H
