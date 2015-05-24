/********************************************************************************
** Form generated from reading UI file 'tvwidget.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TVWIDGET_H
#define UI_TVWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tvwidget
{
public:
    QFrame *frame;
    QFrame *frame_2;

    void setupUi(QWidget *tvwidget)
    {
        if (tvwidget->objectName().isEmpty())
            tvwidget->setObjectName(QString::fromUtf8("tvwidget"));
        tvwidget->resize(720, 288);
        tvwidget->setMaximumSize(QSize(720, 576));
        frame = new QFrame(tvwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 360, 288));
        frame->setMaximumSize(QSize(720, 576));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        frame_2 = new QFrame(tvwidget);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(360, 0, 360, 288));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);

        retranslateUi(tvwidget);

        QMetaObject::connectSlotsByName(tvwidget);
    } // setupUi

    void retranslateUi(QWidget *tvwidget)
    {
        tvwidget->setWindowTitle(QApplication::translate("tvwidget", "tvwidget", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class tvwidget: public Ui_tvwidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TVWIDGET_H
