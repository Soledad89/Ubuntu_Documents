
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
const int SAMPLE_NUM=512*4;//一个视频量程合并后的采样点数
const int AZI_NUM=4096;//雷达旋转一周的角度计数

const int ADDR_NEAR_AZI_LEN=AZI_NUM;//PPI显示不偏心时的一周显示角度总数
const int ADDR_NEAR_SMP_LEN=SAMPLE_NUM/4;//PPI显示不偏心时的一根视频显示点数

const int ADDR_FAR_AZI_LEN=AZI_NUM*2;//PPI显示偏心时的一周显示角度总数
const int ADDR_FAR_SMP_LEN=SAMPLE_NUM/4;//PPI显示偏心时的一根视频显示点数

const int RND_LEN=1200*1200;//余辉随机数表的长度,等于作图区域的分辨率

//-------------------------------------------------------------------

//视频信息长度

//8bits video data
typedef unsigned char VIDEODATATYPE;//雷达视频采用点数据类型,位宽8
const int VIDEODATADEPTH = 8;
const int VIDEODATAMASK = 0xff;
const double VIDEODATALEN = 256.0;

typedef unsigned char VIDEODISPTYPE;//视频数据作图类型,位宽8, 256级灰度
const int VIDEODISPDEPTH = 8;//视频点数据作图位宽
const int VIDEODISPMASK = 0xff;
const double VIDEODISPLEN = 256.0;

typedef unsigned int DISPMEMTYPE;//显存类型,位宽32

//-------------------------------------------------------------------

typedef struct s_layer_unit
{
    DISPMEMTYPE nfirst;//一次信息
    DISPMEMTYPE nsecond;
    DISPMEMTYPE nthird;
	DISPMEMTYPE nmap;

    VIDEODATATYPE first;//一次视频
    
    //反映当前状态
    bool bsecond;//是否有二次信息
    bool bthird;
	bool bmap;//是否有地图信息，地图在一次之上，其他层之下，具有透明叠加功能
	//bool reserved;//为了四字节对齐
	//unsigned short bmap;//是否有地图信息
	bool bmask;//是否是尾迹
    int curlayer;

}s_layer_unit;

typedef struct s_disp_state
{
int northIndex;
int prowIndex;
int xorg;
int yorg;
float prowCorrect;//舰首校正值，单位：度
float distanceCorrect;//距离校正值，单位：米
	
unsigned char  gain;
int  range;// 0~300
int base;
unsigned char  dispMode;//0: 正北向上  1: 舰首向上  2: 航向向上
unsigned char moveMode; //0: 相对运动  1:真运动
unsigned char mileKilo;// mile:0  ; kilo : 11    //range + milekilo 对应常量数组索引
unsigned char dayNight;
unsigned char tailTime;
unsigned char cluterControl;//设置抗海浪杂波  0：自动 ； 其他：级数  其中 1 为不抑制
unsigned char rainSnowControl;//设置抗雨雪杂波  0：自动 ； 其他：级数  其中 1 为不抑制
unsigned char cofreqControl;//设置抗同频异步干扰： 0：关闭；1：打开

unsigned char vecType; //矢量类型: 0  真矢量；1  相对矢量
unsigned char vecTime;// 单位：分钟； 范围：1～60

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
    VIDEODATATYPE videodata[CNTVIDEO];//原始视频数据
}s_ppi_video;

//视频和方位对应关系
const int max_azi_num_per_video = 24;
// typedef struct ppi_video_with_azi
// {
//     int vidx;//视频在数据缓存区的游标位置
//     int znum;//对应角度的个数
//     int zidx[max_azi_num_per_video];//视频对应的角度数据缓存区的位置，最多max_azi_num_per_video个
// }s_ppi_video_with_azi;

const int maxvideosize = 10;//视频缓存区大小，s_ppi_video得个数
const int maxazisize = 4096;//方位缓存区的大小，s_ppi_azi的个数

