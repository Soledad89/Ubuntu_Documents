
//******************************
//
//  author : lishidan , zhanghui
//
//  create time: 
//
//  last modify time:2007-10-23
//
//  Version: 2.1
//
//******************************
//#include "stdafx.h"  by shen
#include "painter.h"
#include "debug.h"

CPainterPool::CPainterPool( CDataPool * dp )
{
    m_dp = dp;
    nx = m_dp->addr_near_x;
    ny = m_dp->addr_near_y;
    fx = m_dp->addr_far_x;
    fy = m_dp->addr_far_y;


    chartAddrX = NULL;
    chartAddrY = NULL;

    radiusPPI = 600;//by shen
    rangePPI = 512;
    centerX=512;
    centerY=512;

    int i,j;

    scaleTable = new  int * [360];
    MEMALLOCCHECK(scaleTable);
    for( i=0; i<360;i++)    
    {
        scaleTable[i] = new  int [1+13];
        if(scaleTable[i]==NULL)printf("error table");
    }

    

    getAddrXY(1024);
    getScaleCircle();

    dot[10][0] = 0x0e;
    dot[10][1] = 0x1f;
    dot[10][2] = 0x1f;
    dot[10][3] = 0x1f;
    dot[10][4] = 0x0e;
    
    dot[10][0] = 0x00;
    dot[10][1] = 0x0e;
    dot[10][2] = 0x0e;
    dot[10][3] = 0x0e;
    dot[10][4] = 0x00;
    
    dot[10][5] = 0x00;
    dot[10][6] = 0x00;
    dot[10][7] = 0x00;
    
     i=0,j=0;//0
    dot[i][0] = 0x00;dot[i][1] = 0x00;dot[i][2] = 0x00;dot[i][3] = 0x3c;
    dot[i][4] = 0x42;dot[i][5] = 0x42;dot[i][6] = 0x42;dot[i][7] = 0x42;
    dot[i][8] = 0x42;dot[i][9] = 0x42;dot[i][10] = 0x42;dot[i][11] = 0x42;
    dot[i][12] = 0x3c;dot[i][13] = 0x00;dot[i][14] = 0x00;dot[i][15] = 0x00;
    i++;//1
    dot[i][0] = 0x00;dot[i][1] = 0x00;dot[i][2] = 0x00;dot[i][3] = 0x08;
    dot[i][4] = 0x18;dot[i][5] = 0x28;dot[i][6] = 0x08;dot[i][7] = 0x08;
    dot[i][8] = 0x08;dot[i][9] = 0x08;dot[i][10] = 0x08;dot[i][11] = 0x08;
    dot[i][12] = 0x08;dot[i][13] = 0x00;dot[i][14] = 0x00;dot[i][15] = 0x00;
    i++;//2
    dot[i][0] = 0x00;dot[i][1] = 0x00;dot[i][2] = 0x00;dot[i][3] = 0x3c;
    dot[i][4] = 0x42;dot[i][5] = 0x42;dot[i][6] = 0x02;dot[i][7] = 0x02;
    dot[i][8] = 0x04;dot[i][9] = 0x08;dot[i][10] = 0x10;dot[i][11] = 0x20;
    dot[i][12] = 0x7e;dot[i][13] = 0x00;dot[i][14] = 0x00;dot[i][15] = 0x00;
    i++;//3
    dot[i][0] = 0x00;dot[i][1] = 0x00;dot[i][2] = 0x00;dot[i][3] = 0x3c;
    dot[i][4] = 0x42;dot[i][5] = 0x42;dot[i][6] = 0x02;dot[i][7] = 0x1c;
    dot[i][8] = 0x02;dot[i][9] = 0x02;dot[i][10] = 0x42;dot[i][11] = 0x42;
    dot[i][12] = 0x3c;dot[i][13] = 0x00;dot[i][14] = 0x00;dot[i][15] = 0x00;
    i++;//4
    dot[i][0] = 0x00;dot[i][1] = 0x00;dot[i][2] = 0x00;dot[i][3] = 0x04;
    dot[i][4] = 0x0c;dot[i][5] = 0x14;dot[i][6] = 0x24;dot[i][7] = 0x24;
    dot[i][8] = 0x44;dot[i][9] = 0x84;dot[i][10] = 0xfe;dot[i][11] = 0x04;
    dot[i][12] = 0x04;dot[i][13] = 0x00;dot[i][14] = 0x00;dot[i][15] = 0x00;
    i++;//5
    dot[i][0] = 0x00;dot[i][1] = 0x00;dot[i][2] = 0x00;dot[i][3] = 0x3e;
    dot[i][4] = 0x20;dot[i][5] = 0x40;dot[i][6] = 0x7c;dot[i][7] = 0x42;
    dot[i][8] = 0x02;dot[i][9] = 0x02;dot[i][10] = 0x42;dot[i][11] = 0x44;
    dot[i][12] = 0x3c;dot[i][13] = 0x00;dot[i][14] = 0x00;dot[i][15] = 0x00;
    i++;//6
    dot[i][0] = 0x00;dot[i][1] = 0x00;dot[i][2] = 0x00;dot[i][3] = 0x1c;
    dot[i][4] = 0x22;dot[i][5] = 0x40;dot[i][6] = 0x40;dot[i][7] = 0x5c;
    dot[i][8] = 0x42;dot[i][9] = 0x42;dot[i][10] = 0x42;dot[i][11] = 0x42;
    dot[i][12] = 0x3c;dot[i][13] = 0x00;dot[i][14] = 0x00;dot[i][15] = 0x00;
    i++;//7
    dot[i][0] = 0x00;dot[i][1] = 0x00;dot[i][2] = 0x00;dot[i][3] = 0x7e;
    dot[i][4] = 0x02;dot[i][5] = 0x04;dot[i][6] = 0x04;dot[i][7] = 0x08;
    dot[i][8] = 0x08;dot[i][9] = 0x08;dot[i][10] = 0x10;dot[i][11] = 0x10;
    dot[i][12] = 0x10;dot[i][13] = 0x00;dot[i][14] = 0x00;dot[i][15] = 0x00;
    i++;//8
    dot[i][0] = 0x00;dot[i][1] = 0x00;dot[i][2] = 0x00;dot[i][3] = 0x3c;
    dot[i][4] = 0x42;dot[i][5] = 0x42;dot[i][6] = 0x42;dot[i][7] = 0x3c;
    dot[i][8] = 0x42;dot[i][9] = 0x42;dot[i][10] = 0x42;dot[i][11] = 0x42;
    dot[i][12] = 0x3c;dot[i][13] = 0x00;dot[i][14] = 0x00;dot[i][15] = 0x00;
    i++;//9
    dot[i][0] = 0x00;dot[i][1] = 0x00;dot[i][2] = 0x00;dot[i][3] = 0x3c;
    dot[i][4] = 0x42;dot[i][5] = 0x42;dot[i][6] = 0x42;dot[i][7] = 0x46;
    dot[i][8] = 0x3a;dot[i][9] = 0x02;dot[i][10] = 0x02;dot[i][11] = 0x44;
    dot[i][12] = 0x38;dot[i][13] = 0x00;dot[i][14] = 0x00;dot[i][15] = 0x00;
    i++;//H
    dot[i][0] = 0x00;dot[i][1] = 0x00;dot[i][2] = 0xc6;dot[i][3] = 0xc6;
    dot[i][4] = 0xc6;dot[i][5] = 0xc6;dot[i][6] = 0xfe;dot[i][7] = 0xc6;
    dot[i][8] = 0xc6;dot[i][9] = 0xc6;dot[i][10] = 0xc6;dot[i][11] = 0xc6;
    dot[i][12] = 0x00;dot[i][13] = 0x00;dot[i][14] = 0x00;dot[i][15] = 0x00;


}

