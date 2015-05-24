#include "widget.h"
#include "ui_widget.h"
#include "ml_gvidmw.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    nIndex=0;
    nIndex1=0;
    ui->setupUi(this);
    binitialed=false;
    bhex=false;

    ui->lineEdit_channel->setText(QString("0"));
    ui->lineEdit_prarm1->setText(QString("0"));
    ui->lineEdit_param2->setText(QString("0"));
    ui->lineEdit_param3->setText(QString("0"));
    ui->lineEdit_param4->setText(QString("0"));
    ui->pushButton_close->setEnabled(false);
    ui->pushButton_disoverlap->setEnabled(false);
    ui->pushButton_open->setEnabled(false);
    ui->pushButton_overlap->setEnabled(false);
    ui->comboBox_item->setEnabled(false);
    ui->comboBox_pick->setEnabled(false);
    ui->pushButton_ok->setEnabled(false);
    ui->lineEdit_channel->setEnabled(false);
    ui->lineEdit_param2->setEnabled(false);
    ui->lineEdit_param3->setEnabled(false);
    ui->lineEdit_param4->setEnabled(false);
    ui->lineEdit_prarm1->setEnabled(false);
}

Widget::~Widget()
{
    delete ui;
}




void Widget::on_pushButton_initial_clicked()
{
    QMessageBox msgbox;
    msgbox.setText("初始化成功");
    binitialed=true;
    ui->pushButton_initial->setEnabled(false);
    ui->pushButton_close->setEnabled(true);
    ui->pushButton_disoverlap->setEnabled(true);
    ui->pushButton_open->setEnabled(true);
    ui->pushButton_overlap->setEnabled(true);
    ui->comboBox_item->setEnabled(true);
    ui->comboBox_pick->setEnabled(true);
    ui->pushButton_ok->setEnabled(true);
    ui->lineEdit_channel->setEnabled(true);
    ui->lineEdit_param2->setEnabled(true);
    ui->lineEdit_param3->setEnabled(true);
    ui->lineEdit_param4->setEnabled(true);
    ui->lineEdit_prarm1->setEnabled(true);
    msgbox.exec();
/*
    int ret=ML_GVID_Init();
    QMessageBox msgbox;
    if(ret==1)
    {
        msgbox.setText("初始化成功");
        binitialed=true;
        ui->pushButton_initial->setEnabled(false);
        ui->pushButton_close->setEnabled(true);
        ui->pushButton_disoverlap->setEnabled(true);
        ui->pushButton_open->setEnabled(true);
        ui->pushButton_overlap->setEnabled(true);
        ui->comboBox_item->setEnabled(true);
        ui->comboBox_pick->setEnabled(true);
        ui->pushButton_ok->setEnabled(true);
        ui->lineEdit_channel->setEnabled(true);
        ui->lineEdit_param2->setEnabled(true);
        ui->lineEdit_param3->setEnabled(true);
        ui->lineEdit_param4->setEnabled(true);
        ui->lineEdit_prarm1->setEnabled(true);

    }
    else
        msgbox.setText("初始化失败");
    msgbox.exec();
  /**/

}

void Widget::on_pushButton_overlap_clicked()
{
     int ret=ML_GVID_SetMarklayer(true);
}

void Widget::on_pushButton_disoverlap_clicked()
{
    int ret=ML_GVID_SetMarklayer(false);
}

void Widget::on_pushButton_exit_clicked()
{
     exit(0);
}

