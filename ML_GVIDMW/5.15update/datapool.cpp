
//******************************
//
//  author : zhaolimin, lishidan
//
//  create time: 2007-9-5
//
//  last modify time:2007-10-16
//
//  Version: 1.3
//
//******************************
#include "ppi.h"
#include "mycolor.h"

#define SURF_MINI_WIDTH 340
#define SURF_MINI_HEIGHT 340
#define SURF_AR_WIDTH 360
#define SURF_AR_HEIGHT 300
#define SURF_TV_WIDTH 704
#define SURF_TV_HEIGHT 576
#define SURF_CM_WIDTH 1200
#define SURF_CM_HEIGHT 1200

extern FILE* debugfp;//=fopen("save/dlldebug.txt","w");//C:\\Qt\\qtcreator-2.4.1\\QTcreatpro1\\save\\dlldebug.txt
CDataPool::CDataPool( void *fbplinearPPI,int pitchPPI,
                      void *fbplinearAR,int pitchAR,
                      void *fbplinearMINI,int pitchMINI )
{

	PPI_XSTART = 0;
	PPI_YSTART = 0;
	PPI_WIDTH = SURF_CM_WIDTH;
	PPI_HEIGHT = SURF_CM_HEIGHT;

	WIN_XSTART = 0;
	WIN_YSTART = 0;
	WIN_WIDTH = SURF_MINI_WIDTH;
	WIN_HEIGHT = SURF_MINI_HEIGHT;

	AR_XSTART = 0;
	AR_YSTART = 0;
	AR_WIDTH = SURF_AR_WIDTH;
	AR_HEIGHT = SURF_AR_HEIGHT;


    //从文件中读取地址表
    if(initDataTable()!=0)
    {
        printf("load addr table error\n");
        exit(0);//退出程序
    }
    //init frame buffer
    if(initFbDev( fbplinearPPI,pitchPPI,fbplinearAR,pitchAR,fbplinearMINI,pitchMINI )!=0)
    {
        printf("init frame buffer error\n");
        exit(1);//退出程序
    }

    //init frame buffer layer
    if(initFbLayer()!=0)
    {
        printf("init frame buffer layer error\n");
        exit(2);//退出程序
    }
    dispState.scopeMode=1;

    setWinColor(255,255,0);
    setPPIColor(255,255,0);
	fprintf(debugfp,"--fb layer inited\n");
    setPPITailColor(255,0,0);

    //用于显示的数据
    //dispbuf = new s_ppi_video_for_disp[maxvideosize];
    //MEMALLOCCHECK(dispbuf)
    //dispnum = 0;

	//dispbuf = NULL;
	//dispnum = 0;

	databuf = NULL;

	fprintf(debugfp,"--fb layer inited\n");
    painterPool = new CPainterPool(this);

	clear();

	// ---- init ship and system info ----
// wait for coding

	//------------------------------

    TRACE("CDataPool::CDataPool()");
}

CDataPool::~CDataPool()
{
    freeDataTable();
    freeFbDev();
    freeFbLayer();
    //delete dispbuf;
    delete painterPool;
    TRACE("CDataPool::~CDataPool()");
}

