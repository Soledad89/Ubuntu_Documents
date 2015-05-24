   /*
* Copyright(C) 2010,Custom Co., Ltd 
*    FileName: realplay.cpp
* Description: realplay
*     Version: 1.0
*      Author: wanggongpu
* Create Date: 2009-11,12
* Modification History¨²?
*    2010-6-25 panyadong   Add border to frame.
*/
#include "realplay.h"

#include <QMessageBox>
#include <Qt>
#include <QDir>
#include <QDateTime>
#include <QStandardItem>
#include <QIcon>
#include <QDesktopWidget>
#include <QApplication>
#include "qtclientdemo.h"
extern QtClientDemo* gqtclinetdemo;

enum DeviceTreeNodeType
{
    DeviceTreeNode_ROOT = 1,
    DeviceTreeNode_Device,
    DeviceTreeNode_Channel
};

/*******************************************************************
      Function:   RealPlay::RealPlay
   Description:   ???©à©È?©´©°?©¤????????
     Parameter:   (IN)   TreeModel**  model  
                  (IN)   const QModelIndex * index         ????©¤¨²??
                  (IN)   QList<DeviceData>* tree           ©¤¨²??????
                  (IN)   int* userid                       ??©Ð??¡À?¨ª?©¤UserID
                  (IN)   NET_DVR_DEVICEINFO_V30* devinfo   ????©¸©¸?©¤?????©¤¡è????©à¡è¨®
                  (IN)   int* channelnum                   ????©¸©¸?©¤???©¸?©à
                  (IN)   int *channelmode                  ??©¸©¸???©À?©¤©È???????
                  (IN)   LogTable * table                  ???????¡À
                  (IN)   QWidget *parent                   
        Return:   none
**********************************************************************/
RealPlay::RealPlay(TreeModel**  model ,const QModelIndex * index, QList<DeviceData>* tree, \
                   int* userid, NET_DVR_DEVICEINFO_V30* devinfo, int* channelnum, int *channelmode, \
                   LogTable * table, QWidget *parent): QWidget(parent)
{
	ui.setupUi(this);  

    m_pSelectedPlayWnd = NULL;
    m_pframePlay = ui.m_pframePlay;

    int i;
    for (i = 0; i < REALPLAY_MAX_NUM; i++)
    {
        m_framePlayWnd[i] = new CFramePlayWnd();
        m_framePlayWnd[i]->setParent(m_pframePlay);

        connect(m_framePlayWnd[i], SIGNAL(SingleClickSig()), this, SLOT(OnSingleClickPlayWindow()));
    }

    //Select the first windows default.
    m_pSelectedPlayWnd = m_framePlayWnd[0];
    m_pSelectedPlayWnd->setStyleSheet("border: 2px solid blue;");

	m_rpmodel = model;
	m_rpmodelindex = index;
	m_rpuseridbackup = -1;
	//Record net_dvr interface called info.
	if (table != NULL)
	{
		m_rplogtable = table;
	}
	else
	{
		m_rplogtable = NULL;
	}
	
    m_rpuserid = userid;
    m_rpdeviceinfo = devinfo;
    m_rpchannelnum = channelnum;
    m_channellinkmode = channelmode;
	m_qlistdevicetree = tree;

    //Display the video frame to display real data.
 	m_rpmenu = NULL;

    //m_rpframe[0].setContextMenuPolicy(Qt::CustomContextMenu);
    //connect( &m_rpframe[0],SIGNAL(customContextMenuRequested(const QPoint &)),this,
                //SLOT(RealPlayContextResponse(const QPoint &)));

    m_rpwindownumindexbackup = 0;
    m_rpbrightvalue = 6;
    m_rpcontrastvalue = 6;
    m_rpsaturationvalue = 6;
    m_rphuevalue = 6;
    m_rpvolumvalue = 37768;  
    m_rpsliderflag = 0;
	
    ui.horizontalSlider_bright->setRange(1,10); 
    ui.horizontalSlider_contrast->setRange(1,10); 
    ui.horizontalSlider_saturation->setRange(1,10);
	ui.horizontalSlider_hue->setRange(1,10);
	ui.horizontalSlider_volume->setRange(1,65535);
	ui.horizontalSlider_bright->setSingleStep(1);   
	ui.horizontalSlider_contrast->setSingleStep(1); 
	ui.horizontalSlider_saturation->setSingleStep(1);
	ui.horizontalSlider_hue->setSingleStep(1);
	ui.horizontalSlider_volume->setSingleStep(6553);
	
    m_rpsliderflag = 1;
	m_rpptzspeed = 4;
    m_ptzupswitch = 0;
    m_ptzdownswitch = 0;
    m_ptzrghtswitch = 0;
    m_ptzleftswitch = 0;
    m_ptznarrowswitch = 0;
    m_ptzexpandswitch = 0;
    m_ptzfarswitch = 0;
    m_ptznearswitch = 0;
    m_ptzbigswitch = 0;
    m_ptzsmallswitch = 0;
    m_rpstartstopflag = 0;
    m_rpsavestopflag = 0;

	m_ptzpreset = NULL;
	m_ptzcruise = NULL;
	m_ptzpresetpointindex = 1;
	m_ptzcruisepathindex = 1;
	m_ptzcruiserunning = 0;

	ui.comboBox_ptzcruisepoint->setCurrentIndex(0);
	ui.comboBox_ptzcruisepath->setCurrentIndex(0);
	ui.comboBox_ptzspeed->setCurrentIndex(0);

    //Lay the playwnd.
    comboWinNumChanged(0);

    connect(ui.comboBox_windowsnum, SIGNAL(activated(int)), this, SLOT(comboWinNumChanged(int)));
}

/*******************************************************************
      Function:   RealPlay::~RealPlay
   Description:   
     Parameter:   (IN)   none  
**********************************************************************/
RealPlay::~RealPlay()
{
	if (m_rpstartstopflag == 1)
	{
		stopRealPlay();
	}
	
	if (m_ptzpreset != NULL)
	{
		delete m_ptzpreset ;
		m_ptzpreset = NULL;
	}
	
	if (m_ptzcruise != NULL)
	{
		delete m_ptzcruise ;
		m_ptzcruise = NULL;
	}
	
}

void RealPlay::resizeEvent(QResizeEvent *event)
{
    if (NULL == event)
    {
        return;
    }
}

/*******************************************************************
      Function:   RealPlay::comboWinNumChanged
   Description:   The number of windows used to play is changed.
     Parameter:   (IN)   int iWindowNum  
        Return:   ??   
**********************************************************************/
void RealPlay::comboWinNumChanged(int iWindowNumIndex)
{
    //Relayout playing windows according to the number and size.
    int iWidth  = m_pframePlay->width();
    int iHeight = m_pframePlay->height();
    
    int iWindowNum;
    int iLineWndMum = iWindowNumIndex + 1;
    iWindowNum = iLineWndMum*iLineWndMum;

    if (iWindowNum > REALPLAY_MAX_NUM)
    {
        return;
    }

    int i;
    int iPlayWndWidth  = iWidth/iLineWndMum;
    int iPlayWndHeight = iHeight/iLineWndMum;

    for (i = 0; i < REALPLAY_MAX_NUM; i++)
    {
        m_framePlayWnd[i]->hide();
        
        if (i < iWindowNum)
        {
            m_framePlayWnd[i]->setGeometry((i%iLineWndMum)*iPlayWndWidth, (i/iLineWndMum)*iPlayWndHeight, iPlayWndWidth, iPlayWndHeight);
            m_framePlayWnd[i]->show();
        }
    }
}

