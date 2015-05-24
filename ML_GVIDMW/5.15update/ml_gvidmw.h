#ifndef __THU_6BE7D83F_50C1_4007_804D_525118CDCC34__
#define __THU_6BE7D83F_50C1_4007_804D_525118CDCC34__

#include <QtCore/qglobal.h>

#if defined(ML_GVIDMW_LIBRARY)
#define GVIDMW_API Q_DECL_EXPORT
#else
#define GVIDMW_API Q_DECL_IMPORT
#endif

//#define GVIDMW_API  extern "C"

typedef int Status;

#ifndef _ML_GVIDMW_RADARPKG_THU_
#define _ML_GVIDMW_RADARPKG_THU_
typedef struct  _ML_GVIDMW_RadarPkg_t
{
    unsigned int	 azi;       //方位,相对正北的方位值，取值范围0~4095，对应0~360度
    unsigned int     elev;
    unsigned char video[1200];  //视频,合并后用于显示的雷达视频，数据量根据网络速度设为固定值
}ML_GVIDMW_RadarPkg_t;
#endif
//======标准中定的对外接口======
// VideoChannel 取值1、2
// theColor的格式为：由高到低，R、G、B、保留  ( 0xRRGGBB00 )

//------init------
GVIDMW_API Status ML_GVID_Init();
//初始化函数返回值错误信息：
//  -1  --  重复调用初始化函数
//  -2  --  日志文件建立出错，可能没有save文件夹
//  -3  --  配置文件出错
//  -4  --  雷达信息源设为local方式，save文件夹下缺少名为radar1和radar2的视频文件
//  -5  --  系统数据出错，检查dat文件夹下文件


//------PPI------
GVIDMW_API Status ML_GVID_OpenPPI(char VideoChannel,short theX, short theY, short theWidth, short theHeight);
GVIDMW_API Status ML_GVID_ClosePPI(char VideoChannel);
GVIDMW_API Status ML_GVID_SetPPIXY(char VideoChannel ,short theX ,short theY);
GVIDMW_API Status ML_GVID_SetPPIWH(char VideoChannel ,short theWidth, short theHeight);
GVIDMW_API Status ML_GVID_SetPPIMode(char VideoChannel, short theMode);
GVIDMW_API Status ML_GVID_SetPPICenter(char VideoChannel ,short theX ,short theY);
GVIDMW_API Status ML_GVID_SetPPIShipDir(char VideoChannel,float theShipDir);
GVIDMW_API Status ML_GVID_SetPPIColor(char VideoChannel,unsigned int theColor);
GVIDMW_API Status ML_GVID_SetPPIScan(char VideoChannel,int theScan);
GVIDMW_API Status ML_GVID_SetPPILineColor(char VideoChannel,unsigned int theColor);
GVIDMW_API Status ML_GVID_FrostPPI(char VideoChannel,char theFrost);
GVIDMW_API Status ML_GVID_SetPPIDist(char VideoChannel,short theDist);
GVIDMW_API Status ML_GVID_SetPPISwitch(char VideoChannel,short theSwitch);
GVIDMW_API Status ML_GVID_SetPPIGate(char VideoChannel,char theGate);
GVIDMW_API Status ML_GVID_SetPPITail(char VideoChannel,int theTail);

GVIDMW_API Status ML_GVID_SetTailSwitch(char VideoChannel,short theSwitch);
GVIDMW_API Status ML_GVID_SetTailColor(char VideoChannel,unsigned int theColor);
GVIDMW_API Status ML_GVID_SetTailGate(char VideoChannel,unsigned char theGate);
GVIDMW_API Status ML_GVID_SetTailTime(char VideoChannel,int theTime);
GVIDMW_API Status ML_GVID_SetPPITogether(short theSwitch);
GVIDMW_API Status ML_GVID_SetPPIColorTable(char VideoChannel,unsigned int* colorTable);
GVIDMW_API Status ML_GVID_ClearPPI(char VideoChannel);
GVIDMW_API Status ML_GVID_SetPPIMoveMode(char VideoChannel, short theMode);

//------AR------
GVIDMW_API Status ML_GVID_OpenAr(char VideoChannel,short theX, short theY , short theWidth, short theHeight);
GVIDMW_API Status ML_GVID_CloseAr(char VideoChannel);
GVIDMW_API Status ML_GVID_SetArXY(char VideoChannel ,short theX ,short theY);
GVIDMW_API Status ML_GVID_SetArWH(char VideoChannel ,short theWidth, short theHeight);
GVIDMW_API Status ML_GVID_SetArGate (char VideoChannel ,char theGate);
GVIDMW_API Status ML_GVID_SetArDist (char VideoChannel ,short theDist);

GVIDMW_API Status ML_GVID_SetArColor(char VideoChannel,unsigned int theColor);
GVIDMW_API Status ML_GVID_SetArTail(char VideoChannel,int theTail);
GVIDMW_API Status ML_GVID_SetArBackgroundColor(char VideoChannel,unsigned int theColor);



//------MiniWin------
GVIDMW_API Status ML_GVID_OpenMiniWin(char VideoChannel,short theX, short theY , short theWidth, short theHeight);
GVIDMW_API Status ML_GVID_CloseMiniWin(char VideoChannel);
GVIDMW_API Status ML_GVID_SetMiniWinXY(char VideoChannel ,short theX ,short theY);
GVIDMW_API Status ML_GVID_SetMiniWinWH(char VideoChannel ,short theWidth, short theHeight);
GVIDMW_API Status ML_GVID_SetMiniWinMode(char VideoChannel, short theMode);
GVIDMW_API Status ML_GVID_SetMiniWinColor(char VideoChannel,unsigned int theColor);
GVIDMW_API Status ML_GVID_SetMiniWinDistDir(char VideoChannel ,short theDistance ,float theDirection);
GVIDMW_API Status ML_GVID_SetMiniWinScale(char VideoChannel,short theScale);

GVIDMW_API Status ML_GVID_SetMiniWinColorTable(char VideoChannel,unsigned int* colorTable);
GVIDMW_API Status ML_GVID_SetScanMode(char VideoChannel, short theScanMode);
GVIDMW_API Status ML_GVID_SendRadarPkg(char VideoChannel, int pkgNum, ML_GVIDMW_RadarPkg_t *pkgBuf);

//------TV------
GVIDMW_API Status ML_GVID_OpenTV (char VideoChannel ,short theX, short theY,short theWidth,short theHeight);
GVIDMW_API Status ML_GVID_CloseTV (char VideoChannel );
GVIDMW_API Status ML_GVID_SetTVXY(char VideoChannel ,short theX, short theY);
GVIDMW_API Status ML_GVID_SetTVWH(char VideoChannel ,short theWidth, short theHeight);
GVIDMW_API Status ML_GVID_FrostTV(char VideoChannel,char theFrost);
GVIDMW_API Status ML_GVID_SetTVBright(char VideoChannel,unsigned char theBright);
GVIDMW_API Status ML_GVID_SetTVContrast(char VideoChannel,unsigned char theContrast);
GVIDMW_API Status ML_GVID_SetTVColor(char VideoChannel,unsigned char theColor);

GVIDMW_API Status ML_GVID_SetPMLayerColors(char VideoChannel, char theMode, int theNum, unsigned int *colors);
GVIDMW_API Status ML_GVID_SetATLayerColorKey(char VideoChannel, unsigned int colorKey);

//----extent------
GVIDMW_API Status ML_GVID_SetMarklayer( bool bvisible);



#endif // __THU_6BE7D83F_50C1_4007_804D_525118CDCC34__
