/********************************************************************************
** Form generated from reading UI file 'audiobroadcast.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUDIOBROADCAST_H
#define UI_AUDIOBROADCAST_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QTreeWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AudioBroadcastClass
{
public:
    QTreeWidget *treeWidget;
    QPushButton *pushButton_startbroadcast;
    QPushButton *pushButton_cancel;

    void setupUi(QWidget *AudioBroadcastClass)
    {
        if (AudioBroadcastClass->objectName().isEmpty())
            AudioBroadcastClass->setObjectName(QString::fromUtf8("AudioBroadcastClass"));
        AudioBroadcastClass->resize(543, 389);
        treeWidget = new QTreeWidget(AudioBroadcastClass);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->setGeometry(QRect(10, 11, 521, 331));
        pushButton_startbroadcast = new QPushButton(AudioBroadcastClass);
        pushButton_startbroadcast->setObjectName(QString::fromUtf8("pushButton_startbroadcast"));
        pushButton_startbroadcast->setGeometry(QRect(90, 360, 131, 23));
        pushButton_cancel = new QPushButton(AudioBroadcastClass);
        pushButton_cancel->setObjectName(QString::fromUtf8("pushButton_cancel"));
        pushButton_cancel->setGeometry(QRect(360, 360, 75, 23));

        retranslateUi(AudioBroadcastClass);

        QMetaObject::connectSlotsByName(AudioBroadcastClass);
    } // setupUi

    void retranslateUi(QWidget *AudioBroadcastClass)
    {
        AudioBroadcastClass->setWindowTitle(QApplication::translate("AudioBroadcastClass", "AudioBroadcast", 0, QApplication::UnicodeUTF8));
        pushButton_startbroadcast->setText(QApplication::translate("AudioBroadcastClass", "Start broadcast", 0, QApplication::UnicodeUTF8));
        pushButton_cancel->setText(QApplication::translate("AudioBroadcastClass", "Exit", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AudioBroadcastClass: public Ui_AudioBroadcastClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUDIOBROADCAST_H