//click the play windows.
void RealPlay::OnSingleClickPlayWindow()
{
    //who send the signal.
    CFramePlayWnd *pWnd = qobject_cast<CFramePlayWnd *>(sender());
    if (pWnd != m_pSelectedPlayWnd)
    {
        m_pSelectedPlayWnd->setStyleSheet("border: 2px solid gray;");
    }

    //Set the border of selected window.
    m_pSelectedPlayWnd = pWnd;
    m_pSelectedPlayWnd->setStyleSheet("border: 2px solid blue;");
}

void RealPlay::DrawAreaInit()
{
}

/*******************************************************************
      Function:   RealPlay::RealPlayContextResponse
   Description:   mouse right clicked context
     Parameter:   (IN)   const QPoint &pos  
        Return:   0--success¨²?-1--fail¨ª¨²   
**********************************************************************/
void RealPlay::RealPlayContextResponse(const QPoint &pos)
{
    if (pos.isNull())
    {
        return;
    }

    //?¨²????????©È??©°???¡Âmenu¨²????????©à©¤©°©È?
    if (m_rpmenu != NULL)
    {
        delete m_rpmenu;
        m_rpmenu = NULL;
    }
	//¡è©Ð©À?????????????
    m_rpmenu= new QMenu(m_pframePlay);
    //?????????????¨ª¡è?
    QAction *fullFrameAction = m_rpmenu->addAction("©Ð¡¤?¡À¡è???");
    QAction *fullScreenAction = m_rpmenu->addAction("???©Ø¡è???");
	QAction *normalFrameAction = m_rpmenu->addAction("??©¦¨²¡è???");
	//???©À??©Ø?¡è???????
    connect(fullFrameAction, SIGNAL(triggered(bool)), this, \
    SLOT(RealPlayFullFrameRep()));
    connect(fullScreenAction, SIGNAL(triggered(bool)), this, \
        SLOT(RealPlayFullScreenRep()));
	connect(normalFrameAction, SIGNAL(triggered(bool)), this, \
        SLOT(RealPlayNormalFrameRep()));
	
    //?©°???????????©À¡è???
    m_rpmenu->exec(QCursor::pos());

}

/************************************************************************
 *        Function            :  RealPlayFullFrameRep
 *        Description         :  full frame
 *        Input               :  none
 *        Output              :  none
 *        Return              :  none
*************************************************************************/
void RealPlay::RealPlayFullFrameRep()
{
    if (m_rpstartstopflag == 1)
	{
		stopRealPlay();
	}
    int singleFrame =0;
    //m_rpframe[0].show();
    //??¡è??¨ª©¦¡Â????¡è????©¤©È?©´©°??
    startRealPlay(singleFrame);
}

/************************************************************************
 *        Function            :  RealPlayFullScreenRep
 *        Description         :  full screen
 *        Input               :  none
 *        Output              :  none
 *        Return              :  none
*************************************************************************/
void RealPlay::RealPlayFullScreenRep()
{

	ui.comboBox_windowsnum->hide();
    ui.label_3->hide();
    ui.line_24->hide();
    ui.horizontalSlider_hue->hide();
    ui.label_12->hide();
    ui.line_27->hide();
    ui.horizontalSlider_saturation->hide();
    ui.line_9->hide();
    ui.label->hide();
    ui.horizontalSlider_volume->hide();
    ui.line_22->hide();
    ui.line_25->hide();
    ui.line_2->hide();
    ui.line->hide();
    ui.pushButton_largeaperture->hide();
    ui.line_5->hide();
    ui.line_13->hide();
    ui.label_13->hide();
    ui.horizontalSlider_contrast->hide();
    ui.pushButton_savefile->hide();
    ui.line_12->hide();
    ui.label_15->hide();
    ui.pushButton_right->hide();
    ui.label_2->hide();
    ui.line_11->hide();
    ui.line_26->hide();
    ui.label_14->hide();
    ui.line_3->hide();
    ui.label_10->hide();
    ui.pushButton_defaultparameter->hide();
    ui.pushButton_left->hide();
    ui.label_11->hide();
    ui.pushButton_forceIframe->hide();
    ui.pushButton_ptzcruisepathcall->hide();
    ui.line_8->hide();
    ui.pushButton_down->hide();
    ui.line_15->hide();
    ui.comboBox_qualitydemand->hide();
    ui.label_9->hide();
    ui.pushButton_ptzcruisepathset->hide();
    ui.pushButton_expandfocus->hide();
    ui.label_8->hide();
    ui.line_6->hide();
    ui.line_10->hide();
    ui.label_7->hide();
    ui.pushButton_farfocus->hide();
    ui.line_4->hide();
    ui.pushButton_up->hide();
    ui.line_19->hide();
    ui.pushButton_nearfocus->hide();
    ui.pushButton_ptzcruisepointset->hide();
    ui.pushButton_scrashPic->hide();
    ui.label_6->hide();
    ui.pushButton_trackmemoryrun->hide();
    ui.line_14->hide();
    ui.line_16->hide();
    ui.comboBox_ptzcruisepoint->hide();
    ui.pushButton_trackmemorystop->hide();
    ui.label_5->hide();
    ui.pushButton_narrowfocus->hide();
    ui.comboBox_ptzcruisepath->hide();
    ui.pushButton_trackmemorystart->hide();
    ui.comboBox_ptzspeed->hide();
    ui.line_7->hide();
    ui.pushButton_smallaperture->hide();
    ui.horizontalSlider_bright->hide();
    ui.label_4->hide();
    ui.pushButton_realplay->hide();
    ui.pushButton_ptzcruisepointcall->hide();
    ui.line_17->hide();
    ui.line_18->hide();
    ui.line_20->hide();
    ui.line_21->hide();
    ui.line_23->hide();
    ui.line_28->hide();
    ui.line_29->hide();

	QDesktopWidget   *d = QApplication ::desktop(); 
	QRect gvlayoutrect = d->screenGeometry(); 
	gqtclinetdemo->resize(gvlayoutrect.width(), gvlayoutrect.height());
	gqtclinetdemo->setMinimumSize(QSize(gvlayoutrect.width(), gvlayoutrect.height()));
	gqtclinetdemo->setMaximumSize(QSize(gvlayoutrect.width(), gvlayoutrect.height()));
	gqtclinetdemo->setWindowState( Qt::WindowFullScreen);
	
    gqtclinetdemo->ui.line_25->hide();
    gqtclinetdemo->ui.Manage_pushButton->hide();
    gqtclinetdemo->ui.pushButton_logaramsave->hide();
    gqtclinetdemo->ui.line_9->hide();
    gqtclinetdemo->ui.Other_pushButton->hide();
    gqtclinetdemo->ui.line_12->hide();
    gqtclinetdemo->ui.line_10->hide();
    gqtclinetdemo->ui.line_13->hide();
    gqtclinetdemo->ui.Exit_pushButton->hide();
    gqtclinetdemo->ui.line_7->hide();
    gqtclinetdemo->ui.line_3->hide();
    gqtclinetdemo->ui.DVRsets_treeView->hide();
    gqtclinetdemo->ui.PlayBack_pushButton->hide();
    gqtclinetdemo->ui.radioButton_alarminfo->hide();
    gqtclinetdemo->ui.line->hide();
    gqtclinetdemo->ui.radioButton_locallog->hide();
    //gqtclinetdemo->ui.label->hide();
    gqtclinetdemo->ui.pushButton_logaramclear->hide();
    gqtclinetdemo->ui.CurrDataTime_label->hide();
    gqtclinetdemo->ui.pushButton_logaramtest->hide();
    gqtclinetdemo->ui.line_8->hide();
    gqtclinetdemo->ui.line_22->hide();
    gqtclinetdemo->ui.line_6->hide();
    gqtclinetdemo->ui.line_11->hide();
    gqtclinetdemo->ui.line_14->hide();
    gqtclinetdemo->ui.line_24->hide();
    gqtclinetdemo->ui.Preview_pushButton->hide();
    gqtclinetdemo->ui.line_23->hide();
    gqtclinetdemo->ui.pushButton_logaramlistconf->hide();
    gqtclinetdemo->ui.Configure_pushButton->hide();
    gqtclinetdemo->ui.line_2->hide();
    gqtclinetdemo->ui.verticalLayout->hide();
    //gqtclinetdemo->ui.menubar->hide();
    gqtclinetdemo->ui.statusbar->hide();
    //gqtclinetdemo->ui.toolBar->hide();
    //gqtclinetdemo->ui.toolBar_2->hide();

	//gqtclinetdemo->ui.centralwidget->setGeometry(gvlayoutrect);

	//gqtclinetdemo->ui.centralwidget->resize(gvlayoutrect.width(), gvlayoutrect.height());
	//gqtclinetdemo->ui.centralwidget->setMinimumSize(QSize(gvlayoutrect.width(), gvlayoutrect.height()));
	//gqtclinetdemo->ui.centralwidget->setMaximumSize(QSize(gvlayoutrect.width(), gvlayoutrect.height()));

	
	gqtclinetdemo->ui.gridLayoutWidget->setGeometry(gvlayoutrect);	
	gqtclinetdemo->ui.gridLayoutWidget->resize(gvlayoutrect.width(), gvlayoutrect.height());
	gqtclinetdemo->ui.gridLayoutWidget->setMinimumSize(QSize(gvlayoutrect.width(), gvlayoutrect.height()));
	gqtclinetdemo->ui.gridLayoutWidget->setMaximumSize(QSize(gvlayoutrect.width(), gvlayoutrect.height()));

	gqtclinetdemo->m_realplay->setGeometry(gvlayoutrect);
	gqtclinetdemo->m_realplay->resize(gvlayoutrect.width(), gvlayoutrect.height());
	gqtclinetdemo->m_realplay->setMinimumSize(QSize(gvlayoutrect.width(), gvlayoutrect.height()));
	gqtclinetdemo->m_realplay->setMaximumSize(QSize(gvlayoutrect.width(), gvlayoutrect.height()));

	//m_rpframe[0].setMinimumSize(gvlayoutrect.width(), gvlayoutrect.height());
	//m_rpframe[0].setWindowState( Qt::WindowFullScreen);
	on_pushButton_realplay_clicked();
	on_pushButton_realplay_clicked();
	showFullScreen();
}