CPainterPool::~CPainterPool()
{
    delete chartAddrX;
    delete chartAddrY;
    delete scaleTable;

    TRACE("CPainterPool::~CPainterPool()");
}


void CPainterPool::getAddrXY(int radius)
{
   int i,j;
   long R;
   R = 4096;
   if(chartAddrX != NULL)
       delete chartAddrX;
   if(chartAddrY != NULL)
       delete chartAddrY;
    chartAddrX=new int* [R+2];
    for(i=0;i<R;i++)
          chartAddrX[i]=new  int [radius+2]; 
    chartAddrY=new int* [R+2];
    for(i=0;i<R;i++)
           chartAddrY[i]=new  int [radius+2];    
   for(i=0;i<R;i++)
   {
          double angle=(2*3.14159*i) / (double)R;
          for(j=0;j<radius;j++)
          {
             chartAddrX[i][j] = (double)j*sin(angle);
             chartAddrY[i][j] = (double)j*cos(angle);
          }
     }
}
//计算画刻度线的数据
void CPainterPool::getScaleCircle()
{

    int j=0;
    
  //TRACEN;

    int angle=0;
    const float scale = 11.378*2;//11.378=360.0*4096.0;
    int a=0;
   
    for(angle=0;angle<360;angle++)
    {
            a = (int)floorf(angle*scale);

            scaleTable[angle][0] = a;

            if(angle%5==0)a=13;
            else a=8;

            for(j=1;j<a;j++)
            {
            scaleTable[angle][j] = radiusPPI +j;
            }
            for(j=a;j<14;j++)scaleTable[angle][j]=-1;
    }
}

