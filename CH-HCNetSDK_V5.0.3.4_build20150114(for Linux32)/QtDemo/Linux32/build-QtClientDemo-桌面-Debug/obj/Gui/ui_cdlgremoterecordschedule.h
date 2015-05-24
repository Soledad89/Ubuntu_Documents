/********************************************************************************
** Form generated from reading UI file 'cdlgremoterecordschedule.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CDLGREMOTERECORDSCHEDULE_H
#define UI_CDLGREMOTERECORDSCHEDULE_H

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
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CDlgRemoteRecordScheduleClass
{
public:
    QFrame *line;
    QPushButton *btnSave;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_6;
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *comboWeekDay;
    QCheckBox *checkRecordAllDay;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QComboBox *comboDayRecordType;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_21;
    QLabel *label_54;
    QComboBox *comboCopyRecordDay;
    QPushButton *btnCopyDay;
    QLabel *label_3;
    QLabel *label_4;
    QWidget *layoutWidget2;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_6;
    QLabel *label_12;
    QLabel *label_18;
    QLabel *label_30;
    QLabel *label_24;
    QLabel *label_42;
    QLabel *label_36;
    QLabel *label_48;
    QVBoxLayout *vLayStartHour;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_7;
    QLabel *label_13;
    QLabel *label_19;
    QLabel *label_31;
    QLabel *label_25;
    QLabel *label_43;
    QLabel *label_37;
    QLabel *label_49;
    QVBoxLayout *vLayStartMin;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_8;
    QLabel *label_14;
    QLabel *label_20;
    QLabel *label_32;
    QLabel *label_26;
    QLabel *label_44;
    QLabel *label_38;
    QLabel *label_50;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_11;
    QLabel *label_15;
    QLabel *label_21;
    QLabel *label_33;
    QLabel *label_27;
    QLabel *label_45;
    QLabel *label_39;
    QLabel *label_51;
    QVBoxLayout *vLayEndHour;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_9;
    QLabel *label_16;
    QLabel *label_22;
    QLabel *label_34;
    QLabel *label_28;
    QLabel *label_46;
    QLabel *label_40;
    QLabel *label_52;
    QVBoxLayout *vLayEndMin;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_10;
    QLabel *label_17;
    QLabel *label_23;
    QLabel *label_35;
    QLabel *label_29;
    QLabel *label_47;
    QLabel *label_41;
    QLabel *label_53;
    QWidget *layoutWidget3;
    QGridLayout *gridLayout_4;
    QLabel *label_5;
    QVBoxLayout *vLayRecordType;

    void setupUi(QWidget *CDlgRemoteRecordScheduleClass)
    {
        if (CDlgRemoteRecordScheduleClass->objectName().isEmpty())
            CDlgRemoteRecordScheduleClass->setObjectName(QString::fromUtf8("CDlgRemoteRecordScheduleClass"));
        CDlgRemoteRecordScheduleClass->resize(611, 551);
        line = new QFrame(CDlgRemoteRecordScheduleClass);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(40, 60, 501, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        btnSave = new QPushButton(CDlgRemoteRecordScheduleClass);
        btnSave->setObjectName(QString::fromUtf8("btnSave"));
        btnSave->setGeometry(QRect(450, 400, 75, 23));
        layoutWidget = new QWidget(CDlgRemoteRecordScheduleClass);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(60, 30, 531, 25));
        gridLayout_6 = new QGridLayout(layoutWidget);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        comboWeekDay = new QComboBox(layoutWidget);
        comboWeekDay->setObjectName(QString::fromUtf8("comboWeekDay"));

        gridLayout->addWidget(comboWeekDay, 0, 1, 1, 1);


        gridLayout_6->addLayout(gridLayout, 0, 0, 1, 1);

        checkRecordAllDay = new QCheckBox(layoutWidget);
        checkRecordAllDay->setObjectName(QString::fromUtf8("checkRecordAllDay"));

        gridLayout_6->addWidget(checkRecordAllDay, 0, 1, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        comboDayRecordType = new QComboBox(layoutWidget);
        comboDayRecordType->setObjectName(QString::fromUtf8("comboDayRecordType"));

        gridLayout_2->addWidget(comboDayRecordType, 0, 1, 1, 1);


        gridLayout_6->addLayout(gridLayout_2, 0, 2, 1, 1);

        layoutWidget1 = new QWidget(CDlgRemoteRecordScheduleClass);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(50, 400, 331, 25));
        gridLayout_21 = new QGridLayout(layoutWidget1);
        gridLayout_21->setSpacing(6);
        gridLayout_21->setContentsMargins(11, 11, 11, 11);
        gridLayout_21->setObjectName(QString::fromUtf8("gridLayout_21"));
        gridLayout_21->setContentsMargins(0, 0, 0, 0);
        label_54 = new QLabel(layoutWidget1);
        label_54->setObjectName(QString::fromUtf8("label_54"));

        gridLayout_21->addWidget(label_54, 0, 0, 1, 1);

        comboCopyRecordDay = new QComboBox(layoutWidget1);
        comboCopyRecordDay->setObjectName(QString::fromUtf8("comboCopyRecordDay"));

        gridLayout_21->addWidget(comboCopyRecordDay, 0, 1, 1, 1);

        btnCopyDay = new QPushButton(layoutWidget1);
        btnCopyDay->setObjectName(QString::fromUtf8("btnCopyDay"));

        gridLayout_21->addWidget(btnCopyDay, 0, 2, 1, 1);

        label_3 = new QLabel(CDlgRemoteRecordScheduleClass);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(140, 80, 81, 21));
        label_4 = new QLabel(CDlgRemoteRecordScheduleClass);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(340, 80, 71, 21));
        layoutWidget2 = new QWidget(CDlgRemoteRecordScheduleClass);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(30, 110, 421, 241));
        gridLayout_3 = new QGridLayout(layoutWidget2);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_6 = new QLabel(layoutWidget2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_4->addWidget(label_6);

        label_12 = new QLabel(layoutWidget2);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        verticalLayout_4->addWidget(label_12);

        label_18 = new QLabel(layoutWidget2);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        verticalLayout_4->addWidget(label_18);

        label_30 = new QLabel(layoutWidget2);
        label_30->setObjectName(QString::fromUtf8("label_30"));

        verticalLayout_4->addWidget(label_30);

        label_24 = new QLabel(layoutWidget2);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        verticalLayout_4->addWidget(label_24);

        label_42 = new QLabel(layoutWidget2);
        label_42->setObjectName(QString::fromUtf8("label_42"));

        verticalLayout_4->addWidget(label_42);

        label_36 = new QLabel(layoutWidget2);
        label_36->setObjectName(QString::fromUtf8("label_36"));

        verticalLayout_4->addWidget(label_36);

        label_48 = new QLabel(layoutWidget2);
        label_48->setObjectName(QString::fromUtf8("label_48"));

        verticalLayout_4->addWidget(label_48);


        gridLayout_3->addLayout(verticalLayout_4, 0, 0, 1, 1);

        vLayStartHour = new QVBoxLayout();
        vLayStartHour->setSpacing(6);
        vLayStartHour->setObjectName(QString::fromUtf8("vLayStartHour"));

        gridLayout_3->addLayout(vLayStartHour, 0, 1, 1, 1);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_7 = new QLabel(layoutWidget2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout_6->addWidget(label_7);

        label_13 = new QLabel(layoutWidget2);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        verticalLayout_6->addWidget(label_13);

        label_19 = new QLabel(layoutWidget2);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        verticalLayout_6->addWidget(label_19);

        label_31 = new QLabel(layoutWidget2);
        label_31->setObjectName(QString::fromUtf8("label_31"));

        verticalLayout_6->addWidget(label_31);

        label_25 = new QLabel(layoutWidget2);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        verticalLayout_6->addWidget(label_25);

        label_43 = new QLabel(layoutWidget2);
        label_43->setObjectName(QString::fromUtf8("label_43"));

        verticalLayout_6->addWidget(label_43);

        label_37 = new QLabel(layoutWidget2);
        label_37->setObjectName(QString::fromUtf8("label_37"));

        verticalLayout_6->addWidget(label_37);

        label_49 = new QLabel(layoutWidget2);
        label_49->setObjectName(QString::fromUtf8("label_49"));

        verticalLayout_6->addWidget(label_49);


        gridLayout_3->addLayout(verticalLayout_6, 0, 2, 1, 1);

        vLayStartMin = new QVBoxLayout();
        vLayStartMin->setSpacing(6);
        vLayStartMin->setObjectName(QString::fromUtf8("vLayStartMin"));

        gridLayout_3->addLayout(vLayStartMin, 0, 3, 1, 1);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_8 = new QLabel(layoutWidget2);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout_5->addWidget(label_8);

        label_14 = new QLabel(layoutWidget2);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        verticalLayout_5->addWidget(label_14);

        label_20 = new QLabel(layoutWidget2);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        verticalLayout_5->addWidget(label_20);

        label_32 = new QLabel(layoutWidget2);
        label_32->setObjectName(QString::fromUtf8("label_32"));

        verticalLayout_5->addWidget(label_32);

        label_26 = new QLabel(layoutWidget2);
        label_26->setObjectName(QString::fromUtf8("label_26"));

        verticalLayout_5->addWidget(label_26);

        label_44 = new QLabel(layoutWidget2);
        label_44->setObjectName(QString::fromUtf8("label_44"));

        verticalLayout_5->addWidget(label_44);

        label_38 = new QLabel(layoutWidget2);
        label_38->setObjectName(QString::fromUtf8("label_38"));

        verticalLayout_5->addWidget(label_38);

        label_50 = new QLabel(layoutWidget2);
        label_50->setObjectName(QString::fromUtf8("label_50"));

        verticalLayout_5->addWidget(label_50);


        gridLayout_3->addLayout(verticalLayout_5, 0, 4, 1, 1);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        label_11 = new QLabel(layoutWidget2);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        verticalLayout_7->addWidget(label_11);

        label_15 = new QLabel(layoutWidget2);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        verticalLayout_7->addWidget(label_15);

        label_21 = new QLabel(layoutWidget2);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        verticalLayout_7->addWidget(label_21);

        label_33 = new QLabel(layoutWidget2);
        label_33->setObjectName(QString::fromUtf8("label_33"));

        verticalLayout_7->addWidget(label_33);

        label_27 = new QLabel(layoutWidget2);
        label_27->setObjectName(QString::fromUtf8("label_27"));

        verticalLayout_7->addWidget(label_27);

        label_45 = new QLabel(layoutWidget2);
        label_45->setObjectName(QString::fromUtf8("label_45"));

        verticalLayout_7->addWidget(label_45);

        label_39 = new QLabel(layoutWidget2);
        label_39->setObjectName(QString::fromUtf8("label_39"));

        verticalLayout_7->addWidget(label_39);

        label_51 = new QLabel(layoutWidget2);
        label_51->setObjectName(QString::fromUtf8("label_51"));

        verticalLayout_7->addWidget(label_51);


        gridLayout_3->addLayout(verticalLayout_7, 0, 5, 1, 1);

        vLayEndHour = new QVBoxLayout();
        vLayEndHour->setSpacing(6);
        vLayEndHour->setObjectName(QString::fromUtf8("vLayEndHour"));

        gridLayout_3->addLayout(vLayEndHour, 0, 6, 1, 1);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        label_9 = new QLabel(layoutWidget2);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        verticalLayout_8->addWidget(label_9);

        label_16 = new QLabel(layoutWidget2);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        verticalLayout_8->addWidget(label_16);

        label_22 = new QLabel(layoutWidget2);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        verticalLayout_8->addWidget(label_22);

        label_34 = new QLabel(layoutWidget2);
        label_34->setObjectName(QString::fromUtf8("label_34"));

        verticalLayout_8->addWidget(label_34);

        label_28 = new QLabel(layoutWidget2);
        label_28->setObjectName(QString::fromUtf8("label_28"));

        verticalLayout_8->addWidget(label_28);

        label_46 = new QLabel(layoutWidget2);
        label_46->setObjectName(QString::fromUtf8("label_46"));

        verticalLayout_8->addWidget(label_46);

        label_40 = new QLabel(layoutWidget2);
        label_40->setObjectName(QString::fromUtf8("label_40"));

        verticalLayout_8->addWidget(label_40);

        label_52 = new QLabel(layoutWidget2);
        label_52->setObjectName(QString::fromUtf8("label_52"));

        verticalLayout_8->addWidget(label_52);


        gridLayout_3->addLayout(verticalLayout_8, 0, 7, 1, 1);

        vLayEndMin = new QVBoxLayout();
        vLayEndMin->setSpacing(6);
        vLayEndMin->setObjectName(QString::fromUtf8("vLayEndMin"));

        gridLayout_3->addLayout(vLayEndMin, 0, 8, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_10 = new QLabel(layoutWidget2);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        verticalLayout_3->addWidget(label_10);

        label_17 = new QLabel(layoutWidget2);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        verticalLayout_3->addWidget(label_17);

        label_23 = new QLabel(layoutWidget2);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        verticalLayout_3->addWidget(label_23);

        label_35 = new QLabel(layoutWidget2);
        label_35->setObjectName(QString::fromUtf8("label_35"));

        verticalLayout_3->addWidget(label_35);

        label_29 = new QLabel(layoutWidget2);
        label_29->setObjectName(QString::fromUtf8("label_29"));

        verticalLayout_3->addWidget(label_29);

        label_47 = new QLabel(layoutWidget2);
        label_47->setObjectName(QString::fromUtf8("label_47"));

        verticalLayout_3->addWidget(label_47);

        label_41 = new QLabel(layoutWidget2);
        label_41->setObjectName(QString::fromUtf8("label_41"));

        verticalLayout_3->addWidget(label_41);

        label_53 = new QLabel(layoutWidget2);
        label_53->setObjectName(QString::fromUtf8("label_53"));

        verticalLayout_3->addWidget(label_53);


        gridLayout_3->addLayout(verticalLayout_3, 0, 9, 1, 1);

        layoutWidget3 = new QWidget(CDlgRemoteRecordScheduleClass);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(460, 80, 141, 271));
        gridLayout_4 = new QGridLayout(layoutWidget3);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget3);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_4->addWidget(label_5, 0, 0, 1, 1);

        vLayRecordType = new QVBoxLayout();
        vLayRecordType->setSpacing(6);
        vLayRecordType->setObjectName(QString::fromUtf8("vLayRecordType"));

        gridLayout_4->addLayout(vLayRecordType, 1, 0, 1, 1);


        retranslateUi(CDlgRemoteRecordScheduleClass);

        QMetaObject::connectSlotsByName(CDlgRemoteRecordScheduleClass);
    } // setupUi

    void retranslateUi(QWidget *CDlgRemoteRecordScheduleClass)
    {
        CDlgRemoteRecordScheduleClass->setWindowTitle(QApplication::translate("CDlgRemoteRecordScheduleClass", "CDlgRemoteRecordSchedule", 0, QApplication::UnicodeUTF8));
        btnSave->setText(QApplication::translate("CDlgRemoteRecordScheduleClass", "confirm", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CDlgRemoteRecordScheduleClass", "date", 0, QApplication::UnicodeUTF8));
        checkRecordAllDay->setText(QApplication::translate("CDlgRemoteRecordScheduleClass", "all day record", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("CDlgRemoteRecordScheduleClass", "record type", 0, QApplication::UnicodeUTF8));
        label_54->setText(QApplication::translate("CDlgRemoteRecordScheduleClass", "copy to", 0, QApplication::UnicodeUTF8));
        btnCopyDay->setText(QApplication::translate("CDlgRemoteRecordScheduleClass", "copy", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("CDlgRemoteRecordScheduleClass", "start", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("CDlgRemoteRecordScheduleClass", "end", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("CDlgRemoteRecordScheduleClass", "period1", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("CDlgRemoteRecordScheduleClass", "period2", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("CDlgRemoteRecordScheduleClass", "period3", 0, QApplication::UnicodeUTF8));
        label_30->setText(QApplication::translate("CDlgRemoteRecordScheduleClass", "period4", 0, QApplication::UnicodeUTF8));
        label_24->setText(QApplication::translate("CDlgRemoteRecordScheduleClass", "period5", 0, QApplication::UnicodeUTF8));
        label_42->setText(QApplication::translate("CDlgRemoteRecordScheduleClass", "period6", 0, QApplication::UnicodeUTF8));
        label_36->setText(QApplication::translate("CDlgRemoteRecordScheduleClass", "period7", 0, QApplication::UnicodeUTF8));
        label_48->setText(QApplication::translate("CDlgRemoteRecordScheduleClass", "period8", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("CDlgRemoteRecordScheduleClass", "h", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("CDlgRemoteRecordScheduleClass", "h", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("CDlgRemoteRecordScheduleClass", "h", 0, QApplication::UnicodeUTF8));
        label_31->setText(QApplication::translate("CDlgRemoteRecordScheduleClass", "h", 0, QApplication::UnicodeUTF8));
        label_25->setText(QApplication::translate("CDlgRemoteRecordScheduleClass", "h", 0, QApplication::UnicodeUTF8));
        label_43->setText(QApplication::translate("CDlgRemoteRecordScheduleClass", "h", 0, QApplication::UnicodeUTF8));
        label_37->setText(QApplication::translate("CDlgRemoteRecordScheduleClass", "h", 0, QApplication::UnicodeUTF8));
        label_49->setText(QApplication::translate("CDlgRemoteRecordScheduleClass", "h", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("CDlgRemoteRecordScheduleClass", "min", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("CDlgRemoteRecordScheduleClass", "min", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("CDlgRemoteRecordScheduleClass", "min", 0, QApplication::UnicodeUTF8));
        label_32->setText(QApplication::translate("CDlgRemoteRecordScheduleClass", "min", 0, QApplication::UnicodeUTF8));
        label_26->setText(QApplication::translate("CDlgRemoteRecordScheduleClass", "min", 0, QApplication::UnicodeUTF8));
        label_44->setText(QApplication::translate("CDlgRemoteRecordScheduleClass", "min", 0, QApplication::UnicodeUTF8));
        label_38->setText(QApplication::translate("CDlgRemoteRecordScheduleClass", "min", 0, QApplication::UnicodeUTF8));
        label_50->setText(QApplication::translate("CDlgRemoteRecordScheduleClass", "min", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("CDlgRemoteRecordScheduleClass", "---", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("CDlgRemoteRecordScheduleClass", "---", 0, QApplication::UnicodeUTF8));
        label_21->setText(QApplication::translate("CDlgRemoteRecordScheduleClass", "---", 0, QApplication::UnicodeUTF8));
        label_33->setText(QApplication::translate("CDlgRemoteRecordScheduleClass", "---", 0, QApplication::UnicodeUTF8));
        label_27->setText(QApplication::translate("CDlgRemoteRecordScheduleClass", "---", 0, QApplication::UnicodeUTF8));
        label_45->setText(QApplication::translate("CDlgRemoteRecordScheduleClass", "---", 0, QApplication::UnicodeUTF8));
        label_39->setText(QApplication::translate("CDlgRemoteRecordScheduleClass", "---", 0, QApplication::UnicodeUTF8));
        label_51->setText(QApplication::translate("CDlgRemoteRecordScheduleClass", "---", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("CDlgRemoteRecordScheduleClass", "h", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("CDlgRemoteRecordScheduleClass", "h", 0, QApplication::UnicodeUTF8));
        label_22->setText(QApplication::translate("CDlgRemoteRecordScheduleClass", "h", 0, QApplication::UnicodeUTF8));
        label_34->setText(QApplication::translate("CDlgRemoteRecordScheduleClass", "h", 0, QApplication::UnicodeUTF8));
        label_28->setText(QApplication::translate("CDlgRemoteRecordScheduleClass", "h", 0, QApplication::UnicodeUTF8));
        label_46->setText(QApplication::translate("CDlgRemoteRecordScheduleClass", "h", 0, QApplication::UnicodeUTF8));
        label_40->setText(QApplication::translate("CDlgRemoteRecordScheduleClass", "h", 0, QApplication::UnicodeUTF8));
        label_52->setText(QApplication::translate("CDlgRemoteRecordScheduleClass", "h", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("CDlgRemoteRecordScheduleClass", "min", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("CDlgRemoteRecordScheduleClass", "min", 0, QApplication::UnicodeUTF8));
        label_23->setText(QApplication::translate("CDlgRemoteRecordScheduleClass", "min", 0, QApplication::UnicodeUTF8));
        label_35->setText(QApplication::translate("CDlgRemoteRecordScheduleClass", "min", 0, QApplication::UnicodeUTF8));
        label_29->setText(QApplication::translate("CDlgRemoteRecordScheduleClass", "min", 0, QApplication::UnicodeUTF8));
        label_47->setText(QApplication::translate("CDlgRemoteRecordScheduleClass", "min", 0, QApplication::UnicodeUTF8));
        label_41->setText(QApplication::translate("CDlgRemoteRecordScheduleClass", "min", 0, QApplication::UnicodeUTF8));
        label_53->setText(QApplication::translate("CDlgRemoteRecordScheduleClass", "min", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("CDlgRemoteRecordScheduleClass", "record mode", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CDlgRemoteRecordScheduleClass: public Ui_CDlgRemoteRecordScheduleClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CDLGREMOTERECORDSCHEDULE_H