void RealPlay::RealPlayNormalFrameRep()
{
	gqtclinetdemo->showNormal();
	gqtclinetdemo->resize(1049, 877);
	gqtclinetdemo->setMinimumSize(QSize(1049, 877));
	gqtclinetdemo->setMaximumSize(QSize(1049, 877));
	
	gqtclinetdemo->ui.gridLayoutWidget->setGeometry(QRect(160, 80, 881, 651));
	gqtclinetdemo->ui.gridLayoutWidget->resize(881,651);
	gqtclinetdemo->ui.gridLayoutWidget->setMinimumSize(QSize(881,651));
	gqtclinetdemo->ui.gridLayoutWidget->setMaximumSize(QSize(881,651));

	
	gqtclinetdemo->ui.line_25->show();
    gqtclinetdemo->ui.Manage_pushButton->show();
    gqtclinetdemo->ui.pushButton_logaramsave->show();
    gqtclinetdemo->ui.line_9->show();
    gqtclinetdemo->ui.Other_pushButton->show();
    gqtclinetdemo->ui.line_12->show();
    gqtclinetdemo->ui.line_10->show();
    gqtclinetdemo->ui.line_13->show();
    gqtclinetdemo->ui.Exit_pushButton->show();
    gqtclinetdemo->ui.line_7->show();
    gqtclinetdemo->ui.line_3->show();
    gqtclinetdemo->ui.DVRsets_treeView->show();
    gqtclinetdemo->ui.PlayBack_pushButton->show();
    gqtclinetdemo->ui.radioButton_alarminfo->show();
    gqtclinetdemo->ui.line->show();
    gqtclinetdemo->ui.radioButton_locallog->show();
    //gqtclinetdemo->ui.label->show();
    gqtclinetdemo->ui.pushButton_logaramclear->show();
    gqtclinetdemo->ui.CurrDataTime_label->show();
    gqtclinetdemo->ui.pushButton_logaramtest->show();
    gqtclinetdemo->ui.line_8->show();
    gqtclinetdemo->ui.line_22->show();
    gqtclinetdemo->ui.line_6->show();
    gqtclinetdemo->ui.line_11->show();
    gqtclinetdemo->ui.line_14->show();
    gqtclinetdemo->ui.line_24->show();
    gqtclinetdemo->ui.Preview_pushButton->show();
    gqtclinetdemo->ui.line_23->show();
    gqtclinetdemo->ui.pushButton_logaramlistconf->show();
    gqtclinetdemo->ui.Configure_pushButton->show();
    gqtclinetdemo->ui.line_2->show();
    gqtclinetdemo->ui.verticalLayout->show();
   // gqtclinetdemo->ui.menubar->show();
    gqtclinetdemo->ui.statusbar->show();
   // gqtclinetdemo->ui.toolBar->show();
   // gqtclinetdemo->ui.toolBar_2->show();
	
	showNormal();
	setGeometry(QRect(6, 0, 881, 651));
		
    resize(869, 655);
    setMinimumSize(QSize(869, 655));
    setMaximumSize(QSize(869, 655));
		
	ui.comboBox_windowsnum->show();
    ui.label_3->show();
    ui.line_24->show();
    ui.horizontalSlider_hue->show();
    ui.label_12->show();
    ui.line_27->show();
    ui.horizontalSlider_saturation->show();
    ui.line_9->show();
    ui.label->show();
    ui.horizontalSlider_volume->show();
    ui.line_22->show();
    ui.line_25->show();
    ui.line_2->show();
    ui.line->show();
    ui.pushButton_largeaperture->show();
    ui.line_5->show();
    ui.line_13->show();
    ui.label_13->show();
    ui.horizontalSlider_contrast->show();
    ui.pushButton_savefile->show();
    ui.line_12->show();
    ui.label_15->show();
    ui.pushButton_right->show();
    ui.label_2->show();
    ui.line_11->show();
    ui.line_26->show();
    ui.label_14->show();
    ui.line_3->show();
    ui.label_10->show();
    ui.pushButton_defaultparameter->show();
    ui.pushButton_left->show();
    ui.label_11->show();
    ui.pushButton_forceIframe->show();
    ui.pushButton_ptzcruisepathcall->show();
    ui.line_8->show();
    ui.pushButton_down->show();
    ui.line_15->show();
    ui.comboBox_qualitydemand->show();
    ui.label_9->show();
    ui.pushButton_ptzcruisepathset->show();
    ui.pushButton_expandfocus->show();
    ui.label_8->show();
    ui.line_6->show();
    ui.line_10->show();
    ui.label_7->show();
    ui.pushButton_farfocus->show();
    ui.line_4->show();
    ui.pushButton_up->show();
    ui.line_19->show();
    ui.pushButton_nearfocus->show();
    ui.pushButton_ptzcruisepointset->show();
    ui.pushButton_scrashPic->show();
    ui.label_6->show();
    ui.pushButton_trackmemoryrun->show();
    ui.line_14->show();
    ui.line_16->show();
    ui.comboBox_ptzcruisepoint->show();
    ui.pushButton_trackmemorystop->show();
    ui.label_5->show();
    ui.pushButton_narrowfocus->show();
    ui.comboBox_ptzcruisepath->show();
    ui.pushButton_trackmemorystart->show();
    ui.comboBox_ptzspeed->show();
    ui.line_7->show();
    ui.pushButton_smallaperture->show();
    ui.horizontalSlider_bright->show();
    ui.label_4->show();
    ui.pushButton_realplay->show();
    ui.pushButton_ptzcruisepointcall->show();
    ui.line_17->show();
    ui.line_18->show();
    ui.line_20->show();
    ui.line_21->show();
    ui.line_23->show();
    ui.line_28->show();
    ui.line_29->show();
	//ui.setupUi(this);
	on_pushButton_realplay_clicked();
	on_pushButton_realplay_clicked();
	
	return;
}

