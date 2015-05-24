
//******************************
//
//  author : lishidan
//
//  create time: 2007-9-5
//
//  last modify time:2007-10-23
//
//  Version: 1.5
//
//******************************

//#include "stdafx.h"
#include "ppi.h"
#include "math.h"


CPPI::CPPI( CDataPool *dp )
{
    m_dp = dp;


    addr_near_x = m_dp->addr_near_x;
    addr_near_y = m_dp->addr_near_y;
    addr_far_x = m_dp->addr_far_x;
    addr_far_y = m_dp->addr_far_y;
    colortable = m_dp->colortable;
    fbp = m_dp->fbpPPI;
    layer = m_dp->layerPPI;
	winColorTable=m_dp->winColorTable;
	fbpMINI = m_dp->fbpMINI;
	layerMINI = m_dp->layerMINI;

	updateRegion();
    bDivert = m_dp->dispState.enDivert;
    bSplitDisp = m_dp->dispState.enSplitDisp;
    bWindowDisp = m_dp->dispState.enWindowDisp;
    bEchoWiden = m_dp->dispState.enEchoWiden;
    dispMode = m_dp->dispState.dispMode;
    moveMode = m_dp->dispState.moveMode;
	scopeMode = m_dp->dispState.scopeMode;

    xorg = m_dp->dispState.xorg;
    yorg = m_dp->dispState.yorg;

    gain = m_dp->dispState.gain;
    base = m_dp->dispState.base;
	updateTransTable();
    range = m_dp->dispState.range;

    bFirstInfo = m_dp->dispState.enFirstInfo;
	benCloseFlag = m_dp->dispState.enCloseFlag;
    northIndex = m_dp->dispState.northIndex;
    prowIndex = m_dp->dispState.prowIndex;

    bScanLine = false;

    prowCorrectIndex = 0;
    distanceCorrectIndex = 0;
    halfwidth = 10;
    distancelen = 5;
	dispRadius = 600;
	scanLineColor = MFB_BLUE;
	hollowNum=0;

    setWinOrigin(PPI_XSTART+PPI_WIDTH/2-400,PPI_YSTART+PPI_HEIGHT/2-200);
    setWindowDisp(false);

	//video_data = new VIDEODATATYPE[CNTVIDEO];
}

CPPI::~CPPI()
{
    TRACE("CPPI::~CPPI()");
}

void CPPI::setOrigin( int mx, int my )
{
    if((mx>PPI_XSTART) && (mx<PPI_XSTART+PPI_WIDTH) && (my>PPI_YSTART) && (my<PPI_YSTART+PPI_HEIGHT))
    {
        xorg = mx;
        yorg = my;
    }
}

void CPPI::resetOrigin()
{
    xorg = PPI_XSTART+PPI_WIDTH/2;
    yorg = PPI_YSTART+PPI_HEIGHT/2;
}

void CPPI::setGain( int g ){gain = g;updateTransTable();}

void CPPI::setBase( int b ){ base = b;updateTransTable();}

void CPPI::updateTransTable()
{
//	int v;
	for(int n=0;n<256;n++)
	{
		//v = n;  
		//v = (v+base)*gain/100;          //该版本暂时不设置增益调整 
		//v = v<0? 0 : v;
		//v=n+base;
		if(n<base)
			transTable[n]=0;                           //非基准调整，只是小于门限的值不显示为0
		else
			transTable[n] = n;
	}
}

bool CPPI::isValid( int &x, int &y )
{
    //return ( (x>=PPI_XSTART) && (x<PPI_XSTART+PPI_WIDTH) && (y>=PPI_YSTART) && (y<PPI_YSTART+PPI_HEIGHT) ) || \
    //       ( (x>=WIN_XSTART) && (x<WIN_XSTART+WIN_WIDTH) && (y>=WIN_YSTART) && (y<WIN_YSTART+WIN_HEIGHT) );
	return ( (x>=PPI_XSTART) && (x<PPI_XSTART+PPI_WIDTH) && (y>=PPI_YSTART) && (y<PPI_YSTART+PPI_HEIGHT)  );
}

