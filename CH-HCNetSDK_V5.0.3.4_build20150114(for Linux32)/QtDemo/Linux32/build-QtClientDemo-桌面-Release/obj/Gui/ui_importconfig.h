/********************************************************************************
** Form generated from reading UI file 'importconfig.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMPORTCONFIG_H
#define UI_IMPORTCONFIG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTreeWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ImportConfigClass
{
public:
    QTreeWidget *treeWidget;
    QFrame *line;
    QFrame *line_2;
    QFrame *line_3;
    QFrame *line_4;
    QFrame *line_5;
    QFrame *line_6;
    QFrame *line_7;
    QFrame *line_8;
    QLabel *label;
    QLabel *label_2;
    QFrame *line_9;
    QFrame *line_10;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEdit_configfile;
    QPushButton *pushButton_browse;
    QPushButton *pushButton_export;
    QLineEdit *lineEdit_configfilename;
    QPushButton *pushButton_import;
    QLabel *label_5;
    QLineEdit *lineEdit_deviceip;
    QPushButton *pushButton_exit;

    void setupUi(QWidget *ImportConfigClass)
    {
        if (ImportConfigClass->objectName().isEmpty())
            ImportConfigClass->setObjectName(QString::fromUtf8("ImportConfigClass"));
        ImportConfigClass->resize(573, 486);
        treeWidget = new QTreeWidget(ImportConfigClass);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->setGeometry(QRect(10, 10, 551, 191));
        line = new QFrame(ImportConfigClass);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(140, 210, 421, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(ImportConfigClass);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(10, 330, 551, 20));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(ImportConfigClass);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(10, 430, 551, 20));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(ImportConfigClass);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(160, 350, 401, 20));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        line_5 = new QFrame(ImportConfigClass);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setGeometry(QRect(550, 220, 20, 121));
        line_5->setFrameShape(QFrame::VLine);
        line_5->setFrameShadow(QFrame::Sunken);
        line_6 = new QFrame(ImportConfigClass);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setGeometry(QRect(550, 360, 20, 81));
        line_6->setFrameShape(QFrame::VLine);
        line_6->setFrameShadow(QFrame::Sunken);
        line_7 = new QFrame(ImportConfigClass);
        line_7->setObjectName(QString::fromUtf8("line_7"));
        line_7->setGeometry(QRect(0, 360, 20, 81));
        line_7->setFrameShape(QFrame::VLine);
        line_7->setFrameShadow(QFrame::Sunken);
        line_8 = new QFrame(ImportConfigClass);
        line_8->setObjectName(QString::fromUtf8("line_8"));
        line_8->setGeometry(QRect(0, 220, 20, 121));
        line_8->setFrameShape(QFrame::VLine);
        line_8->setFrameShadow(QFrame::Sunken);
        label = new QLabel(ImportConfigClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 210, 111, 20));
        label_2 = new QLabel(ImportConfigClass);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 350, 121, 20));
        line_9 = new QFrame(ImportConfigClass);
        line_9->setObjectName(QString::fromUtf8("line_9"));
        line_9->setGeometry(QRect(10, 350, 31, 20));
        line_9->setFrameShape(QFrame::HLine);
        line_9->setFrameShadow(QFrame::Sunken);
        line_10 = new QFrame(ImportConfigClass);
        line_10->setObjectName(QString::fromUtf8("line_10"));
        line_10->setGeometry(QRect(10, 210, 21, 20));
        line_10->setFrameShape(QFrame::HLine);
        line_10->setFrameShadow(QFrame::Sunken);
        label_3 = new QLabel(ImportConfigClass);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 380, 61, 20));
        label_4 = new QLabel(ImportConfigClass);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 300, 81, 16));
        lineEdit_configfile = new QLineEdit(ImportConfigClass);
        lineEdit_configfile->setObjectName(QString::fromUtf8("lineEdit_configfile"));
        lineEdit_configfile->setGeometry(QRect(80, 380, 391, 20));
        pushButton_browse = new QPushButton(ImportConfigClass);
        pushButton_browse->setObjectName(QString::fromUtf8("pushButton_browse"));
        pushButton_browse->setGeometry(QRect(480, 380, 61, 23));
        pushButton_export = new QPushButton(ImportConfigClass);
        pushButton_export->setObjectName(QString::fromUtf8("pushButton_export"));
        pushButton_export->setGeometry(QRect(490, 300, 61, 23));
        lineEdit_configfilename = new QLineEdit(ImportConfigClass);
        lineEdit_configfilename->setObjectName(QString::fromUtf8("lineEdit_configfilename"));
        lineEdit_configfilename->setGeometry(QRect(100, 300, 371, 20));
        pushButton_import = new QPushButton(ImportConfigClass);
        pushButton_import->setObjectName(QString::fromUtf8("pushButton_import"));
        pushButton_import->setGeometry(QRect(350, 410, 151, 23));
        label_5 = new QLabel(ImportConfigClass);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 250, 111, 16));
        lineEdit_deviceip = new QLineEdit(ImportConfigClass);
        lineEdit_deviceip->setObjectName(QString::fromUtf8("lineEdit_deviceip"));
        lineEdit_deviceip->setGeometry(QRect(140, 250, 301, 20));
        pushButton_exit = new QPushButton(ImportConfigClass);
        pushButton_exit->setObjectName(QString::fromUtf8("pushButton_exit"));
        pushButton_exit->setGeometry(QRect(420, 450, 61, 23));

        retranslateUi(ImportConfigClass);

        QMetaObject::connectSlotsByName(ImportConfigClass);
    } // setupUi

    void retranslateUi(QWidget *ImportConfigClass)
    {
        ImportConfigClass->setWindowTitle(QApplication::translate("ImportConfigClass", "ImportConfig", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("ImportConfigClass", "Device tree", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ImportConfigClass", "Export config file", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ImportConfigClass", "Import config file", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ImportConfigClass", "File path", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("ImportConfigClass", "Save path", 0, QApplication::UnicodeUTF8));
        pushButton_browse->setText(QApplication::translate("ImportConfigClass", "Browse", 0, QApplication::UnicodeUTF8));
        pushButton_export->setText(QApplication::translate("ImportConfigClass", "Export", 0, QApplication::UnicodeUTF8));
        pushButton_import->setText(QApplication::translate("ImportConfigClass", "Copy to device selected", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("ImportConfigClass", "Select one device", 0, QApplication::UnicodeUTF8));
        pushButton_exit->setText(QApplication::translate("ImportConfigClass", "Exit", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ImportConfigClass: public Ui_ImportConfigClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMPORTCONFIG_H