/**  @fn  void __stdcall  RealDataCallBack(LONG lRealHandle,DWORD dwDataType,BYTE *pBuffer,DWORD  dwBufSize, void* dwUser)
 *   @brief data callback funtion
 *   @param (OUT) LONG lRealHandle  
 *   @param (OUT) DWORD dwDataType  
 *   @param (OUT) BYTE *pBuffer  
 *   @param (OUT) DWORD  dwBufSize  
 *   @param (OUT) void* dwUser  
 *   @return none   
 */
void __stdcall  RealDataCallBack(LONG lRealHandle,DWORD dwDataType,BYTE *pBuffer,DWORD  dwBufSize, void* dwUser)
{
    if (dwUser != NULL)
    {
        qDebug("Demmo lRealHandle[%d]: Get StreamData! Type[%d], BufSize[%d], pBuffer:%p\n", lRealHandle, dwDataType, dwBufSize, pBuffer);
    }
}

/*******************************************************************
      Function:   RealPlay::realPlayEncapseInterface
   Description:   ???©à??©Ð????©¸?©¤????
     Parameter:   (IN)   int devicerow     ?????©à?©¤?????©°qlistdevice???©¤??©Ø??©à
                  (IN)   int channelrow    ?????©à?©¤???©¸?©°©¤©¦?¡Â?????©°??¡è©Ð?©¤???©à.
                  (IN)   NET_DVR_CLIENTINFO *clientinfo  Device Infomation 
        Return:   0--©¦???¨²?-1--????¨ª¨²   
**********************************************************************/
int RealPlay::realPlayEncapseInterface(int devicerow, int channelrow, NET_DVR_CLIENTINFO *clientinfo)
{
	QList<DeviceData>::iterator it;
	QList<ChannelData>::iterator it_channel;
	//?©°????©Ø??????????????©°??
	int i = 0;
	for ( it = (*m_qlistdevicetree).begin(); it != (*m_qlistdevicetree).end(); ++it)
	{
	    if (i == devicerow)
	    {
	        break;
	    }
		i++;
	}
	//?©°?????©°??¡è©Ð?©¤???©¸©Ø????????????©¸?©°??
	int j = 0;
	for ( it_channel= (*it).m_qlistchanneldata.begin(); 
		it_channel != (*it).m_qlistchanneldata.end(); ++it_channel)
	{
	    if (j == channelrow)
	    {
	        break;
	    }
		j++;
	}

	//???©À??©¸©¸©È?©´??©¤¡è???????	
	clientinfo->lChannel = (*it_channel).getChannelNum();
    clientinfo->lLinkMode = (*it_channel).getLinkMode();
	char tmp[128] = {0};
	sprintf(tmp, "%s", (*it).getMultiCast().toLatin1().data());
    clientinfo->sMultiCastIP = tmp; 
    //?¨ª©Ø?¡è???
    //
    int realhandle = NET_DVR_RealPlay_V30((*it).getUsrID(), clientinfo, RealDataCallBack,NULL,1);
    //int realhandle = NET_DVR_RealPlay((*it).getUsrID(), clientinfo);
    qDebug("Demo---Protocal:%d", clientinfo->lLinkMode);
    if (realhandle < 0) 
    {	
        QMessageBox::information(this, tr("NET_DVR_RealPlay error"), tr("SDK_LASTERROR=%1").arg(NET_DVR_GetLastError())); 
		return 0;
    }
	else
	{	
		if ((*it_channel).getChannelNum()>32)
		{
			NET_DVR_IPPARACFG ipcfg;
	    	DWORD Bytesreturned;
	    	if (!NET_DVR_GetDVRConfig((*it).getUsrID(), NET_DVR_GET_IPPARACFG,0, 
				&ipcfg, sizeof(NET_DVR_IPPARACFG),&Bytesreturned)) 
	    	{
				QMessageBox::information(this, tr("NET_DVR_GetDVRConfig"), \
	                tr("SDK_LAST_ERROR=%1").arg(NET_DVR_GetLastError()));
				
				return 0;
			}
			if (ipcfg.struIPChanInfo[(*it_channel).getChannelNum()-32-1].byEnable == 0)
			{
				QMessageBox::information(this,tr("NET_DVR_RealPlay error"), \
            		tr("?©À???©¸???©°¡è?¨²???©¸©¸????")); 
				
				return 0;
	    	}
		}
        //QMessageBox::information(this,tr("realPlayEncapseInterface"),tr("realhandle =%1").arg(realhandle));
		m_rpuseridbackup = (*it).getUsrID();

		//???©À???©¸??©¸©¸???¡¤
		(*it_channel).setRealhandle(realhandle);

		//??????©¸©¸???¡¤??????????©´©°???©À
		m_rpcurrentrealhandle = realhandle;
		if (clientinfo->lChannel == 1)
		{
			m_rpfirstrealhandle = realhandle;
		}

		//???©À???????¡À?©°??©¸©¸?©È????????
		(*it).setRealPlayLabel(1);

		//©¦¡ì????0
		int nodetype = 0;
		QModelIndex tmpindex = (*m_rpmodelindex);
		while (tmpindex.isValid() == 1)
		{
			nodetype ++ ;
			tmpindex = tmpindex.parent();		
		}

		QStandardItem *item = NULL;
		if (nodetype == 2)
		{

			QModelIndex specialindex = m_rpmodelindex->child(channelrow,0);
			item = (*m_rpmodel)->itemFromIndex(specialindex);
			item->setIcon(QIcon(":/images/play.bmp"));

		}   
		else if (nodetype == 3)
		{
			QModelIndex  parentindex = m_rpmodelindex->parent();
			item = (*m_rpmodel)->itemFromIndex(parentindex.child(channelrow,0));
			item->setIcon(QIcon(":/images/play.bmp"));
		}
		return 1;
	}
	    
}