void CPPI::setFirstPixel(int x, int y, VIDEODATATYPE depth)
{
//depth += base;
//if(depth<0)depth=0;
    //if(isValid(x,y))
	//if(maskTable[y][x]==0)
	{
		if(layer[y][x].curlayer<2)
		{
			if(layer[y][x].first<depth)//比大写入
				{
				layer[y][x].nfirst=colortable[depth];
				layer[y][x].first=depth;
				//layer[y][x].curlayer=1;
				//fbp[y][x]=colortable[depth];

				if(layer[y][x].bmap)
					fbp[y][x]=colortable[depth] ^ layer[y][x].nmap;
				else
					fbp[y][x]=colortable[depth];
				}
			else
				;
		}
		else if(layer[y][x].curlayer>TOP)
		{

		}
		else
		{
			if(layer[y][x].first<depth)
				{
				layer[y][x].nfirst=colortable[depth];
				layer[y][x].first=depth;
				}
		}
	}
}

void CPPI::updateAziBase()
{
	switch(dispMode)
	{
	case 0: //正北向上
		prowIndex=(int)floorf(m_dp->shipState.prowAzi/AZIDIS)%4096;
		northIndex=0;
		break;
		
	case 1://舰首向上
		prowIndex=0;
		northIndex=(int)floorf((360.0-m_dp->shipState.prowAzi)/AZIDIS)%4096;
		break;
		
	case 2: //航向向上
		prowIndex=((int)floorf((m_dp->shipState.prowAzi-m_dp->shipState.sailingAzi)/AZIDIS)+4096)%4096;
		northIndex=((int)floorf((360.0-m_dp->shipState.prowAzi)/AZIDIS)+prowIndex)%4096;
		
		break;

	}

	prowIndex=(prowIndex+prowCorrectIndex+4096)%4096; //船首校正

	m_dp->dispState.prowIndex=prowIndex;
	m_dp->dispState.northIndex=northIndex;
	
}


void CPPI::updateCorrectIndex()//the whole function discomment once by shen 2015.5.15,little effect
{
/*
distanceCorrectIndex= (int)floorf(  m_dp->dispState.distanceCorrect / DOTDIS[m_dp->dispState.mileKilo+m_dp->dispState.range]);

if(distanceCorrectIndex<0)distanceCorrectIndex += 1;

prowCorrectIndex= (int) floorf( m_dp->dispState.prowCorrect / AZIDIS);

if(prowCorrectIndex<0)prowCorrectIndex +=1;
/**/

}

void CPPI::ppiDraw(s_ppi_video_for_disp* dispdat)
{
	int ta;//绘图方位
	int j;

	if(bFirstInfo)
	{
		video_data = dispdat->videodata;
		//memcpy(video_data,dispdat->videodata,CNTVIDEO);
		if(hollowNum==0)
		{
			for(j=0;j<CNTVIDEO;j++)//增益及基准调整
			{
				video_data[j]=transTable[video_data[j]];
			}

		}
		else
		{
			for(j=CNTVIDEO-1;j>=0;j--)//增益及基准调整
			{
				if(j<hollowNum)
					video_data[j]=0;
				else
					video_data[j]=transTable[video_data[j-hollowNum]];		
			}
		}
		switch(scopeMode)
		{
		case 0:
			for(j=0;j<dispdat->znum;j++)
			{
				ta=(dispdat->azicnt[j] + prowIndex)%4096;
				BScopeDraw(ta);
			}
			break;
		case 1:
			for(j=0;j<dispdat->znum;j++)
			{
				ta=(dispdat->azicnt[j] + prowIndex)%4096;
				ppiDraw(ta);
			}
			break;
		case 2:

			for(j=0;j<dispdat->znum;j++)
			{
				ta=(dispdat->azicnt[j] + prowIndex)%4096;
				EScopeDraw(ta);
			}
			break;
		default:
			break;
		}


	}

}

