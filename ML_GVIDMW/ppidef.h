
//******************************
//
//  author : zhaolimin, lishidan
//
//  create time: 
//
//  last modify time:2007-10-30
//
//  Version: 1.6
//
//******************************

#ifndef _PPIDEF_H_
#define _PPIDEF_H_

#include "ppitime.h"
#include "./cfg/ib_pkg.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//-------------------------------------------------------------------
#include <deque>
#include <vector>
#include <algorithm>

typedef std::deque<int> DeqInt;
typedef std::deque<int>::iterator DeqIntIte;
typedef std::deque<unsigned long> DeqULong;
typedef DeqULong::iterator DeqULongIte;
typedef std::deque<float> DeqFloat;
typedef DeqFloat::iterator DeqFloatIte;

const int TOP=4; //top layer number

//-------------------------------------------------------------------
const int SAMPLE_NUM=512*4;//һ����Ƶ���̺ϲ���Ĳ�������
const int AZI_NUM=4096;//�״���תһ�ܵĽǶȼ���

const int ADDR_NEAR_AZI_LEN=AZI_NUM;//PPI��ʾ��ƫ��ʱ��һ����ʾ�Ƕ�����
const int ADDR_NEAR_SMP_LEN=SAMPLE_NUM/4;//PPI��ʾ��ƫ��ʱ��һ����Ƶ��ʾ����

const int ADDR_FAR_AZI_LEN=AZI_NUM*2;//PPI��ʾƫ��ʱ��һ����ʾ�Ƕ�����
const int ADDR_FAR_SMP_LEN=SAMPLE_NUM/4;//PPI��ʾƫ��ʱ��һ����Ƶ��ʾ����

const int RND_LEN=1200*1200;//����������ĳ���,������ͼ����ķֱ���

//-------------------------------------------------------------------

//��Ƶ��Ϣ����

//8bits video data
typedef unsigned char VIDEODATATYPE;//�״���Ƶ���õ���������,λ��8
const int VIDEODATADEPTH = 8;
const int VIDEODATAMASK = 0xff;
const double VIDEODATALEN = 256.0;

typedef unsigned char VIDEODISPTYPE;//��Ƶ������ͼ����,λ��8, 256���Ҷ�
const int VIDEODISPDEPTH = 8;//��Ƶ��������ͼλ��
const int VIDEODISPMASK = 0xff;
const double VIDEODISPLEN = 256.0;

typedef unsigned int DISPMEMTYPE;//�Դ�����,λ��32

//-------------------------------------------------------------------

typedef struct s_layer_unit
{
    DISPMEMTYPE nfirst;//һ����Ϣ
    DISPMEMTYPE nsecond;
    DISPMEMTYPE nthird;
	DISPMEMTYPE nmap;

    VIDEODATATYPE first;//һ����Ƶ
    
    //��ӳ��ǰ״̬
    bool bsecond;//�Ƿ��ж�����Ϣ
    bool bthird;
	bool bmap;//�Ƿ��е�ͼ��Ϣ����ͼ��һ��֮�ϣ�������֮�£�����͸�����ӹ���
	//bool reserved;//Ϊ�����ֽڶ���
	//unsigned short bmap;//�Ƿ��е�ͼ��Ϣ
	bool bmask;//�Ƿ���β��
    int curlayer;

}s_layer_unit;

typedef struct s_disp_state
{
int northIndex;
int prowIndex;
int xorg;
int yorg;
float prowCorrect;//����У��ֵ����λ����
float distanceCorrect;//����У��ֵ����λ����
	
unsigned char  gain;
int  range;// 0~300
int base;
unsigned char  dispMode;//0: ��������  1: ��������  2: ��������
unsigned char moveMode; //0: ����˶�  1:���˶�
unsigned char mileKilo;// mile:0  ; kilo : 11    //range + milekilo ��Ӧ������������
unsigned char dayNight;
unsigned char tailTime;
unsigned char cluterControl;//���ÿ������Ӳ�  0���Զ� �� ����������  ���� 1 Ϊ������
unsigned char rainSnowControl;//���ÿ���ѩ�Ӳ�  0���Զ� �� ����������  ���� 1 Ϊ������
unsigned char cofreqControl;//���ÿ�ͬƵ�첽���ţ� 0���رգ�1����

unsigned char vecType; //ʸ������: 0  ��ʸ����1  ���ʸ��
unsigned char vecTime;// ��λ�����ӣ� ��Χ��1��60

bool enFirstInfo;
bool enDivert;
bool enSplitDisp;
bool enWindowDisp;
bool enProwLine;
bool enFixedScale;
bool enEchoWiden;
bool enCloseFlag;

unsigned char scopeMode;//1: PPI; 0: B; 2: E 3:H

}s_disp_state;