void RealPlay::stopRealPlayEncapseInterface()
{
//QMessageBox::information(this,tr("stopRealPlayEncapseInterface"),tr("673"));
	QList<DeviceData>::iterator it;
	QList<ChannelData>::iterator it_channel;
	//?©°????©Ø??????????????©°??
	int i = 0;
	for ( it = (*m_qlistdevicetree).begin(); it != (*m_qlistdevicetree).end(); ++it)
	{
	    if (m_rpuseridbackup == (*it).getUsrID())
	    {
	    //QMessageBox::information(this,tr("stopRealPlayEncapseInterface"),tr("715 i=%1").arg(i));
	        break;
	    }
		//QMessageBox::information(this,tr("stopRealPlayEncapseInterface"),tr("718 i=%1").arg(i));
		i++;
	}
//QMessageBox::information(this,tr("stopRealPlayEncapseInterface"),tr("686"));
	//?©°?????©°??¡è©Ð?©¤???©¸©Ø????????????©¸?©°??
	int j = 0;
	for ( it_channel= (*it).m_qlistchanneldata.begin(); 
		it_channel != (*it).m_qlistchanneldata.end(); ++it_channel)
	{
	    if ((*it_channel).getRealhandle()!=-1)
	    {
//QMessageBox::information(this,tr("stopRealPlayEncapseInterface"),tr("694 j=%1").arg(j));
	        NET_DVR_StopRealPlay((*it_channel).getRealhandle());
			(*it_channel).setRealhandle(-1);

			QModelIndex tmpindex = (*m_rpmodel)->index(0,0).child(i,0).child(j,0);
			QStandardItem *item = (*m_rpmodel)->itemFromIndex(tmpindex);
			item->setIcon(QIcon(":/images/camera.bmp"));

	    }
		j++;
	}
//QMessageBox::information(this,tr("stopRealPlayEncapseInterface"),tr("738"));
	//???©¤?????©°???©¤??©¸©¸?©È??????
	(*it).setRealPlayLabel(0);

}
/************************************************************************
 *        Function            :  startRealPlay
 *        Description         :  start show  realplay 
 *        Input               :  int index ???©à©È?©´©°???©¤??????
 *        Output              :  none
 *        Return              :  none
*************************************************************************/
void RealPlay::startRealPlay(int index)
{
	//?¡è©È??????????©°???©¤?©°??©¸???: 2 ?????? 3 ???? 4 ???©¸
	int nodetype = 0;
	//?????????©°qlistdevice???©¤??©Ø??©à
	int devicerow = 0;
	//?????????©¤???©¸??
	int devicesubchannelnum =0;	
	//???????©¸?©°qlistchannel???©¤??©Ø??©à¨²?????????????0 ????©È??©°0
	int channelrow = 0;

	QModelIndex tmpindex = (*m_rpmodelindex);
	
	while (tmpindex.isValid() == 1)
	{
		//?¡À?¨ª?????????©°??©¸???
		nodetype ++ ;
		tmpindex = tmpindex.parent();		
	}
	if (nodetype == 2)
	{
		//?¡À?¨ª??????©Ø??©à¨²??¨®?©À???©¸??©Ø??©à??0
		devicerow = m_rpmodelindex->row();
		channelrow = 0; 
		QModelIndex tmpsubindex =(*m_rpmodelindex).child(0, 0);
	
		while (tmpsubindex.isValid() == 1)
		{
			//?¡À?¨ª?????????©¤???©¸??
			devicesubchannelnum ++;
			tmpsubindex = (*m_rpmodelindex).child(devicesubchannelnum, 0);		
		}

		
	}
	else if (nodetype == 3)
	{
		//?¡À?¨ª?????????©¸??©Ø??©à
		devicerow = m_rpmodelindex->parent().row();
		channelrow = m_rpmodelindex->row();
	}

	//©¤©´?????©à?©¤©È?©´©°??
	int realplaytotalnum =(index+1)*(index+1);
	//m_rpframe[0].setMinimumSize(710, 610);
	int returnvalue = 0;
	
    //???©°????????¨²????©à?¡§?????©¸¨ª¨²
	if (nodetype ==2)
	{
		if (realplaytotalnum >= (devicesubchannelnum + 1))
		{

			//?©À?????©¤?¡§?????©¸??©¸©¸??©È?©´?
			for (int i = 0; i < devicesubchannelnum; i++)
			{
				NET_DVR_CLIENTINFO tmpclientinfo;
                tmpclientinfo.hPlayWnd = (HWND)m_framePlayWnd[i]->GetPlayWndId();

				int  ret = realPlayEncapseInterface(devicerow, i, &tmpclientinfo);
				if (ret == 1)
				{
					returnvalue = 1;
				}
			}
 	
		}
		else 
		{
			//?©À?????©¤??realplaytotalnum?¡Â???©¸©È?©´?
			for (int i = 0; i < realplaytotalnum; i++)
			{
				NET_DVR_CLIENTINFO tmpclientinfo;
                tmpclientinfo.hPlayWnd = (HWND)m_framePlayWnd[i]->GetPlayWndId();

				int  ret = realPlayEncapseInterface(devicerow, i, &tmpclientinfo);	
				if (ret == 1)
				{
					//QMessageBox::information(this,tr("xxx"),tr("i=%1 returnvalue=%2").arg(i).arg(returnvalue));
					returnvalue = 1;
				}
				//QMessageBox::information(this,tr("ddd"),tr("i=%1 returnvalue=%2").arg(i).arg(returnvalue));
			}
		}

		if (returnvalue == 1)
		{
	        m_rpstartstopflag = 1;
	        //¡è??????¨²??????
	        ui.pushButton_realplay->setText(tr("stop"));
	        //???????©À??????©È?©´©°??
	        ui.comboBox_windowsnum->setDisabled(1);
		}
		m_rpcurrentrealhandle = m_rpfirstrealhandle;
		
		getVideoEffect();
	}

	//???©°???????©¸¨²??¡Â???©à????©Ð????©¸
	if (nodetype == DeviceTreeNode_Channel)
	{
		NET_DVR_CLIENTINFO tmpclientinfo;
        tmpclientinfo.hPlayWnd = (HWND)m_pSelectedPlayWnd->GetPlayWndId();

		int returnvalue = realPlayEncapseInterface(devicerow, channelrow, &tmpclientinfo);
		if (returnvalue == 1)
		{
	        m_rpstartstopflag = 1;
	        //¡è??????¨²??????
	        ui.pushButton_realplay->setText("stop");
	        //???????©À??????©È?©´©°??
	        ui.comboBox_windowsnum->setDisabled(TRUE);
			getVideoEffect();
		}
	}
}

/************************************************************************
 *        Function            :  stopRealPlay
 *        Description         :  stop real play 
 *        Input               :  ????????©È?©´??©¤??©¸©¸???¡¤
 *        Output              :  none
 *        Return              :  none
*************************************************************************/
void RealPlay::stopRealPlay()
{   
    if (m_rpsavestopflag == 1)
    {
    	on_pushButton_savefile_clicked();
	}
	stopRealPlayEncapseInterface();
    m_pframePlay->hide(); //If don't do this, the window is black.
    m_pframePlay->show();
}

/************************************************************************
 *        Function            :  on_comboBox_windowsnum_currentIndexChanged
 *        Description         :  ???©à©È?©´©°??????
 *        Input               :  int index ???????©à©È?©´©°??index+1?©¤????
 *        Output              :  none
 *        Return              :  none
*************************************************************************/
void RealPlay::on_comboBox_windowsnum_currentIndexChanged (int index)
{
    if (m_rpstartstopflag != 0)
    {
        QMessageBox::information(this,tr("???©À©¦¡Â©È?"),
            tr("??¡è??¨²?????©à?©¼???©¤©È?©´?©È?©´©°??"));
        return;
    }
    m_rpwindownumindex = index;
    return;
}

/************************************************************************
 *        Function            :  on_comboBox_qualitydemand_currentIndexChanged
 *        Description         :  ??©À???©Ø©´??????
 *        Input               :  int index ??©À???©Ø©´????0-4
 *        Output              :  none
 *        Return              :  none
*************************************************************************/
void RealPlay::on_comboBox_qualitydemand_currentIndexChanged (int index)
{
    if (m_rpcurrentrealhandle < 0)
    {
        QMessageBox::information(this,tr("SET REAL QUALITY"),
            tr("CURRENT CHANNEL NUM IS NOT REALPLAYING!"));
        return;
    }
	
    if (!NET_DVR_SetPlayerBufNumber(m_rpcurrentrealhandle,(index+1)*10))
    {
    	QMessageBox::information(this,tr("NET_DVR_SetPlayerBufNumber"),
            tr("SDK_LASTERROR=%1").arg(NET_DVR_GetLastError()));
        return;
    }
	else
	{
		QMessageBox::information(this,tr("NET_DVR_SetPlayerBufNumber"),
        	tr("SET SUCCESSFULLY"));
	}
    
}

/************************************************************************
 *        Function            :  on_comboBox_ptzspeed_currentIndexChanged
 *        Description         :  ptz speed set
 *        Input               :  int index ????©´????©¼?? 0-7
 *        Output              :  none
 *        Return              :  none
*************************************************************************/
void RealPlay::on_comboBox_ptzspeed_currentIndexChanged (int index )
{
    if (index == 0)
    {
        m_rpptzspeed = 4;
    }
	else
	{
		m_rpptzspeed = index;
	}
    
    if (!NET_DVR_PTZControlWithSpeed(m_rpcurrentrealhandle,SET_SEQ_SPEED,0,m_rpptzspeed))
    {
    	
        QMessageBox::information(this,tr("NET_DVR_PTZControl Error"),
                tr("SDK_LASTERROR=%1").arg(NET_DVR_GetLastError()));
    }
    else
    {
    	NET_DVR_PTZControlWithSpeed(m_rpcurrentrealhandle,SET_SEQ_SPEED,1,m_rpptzspeed);
    }
}

