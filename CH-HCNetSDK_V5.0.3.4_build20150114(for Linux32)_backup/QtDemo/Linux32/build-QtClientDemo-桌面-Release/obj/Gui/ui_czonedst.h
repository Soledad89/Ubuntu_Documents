/********************************************************************************
** Form generated from reading UI file 'czonedst.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CZONEDST_H
#define UI_CZONEDST_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CZoneDstClass
{
public:
    QFrame *line;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    QGridLayout *gridLayout_3;
    QComboBox *comboEnableDST;
    QComboBox *comboSTBias;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_2;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_3;
    QComboBox *comboMonthBegin;
    QComboBox *comboMonthEnd;
    QLabel *label_4;
    QComboBox *comboWeekNoBegin;
    QComboBox *comboWeekNoEnd;
    QLabel *label_5;
    QComboBox *comboWeekDateBegin;
    QComboBox *comboWeekDateEnd;
    QLabel *label_6;
    QComboBox *comboHourBegin;
    QComboBox *comboHourEnd;
    QLabel *label_7;
    QComboBox *comboMinuteBegin;
    QComboBox *comboMinuteEnd;
    QPushButton *btnSave;
    QPushButton *btnExit;
    QPushButton *btnRefresh;

    void setupUi(QDialog *CZoneDstClass)
    {
        if (CZoneDstClass->objectName().isEmpty())
            CZoneDstClass->setObjectName(QString::fromUtf8("CZoneDstClass"));
        CZoneDstClass->resize(466, 390);
        line = new QFrame(CZoneDstClass);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(50, 100, 321, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        layoutWidget = new QWidget(CZoneDstClass);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(120, 40, 191, 61));
        gridLayout_4 = new QGridLayout(layoutWidget);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);


        gridLayout_4->addLayout(gridLayout, 0, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        comboEnableDST = new QComboBox(layoutWidget);
        comboEnableDST->setObjectName(QString::fromUtf8("comboEnableDST"));

        gridLayout_3->addWidget(comboEnableDST, 0, 0, 1, 1);

        comboSTBias = new QComboBox(layoutWidget);
        comboSTBias->setObjectName(QString::fromUtf8("comboSTBias"));

        gridLayout_3->addWidget(comboSTBias, 1, 0, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 0, 1, 1, 1);

        layoutWidget1 = new QWidget(CZoneDstClass);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(90, 131, 271, 181));
        gridLayout_2 = new QGridLayout(layoutWidget1);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget1);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_2->addWidget(label_8, 0, 1, 1, 1);

        label_9 = new QLabel(layoutWidget1);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_2->addWidget(label_9, 0, 2, 1, 1);

        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 1, 0, 1, 1);

        comboMonthBegin = new QComboBox(layoutWidget1);
        comboMonthBegin->setObjectName(QString::fromUtf8("comboMonthBegin"));
        comboMonthBegin->setEditable(false);

        gridLayout_2->addWidget(comboMonthBegin, 1, 1, 1, 1);

        comboMonthEnd = new QComboBox(layoutWidget1);
        comboMonthEnd->setObjectName(QString::fromUtf8("comboMonthEnd"));

        gridLayout_2->addWidget(comboMonthEnd, 1, 2, 1, 1);

        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 2, 0, 1, 1);

        comboWeekNoBegin = new QComboBox(layoutWidget1);
        comboWeekNoBegin->setObjectName(QString::fromUtf8("comboWeekNoBegin"));

        gridLayout_2->addWidget(comboWeekNoBegin, 2, 1, 1, 1);

        comboWeekNoEnd = new QComboBox(layoutWidget1);
        comboWeekNoEnd->setObjectName(QString::fromUtf8("comboWeekNoEnd"));

        gridLayout_2->addWidget(comboWeekNoEnd, 2, 2, 1, 1);

        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 3, 0, 1, 1);

        comboWeekDateBegin = new QComboBox(layoutWidget1);
        comboWeekDateBegin->setObjectName(QString::fromUtf8("comboWeekDateBegin"));

        gridLayout_2->addWidget(comboWeekDateBegin, 3, 1, 1, 1);

        comboWeekDateEnd = new QComboBox(layoutWidget1);
        comboWeekDateEnd->setObjectName(QString::fromUtf8("comboWeekDateEnd"));

        gridLayout_2->addWidget(comboWeekDateEnd, 3, 2, 1, 1);

        label_6 = new QLabel(layoutWidget1);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_2->addWidget(label_6, 4, 0, 1, 1);

        comboHourBegin = new QComboBox(layoutWidget1);
        comboHourBegin->setObjectName(QString::fromUtf8("comboHourBegin"));

        gridLayout_2->addWidget(comboHourBegin, 4, 1, 1, 1);

        comboHourEnd = new QComboBox(layoutWidget1);
        comboHourEnd->setObjectName(QString::fromUtf8("comboHourEnd"));

        gridLayout_2->addWidget(comboHourEnd, 4, 2, 1, 1);

        label_7 = new QLabel(layoutWidget1);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_2->addWidget(label_7, 5, 0, 1, 1);

        comboMinuteBegin = new QComboBox(layoutWidget1);
        comboMinuteBegin->setObjectName(QString::fromUtf8("comboMinuteBegin"));

        gridLayout_2->addWidget(comboMinuteBegin, 5, 1, 1, 1);

        comboMinuteEnd = new QComboBox(layoutWidget1);
        comboMinuteEnd->setObjectName(QString::fromUtf8("comboMinuteEnd"));

        gridLayout_2->addWidget(comboMinuteEnd, 5, 2, 1, 1);

        btnSave = new QPushButton(CZoneDstClass);
        btnSave->setObjectName(QString::fromUtf8("btnSave"));
        btnSave->setGeometry(QRect(220, 350, 75, 23));
        btnExit = new QPushButton(CZoneDstClass);
        btnExit->setObjectName(QString::fromUtf8("btnExit"));
        btnExit->setGeometry(QRect(330, 350, 75, 23));
        btnRefresh = new QPushButton(CZoneDstClass);
        btnRefresh->setObjectName(QString::fromUtf8("btnRefresh"));
        btnRefresh->setGeometry(QRect(70, 350, 75, 23));

        retranslateUi(CZoneDstClass);

        QMetaObject::connectSlotsByName(CZoneDstClass);
    } // setupUi

    void retranslateUi(QDialog *CZoneDstClass)
    {
        CZoneDstClass->setWindowTitle(QApplication::translate("CZoneDstClass", "CZoneDst", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CZoneDstClass", "Enable DST", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("CZoneDstClass", "DST offset", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("CZoneDstClass", "Start", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("CZoneDstClass", "End", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("CZoneDstClass", "Month", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("CZoneDstClass", "Which week", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("CZoneDstClass", "Week", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("CZoneDstClass", "Hour", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("CZoneDstClass", "Minute", 0, QApplication::UnicodeUTF8));
        btnSave->setText(QApplication::translate("CZoneDstClass", "Confirm", 0, QApplication::UnicodeUTF8));
        btnExit->setText(QApplication::translate("CZoneDstClass", "Cancel", 0, QApplication::UnicodeUTF8));
        btnRefresh->setText(QApplication::translate("CZoneDstClass", "Update", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CZoneDstClass: public Ui_CZoneDstClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CZONEDST_H