void CPPI::ppiDrawScanLine(int a)
{
	int ta,an;
	int x,y,i;

	if(isScanLine()){
		ta=(a + prowIndex)%4096;

		if(dispRadius<=ADDR_NEAR_SMP_LEN){   //绘图半径小于512
			for(an=0;an<3;an++)
			{
				ta = (ta+an)%4096;

				for(i=0;i<dispRadius;i++)//画扫描线
				{
					x=addr_near_x[ta][i]+xorg;
					y=-addr_near_y[ta][i]+yorg;

					if(isValid(x,y))// && maskTable[y][x]==0)
					{
						if(layer[y][x].curlayer<2)
						{				
							fbp[y][x]=scanLineColor;
						}
					}
				}
			}
		}
		else{  //绘图半径大于512
			for(an=0;an<3;an++)
			{
				ta = (ta+an)%4096;

				for(i=0;i<ADDR_NEAR_SMP_LEN;i++)//画近区扫描线
				{
					x=addr_near_x[ta][i]+xorg;
					y=-addr_near_y[ta][i]+yorg;

					if(isValid(x,y))// && maskTable[y][x]==0)
					{
						if(layer[y][x].curlayer<2)
						{				
							fbp[y][x]=scanLineColor;
						}
					}
				}

				for(i=0;i<dispRadius-ADDR_NEAR_SMP_LEN;i++)//画远区扫描线
				{
					x=addr_far_x[ta*2][i]+xorg;
					y=-addr_far_y[ta*2][i]+yorg;

					if(isValid(x,y))// && maskTable[y][x]==0)
					{
						if(layer[y][x].curlayer<2)
						{				
							fbp[y][x]=scanLineColor;
						}
					}
				}

			}

		}

	}

}
void CPPI::ppiClearScanLine(int a)
{
	int ta,an;
	int x,y,i;

	if(isScanLine()){
		ta=(a + prowIndex)%4096;

		if(dispRadius<=ADDR_NEAR_SMP_LEN){   //绘图半径小于512
			for(an=0;an<3;an++)
			{
				ta = (ta+an)%4096;

				for(i=0;i<dispRadius;i++)//画扫描线
				{
					x=addr_near_x[ta][i]+xorg;
					y=-addr_near_y[ta][i]+yorg;

					if(isValid(x,y))// && maskTable[y][x]==0)
					{
						if(layer[y][x].curlayer<2)
						{				
							fbp[y][x]=layer[y][x].nfirst;
						}
					}
				}
			}
		}
		else{  //绘图半径大于512
			for(an=0;an<3;an++)
			{
				ta = (ta+an)%4096;

				for(i=0;i<ADDR_NEAR_SMP_LEN;i++)//画近区扫描线
				{
					x=addr_near_x[ta][i]+xorg;
					y=-addr_near_y[ta][i]+yorg;

					if(isValid(x,y))// && maskTable[y][x]==0)
					{
						if(layer[y][x].curlayer<2)
						{				
							fbp[y][x]=layer[y][x].nfirst;
						}
					}
				}

				for(i=0;i<dispRadius-ADDR_NEAR_SMP_LEN;i++)//画远区扫描线
				{
					x=addr_far_x[ta*2][i]+xorg;
					y=-addr_far_y[ta*2][i]+yorg;

					if(isValid(x,y))// && maskTable[y][x]==0)
					{
						if(layer[y][x].curlayer<2)
						{				
							fbp[y][x]=layer[y][x].nfirst;
						}
					}
				}

			}

		}

	}

}


void CPPI::ppiDraw()
{ 
  
}

void CPPI::extractVideoData( int i )  //提取视频数据,并进行增益基准调整, 以及距离校正
{

}