/************************************************************************
 *        Function            :  on_comboBox_ptzcruisepoint_currentIndexChanged
 *        Description         :  set ptz point
 *        Input               :  int index ???©À???©À??
 *        Output              :  none
 *        Return              :  none
*************************************************************************/
void RealPlay::on_comboBox_ptzcruisepoint_currentIndexChanged (int index)
{
	m_ptzpresetpointindex = index + 1;
	
}

/************************************************************************
 *        Function            :  on_comboBox_ptzcruisepath_currentIndexChanged
 *        Description         :  set ptz path
 *        Input               :  int  index
 *        Output              :  none
 *        Return              :  none
*************************************************************************/
void RealPlay::on_comboBox_ptzcruisepath_currentIndexChanged (int  index)
{
	m_ptzcruisepathindex = index+1;
}

/*******************************************************************
      Function:   RealPlay::on_pushButton_realplay_clicked
   Description:   Start or stop realplay button
     Parameter:   (IN)   ??????  
        Return:   0--©¦???¨²?-1--????¨ª¨²   
**********************************************************************/
void RealPlay::on_pushButton_realplay_clicked()
{
    //User must login.
	if ( *m_rpuserid < 0)
    {
        QMessageBox::information(this,tr("have no login yet"),tr("not login"));
        return;
    }

    //????©È??©°?¨²?????©à????¨²???©´??????©à??©¤?
    if (m_rpstartstopflag == 0)
    {
        m_pframePlay->show();
        m_rpwindownumindex = ui.comboBox_windowsnum->currentIndex();
        startRealPlay(m_rpwindownumindex);
    }
    else
    {
        //????©È??©°???©à??¨²????¨²?????©à 
        stopRealPlay();
        //?©À??????
        m_rpstartstopflag = 0;
        //¡è????????©à????
        ui.pushButton_realplay->setText( QApplication::translate("TranslateClass", 
            "play", 0, QApplication::UnicodeUTF8));
		ui.comboBox_windowsnum->setDisabled(0);
    }

}

/************************************************************************
 *        Function            :  on_pushButton_savefile_clicked
 *        Description         :  save to file
 *        Input               :  none
 *        Output              :  none
 *        Return              :  none
*************************************************************************/
void RealPlay::on_pushButton_savefile_clicked()
{
    if (m_rpstartstopflag == 0)
    {
        QMessageBox::information(this,tr("have no realplay yet"),
            tr("Please Play Video First!"));
        return;
    }
    //????©È??©°?¨²??©Ð?¡è¡À????¨²???©´???©Ð?¡è¡À??©¤???©¤?
    if (m_rpsavestopflag == 0)
    {
        //SAVE_REALDATA_FILEPATH
        QDir directory("");
        QString filepath(SAVE_REALDATA_FILEPATH);
        QString currDate;
        QString currTime;
        currDate = QDateTime::currentDateTime().toString("yyyy-MM-dd");
        currTime = QDateTime::currentDateTime().toString("hh_mm_ss");
    
        filepath.append(currDate);
        filepath.append("/");
        directory.mkpath(filepath);
        filepath.append(currTime);
        filepath.append(".mp4");

        if (!NET_DVR_SaveRealData(m_rpcurrentrealhandle, filepath.toLatin1().data()))
        {
            QMessageBox::information(this,tr("NET_DVR_SaveRealData Error"),
            	tr("SDK_LASTERROR=%1").arg(NET_DVR_GetLastError()));
        }
		else
		{
	    	m_rpsavestopflag =1;
	        ui.pushButton_savefile->setText(QApplication::translate("RealPlayClass", 
	        	"stop record", 0,
	        QApplication::UnicodeUTF8));

		}

    }
    else 
    {   
        if (!NET_DVR_StopSaveRealData(m_rpcurrentrealhandle))
        {
	    	QMessageBox::information(this,tr("NET_DVR_StopSaveRealData Error"),
            	tr("SDK_LASTERROR=%1").arg(NET_DVR_GetLastError()));
        }
		else
		{
			m_rpsavestopflag = 0;
       		ui.pushButton_savefile->setText(QApplication::translate("RealPlayClass", 
           		"record", 0, QApplication::UnicodeUTF8));   
		}
    
    }
}

/************************************************************************
 *        Function            :  on_pushButton_scrashPic_clicked
 *        Description         :  scrash picture
 *        Input               :  none
 *        Output              :  none
 *        Return              :  none
*************************************************************************/
void RealPlay::on_pushButton_scrashPic_clicked()
{
    if (m_rpstartstopflag == 0)
    {
        QMessageBox::information(this,tr("have no realplay yet"),
            tr("Please Play Video First!"));
        return;
    }
    QDir directory("");
    QString filepath(SAVE_REALDATA_FILEPATH);
    QString currDate;
    QString currTime;
    currDate = QDateTime::currentDateTime().toString("yyyy-MM-dd");
    currTime = QDateTime::currentDateTime().toString("_hh_mm_ss");
    filepath.append("PICTURE/");
    directory.mkpath(filepath);
    filepath.append(currDate);
    filepath.append(currTime);
    filepath.append(".JPG");
    //SDK??©´©°????
    if (!NET_DVR_CapturePicture(m_rpcurrentrealhandle, filepath.toLatin1().data()))
    {
    	QMessageBox::information(this,tr("NET_DVR_CapturePicture Error"),
                tr("SDK_LASTERROR=%1").arg(NET_DVR_GetLastError()));
    }
	else
	{
		QMessageBox::information(this,tr("NET_DVR_CapturePicture succ"),
                tr("NET_DVR_CapturePicture succ"));
	}
}

/************************************************************************
 *        Function            :  on_pushButton_forceIframe_clicked
 *        Description         :  force I frame
 *        Input               :  none
 *        Output              :  none
 *        Return              :  none
*************************************************************************/
void RealPlay::on_pushButton_forceIframe_clicked()
{
    if (m_rpstartstopflag == 0)
    {
        QMessageBox::information(this,tr("have no realplay yet"),
            tr("Please Play Video First!"));
        return;
    }
	int channelnum = *m_rpchannelnum ;
	if (*m_rpchannelnum == 0)
	{
		channelnum = 1;
	}
    if (*m_channellinkmode < 4)
    {
        if (!NET_DVR_MakeKeyFrame(*m_rpuserid,channelnum))
        {
        	QMessageBox::information(this,tr("NET_DVR_MakeKeyFrame Error"),
                    tr("SDK_LASTERROR=%1").arg(NET_DVR_GetLastError()));
        }
		else
		{
			QMessageBox::information(this,tr("NET_DVR_MakeKeyFrame succ"),
                tr("NET_DVR_MakeKeyFrame succ"));
		}
		
    }
    else
    {
        if (!NET_DVR_MakeKeyFrameSub(*m_rpuserid,channelnum))
        {
        	QMessageBox::information(this,tr("NET_DVR_MakeKeyFrameSub Error"),
                    tr("SDK_LASTERROR=%1").arg(NET_DVR_GetLastError()));
        }  
		else
		{
			QMessageBox::information(this,tr("NET_DVR_MakeKeyFrameSub succ"),
                tr("NET_DVR_MakeKeyFrameSub succ"));
		}
		
    }

}