//======================================================================================================

CPainter::CPainter( CPainterPool * pp,CLayerBase * lbp)
{

    nx = pp->nx;
    ny = pp->ny;
    fx = pp->fx;
    fy = pp->fy;

	m_lbp=lbp;

    chartAddrX = pp->chartAddrX;
    chartAddrY = pp->chartAddrY;

    radiusPPI = pp->radiusPPI;
  

    textTransFlag  = 0;
    color = MFB_GREEN;

	scaleTable = pp->scaleTable;
    dot = pp->dot;
	
}

CPainter::~CPainter()
{
    TRACE("CPainter::~CPainter()");
}


void CPainter::drawRect(int left, int up, int right, int down)
{
    for(int y=up;y>down;y--)
    {
        for(int x=left;x<right;x++)
        {
            setPixel(x,y,color);
        }
    }
}

///////////////////////////////////////////////////////////
//画线
void CPainter::drawLine(int x,int y,int angle,int len)
{
    int i,px,py;
    for(i=0;i<len;i++)
    {
        px = chartAddrX[angle][i];
        py = chartAddrY[angle][i];
        setPixel(x+px,y-py,color);
        //printf("x=%d,y=%d\n",x+px,y-py);
    }
}
//画线，点对点
void CPainter::drawLineP2P(int x1,int y1,int x2,int y2)
{
	int i;

	if(x1==x2)
	{
		//为竖线
		if(y1<=y2)
		{
			for(i=y1;i<=y2;i++)
				setPixel(x1,i);
		}
		else
		{
			for(i=y2;i<=y1;i++)
				setPixel(x1,i);
		}

		return;
	}

	//为横线
	if(y1==y2)
	{
		if(x1<=x2)
		{
			for(i=x1;i<=x2;i++)
				setPixel(i,y1);
		}
		else
		{
			for(i=x2;i<=x1;i++)
				setPixel(i,y1);
		}

		return;
	}

	//为斜线
	float m=(y2-y1)*1.0/(x2-x1);
	float fTemp;

	if(abs(m)<=1)
	{
		if(x1<x2)
		{
			fTemp=y1-m;
			for(i=x1;i<=x2;i++)
				setPixel(i,fTemp+=m);
		}
		else
		{
			fTemp=y2-m;
			for(i=x2;i<=x1;i++)
				setPixel(i,fTemp+=m);
		}
		return;
	}

	if(y1<y2)
	{
		fTemp=x1-1/m;
		for(i=y1;i<=y2;i++)
			setPixel(fTemp+=1/m,i);
	}
	else
	{
		fTemp=x2-1/m;
		for(i=y2;i<=y1;i++)
			setPixel(fTemp+=1/m,i);
	}
}