int CDataPool::initDataTable()
{
    //为近区地址表和远区地址表分配空间-----------------------
    //近区
    addr_near_x = new int*[ADDR_NEAR_AZI_LEN];
    MEMALLOCCHECK(addr_near_x)
    addr_near_y = new int*[ADDR_NEAR_AZI_LEN];
    MEMALLOCCHECK(addr_near_y)
    for( int i=0; i<ADDR_NEAR_AZI_LEN; i++ )
    {
        addr_near_x[i] = new int[ADDR_NEAR_SMP_LEN];
        MEMALLOCCHECK(addr_near_x[i])
        addr_near_y[i] = new int[ADDR_NEAR_SMP_LEN];
        MEMALLOCCHECK(addr_near_y[i])
    }

    //远区
    addr_far_x = new int*[ADDR_FAR_AZI_LEN];
    MEMALLOCCHECK(addr_far_x)
    addr_far_y = new int*[ADDR_FAR_AZI_LEN];
    MEMALLOCCHECK(addr_far_y)
    for( int i=0; i<ADDR_FAR_AZI_LEN; i++ )
    {
        addr_far_x[i] = new int[ADDR_FAR_SMP_LEN];
        MEMALLOCCHECK(addr_far_x[i])
        addr_far_y[i] = new int[ADDR_FAR_SMP_LEN];
        MEMALLOCCHECK(addr_far_y[i])
    }

    //余辉随机数表
    randomx = new int[RND_LEN];
    MEMALLOCCHECK(randomx)
    randomy = new int[RND_LEN];
    MEMALLOCCHECK(randomy)

    colortable = new MFB_COLORTYPE[256];
    MEMALLOCCHECK(colortable)

	colortableTail = new MFB_COLORTYPE[256];
    MEMALLOCCHECK(colortableTail)

	winColorTable=new DISPMEMTYPE[256];
	MEMALLOCCHECK(winColorTable)

    //从文件中读取----------------------------------------
    FILE *fp;
	int i;

    if( (fp=fopen("dat/sysdat","rb"))==NULL )
    {////C:\\Qt\\qtcreator-2.4.1\\QTcreatpro1\\
        printf("read .\dat\sysdat error!\n");
		return -1;
	}
	else
	{
		fseek(fp,datPos[6],SEEK_SET);
		for(  i=0; i<ADDR_NEAR_AZI_LEN; i++ )
			fread(addr_near_x[i],sizeof(int),ADDR_NEAR_SMP_LEN,fp);

		fseek(fp,datPos[7],SEEK_SET);
		for(  i=0; i<ADDR_NEAR_AZI_LEN; i++ )
			fread(addr_near_y[i],sizeof(int),ADDR_NEAR_SMP_LEN,fp);

		fseek(fp,datPos[8],SEEK_SET);
		for(  i=0; i<ADDR_FAR_AZI_LEN; i++ )
			fread(addr_far_x[i],sizeof(int),ADDR_FAR_SMP_LEN,fp);

		fseek(fp,datPos[9],SEEK_SET);
		for(  i=0; i<ADDR_FAR_AZI_LEN; i++ )
			fread(addr_far_y[i],sizeof(int),ADDR_FAR_SMP_LEN,fp);

		fseek(fp,datPos[4],SEEK_SET);
		fread(randomx,sizeof(int),RND_LEN,fp);

		fseek(fp,datPos[5],SEEK_SET);
		fread(randomy,sizeof(int),RND_LEN,fp);

		fseek(fp,datPos[0],SEEK_SET);
		fread(colortable,sizeof(MFB_COLORTYPE),256,fp);

		fclose(fp);
	}

    TRACE("--load data table done");
    return 0;
}

void CDataPool::freeDataTable()
{
    for( int i=0; i<ADDR_NEAR_AZI_LEN; i++ )
    {
        delete[] addr_near_x[i];
        delete[] addr_near_y[i];
    }
    delete[] addr_near_x;
    delete[] addr_near_y;

    for( int i=0; i<ADDR_FAR_AZI_LEN; i++ )
    {
        delete[] addr_far_x[i];
        delete[] addr_far_y[i];
    }
    delete[] addr_far_x;
    delete[] addr_far_y;

    delete[] randomx;
    delete[] randomy;

    delete[] colortable;
	delete[] winColorTable;

    TRACE("--data table fread");
}