void Widget::on_pushButton_ok_clicked()
{
    int ret;
    QMessageBox msgbox;
    colorTable[0] = 0;
    for(int i = 1; i< 50;i++)
    {
        colorTable[i] = 0x00000000;
    }
    for(int i = 50; i< 128;i++)
    {colorTable[i] = 0xff000000;}
    for(int i = 128; i< 256;i++)
    {
        colorTable[i] = 0x00ff0000;
    }

    curchannel=ui->lineEdit_channel->text().toInt();
    bool ok;
    if(bhex==false)
        param1=ui->lineEdit_prarm1->text().toInt();
    else
        param1=(ui->lineEdit_prarm1->text().toLongLong(&ok,16));
    qDebug("%d  %d",param1,ok);

    param2=ui->lineEdit_param2->text().toInt();
    param3=ui->lineEdit_param3->text().toInt();
    param4=ui->lineEdit_param4->text().toInt();

    nIndex=ui->comboBox_item->currentIndex();

    switch(nIndex)
    {
    case 0:
        ret = ML_GVID_OpenPPI(curchannel,param1,param2,param3,param4);
        break;
    case 1:
        ret = ML_GVID_ClosePPI(curchannel);
        break;
    case 2:
        ret = ML_GVID_SetPPIXY(curchannel,param1,param2);
        break;
    case 3:
        ret = ML_GVID_SetPPIWH(curchannel,param1,param2);
        break;
    case 4:
        ret = ML_GVID_SetPPIMode(curchannel,param1);
        break;
    case 5:
        ret = ML_GVID_SetPPICenter(curchannel,param1,param2);
        break;
    case 6:
        ret = ML_GVID_SetPPIShipDir(curchannel,param1);
        break;
    case 7:
        //param1=strtoul(buffer1,NULL,16);
        ret = ML_GVID_SetPPIColor(curchannel,(unsigned int)param1);//color[param1]
        break;
    case 8:
        ret = ML_GVID_SetPPIScan(curchannel,param1);
        break;
    case 9:
        //	param1=strtoul(buffer1,NULL,16);
        ret = ML_GVID_SetPPILineColor(curchannel,(unsigned int)param1);//color[param1]
        break;
    case 10:
        ret = ML_GVID_FrostPPI(curchannel,param1);
        break;
    case 11:
        ret = ML_GVID_SetPPIDist(curchannel,param1);
        break;
    case 12:
        ret = ML_GVID_SetPPISwitch(curchannel,param1);
        break;
    case 13:
        ret = ML_GVID_SetPPIGate(curchannel,param1);
        break;
    case 14:
        ret = ML_GVID_SetPPITail(curchannel,param1);
        break;
    case 15:
        ret = ML_GVID_SetTailSwitch(curchannel,param1);
        break;
    case 16:
        ret = ML_GVID_SetTailColor(curchannel,(unsigned int) param1);
        break;
    case 17:
        ret = ML_GVID_SetTailGate(curchannel,param1);
        break;
    case 18:
        ret = ML_GVID_SetTailTime(curchannel,param1);
        break;
    case 19:
        ret = ML_GVID_SetPPITogether(param1);
        break;
    case 20:
        ret = ML_GVID_SetPPIColorTable(curchannel,colorTable);
        break;
    case 21:
        ret = ML_GVID_ClearPPI(curchannel);
        break;
    case 22:
        ret = ML_GVID_SetPPIMoveMode(curchannel, param1);
        break;
        //--------------------------------------------------------------------------------------------
    case 23:
        //ML_GVID_OpenAr(curchannel,parameter_arry[curchannel-1][17][0],\
        //	parameter_arry[curchannel-1][17][1],340,340);
        ret = ML_GVID_OpenAr(curchannel,param1,param2,param3,param4);
        break;
    case 24:
        ret = ML_GVID_CloseAr(curchannel);
        break;
    case  25:
        ret = ML_GVID_SetArXY(curchannel,param1,param2);
        break;
    case 26:
        ret = ML_GVID_SetArWH(curchannel,param1,param2);
        break;
    case 27:
        ret = ML_GVID_SetArGate(curchannel,param1);
        break;
    case  28:
        ret = ML_GVID_SetArDist(curchannel,param1);
        break;
    case  29:
        ret = ML_GVID_SetArColor(curchannel,(unsigned int) param1);
        break;
    case  30:
        ret = ML_GVID_SetArTail(curchannel,param1);
        break;
    case  31:

        ret = ML_GVID_SetArBackgroundColor(curchannel,(unsigned int) param1);
        break;
        //----------------------------------------------------------------------------------
    case 32:
        ret = ML_GVID_OpenMiniWin(curchannel,param1,param2,param3,param4);
        break;
    case 33:
        ret = ML_GVID_CloseMiniWin(curchannel);
        break;

    case 34:
        ret = ML_GVID_SetMiniWinXY(curchannel,param1,param2);
        break;
    case 35:
        ret = ML_GVID_SetMiniWinWH(curchannel,param1,param2);

        break;
    case 36:
        ret = ML_GVID_SetMiniWinMode(curchannel,param1);
        break;
    case 37:
    //	param1=strtoul(buffer1,NULL,16);
        ret = ML_GVID_SetMiniWinColor(curchannel,(unsigned int)param1);////color[param1]
        break;
    case 38:
        ret = ML_GVID_SetMiniWinDistDir(curchannel,param1,param2);
        break;
    case 39:
        ret = ML_GVID_SetMiniWinScale(curchannel,param1);
        break;

    case 40:
        ret = ML_GVID_SetMiniWinColorTable(curchannel,colorTable);
        break;
    case 41:
        ret = ML_GVID_SetScanMode(curchannel, param1);
        break;
    case 42:
        //ret = ML_GVID_SendRadarPkg(curchannel, param1, param2);
        break;
//----------------------------------------------------------------------------------------
    case 43:
       // ret = ML_GVID_OpenTV(curchannel,param1,param2,param3,param4);

        break;
    case 44:
       // ret = ML_GVID_CloseTV(curchannel);
        break;
    case 45:
       // ret = ML_GVID_SetTVXY(curchannel,param1,param2);
        break;
    case 46:
       // ret = ML_GVID_SetTVWH(curchannel,param1,param2);
        break;
    case 47:
      //  ret = ML_GVID_FrostTV(curchannel,param1);
        break;
    case 48:
        //ret = ML_GVID_SetTVBright(curchannel,(char)param1);
        break;
    case 49:
        //ret = ML_GVID_SetTVContrast(curchannel,param1);
        break;
    case 50:
        ///ret = ML_GVID_SetTVColor(curchannel,(char)param1);
        break;
    case 51:

        //ret = ML_GVID_SetPMLayerColors(curchannel, param1, param2, colorTable);
        break;
    case 52:
        //ret = ML_GVID_SetATLayerColorKey(curchannel, param1);
        break;


    default:
        break;
    }
if (ret > 0) msgbox.setText("执行成功，返回值大于零！");
else msgbox.setText("执行失败，返回值小于零！");
msgbox.exec();

}