// typedef std::vector<s_ppi_video_with_azi> VecVwa;
// typedef std::vector<s_ppi_video_with_azi>::iterator VecVwaIte;

//PPI显示数据接口定义
typedef struct s_ppi_video_for_disp
{
    //CNTVIDEO defined in ib_pkg.h, the num of video sapmle point
    VIDEODATATYPE videodata[CNTVIDEO];//原始视频数据
    int znum;//对应角度的个数
    int azicnt[max_azi_num_per_video];//(lsd) (方位代码)角度增量//int zaicont[max_azi_num_per_video]
}s_ppi_video_for_disp;

//-------------------------------------------------------------------

typedef struct pkg_check_flag
{
    //包结构完整性
    bool flag_intact;
    bool flag_continous;
    //时标完整性, 更新计数
    unsigned int fcnt_main;//主脉冲
    unsigned int fcnt_prow;//舰首
    unsigned int fcnt_azi;//方位
    unsigned int fcnt_sec;//秒脉冲

    unsigned int fcnt_main_last;//主脉冲
    unsigned int fcnt_prow_last;//舰首
    unsigned int fcnt_azi_last;//方位
    unsigned int fcnt_sec_last;//秒脉冲
}pkg_check_flag;

typedef struct pkg_check_result
{
    unsigned char bnormal   :1;//系统正常
    //分项
    unsigned char bpkg      :1;//包结构正常
    unsigned char bmain     :1;//主脉冲正常
    unsigned char bazi      :1;//角脉冲正常
    unsigned char bprow    :1;//舰首脉冲正常
    unsigned char bsec  :1;//秒脉冲正常
    
}pkg_check_result;

//用于存储的包结构定义---------------------------------------------------------
typedef struct pkg_save_info
{
    bool bfirstinfo;//一次信息是否显示
    bool bsecondinfo;//二次信息是否显示
    bool bdivert;//是否偏心
    bool undefined[5];//没有定义
    unsigned char range;//量程代号1~4,表示75km,150km,300km,500km四个量程
    unsigned char gain;//视频增益
    unsigned short xorg;
    unsigned short yorg;//圆心坐标
}pkg_save_info;

typedef struct pkg_save_head
{
    unsigned long head;//存储包包头
    unsigned long num;//存储包序号
    unsigned long timestamp;//存储时刻计算机时间
    pkg_save_info info;
    unsigned char nfirstinfo;//一次信息个数
    unsigned char nsecondinfo;//二次信息个数
}pkg_save_head;

const int SAVELEN = 2458;
//合并方案
//原始视频0~3K-1 ->3合1 1K
//原始视频3K~6K-1 ->6合1 512
//原始视频6K~12K-1 ->12合1 512
//原始视频12K~20K   ->20合1 410
//映射关系生成一个表
typedef struct s_ppi_video_for_save
{
    VIDEODATATYPE videodata[SAVELEN];
    int znum;//对应角度的个数
    int azicnt[max_azi_num_per_video];//角度增量
}s_ppi_video_for_save;

//存储包结构定义
//----------------------------------------------------------------------------
//包头
//----------------------------------------------------------------------------
//第一个视频对应角度个数(32bits)|第一个角度(32bits)|第二个角度(32bits)|...|视频
//----------------------------------------------------------------------------
//第二个视频对应角度个数(32bits)|第一个角度(32bits)|第二个角度(32bits)|...|视频
//----------------------------------------------------------------------------
//... ...
//----------------------------------------------------------------------------
//二次信息
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

const int dispRangeNum[]={6,12,24,48,96,96+24,96+48,200,400,800,900};//演示时使用
*/

// 加密数据文件的文件位置
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
    unsigned int	 azi;       //方位,相对正北的方位值，取值范围0~4095，对应0~360度
    unsigned int     elev;
    unsigned char video[1200];  //视频,合并后用于显示的雷达视频，数据量根据网络速度设为固定值
}ML_GVIDMW_RadarPkg_t;
# endif


#endif
