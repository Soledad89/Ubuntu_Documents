/********************************************************************************
** Form generated from reading UI file 'audiotransfer.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUDIOTRANSFER_H
#define UI_AUDIOTRANSFER_H

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
#include <QtGui/QTreeWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AudioTransferClass
{
public:
    QFrame *line_3;
    QFrame *line_4;
    QFrame *line_2;
    QFrame *line;
    QPushButton *pushButton_exit;
    QTreeWidget *treeWidget;
    QPushButton *pushButton_browse;
    QPushButton *pushButton_talkmrsend;
    QLineEdit *lineEdit_sendfilepath;
    QLabel *label;
    QPushButton *pushButton_startmr;
    QPushButton *pushButton_stopmr;
    QTableWidget *tableWidget;
    QLabel *label_2;
    QFrame *line_5;

    void setupUi(QWidget *AudioTransferClass)
    {
        if (AudioTransferClass->objectName().isEmpty())
            AudioTransferClass->setObjectName(QString::fromUtf8("AudioTransferClass"));
        AudioTransferClass->resize(539, 531);
        line_3 = new QFrame(AudioTransferClass);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(0, 10, 20, 481));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(AudioTransferClass);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(520, 10, 20, 481));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(AudioTransferClass);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(10, 0, 521, 20));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line = new QFrame(AudioTransferClass);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(10, 480, 521, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        pushButton_exit = new QPushButton(AudioTransferClass);
        pushButton_exit->setObjectName(QString::fromUtf8("pushButton_exit"));
        pushButton_exit->setGeometry(QRect(450, 500, 75, 23));
        treeWidget = new QTreeWidget(AudioTransferClass);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->setGeometry(QRect(30, 20, 481, 231));
        pushButton_browse = new QPushButton(AudioTransferClass);
        pushButton_browse->setObjectName(QString::fromUtf8("pushButton_browse"));
        pushButton_browse->setGeometry(QRect(340, 290, 81, 23));
        pushButton_talkmrsend = new QPushButton(AudioTransferClass);
        pushButton_talkmrsend->setObjectName(QString::fromUtf8("pushButton_talkmrsend"));
        pushButton_talkmrsend->setGeometry(QRect(430, 290, 81, 23));
        lineEdit_sendfilepath = new QLineEdit(AudioTransferClass);
        lineEdit_sendfilepath->setObjectName(QString::fromUtf8("lineEdit_sendfilepath"));
        lineEdit_sendfilepath->setGeometry(QRect(130, 290, 201, 21));
        label = new QLabel(AudioTransferClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 290, 111, 20));
        pushButton_startmr = new QPushButton(AudioTransferClass);
        pushButton_startmr->setObjectName(QString::fromUtf8("pushButton_startmr"));
        pushButton_startmr->setGeometry(QRect(340, 260, 81, 23));
        pushButton_stopmr = new QPushButton(AudioTransferClass);
        pushButton_stopmr->setObjectName(QString::fromUtf8("pushButton_stopmr"));
        pushButton_stopmr->setGeometry(QRect(430, 260, 81, 23));
        tableWidget = new QTableWidget(AudioTransferClass);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(20, 350, 491, 131));
        label_2 = new QLabel(AudioTransferClass);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 330, 91, 16));
        line_5 = new QFrame(AudioTransferClass);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setGeometry(QRect(10, 320, 521, 16));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);

        retranslateUi(AudioTransferClass);

        QMetaObject::connectSlotsByName(AudioTransferClass);
    } // setupUi

    void retranslateUi(QWidget *AudioTransferClass)
    {
        AudioTransferClass->setWindowTitle(QApplication::translate("AudioTransferClass", "AudioTransfer", 0, QApplication::UnicodeUTF8));
        pushButton_exit->setText(QApplication::translate("AudioTransferClass", "Eixt", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("AudioTransferClass", "Device tree", 0, QApplication::UnicodeUTF8));
        pushButton_browse->setText(QApplication::translate("AudioTransferClass", "Browse", 0, QApplication::UnicodeUTF8));
        pushButton_talkmrsend->setText(QApplication::translate("AudioTransferClass", "Send", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("AudioTransferClass", "Audio file path", 0, QApplication::UnicodeUTF8));
        pushButton_startmr->setText(QApplication::translate("AudioTransferClass", "Start", 0, QApplication::UnicodeUTF8));
        pushButton_stopmr->setText(QApplication::translate("AudioTransferClass", "Stop", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("AudioTransferClass", "Time", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("AudioTransferClass", "Handle", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("AudioTransferClass", "Size", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("AudioTransferClass", "Type", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("AudioTransferClass", "User data", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("AudioTransferClass", "Receive data", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AudioTransferClass: public Ui_AudioTransferClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUDIOTRANSFER_H