void CPPI::BScopeDraw( int azicnt )
{
	int i,x,y,readytobreak=0;
	int v;

	x = (int)azicnt/3.4;
	if(x>=1200)return;

	for(  i=0;i<600;i++ )
	{
		v = video_data[i];
		if(v<base)
			continue;
		else{
			//v += base;
			if(v<=0)continue;
		}

		y = i+300;

		if( isValid(x,y) )
		{
			setFirstPixel( x, y, v);
		}
		//else
		//{
		//	if(readytobreak==5)
		//	{
		//		//printf("break when i=%d\n",i);
		//		break;
		//	}
		//	else
		//		readytobreak++;
		//}
	}

	bool dowin;
	if(bWindowDisp)//bWindowDisp
	{

		dowin=false;
		if(azicnt>=win_aziIndex-340 && azicnt<win_aziIndex+340)dowin=true;

		if(dowin)
		{    
			int vn;
			readytobreak = 0;
			x = azicnt/4;
			x =(x-(win_aziIndex/4-85))*2+WIN_XSTART;
			y = WIN_YSTART;   
			//fprintf(debugfp,"x=%d\n",x);
			for(  i=win_disIndex-85;i<win_disIndex+85;i++ )//画近区
			{	
				vn=video_data[i];
				//if( isValid(x,y) )
				//if(x>=1260&&x<1599&&y>=0&&y<399)
				if(winIsValid(x,y))
				{
					winSetFirstPixel( x, y, vn);
					winSetFirstPixel( x, y+1, vn);
					winSetFirstPixel( x+1, y, vn);
					winSetFirstPixel( x+1, y+1, vn);			
				//	fprintf(debugfp,"y=%d\n",y);

				}
				y+=2;
			}
		}        
	} //end window
}
void CPPI::EScopeDraw(int azicnt)
{
	int i,x,y,readytobreak=0;
	int v;

	y =  (int)azicnt/3.4;
	if(y>=1200)return;

	for(  i=0;i<600;i++ )//画近区
	{
		v = video_data[i];
		if(v < base)
			continue;
		else{
			//v += 0;
			if(v<=0)continue;
		}

		x = i+300;// note this is minus

		if( isValid(x,y) )
		{

			setFirstPixel( x, y, v);
		}
		else
		{
			//填充死区的地址表不是完全顺序的,一个越界地址的后面可能还有另一个不越界的地址
			if(readytobreak==5)
			{
				//printf("break when i=%d\n",i);
				break;
			}
			else
				readytobreak++;
		}
	}
}
void CPPI::ppiDraw( int azicnt )
{
    int x, y;
    int readytobreak;
    //VIDEODATATYPE v;
	int v;
	int i;

	int n;

	if(dispRadius>=ADDR_NEAR_SMP_LEN)//正常P显大圆
	{
        if( isDivert() || moveMode==1)//偏心显示模式(真运动或偏心)
			//n=ADDR_FAR_SMP_LEN+ADDR_NEAR_SMP_LEN;
			n = 600;
		else
			n=600;

        readytobreak = 0;
        for(  i=0;i<ADDR_NEAR_SMP_LEN;i++ )//画近区
        {
			v = video_data[i];
			//fprintf(debugfp,"%d\n",v);
			if(v==0)continue;
			
            x = xorg+addr_near_x[azicnt][i];
            y = yorg-addr_near_y[azicnt][i];// note this is minus

            if( isValid(x,y) )
            {
				//fprintf(debugfp,"inSetpixel\n");
                setFirstPixel( x, y, v);
            }
            else
            {
				//fprintf(debugfp,"NOTinSetpixel\n");
                //填充死区的地址表不是完全顺序的,一个越界地址的后面可能还有另一个不越界的地址
                if(readytobreak==5)
                {
                    //printf("break when i=%d\n",i);
                    break;
                }
                else
                    readytobreak++;
            }
        }

        readytobreak = 0;
        for(  i=ADDR_NEAR_SMP_LEN;i<n;i++ )//画远区
        {
			v = video_data[i];
			if(v==0)continue;
		
            x = xorg+addr_far_x[2*(azicnt)][i-ADDR_NEAR_SMP_LEN];
            y = yorg-addr_far_y[2*(azicnt)][i-ADDR_NEAR_SMP_LEN];

            if( isValid(x,y) )
            {      
                setFirstPixel( x, y, v);
            }
            else
            {
                if(readytobreak==10)
                {
                    //printf("break when i=%d\n",i);
                    break;
                }
                else
                    readytobreak++;
            }

            x = xorg+addr_far_x[2*(azicnt)+1][i-ADDR_NEAR_SMP_LEN];
            y = yorg-addr_far_y[2*(azicnt)+1][i-ADDR_NEAR_SMP_LEN];

            if( isValid(x,y) )
            {
                setFirstPixel( x, y, v );
            }
            else
            {
                if(readytobreak==10)
                {
                    //printf("break when i=%d\n",i);
                    break;
                }
                else
                    readytobreak++;
            }
        }
	}
        
    else//缩小模式
    {
        readytobreak = 0;
        for( i=0;i<dispRadius;i++ )//画近区
        {
			v = video_data[i];
			if(v==0)continue;

            x = xorg+addr_near_x[azicnt][i];
            y = yorg-addr_near_y[azicnt][i];

            if( isValid(x,y) )
            {
                
                setFirstPixel( x, y, v );
            }
            else
            {
                if(readytobreak==5)
                {
                    //printf("break when i=%d\n",i);
                    break;
                }
                else
                    readytobreak++;
            }
        }
    }
        
bool dowin;

	if(bWindowDisp)//bWindowDisp
	{
       
        dowin=false;
        if( win_astart < win_aend )
        {
            if( azicnt>=win_astart-5 && azicnt<=win_aend+5 )dowin=true;
        }
        else
        {
            if( azicnt>=win_aend-5 || azicnt<=win_astart+5 )dowin=true;
        }
        
		//if(dowin){
		//	fprintf(debugfp,"azicnt=%d,astart=%d,aend=%d\n",azicnt,win_astart,win_aend);
		//}

        if(dowin)
        {
            if( isDivert() || moveMode==1)//偏心显示模式(真运动或偏心)
            {
                readytobreak = 0;
                for(  i=0;i<ADDR_NEAR_SMP_LEN;i++ )//画近区
                {
					/*if(video_data[p]==0 && video_data[p+1]==0)
						continue;
					else*/
		

                    x = xorg+addr_near_x[azicnt][i];
                    y = yorg-addr_near_y[azicnt][i];// note this is minus
                    

                    if( isValid(x,y) )
                    {
                        winDraw(azicnt, x,y,i);
                    }
                    else
                    {
                    //填充死区的地址表不是完全顺序的,一个越界地址的后面可能还有另一个不越界的地址
                        if(readytobreak==5)
                        {
                        //printf("break when i=%d\n",i);
                            break;
                        }
                        else
                            readytobreak++;
                    }
                }

                readytobreak = 0;
                for(  i=ADDR_NEAR_SMP_LEN;i<n;i++ )//画远区
                {
					/*if(video_data[p]==0 && video_data[p+1]==0)
						continue;
					else*/
		

                    x = xorg+addr_far_x[2*(azicnt)][i-ADDR_NEAR_SMP_LEN];
                    y = yorg-addr_far_y[2*(azicnt)][i-ADDR_NEAR_SMP_LEN];

                    if( isValid(x,y) )
                    {      
                        winDraw( azicnt, x, y, i);
                    }
                    else
                    {
                        if(readytobreak==10)
                        {
                        //printf("break when i=%d\n",i);
                            break;
                        }
                        else
                            readytobreak++;
                    }

                    x = xorg+addr_far_x[2*(azicnt)+1][i-ADDR_NEAR_SMP_LEN];
                    y = yorg-addr_far_y[2*(azicnt)+1][i-ADDR_NEAR_SMP_LEN];

                    if( isValid(x,y) )
                    {
                        winDraw( azicnt, x, y, i );
                    }
                    else
                    {
                        if(readytobreak==10)
                        {
                        //printf("break when i=%d\n",i);
                            break;
                        }
                        else
                            readytobreak++;
                    }
                }
                
            }
            else//正常显示模式
            {
                readytobreak = 0;
                for(  i=0;i<ADDR_NEAR_SMP_LEN;i++ )//画近区
                {			
					/*if(video_data[p]==0 && video_data[p+1]==0)
						continue;
					else*/
	

                    x = xorg+addr_near_x[azicnt][i];
                    y = yorg-addr_near_y[azicnt][i];

                    if( isValid(x,y) )
                    {
                        winDraw( azicnt, x, y, i );
                    }
                    else
                    {
                        if(readytobreak==5)
                        {
                        //printf("break when i=%d\n",i);
                            break;
                        }
                        else
                            readytobreak++;
                    }
                }
            }
            
        }
    } //end window
}


