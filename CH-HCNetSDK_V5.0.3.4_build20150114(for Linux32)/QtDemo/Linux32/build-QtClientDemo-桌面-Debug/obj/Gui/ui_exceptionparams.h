/********************************************************************************
** Form generated from reading UI file 'exceptionparams.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXCEPTIONPARAMS_H
#define UI_EXCEPTIONPARAMS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ExceptionParams
{
public:
    QGroupBox *groupBox;
    QLabel *label;
    QComboBox *comboBoxExceptionType;
    QGroupBox *groupBox_2;
    QCheckBox *checkBoxMontiorAlarm;
    QCheckBox *checkBoxSoundAlarm;
    QCheckBox *checkBoxCenterAlarm;
    QCheckBox *checkBoxInvokeAlarmOut;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayoutAlarmOut;
    QPushButton *btnrefresh;
    QPushButton *btnsave;

    void setupUi(QWidget *ExceptionParams)
    {
        if (ExceptionParams->objectName().isEmpty())
            ExceptionParams->setObjectName(QString::fromUtf8("ExceptionParams"));
        ExceptionParams->resize(560, 441);
        groupBox = new QGroupBox(ExceptionParams);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 20, 541, 401));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 40, 91, 21));
        comboBoxExceptionType = new QComboBox(groupBox);
        comboBoxExceptionType->setObjectName(QString::fromUtf8("comboBoxExceptionType"));
        comboBoxExceptionType->setGeometry(QRect(130, 40, 181, 22));
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(20, 80, 501, 301));
        checkBoxMontiorAlarm = new QCheckBox(groupBox_2);
        checkBoxMontiorAlarm->setObjectName(QString::fromUtf8("checkBoxMontiorAlarm"));
        checkBoxMontiorAlarm->setGeometry(QRect(20, 30, 151, 21));
        checkBoxSoundAlarm = new QCheckBox(groupBox_2);
        checkBoxSoundAlarm->setObjectName(QString::fromUtf8("checkBoxSoundAlarm"));
        checkBoxSoundAlarm->setGeometry(QRect(180, 30, 111, 21));
        checkBoxCenterAlarm = new QCheckBox(groupBox_2);
        checkBoxCenterAlarm->setObjectName(QString::fromUtf8("checkBoxCenterAlarm"));
        checkBoxCenterAlarm->setGeometry(QRect(320, 30, 121, 21));
        checkBoxInvokeAlarmOut = new QCheckBox(groupBox_2);
        checkBoxInvokeAlarmOut->setObjectName(QString::fromUtf8("checkBoxInvokeAlarmOut"));
        checkBoxInvokeAlarmOut->setGeometry(QRect(20, 66, 161, 21));
        verticalLayoutWidget = new QWidget(groupBox_2);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 100, 471, 121));
        verticalLayoutAlarmOut = new QVBoxLayout(verticalLayoutWidget);
        verticalLayoutAlarmOut->setObjectName(QString::fromUtf8("verticalLayoutAlarmOut"));
        verticalLayoutAlarmOut->setContentsMargins(0, 0, 0, 0);
        btnrefresh = new QPushButton(groupBox_2);
        btnrefresh->setObjectName(QString::fromUtf8("btnrefresh"));
        btnrefresh->setGeometry(QRect(70, 250, 75, 23));
        btnsave = new QPushButton(groupBox_2);
        btnsave->setObjectName(QString::fromUtf8("btnsave"));
        btnsave->setGeometry(QRect(310, 250, 75, 23));

        retranslateUi(ExceptionParams);

        QMetaObject::connectSlotsByName(ExceptionParams);
    } // setupUi

    void retranslateUi(QWidget *ExceptionParams)
    {
        ExceptionParams->setWindowTitle(QApplication::translate("ExceptionParams", "Form", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("ExceptionParams", "Exception config info", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ExceptionParams", "Exception type\357\274\232", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("ExceptionParams", "Alarm handling mode", 0, QApplication::UnicodeUTF8));
        checkBoxMontiorAlarm->setText(QApplication::translate("ExceptionParams", "Show alarm on monitor", 0, QApplication::UnicodeUTF8));
        checkBoxSoundAlarm->setText(QApplication::translate("ExceptionParams", "Audio alarm", 0, QApplication::UnicodeUTF8));
        checkBoxCenterAlarm->setText(QApplication::translate("ExceptionParams", "Report to center", 0, QApplication::UnicodeUTF8));
        checkBoxInvokeAlarmOut->setText(QApplication::translate("ExceptionParams", "Trigger alarm output", 0, QApplication::UnicodeUTF8));
        btnrefresh->setText(QApplication::translate("ExceptionParams", "Update", 0, QApplication::UnicodeUTF8));
        btnsave->setText(QApplication::translate("ExceptionParams", "Confirm", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ExceptionParams: public Ui_ExceptionParams {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXCEPTIONPARAMS_H
