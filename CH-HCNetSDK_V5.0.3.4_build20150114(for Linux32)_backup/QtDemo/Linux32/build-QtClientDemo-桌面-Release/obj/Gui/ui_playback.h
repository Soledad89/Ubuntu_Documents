/********************************************************************************
** Form generated from reading UI file 'playback.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLAYBACK_H
#define UI_PLAYBACK_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDateTimeEdit>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QTabWidget>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PlayBackClass
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QLineEdit *lineEdit_1_downfilename;
    QFrame *line_10;
    QLineEdit *lineEdit_1_cardSID;
    QPushButton *pushButton_playback_start_1;
    QDateTimeEdit *dateTimeEdit_1_start;
    QLabel *label_5;
    QPushButton *pushButton_playback_picture_1;
    QPushButton *pushButton_playback_stop_1;
    QLabel *label_6;
    QTableWidget *tableWidget_1_filelist;
    QComboBox *comboBox_1_fileattr;
    QLabel *label_4;
    QDateTimeEdit *dateTimeEdit_1_stop;
    QFrame *line_7;
    QPushButton *pushButton_playback_frame_1;
    QSlider *horizontalSlider_1_playbackprocess;
    QFrame *line_8;
    QCheckBox *checkBox_1_carno;
    QPushButton *pushButton_1_download;
    QLabel *label_10;
    QFrame *line_6;
    QFrame *line_12;
    QLineEdit *lineEdit_1_filetotalsize;
    QSlider *horizontalSlider_playback_volume_1;
    QPushButton *pushButton_1_lock;
    QFrame *line_9;
    QFrame *line_13;
    QLabel *label;
    QLineEdit *lineEdit_1_downoffset;
    QLabel *label_3;
    QPushButton *pushButton_playback_fast_1;
    QPushButton *pushButton_1_search;
    QPushButton *pushButton_1_downsave;
    QLabel *label_2;
    QPushButton *pushButton_playback_pos_1;
    QLabel *label_7;
    QComboBox *comboBox_1_filetype;
    QPushButton *pushButton_1_downstopsave;
    QPushButton *pushButton_playback_slow_1;
    QFrame *line;
    QFrame *frame;
    QWidget *verticalLayout;
    QVBoxLayout *vboxLayout;
    QLineEdit *lineEdit_1_pbprocess;
    QPushButton *pushButton_playback_volume_1;
    QWidget *tab_2;
    QFrame *line_23;
    QLabel *label_9;
    QPushButton *pushButton_playback_frame_2;
    QFrame *line_67;
    QPushButton *pushButton_2_del;
    QPushButton *pushButton_playback_fast_2;
    QFrame *line_14;
    QFrame *line_16;
    QDateTimeEdit *dateTimeEdit_2_start;
    QFrame *line_64;
    QPushButton *pushButton_2_delall;
    QDateTimeEdit *dateTimeEdit_2_stop;
    QPushButton *pushButton_playback_slow_2;
    QPushButton *pushButton_playback_picture_2;
    QLabel *label_8;
    QPushButton *pushButton_playback_pos_2;
    QFrame *line_15;
    QComboBox *comboBox_2_filetype;
    QCheckBox *checkBox_2_all;
    QPushButton *pushButton_2_search;
    QLabel *label_11;
    QPushButton *pushButton_playback_start_2;
    QFrame *line_66;
    QSlider *horizontalSlider_playback_process_2;
    QTableWidget *tableWidget_2_localfilist;
    QSlider *horizontalSlider_playback_volume_2;
    QFrame *line_65;
    QPushButton *pushButton_playback_stop_2;
    QFrame *frame_2;
    QWidget *verticalLayout_2;
    QVBoxLayout *vboxLayout1;
    QLineEdit *lineEdit_2_pbprocess;
    QPushButton *pushButton_playback_volume_2;
    QWidget *tab_3;
    QDateTimeEdit *dateTimeEdit_3_stop;
    QPushButton *pushButton_3_download;
    QLabel *label_64;
    QSlider *horizontalSlider_playback_volume_3;
    QLabel *label_65;
    QPushButton *pushButton_playback_fast_3;
    QPushButton *pushButton_3_save;
    QDateTimeEdit *dateTimeEdit_3_start;
    QPushButton *pushButton_playback_pos_3;
    QPushButton *pushButton_playback_slow_3;
    QFrame *line_24;
    QFrame *line_17;
    QPushButton *pushButton_playback_picture_3;
    QPushButton *pushButton_playback_start_3;
    QPushButton *pushButton_playback_stop_3;
    QPushButton *pushButton_playback_frame_3;
    QFrame *line_18;
    QFrame *line_19;
    QFrame *frame_3;
    QWidget *verticalLayout_3;
    QVBoxLayout *vboxLayout2;
    QPushButton *pushButton_playback_volume_3;
    QFrame *line_3;
    QFrame *line_4;
    QFrame *line_5;
    QFrame *line_2;

    void setupUi(QWidget *PlayBackClass)
    {
        if (PlayBackClass->objectName().isEmpty())
            PlayBackClass->setObjectName(QString::fromUtf8("PlayBackClass"));
        PlayBackClass->resize(902, 663);
        tabWidget = new QTabWidget(PlayBackClass);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(20, 10, 851, 641));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        lineEdit_1_downfilename = new QLineEdit(tab);
        lineEdit_1_downfilename->setObjectName(QString::fromUtf8("lineEdit_1_downfilename"));
        lineEdit_1_downfilename->setGeometry(QRect(380, 580, 191, 20));
        line_10 = new QFrame(tab);
        line_10->setObjectName(QString::fromUtf8("line_10"));
        line_10->setGeometry(QRect(10, 530, 321, 16));
        line_10->setFrameShape(QFrame::HLine);
        line_10->setFrameShadow(QFrame::Sunken);
        lineEdit_1_cardSID = new QLineEdit(tab);
        lineEdit_1_cardSID->setObjectName(QString::fromUtf8("lineEdit_1_cardSID"));
        lineEdit_1_cardSID->setGeometry(QRect(400, 50, 231, 20));
        pushButton_playback_start_1 = new QPushButton(tab);
        pushButton_playback_start_1->setObjectName(QString::fromUtf8("pushButton_playback_start_1"));
        pushButton_playback_start_1->setGeometry(QRect(350, 550, 37, 23));
        pushButton_playback_start_1->setMaximumSize(QSize(37, 23));
        dateTimeEdit_1_start = new QDateTimeEdit(tab);
        dateTimeEdit_1_start->setObjectName(QString::fromUtf8("dateTimeEdit_1_start"));
        dateTimeEdit_1_start->setGeometry(QRect(380, 20, 131, 22));
        label_5 = new QLabel(tab);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(350, 50, 41, 20));
        pushButton_playback_picture_1 = new QPushButton(tab);
        pushButton_playback_picture_1->setObjectName(QString::fromUtf8("pushButton_playback_picture_1"));
        pushButton_playback_picture_1->setGeometry(QRect(510, 550, 41, 23));
        pushButton_playback_picture_1->setMaximumSize(QSize(41, 23));
        pushButton_playback_stop_1 = new QPushButton(tab);
        pushButton_playback_stop_1->setObjectName(QString::fromUtf8("pushButton_playback_stop_1"));
        pushButton_playback_stop_1->setGeometry(QRect(390, 550, 40, 23));
        pushButton_playback_stop_1->setMaximumSize(QSize(40, 23));
        label_6 = new QLabel(tab);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 580, 81, 16));
        tableWidget_1_filelist = new QTableWidget(tab);
        if (tableWidget_1_filelist->columnCount() < 5)
            tableWidget_1_filelist->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_1_filelist->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_1_filelist->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_1_filelist->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_1_filelist->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_1_filelist->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tableWidget_1_filelist->setObjectName(QString::fromUtf8("tableWidget_1_filelist"));
        tableWidget_1_filelist->setGeometry(QRect(10, 91, 321, 411));
        comboBox_1_fileattr = new QComboBox(tab);
        comboBox_1_fileattr->setObjectName(QString::fromUtf8("comboBox_1_fileattr"));
        comboBox_1_fileattr->setGeometry(QRect(130, 50, 91, 22));
        label_4 = new QLabel(tab);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 550, 81, 21));
        dateTimeEdit_1_stop = new QDateTimeEdit(tab);
        dateTimeEdit_1_stop->setObjectName(QString::fromUtf8("dateTimeEdit_1_stop"));
        dateTimeEdit_1_stop->setGeometry(QRect(610, 20, 131, 22));
        line_7 = new QFrame(tab);
        line_7->setObjectName(QString::fromUtf8("line_7"));
        line_7->setGeometry(QRect(10, 0, 821, 20));
        line_7->setFrameShape(QFrame::HLine);
        line_7->setFrameShadow(QFrame::Sunken);
        pushButton_playback_frame_1 = new QPushButton(tab);
        pushButton_playback_frame_1->setObjectName(QString::fromUtf8("pushButton_playback_frame_1"));
        pushButton_playback_frame_1->setGeometry(QRect(590, 550, 41, 23));
        pushButton_playback_frame_1->setMaximumSize(QSize(41, 23));
        horizontalSlider_1_playbackprocess = new QSlider(tab);
        horizontalSlider_1_playbackprocess->setObjectName(QString::fromUtf8("horizontalSlider_1_playbackprocess"));
        horizontalSlider_1_playbackprocess->setGeometry(QRect(360, 520, 461, 21));
        horizontalSlider_1_playbackprocess->setOrientation(Qt::Horizontal);
        line_8 = new QFrame(tab);
        line_8->setObjectName(QString::fromUtf8("line_8"));
        line_8->setGeometry(QRect(0, 10, 20, 71));
        line_8->setFrameShape(QFrame::VLine);
        line_8->setFrameShadow(QFrame::Sunken);
        checkBox_1_carno = new QCheckBox(tab);
        checkBox_1_carno->setObjectName(QString::fromUtf8("checkBox_1_carno"));
        checkBox_1_carno->setGeometry(QRect(240, 50, 81, 17));
        pushButton_1_download = new QPushButton(tab);
        pushButton_1_download->setObjectName(QString::fromUtf8("pushButton_1_download"));
        pushButton_1_download->setGeometry(QRect(130, 510, 75, 21));
        label_10 = new QLabel(tab);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(260, 580, 111, 21));
        line_6 = new QFrame(tab);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setGeometry(QRect(10, 70, 821, 20));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);
        line_12 = new QFrame(tab);
        line_12->setObjectName(QString::fromUtf8("line_12"));
        line_12->setGeometry(QRect(820, 10, 16, 71));
        line_12->setFrameShape(QFrame::VLine);
        line_12->setFrameShadow(QFrame::Sunken);
        lineEdit_1_filetotalsize = new QLineEdit(tab);
        lineEdit_1_filetotalsize->setObjectName(QString::fromUtf8("lineEdit_1_filetotalsize"));
        lineEdit_1_filetotalsize->setGeometry(QRect(90, 550, 101, 20));
        horizontalSlider_playback_volume_1 = new QSlider(tab);
        horizontalSlider_playback_volume_1->setObjectName(QString::fromUtf8("horizontalSlider_playback_volume_1"));
        horizontalSlider_playback_volume_1->setGeometry(QRect(720, 550, 111, 21));
        horizontalSlider_playback_volume_1->setMinimumSize(QSize(111, 21));
        horizontalSlider_playback_volume_1->setOrientation(Qt::Horizontal);
        pushButton_1_lock = new QPushButton(tab);
        pushButton_1_lock->setObjectName(QString::fromUtf8("pushButton_1_lock"));
        pushButton_1_lock->setGeometry(QRect(240, 510, 75, 21));
        line_9 = new QFrame(tab);
        line_9->setObjectName(QString::fromUtf8("line_9"));
        line_9->setGeometry(QRect(0, 510, 20, 31));
        line_9->setFrameShape(QFrame::VLine);
        line_9->setFrameShadow(QFrame::Sunken);
        line_13 = new QFrame(tab);
        line_13->setObjectName(QString::fromUtf8("line_13"));
        line_13->setGeometry(QRect(10, 500, 321, 16));
        line_13->setFrameShape(QFrame::HLine);
        line_13->setFrameShadow(QFrame::Sunken);
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(53, 50, 71, 21));
        lineEdit_1_downoffset = new QLineEdit(tab);
        lineEdit_1_downoffset->setObjectName(QString::fromUtf8("lineEdit_1_downoffset"));
        lineEdit_1_downoffset->setGeometry(QRect(90, 580, 161, 20));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(560, 21, 41, 20));
        pushButton_playback_fast_1 = new QPushButton(tab);
        pushButton_playback_fast_1->setObjectName(QString::fromUtf8("pushButton_playback_fast_1"));
        pushButton_playback_fast_1->setGeometry(QRect(470, 550, 40, 23));
        pushButton_playback_fast_1->setMaximumSize(QSize(40, 23));
        pushButton_1_search = new QPushButton(tab);
        pushButton_1_search->setObjectName(QString::fromUtf8("pushButton_1_search"));
        pushButton_1_search->setGeometry(QRect(20, 510, 75, 21));
        pushButton_1_downsave = new QPushButton(tab);
        pushButton_1_downsave->setObjectName(QString::fromUtf8("pushButton_1_downsave"));
        pushButton_1_downsave->setGeometry(QRect(200, 550, 61, 20));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(53, 20, 71, 21));
        pushButton_playback_pos_1 = new QPushButton(tab);
        pushButton_playback_pos_1->setObjectName(QString::fromUtf8("pushButton_playback_pos_1"));
        pushButton_playback_pos_1->setGeometry(QRect(550, 550, 40, 23));
        pushButton_playback_pos_1->setMaximumSize(QSize(40, 23));
        label_7 = new QLabel(tab);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(330, 21, 41, 20));
        comboBox_1_filetype = new QComboBox(tab);
        comboBox_1_filetype->setObjectName(QString::fromUtf8("comboBox_1_filetype"));
        comboBox_1_filetype->setGeometry(QRect(130, 20, 151, 21));
        pushButton_1_downstopsave = new QPushButton(tab);
        pushButton_1_downstopsave->setObjectName(QString::fromUtf8("pushButton_1_downstopsave"));
        pushButton_1_downstopsave->setGeometry(QRect(270, 550, 71, 23));
        pushButton_playback_slow_1 = new QPushButton(tab);
        pushButton_playback_slow_1->setObjectName(QString::fromUtf8("pushButton_playback_slow_1"));
        pushButton_playback_slow_1->setGeometry(QRect(430, 550, 41, 23));
        pushButton_playback_slow_1->setMaximumSize(QSize(41, 23));
        line = new QFrame(tab);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(320, 510, 16, 31));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        frame = new QFrame(tab);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(340, 90, 491, 421));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QWidget(frame);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setGeometry(QRect(10, 10, 471, 401));
        vboxLayout = new QVBoxLayout(verticalLayout);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(11, 11, 11, 11);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit_1_pbprocess = new QLineEdit(tab);
        lineEdit_1_pbprocess->setObjectName(QString::fromUtf8("lineEdit_1_pbprocess"));
        lineEdit_1_pbprocess->setGeometry(QRect(580, 580, 241, 20));
        pushButton_playback_volume_1 = new QPushButton(tab);
        pushButton_playback_volume_1->setObjectName(QString::fromUtf8("pushButton_playback_volume_1"));
        pushButton_playback_volume_1->setGeometry(QRect(640, 550, 81, 23));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        line_23 = new QFrame(tab_2);
        line_23->setObjectName(QString::fromUtf8("line_23"));
        line_23->setGeometry(QRect(830, 10, 20, 51));
        line_23->setFrameShape(QFrame::VLine);
        line_23->setFrameShadow(QFrame::Sunken);
        label_9 = new QLabel(tab_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(120, 20, 54, 21));
        pushButton_playback_frame_2 = new QPushButton(tab_2);
        pushButton_playback_frame_2->setObjectName(QString::fromUtf8("pushButton_playback_frame_2"));
        pushButton_playback_frame_2->setGeometry(QRect(610, 560, 41, 23));
        pushButton_playback_frame_2->setMaximumSize(QSize(41, 23));
        line_67 = new QFrame(tab_2);
        line_67->setObjectName(QString::fromUtf8("line_67"));
        line_67->setGeometry(QRect(340, 550, 20, 31));
        line_67->setFrameShape(QFrame::VLine);
        line_67->setFrameShadow(QFrame::Sunken);
        pushButton_2_del = new QPushButton(tab_2);
        pushButton_2_del->setObjectName(QString::fromUtf8("pushButton_2_del"));
        pushButton_2_del->setGeometry(QRect(140, 550, 75, 23));
        pushButton_playback_fast_2 = new QPushButton(tab_2);
        pushButton_playback_fast_2->setObjectName(QString::fromUtf8("pushButton_playback_fast_2"));
        pushButton_playback_fast_2->setGeometry(QRect(490, 560, 40, 23));
        pushButton_playback_fast_2->setMaximumSize(QSize(40, 23));
        line_14 = new QFrame(tab_2);
        line_14->setObjectName(QString::fromUtf8("line_14"));
        line_14->setGeometry(QRect(10, 50, 831, 20));
        line_14->setFrameShape(QFrame::HLine);
        line_14->setFrameShadow(QFrame::Sunken);
        line_16 = new QFrame(tab_2);
        line_16->setObjectName(QString::fromUtf8("line_16"));
        line_16->setGeometry(QRect(10, 0, 831, 20));
        line_16->setFrameShape(QFrame::HLine);
        line_16->setFrameShadow(QFrame::Sunken);
        dateTimeEdit_2_start = new QDateTimeEdit(tab_2);
        dateTimeEdit_2_start->setObjectName(QString::fromUtf8("dateTimeEdit_2_start"));
        dateTimeEdit_2_start->setGeometry(QRect(420, 20, 141, 22));
        line_64 = new QFrame(tab_2);
        line_64->setObjectName(QString::fromUtf8("line_64"));
        line_64->setGeometry(QRect(10, 540, 341, 20));
        line_64->setFrameShape(QFrame::HLine);
        line_64->setFrameShadow(QFrame::Sunken);
        pushButton_2_delall = new QPushButton(tab_2);
        pushButton_2_delall->setObjectName(QString::fromUtf8("pushButton_2_delall"));
        pushButton_2_delall->setGeometry(QRect(250, 550, 75, 23));
        dateTimeEdit_2_stop = new QDateTimeEdit(tab_2);
        dateTimeEdit_2_stop->setObjectName(QString::fromUtf8("dateTimeEdit_2_stop"));
        dateTimeEdit_2_stop->setGeometry(QRect(660, 20, 151, 22));
        pushButton_playback_slow_2 = new QPushButton(tab_2);
        pushButton_playback_slow_2->setObjectName(QString::fromUtf8("pushButton_playback_slow_2"));
        pushButton_playback_slow_2->setGeometry(QRect(450, 560, 41, 23));
        pushButton_playback_slow_2->setMaximumSize(QSize(41, 23));
        pushButton_playback_picture_2 = new QPushButton(tab_2);
        pushButton_playback_picture_2->setObjectName(QString::fromUtf8("pushButton_playback_picture_2"));
        pushButton_playback_picture_2->setGeometry(QRect(530, 560, 41, 23));
        pushButton_playback_picture_2->setMaximumSize(QSize(41, 23));
        label_8 = new QLabel(tab_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(360, 20, 54, 21));
        pushButton_playback_pos_2 = new QPushButton(tab_2);
        pushButton_playback_pos_2->setObjectName(QString::fromUtf8("pushButton_playback_pos_2"));
        pushButton_playback_pos_2->setGeometry(QRect(570, 560, 40, 23));
        pushButton_playback_pos_2->setMaximumSize(QSize(40, 23));
        line_15 = new QFrame(tab_2);
        line_15->setObjectName(QString::fromUtf8("line_15"));
        line_15->setGeometry(QRect(0, 10, 20, 51));
        line_15->setFrameShape(QFrame::VLine);
        line_15->setFrameShadow(QFrame::Sunken);
        comboBox_2_filetype = new QComboBox(tab_2);
        comboBox_2_filetype->setObjectName(QString::fromUtf8("comboBox_2_filetype"));
        comboBox_2_filetype->setGeometry(QRect(190, 20, 121, 21));
        checkBox_2_all = new QCheckBox(tab_2);
        checkBox_2_all->setObjectName(QString::fromUtf8("checkBox_2_all"));
        checkBox_2_all->setGeometry(QRect(40, 20, 51, 21));
        pushButton_2_search = new QPushButton(tab_2);
        pushButton_2_search->setObjectName(QString::fromUtf8("pushButton_2_search"));
        pushButton_2_search->setGeometry(QRect(30, 550, 75, 23));
        label_11 = new QLabel(tab_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(590, 20, 54, 21));
        pushButton_playback_start_2 = new QPushButton(tab_2);
        pushButton_playback_start_2->setObjectName(QString::fromUtf8("pushButton_playback_start_2"));
        pushButton_playback_start_2->setGeometry(QRect(370, 560, 37, 23));
        pushButton_playback_start_2->setMaximumSize(QSize(37, 23));
        line_66 = new QFrame(tab_2);
        line_66->setObjectName(QString::fromUtf8("line_66"));
        line_66->setGeometry(QRect(0, 550, 20, 31));
        line_66->setFrameShape(QFrame::VLine);
        line_66->setFrameShadow(QFrame::Sunken);
        horizontalSlider_playback_process_2 = new QSlider(tab_2);
        horizontalSlider_playback_process_2->setObjectName(QString::fromUtf8("horizontalSlider_playback_process_2"));
        horizontalSlider_playback_process_2->setGeometry(QRect(360, 540, 481, 21));
        horizontalSlider_playback_process_2->setOrientation(Qt::Horizontal);
        tableWidget_2_localfilist = new QTableWidget(tab_2);
        if (tableWidget_2_localfilist->columnCount() < 5)
            tableWidget_2_localfilist->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_2_localfilist->setHorizontalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget_2_localfilist->setHorizontalHeaderItem(1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget_2_localfilist->setHorizontalHeaderItem(2, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget_2_localfilist->setHorizontalHeaderItem(3, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget_2_localfilist->setHorizontalHeaderItem(4, __qtablewidgetitem9);
        tableWidget_2_localfilist->setObjectName(QString::fromUtf8("tableWidget_2_localfilist"));
        tableWidget_2_localfilist->setGeometry(QRect(10, 70, 341, 471));
        horizontalSlider_playback_volume_2 = new QSlider(tab_2);
        horizontalSlider_playback_volume_2->setObjectName(QString::fromUtf8("horizontalSlider_playback_volume_2"));
        horizontalSlider_playback_volume_2->setGeometry(QRect(730, 560, 111, 21));
        horizontalSlider_playback_volume_2->setMinimumSize(QSize(111, 21));
        horizontalSlider_playback_volume_2->setOrientation(Qt::Horizontal);
        line_65 = new QFrame(tab_2);
        line_65->setObjectName(QString::fromUtf8("line_65"));
        line_65->setGeometry(QRect(10, 570, 341, 20));
        line_65->setFrameShape(QFrame::HLine);
        line_65->setFrameShadow(QFrame::Sunken);
        pushButton_playback_stop_2 = new QPushButton(tab_2);
        pushButton_playback_stop_2->setObjectName(QString::fromUtf8("pushButton_playback_stop_2"));
        pushButton_playback_stop_2->setGeometry(QRect(410, 560, 40, 23));
        pushButton_playback_stop_2->setMaximumSize(QSize(40, 23));
        frame_2 = new QFrame(tab_2);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(360, 70, 481, 461));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QWidget(frame_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setGeometry(QRect(10, 10, 461, 441));
        vboxLayout1 = new QVBoxLayout(verticalLayout_2);
        vboxLayout1->setSpacing(6);
        vboxLayout1->setContentsMargins(11, 11, 11, 11);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        vboxLayout1->setContentsMargins(0, 0, 0, 0);
        lineEdit_2_pbprocess = new QLineEdit(tab_2);
        lineEdit_2_pbprocess->setObjectName(QString::fromUtf8("lineEdit_2_pbprocess"));
        lineEdit_2_pbprocess->setGeometry(QRect(370, 590, 471, 20));
        pushButton_playback_volume_2 = new QPushButton(tab_2);
        pushButton_playback_volume_2->setObjectName(QString::fromUtf8("pushButton_playback_volume_2"));
        pushButton_playback_volume_2->setGeometry(QRect(650, 560, 75, 23));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        dateTimeEdit_3_stop = new QDateTimeEdit(tab_3);
        dateTimeEdit_3_stop->setObjectName(QString::fromUtf8("dateTimeEdit_3_stop"));
        dateTimeEdit_3_stop->setGeometry(QRect(380, 21, 131, 21));
        pushButton_3_download = new QPushButton(tab_3);
        pushButton_3_download->setObjectName(QString::fromUtf8("pushButton_3_download"));
        pushButton_3_download->setGeometry(QRect(650, 130, 71, 31));
        label_64 = new QLabel(tab_3);
        label_64->setObjectName(QString::fromUtf8("label_64"));
        label_64->setGeometry(QRect(290, 20, 54, 21));
        horizontalSlider_playback_volume_3 = new QSlider(tab_3);
        horizontalSlider_playback_volume_3->setObjectName(QString::fromUtf8("horizontalSlider_playback_volume_3"));
        horizontalSlider_playback_volume_3->setGeometry(QRect(450, 570, 161, 21));
        horizontalSlider_playback_volume_3->setMinimumSize(QSize(111, 21));
        horizontalSlider_playback_volume_3->setOrientation(Qt::Horizontal);
        label_65 = new QLabel(tab_3);
        label_65->setObjectName(QString::fromUtf8("label_65"));
        label_65->setGeometry(QRect(50, 20, 54, 21));
        pushButton_playback_fast_3 = new QPushButton(tab_3);
        pushButton_playback_fast_3->setObjectName(QString::fromUtf8("pushButton_playback_fast_3"));
        pushButton_playback_fast_3->setGeometry(QRect(180, 570, 40, 23));
        pushButton_playback_fast_3->setMaximumSize(QSize(40, 23));
        pushButton_3_save = new QPushButton(tab_3);
        pushButton_3_save->setObjectName(QString::fromUtf8("pushButton_3_save"));
        pushButton_3_save->setGeometry(QRect(650, 200, 71, 31));
        dateTimeEdit_3_start = new QDateTimeEdit(tab_3);
        dateTimeEdit_3_start->setObjectName(QString::fromUtf8("dateTimeEdit_3_start"));
        dateTimeEdit_3_start->setGeometry(QRect(120, 20, 141, 21));
        pushButton_playback_pos_3 = new QPushButton(tab_3);
        pushButton_playback_pos_3->setObjectName(QString::fromUtf8("pushButton_playback_pos_3"));
        pushButton_playback_pos_3->setGeometry(QRect(280, 570, 40, 23));
        pushButton_playback_pos_3->setMaximumSize(QSize(40, 23));
        pushButton_playback_slow_3 = new QPushButton(tab_3);
        pushButton_playback_slow_3->setObjectName(QString::fromUtf8("pushButton_playback_slow_3"));
        pushButton_playback_slow_3->setGeometry(QRect(130, 570, 41, 23));
        pushButton_playback_slow_3->setMaximumSize(QSize(41, 23));
        line_24 = new QFrame(tab_3);
        line_24->setObjectName(QString::fromUtf8("line_24"));
        line_24->setGeometry(QRect(830, 10, 20, 51));
        line_24->setFrameShape(QFrame::VLine);
        line_24->setFrameShadow(QFrame::Sunken);
        line_17 = new QFrame(tab_3);
        line_17->setObjectName(QString::fromUtf8("line_17"));
        line_17->setGeometry(QRect(10, 50, 831, 20));
        line_17->setFrameShape(QFrame::HLine);
        line_17->setFrameShadow(QFrame::Sunken);
        pushButton_playback_picture_3 = new QPushButton(tab_3);
        pushButton_playback_picture_3->setObjectName(QString::fromUtf8("pushButton_playback_picture_3"));
        pushButton_playback_picture_3->setGeometry(QRect(230, 570, 41, 23));
        pushButton_playback_picture_3->setMaximumSize(QSize(41, 23));
        pushButton_playback_start_3 = new QPushButton(tab_3);
        pushButton_playback_start_3->setObjectName(QString::fromUtf8("pushButton_playback_start_3"));
        pushButton_playback_start_3->setGeometry(QRect(30, 570, 37, 23));
        pushButton_playback_start_3->setMaximumSize(QSize(37, 23));
        pushButton_playback_stop_3 = new QPushButton(tab_3);
        pushButton_playback_stop_3->setObjectName(QString::fromUtf8("pushButton_playback_stop_3"));
        pushButton_playback_stop_3->setGeometry(QRect(80, 570, 40, 23));
        pushButton_playback_stop_3->setMaximumSize(QSize(40, 23));
        pushButton_playback_frame_3 = new QPushButton(tab_3);
        pushButton_playback_frame_3->setObjectName(QString::fromUtf8("pushButton_playback_frame_3"));
        pushButton_playback_frame_3->setGeometry(QRect(320, 570, 41, 23));
        pushButton_playback_frame_3->setMaximumSize(QSize(41, 23));
        line_18 = new QFrame(tab_3);
        line_18->setObjectName(QString::fromUtf8("line_18"));
        line_18->setGeometry(QRect(0, 10, 20, 51));
        line_18->setFrameShape(QFrame::VLine);
        line_18->setFrameShadow(QFrame::Sunken);
        line_19 = new QFrame(tab_3);
        line_19->setObjectName(QString::fromUtf8("line_19"));
        line_19->setGeometry(QRect(10, 0, 831, 20));
        line_19->setFrameShape(QFrame::HLine);
        line_19->setFrameShadow(QFrame::Sunken);
        frame_3 = new QFrame(tab_3);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(10, 70, 611, 471));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QWidget(frame_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setGeometry(QRect(10, 10, 591, 451));
        vboxLayout2 = new QVBoxLayout(verticalLayout_3);
        vboxLayout2->setSpacing(6);
        vboxLayout2->setContentsMargins(11, 11, 11, 11);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        vboxLayout2->setContentsMargins(0, 0, 0, 0);
        pushButton_playback_volume_3 = new QPushButton(tab_3);
        pushButton_playback_volume_3->setObjectName(QString::fromUtf8("pushButton_playback_volume_3"));
        pushButton_playback_volume_3->setGeometry(QRect(370, 570, 75, 23));
        tabWidget->addTab(tab_3, QString());
        line_3 = new QFrame(PlayBackClass);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(10, 650, 861, 16));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(PlayBackClass);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(0, 10, 21, 641));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);
        line_5 = new QFrame(PlayBackClass);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setGeometry(QRect(860, 10, 31, 641));
        line_5->setFrameShape(QFrame::VLine);
        line_5->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(PlayBackClass);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(10, 0, 861, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        retranslateUi(PlayBackClass);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(PlayBackClass);
    } // setupUi

    void retranslateUi(QWidget *PlayBackClass)
    {
        PlayBackClass->setWindowTitle(QApplication::translate("PlayBackClass", "PlayBack", 0, QApplication::UnicodeUTF8));
        pushButton_playback_start_1->setText(QApplication::translate("PlayBackClass", "play", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("PlayBackClass", "card No.", 0, QApplication::UnicodeUTF8));
        pushButton_playback_picture_1->setText(QApplication::translate("PlayBackClass", "snap", 0, QApplication::UnicodeUTF8));
        pushButton_playback_stop_1->setText(QApplication::translate("PlayBackClass", "stop", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("PlayBackClass", "offset", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_1_filelist->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("PlayBackClass", "file name", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_1_filelist->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("PlayBackClass", "size", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_1_filelist->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("PlayBackClass", "start time", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_1_filelist->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("PlayBackClass", "end time", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_1_filelist->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("PlayBackClass", "property", 0, QApplication::UnicodeUTF8));
        comboBox_1_fileattr->clear();
        comboBox_1_fileattr->insertItems(0, QStringList()
         << QApplication::translate("PlayBackClass", "all", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PlayBackClass", "unlock", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PlayBackClass", "lock", 0, QApplication::UnicodeUTF8)
        );
        label_4->setText(QApplication::translate("PlayBackClass", "file length", 0, QApplication::UnicodeUTF8));
        pushButton_playback_frame_1->setText(QApplication::translate("PlayBackClass", "frame", 0, QApplication::UnicodeUTF8));
        checkBox_1_carno->setText(QApplication::translate("PlayBackClass", "by card No.", 0, QApplication::UnicodeUTF8));
        pushButton_1_download->setText(QApplication::translate("PlayBackClass", "download", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("PlayBackClass", "download file name", 0, QApplication::UnicodeUTF8));
        pushButton_1_lock->setText(QApplication::translate("PlayBackClass", "lock", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("PlayBackClass", "file property", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("PlayBackClass", "end", 0, QApplication::UnicodeUTF8));
        pushButton_playback_fast_1->setText(QApplication::translate("PlayBackClass", "fast", 0, QApplication::UnicodeUTF8));
        pushButton_1_search->setText(QApplication::translate("PlayBackClass", "search", 0, QApplication::UnicodeUTF8));
        pushButton_1_downsave->setText(QApplication::translate("PlayBackClass", "buckup", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("PlayBackClass", "record type", 0, QApplication::UnicodeUTF8));
        pushButton_playback_pos_1->setText(QApplication::translate("PlayBackClass", "reset", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("PlayBackClass", "start", 0, QApplication::UnicodeUTF8));
        comboBox_1_filetype->clear();
        comboBox_1_filetype->insertItems(0, QStringList()
         << QApplication::translate("PlayBackClass", "all", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PlayBackClass", "schedule", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PlayBackClass", "motion dectect", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PlayBackClass", "alarm", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PlayBackClass", "alarm or motion dectect", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PlayBackClass", "alarm anf motion dectect", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PlayBackClass", "command", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PlayBackClass", "manual record", 0, QApplication::UnicodeUTF8)
        );
        pushButton_1_downstopsave->setText(QApplication::translate("PlayBackClass", "stop backup", 0, QApplication::UnicodeUTF8));
        pushButton_playback_slow_1->setText(QApplication::translate("PlayBackClass", "slow", 0, QApplication::UnicodeUTF8));
        pushButton_playback_volume_1->setText(QApplication::translate("PlayBackClass", "open volume", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("PlayBackClass", "Tab 1", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("PlayBackClass", "file type", 0, QApplication::UnicodeUTF8));
        pushButton_playback_frame_2->setText(QApplication::translate("PlayBackClass", "frame", 0, QApplication::UnicodeUTF8));
        pushButton_2_del->setText(QApplication::translate("PlayBackClass", "delete", 0, QApplication::UnicodeUTF8));
        pushButton_playback_fast_2->setText(QApplication::translate("PlayBackClass", "fast", 0, QApplication::UnicodeUTF8));
        pushButton_2_delall->setText(QApplication::translate("PlayBackClass", "delete all", 0, QApplication::UnicodeUTF8));
        pushButton_playback_slow_2->setText(QApplication::translate("PlayBackClass", "slow", 0, QApplication::UnicodeUTF8));
        pushButton_playback_picture_2->setText(QApplication::translate("PlayBackClass", "snap", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("PlayBackClass", "start", 0, QApplication::UnicodeUTF8));
        pushButton_playback_pos_2->setText(QApplication::translate("PlayBackClass", "reset", 0, QApplication::UnicodeUTF8));
        comboBox_2_filetype->clear();
        comboBox_2_filetype->insertItems(0, QStringList()
         << QApplication::translate("PlayBackClass", "normal", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PlayBackClass", "alarm", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PlayBackClass", "download", 0, QApplication::UnicodeUTF8)
        );
        checkBox_2_all->setText(QApplication::translate("PlayBackClass", "all", 0, QApplication::UnicodeUTF8));
        pushButton_2_search->setText(QApplication::translate("PlayBackClass", "search", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("PlayBackClass", "end", 0, QApplication::UnicodeUTF8));
        pushButton_playback_start_2->setText(QApplication::translate("PlayBackClass", "play", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_2_localfilist->horizontalHeaderItem(0);
        ___qtablewidgetitem5->setText(QApplication::translate("PlayBackClass", "file name", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_2_localfilist->horizontalHeaderItem(1);
        ___qtablewidgetitem6->setText(QApplication::translate("PlayBackClass", "size", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_2_localfilist->horizontalHeaderItem(2);
        ___qtablewidgetitem7->setText(QApplication::translate("PlayBackClass", "type", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget_2_localfilist->horizontalHeaderItem(3);
        ___qtablewidgetitem8->setText(QApplication::translate("PlayBackClass", "start time", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget_2_localfilist->horizontalHeaderItem(4);
        ___qtablewidgetitem9->setText(QApplication::translate("PlayBackClass", "end time", 0, QApplication::UnicodeUTF8));
        pushButton_playback_stop_2->setText(QApplication::translate("PlayBackClass", "stop", 0, QApplication::UnicodeUTF8));
        pushButton_playback_volume_2->setText(QApplication::translate("PlayBackClass", "open volume", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("PlayBackClass", "Tab 2", 0, QApplication::UnicodeUTF8));
        pushButton_3_download->setText(QApplication::translate("PlayBackClass", "downlosd", 0, QApplication::UnicodeUTF8));
        label_64->setText(QApplication::translate("PlayBackClass", "end", 0, QApplication::UnicodeUTF8));
        label_65->setText(QApplication::translate("PlayBackClass", "start", 0, QApplication::UnicodeUTF8));
        pushButton_playback_fast_3->setText(QApplication::translate("PlayBackClass", "fast", 0, QApplication::UnicodeUTF8));
        pushButton_3_save->setText(QApplication::translate("PlayBackClass", "backup", 0, QApplication::UnicodeUTF8));
        pushButton_playback_pos_3->setText(QApplication::translate("PlayBackClass", "reset", 0, QApplication::UnicodeUTF8));
        pushButton_playback_slow_3->setText(QApplication::translate("PlayBackClass", "slow", 0, QApplication::UnicodeUTF8));
        pushButton_playback_picture_3->setText(QApplication::translate("PlayBackClass", "snap", 0, QApplication::UnicodeUTF8));
        pushButton_playback_start_3->setText(QApplication::translate("PlayBackClass", "start", 0, QApplication::UnicodeUTF8));
        pushButton_playback_stop_3->setText(QApplication::translate("PlayBackClass", "stop", 0, QApplication::UnicodeUTF8));
        pushButton_playback_frame_3->setText(QApplication::translate("PlayBackClass", "frame", 0, QApplication::UnicodeUTF8));
        pushButton_playback_volume_3->setText(QApplication::translate("PlayBackClass", "open volume", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("PlayBackClass", "Page", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PlayBackClass: public Ui_PlayBackClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAYBACK_H