int CDataPool::initFbDev( void *fbplinearPPI,int pitchPPI,
						              void *fbplinearAR,int pitchAR,
						              void *fbplinearMINI,int pitchMINI )
{

	unsigned char *fbplinear;

    //从一维线性地址中分离出需要作图的区域,转换为二维地址空间
    //要注意这样映射后,fbp[x][y]在屏幕上的位置水平为y,竖直为x

	fbplinear = (unsigned char *)fbplinearPPI;
	fbpPPI = new DISPMEMTYPE*[PPI_HEIGHT];
    MEMALLOCCHECK(fbpPPI)
	for( int i=0; i<PPI_HEIGHT; i++ )
	{
		fbpPPI[i] = (DISPMEMTYPE*)(fbplinear+i*pitchPPI);//XX bits color
	}

	//---------------------------------------------------
	fbplinear = (unsigned char *)fbplinearAR;
	fbpAR = new DISPMEMTYPE*[AR_HEIGHT];
	MEMALLOCCHECK(fbpAR)
	for( int i=0; i<AR_HEIGHT; i++ )
	{
		fbpAR[i] = (DISPMEMTYPE*)(fbplinear+i*pitchAR);//XX bits color
	}

	//---------------------------------------------------
	fbplinear = (unsigned char *)fbplinearMINI;
	fbpMINI = new DISPMEMTYPE*[WIN_HEIGHT];
	MEMALLOCCHECK(fbpMINI)
	for( int i=0; i<WIN_HEIGHT; i++ )
	{
		fbpMINI[i] = (DISPMEMTYPE*)(fbplinear+i*pitchMINI);//XX bits color
	}


    return 0;
}

void CDataPool::freeFbDev()
{

	if(fbpPPI)delete[] fbpPPI;
	if(fbpAR)delete[] fbpAR;
	if(fbpMINI)delete[] fbpMINI;

    TRACE("--fbdev close");
}

int CDataPool::initFbLayer()
{
	//layerPPI = (s_layer_unit**)new s_layer_unit[PPI_HEIGHT*PPI_WIDTH];
	//MEMALLOCCHECK(layerPPI)
	//	layerAR = (s_layer_unit**)new s_layer_unit[AR_HEIGHT*AR_WIDTH];
	//MEMALLOCCHECK(layerAR)
	//	layerMINI = (s_layer_unit**)new s_layer_unit[WIN_HEIGHT*WIN_WIDTH];
	//MEMALLOCCHECK(layerMINI)

    layerPPI = new s_layer_unit*[PPI_HEIGHT];
    MEMALLOCCHECK(layerPPI)

    for( int i=0; i<PPI_HEIGHT; i++ )
    {
        layerPPI[i] = new s_layer_unit [PPI_WIDTH];
        MEMALLOCCHECK(layerPPI[i])
        memset(layerPPI[i],0,PPI_WIDTH*sizeof(s_layer_unit));
    }

	//--------------------------------------------------------------
	layerAR = new s_layer_unit*[AR_HEIGHT];
	MEMALLOCCHECK(layerAR)

	for( int i=0; i<AR_HEIGHT; i++ )
	{
		layerAR[i] = new s_layer_unit [AR_WIDTH];
		MEMALLOCCHECK(layerAR[i])
			memset(layerAR[i],0,AR_WIDTH*sizeof(s_layer_unit));
	}

	//--------------------------------------------------------------
	layerMINI = new s_layer_unit*[WIN_HEIGHT];
	MEMALLOCCHECK(layerMINI)

	for( int i=0; i<WIN_HEIGHT; i++ )
	{
		layerMINI[i] = new s_layer_unit [WIN_WIDTH];
		MEMALLOCCHECK(layerMINI[i])
			memset(layerMINI[i],0,WIN_WIDTH*sizeof(s_layer_unit));
	}

    TRACE("--fb layer inited");

    return 0;
}

void CDataPool::freeFbLayer()
{
	if(layerPPI)
	{
		for( int i=0; i<PPI_HEIGHT; i++ )
		{
		   if(layerPPI[i]) delete[] layerPPI[i];
		}
		delete[] layerPPI;
	}

	//-------------------------------------
	if(layerAR)
	{
		for( int i=0; i<AR_HEIGHT; i++ )
		{
			if(layerAR[i])delete[] layerAR[i];
		}
		delete[] layerAR;
	}


	//-------------------------------------
	if(layerMINI)
	{
		for( int i=0; i<WIN_HEIGHT; i++ )
		{
			if(layerMINI[i])delete[] layerMINI[i];
		}
		delete[] layerMINI;
	}


    TRACE("--fb layer freed");
}