//画坐标十字线
void CPainter::drawCrossLine(int x,int y,int r)
{
    for(int i=-r;i<r;i++)
    {
        setPixel(x+i,y,color);
        setPixel(x,y-i,color);
    }
}
//画单个数字
void CPainter::drawPoint(int x,int y,int code)
{
    int i=0,j;
    unsigned int shift;
    if(textTransFlag == 0)
    {
        for(i=0; i<16; i++)
        {
            int dy = y+i;
            shift=0x100;
            for(j=0;j<8;j++)
            {
                shift = shift>>1;
                if(dot[code][i] & shift)
                {
                    int dx = x+j;
                    setPixel( dx , dy , color );
                }
            }
        }
    }
    else
    {
        for(i=0; i<16; i++)
        {
            int dy = y+i;
            shift=0x100;
            for(j=0;j<8;j++)
            {
                shift = shift>>1;
                int dx = x+j;
                if(dot[code][i] & shift)
                    setPixel( dx , dy , color );
                else
                    setPixel( dx , dy , MFB_CLEAR );
            }
        }
    }
}
//画数字
void CPainter::drawNum(int x,int y,int num)
{
    int i=0,j=0;
    unsigned char n[10];

	if(x<0 || y<0)return;

    do{
        n[i] = num%10;
        num  = num/10;
        if(num == 0)
            break;
        i++;
    }while(1);
    for(j=i;j>=0;j--)
        drawPoint(x + (i-j)*8,y,n[j]);
}
//画浮点数
void CPainter::drawFloat(int x,int y,float f,int dn)//draw float
{
	int i=0,j=0;
	unsigned char n[10];
	if(x<0 || y<0)return;
	//画整数部分
	int num=floorf(f);
	do{
		n[i] = num%10;
		num  = num/10;
		if(num == 0)
			break;
		i++;
	}while(1);
	for(j=i;j>=0;j--)
		drawPoint(x + (i-j)*8,y,n[j]);

	if(dn<=0)return;

	x = x + i*8 + 8;
	//画小数点
	setPixel(x+3,y+12,color);
	setPixel(x+4,y+12,color);

	x += 8;

	//画小数部分
	i=0;
	j=0;
	num=floorf((f-floorf(f))*pow(10.0,dn));
	do{
		n[i] = num%10;
		num  = num/10;
		if(num == 0)
			break;
		i++;
	}while(1);
	for(j=i;j>=0;j--)
		drawPoint(x + (i-j)*8,y,n[j]);

}
//画圆
//采用查表的方法速度提高
void CPainter::drawCircle(int x,int y,int r)
{
    int px,py;
    int ** pnx = nx;
    int ** pny = ny;
    int scale = 1024;//11.378=360.0*4096.0;
    if(r > 512)
    {
        pnx = fy;
        pny = fx;
        scale = 2048;
		r -= 512;
    }
    int angle=0;
    for(angle=0;angle<scale;angle++)
    {
        px = pnx[angle][r-1];
        py = pny[angle][r-1];
        setPixel(x+px,y+py,color);
        setPixel(x+px,y-py,color);
        setPixel(x-px,y+py,color);
        setPixel(x-px,y-py,color);
        setPixel(x+py,y+px,color);
        setPixel(x+py,y-px,color);
        setPixel(x-py,y+px,color);
        setPixel(x-py,y-px,color);
    }
}


void CPainter::drawCircles(int x,int y,int step)
{
	int px,py;
	int R = step;
	//double num = (double)rangePPI / (double)(distantCircleCount+1);
	int distantCircleCount=600/step;

	int ** pnx = nx;
	int ** pny = ny;
	int scale = 1024;//11.378=360.0*4096.0;
	for(int i=1;i<=distantCircleCount ;i++)
	{
		int r = R*i;
		int angle=0;
		pnx = ny;
		pny = nx;
		scale = 1024;
		if(r > 512)
		{
			pnx = fy;
			pny = fx;
			scale = 2048;
			r -= 512;
		}
		for(angle=0;angle<scale;angle++)
		{
			px = pnx[angle][r-1];
			py = pny[angle][r-1];
			setPixel(x+px,y+py,color);
			setPixel(x+px,y-py,color);
			setPixel(x-px,y+py,color);
			setPixel(x-px,y-py,color);
			setPixel(x+py,y+px,color);
			setPixel(x+py,y-px,color);
			setPixel(x-py,y+px,color);
			setPixel(x-py,y-px,color);

		}

	}
}


