/********************************************************************************
** Form generated from reading UI file 'calarminhandletype.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALARMINHANDLETYPE_H
#define UI_CALARMINHANDLETYPE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CAlarmInHandleTypeClass
{
public:
    QWidget *layoutWidget_3;
    QGridLayout *gridLayout_4;
    QTableWidget *tableAlarmOut;
    QCheckBox *checkbo08;
    QPushButton *btnSave;
    QTableWidget *tableChannel;
    QWidget *layoutWidget_4;
    QGridLayout *gridLayout_5;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_8;
    QLabel *label_12;
    QLabel *label_18;
    QLabel *label_30;
    QLabel *label_24;
    QLabel *label_42;
    QLabel *label_36;
    QLabel *label_48;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_9;
    QLabel *label_13;
    QLabel *label_19;
    QLabel *label_31;
    QLabel *label_25;
    QLabel *label_43;
    QLabel *label_37;
    QLabel *label_49;
    QVBoxLayout *vLayStartMin;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_10;
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
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_22;
    QLabel *label_34;
    QLabel *label_28;
    QLabel *label_46;
    QLabel *label_40;
    QLabel *label_52;
    QVBoxLayout *vLayEndMin;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_23;
    QLabel *label_29;
    QLabel *label_35;
    QLabel *label_41;
    QLabel *label_47;
    QLabel *label_53;
    QLabel *label_54;
    QLabel *label_55;
    QVBoxLayout *vLayStartHour;
    QLabel *label_4;
    QLabel *label_7;
    QFrame *line_3;
    QWidget *layoutWidget_5;
    QGridLayout *gridLayout_6;
    QLabel *label_3;
    QComboBox *comboWeekDay;
    QWidget *layoutWidget_2;
    QGridLayout *gridLayout_3;
    QCheckBox *checkbo01;
    QCheckBox *checkbo02;
    QCheckBox *checkbo04;
    QCheckBox *checkbo10;
    QLabel *label_5;

    void setupUi(QDialog *CAlarmInHandleTypeClass)
    {
        if (CAlarmInHandleTypeClass->objectName().isEmpty())
            CAlarmInHandleTypeClass->setObjectName(QString::fromUtf8("CAlarmInHandleTypeClass"));
        CAlarmInHandleTypeClass->resize(614, 575);
        layoutWidget_3 = new QWidget(CAlarmInHandleTypeClass);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(410, 40, 191, 191));
        gridLayout_4 = new QGridLayout(layoutWidget_3);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        tableAlarmOut = new QTableWidget(layoutWidget_3);
        tableAlarmOut->setObjectName(QString::fromUtf8("tableAlarmOut"));

        gridLayout_4->addWidget(tableAlarmOut, 1, 0, 1, 1);

        checkbo08 = new QCheckBox(layoutWidget_3);
        checkbo08->setObjectName(QString::fromUtf8("checkbo08"));

        gridLayout_4->addWidget(checkbo08, 0, 0, 1, 1);

        btnSave = new QPushButton(CAlarmInHandleTypeClass);
        btnSave->setObjectName(QString::fromUtf8("btnSave"));
        btnSave->setGeometry(QRect(510, 532, 75, 23));
        tableChannel = new QTableWidget(CAlarmInHandleTypeClass);
        tableChannel->setObjectName(QString::fromUtf8("tableChannel"));
        tableChannel->setGeometry(QRect(10, 40, 231, 201));
        layoutWidget_4 = new QWidget(CAlarmInHandleTypeClass);
        layoutWidget_4->setObjectName(QString::fromUtf8("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(0, 322, 421, 241));
        gridLayout_5 = new QGridLayout(layoutWidget_4);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_8 = new QLabel(layoutWidget_4);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout_4->addWidget(label_8);

        label_12 = new QLabel(layoutWidget_4);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        verticalLayout_4->addWidget(label_12);

        label_18 = new QLabel(layoutWidget_4);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        verticalLayout_4->addWidget(label_18);

        label_30 = new QLabel(layoutWidget_4);
        label_30->setObjectName(QString::fromUtf8("label_30"));

        verticalLayout_4->addWidget(label_30);

        label_24 = new QLabel(layoutWidget_4);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        verticalLayout_4->addWidget(label_24);

        label_42 = new QLabel(layoutWidget_4);
        label_42->setObjectName(QString::fromUtf8("label_42"));

        verticalLayout_4->addWidget(label_42);

        label_36 = new QLabel(layoutWidget_4);
        label_36->setObjectName(QString::fromUtf8("label_36"));

        verticalLayout_4->addWidget(label_36);

        label_48 = new QLabel(layoutWidget_4);
        label_48->setObjectName(QString::fromUtf8("label_48"));

        verticalLayout_4->addWidget(label_48);


        gridLayout_5->addLayout(verticalLayout_4, 0, 0, 1, 1);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_9 = new QLabel(layoutWidget_4);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        verticalLayout_6->addWidget(label_9);

        label_13 = new QLabel(layoutWidget_4);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        verticalLayout_6->addWidget(label_13);

        label_19 = new QLabel(layoutWidget_4);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        verticalLayout_6->addWidget(label_19);

        label_31 = new QLabel(layoutWidget_4);
        label_31->setObjectName(QString::fromUtf8("label_31"));

        verticalLayout_6->addWidget(label_31);

        label_25 = new QLabel(layoutWidget_4);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        verticalLayout_6->addWidget(label_25);

        label_43 = new QLabel(layoutWidget_4);
        label_43->setObjectName(QString::fromUtf8("label_43"));

        verticalLayout_6->addWidget(label_43);

        label_37 = new QLabel(layoutWidget_4);
        label_37->setObjectName(QString::fromUtf8("label_37"));

        verticalLayout_6->addWidget(label_37);

        label_49 = new QLabel(layoutWidget_4);
        label_49->setObjectName(QString::fromUtf8("label_49"));

        verticalLayout_6->addWidget(label_49);


        gridLayout_5->addLayout(verticalLayout_6, 0, 2, 1, 1);

        vLayStartMin = new QVBoxLayout();
        vLayStartMin->setSpacing(6);
        vLayStartMin->setObjectName(QString::fromUtf8("vLayStartMin"));

        gridLayout_5->addLayout(vLayStartMin, 0, 3, 1, 1);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_10 = new QLabel(layoutWidget_4);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        verticalLayout_5->addWidget(label_10);

        label_14 = new QLabel(layoutWidget_4);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        verticalLayout_5->addWidget(label_14);

        label_20 = new QLabel(layoutWidget_4);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        verticalLayout_5->addWidget(label_20);

        label_32 = new QLabel(layoutWidget_4);
        label_32->setObjectName(QString::fromUtf8("label_32"));

        verticalLayout_5->addWidget(label_32);

        label_26 = new QLabel(layoutWidget_4);
        label_26->setObjectName(QString::fromUtf8("label_26"));

        verticalLayout_5->addWidget(label_26);

        label_44 = new QLabel(layoutWidget_4);
        label_44->setObjectName(QString::fromUtf8("label_44"));

        verticalLayout_5->addWidget(label_44);

        label_38 = new QLabel(layoutWidget_4);
        label_38->setObjectName(QString::fromUtf8("label_38"));

        verticalLayout_5->addWidget(label_38);

        label_50 = new QLabel(layoutWidget_4);
        label_50->setObjectName(QString::fromUtf8("label_50"));

        verticalLayout_5->addWidget(label_50);


        gridLayout_5->addLayout(verticalLayout_5, 0, 4, 1, 1);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        label_11 = new QLabel(layoutWidget_4);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        verticalLayout_7->addWidget(label_11);

        label_15 = new QLabel(layoutWidget_4);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        verticalLayout_7->addWidget(label_15);

        label_21 = new QLabel(layoutWidget_4);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        verticalLayout_7->addWidget(label_21);

        label_33 = new QLabel(layoutWidget_4);
        label_33->setObjectName(QString::fromUtf8("label_33"));

        verticalLayout_7->addWidget(label_33);

        label_27 = new QLabel(layoutWidget_4);
        label_27->setObjectName(QString::fromUtf8("label_27"));

        verticalLayout_7->addWidget(label_27);

        label_45 = new QLabel(layoutWidget_4);
        label_45->setObjectName(QString::fromUtf8("label_45"));

        verticalLayout_7->addWidget(label_45);

        label_39 = new QLabel(layoutWidget_4);
        label_39->setObjectName(QString::fromUtf8("label_39"));

        verticalLayout_7->addWidget(label_39);

        label_51 = new QLabel(layoutWidget_4);
        label_51->setObjectName(QString::fromUtf8("label_51"));

        verticalLayout_7->addWidget(label_51);


        gridLayout_5->addLayout(verticalLayout_7, 0, 5, 1, 1);

        vLayEndHour = new QVBoxLayout();
        vLayEndHour->setSpacing(6);
        vLayEndHour->setObjectName(QString::fromUtf8("vLayEndHour"));

        gridLayout_5->addLayout(vLayEndHour, 0, 6, 1, 1);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        label_16 = new QLabel(layoutWidget_4);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        verticalLayout_8->addWidget(label_16);

        label_17 = new QLabel(layoutWidget_4);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        verticalLayout_8->addWidget(label_17);

        label_22 = new QLabel(layoutWidget_4);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        verticalLayout_8->addWidget(label_22);

        label_34 = new QLabel(layoutWidget_4);
        label_34->setObjectName(QString::fromUtf8("label_34"));

        verticalLayout_8->addWidget(label_34);

        label_28 = new QLabel(layoutWidget_4);
        label_28->setObjectName(QString::fromUtf8("label_28"));

        verticalLayout_8->addWidget(label_28);

        label_46 = new QLabel(layoutWidget_4);
        label_46->setObjectName(QString::fromUtf8("label_46"));

        verticalLayout_8->addWidget(label_46);

        label_40 = new QLabel(layoutWidget_4);
        label_40->setObjectName(QString::fromUtf8("label_40"));

        verticalLayout_8->addWidget(label_40);

        label_52 = new QLabel(layoutWidget_4);
        label_52->setObjectName(QString::fromUtf8("label_52"));

        verticalLayout_8->addWidget(label_52);


        gridLayout_5->addLayout(verticalLayout_8, 0, 7, 1, 1);

        vLayEndMin = new QVBoxLayout();
        vLayEndMin->setSpacing(6);
        vLayEndMin->setObjectName(QString::fromUtf8("vLayEndMin"));

        gridLayout_5->addLayout(vLayEndMin, 0, 8, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_23 = new QLabel(layoutWidget_4);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        verticalLayout_3->addWidget(label_23);

        label_29 = new QLabel(layoutWidget_4);
        label_29->setObjectName(QString::fromUtf8("label_29"));

        verticalLayout_3->addWidget(label_29);

        label_35 = new QLabel(layoutWidget_4);
        label_35->setObjectName(QString::fromUtf8("label_35"));

        verticalLayout_3->addWidget(label_35);

        label_41 = new QLabel(layoutWidget_4);
        label_41->setObjectName(QString::fromUtf8("label_41"));

        verticalLayout_3->addWidget(label_41);

        label_47 = new QLabel(layoutWidget_4);
        label_47->setObjectName(QString::fromUtf8("label_47"));

        verticalLayout_3->addWidget(label_47);

        label_53 = new QLabel(layoutWidget_4);
        label_53->setObjectName(QString::fromUtf8("label_53"));

        verticalLayout_3->addWidget(label_53);

        label_54 = new QLabel(layoutWidget_4);
        label_54->setObjectName(QString::fromUtf8("label_54"));

        verticalLayout_3->addWidget(label_54);

        label_55 = new QLabel(layoutWidget_4);
        label_55->setObjectName(QString::fromUtf8("label_55"));

        verticalLayout_3->addWidget(label_55);


        gridLayout_5->addLayout(verticalLayout_3, 0, 9, 1, 1);

        vLayStartHour = new QVBoxLayout();
        vLayStartHour->setSpacing(6);
        vLayStartHour->setObjectName(QString::fromUtf8("vLayStartHour"));

        gridLayout_5->addLayout(vLayStartHour, 0, 1, 1, 1);

        label_4 = new QLabel(CAlarmInHandleTypeClass);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 10, 221, 21));
        label_7 = new QLabel(CAlarmInHandleTypeClass);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(0, 300, 131, 21));
        line_3 = new QFrame(CAlarmInHandleTypeClass);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(90, 300, 511, 20));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        layoutWidget_5 = new QWidget(CAlarmInHandleTypeClass);
        layoutWidget_5->setObjectName(QString::fromUtf8("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(430, 320, 161, 31));
        gridLayout_6 = new QGridLayout(layoutWidget_5);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget_5);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_6->addWidget(label_3, 0, 0, 1, 1);

        comboWeekDay = new QComboBox(layoutWidget_5);
        comboWeekDay->setObjectName(QString::fromUtf8("comboWeekDay"));

        gridLayout_6->addWidget(comboWeekDay, 0, 1, 1, 1);

        layoutWidget_2 = new QWidget(CAlarmInHandleTypeClass);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(260, 40, 131, 121));
        gridLayout_3 = new QGridLayout(layoutWidget_2);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        checkbo01 = new QCheckBox(layoutWidget_2);
        checkbo01->setObjectName(QString::fromUtf8("checkbo01"));

        gridLayout_3->addWidget(checkbo01, 0, 0, 1, 1);

        checkbo02 = new QCheckBox(layoutWidget_2);
        checkbo02->setObjectName(QString::fromUtf8("checkbo02"));

        gridLayout_3->addWidget(checkbo02, 1, 0, 1, 1);

        checkbo04 = new QCheckBox(layoutWidget_2);
        checkbo04->setObjectName(QString::fromUtf8("checkbo04"));

        gridLayout_3->addWidget(checkbo04, 2, 0, 1, 1);

        checkbo10 = new QCheckBox(layoutWidget_2);
        checkbo10->setObjectName(QString::fromUtf8("checkbo10"));

        gridLayout_3->addWidget(checkbo10, 3, 0, 1, 1);

        label_5 = new QLabel(CAlarmInHandleTypeClass);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(260, 10, 221, 21));

        retranslateUi(CAlarmInHandleTypeClass);

        QMetaObject::connectSlotsByName(CAlarmInHandleTypeClass);
    } // setupUi

    void retranslateUi(QDialog *CAlarmInHandleTypeClass)
    {
        CAlarmInHandleTypeClass->setWindowTitle(QApplication::translate("CAlarmInHandleTypeClass", "CAlarmInHandleType", 0, QApplication::UnicodeUTF8));
        checkbo08->setText(QApplication::translate("CAlarmInHandleTypeClass", "Trigger alarm output", 0, QApplication::UnicodeUTF8));
        btnSave->setText(QApplication::translate("CAlarmInHandleTypeClass", "Confirm", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("CAlarmInHandleTypeClass", "Period1", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("CAlarmInHandleTypeClass", "Period2", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("CAlarmInHandleTypeClass", "Period3", 0, QApplication::UnicodeUTF8));
        label_30->setText(QApplication::translate("CAlarmInHandleTypeClass", "Period4", 0, QApplication::UnicodeUTF8));
        label_24->setText(QApplication::translate("CAlarmInHandleTypeClass", "Period5", 0, QApplication::UnicodeUTF8));
        label_42->setText(QApplication::translate("CAlarmInHandleTypeClass", "Period6", 0, QApplication::UnicodeUTF8));
        label_36->setText(QApplication::translate("CAlarmInHandleTypeClass", "Period7", 0, QApplication::UnicodeUTF8));
        label_48->setText(QApplication::translate("CAlarmInHandleTypeClass", "Period8", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("CAlarmInHandleTypeClass", "h", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("CAlarmInHandleTypeClass", "h", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("CAlarmInHandleTypeClass", "h", 0, QApplication::UnicodeUTF8));
        label_31->setText(QApplication::translate("CAlarmInHandleTypeClass", "h", 0, QApplication::UnicodeUTF8));
        label_25->setText(QApplication::translate("CAlarmInHandleTypeClass", "h", 0, QApplication::UnicodeUTF8));
        label_43->setText(QApplication::translate("CAlarmInHandleTypeClass", "h", 0, QApplication::UnicodeUTF8));
        label_37->setText(QApplication::translate("CAlarmInHandleTypeClass", "h", 0, QApplication::UnicodeUTF8));
        label_49->setText(QApplication::translate("CAlarmInHandleTypeClass", "h", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("CAlarmInHandleTypeClass", "min", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("CAlarmInHandleTypeClass", "min", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("CAlarmInHandleTypeClass", "min", 0, QApplication::UnicodeUTF8));
        label_32->setText(QApplication::translate("CAlarmInHandleTypeClass", "min", 0, QApplication::UnicodeUTF8));
        label_26->setText(QApplication::translate("CAlarmInHandleTypeClass", "min", 0, QApplication::UnicodeUTF8));
        label_44->setText(QApplication::translate("CAlarmInHandleTypeClass", "min", 0, QApplication::UnicodeUTF8));
        label_38->setText(QApplication::translate("CAlarmInHandleTypeClass", "min", 0, QApplication::UnicodeUTF8));
        label_50->setText(QApplication::translate("CAlarmInHandleTypeClass", "min", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("CAlarmInHandleTypeClass", "---", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("CAlarmInHandleTypeClass", "---", 0, QApplication::UnicodeUTF8));
        label_21->setText(QApplication::translate("CAlarmInHandleTypeClass", "---", 0, QApplication::UnicodeUTF8));
        label_33->setText(QApplication::translate("CAlarmInHandleTypeClass", "---", 0, QApplication::UnicodeUTF8));
        label_27->setText(QApplication::translate("CAlarmInHandleTypeClass", "---", 0, QApplication::UnicodeUTF8));
        label_45->setText(QApplication::translate("CAlarmInHandleTypeClass", "---", 0, QApplication::UnicodeUTF8));
        label_39->setText(QApplication::translate("CAlarmInHandleTypeClass", "---", 0, QApplication::UnicodeUTF8));
        label_51->setText(QApplication::translate("CAlarmInHandleTypeClass", "---", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("CAlarmInHandleTypeClass", "h", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("CAlarmInHandleTypeClass", "h", 0, QApplication::UnicodeUTF8));
        label_22->setText(QApplication::translate("CAlarmInHandleTypeClass", "h", 0, QApplication::UnicodeUTF8));
        label_34->setText(QApplication::translate("CAlarmInHandleTypeClass", "h", 0, QApplication::UnicodeUTF8));
        label_28->setText(QApplication::translate("CAlarmInHandleTypeClass", "h", 0, QApplication::UnicodeUTF8));
        label_46->setText(QApplication::translate("CAlarmInHandleTypeClass", "h", 0, QApplication::UnicodeUTF8));
        label_40->setText(QApplication::translate("CAlarmInHandleTypeClass", "h", 0, QApplication::UnicodeUTF8));
        label_52->setText(QApplication::translate("CAlarmInHandleTypeClass", "h", 0, QApplication::UnicodeUTF8));
        label_23->setText(QApplication::translate("CAlarmInHandleTypeClass", "min", 0, QApplication::UnicodeUTF8));
        label_29->setText(QApplication::translate("CAlarmInHandleTypeClass", "min", 0, QApplication::UnicodeUTF8));
        label_35->setText(QApplication::translate("CAlarmInHandleTypeClass", "min", 0, QApplication::UnicodeUTF8));
        label_41->setText(QApplication::translate("CAlarmInHandleTypeClass", "min", 0, QApplication::UnicodeUTF8));
        label_47->setText(QApplication::translate("CAlarmInHandleTypeClass", "min", 0, QApplication::UnicodeUTF8));
        label_53->setText(QApplication::translate("CAlarmInHandleTypeClass", "min", 0, QApplication::UnicodeUTF8));
        label_54->setText(QApplication::translate("CAlarmInHandleTypeClass", "min", 0, QApplication::UnicodeUTF8));
        label_55->setText(QApplication::translate("CAlarmInHandleTypeClass", "min", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("CAlarmInHandleTypeClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\256\213\344\275\223'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#0000ff;\">Camera triggered to record</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("CAlarmInHandleTypeClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\256\213\344\275\223'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#0000ff;\">Guard time</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("CAlarmInHandleTypeClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\256\213\344\275\223'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Date</p></body></html>", 0, QApplication::UnicodeUTF8));
        checkbo01->setText(QApplication::translate("CAlarmInHandleTypeClass", "Shoe on monitor", 0, QApplication::UnicodeUTF8));
        checkbo02->setText(QApplication::translate("CAlarmInHandleTypeClass", "Audio alarm", 0, QApplication::UnicodeUTF8));
        checkbo04->setText(QApplication::translate("CAlarmInHandleTypeClass", "Reportd to center", 0, QApplication::UnicodeUTF8));
        checkbo10->setText(QApplication::translate("CAlarmInHandleTypeClass", "Email JPEG     ", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("CAlarmInHandleTypeClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\256\213\344\275\223'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#0000ff;\">Alarm handling mode</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CAlarmInHandleTypeClass: public Ui_CAlarmInHandleTypeClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALARMINHANDLETYPE_H