typedef struct s_ship_state
{
s_ppi_time time;
float speed;
float sailingAzi;  //unit is degree
float prowAzi;

}s_ship_state;


typedef struct s_channel
{
	bool hasPPI;
	bool hasAR;
	bool hasWIN;

	bool isFrost;
	bool isOpen;

	int PPI_XSTART;
	int PPI_YSTART;
	int PPI_WIDTH;
	int PPI_HEIGHT;

	int WIN_XSTART;
	int WIN_YSTART;
	int WIN_WIDTH;
	int WIN_HEIGHT;

	int AR_XSTART;
	int AR_YSTART;
	int AR_WIDTH;
	int AR_HEIGHT;

}s_channel;


//-------------------------------------------------------------------


typedef struct s_ppi_azi
{
    s_ppi_time time;
    int azicnt;//0~359
}s_ppi_azi;

typedef struct s_ppi_video
{
    s_ppi_time time;
    //CNTVIDEO defined in ib_pkg.h, the num of video sapmle point
    VIDEODATATYPE videodata[CNTVIDEO];//ԭʼ��Ƶ����
}s_ppi_video;

//��Ƶ�ͷ�λ��Ӧ��ϵ
const int max_azi_num_per_video = 24;
// typedef struct ppi_video_with_azi
// {
//     int vidx;//��Ƶ�����ݻ��������α�λ��
//     int znum;//��Ӧ�Ƕȵĸ���
//     int zidx[max_azi_num_per_video];//��Ƶ��Ӧ�ĽǶ����ݻ�������λ�ã����max_azi_num_per_video��
// }s_ppi_video_with_azi;

const int maxvideosize = 10;//��Ƶ��������С��s_ppi_video�ø���
const int maxazisize = 4096;//��λ�������Ĵ�С��s_ppi_azi�ĸ���

// typedef std::vector<s_ppi_video_with_azi> VecVwa;
// typedef std::vector<s_ppi_video_with_azi>::iterator VecVwaIte;

//PPI��ʾ���ݽӿڶ���
typedef struct s_ppi_video_for_disp
{
    //CNTVIDEO defined in ib_pkg.h, the num of video sapmle point
    VIDEODATATYPE videodata[CNTVIDEO];//ԭʼ��Ƶ����
    int znum;//��Ӧ�Ƕȵĸ���
    int azicnt[max_azi_num_per_video];//(lsd) (��λ����)�Ƕ�����//int zaicont[max_azi_num_per_video]
}s_ppi_video_for_disp;

//-------------------------------------------------------------------

typedef struct pkg_check_flag
{
    //���ṹ������
    bool flag_intact;
    bool flag_continous;
    //ʱ��������, ���¼���
    unsigned int fcnt_main;//������
    unsigned int fcnt_prow;//����
    unsigned int fcnt_azi;//��λ
    unsigned int fcnt_sec;//������

    unsigned int fcnt_main_last;//������
    unsigned int fcnt_prow_last;//����
    unsigned int fcnt_azi_last;//��λ
    unsigned int fcnt_sec_last;//������
}pkg_check_flag;

typedef struct pkg_check_result
{
    unsigned char bnormal   :1;//ϵͳ����
    //����
    unsigned char bpkg      :1;//���ṹ����
    unsigned char bmain     :1;//����������
    unsigned char bazi      :1;//����������
    unsigned char bprow    :1;//������������
    unsigned char bsec  :1;//����������
    
}pkg_check_result;

//���ڴ洢�İ��ṹ����---------------------------------------------------------
typedef struct pkg_save_info
{
    bool bfirstinfo;//һ����Ϣ�Ƿ���ʾ
    bool bsecondinfo;//������Ϣ�Ƿ���ʾ
    bool bdivert;//�Ƿ�ƫ��
    bool undefined[5];//û�ж���
    unsigned char range;//���̴���1~4,��ʾ75km,150km,300km,500km�ĸ�����
    unsigned char gain;//��Ƶ����
    unsigned short xorg;
    unsigned short yorg;//Բ������
}pkg_save_info;

typedef struct pkg_save_head
{
    unsigned long head;//�洢����ͷ
    unsigned long num;//�洢�����
    unsigned long timestamp;//�洢ʱ�̼����ʱ��
    pkg_save_info info;
    unsigned char nfirstinfo;//һ����Ϣ����
    unsigned char nsecondinfo;//������Ϣ����
}pkg_save_head;

