/********************************************************************************
** Form generated from reading UI file 'serialtransfer.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERIALTRANSFER_H
#define UI_SERIALTRANSFER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTableWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SerialTransferClass
{
public:
    QPushButton *pushButton_stopserial;
    QPushButton *pushButton_startserial;
    QLabel *channelNumlabel;
    QLabel *channelTypelable;
    QFrame *line;
    QFrame *line_2;
    QFrame *line_3;
    QFrame *line_4;
    QFrame *line_5;
    QFrame *line_6;
    QFrame *line_7;
    QFrame *line_8;
    QLabel *channelTypelable_2;
    QFrame *line_9;
    QFrame *line_10;
    QFrame *line_11;
    QLabel *channelTypelable_3;
    QFrame *line_12;
    QFrame *line_13;
    QFrame *line_14;
    QLabel *channelTypelable_4;
    QPushButton *pushButton_send;
    QLineEdit *lineEdit;
    QTableWidget *tableWidget;
    QPushButton *pushButton_exit;
    QComboBox *comboBox_channeltype;
    QComboBox *comboBox_channelnum;
    QComboBox *comboBox_sendinterface;

    void setupUi(QWidget *SerialTransferClass)
    {
        if (SerialTransferClass->objectName().isEmpty())
            SerialTransferClass->setObjectName(QString::fromUtf8("SerialTransferClass"));
        SerialTransferClass->resize(675, 489);
        pushButton_stopserial = new QPushButton(SerialTransferClass);
        pushButton_stopserial->setObjectName(QString::fromUtf8("pushButton_stopserial"));
        pushButton_stopserial->setGeometry(QRect(410, 450, 111, 23));
        pushButton_startserial = new QPushButton(SerialTransferClass);
        pushButton_startserial->setObjectName(QString::fromUtf8("pushButton_startserial"));
        pushButton_startserial->setGeometry(QRect(280, 450, 111, 23));
        channelNumlabel = new QLabel(SerialTransferClass);
        channelNumlabel->setObjectName(QString::fromUtf8("channelNumlabel"));
        channelNumlabel->setGeometry(QRect(260, 30, 81, 16));
        channelTypelable = new QLabel(SerialTransferClass);
        channelTypelable->setObjectName(QString::fromUtf8("channelTypelable"));
        channelTypelable->setGeometry(QRect(50, 30, 91, 16));
        line = new QFrame(SerialTransferClass);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(20, 10, 3, 61));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(SerialTransferClass);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(650, 10, 3, 61));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(SerialTransferClass);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(20, 0, 631, 20));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(SerialTransferClass);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(20, 60, 631, 20));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        line_5 = new QFrame(SerialTransferClass);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setGeometry(QRect(120, 80, 531, 20));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);
        line_6 = new QFrame(SerialTransferClass);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setGeometry(QRect(13, 90, 20, 111));
        line_6->setFrameShape(QFrame::VLine);
        line_6->setFrameShadow(QFrame::Sunken);
        line_7 = new QFrame(SerialTransferClass);
        line_7->setObjectName(QString::fromUtf8("line_7"));
        line_7->setGeometry(QRect(20, 190, 631, 20));
        line_7->setFrameShape(QFrame::HLine);
        line_7->setFrameShadow(QFrame::Sunken);
        line_8 = new QFrame(SerialTransferClass);
        line_8->setObjectName(QString::fromUtf8("line_8"));
        line_8->setGeometry(QRect(643, 90, 20, 111));
        line_8->setFrameShape(QFrame::VLine);
        line_8->setFrameShadow(QFrame::Sunken);
        channelTypelable_2 = new QLabel(SerialTransferClass);
        channelTypelable_2->setObjectName(QString::fromUtf8("channelTypelable_2"));
        channelTypelable_2->setGeometry(QRect(40, 80, 71, 16));
        line_9 = new QFrame(SerialTransferClass);
        line_9->setObjectName(QString::fromUtf8("line_9"));
        line_9->setGeometry(QRect(20, 80, 16, 20));
        line_9->setFrameShape(QFrame::HLine);
        line_9->setFrameShadow(QFrame::Sunken);
        line_10 = new QFrame(SerialTransferClass);
        line_10->setObjectName(QString::fromUtf8("line_10"));
        line_10->setGeometry(QRect(17, 430, 641, 20));
        line_10->setFrameShape(QFrame::HLine);
        line_10->setFrameShadow(QFrame::Sunken);
        line_11 = new QFrame(SerialTransferClass);
        line_11->setObjectName(QString::fromUtf8("line_11"));
        line_11->setGeometry(QRect(107, 220, 551, 20));
        line_11->setFrameShape(QFrame::HLine);
        line_11->setFrameShadow(QFrame::Sunken);
        channelTypelable_3 = new QLabel(SerialTransferClass);
        channelTypelable_3->setObjectName(QString::fromUtf8("channelTypelable_3"));
        channelTypelable_3->setGeometry(QRect(47, 220, 54, 13));
        line_12 = new QFrame(SerialTransferClass);
        line_12->setObjectName(QString::fromUtf8("line_12"));
        line_12->setGeometry(QRect(27, 220, 16, 20));
        line_12->setFrameShape(QFrame::HLine);
        line_12->setFrameShadow(QFrame::Sunken);
        line_13 = new QFrame(SerialTransferClass);
        line_13->setObjectName(QString::fromUtf8("line_13"));
        line_13->setGeometry(QRect(650, 230, 20, 211));
        line_13->setFrameShape(QFrame::VLine);
        line_13->setFrameShadow(QFrame::Sunken);
        line_14 = new QFrame(SerialTransferClass);
        line_14->setObjectName(QString::fromUtf8("line_14"));
        line_14->setGeometry(QRect(10, 230, 20, 211));
        line_14->setFrameShape(QFrame::VLine);
        line_14->setFrameShadow(QFrame::Sunken);
        channelTypelable_4 = new QLabel(SerialTransferClass);
        channelTypelable_4->setObjectName(QString::fromUtf8("channelTypelable_4"));
        channelTypelable_4->setGeometry(QRect(43, 163, 101, 20));
        pushButton_send = new QPushButton(SerialTransferClass);
        pushButton_send->setObjectName(QString::fromUtf8("pushButton_send"));
        pushButton_send->setGeometry(QRect(390, 160, 75, 23));
        lineEdit = new QLineEdit(SerialTransferClass);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(40, 119, 581, 21));
        tableWidget = new QTableWidget(SerialTransferClass);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(30, 240, 621, 191));
        pushButton_exit = new QPushButton(SerialTransferClass);
        pushButton_exit->setObjectName(QString::fromUtf8("pushButton_exit"));
        pushButton_exit->setGeometry(QRect(560, 450, 101, 23));
        comboBox_channeltype = new QComboBox(SerialTransferClass);
        comboBox_channeltype->setObjectName(QString::fromUtf8("comboBox_channeltype"));
        comboBox_channeltype->setGeometry(QRect(140, 30, 101, 22));
        comboBox_channelnum = new QComboBox(SerialTransferClass);
        comboBox_channelnum->setObjectName(QString::fromUtf8("comboBox_channelnum"));
        comboBox_channelnum->setGeometry(QRect(340, 30, 101, 22));
        comboBox_sendinterface = new QComboBox(SerialTransferClass);
        comboBox_sendinterface->setObjectName(QString::fromUtf8("comboBox_sendinterface"));
        comboBox_sendinterface->setGeometry(QRect(140, 160, 221, 22));

        retranslateUi(SerialTransferClass);

        QMetaObject::connectSlotsByName(SerialTransferClass);
    } // setupUi

    void retranslateUi(QWidget *SerialTransferClass)
    {
        SerialTransferClass->setWindowTitle(QApplication::translate("SerialTransferClass", "SerialTransfer", 0, QApplication::UnicodeUTF8));
        pushButton_stopserial->setText(QApplication::translate("SerialTransferClass", "Close connection", 0, QApplication::UnicodeUTF8));
        pushButton_startserial->setText(QApplication::translate("SerialTransferClass", "Open connection", 0, QApplication::UnicodeUTF8));
        channelNumlabel->setText(QApplication::translate("SerialTransferClass", "Channel No.", 0, QApplication::UnicodeUTF8));
        channelTypelable->setText(QApplication::translate("SerialTransferClass", "Serial port", 0, QApplication::UnicodeUTF8));
        channelTypelable_2->setText(QApplication::translate("SerialTransferClass", "Data sent", 0, QApplication::UnicodeUTF8));
        channelTypelable_3->setText(QApplication::translate("SerialTransferClass", "Data received", 0, QApplication::UnicodeUTF8));
        channelTypelable_4->setText(QApplication::translate("SerialTransferClass", "Sending", 0, QApplication::UnicodeUTF8));
        pushButton_send->setText(QApplication::translate("SerialTransferClass", "Send", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("SerialTransferClass", "Time", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("SerialTransferClass", "Content", 0, QApplication::UnicodeUTF8));
        pushButton_exit->setText(QApplication::translate("SerialTransferClass", "Exit", 0, QApplication::UnicodeUTF8));
        comboBox_channeltype->clear();
        comboBox_channeltype->insertItems(0, QStringList()
         << QApplication::translate("SerialTransferClass", "232", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SerialTransferClass", "485", 0, QApplication::UnicodeUTF8)
        );
        comboBox_sendinterface->clear();
        comboBox_sendinterface->insertItems(0, QStringList()
         << QApplication::translate("SerialTransferClass", "NET_DVR_SerialSend", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SerialTransferClass", "NET_DVR_SendToSerialPort", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SerialTransferClass", "NET_DVR_SendTo232Port", 0, QApplication::UnicodeUTF8)
        );
    } // retranslateUi

};

namespace Ui {
    class SerialTransferClass: public Ui_SerialTransferClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERIALTRANSFER_H
