

#ifndef __THU_6BE7D83F_50C1_4007__
#define __THU_6BE7D83F_50C1_4007__

#include <QtGui>

//======功能演示接口======

int tshWindowInit();
int selfInitParam();

int __thu_makeSNFile();

int  tshInitSurface(char VideoChannel);
int  tshClearScreen(char VideoChannel);

//========== 测试接口，回放文件 ==========
// channel is 0, 1
//void tshTestDispUpdate(int channel,LPARAM);
void tshTestYh(int channel);

//========= 内部初始化参数 ==============

enum e_source_type{E_CARD,E_NET,E_SWITCH};
enum e_access_type{E_BROADCAST,E_P2P};

struct s_net_config{
	char address[20];
	unsigned int port;
	e_access_type accessType;
	char user[20];
	char pwd[20];
};

struct s_radar_channel{
	int ID;// ID<0 indicates invalid channel, ID should be 0 or 1 for valid channel
    QWidget* hPPIWnd;
    QWidget* hARWnd;
    QWidget* hMiniWnd;
	int PPIRadius;
	int PPIWidth;
	int PPIHeight;

    bool hasBottom;
    bool hasTop;

	e_source_type source;

	unsigned int hwCode;
	s_net_config netConfig;

};

struct s_tv_channel{
	int ID;// ID<0 indicates invalid channel, ID should be 0 or 1 for valid channel
     QWidget* hTVWnd;
    bool hasTop;

	e_source_type source;

	unsigned int hwCode;
	s_net_config netConfig;

};

struct s_init_param{
	int ID;// ID<0 indicates invalid channel, ID should be 0 or 1 for valid channel
	s_radar_channel radarChannel;
	s_tv_channel tvChannel;
	int refreshRate;
};

struct s_in_param{
	s_init_param _param[2];
};


//======== 内部后页面大小 =========
//== MINI需要是个方形的，和放大倍数有关
#define SURF_MINI_WIDTH 340
#define SURF_MINI_HEIGHT 340
#define SURF_AR_WIDTH 360
#define SURF_AR_HEIGHT 300
#define SURF_TV_WIDTH 704
#define SURF_TV_HEIGHT 576
#define SURF_CM_WIDTH 1200
#define SURF_CM_HEIGHT 1200

#endif
