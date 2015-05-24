
//******************************
//
//  author : lishidan
//
//  create time: 2007-10-23
//
//  last modify time:2007-10-23
//
//  Version: 0.1
//
//******************************
//#include "stdafx.h"
#include "yh.h"

CYh::CYh( CDataPool *dp )
{
    //timer = new QTimer;
    //timer->start( 20 );

    m_dp = dp;
	updateRegion();

    randomx = m_dp->randomx;
    randomy = m_dp->randomy;
    colortable = m_dp->colortable;
	colortableTail = m_dp->colortableTail;
    fbpPPI = m_dp->fbpPPI;
    layerPPI = m_dp->layerPPI;
	fbpMINI = m_dp->fbpMINI;
	layerMINI = m_dp->layerMINI;
/*add by shen
    fbpAR=m_dp->fbpAR;
    layerAR=m_dp->layerAR;
    bAR=true;//need to be modified through modifying datapool class.
    artailSwitch=true;
*///end  by shen

    bYh = true;
	bWin = m_dp->dispState.enWindowDisp;
    yh_index = 0;
    yhLen=YH_NUM;
    setYhWeight( 60 );

	winColorTable=m_dp->winColorTable;

	tailSwitch = 1;
    tailGate=200;
    setYhTail(20);

    //connect(timer,SIGNAL(timeout()),this,SLOT(yh()));
}

CYh::~CYh()
{
    TRACE("CYh::~CYh()");
}
/*add by shen
int  CYh::arDecay()
{
    return 0;
}

int CYh::ML_GVID_SetArTail(int theTail)
{
    return 0;
}
int CYh::setArBackgroundColor(unsigned int theColor)
{
   return 0;
}

*///end by shen

void CYh::setYhWeight( int yhmul )
{
	yhDecWeight = yhmul;

	updateTransTable();
}

void CYh::setYhTail( int yhTail )
{
	tailDecay = yhTail ;                                              //尾迹衰减设置

	updateTransTableTail();
}

void CYh::setTailSwitch(bool theSwitch)
{
	tailSwitch = theSwitch;
}

void CYh::setTailGate(unsigned int theGate)
{
	tailGate = theGate;
}

void CYh::updateTransTable()
{
	int v;
	for(int n=0;n<256;n++)
	{
		v=n;
		v -= yhDecWeight;
		v = v<0 ? 0 : v;
		transTable[n]=v & 0x0ff;
	}
}

void CYh::updateTransTableTail()       //尾迹衰减
{
	int v;
	for(int n=0;n<256;n++)
	{
		v=n;
		v -= tailDecay;
		v = v<0 ? 0 : v;
		transTableTail[n]=v & 0x0ff;
	}
}

