#ifndef UDPSERVER_H
#define UDPSERVER_H

#include <QWidget>
#include <QUdpSocket>
#include <QFile>
#include <QTimer>
#include "ppidef.h"

#define PORTNUM1 7000
#define PORTNUM2 8000
#define VIDNUM 1200
#define AZITYPE quint16

#ifndef DATAGRAM_STRUCTURE_
#define DATAGRAM_STRUCTURE_
#pragma pack (push,4)



typedef struct
{
    quint16 TotalLength;	// 报文长度	2字节	本次数据报文的全部长度
    quint16 Reserved;	// 备用	2字节
    qint32 SourceIP;				// 报文源地址	4字节	发送方计算机IP地址
    qint32 DestinationIP;			// 报文目地地址	4字节	接收方计算机IP地址
    quint8 cSN;			// 序列号	1字节	协议序列号，顺序加1
    quint8 cACKNo;		// 确认号	1字节	协议确认号，默认为0
    quint8 cFlag;		// 报文标志	1字节	默认为0
    quint8 cSumofUnits;	// 信息单元个数	1字节	同类信息单元的个数，默认为1

}CSMXP_GRAMHEAD;

//数据报单元头结构
typedef struct
{
    quint8 cUnitSN;		// 信息单元序号	1字节	信息单元在应用层报文中的序号，默认为1
    quint8 cUnitID;		// 信息单元标识	1字节	报文标识，由本测试评估系统定义：10为channel 1，11对应channel 2
    quint16 UnitLength;	// 信息单元长度	2字节	有效信息单元的实际长度
    quint32 TimeStamp;	// 时戳	4字节	报文发送时刻
}GRAM_UNITHEAD;

typedef struct
{
    quint16	 pkgNum;//包序号,表示数据包之间的前后关系，取值范围 0~65535
    AZITYPE	 azi;//方位,相对正北的方位值，取值范围0~4095，对应0~360度
    quint8 *Video;//视频,合并后用于显示的雷达视频，数据量根据网络速度设为固定值 1200
}RAD_DATAPKG;
#pragma pack (pop)
#endif



#define GRAM_LENTH 0x10000

class UDPserver : public QWidget
{
    Q_OBJECT
public:
    UDPserver(s_ppi_video_for_disp*,s_ppi_video_for_disp*,QWidget *parent = 0);
    ~UDPserver();
    
signals:
    void receivedfinished1(char ,char );
    void receivedfinished2(char ,char );
private:
    QUdpSocket *receiver1,*receiver2;
    QByteArray datagram1,datagram2;
    FILE* trygetgram;
    s_ppi_video_for_disp* p1;
    s_ppi_video_for_disp* p2;
    char pkgnum1,pkgnum2,ch1,ch2;


    CSMXP_GRAMHEAD gramhead1;
    GRAM_UNITHEAD unithead1[50];
    RAD_DATAPKG radarpkg1[50];
    AZITYPE azitmp1[50];

    CSMXP_GRAMHEAD gramhead2;
    GRAM_UNITHEAD unithead2[50];
    RAD_DATAPKG radarpkg2[50];
    AZITYPE azitmp2[50];
    /**/

public slots:
    void processPendingDatagram1(void);
    void processPendingDatagram2(void);

};

#endif // UDPSERVER_H
