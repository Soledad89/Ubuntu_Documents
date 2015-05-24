/********************************************************************************
** Form generated from reading UI file 'calarmparamsdlg.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALARMPARAMSDLG_H
#define UI_CALARMPARAMSDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSplitter>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CAlarmParamsDlg
{
public:
    QGroupBox *groupBox;
    QPushButton *pushButtonPTZ;
    QPushButton *pushButtonAlarmInSave;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLineEdit *lineEditAlarmInName;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_10;
    QCheckBox *checkBoxAlarmInHandle;
    QPushButton *pushButtonAlarmInHandle;
    QWidget *layoutWidget2;
    QGridLayout *gridLayout_11;
    QLabel *label_5;
    QComboBox *comboBoxAlarmInType;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label;
    QComboBox *comboBoxAlarmIn;
    QWidget *layoutWidget4;
    QGridLayout *gridLayout_9;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEditAlarmInIP;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLineEdit *lineEditAlarmInChan;
    QGroupBox *groupBox_2;
    QGroupBox *groupBox_3;
    QLabel *label_48;
    QLineEdit *lineEdit_19;
    QWidget *layoutWidget5;
    QGridLayout *gridLayout_2;
    QLabel *label_23;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QLineEdit *lineEditHour4;
    QLabel *label_22;
    QLineEdit *lineEditMinute4;
    QLabel *label_18;
    QLineEdit *lineEditHour3;
    QLineEdit *lineEditMinute3;
    QWidget *layoutWidget6;
    QGridLayout *gridLayout_7;
    QLabel *label_60;
    QLineEdit *lineEditHour15;
    QLabel *label_55;
    QLineEdit *lineEditMinute15;
    QLabel *label_57;
    QLabel *label_59;
    QLineEdit *lineEditHour16;
    QLabel *label_56;
    QLineEdit *lineEditMinute16;
    QLabel *label_58;
    QWidget *layoutWidget7;
    QGridLayout *gridLayout_5;
    QLabel *label_28;
    QLineEdit *lineEditHour11;
    QLabel *label_44;
    QLineEdit *lineEditMinute11;
    QLabel *label_46;
    QLabel *label_49;
    QLineEdit *lineEditHour12;
    QLabel *label_45;
    QLineEdit *lineEditMinute12;
    QLabel *label_47;
    QWidget *layoutWidget8;
    QGridLayout *gridLayout_8;
    QLabel *label_24;
    QLineEdit *lineEditHour5;
    QLabel *label_40;
    QLineEdit *lineEditMinute5;
    QLabel *label_42;
    QLabel *label_39;
    QLineEdit *lineEditHour6;
    QLabel *label_41;
    QLineEdit *lineEditMinute6;
    QLabel *label_43;
    QWidget *layoutWidget9;
    QGridLayout *gridLayout;
    QLabel *label_12;
    QLineEdit *lineEditHour1;
    QLabel *label_35;
    QLineEdit *lineEditMinute1;
    QLabel *label_37;
    QLabel *label_34;
    QLineEdit *lineEditHour2;
    QLineEdit *lineEditMinute2;
    QLabel *label_38;
    QLabel *label_36;
    QWidget *layoutWidget10;
    QGridLayout *gridLayout_3;
    QLabel *label_27;
    QLineEdit *lineEditHour7;
    QLabel *label_30;
    QLineEdit *lineEditMinute7;
    QLabel *label_31;
    QLineEdit *lineEditHour8;
    QLabel *label_33;
    QLineEdit *lineEditMinute8;
    QLabel *label_29;
    QLabel *label_32;
    QWidget *layoutWidget11;
    QGridLayout *gridLayout_4;
    QLabel *label_25;
    QLineEdit *lineEditHour9;
    QLabel *label_51;
    QLineEdit *lineEditMinute9;
    QLabel *label_53;
    QLabel *label_50;
    QLineEdit *lineEditHour10;
    QLabel *label_52;
    QLineEdit *lineEditMinute10;
    QLabel *label_54;
    QWidget *layoutWidget12;
    QGridLayout *gridLayout_6;
    QLabel *label_26;
    QLabel *label_63;
    QLineEdit *lineEditMinute13;
    QLabel *label_65;
    QLabel *label_62;
    QLineEdit *lineEditHour14;
    QLabel *label_64;
    QLineEdit *lineEditMinute14;
    QLabel *label_66;
    QLineEdit *lineEditHour13;
    QPushButton *pushButtonConfirmDate;
    QWidget *layoutWidget13;
    QGridLayout *gridLayout_12;
    QLabel *label_11;
    QComboBox *comboBoxAlarmDate;
    QSplitter *splitter;
    QComboBox *comboBoxAlarmDate_2;
    QPushButton *pushButtonCopyDate;
    QPushButton *pushButtonAlarmOutSave;
    QWidget *layoutWidget14;
    QGridLayout *gridLayout_13;
    QLabel *label_6;
    QComboBox *comboBoxAlarmOut;
    QLabel *label_7;
    QLineEdit *lineEditAlarmOutIp;
    QLabel *label_8;
    QLineEdit *lineEditAlarmOutChan;
    QLabel *label_10;
    QLineEdit *lineEditAlarmOutName;
    QLabel *label_9;
    QComboBox *comboBoxAlarmOutDelay;
    QPushButton *pushButtonInvokeAlarmOut;
    QLineEdit *lineEditAlarmOutState;
    QFrame *line;

    void setupUi(QDialog *CAlarmParamsDlg)
    {
        if (CAlarmParamsDlg->objectName().isEmpty())
            CAlarmParamsDlg->setObjectName(QString::fromUtf8("CAlarmParamsDlg"));
        CAlarmParamsDlg->resize(674, 550);
        groupBox = new QGroupBox(CAlarmParamsDlg);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 10, 621, 141));
        pushButtonPTZ = new QPushButton(groupBox);
        pushButtonPTZ->setObjectName(QString::fromUtf8("pushButtonPTZ"));
        pushButtonPTZ->setGeometry(QRect(240, 110, 101, 25));
        pushButtonAlarmInSave = new QPushButton(groupBox);
        pushButtonAlarmInSave->setObjectName(QString::fromUtf8("pushButtonAlarmInSave"));
        pushButtonAlarmInSave->setGeometry(QRect(520, 110, 75, 23));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 70, 191, 23));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_3->addWidget(label_4);

        lineEditAlarmInName = new QLineEdit(layoutWidget);
        lineEditAlarmInName->setObjectName(QString::fromUtf8("lineEditAlarmInName"));

        horizontalLayout_3->addWidget(lineEditAlarmInName);

        layoutWidget1 = new QWidget(groupBox);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 110, 190, 27));
        gridLayout_10 = new QGridLayout(layoutWidget1);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        gridLayout_10->setContentsMargins(0, 0, 0, 0);
        checkBoxAlarmInHandle = new QCheckBox(layoutWidget1);
        checkBoxAlarmInHandle->setObjectName(QString::fromUtf8("checkBoxAlarmInHandle"));

        gridLayout_10->addWidget(checkBoxAlarmInHandle, 0, 0, 1, 1);

        pushButtonAlarmInHandle = new QPushButton(layoutWidget1);
        pushButtonAlarmInHandle->setObjectName(QString::fromUtf8("pushButtonAlarmInHandle"));

        gridLayout_10->addWidget(pushButtonAlarmInHandle, 0, 1, 1, 1);

        layoutWidget2 = new QWidget(groupBox);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(270, 70, 181, 23));
        gridLayout_11 = new QGridLayout(layoutWidget2);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        gridLayout_11->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_11->addWidget(label_5, 0, 0, 1, 1);

        comboBoxAlarmInType = new QComboBox(layoutWidget2);
        comboBoxAlarmInType->setObjectName(QString::fromUtf8("comboBoxAlarmInType"));

        gridLayout_11->addWidget(comboBoxAlarmInType, 0, 1, 1, 1);

        layoutWidget3 = new QWidget(groupBox);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(-20, 31, 211, 23));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget3);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_7->addWidget(label);

        comboBoxAlarmIn = new QComboBox(layoutWidget3);
        comboBoxAlarmIn->setObjectName(QString::fromUtf8("comboBoxAlarmIn"));

        horizontalLayout_7->addWidget(comboBoxAlarmIn);

        layoutWidget4 = new QWidget(groupBox);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(230, 30, 381, 25));
        gridLayout_9 = new QGridLayout(layoutWidget4);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        gridLayout_9->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget4);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEditAlarmInIP = new QLineEdit(layoutWidget4);
        lineEditAlarmInIP->setObjectName(QString::fromUtf8("lineEditAlarmInIP"));

        horizontalLayout_2->addWidget(lineEditAlarmInIP);


        gridLayout_9->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_3 = new QLabel(layoutWidget4);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(60, 0));

        horizontalLayout->addWidget(label_3);

        lineEditAlarmInChan = new QLineEdit(layoutWidget4);
        lineEditAlarmInChan->setObjectName(QString::fromUtf8("lineEditAlarmInChan"));

        horizontalLayout->addWidget(lineEditAlarmInChan);


        gridLayout_9->addLayout(horizontalLayout, 0, 1, 1, 1);

        layoutWidget->raise();
        layoutWidget->raise();
        layoutWidget->raise();
        layoutWidget->raise();
        pushButtonPTZ->raise();
        pushButtonAlarmInSave->raise();
        layoutWidget->raise();
        groupBox_2 = new QGroupBox(CAlarmParamsDlg);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 160, 651, 371));
        groupBox_3 = new QGroupBox(groupBox_2);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(240, 30, 401, 291));
        label_48 = new QLabel(groupBox_3);
        label_48->setObjectName(QString::fromUtf8("label_48"));
        label_48->setGeometry(QRect(640, 120, 16, 16));
        lineEdit_19 = new QLineEdit(groupBox_3);
        lineEdit_19->setObjectName(QString::fromUtf8("lineEdit_19"));
        lineEdit_19->setGeometry(QRect(791, 80, 20, 20));
        layoutWidget5 = new QWidget(groupBox_3);
        layoutWidget5->setObjectName(QString::fromUtf8("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(0, 80, 391, 23));
        gridLayout_2 = new QGridLayout(layoutWidget5);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_23 = new QLabel(layoutWidget5);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        gridLayout_2->addWidget(label_23, 0, 0, 1, 1);

        label_19 = new QLabel(layoutWidget5);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        gridLayout_2->addWidget(label_19, 0, 2, 1, 1);

        label_20 = new QLabel(layoutWidget5);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        gridLayout_2->addWidget(label_20, 0, 4, 1, 1);

        label_21 = new QLabel(layoutWidget5);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        gridLayout_2->addWidget(label_21, 0, 5, 1, 1);

        lineEditHour4 = new QLineEdit(layoutWidget5);
        lineEditHour4->setObjectName(QString::fromUtf8("lineEditHour4"));

        gridLayout_2->addWidget(lineEditHour4, 0, 6, 1, 1);

        label_22 = new QLabel(layoutWidget5);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        gridLayout_2->addWidget(label_22, 0, 7, 1, 1);

        lineEditMinute4 = new QLineEdit(layoutWidget5);
        lineEditMinute4->setObjectName(QString::fromUtf8("lineEditMinute4"));

        gridLayout_2->addWidget(lineEditMinute4, 0, 8, 1, 1);

        label_18 = new QLabel(layoutWidget5);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        gridLayout_2->addWidget(label_18, 0, 9, 1, 1);

        lineEditHour3 = new QLineEdit(layoutWidget5);
        lineEditHour3->setObjectName(QString::fromUtf8("lineEditHour3"));

        gridLayout_2->addWidget(lineEditHour3, 0, 1, 1, 1);

        lineEditMinute3 = new QLineEdit(layoutWidget5);
        lineEditMinute3->setObjectName(QString::fromUtf8("lineEditMinute3"));

        gridLayout_2->addWidget(lineEditMinute3, 0, 3, 1, 1);

        layoutWidget6 = new QWidget(groupBox_3);
        layoutWidget6->setObjectName(QString::fromUtf8("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(0, 260, 391, 23));
        gridLayout_7 = new QGridLayout(layoutWidget6);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        label_60 = new QLabel(layoutWidget6);
        label_60->setObjectName(QString::fromUtf8("label_60"));

        gridLayout_7->addWidget(label_60, 0, 0, 1, 1);

        lineEditHour15 = new QLineEdit(layoutWidget6);
        lineEditHour15->setObjectName(QString::fromUtf8("lineEditHour15"));

        gridLayout_7->addWidget(lineEditHour15, 0, 1, 1, 1);

        label_55 = new QLabel(layoutWidget6);
        label_55->setObjectName(QString::fromUtf8("label_55"));

        gridLayout_7->addWidget(label_55, 0, 2, 1, 1);

        lineEditMinute15 = new QLineEdit(layoutWidget6);
        lineEditMinute15->setObjectName(QString::fromUtf8("lineEditMinute15"));

        gridLayout_7->addWidget(lineEditMinute15, 0, 3, 1, 1);

        label_57 = new QLabel(layoutWidget6);
        label_57->setObjectName(QString::fromUtf8("label_57"));

        gridLayout_7->addWidget(label_57, 0, 4, 1, 1);

        label_59 = new QLabel(layoutWidget6);
        label_59->setObjectName(QString::fromUtf8("label_59"));

        gridLayout_7->addWidget(label_59, 0, 5, 1, 1);

        lineEditHour16 = new QLineEdit(layoutWidget6);
        lineEditHour16->setObjectName(QString::fromUtf8("lineEditHour16"));

        gridLayout_7->addWidget(lineEditHour16, 0, 6, 1, 1);

        label_56 = new QLabel(layoutWidget6);
        label_56->setObjectName(QString::fromUtf8("label_56"));

        gridLayout_7->addWidget(label_56, 0, 7, 1, 1);

        lineEditMinute16 = new QLineEdit(layoutWidget6);
        lineEditMinute16->setObjectName(QString::fromUtf8("lineEditMinute16"));

        gridLayout_7->addWidget(lineEditMinute16, 0, 8, 1, 1);

        label_58 = new QLabel(layoutWidget6);
        label_58->setObjectName(QString::fromUtf8("label_58"));

        gridLayout_7->addWidget(label_58, 0, 9, 1, 1);

        layoutWidget7 = new QWidget(groupBox_3);
        layoutWidget7->setObjectName(QString::fromUtf8("layoutWidget7"));
        layoutWidget7->setGeometry(QRect(0, 200, 391, 23));
        gridLayout_5 = new QGridLayout(layoutWidget7);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        label_28 = new QLabel(layoutWidget7);
        label_28->setObjectName(QString::fromUtf8("label_28"));

        gridLayout_5->addWidget(label_28, 0, 0, 1, 1);

        lineEditHour11 = new QLineEdit(layoutWidget7);
        lineEditHour11->setObjectName(QString::fromUtf8("lineEditHour11"));

        gridLayout_5->addWidget(lineEditHour11, 0, 1, 1, 1);

        label_44 = new QLabel(layoutWidget7);
        label_44->setObjectName(QString::fromUtf8("label_44"));

        gridLayout_5->addWidget(label_44, 0, 2, 1, 1);

        lineEditMinute11 = new QLineEdit(layoutWidget7);
        lineEditMinute11->setObjectName(QString::fromUtf8("lineEditMinute11"));

        gridLayout_5->addWidget(lineEditMinute11, 0, 3, 1, 1);

        label_46 = new QLabel(layoutWidget7);
        label_46->setObjectName(QString::fromUtf8("label_46"));

        gridLayout_5->addWidget(label_46, 0, 4, 1, 1);

        label_49 = new QLabel(layoutWidget7);
        label_49->setObjectName(QString::fromUtf8("label_49"));

        gridLayout_5->addWidget(label_49, 0, 5, 1, 1);

        lineEditHour12 = new QLineEdit(layoutWidget7);
        lineEditHour12->setObjectName(QString::fromUtf8("lineEditHour12"));

        gridLayout_5->addWidget(lineEditHour12, 0, 6, 1, 1);

        label_45 = new QLabel(layoutWidget7);
        label_45->setObjectName(QString::fromUtf8("label_45"));

        gridLayout_5->addWidget(label_45, 0, 7, 1, 1);

        lineEditMinute12 = new QLineEdit(layoutWidget7);
        lineEditMinute12->setObjectName(QString::fromUtf8("lineEditMinute12"));

        gridLayout_5->addWidget(lineEditMinute12, 0, 8, 1, 1);

        label_47 = new QLabel(layoutWidget7);
        label_47->setObjectName(QString::fromUtf8("label_47"));

        gridLayout_5->addWidget(label_47, 0, 9, 1, 1);

        layoutWidget8 = new QWidget(groupBox_3);
        layoutWidget8->setObjectName(QString::fromUtf8("layoutWidget8"));
        layoutWidget8->setGeometry(QRect(0, 110, 391, 23));
        gridLayout_8 = new QGridLayout(layoutWidget8);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_8->setContentsMargins(0, 0, 0, 0);
        label_24 = new QLabel(layoutWidget8);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        gridLayout_8->addWidget(label_24, 0, 0, 1, 1);

        lineEditHour5 = new QLineEdit(layoutWidget8);
        lineEditHour5->setObjectName(QString::fromUtf8("lineEditHour5"));

        gridLayout_8->addWidget(lineEditHour5, 0, 1, 1, 1);

        label_40 = new QLabel(layoutWidget8);
        label_40->setObjectName(QString::fromUtf8("label_40"));

        gridLayout_8->addWidget(label_40, 0, 2, 1, 1);

        lineEditMinute5 = new QLineEdit(layoutWidget8);
        lineEditMinute5->setObjectName(QString::fromUtf8("lineEditMinute5"));

        gridLayout_8->addWidget(lineEditMinute5, 0, 3, 1, 1);

        label_42 = new QLabel(layoutWidget8);
        label_42->setObjectName(QString::fromUtf8("label_42"));

        gridLayout_8->addWidget(label_42, 0, 4, 1, 1);

        label_39 = new QLabel(layoutWidget8);
        label_39->setObjectName(QString::fromUtf8("label_39"));

        gridLayout_8->addWidget(label_39, 0, 5, 1, 1);

        lineEditHour6 = new QLineEdit(layoutWidget8);
        lineEditHour6->setObjectName(QString::fromUtf8("lineEditHour6"));

        gridLayout_8->addWidget(lineEditHour6, 0, 6, 1, 1);

        label_41 = new QLabel(layoutWidget8);
        label_41->setObjectName(QString::fromUtf8("label_41"));

        gridLayout_8->addWidget(label_41, 0, 7, 1, 1);

        lineEditMinute6 = new QLineEdit(layoutWidget8);
        lineEditMinute6->setObjectName(QString::fromUtf8("lineEditMinute6"));

        gridLayout_8->addWidget(lineEditMinute6, 0, 8, 1, 1);

        label_43 = new QLabel(layoutWidget8);
        label_43->setObjectName(QString::fromUtf8("label_43"));

        gridLayout_8->addWidget(label_43, 0, 9, 1, 1);

        layoutWidget9 = new QWidget(groupBox_3);
        layoutWidget9->setObjectName(QString::fromUtf8("layoutWidget9"));
        layoutWidget9->setGeometry(QRect(0, 50, 391, 23));
        gridLayout = new QGridLayout(layoutWidget9);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(layoutWidget9);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout->addWidget(label_12, 0, 0, 1, 1);

        lineEditHour1 = new QLineEdit(layoutWidget9);
        lineEditHour1->setObjectName(QString::fromUtf8("lineEditHour1"));

        gridLayout->addWidget(lineEditHour1, 0, 1, 1, 1);

        label_35 = new QLabel(layoutWidget9);
        label_35->setObjectName(QString::fromUtf8("label_35"));

        gridLayout->addWidget(label_35, 0, 2, 1, 1);

        lineEditMinute1 = new QLineEdit(layoutWidget9);
        lineEditMinute1->setObjectName(QString::fromUtf8("lineEditMinute1"));

        gridLayout->addWidget(lineEditMinute1, 0, 3, 1, 1);

        label_37 = new QLabel(layoutWidget9);
        label_37->setObjectName(QString::fromUtf8("label_37"));

        gridLayout->addWidget(label_37, 0, 4, 1, 1);

        label_34 = new QLabel(layoutWidget9);
        label_34->setObjectName(QString::fromUtf8("label_34"));

        gridLayout->addWidget(label_34, 0, 5, 1, 1);

        lineEditHour2 = new QLineEdit(layoutWidget9);
        lineEditHour2->setObjectName(QString::fromUtf8("lineEditHour2"));

        gridLayout->addWidget(lineEditHour2, 0, 6, 1, 1);

        lineEditMinute2 = new QLineEdit(layoutWidget9);
        lineEditMinute2->setObjectName(QString::fromUtf8("lineEditMinute2"));

        gridLayout->addWidget(lineEditMinute2, 0, 8, 1, 1);

        label_38 = new QLabel(layoutWidget9);
        label_38->setObjectName(QString::fromUtf8("label_38"));

        gridLayout->addWidget(label_38, 0, 9, 1, 1);

        label_36 = new QLabel(layoutWidget9);
        label_36->setObjectName(QString::fromUtf8("label_36"));

        gridLayout->addWidget(label_36, 0, 7, 1, 1);

        layoutWidget10 = new QWidget(groupBox_3);
        layoutWidget10->setObjectName(QString::fromUtf8("layoutWidget10"));
        layoutWidget10->setGeometry(QRect(0, 140, 391, 23));
        gridLayout_3 = new QGridLayout(layoutWidget10);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_27 = new QLabel(layoutWidget10);
        label_27->setObjectName(QString::fromUtf8("label_27"));

        gridLayout_3->addWidget(label_27, 0, 0, 1, 1);

        lineEditHour7 = new QLineEdit(layoutWidget10);
        lineEditHour7->setObjectName(QString::fromUtf8("lineEditHour7"));

        gridLayout_3->addWidget(lineEditHour7, 0, 1, 1, 1);

        label_30 = new QLabel(layoutWidget10);
        label_30->setObjectName(QString::fromUtf8("label_30"));

        gridLayout_3->addWidget(label_30, 0, 2, 1, 1);

        lineEditMinute7 = new QLineEdit(layoutWidget10);
        lineEditMinute7->setObjectName(QString::fromUtf8("lineEditMinute7"));

        gridLayout_3->addWidget(lineEditMinute7, 0, 3, 1, 1);

        label_31 = new QLabel(layoutWidget10);
        label_31->setObjectName(QString::fromUtf8("label_31"));

        gridLayout_3->addWidget(label_31, 0, 4, 1, 1);

        lineEditHour8 = new QLineEdit(layoutWidget10);
        lineEditHour8->setObjectName(QString::fromUtf8("lineEditHour8"));

        gridLayout_3->addWidget(lineEditHour8, 0, 6, 1, 1);

        label_33 = new QLabel(layoutWidget10);
        label_33->setObjectName(QString::fromUtf8("label_33"));

        gridLayout_3->addWidget(label_33, 0, 7, 1, 1);

        lineEditMinute8 = new QLineEdit(layoutWidget10);
        lineEditMinute8->setObjectName(QString::fromUtf8("lineEditMinute8"));

        gridLayout_3->addWidget(lineEditMinute8, 0, 8, 1, 1);

        label_29 = new QLabel(layoutWidget10);
        label_29->setObjectName(QString::fromUtf8("label_29"));

        gridLayout_3->addWidget(label_29, 0, 9, 1, 1);

        label_32 = new QLabel(layoutWidget10);
        label_32->setObjectName(QString::fromUtf8("label_32"));

        gridLayout_3->addWidget(label_32, 0, 5, 1, 1);

        layoutWidget11 = new QWidget(groupBox_3);
        layoutWidget11->setObjectName(QString::fromUtf8("layoutWidget11"));
        layoutWidget11->setGeometry(QRect(0, 170, 391, 23));
        gridLayout_4 = new QGridLayout(layoutWidget11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        label_25 = new QLabel(layoutWidget11);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        gridLayout_4->addWidget(label_25, 0, 0, 1, 1);

        lineEditHour9 = new QLineEdit(layoutWidget11);
        lineEditHour9->setObjectName(QString::fromUtf8("lineEditHour9"));

        gridLayout_4->addWidget(lineEditHour9, 0, 1, 1, 1);

        label_51 = new QLabel(layoutWidget11);
        label_51->setObjectName(QString::fromUtf8("label_51"));

        gridLayout_4->addWidget(label_51, 0, 2, 1, 1);

        lineEditMinute9 = new QLineEdit(layoutWidget11);
        lineEditMinute9->setObjectName(QString::fromUtf8("lineEditMinute9"));

        gridLayout_4->addWidget(lineEditMinute9, 0, 3, 1, 1);

        label_53 = new QLabel(layoutWidget11);
        label_53->setObjectName(QString::fromUtf8("label_53"));

        gridLayout_4->addWidget(label_53, 0, 4, 1, 1);

        label_50 = new QLabel(layoutWidget11);
        label_50->setObjectName(QString::fromUtf8("label_50"));

        gridLayout_4->addWidget(label_50, 0, 5, 1, 1);

        lineEditHour10 = new QLineEdit(layoutWidget11);
        lineEditHour10->setObjectName(QString::fromUtf8("lineEditHour10"));

        gridLayout_4->addWidget(lineEditHour10, 0, 6, 1, 1);

        label_52 = new QLabel(layoutWidget11);
        label_52->setObjectName(QString::fromUtf8("label_52"));

        gridLayout_4->addWidget(label_52, 0, 7, 1, 1);

        lineEditMinute10 = new QLineEdit(layoutWidget11);
        lineEditMinute10->setObjectName(QString::fromUtf8("lineEditMinute10"));

        gridLayout_4->addWidget(lineEditMinute10, 0, 8, 1, 1);

        label_54 = new QLabel(layoutWidget11);
        label_54->setObjectName(QString::fromUtf8("label_54"));

        gridLayout_4->addWidget(label_54, 0, 9, 1, 1);

        layoutWidget12 = new QWidget(groupBox_3);
        layoutWidget12->setObjectName(QString::fromUtf8("layoutWidget12"));
        layoutWidget12->setGeometry(QRect(0, 230, 391, 23));
        gridLayout_6 = new QGridLayout(layoutWidget12);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        label_26 = new QLabel(layoutWidget12);
        label_26->setObjectName(QString::fromUtf8("label_26"));

        gridLayout_6->addWidget(label_26, 0, 0, 1, 1);

        label_63 = new QLabel(layoutWidget12);
        label_63->setObjectName(QString::fromUtf8("label_63"));

        gridLayout_6->addWidget(label_63, 0, 2, 1, 1);

        lineEditMinute13 = new QLineEdit(layoutWidget12);
        lineEditMinute13->setObjectName(QString::fromUtf8("lineEditMinute13"));

        gridLayout_6->addWidget(lineEditMinute13, 0, 3, 1, 1);

        label_65 = new QLabel(layoutWidget12);
        label_65->setObjectName(QString::fromUtf8("label_65"));

        gridLayout_6->addWidget(label_65, 0, 4, 1, 1);

        label_62 = new QLabel(layoutWidget12);
        label_62->setObjectName(QString::fromUtf8("label_62"));

        gridLayout_6->addWidget(label_62, 0, 5, 1, 1);

        lineEditHour14 = new QLineEdit(layoutWidget12);
        lineEditHour14->setObjectName(QString::fromUtf8("lineEditHour14"));

        gridLayout_6->addWidget(lineEditHour14, 0, 6, 1, 1);

        label_64 = new QLabel(layoutWidget12);
        label_64->setObjectName(QString::fromUtf8("label_64"));

        gridLayout_6->addWidget(label_64, 0, 7, 1, 1);

        lineEditMinute14 = new QLineEdit(layoutWidget12);
        lineEditMinute14->setObjectName(QString::fromUtf8("lineEditMinute14"));

        gridLayout_6->addWidget(lineEditMinute14, 0, 8, 1, 1);

        label_66 = new QLabel(layoutWidget12);
        label_66->setObjectName(QString::fromUtf8("label_66"));

        gridLayout_6->addWidget(label_66, 0, 9, 1, 1);

        lineEditHour13 = new QLineEdit(layoutWidget12);
        lineEditHour13->setObjectName(QString::fromUtf8("lineEditHour13"));

        gridLayout_6->addWidget(lineEditHour13, 0, 1, 1, 1);

        pushButtonConfirmDate = new QPushButton(groupBox_3);
        pushButtonConfirmDate->setObjectName(QString::fromUtf8("pushButtonConfirmDate"));
        pushButtonConfirmDate->setGeometry(QRect(250, 290, 121, 23));
        layoutWidget13 = new QWidget(groupBox_3);
        layoutWidget13->setObjectName(QString::fromUtf8("layoutWidget13"));
        layoutWidget13->setGeometry(QRect(0, 20, 121, 23));
        gridLayout_12 = new QGridLayout(layoutWidget13);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        gridLayout_12->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(layoutWidget13);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_12->addWidget(label_11, 0, 0, 1, 1);

        comboBoxAlarmDate = new QComboBox(layoutWidget13);
        comboBoxAlarmDate->setObjectName(QString::fromUtf8("comboBoxAlarmDate"));

        gridLayout_12->addWidget(comboBoxAlarmDate, 0, 1, 1, 1);

        splitter = new QSplitter(groupBox_3);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(10, 290, 181, 25));
        splitter->setOrientation(Qt::Horizontal);
        comboBoxAlarmDate_2 = new QComboBox(splitter);
        comboBoxAlarmDate_2->setObjectName(QString::fromUtf8("comboBoxAlarmDate_2"));
        splitter->addWidget(comboBoxAlarmDate_2);
        pushButtonCopyDate = new QPushButton(splitter);
        pushButtonCopyDate->setObjectName(QString::fromUtf8("pushButtonCopyDate"));
        splitter->addWidget(pushButtonCopyDate);
        pushButtonAlarmOutSave = new QPushButton(groupBox_2);
        pushButtonAlarmOutSave->setObjectName(QString::fromUtf8("pushButtonAlarmOutSave"));
        pushButtonAlarmOutSave->setGeometry(QRect(550, 330, 75, 23));
        layoutWidget14 = new QWidget(groupBox_2);
        layoutWidget14->setObjectName(QString::fromUtf8("layoutWidget14"));
        layoutWidget14->setGeometry(QRect(10, 20, 221, 301));
        gridLayout_13 = new QGridLayout(layoutWidget14);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        gridLayout_13->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget14);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_13->addWidget(label_6, 0, 0, 1, 1);

        comboBoxAlarmOut = new QComboBox(layoutWidget14);
        comboBoxAlarmOut->setObjectName(QString::fromUtf8("comboBoxAlarmOut"));

        gridLayout_13->addWidget(comboBoxAlarmOut, 0, 1, 1, 1);

        label_7 = new QLabel(layoutWidget14);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_13->addWidget(label_7, 1, 0, 1, 1);

        lineEditAlarmOutIp = new QLineEdit(layoutWidget14);
        lineEditAlarmOutIp->setObjectName(QString::fromUtf8("lineEditAlarmOutIp"));

        gridLayout_13->addWidget(lineEditAlarmOutIp, 1, 1, 1, 1);

        label_8 = new QLabel(layoutWidget14);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_13->addWidget(label_8, 2, 0, 1, 1);

        lineEditAlarmOutChan = new QLineEdit(layoutWidget14);
        lineEditAlarmOutChan->setObjectName(QString::fromUtf8("lineEditAlarmOutChan"));

        gridLayout_13->addWidget(lineEditAlarmOutChan, 2, 1, 1, 1);

        label_10 = new QLabel(layoutWidget14);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_13->addWidget(label_10, 3, 0, 1, 1);

        lineEditAlarmOutName = new QLineEdit(layoutWidget14);
        lineEditAlarmOutName->setObjectName(QString::fromUtf8("lineEditAlarmOutName"));

        gridLayout_13->addWidget(lineEditAlarmOutName, 3, 1, 1, 1);

        label_9 = new QLabel(layoutWidget14);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_13->addWidget(label_9, 4, 0, 1, 1);

        comboBoxAlarmOutDelay = new QComboBox(layoutWidget14);
        comboBoxAlarmOutDelay->setObjectName(QString::fromUtf8("comboBoxAlarmOutDelay"));

        gridLayout_13->addWidget(comboBoxAlarmOutDelay, 4, 1, 1, 1);

        pushButtonInvokeAlarmOut = new QPushButton(layoutWidget14);
        pushButtonInvokeAlarmOut->setObjectName(QString::fromUtf8("pushButtonInvokeAlarmOut"));

        gridLayout_13->addWidget(pushButtonInvokeAlarmOut, 5, 0, 1, 1);

        lineEditAlarmOutState = new QLineEdit(layoutWidget14);
        lineEditAlarmOutState->setObjectName(QString::fromUtf8("lineEditAlarmOutState"));

        gridLayout_13->addWidget(lineEditAlarmOutState, 5, 1, 1, 1);

        line = new QFrame(CAlarmParamsDlg);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(10, 150, 651, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        retranslateUi(CAlarmParamsDlg);

        QMetaObject::connectSlotsByName(CAlarmParamsDlg);
    } // setupUi

    void retranslateUi(QDialog *CAlarmParamsDlg)
    {
        CAlarmParamsDlg->setWindowTitle(QApplication::translate("CAlarmParamsDlg", "Dialog", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("CAlarmParamsDlg", "Alarm input setup", 0, QApplication::UnicodeUTF8));
        pushButtonPTZ->setText(QApplication::translate("CAlarmParamsDlg", "trigger", 0, QApplication::UnicodeUTF8));
        pushButtonAlarmInSave->setText(QApplication::translate("CAlarmParamsDlg", "Confirm", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("CAlarmParamsDlg", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\256\213\344\275\223'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Input name</p></body></html>", 0, QApplication::UnicodeUTF8));
        checkBoxAlarmInHandle->setText(QApplication::translate("CAlarmParamsDlg", "Alarm handling", 0, QApplication::UnicodeUTF8));
        pushButtonAlarmInHandle->setText(QApplication::translate("CAlarmParamsDlg", "Setup", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("CAlarmParamsDlg", "Alarm type", 0, QApplication::UnicodeUTF8));
        comboBoxAlarmInType->clear();
        comboBoxAlarmInType->insertItems(0, QStringList()
         << QApplication::translate("CAlarmParamsDlg", "Normally open", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CAlarmParamsDlg", "Normally close", 0, QApplication::UnicodeUTF8)
        );
        label->setText(QApplication::translate("CAlarmParamsDlg", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\256\213\344\275\223'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Alarm in</p></body></html>", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("CAlarmParamsDlg", "IP device address", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("CAlarmParamsDlg", "IP channel ", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("CAlarmParamsDlg", "Alarm output setup", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("CAlarmParamsDlg", "Alarm output time", 0, QApplication::UnicodeUTF8));
        label_48->setText(QApplication::translate("CAlarmParamsDlg", "\345\210\206", 0, QApplication::UnicodeUTF8));
        label_23->setText(QApplication::translate("CAlarmParamsDlg", "Period2", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("CAlarmParamsDlg", "h", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("CAlarmParamsDlg", "min", 0, QApplication::UnicodeUTF8));
        label_21->setText(QApplication::translate("CAlarmParamsDlg", "--", 0, QApplication::UnicodeUTF8));
        label_22->setText(QApplication::translate("CAlarmParamsDlg", "h", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("CAlarmParamsDlg", "min", 0, QApplication::UnicodeUTF8));
        label_60->setText(QApplication::translate("CAlarmParamsDlg", "Period8", 0, QApplication::UnicodeUTF8));
        label_55->setText(QApplication::translate("CAlarmParamsDlg", "h", 0, QApplication::UnicodeUTF8));
        label_57->setText(QApplication::translate("CAlarmParamsDlg", "min", 0, QApplication::UnicodeUTF8));
        label_59->setText(QApplication::translate("CAlarmParamsDlg", "--", 0, QApplication::UnicodeUTF8));
        label_56->setText(QApplication::translate("CAlarmParamsDlg", "h", 0, QApplication::UnicodeUTF8));
        label_58->setText(QApplication::translate("CAlarmParamsDlg", "min", 0, QApplication::UnicodeUTF8));
        label_28->setText(QApplication::translate("CAlarmParamsDlg", "Period6", 0, QApplication::UnicodeUTF8));
        label_44->setText(QApplication::translate("CAlarmParamsDlg", "h", 0, QApplication::UnicodeUTF8));
        label_46->setText(QApplication::translate("CAlarmParamsDlg", "min", 0, QApplication::UnicodeUTF8));
        label_49->setText(QApplication::translate("CAlarmParamsDlg", "--", 0, QApplication::UnicodeUTF8));
        label_45->setText(QApplication::translate("CAlarmParamsDlg", "h", 0, QApplication::UnicodeUTF8));
        label_47->setText(QApplication::translate("CAlarmParamsDlg", "min", 0, QApplication::UnicodeUTF8));
        label_24->setText(QApplication::translate("CAlarmParamsDlg", "Period3", 0, QApplication::UnicodeUTF8));
        label_40->setText(QApplication::translate("CAlarmParamsDlg", "h", 0, QApplication::UnicodeUTF8));
        label_42->setText(QApplication::translate("CAlarmParamsDlg", "min", 0, QApplication::UnicodeUTF8));
        label_39->setText(QApplication::translate("CAlarmParamsDlg", "--", 0, QApplication::UnicodeUTF8));
        label_41->setText(QApplication::translate("CAlarmParamsDlg", "h", 0, QApplication::UnicodeUTF8));
        label_43->setText(QApplication::translate("CAlarmParamsDlg", "min", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("CAlarmParamsDlg", "Period1", 0, QApplication::UnicodeUTF8));
        label_35->setText(QApplication::translate("CAlarmParamsDlg", "h", 0, QApplication::UnicodeUTF8));
        label_37->setText(QApplication::translate("CAlarmParamsDlg", "min", 0, QApplication::UnicodeUTF8));
        label_34->setText(QApplication::translate("CAlarmParamsDlg", "--", 0, QApplication::UnicodeUTF8));
        label_38->setText(QApplication::translate("CAlarmParamsDlg", "min", 0, QApplication::UnicodeUTF8));
        label_36->setText(QApplication::translate("CAlarmParamsDlg", "h", 0, QApplication::UnicodeUTF8));
        label_27->setText(QApplication::translate("CAlarmParamsDlg", "Period4", 0, QApplication::UnicodeUTF8));
        label_30->setText(QApplication::translate("CAlarmParamsDlg", "h", 0, QApplication::UnicodeUTF8));
        label_31->setText(QApplication::translate("CAlarmParamsDlg", "min", 0, QApplication::UnicodeUTF8));
        label_33->setText(QApplication::translate("CAlarmParamsDlg", "h", 0, QApplication::UnicodeUTF8));
        label_29->setText(QApplication::translate("CAlarmParamsDlg", "min", 0, QApplication::UnicodeUTF8));
        label_32->setText(QApplication::translate("CAlarmParamsDlg", "--", 0, QApplication::UnicodeUTF8));
        label_25->setText(QApplication::translate("CAlarmParamsDlg", "Period5", 0, QApplication::UnicodeUTF8));
        label_51->setText(QApplication::translate("CAlarmParamsDlg", "h", 0, QApplication::UnicodeUTF8));
        label_53->setText(QApplication::translate("CAlarmParamsDlg", "min", 0, QApplication::UnicodeUTF8));
        label_50->setText(QApplication::translate("CAlarmParamsDlg", "--", 0, QApplication::UnicodeUTF8));
        label_52->setText(QApplication::translate("CAlarmParamsDlg", "h", 0, QApplication::UnicodeUTF8));
        label_54->setText(QApplication::translate("CAlarmParamsDlg", "min", 0, QApplication::UnicodeUTF8));
        label_26->setText(QApplication::translate("CAlarmParamsDlg", "Period7", 0, QApplication::UnicodeUTF8));
        label_63->setText(QApplication::translate("CAlarmParamsDlg", "h", 0, QApplication::UnicodeUTF8));
        label_65->setText(QApplication::translate("CAlarmParamsDlg", "min", 0, QApplication::UnicodeUTF8));
        label_62->setText(QApplication::translate("CAlarmParamsDlg", "--", 0, QApplication::UnicodeUTF8));
        label_64->setText(QApplication::translate("CAlarmParamsDlg", "h", 0, QApplication::UnicodeUTF8));
        label_66->setText(QApplication::translate("CAlarmParamsDlg", "min", 0, QApplication::UnicodeUTF8));
        pushButtonConfirmDate->setText(QApplication::translate("CAlarmParamsDlg", "\347\241\256\345\256\232\346\227\245\346\234\237\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("CAlarmParamsDlg", "Date", 0, QApplication::UnicodeUTF8));
        comboBoxAlarmDate->clear();
        comboBoxAlarmDate->insertItems(0, QStringList()
         << QApplication::translate("CAlarmParamsDlg", "Monday", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CAlarmParamsDlg", "Tuesday", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CAlarmParamsDlg", "Wedensday", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CAlarmParamsDlg", "Thursday", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CAlarmParamsDlg", "Friday", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CAlarmParamsDlg", "Saturday", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CAlarmParamsDlg", "Sunday", 0, QApplication::UnicodeUTF8)
        );
        comboBoxAlarmDate_2->clear();
        comboBoxAlarmDate_2->insertItems(0, QStringList()
         << QApplication::translate("CAlarmParamsDlg", "\346\225\264\344\270\252\346\230\237\346\234\237", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CAlarmParamsDlg", "\346\230\237\346\234\237\344\270\200", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CAlarmParamsDlg", "\346\230\237\346\234\237\344\272\214", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CAlarmParamsDlg", "\346\230\237\346\234\237\344\270\211", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CAlarmParamsDlg", "\346\230\237\346\234\237\345\233\233", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CAlarmParamsDlg", "\346\230\237\346\234\237\344\272\224", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CAlarmParamsDlg", "\346\230\237\346\234\237\345\205\255", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CAlarmParamsDlg", "\346\230\237\346\234\237\345\244\251", 0, QApplication::UnicodeUTF8)
        );
        pushButtonCopyDate->setText(QApplication::translate("CAlarmParamsDlg", "\345\244\215\345\210\266", 0, QApplication::UnicodeUTF8));
        pushButtonAlarmOutSave->setText(QApplication::translate("CAlarmParamsDlg", "Confirm", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("CAlarmParamsDlg", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\256\213\344\275\223'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Alarm output</p></body></html>", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("CAlarmParamsDlg", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\256\213\344\275\223'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">IP device address</p></body></html>", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("CAlarmParamsDlg", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\256\213\344\275\223'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">IP alarm out group</p></body></html>", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("CAlarmParamsDlg", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\256\213\344\275\223'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Output name</p></body></html>", 0, QApplication::UnicodeUTF8));
        lineEditAlarmOutName->setText(QString());
        label_9->setText(QApplication::translate("CAlarmParamsDlg", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\256\213\344\275\223'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Alarm output delay</p></body></html>", 0, QApplication::UnicodeUTF8));
        comboBoxAlarmOutDelay->clear();
        comboBoxAlarmOutDelay->insertItems(0, QStringList()
         << QApplication::translate("CAlarmParamsDlg", "5s", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CAlarmParamsDlg", "10s", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CAlarmParamsDlg", "30s", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CAlarmParamsDlg", "1min", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CAlarmParamsDlg", "2min", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CAlarmParamsDlg", "5min", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CAlarmParamsDlg", "10min", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CAlarmParamsDlg", "Manual", 0, QApplication::UnicodeUTF8)
        );
        pushButtonInvokeAlarmOut->setText(QApplication::translate("CAlarmParamsDlg", "Trigger alarm out", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CAlarmParamsDlg: public Ui_CAlarmParamsDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALARMPARAMSDLG_H