/************************************************************************
 *        Function            :  ptzControlRealPlay
 *        Description         :  ptz control 
 *        Input               :  int command ????©´???©À?©Ø?,int flag ??????
 *        Output              :  none
 *        Return              :  none
*************************************************************************/
void RealPlay::ptzControlRealPlay(int command,int flag)
{
	
    if (!NET_DVR_PTZControl(m_rpcurrentrealhandle, command, flag))
    {
    	QMessageBox::information(this,tr("NET_DVR_PTZControl Error"),
                tr("SDK_LASTERROR=%1").arg(NET_DVR_GetLastError()));
    }
}

/************************************************************************
 *        Function            :  on_pushButton_up_clicked
 *        Description         :  up
 *        Input               :  none
 *        Output              :  none
 *        Return              :  none
*************************************************************************/
void RealPlay::on_pushButton_up_clicked()
{
    if (m_ptzupswitch == 0)
    {
        m_ptzupswitch = 1;        
    }
    else
    {
        m_ptzupswitch = 0;
    }
    ptzControlRealPlay(TILT_UP, m_ptzupswitch);
}

/************************************************************************
 *        Function            :  on_pushButton_down_clicked
 *        Description         :  down
 *        Input               :  none
 *        Output              :  none
 *        Return              :  none
*************************************************************************/
void RealPlay::on_pushButton_down_clicked()
{
    if (m_ptzdownswitch == 0)
    {
        m_ptzdownswitch = 1;      
    }
    else
    {
        m_ptzdownswitch = 0;
    }
    ptzControlRealPlay(TILT_DOWN, m_ptzdownswitch);

}

/************************************************************************
 *        Function            :  on_pushButton_left_clicked
 *        Description         :  left
 *        Input               :  none
 *        Output              :  none
 *        Return              :  none
*************************************************************************/
void RealPlay::on_pushButton_left_clicked()
{
    if (m_ptzleftswitch == 0)
    {
        m_ptzleftswitch = 1;      
    }
    else
    {
        m_ptzleftswitch = 0;
    }
    ptzControlRealPlay(PAN_LEFT,m_ptzleftswitch);

}

/************************************************************************
 *        Function            :  on_pushButton_right_clicked
 *        Description         :  right
 *        Input               :  none
 *        Output              :  none
 *        Return              :  none
*************************************************************************/
void RealPlay::on_pushButton_right_clicked()
{
    if (m_ptzrghtswitch == 0)
    {
        m_ptzrghtswitch = 1;      
    }
    else
    {
        m_ptzrghtswitch = 0;
    }
    ptzControlRealPlay(PAN_RIGHT,m_ptzrghtswitch);

}

/************************************************************************
 *        Function            :  on_pushButton_narrowfocus_clicked
 *        Description         :  narrow focus
 *        Input               :  none
 *        Output              :  none
 *        Return              :  none
*************************************************************************/
void RealPlay::on_pushButton_narrowfocus_clicked()
{
    if (m_ptznarrowswitch == 0)
    {
        m_ptznarrowswitch = 1;        
    }
    else
    {
        m_ptznarrowswitch = 0;
    }
    ptzControlRealPlay(ZOOM_IN,m_ptznarrowswitch);

}

/************************************************************************
 *        Function            :  on_pushButton_expandfocus_clicked
 *        Description         :  expand focus
 *        Input               :  none
 *        Output              :  none
 *        Return              :  none
*************************************************************************/
void RealPlay::on_pushButton_expandfocus_clicked()
{
    if (m_ptzexpandswitch == 0)
    {
        m_ptzexpandswitch = 1;        
    }
    else
    {
        m_ptzexpandswitch = 0;
    }
    ptzControlRealPlay(ZOOM_OUT,m_ptzexpandswitch);

}

/************************************************************************
 *        Function            :  on_pushButton_nearfocus_clicked
 *        Description         :  near focus
 *        Input               :  none
 *        Output              :  none
 *        Return              :  none
*************************************************************************/
void RealPlay::on_pushButton_nearfocus_clicked()
{
    if (m_ptznearswitch == 0)
    {
        m_ptznearswitch = 1;      
    }
    else
    {
        m_ptznearswitch = 0;
    }
    ptzControlRealPlay(FOCUS_NEAR,m_ptznearswitch);

}

/************************************************************************
 *        Function            :  on_pushButton_farfocus_clicked
 *        Description         :  far focus
 *        Input               :  none
 *        Output              :  none
 *        Return              :  none
*************************************************************************/
void RealPlay::on_pushButton_farfocus_clicked()
{
    if (m_ptzfarswitch == 0)
    {
        m_ptzfarswitch = 1;       
    }
    else
    {
        m_ptzfarswitch = 0;
    }
    ptzControlRealPlay(FOCUS_FAR,m_ptzfarswitch);

}

/************************************************************************
 *        Function            :  on_pushButton_largeaperture_clicked
 *        Description         :  large aperture
 *        Input               :  none
 *        Output              :  none
 *        Return              :  none
*************************************************************************/
void RealPlay::on_pushButton_largeaperture_clicked()
{
    if (m_ptzbigswitch == 0)
    {
        m_ptzbigswitch = 1;       
    }
    else
    {
        m_ptzbigswitch = 0;
    }
    ptzControlRealPlay(IRIS_OPEN,m_ptzbigswitch);

}

/************************************************************************
 *        Function            :  on_pushButton_smallaperture_clicked
 *        Description         :  amsll aperture
 *        Input               :  none
 *        Output              :  none
 *        Return              :  none
*************************************************************************/
void RealPlay::on_pushButton_smallaperture_clicked()
{
    if (m_ptzsmallswitch == 0)
    {
        m_ptzsmallswitch = 1;     
    }
    else
    {
        m_ptzsmallswitch = 0;
    }
    ptzControlRealPlay(IRIS_CLOSE,m_ptzsmallswitch);
}


/************************************************************************
 *        Function            :  on_pushButton_ptzcruisepointcall_clicked
 *        Description         :  ptzcruisepointcall
 *        Input               :  none
 *        Output              :  none
 *        Return              :  none
*************************************************************************/  
void RealPlay::on_pushButton_ptzcruisepointcall_clicked()
{
    if (!NET_DVR_PTZPreset(m_rpcurrentrealhandle,GOTO_PRESET,m_ptzpresetpointindex))
    {
    	
        QMessageBox::information(this,tr("NET_DVR_PTZControl Error"),
                tr("SDK_LASTERROR=%1").arg(NET_DVR_GetLastError()));
    }

}

/************************************************************************
 *        Function            :  on_pushButton_ptzcruisepointset_clicked
 *        Description         :  ptzcruisepointset
 *        Input               :  none
 *        Output              :  none
 *        Return              :  none
*************************************************************************/
void RealPlay::on_pushButton_ptzcruisepointset_clicked()
{
	m_ptzpreset = new PtzPreset(m_rpcurrentrealhandle);
	m_ptzpreset->show();
}

/************************************************************************
 *        Function            :  on_pushButton_ptzcruisepathcall_clicked
 *        Description         :  ptzcruisepathcall
 *        Input               :  none
 *        Output              :  none
 *        Return              :  none
*************************************************************************/
void RealPlay::on_pushButton_ptzcruisepathcall_clicked()
{	
	if (m_ptzcruiserunning == 0)
	{
	   	if (!NET_DVR_PTZCruise(m_rpcurrentrealhandle, RUN_SEQ, m_ptzcruisepathindex, 0, 0))
	    {
	    	
	        QMessageBox::information(this,tr("NET_DVR_PTZControl Error"),
	                tr("SDK_LASTERROR=%1").arg(NET_DVR_GetLastError()));
	    }
	}
 	else
 	{
		if (!NET_DVR_PTZCruise(m_rpcurrentrealhandle,STOP_SEQ,m_ptzcruisepathindex,0,0))
	    {
	    	
	        QMessageBox::information(this,tr("NET_DVR_PTZControl Error"),
	                tr("SDK_LASTERROR=%1").arg(NET_DVR_GetLastError()));
	    }
	}

}