void CPPI::winDraw(int azicnt, int x, int y, int p)// x,y is the position of the 4 pixels group's left-top point
{
	int vn,vf;

    if( x>=win_xstart && x<win_xstart+WIN_WIDTH/2 && y>=win_ystart && y<win_ystart+WIN_HEIGHT/2 )
    {
        x = (x-win_xstart)*2+WIN_XSTART;//获得开窗绘图区域的首点位置
        y = (y-win_ystart)*2+WIN_YSTART;

		vn=video_data[p];
		vf=(video_data[p]+video_data[p+1])/2;
                            
		if( azicnt>=511 && azicnt<1535 )
		{
			winSetFirstPixel( x, y, vn);
			winSetFirstPixel( x, y+1, vn);
			winSetFirstPixel( x+1, y, vf);
			winSetFirstPixel( x+1, y+1, vf);
		}

		else if( azicnt>=1535 && azicnt<2559 )
		{
			winSetFirstPixel( x, y, vn);
			winSetFirstPixel( x+1, y, vn);
			winSetFirstPixel( x, y+1, vf);
			winSetFirstPixel( x+1, y+1, vf);
		}
		else if( azicnt>=2559 && azicnt<3583 )
		{
			winSetFirstPixel( x+1, y, vn);
			winSetFirstPixel( x+1, y+1, vn);
			winSetFirstPixel( x, y, vf);
			winSetFirstPixel( x, y+1, vf);
		}
		else
		{
			winSetFirstPixel( x, y+1, vn);
			winSetFirstPixel( x+1, y+1, vn);
			winSetFirstPixel( x, y, vf);
			winSetFirstPixel( x+1, y, vf);
		}
    }
}