void Widget::on_pushButton_open_clicked()
{
    nIndex1=ui->comboBox_pick->currentIndex();
    int ret;
    switch (nIndex1)
    {
    case 0:
        break;
    case 1:
        ret=ML_GVID_OpenPPI(1,0,0,600,600);
        ret=ML_GVID_OpenPPI(2,610,0,600,600);
        ret=ML_GVID_OpenMiniWin(1,0,610,170,170);
        ret=ML_GVID_OpenMiniWin(2,610,610,170,170);
        ret=ML_GVID_OpenAr(1,180,610,200,170);
        ret=ML_GVID_OpenAr(2,790,610,200,170);
        //2TV
        break;
    case 2:
        ret=ML_GVID_OpenPPI(1,0,0,600,600);
        ret=ML_GVID_OpenPPI(2,610,0,600,600);
        ret=ML_GVID_OpenMiniWin(1,0,610,170,170);
        ret=ML_GVID_OpenMiniWin(2,610,610,170,170);
        ret=ML_GVID_OpenAr(1,180,610,200,170);
        ret=ML_GVID_OpenAr(2,790,610,200,170);
        break;
    case 3:
        break;//2 TV
    case 4:
        break;//---------------------
    case 5:
        ret=ML_GVID_OpenPPI(1,0,0,600,600);
        ret=ML_GVID_OpenMiniWin(1,0,610,170,170);
        ret=ML_GVID_OpenAr(1,180,610,200,170);
        break;
    case 6:
        ret=ML_GVID_OpenPPI(1,0,0,600,600);
        break;
    case 7:
        ret=ML_GVID_OpenMiniWin(1,0,610,170,170);
        break;
    case 8:
        ret=ML_GVID_OpenAr(1,180,610,200,170);
        break;
    case 9:
        break;//--------------------
    case 10:
        ret=ML_GVID_OpenPPI(2,610,0,600,600);
        ret=ML_GVID_OpenMiniWin(2,610,610,170,170);
        ret=ML_GVID_OpenAr(2,790,610,200,170);
        break;
    case 11:
        ret=ML_GVID_OpenPPI(2,610,0,600,600);
        break;
    case 12:
        ret=ML_GVID_OpenMiniWin(2,610,610,170,170);
        break;
    case 13:
        ret=ML_GVID_OpenAr(2,790,610,200,170);
        break;
    case 14:
        break;//--------------
    case 15:
        break;//TV-1
    case 16:
        break;//TV-2
    default:
        break;

    }
}

void Widget::on_pushButton_close_clicked()
{
    int ret;
    nIndex1=ui->comboBox_pick->currentIndex();
    switch (nIndex1)
    {
    case 0:
        break;
    case 1:
        ret=ML_GVID_ClosePPI(1);
        ret=ML_GVID_ClosePPI(2);
        ret=ML_GVID_CloseMiniWin(1);
        ret=ML_GVID_CloseMiniWin(2);
        ret=ML_GVID_CloseAr(1);
        ret=ML_GVID_CloseAr(2);
        //2TV
        break;
    case 2:
        ret=ML_GVID_ClosePPI(1);
        ret=ML_GVID_ClosePPI(2);
        ret=ML_GVID_CloseMiniWin(1);
        ret=ML_GVID_CloseMiniWin(2);
        ret=ML_GVID_CloseAr(1);
        ret=ML_GVID_CloseAr(2);
        break;
    case 3:
        break;//2 TV
    case 4:
        break;//---------------------
    case 5:
        ret=ML_GVID_ClosePPI(1);
        ret=ML_GVID_CloseMiniWin(1);
        ret=ML_GVID_CloseAr(1);
        break;
    case 6:
        ret=ML_GVID_ClosePPI(1);
        break;
    case 7:
        ret=ML_GVID_CloseMiniWin(1);
        break;
    case 8:
        ret=ML_GVID_CloseAr(1);
        break;
    case 9:
        break;//--------------------
    case 10:
        ret=ML_GVID_ClosePPI(2);
        ret=ML_GVID_CloseMiniWin(2);
        ret=ML_GVID_CloseAr(2);
        break;
    case 11:
        ret=ML_GVID_ClosePPI(2);
        break;
    case 12:
        ret=ML_GVID_CloseMiniWin(2);
        break;
    case 13:
        ret=ML_GVID_CloseAr(2);
        break;
    case 14:
        break;//--------------
    case 15:
        break;//TV-1
    case 16:
        break;//TV-2
    default:
        break;

    }
}

void Widget::on_comboBox_item_activated(int index)
{
    if(index==7||index==9||index==16||index==29||index==31||index==37)
    {
         ui->lineEdit_prarm1->setText("十六进制");
         bhex=true;
    }
    else
    {
        bhex=false;
        ui->lineEdit_prarm1->setText("0");
    }

}