/************************************************************************
 *        Function            :  on_pushButton_ptzcruisepathset_clicked
 *        Description         :  ptzcruisepathset
 *        Input               :  none
 *        Output              :  none
 *        Return              :  none
*************************************************************************/
void RealPlay::on_pushButton_ptzcruisepathset_clicked()
{

	 m_ptzcruise =new PtzCruise(m_rpcurrentrealhandle);
	 m_ptzcruise->show();

}

/************************************************************************
 *        Function            :  on_pushButton_trackmemorystart_clicked
 *        Description         :  trackmemorystart
 *        Input               :  none
 *        Output              :  none
 *        Return              :  none
*************************************************************************/
void RealPlay::on_pushButton_trackmemorystart_clicked()
{
	if (!NET_DVR_PTZTrack(m_rpcurrentrealhandle,STA_MEM_CRUISE))
    {
    	
        QMessageBox::information(this,tr("NET_DVR_PTZControl Error"),
                tr("SDK_LASTERROR=%1").arg(NET_DVR_GetLastError()));
    }
}

/************************************************************************
 *        Function            :  on_pushButton_trackmemorystop_clicked
 *        Description         :  pushButton_trackmemorystop clicked
 *        Input               :  none
 *        Output              :  none
 *        Return              :  none
*************************************************************************/
void RealPlay::on_pushButton_trackmemorystop_clicked()
{
	if (!NET_DVR_PTZTrack(m_rpcurrentrealhandle,STO_MEM_CRUISE))
    {
		
        QMessageBox::information(this,tr("NET_DVR_PTZControl Error"),
                tr("SDK_LASTERROR=%1").arg(NET_DVR_GetLastError()));
    }

}

/************************************************************************
 *        Function            :  on_pushButton_trackmemoryrun_clicked
 *        Description         :  pushButton_trackmemoryrun clicked
 *        Input               :  none
 *        Output              :  none
 *        Return              :  none
*************************************************************************/
void RealPlay::on_pushButton_trackmemoryrun_clicked()
{
	if (!NET_DVR_PTZTrack(m_rpcurrentrealhandle,RUN_CRUISE))
    {
        QMessageBox::information(this,tr("NET_DVR_PTZControl Error"),
                tr("SDK_LASTERROR=%1").arg(NET_DVR_GetLastError()));
    }

}

/************************************************************************
 *        Function            :  getVideoEffect
 *        Description         :  getVideoEffect
 *        Input               :  none
 *        Output              :  none
 *        Return              :  none
*************************************************************************/
void RealPlay::getVideoEffect()
{
    if (!NET_DVR_ClientGetVideoEffect(m_rpcurrentrealhandle,(DWORD *)&m_rpbrightvalue,
       (DWORD*)&m_rpcontrastvalue,(DWORD*)&m_rpsaturationvalue,(DWORD *)&m_rphuevalue))
    {
    	
        QMessageBox::information(this,tr("NET_DVR_ClientGetVideoEffect"),
                tr("SDK_LASTERROR=%1").arg(NET_DVR_GetLastError()));
    }
	else
	{ 
	    ui.horizontalSlider_bright->setValue(m_rpbrightvalue);
	    ui.horizontalSlider_contrast->setValue(m_rpcontrastvalue);
	    ui.horizontalSlider_saturation->setValue(m_rpsaturationvalue);
	    ui.horizontalSlider_hue->setValue(m_rphuevalue);
	    ui.horizontalSlider_volume->setValue(m_rpvolumvalue);
	}

}

/************************************************************************
 *        Function            :  setVideoEffect
 *        Description         :  setVideoEffect
 *        Input               :  none
 *        Output              :  none
 *        Return              :  none
*************************************************************************/
void RealPlay::setVideoEffect()
{
	if (!NET_DVR_ClientSetVideoEffect(m_rpcurrentrealhandle,m_rpbrightvalue,
            m_rpcontrastvalue,m_rpsaturationvalue,m_rphuevalue))
    {
    	
        if (m_rpsliderflag==1)
	    {
	    	
            QMessageBox::information(this,tr("NET_DVR_ClientSetVideoEffect"),
                tr("SDK_LASTERROR=%1").arg(NET_DVR_GetLastError()));
        }
        return;
    }
    ui.horizontalSlider_bright->setValue(m_rpbrightvalue);
    ui.horizontalSlider_contrast->setValue(m_rpcontrastvalue);
    ui.horizontalSlider_saturation->setValue(m_rpsaturationvalue);
    ui.horizontalSlider_hue->setValue(m_rphuevalue);
    ui.horizontalSlider_volume->setValue(m_rpvolumvalue);
    return;
}

/************************************************************************
 *        Function            :  on_horizontalSlider_bright_valueChanged
 *        Description         :  bright
 *        Input               :  int value ???©À©Ø©Ø??
 *        Output              :  none
 *        Return              :  none
*************************************************************************/      
void RealPlay::on_horizontalSlider_bright_valueChanged ( int value)
{
    m_rpbrightvalue = value;
    setVideoEffect();
}

/************************************************************************
 *        Function            :  on_horizontalSlider_contrast_valueChanged
 *        Description         :  contrast
 *        Input               :  int value ???©À??????
 *        Output              :  none
 *        Return              :  none
*************************************************************************/  
void RealPlay::on_horizontalSlider_contrast_valueChanged ( int value)
{
    m_rpcontrastvalue = value;
    setVideoEffect();
}

/************************************************************************
 *        Function            :  on_horizontalSlider_saturation_valueChanged
 *        Description         :  saturation
 *        Input               :  none ???©À??????
 *        Output              :  none
 *        Return              :  none
*************************************************************************/ 
void RealPlay::on_horizontalSlider_saturation_valueChanged ( int value)
{
    m_rpsaturationvalue = value;
    setVideoEffect();
}

/************************************************************************
 *        Function            :  on_horizontalSlider_hue_valueChanged
 *        Description         :  hue
 *        Input               :  int value ???©À????
 *        Output              :  none
 *        Return              :  none
*************************************************************************/
void RealPlay::on_horizontalSlider_hue_valueChanged ( int value)
{
    m_rphuevalue = value;
    setVideoEffect();
}

/************************************************************************
 *        Function            :  on_horizontalSlider_volume_valueChanged
 *        Description         :  volume
 *        Input               :  int value ???©À??©Ø©´
 *        Output              :  none
 *        Return              :  none
*************************************************************************/
void RealPlay::on_horizontalSlider_volume_valueChanged ( int value)
{
    m_rpvolumvalue = value;
    if (!NET_DVR_Volume(m_rpcurrentrealhandle,(unsigned short)value))
    {
        if (m_rpsliderflag ==1)
	    {
            QMessageBox::information(this,tr("???????????©À"),
				tr("SDK_LASTERROR=%1").arg(NET_DVR_GetLastError()));
        }
    }
}

/************************************************************************
 *        Function            :  on_pushButton_defaultparameter_clicked
 *        Description         :  defaultparameter ???©À©¤??¡è????
 *        Input               :  none 
 *        Output              :  none
 *        Return              :  none
*************************************************************************/
void RealPlay::on_pushButton_defaultparameter_clicked()
{
    m_rpbrightvalue = 6;
    m_rpcontrastvalue = 6;
    m_rpsaturationvalue = 6;
    m_rphuevalue = 6;
    m_rpvolumvalue = 37768;
	//???©À????????????©Ø©´????
    setVideoEffect();   
    if (!NET_DVR_Volume(m_rpcurrentrealhandle, 0x8000))
    {
        QMessageBox::information(this,tr("NET_DVR_Volume"),
                tr("SDK_LASTERROR=%1").arg(NET_DVR_GetLastError()));
    }
}