/////////////////////////////////////////////////////////////////////////////////////
void CPPI::ppiWidenDraw( int azicnt )
{
//    int x, y;
//    int readytobreak;
//    VIDEODATATYPE v;
//    int k;
//  
//        if( isDivert() || moveMode==1)//偏心显示模式(真运动或偏心)
//        {
//            readytobreak = 0;
//            for( int i=0;i<ADDR_NEAR_SMP_LEN;i++ )//画近区
//            {
//			    v = ( video_data[i*2]>video_data[i*2+1] )?video_data[i*2]:video_data[i*2+1];//二合一比大
//    
//			    for(k=i;(k<i+distancelen && k<ADDR_NEAR_SMP_LEN);k++)
//				    {
//			                    x = xorg+addr_near_x[azicnt][k];
//			                    y = yorg-addr_near_y[azicnt][k];
//    
//			                    if( isValid(x,y) )
//			                    {                    
//			                        setFirstPixel( x, y, v );
//			                    }			
//			                    else
//			                    {
//			                        if(readytobreak==10)
//			                        {
//			                            break;
//			                        }
//			                        else
//			                            readytobreak++;
//			                    }
//				    }
//			    
//			    if(readytobreak==10)break;
//
//            }
//
//            readytobreak = 0;
//            for( int i=ADDR_NEAR_SMP_LEN;i<ADDR_FAR_SMP_LEN+ADDR_NEAR_SMP_LEN;i++ )//画远区
//            {
//                v = ( video_data[i*2]>video_data[i*2+1] )?video_data[i*2]:video_data[i*2+1];//二合一比大
//
//                for(k=i;(k<i+distancelen && k<ADDR_FAR_SMP_LEN+ADDR_NEAR_SMP_LEN);k++)
//				{
//			                x = xorg+addr_far_x[2*(azicnt)][k-ADDR_NEAR_SMP_LEN];
//                            y = yorg-addr_far_y[2*(azicnt)][k-ADDR_NEAR_SMP_LEN];
//
//			                if( isValid(x,y) )
//			                {                    
//			                    setFirstPixel( x, y, v );
//			                }			
//			                else
//			                {
//			                    if(readytobreak==10)
//			                    {
//			                        break;
//			                    }
//			                    else
//			                        readytobreak++;
//			                }
//				}
//
//                
//                for(k=i;(k<i+distancelen && k<ADDR_FAR_SMP_LEN+ADDR_NEAR_SMP_LEN);k++)
//				{
//			                x = xorg+addr_far_x[2*(azicnt)+1][k-ADDR_NEAR_SMP_LEN];
//                            y = yorg-addr_far_y[2*(azicnt)+1][k-ADDR_NEAR_SMP_LEN];
//
//			                if( isValid(x,y) )
//			                {                    
//			                    setFirstPixel( x, y, v );
//			                }			
//			                else
//			                {
//			                    if(readytobreak==10)
//			                    {
//			                        break;
//			                    }
//			                    else
//			                        readytobreak++;
//			                }
//				}
//
//		        if(readytobreak==10)break;
//		
//            }
//			
//        }
//        else//正常显示模式
//        {
//            readytobreak = 0;
//            for( int i=0;i<ADDR_NEAR_SMP_LEN;i++ )//画近区
//            {
//              v = ( video_data[i*2]>video_data[i*2+1] )?video_data[i*2]:video_data[i*2+1];//二合一比大
//
//		        for(k=i;(k<=i+distancelen && k<ADDR_NEAR_SMP_LEN);k++)
//			        {
//		                x = xorg+addr_near_x[azicnt][k];
//		                y = yorg-addr_near_y[azicnt][k];
//
//		                if( isValid(x,y) )
//		                {                    
//		                    setFirstPixel( x, y, v );
//		                }			
//		                else
//		                {
//		                    if(readytobreak==10)
//		                    {
//		                        break;
//		                    }
//		                    else
//		                        readytobreak++;
//		                }
//			        }
//		
//		        if(readytobreak==10)break;
//			
//            }
//        }
//
//	if(bWindowDisp)
//	{
//
////wait for coding
//
//	}
    
}