void CPainter::drawDistantCircle(int x,int y,int distantCircleCount,int rangePPI)
{
    int px,py;
    int R = (double)600.0/(double)(distantCircleCount);//radiusPPI(double)radiusPPI/(double)(distantCircleCount+1);
    double num = (double)rangePPI / (double)(distantCircleCount);

    int ** pnx = nx;
    int ** pny = ny;
    int scale = 1024;//11.378=360.0*4096.0;
    for(int i=1;i<=distantCircleCount ;i++)
    {
        int r = R*i;
        int angle=0;
        pnx = ny;
        pny = nx;
        scale = 1024;
        if(r > 512)
        {
			if(r==600)r=599;// 距离圈600时，最右侧缺少一个像素，故在此减1
            pnx = fy;
            pny = fx;
            scale = 2048;
			r -= 512;
        }
        for(angle=0;angle<scale;angle++)
        {
            px = pnx[angle][r-1];
            py = pny[angle][r-1];
            setPixel(x+px,y+py,color);
            setPixel(x+px,y-py,color);
            setPixel(x-px,y+py,color);
            setPixel(x-px,y-py,color);
            setPixel(x+py,y+px,color);
            setPixel(x+py,y-px,color);
            setPixel(x-py,y+px,color);
            setPixel(x-py,y-px,color);

        }
        double jl = num*(double)i;
		if(pnx!=fy)
			drawNum(x+4,y-r-16,jl);
		else
			drawNum(x+4,y-r-512-16,jl);
    }
}

//画刻度线
void CPainter::drawScale(int x,int y,int aziIndex)
{
    int px,py,i;
	int a,xp,yp,dis;
    int *p=NULL;

    for(i=0;i<360;i++)
    {    
		 a = scaleTable[i][0];
		 a += aziIndex*2;
		 a %=8192;
    
		
		for(p = scaleTable[i]+1;*p > 0;p++)
		{	dis=*p;
			if(dis>ADDR_NEAR_SMP_LEN)
			{
				px = fx[a][dis-ADDR_NEAR_SMP_LEN];
				py = fy[a][dis-ADDR_NEAR_SMP_LEN];
				setPixel(x+px,y-py,color);
                
			}

            else
				{
                px = nx[a>>1][dis];
                py = ny[a>>1][dis];
                setPixel(x+px,y-py,color);//0-90
				}
		}
        
		if(i%10==0)//每10度显示度数
		{
			if(a<2048)
			{
				xp=0;
				yp=-16;
			}
			else if(a<4096)
			{
				xp=0;
				yp=0;
			}
			else if(a<6144)
			{
				xp=-24;
				yp=0;
			}
			else
			{
				xp=-24;
				yp=-16;
			}
			drawNum(px+xp+x,yp+y-py,i);
		}

    }

}
//画航迹点
void CPainter::drawTrackDot(int x,int y)
 {
    int i=0,j,shift;
    for(i=-2; i<3; i++)
    {
        int dy = y+i;
        shift=0x01;
        for(j=-2;j<3;j++)
        {
            if(dot[10][i+2] & shift)
            {
                int dx = x+j;
                setPixel(dx,dy,color);
            }
            shift = shift<<1;
        }
    }
 }



void CPainter::drawSectorRegion(int centerX,int centerY,int r1,int degree1,int r2,int degree2)
{
    int start,diff,i,x,y;
    if(r1>r2)
    {
        start = r2;
        diff = r1-r2;
    }
    else
    {
        start = r1;
        diff = r2-r1;
    }
    for(i=0;i<diff;i++)
    {
        x = centerX + chartAddrX[degree1][start + i];
        y = centerY - chartAddrY[degree1][start + i];
        setPixel(x,y,color);
        x = centerX + chartAddrX[degree2][start + i];
        y = centerY - chartAddrY[degree2][start + i];
        setPixel(x,y,color);
    }
    if(degree1>degree2)
        diff = (degree2-degree1)+4096;
    else
        diff = degree2-degree1;
    for(i=0; i<diff;i++)
    {
        int degree = (degree1+i)%4096;
        x = centerX + chartAddrX[degree][r1];
        y = centerY - chartAddrY[degree][r1];
        setPixel(x,y,color);
        x = centerX + chartAddrX[degree][r2];
        y = centerY - chartAddrY[degree][r2];
        setPixel(x,y,color);
    }    
}

