/********************************************************************************
** Form generated from reading UI file 'devicestate.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEVICESTATE_H
#define UI_DEVICESTATE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTableWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DeviceStateClass
{
public:
    QLabel *label;
    QLabel *label_totalconnum;
    QLabel *label_devicestate;
    QFrame *line_6;
    QFrame *line_5;
    QFrame *line;
    QLineEdit *lineEdit_devicestate;
    QFrame *line_2;
    QLineEdit *lineEdit_totalconnum;
    QLineEdit *lineEdit_nodename;
    QTableWidget *disktableWidget;
    QLabel *label_nodename;
    QFrame *line_7;
    QTableWidget *channeltableWidget;
    QPushButton *pushButton_exit;
    QFrame *line_9;
    QFrame *line_8;
    QLabel *label_deviceIP;
    QFrame *line_3;
    QFrame *line_4;
    QLabel *label_3;
    QFrame *line_11;
    QLabel *label_2;
    QFrame *line_10;
    QPushButton *pushButton_refresh;
    QLineEdit *lineEdit_deviceIP;
    QFrame *line_12;
    QFrame *line_13;
    QFrame *line_14;

    void setupUi(QWidget *DeviceStateClass)
    {
        if (DeviceStateClass->objectName().isEmpty())
            DeviceStateClass->setObjectName(QString::fromUtf8("DeviceStateClass"));
        DeviceStateClass->resize(827, 607);
        label = new QLabel(DeviceStateClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 60, 81, 20));
        label_totalconnum = new QLabel(DeviceStateClass);
        label_totalconnum->setObjectName(QString::fromUtf8("label_totalconnum"));
        label_totalconnum->setGeometry(QRect(650, 30, 61, 20));
        label_devicestate = new QLabel(DeviceStateClass);
        label_devicestate->setObjectName(QString::fromUtf8("label_devicestate"));
        label_devicestate->setGeometry(QRect(470, 30, 61, 20));
        line_6 = new QFrame(DeviceStateClass);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setGeometry(QRect(110, 320, 681, 20));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);
        line_5 = new QFrame(DeviceStateClass);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setGeometry(QRect(20, 550, 771, 20));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);
        line = new QFrame(DeviceStateClass);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(140, 60, 651, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        lineEdit_devicestate = new QLineEdit(DeviceStateClass);
        lineEdit_devicestate->setObjectName(QString::fromUtf8("lineEdit_devicestate"));
        lineEdit_devicestate->setGeometry(QRect(540, 30, 91, 20));
        line_2 = new QFrame(DeviceStateClass);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(20, 310, 771, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        lineEdit_totalconnum = new QLineEdit(DeviceStateClass);
        lineEdit_totalconnum->setObjectName(QString::fromUtf8("lineEdit_totalconnum"));
        lineEdit_totalconnum->setGeometry(QRect(710, 30, 61, 20));
        lineEdit_nodename = new QLineEdit(DeviceStateClass);
        lineEdit_nodename->setObjectName(QString::fromUtf8("lineEdit_nodename"));
        lineEdit_nodename->setGeometry(QRect(110, 30, 141, 20));
        disktableWidget = new QTableWidget(DeviceStateClass);
        if (disktableWidget->columnCount() < 4)
            disktableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        disktableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        disktableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        disktableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        disktableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        disktableWidget->setObjectName(QString::fromUtf8("disktableWidget"));
        disktableWidget->setGeometry(QRect(30, 340, 751, 211));
        disktableWidget->horizontalHeader()->setDefaultSectionSize(100);
        label_nodename = new QLabel(DeviceStateClass);
        label_nodename->setObjectName(QString::fromUtf8("label_nodename"));
        label_nodename->setGeometry(QRect(30, 30, 81, 20));
        line_7 = new QFrame(DeviceStateClass);
        line_7->setObjectName(QString::fromUtf8("line_7"));
        line_7->setGeometry(QRect(10, 330, 21, 231));
        line_7->setFrameShape(QFrame::VLine);
        line_7->setFrameShadow(QFrame::Sunken);
        channeltableWidget = new QTableWidget(DeviceStateClass);
        if (channeltableWidget->columnCount() < 7)
            channeltableWidget->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        channeltableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        channeltableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        channeltableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        channeltableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        channeltableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        channeltableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        channeltableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem10);
        channeltableWidget->setObjectName(QString::fromUtf8("channeltableWidget"));
        channeltableWidget->setGeometry(QRect(30, 80, 751, 231));
        pushButton_exit = new QPushButton(DeviceStateClass);
        pushButton_exit->setObjectName(QString::fromUtf8("pushButton_exit"));
        pushButton_exit->setGeometry(QRect(690, 570, 75, 23));
        line_9 = new QFrame(DeviceStateClass);
        line_9->setObjectName(QString::fromUtf8("line_9"));
        line_9->setGeometry(QRect(90, 10, 721, 20));
        line_9->setFrameShape(QFrame::HLine);
        line_9->setFrameShadow(QFrame::Sunken);
        line_8 = new QFrame(DeviceStateClass);
        line_8->setObjectName(QString::fromUtf8("line_8"));
        line_8->setGeometry(QRect(780, 330, 21, 231));
        line_8->setFrameShape(QFrame::VLine);
        line_8->setFrameShadow(QFrame::Sunken);
        label_deviceIP = new QLabel(DeviceStateClass);
        label_deviceIP->setObjectName(QString::fromUtf8("label_deviceIP"));
        label_deviceIP->setGeometry(QRect(260, 30, 71, 20));
        line_3 = new QFrame(DeviceStateClass);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(10, 70, 21, 251));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(DeviceStateClass);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(780, 70, 21, 251));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);
        label_3 = new QLabel(DeviceStateClass);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 10, 81, 20));
        line_11 = new QFrame(DeviceStateClass);
        line_11->setObjectName(QString::fromUtf8("line_11"));
        line_11->setGeometry(QRect(800, 20, 20, 571));
        line_11->setFrameShape(QFrame::VLine);
        line_11->setFrameShadow(QFrame::Sunken);
        label_2 = new QLabel(DeviceStateClass);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 320, 61, 20));
        line_10 = new QFrame(DeviceStateClass);
        line_10->setObjectName(QString::fromUtf8("line_10"));
        line_10->setGeometry(QRect(0, 20, 20, 571));
        line_10->setFrameShape(QFrame::VLine);
        line_10->setFrameShadow(QFrame::Sunken);
        pushButton_refresh = new QPushButton(DeviceStateClass);
        pushButton_refresh->setObjectName(QString::fromUtf8("pushButton_refresh"));
        pushButton_refresh->setGeometry(QRect(570, 570, 75, 23));
        lineEdit_deviceIP = new QLineEdit(DeviceStateClass);
        lineEdit_deviceIP->setObjectName(QString::fromUtf8("lineEdit_deviceIP"));
        lineEdit_deviceIP->setGeometry(QRect(330, 30, 131, 20));
        line_12 = new QFrame(DeviceStateClass);
        line_12->setObjectName(QString::fromUtf8("line_12"));
        line_12->setGeometry(QRect(10, 590, 801, 16));
        line_12->setFrameShape(QFrame::HLine);
        line_12->setFrameShadow(QFrame::Sunken);
        line_13 = new QFrame(DeviceStateClass);
        line_13->setObjectName(QString::fromUtf8("line_13"));
        line_13->setGeometry(QRect(20, 320, 31, 16));
        line_13->setFrameShape(QFrame::HLine);
        line_13->setFrameShadow(QFrame::Sunken);
        line_14 = new QFrame(DeviceStateClass);
        line_14->setObjectName(QString::fromUtf8("line_14"));
        line_14->setGeometry(QRect(20, 60, 21, 16));
        line_14->setFrameShape(QFrame::HLine);
        line_14->setFrameShadow(QFrame::Sunken);

        retranslateUi(DeviceStateClass);

        QMetaObject::connectSlotsByName(DeviceStateClass);
    } // setupUi

    void retranslateUi(QWidget *DeviceStateClass)
    {
        DeviceStateClass->setWindowTitle(QApplication::translate("DeviceStateClass", "DeviceState", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("DeviceStateClass", "Channel state", 0, QApplication::UnicodeUTF8));
        label_totalconnum->setText(QApplication::translate("DeviceStateClass", "Total link", 0, QApplication::UnicodeUTF8));
        label_devicestate->setText(QApplication::translate("DeviceStateClass", "Device state", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = disktableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("DeviceStateClass", "HD No.", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = disktableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("DeviceStateClass", "HD capacity(MB\357\274\211", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = disktableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("DeviceStateClass", "Last capacity(MB)", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = disktableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("DeviceStateClass", "HD state", 0, QApplication::UnicodeUTF8));
        label_nodename->setText(QApplication::translate("DeviceStateClass", "Device name", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = channeltableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem4->setText(QApplication::translate("DeviceStateClass", "Channel No.", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = channeltableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem5->setText(QApplication::translate("DeviceStateClass", "Record state", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem6 = channeltableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem6->setText(QApplication::translate("DeviceStateClass", "Signal state", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem7 = channeltableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem7->setText(QApplication::translate("DeviceStateClass", "Hardware state", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem8 = channeltableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem8->setText(QApplication::translate("DeviceStateClass", "Link number", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem9 = channeltableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem9->setText(QApplication::translate("DeviceStateClass", "Current bitrate", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem10 = channeltableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem10->setText(QApplication::translate("DeviceStateClass", "IPC links", 0, QApplication::UnicodeUTF8));
        pushButton_exit->setText(QApplication::translate("DeviceStateClass", "Exit", 0, QApplication::UnicodeUTF8));
        label_deviceIP->setText(QApplication::translate("DeviceStateClass", "Device IP", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("DeviceStateClass", "Device state", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("DeviceStateClass", "HDD state", 0, QApplication::UnicodeUTF8));
        pushButton_refresh->setText(QApplication::translate("DeviceStateClass", "Update", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DeviceStateClass: public Ui_DeviceStateClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEVICESTATE_H