void CPPI::clear()
{
int i,j;
for(i=PPI_XSTART;i<PPI_WIDTH+PPI_XSTART;i++)
    for(j=PPI_YSTART;j<PPI_HEIGHT+PPI_YSTART;j++)
      {
        layer[j][i].first=0;
		layer[j][i].bmask=0;
        if(layer[j][i].curlayer<2)
        {
        layer[j][i].nfirst=colortable[0];//MFB_CLEAR;
        //if(maskTable[j][i]==0)
			fbp[j][i]=colortable[0];//MFB_CLEAR;
        }
      }

if(bWindowDisp){
	for(i=WIN_XSTART;i<WIN_WIDTH+WIN_XSTART;i++)
		for(j=WIN_YSTART;j<WIN_HEIGHT+WIN_YSTART;j++)
		{
			layerMINI[j][i].first=0;
			if(layerMINI[j][i].curlayer<2)
			{
				layerMINI[j][i].nfirst=winColorTable[0];//MFB_CLEAR;
				//if(maskTable[j][i]==0)
					fbpMINI[j][i]=winColorTable[0];//MFB_CLEAR;
			}
		}
}

}


void CPPI::setWinOrigin(int x, int y) //设置窗口起始点
{
    int a,b,c,d;
    //   a______b
    //    |       |
    //    |____|
    //   d      c
    int e1,e2;
    complex t;
    
    if( x>=PPI_XSTART && x<PPI_XSTART+PPI_WIDTH && y>=PPI_YSTART && y<PPI_YSTART+PPI_HEIGHT )
		;
	else
		return;

    win_xstart = x;
    win_ystart = y;
    
    t = complex(x-xorg,-(y-yorg));
    a = (int)floorf(t.getMyThetaDeg());
    
    t = complex(WIN_WIDTH/2+x-xorg,-(y-yorg));
    b = (int)floorf(t.getMyThetaDeg());
    
    t = complex(WIN_WIDTH/2+x-xorg,-(WIN_HEIGHT/2+y-yorg));
    c = (int)floorf(t.getMyThetaDeg());
    
    t = complex(x-xorg,-(WIN_HEIGHT/2+y-yorg));
    d = (int)floorf(t.getMyThetaDeg());
    
    if( a>=0 && a<=180 )//窗口全在右半面
    {
        e1 = a<=90 ? a : b;
        e2 = d<=90 ? c : d;
    }
    else if( b>=180 )//窗口全在左半面
    {
        e2 = b>=270 ? b : a;
        e1 = c>=270 ? d : c;
    }
    else// Y轴穿过窗口
    {
        if( WIN_HEIGHT/2+y <= yorg )//窗口在扫描中心上方
        {
            e2=c;
            e1=d;
        }
        else if( y >= yorg )//窗口在扫描中心下方
        {
            e1=b;
            e2=a;
        }
        else//扫描中心在窗口内
        {
            e1=0;
            e2=360;
        }
    }
    
    win_astart = (int)floorf(e1/AZIDIS);//转换为绘图方位
    win_aend  =  (int)floorf(e2/AZIDIS);
    //注意 ： 当窗口跨越0度绘图方位线时，win_aend < win_astart

    if( win_astart>=4096 )win_astart=4095;//处理临界问题
    if( win_aend>=4096 )win_aend=4095;

//    extern bool bHmode;//add by shen
//    if(bHmode)//add by shen
    {
    if( win_astart>=1024 )win_astart=1023;//处理临界问题
    if( win_aend>=1024 )win_aend=1023;
    }
    if(scopeMode==0)setScopeMode(scopeMode);  //modify by shen

}