void CDataPool::clear(int t )//分类清屏，不清遮蔽区
{
	int i;

	switch(t){
		case 0: // 默认为重置全部
			for(i=0;i<PPI_HEIGHT;++i)
			{
				memset( layerPPI[i],0,PPI_WIDTH*sizeof(s_layer_unit));
			}
			for(i=0;i<AR_HEIGHT;++i)
			{
				memset( layerAR[i],0,AR_WIDTH*sizeof(s_layer_unit));
			}
			for(i=0;i<WIN_HEIGHT;++i)
			{
				memset( layerMINI[i],0,WIN_WIDTH*sizeof(s_layer_unit));
			}
			//memset( layerPPI,0,PPI_HEIGHT*PPI_WIDTH*sizeof(s_layer_unit));
			//memset( layerMINI,0,WIN_HEIGHT*WIN_WIDTH*sizeof(s_layer_unit));
			//memset( layerAR,0,AR_HEIGHT*AR_WIDTH*sizeof(s_layer_unit));
			break;

		case 1: // 重置开窗区
			for(i=0;i<WIN_HEIGHT;++i)
			{
				memset( layerMINI[i],0,WIN_WIDTH*sizeof(s_layer_unit));
			}
			//memset( layerMINI,0,WIN_HEIGHT*WIN_WIDTH*sizeof(s_layer_unit));
			break;

		case 2://重置AR区
			for(i=0;i<AR_HEIGHT;++i)
			{
				memset( layerAR[i],0,AR_WIDTH*sizeof(s_layer_unit));
			}
			//memset( layerAR,0,AR_HEIGHT*AR_WIDTH*sizeof(s_layer_unit));
			break;

		case 3://重置PPI区
			for(i=0;i<PPI_HEIGHT;++i)
			{
				memset( layerPPI[i],0,PPI_WIDTH*sizeof(s_layer_unit));
			}
			//memset( layerPPI,0,PPI_HEIGHT*PPI_WIDTH*sizeof(s_layer_unit));
			break;

		default:

			break;
	}


}


void CDataPool::setPPIColor(int r,int g,int b)
{
	float h,s,l;

	rgb_to_hsv(r,g,b,&h,&s,&l);

	for(int i=0;i<256;i++)
	{
		l = i/255.0;

		hsv_to_rgb(h,s,l,&r,&g,&b);

		colortable[i] = REFC(r,g,b);
	}
	colortable[0] = REFC(0,0,0);

}

void CDataPool::setPPITailColor(int r,int g,int b)
{
	float h,s,l;

	rgb_to_hsv(r,g,b,&h,&s,&l);

	for(int i=0;i<256;i++)
	{
		l = i/255.0;

		hsv_to_rgb(h,s,l,&r,&g,&b);

		colortableTail[i] = REFC(r,g,b);
	}
	colortableTail[0] = REFC(0,0,0);

}

void CDataPool::setPPIColorTable( unsigned int* colorTable1 )
{
	for(int i = 0; i< 256; i ++)
	{
		colortable[i] = colorTable1[i] >> 8;
	}
}

void CDataPool::setWinColor(int r,int g,int b)
{
	float h,s,l;

	rgb_to_hsv(r,g,b,&h,&s,&l);

	for(int i=0;i<256;i++)
	{
		l = i/255.0;

		hsv_to_rgb(h,s,l,&r,&g,&b);

		winColorTable[i] = REFC(r,g,b);
	}
	winColorTable[0] = REFC(0,0,0);
}

void CDataPool::setMiniWinColorTable( unsigned int* colorTable )
{
	for(int i = 0; i< 256; i ++)
	{
		winColorTable[i] = colorTable[i] >> 8;
	}
}