const int SAVELEN = 2458;
//�ϲ�����
//ԭʼ��Ƶ0~3K-1 ->3��1 1K
//ԭʼ��Ƶ3K~6K-1 ->6��1 512
//ԭʼ��Ƶ6K~12K-1 ->12��1 512
//ԭʼ��Ƶ12K~20K   ->20��1 410
//ӳ���ϵ����һ����
typedef struct s_ppi_video_for_save
{
    VIDEODATATYPE videodata[SAVELEN];
    int znum;//��Ӧ�Ƕȵĸ���
    int azicnt[max_azi_num_per_video];//�Ƕ�����
}s_ppi_video_for_save;

//�洢���ṹ����
//----------------------------------------------------------------------------
//��ͷ
//----------------------------------------------------------------------------
//��һ����Ƶ��Ӧ�Ƕȸ���(32bits)|��һ���Ƕ�(32bits)|�ڶ����Ƕ�(32bits)|...|��Ƶ
//----------------------------------------------------------------------------
//�ڶ�����Ƶ��Ӧ�Ƕȸ���(32bits)|��һ���Ƕ�(32bits)|�ڶ����Ƕ�(32bits)|...|��Ƶ
//----------------------------------------------------------------------------
//... ...
//----------------------------------------------------------------------------
//������Ϣ
//----------------------------------------------------------------------------
/*
const float MILE[]={0.125f , 0.25f , 0.5f , 0.75f , 1.5f , 3.0f , 6.0f , 12.0f , 24.0f , 48.0f , 108.0f};//nm
const float KILO[]={0.25f , 0.5f , 1.0f , 1.5f , 3.0f , 6.0f , 12.0f , 24.0f , 48.0f , 96.0f , 216.0f};//km
const float METER[]={231.48f , 462.96f , 925.93f , 1388.89f , 2777.78f , 5555.55f , 11111.1f , 22222.2f , 44444.4f , 88888.8f , 199999.8f,
	                          250.0f , 500.0f , 1000.0f , 1500.0f , 3000.0f , 6000.0f , 12000.0f , 24000.0f , 48000.0f , 96000.0f , 216000.0f};
//mile * 1851.85
//kilo * 1000
//unit meter
*/
const float DOTDIS[]={0.399f , 0.798f , 1.596f , 2.395f , 4.789f , 9.579f , 19.157f , 38.314f , 76.628f , 153.257f , 344.827f,
                                  0.4310f  ,  0.8621f  ,  1.7241f  ,  2.5862f  ,  5.1724f  , 10.3448f  , 20.6897f  , 41.3793f  , 82.7586f , 165.5172f  ,372.4138f};
//meter / 580
//unit meter

const float AZIDIS = 0.08789f;//360.0/4096.0;
const float pi = 3.1416f;
/*
const int MOVEINTERVAL[]={50 , 100 , 200 , 300 , 600 , 1200 , 2400 , 4800 , 9600 , 19200 , 40000};

const char * const colorFileName[4] = {"./dat/colorYellow","./dat/colorRed","./dat/colorGreen","./dat/colorBlue"};

const int dispRangeNum[]={6,12,24,48,96,96+24,96+48,200,400,800,900};//��ʾʱʹ��
*/

// ���������ļ����ļ�λ��
const int datPos[10]={45075968,14149632,14149120,8388608,22538752,8389120,0,14150144,45076480,28298752};
//const char * const fileName[FILENUM] = {
//0	"./dat/colorYellow",
//1	"./dat/colorRed",
//2	"./dat/colorGreen",
//3	"./dat/colorBlue",
//4	"./dat/Rnd_xb",
//5	"./dat/Rnd_yb",
//6	"./dat/Rad_4096_512_xb",
//7	"./dat/Rad_4096_512_yb",
//8	"./dat/Rad_8192_512_xb",
//9	"./dat/Rad_8192_512_yb"
//};

#ifndef _ML_GVIDMW_RADARPKG_THU_
#define _ML_GVIDMW_RADARPKG_THU_
typedef struct  _ML_GVIDMW_RadarPkg_t
{
    unsigned int	 azi;       //��λ,��������ķ�λֵ��ȡֵ��Χ0~4095����Ӧ0~360��
    unsigned int     elev;
    unsigned char video[1200];  //��Ƶ,�ϲ���������ʾ���״���Ƶ�����������������ٶ���Ϊ�̶�ֵ
}ML_GVIDMW_RadarPkg_t;
# endif


#endif