void CYh::yh()
{
    int x,y;

    if(bYh)
    {
        for(int i=0;i<yhLen;i++)
        {
            x = randomx[ (yh_index+i) ];
            y = randomy[ (yh_index+i) ]; //调整余晖位置

            if((x<PPI_WIDTH)&&(y<PPI_HEIGHT))
            {
				x += PPI_XSTART;
				y += PPI_YSTART; 

				//if(maskTable[y][x]>0)goto winyh;

				if (layerPPI[y][x].first == 0)goto winyh;

				if (tailSwitch)                            //尾迹开关打开
				{
					if (layerPPI[y][x].bmask)
					{
						layerPPI[y][x].first = transTableTail[layerPPI[y][x].first];
						layerPPI[y][x].nfirst=colortableTail[layerPPI[y][x].first];
						if (layerPPI[y][x].first ==0) layerPPI[y][x].bmask = false;
					}
					else
					{
						if ((layerPPI[y][x].first  > tailGate)&&( transTable[layerPPI[y][x].first] < tailGate))
						{
							layerPPI[y][x].first = transTable[layerPPI[y][x].first];
							layerPPI[y][x].nfirst=colortableTail[layerPPI[y][x].first];
							layerPPI[y][x].bmask = 1;
						}
						else
						{
							layerPPI[y][x].first = transTable[layerPPI[y][x].first];
							layerPPI[y][x].nfirst=colortable[layerPPI[y][x].first];
						}
					}
				}
				else                                                                     //尾迹开关未打开
				{
					layerPPI[y][x].first = transTable[layerPPI[y][x].first];
					layerPPI[y][x].nfirst=colortable[layerPPI[y][x].first];
				}


                if(layerPPI[y][x].curlayer<2)
                {
                    //layerPPI[y][x].nfirst=colortable[layerPPI[y][x].first];
                    ////fbp[y][x] = layerPPI[y][x].nfirst;

					if(layerPPI[y][x].bmap)
						fbpPPI[y][x]=layerPPI[y][x].nfirst ^ layerPPI[y][x].nmap;
					else
						fbpPPI[y][x]=layerPPI[y][x].nfirst;
                }

		winyh:
				x -= PPI_XSTART;
				y -= PPI_YSTART;//调整余晖位置
            }


			if((x<WIN_WIDTH)&&(y<WIN_HEIGHT))
			{
				if(!bWin)continue;

                    x += WIN_XSTART;
                    y += WIN_YSTART;

					//if(maskTable[y][x]>0)continue;

					if (layerMINI[y][x].first == 0)continue;

                    if (tailSwitch)                            //尾迹开关打开
				{
					if (layerMINI[y][x].bmask)
					{
						layerMINI[y][x].first = transTableTail[layerMINI[y][x].first];
						layerMINI[y][x].nfirst=colortableTail[layerMINI[y][x].first];
						if (layerMINI[y][x].first ==0) layerMINI[y][x].bmask = false;
					}
					else
					{
						if ((layerMINI[y][x].first  > tailGate)&&( transTable[layerMINI[y][x].first] < tailGate))
						{
							layerMINI[y][x].first = transTable[layerMINI[y][x].first];
							layerMINI[y][x].nfirst=colortableTail[layerMINI[y][x].first];
							layerMINI[y][x].bmask = 1;
						}
						else
						{
							layerMINI[y][x].first = transTable[layerMINI[y][x].first];
							layerMINI[y][x].nfirst=winColorTable[layerMINI[y][x].first];
						}
					}
				}
				else                                                                     //尾迹开关未打开
				{
					layerMINI[y][x].first = transTable[layerMINI[y][x].first];
					layerMINI[y][x].nfirst=winColorTable[layerMINI[y][x].first];
				}

                    
                    if(layerMINI[y][x].curlayer<2)
                    {
                        //layerMINI[y][x].nfirst=winColorTable[layerMINI[y][x].first];
                        fbpMINI[y][x] = layerMINI[y][x].nfirst;
                    }
            }
/* add by shen
            if((x<AR_WIDTH)&&(y<AR_HEIGHT))
            {
                if(!bAR)continue;

                    x += AR_XSTART;
                    y += AR_YSTART;

                    //if(maskTable[y][x]>0)continue;

                    if (layerAR[y][x].first == 0)continue;

                if (artailSwitch)                            //尾迹开关打开
                {
                    if (1) //(layerAR[y][x].bmask)
                    {
                        layerAR[y][x].first = transTableTail[layerAR[y][x].first];
                        layerAR[y][x].nfirst=colortableTail[layerAR[y][x].first];
                        if (layerAR[y][x].first ==0) layerAR[y][x].bmask = false;
                    }
                    else
                    {
                        if ((layerAR[y][x].first  > tailGate)&&( transTable[layerAR[y][x].first] < tailGate))
                        {
                            layerAR[y][x].first = transTable[layerAR[y][x].first];
                            layerAR[y][x].nfirst=colortableTail[layerAR[y][x].first];
                            layerAR[y][x].bmask = 1;
                        }
                        else
                        {
                            layerAR[y][x].first = transTable[layerAR[y][x].first];
                            layerAR[y][x].nfirst=winColorTable[layerAR[y][x].first];
                        }
                    }
                }
                else                                                                     //尾迹开关未打开
                {
                    layerAR[y][x].first = transTable[layerAR[y][x].first];
                    layerAR[y][x].nfirst=winColorTable[layerAR[y][x].first];
                }


                    if(layerAR[y][x].curlayer<2)
                    {
                        //layerAR[y][x].nfirst=winColorTable[layerAR[y][x].first];
                        fbpAR[y][x] = layerAR[y][x].nfirst;
                    }
            }

*///end by shen
        }

        yh_index = yh_index+yhLen;
		if(yh_index>=RND_LEN)yh_index=0;
    }
}

void CYh::updateRegion(void)
{
	PPI_XSTART=m_dp->PPI_XSTART;
	PPI_YSTART=m_dp->PPI_YSTART;
	PPI_WIDTH=m_dp->PPI_WIDTH;
	PPI_HEIGHT=m_dp->PPI_HEIGHT;

	WIN_XSTART=m_dp->WIN_XSTART;
	WIN_YSTART=m_dp->WIN_YSTART;
	WIN_WIDTH=m_dp->WIN_WIDTH;
	WIN_HEIGHT=m_dp->WIN_HEIGHT;

	AR_XSTART=m_dp->AR_XSTART;
	AR_YSTART=m_dp->AR_YSTART;
	AR_WIDTH=m_dp->AR_WIDTH;
	AR_HEIGHT=m_dp->AR_HEIGHT;
}


void CYh::updateFbp(void)//更新绘图显存区地址
{
	fbpPPI=m_dp->fbpPPI;
	fbpMINI=m_dp->fbpMINI;
//    fbpAR=m_dp->fbpAR;//add by shen
}