void CPainter::drawSectorRegion(int centerX,int centerY,int r1,int degree1,int r2,int degree2,int idNum)
{
    drawSectorRegion(centerX,centerY,r1,degree1,r2,degree2);
    int r = r2>r1?r2:r1;
    int px =  chartAddrX[degree2][r];
    int py =  chartAddrY[degree2][r];
    drawNum(centerX  + px, centerY  - py,idNum);
}
/////////////////////////////////////////////
//根据输入的区位码,输出汉字
//qh区号,wh位号
int CPainter::drawText( int x, int y, int qh, int wh)
{
    int location;
    char buffer[32];
    FILE *fp;

    // read font info from font lib file
    location=(94*(qh-1)+(wh-1))*32;

    if((fp=fopen(MFB_FONTFILE,"rb"))==NULL)
    {
        printf("font file cannot open\n");
        return -1;
    }
    fseek( fp, location, 0 );
    fread( buffer, 32, 1, fp);

    // drawing on the framebuffer surface
    for(int i=0;i<16;i++)
        for(int j=0;j<2;j++)
            for(int k=0;k<8;k++)
                if(buffer[i*2+j]>>(7-k)&0x1)
                    setPixel(x+8*j+k,y-i,color);

    fclose(fp);
    return 0;
}
//需要输入地址映射表,用查表的方法避免死地址
void CPainter::drawArc(int x,int y,int deg1, int deg2, int r)
{
	if(deg1<=deg2)
	{
		if(r<512)
		{
			for(int i=deg1;i<deg2;i++)
			{
				setPixel( x+nx[i][r], y-ny[i][r], color );
			}
		}
		else
		{
			r -= 512;
			for(int i=deg1;i<2*deg2;i++)
			{
				setPixel( x+fx[i][r], y-fy[i][r], color );
			}
		}
	}
	else
	{
		if(r<512)
		{
			for(int i=deg1;i<4095;i++)
			{
				setPixel( x+nx[i][r], y-ny[i][r], color );
			}
			for(int i=0;i<deg2;i++)
			{
				setPixel( x+nx[i][r], y-ny[i][r], color );
			}
		}
		else
		{
			r -= 512;
			for(int i=deg1;i<8191;i++)
			{
				setPixel( x+fx[i][r], y-fy[i][r], color );
			}
			for(int i=0;i<2*deg2;i++)
			{
				setPixel( x+fx[i][r], y-fy[i][r], color );
			}
		}
	}
}

void CPainter::drawNoFillRect(int leftX, int upY, int rightX, int downY)
{ int x,y;
		
	for( x=leftX;x<rightX;x++)
	{   y=downY;
		setPixel(x,y,color);
		y=upY;
		setPixel(x,y,color);
	}
	for(  y=upY;y<downY;y++)
	{   x=leftX;
		setPixel(x,y,color);
		x=rightX;
		setPixel(x,y,color);
	}



}


void CPainter::drawVector(int x, int y, int azi, int len, int num)
{ int temp=0;
	if(len<=512)  
	{
		int i,px,py;
    
		for(i=0;i<len;i++)
    
		{
        
			px = chartAddrX[azi][i];
        
			py = chartAddrY[azi][i];
        
			setPixel(x+px,y-py,color);
    
		}

		if(num<128) drawNum(x,y,num);

		else
		{
			temp=num-128;
			drawPoint(x,y,10);
			if(temp<10) 
			{
				drawPoint(x+8,y,0);
				drawPoint(x+16,y,temp);
			}
			else drawNum(x+8,y,temp);
		}
			

	}
}

void CPainter::drawSmallRect(int x, int y)
{


	drawNoFillRect(x-2,y-2,x+2,y+2);
}


void CPainter::drawCursor(int x,int y)
{
	int i;
	for(i=x-16;i<x+16;i++)
		setPixel(i,y,color);

	for(i=y-16;i<y+16;i++)
		setPixel(x,i,color);
}