void CPPI::updateWinOrigin() //更新窗口起始点
{
    setWinOrigin(win_xstart,win_ystart);
}


void CPPI::updateRegion(void)
{
	clear();

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

	resetOrigin();
	//setWinOrigin(win_xstart+PPI_XSTART,win_ystart+PPI_YSTART);
	//modfied by zh 2008 9 2
	setWinOrigin(win_xstart,win_ystart);


}

void CPPI::updateFbp(void)//更新绘图显存区地址
{
	fbp=m_dp->fbpPPI;
}
void CPPI::setScopeMode(unsigned char n,bool bhmode)
{
    scopeMode=n;
    if(scopeMode==0&&bhmode==false)//B mode update param//modify by shen
    {
        if(win_aend-win_astart>2048)
            win_aziIndex=(win_astart+4096+win_aend)/2;
        else
            win_aziIndex=(win_astart+win_aend)/2;
        win_aziIndex %= 4096;
        //fprintf(debugfp,"win_aziIndex = %d \n",win_aziIndex);
        win_disIndex=sqrt((float)(((win_xstart+85)-xorg)*((win_xstart+85)-xorg)+((win_ystart+85)-yorg)*((win_ystart+85)-yorg)));
        //fprintf(debugfp,"win_disIndex = %d \n",win_disIndex);
    }
    //add by shen
    if(scopeMode==0&&bhmode==true)//“H显”的B显
    {
        if(win_aend-win_astart>512)
            win_aziIndex=(win_astart+1024+win_aend)/2;
        else
            win_aziIndex=(win_astart+win_aend)/2;
        win_aziIndex %= 1024;
        //fprintf(debugfp,"win_aziIndex = %d \n",win_aziIndex);
        win_disIndex=sqrt((float)(((win_xstart+85)-xorg)*((win_xstart+85)-xorg)+((win_ystart+85)-yorg)*((win_ystart+85)-yorg)));
        //fprintf(debugfp,"win_disIndex = %d \n",win_disIndex);
    }
    //end by shen
}

//-------- 加入小窗口颜色表，以便和PPI大窗相独立 --------
//--------------- 修改日期：2008-09-01 ----------------------

bool CPPI::winIsValid( int &x, int &y )
{
	 return ( (x>=WIN_XSTART) && (x<WIN_XSTART+WIN_WIDTH) && (y>=WIN_YSTART) && (y<WIN_YSTART+WIN_HEIGHT) );
}

void CPPI::winSetFirstPixel(int x, int y, VIDEODATATYPE depth)
{
	//depth += base;
	//if(depth<0)depth=0;
	if(winIsValid(x,y))
	//if(maskTable[y][x]==0)
	{
		if(layerMINI[y][x].curlayer<2)
		{
			if(layerMINI[y][x].first<depth)//比大写入
			{
				layerMINI[y][x].nfirst=winColorTable[depth];
				layerMINI[y][x].first=depth;
				//layer[y][x].curlayer=1;
				//fbp[y][x]=winColorTable[depth];

				if(layerMINI[y][x].bmap)
					fbpMINI[y][x]=winColorTable[depth] ^ layerMINI[y][x].nmap;
				else
					fbpMINI[y][x]=winColorTable[depth];
			}
			else
				;
		}
		else if(layerMINI[y][x].curlayer>TOP)
		{

		}
		else
		{
			if(layerMINI[y][x].first<depth)
			{
				layerMINI[y][x].nfirst=winColorTable[depth];
				layerMINI[y][x].first=depth;
			}
		}
	}
}
