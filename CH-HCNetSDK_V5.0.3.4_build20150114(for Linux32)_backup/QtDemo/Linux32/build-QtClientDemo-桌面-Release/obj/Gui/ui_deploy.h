/********************************************************************************
** Form generated from reading UI file 'deploy.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEPLOY_H
#define UI_DEPLOY_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QTreeWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DeployClass
{
public:
    QPushButton *pushButton_deployornot;
    QPushButton *pushButton_exit;
    QTreeWidget *treeWidget;

    void setupUi(QWidget *DeployClass)
    {
        if (DeployClass->objectName().isEmpty())
            DeployClass->setObjectName(QString::fromUtf8("DeployClass"));
        DeployClass->resize(479, 329);
        pushButton_deployornot = new QPushButton(DeployClass);
        pushButton_deployornot->setObjectName(QString::fromUtf8("pushButton_deployornot"));
        pushButton_deployornot->setGeometry(QRect(80, 290, 101, 31));
        pushButton_exit = new QPushButton(DeployClass);
        pushButton_exit->setObjectName(QString::fromUtf8("pushButton_exit"));
        pushButton_exit->setGeometry(QRect(310, 290, 101, 31));
        treeWidget = new QTreeWidget(DeployClass);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->setGeometry(QRect(10, 10, 451, 261));

        retranslateUi(DeployClass);

        QMetaObject::connectSlotsByName(DeployClass);
    } // setupUi

    void retranslateUi(QWidget *DeployClass)
    {
        DeployClass->setWindowTitle(QApplication::translate("DeployClass", "Deploy", 0, QApplication::UnicodeUTF8));
        pushButton_deployornot->setText(QApplication::translate("DeployClass", "Guard/Unguard", 0, QApplication::UnicodeUTF8));
        pushButton_exit->setText(QApplication::translate("DeployClass", "Exit", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("DeployClass", "Device tree", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DeployClass: public Ui_DeployClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEPLOY_H
