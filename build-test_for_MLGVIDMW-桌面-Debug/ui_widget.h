/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

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
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *pushButton_initial;
    QComboBox *comboBox_pick;
    QPushButton *pushButton_ok;
    QPushButton *pushButton_exit;
    QPushButton *pushButton_open;
    QPushButton *pushButton_close;
    QFrame *line_up;
    QFrame *line_down;
    QPushButton *pushButton_disoverlap;
    QPushButton *pushButton_overlap;
    QComboBox *comboBox_item;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *lineEdit_channel;
    QLineEdit *lineEdit_prarm1;
    QLineEdit *lineEdit_param2;
    QLineEdit *lineEdit_param3;
    QLineEdit *lineEdit_param4;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(180, 520);
        Widget->setMinimumSize(QSize(180, 520));
        Widget->setMaximumSize(QSize(180, 520));
        pushButton_initial = new QPushButton(Widget);
        pushButton_initial->setObjectName(QString::fromUtf8("pushButton_initial"));
        pushButton_initial->setGeometry(QRect(10, 20, 160, 40));
        QFont font;
        font.setPointSize(9);
        pushButton_initial->setFont(font);
        pushButton_initial->setAutoDefault(false);
        pushButton_initial->setDefault(false);
        pushButton_initial->setFlat(false);
        comboBox_pick = new QComboBox(Widget);
        comboBox_pick->setObjectName(QString::fromUtf8("comboBox_pick"));
        comboBox_pick->setGeometry(QRect(10, 80, 160, 20));
        comboBox_pick->setMinimumSize(QSize(160, 0));
        comboBox_pick->setMaxVisibleItems(20);
        pushButton_ok = new QPushButton(Widget);
        pushButton_ok->setObjectName(QString::fromUtf8("pushButton_ok"));
        pushButton_ok->setGeometry(QRect(10, 480, 70, 25));
        pushButton_exit = new QPushButton(Widget);
        pushButton_exit->setObjectName(QString::fromUtf8("pushButton_exit"));
        pushButton_exit->setGeometry(QRect(100, 480, 70, 25));
        pushButton_open = new QPushButton(Widget);
        pushButton_open->setObjectName(QString::fromUtf8("pushButton_open"));
        pushButton_open->setGeometry(QRect(10, 120, 70, 25));
        pushButton_close = new QPushButton(Widget);
        pushButton_close->setObjectName(QString::fromUtf8("pushButton_close"));
        pushButton_close->setGeometry(QRect(100, 120, 70, 25));
        line_up = new QFrame(Widget);
        line_up->setObjectName(QString::fromUtf8("line_up"));
        line_up->setGeometry(QRect(0, 155, 171, 16));
        line_up->setFrameShadow(QFrame::Sunken);
        line_up->setLineWidth(2);
        line_up->setFrameShape(QFrame::HLine);
        line_down = new QFrame(Widget);
        line_down->setObjectName(QString::fromUtf8("line_down"));
        line_down->setGeometry(QRect(0, 220, 171, 16));
        line_down->setLineWidth(2);
        line_down->setFrameShape(QFrame::HLine);
        line_down->setFrameShadow(QFrame::Sunken);
        pushButton_disoverlap = new QPushButton(Widget);
        pushButton_disoverlap->setObjectName(QString::fromUtf8("pushButton_disoverlap"));
        pushButton_disoverlap->setGeometry(QRect(100, 180, 70, 25));
        pushButton_overlap = new QPushButton(Widget);
        pushButton_overlap->setObjectName(QString::fromUtf8("pushButton_overlap"));
        pushButton_overlap->setGeometry(QRect(10, 180, 70, 25));
        comboBox_item = new QComboBox(Widget);
        comboBox_item->setObjectName(QString::fromUtf8("comboBox_item"));
        comboBox_item->setGeometry(QRect(10, 260, 160, 20));
        comboBox_item->setMaxVisibleItems(20);
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 310, 50, 20));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 340, 50, 20));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_3 = new QLabel(Widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 370, 50, 20));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_4 = new QLabel(Widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 400, 50, 20));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_5 = new QLabel(Widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 430, 50, 20));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_channel = new QLineEdit(Widget);
        lineEdit_channel->setObjectName(QString::fromUtf8("lineEdit_channel"));
        lineEdit_channel->setGeometry(QRect(70, 310, 90, 20));
        lineEdit_prarm1 = new QLineEdit(Widget);
        lineEdit_prarm1->setObjectName(QString::fromUtf8("lineEdit_prarm1"));
        lineEdit_prarm1->setGeometry(QRect(70, 340, 90, 20));
        lineEdit_param2 = new QLineEdit(Widget);
        lineEdit_param2->setObjectName(QString::fromUtf8("lineEdit_param2"));
        lineEdit_param2->setGeometry(QRect(70, 370, 90, 20));
        lineEdit_param3 = new QLineEdit(Widget);
        lineEdit_param3->setObjectName(QString::fromUtf8("lineEdit_param3"));
        lineEdit_param3->setGeometry(QRect(70, 400, 90, 20));
        lineEdit_param4 = new QLineEdit(Widget);
        lineEdit_param4->setObjectName(QString::fromUtf8("lineEdit_param4"));
        lineEdit_param4->setGeometry(QRect(70, 430, 90, 20));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0, QApplication::UnicodeUTF8));
        pushButton_initial->setText(QApplication::translate("Widget", "\344\270\255\351\227\264\344\273\266\345\210\235\345\247\213\345\214\226", 0, QApplication::UnicodeUTF8));
        comboBox_pick->clear();
        comboBox_pick->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("Widget", "\345\205\250\351\203\250\351\233\267\350\276\276\345\222\214\347\224\265\350\247\206", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Widget", "\344\270\244\350\267\257\351\233\267\350\276\276", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Widget", "\344\270\244\350\267\257\347\224\265\350\247\206", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Widget", "----------------", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Widget", "\351\233\267\350\276\2761 \345\205\250\351\203\250\347\252\227\345\217\243", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Widget", "\351\233\267\350\276\2761 PPI", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Widget", "\351\233\267\350\276\2761 MINI", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Widget", "\351\233\267\350\276\2761 AR", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Widget", "----------------", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Widget", "\351\233\267\350\276\2762 \345\205\250\351\203\250\347\252\227\345\217\243", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Widget", "\351\233\267\350\276\2762 PPI", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Widget", "\351\233\267\350\276\2762 MINI", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Widget", "\351\233\267\350\276\2762 AR", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Widget", "----------------", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Widget", "\347\224\265\350\247\2061", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Widget", "\347\224\265\350\247\2062", 0, QApplication::UnicodeUTF8)
        );
        pushButton_ok->setText(QApplication::translate("Widget", "\347\241\256\345\256\232", 0, QApplication::UnicodeUTF8));
        pushButton_exit->setText(QApplication::translate("Widget", "\351\200\200\345\207\272", 0, QApplication::UnicodeUTF8));
        pushButton_open->setText(QApplication::translate("Widget", "\346\211\223\345\274\200", 0, QApplication::UnicodeUTF8));
        pushButton_close->setText(QApplication::translate("Widget", "\345\205\263\351\227\255", 0, QApplication::UnicodeUTF8));
        pushButton_disoverlap->setText(QApplication::translate("Widget", "\345\217\226\346\266\210", 0, QApplication::UnicodeUTF8));
        pushButton_overlap->setText(QApplication::translate("Widget", "\345\217\240\345\212\240", 0, QApplication::UnicodeUTF8));
        comboBox_item->clear();
        comboBox_item->insertItems(0, QStringList()
         << QApplication::translate("Widget", "\346\211\223\345\274\200PPI\350\247\206\351\242\221\347\252\227\345\217\243", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Widget", "\345\205\263\351\227\255PPI\350\247\206\351\242\221\347\252\227\345\217\243", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Widget", "\350\256\276\347\275\256PPI\347\252\227\345\217\243\344\275\215\347\275\256", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Widget", "\350\256\276\347\275\256PPI\347\252\227\345\217\243\345\260\272\345\257\270", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Widget", "\350\256\276\347\275\256PPI\346\230\276\347\244\272\346\250\241\345\274\217", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Widget", "\350\256\276\347\275\256PPI\346\230\276\347\244\272\344\270\255\345\277\203", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Widget", "\350\256\276\347\275\256PPI\350\210\260\350\211\217\346\226\271\344\275\215", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Widget", "\350\256\276\347\275\256PPI\350\247\206\351\242\221\351\242\234\350\211\262", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Widget", "\350\256\276\347\275\256PPI\346\211\253\346\217\217\347\272\277\346\230\257\345\220\246\346\230\276\347\244\272", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Widget", "\350\256\276\347\275\256PPI\346\211\253\346\217\217\347\272\277\351\242\234\350\211\262", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Widget", "\345\206\273\347\273\223/\350\247\243\345\206\273PPI\350\247\206\351\242\221", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Widget", "\350\256\276\347\275\256PPI\351\207\217\347\250\213", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Widget", "\350\256\276\347\275\256PPI\345\274\200\345\205\263\345\200\274", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Widget", "\350\256\276\347\275\256PPI\351\227\250\351\231\220", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Widget", "\350\256\276\347\275\256PPI\344\275\231\346\231\226\346\227\266\351\227\264", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Widget", "\350\256\276\347\275\256PPI\345\260\276\350\277\271\345\274\200\345\205\263", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Widget", "\350\256\276\347\275\256PPI\345\260\276\350\277\271\351\242\234\350\211\262", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Widget", "\350\256\276\347\275\256PPI\345\260\276\350\277\271\351\227\250\351\231\220", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Widget", "\350\256\276\347\275\256PPI\345\260\276\350\277\271\344\277\235\347\225\231\346\227\266\351\227\264", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Widget", "\350\256\276\347\275\256\344\270\244\350\267\257PPI\345\220\214\347\252\227\345\217\243", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Widget", "\350\256\276\347\275\256PPI\351\242\234\350\211\262\346\237\245\346\211\276\350\241\250", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Widget", "PPI\346\230\276\347\244\272\345\214\272\346\270\205\345\261\217", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Widget", "\350\256\276\347\275\256\347\234\237\350\277\220\345\212\250/\347\233\270\345\257\271\350\277\220\345\212\250", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Widget", "\346\211\223\345\274\200AR\347\252\227\345\217\243", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Widget", "\345\205\263\351\227\255AR\347\252\227\345\217\243", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Widget", "\350\256\276\347\275\256AR\347\252\227\345\217\243\344\275\215\347\275\256", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Widget", "\350\256\276\347\275\256AR\347\252\227\345\217\243\345\260\272\345\257\270", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Widget", "\350\256\276\347\275\256AR\351\227\250\351\231\220", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Widget", "\350\256\276\347\275\256AR\351\207\217\347\250\213", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Widget", "\350\256\276\347\275\256AR\351\242\234\350\211\262", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Widget", "\350\256\276\347\275\256AR\344\275\231\346\231\226\346\227\266\351\227\264", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Widget", "\350\256\276\347\275\256AR\350\203\214\346\231\257\351\242\234\350\211\262", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Widget", "\346\211\223\345\274\200MINI\347\252\227\345\217\243", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Widget", "\345\205\263\351\227\255MINI\347\252\227\345\217\243", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Widget", "\350\256\276\347\275\256MINI\347\252\227\345\217\243\344\275\215\347\275\256", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Widget", "\350\256\276\347\275\256MINI\347\252\227\345\217\243\345\260\272\345\257\270", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Widget", "\350\256\276\347\275\256MINI\347\252\227\345\217\243\346\230\276\347\244\272\346\250\241\345\274\217", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Widget", "\350\256\276\347\275\256MINI\347\252\227\345\217\243\351\242\234\350\211\262", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Widget", "\350\256\276\347\275\256MINI\347\252\227\345\217\243\350\267\235\347\246\273\346\226\271\344\275\215", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Widget", "\350\256\276\347\275\256MINI\347\252\227\345\217\243\346\224\276\345\244\247\345\200\215\346\225\260", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Widget", "\350\256\276\347\275\256MINI\347\252\227\345\217\243\351\242\234\350\211\262\346\237\245\346\211\276\350\241\250", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Widget", "\350\256\276\347\275\256\351\233\267\350\276\276\346\211\253\346\217\217\346\250\241\345\274\217", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Widget", "\345\206\205\351\203\250\351\233\267\350\276\276\346\225\260\346\215\256\351\200\201\346\230\276", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Widget", "\346\211\223\345\274\200\347\224\265\350\247\206", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Widget", "\345\205\263\351\227\255\347\224\265\350\247\206", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Widget", "\350\256\276\347\275\256\347\224\265\350\247\206\347\252\227\345\217\243\344\275\215\347\275\256", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Widget", "\350\256\276\347\275\256\347\224\265\350\247\206\347\252\227\345\217\243\345\244\247\345\260\217", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Widget", "\345\206\273\347\273\223/\350\247\243\345\206\273\347\224\265\350\247\206", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Widget", "\350\256\276\347\275\256\347\224\265\350\247\206\344\272\256\345\272\246", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Widget", "\350\256\276\347\275\256\347\224\265\350\247\206\345\257\271\346\257\224\345\272\246", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Widget", "\350\256\276\347\275\256\347\224\265\350\247\206\351\245\261\345\222\214\345\272\246", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Widget", "PPI/MINI\345\233\276\345\261\202\351\242\234\350\211\262\346\216\247\345\210\266", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Widget", "AR/TV\345\233\276\345\261\202\351\242\234\350\211\262\346\216\247\345\210\266", 0, QApplication::UnicodeUTF8)
        );
        label->setText(QApplication::translate("Widget", "channel", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Widget", "param1", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Widget", "param2", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Widget", "param3", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("Widget", "param4", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
