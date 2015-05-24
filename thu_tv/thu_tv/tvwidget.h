#ifndef TVWIDGET_H
#define TVWIDGET_H

#include <QWidget>
#include <QFrame>
#include "HCNetSDK.h"
#include "PlayM4.h"


#define REALPLAY_MAX_NUM 32

namespace Ui {
class tvwidget;
}

class tvwidget : public QWidget
{
    Q_OBJECT
    
public:
    explicit tvwidget(long chnum=1,QWidget *parent = 0);
    ~tvwidget();
    
private:
    Ui::tvwidget *ui;
    int m_gcurrentuserid;
    int m_guseridbackup;
    int m_gcurrentchannelnum;
    int m_gchannelnumbackup;
    int m_gcurrentchannellinkmode;
    QFrame *m_pframePlay;    //Window which is used to contain playWnd or is used to play.
    int *m_rpuserid;
    NET_DVR_DEVICEINFO_V30 m_rpdeviceinfo;
    NET_DVR_PREVIEWINFO m_rppreinfo[2];
    NET_DVR_CLIENTINFO m_rpclientinfo[2];
    int* m_rpchannelnum;
    int *m_channellinkmode;
    //set viedeo quality
    int m_rpcurrentrealhandle;
    unsigned int     BrightValue;
    unsigned int     ContrastValue;
    unsigned int     SaturationValue;
    unsigned int     HueValue;
    char *m_serverIP;
    long ChannelNum;

#ifdef __linux__
    //draw area initial
    INITINFO m_rpinitinfo;
#endif

    int m_rpstartstopflag;
    int m_rpsavestopflag;
    //realplay window num equal (index+1)*(index+1)
    int m_rpwindownumindex;
    int m_rpwindownumindexbackup;
    //vedio parameter
    int m_rpbrightvalue;
    int m_rpcontrastvalue;
    int m_rpsaturationvalue;
    int m_rphuevalue;
    int m_rpvolumvalue;
    int m_rpuseridbackup;
    int m_rpfirstrealhandle;
};

#endif // TVWIDGET_H
