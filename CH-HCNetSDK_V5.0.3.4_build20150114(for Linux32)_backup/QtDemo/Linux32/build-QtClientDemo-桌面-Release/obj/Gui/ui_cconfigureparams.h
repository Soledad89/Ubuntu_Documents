/********************************************************************************
** Form generated from reading UI file 'cconfigureparams.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CCONFIGUREPARAMS_H
#define UI_CCONFIGUREPARAMS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CConfigureParams
{
public:
    QPushButton *btnRemoteParams;
    QPushButton *btnLocalParams;
    QPushButton *btnIPParams;
    QPushButton *btnHardDiskParams;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *vLayParamForm;
    QPushButton *btnLogin;
    QPushButton *btnLogout;
    QFrame *line;
    QFrame *line_4;
    QFrame *line_3;
    QFrame *line_2;

    void setupUi(QWidget *CConfigureParams)
    {
        if (CConfigureParams->objectName().isEmpty())
            CConfigureParams->setObjectName(QString::fromUtf8("CConfigureParams"));
        CConfigureParams->resize(880, 642);
        btnRemoteParams = new QPushButton(CConfigureParams);
        btnRemoteParams->setObjectName(QString::fromUtf8("btnRemoteParams"));
        btnRemoteParams->setGeometry(QRect(710, 150, 131, 41));
        btnLocalParams = new QPushButton(CConfigureParams);
        btnLocalParams->setObjectName(QString::fromUtf8("btnLocalParams"));
        btnLocalParams->setGeometry(QRect(710, 60, 131, 33));
        btnIPParams = new QPushButton(CConfigureParams);
        btnIPParams->setObjectName(QString::fromUtf8("btnIPParams"));
        btnIPParams->setGeometry(QRect(710, 260, 131, 41));
        btnHardDiskParams = new QPushButton(CConfigureParams);
        btnHardDiskParams->setObjectName(QString::fromUtf8("btnHardDiskParams"));
        btnHardDiskParams->setGeometry(QRect(710, 360, 131, 41));
        verticalLayoutWidget = new QWidget(CConfigureParams);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 0, 701, 641));
        vLayParamForm = new QVBoxLayout(verticalLayoutWidget);
        vLayParamForm->setSpacing(6);
        vLayParamForm->setContentsMargins(11, 11, 11, 11);
        vLayParamForm->setObjectName(QString::fromUtf8("vLayParamForm"));
        vLayParamForm->setContentsMargins(0, 0, 0, 0);
        btnLogin = new QPushButton(CConfigureParams);
        btnLogin->setObjectName(QString::fromUtf8("btnLogin"));
        btnLogin->setGeometry(QRect(720, 480, 111, 33));
        btnLogout = new QPushButton(CConfigureParams);
        btnLogout->setObjectName(QString::fromUtf8("btnLogout"));
        btnLogout->setGeometry(QRect(730, 540, 91, 33));
        line = new QFrame(CConfigureParams);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(700, 30, 20, 561));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(CConfigureParams);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(840, 30, 20, 561));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(CConfigureParams);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(710, 20, 141, 20));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(CConfigureParams);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(710, 580, 141, 20));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        retranslateUi(CConfigureParams);

        QMetaObject::connectSlotsByName(CConfigureParams);
    } // setupUi

    void retranslateUi(QWidget *CConfigureParams)
    {
        CConfigureParams->setWindowTitle(QApplication::translate("CConfigureParams", "CConfigureParams", 0, QApplication::UnicodeUTF8));
        btnRemoteParams->setText(QApplication::translate("CConfigureParams", "Remote config", 0, QApplication::UnicodeUTF8));
        btnLocalParams->setText(QApplication::translate("CConfigureParams", "Local config", 0, QApplication::UnicodeUTF8));
        btnIPParams->setText(QApplication::translate("CConfigureParams", "IPC management", 0, QApplication::UnicodeUTF8));
        btnHardDiskParams->setText(QApplication::translate("CConfigureParams", "Disk management", 0, QApplication::UnicodeUTF8));
        btnLogin->setText(QApplication::translate("CConfigureParams", "Login", 0, QApplication::UnicodeUTF8));
        btnLogout->setText(QApplication::translate("CConfigureParams", "Exit", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CConfigureParams: public Ui_CConfigureParams {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CCONFIGUREPARAMS_H
