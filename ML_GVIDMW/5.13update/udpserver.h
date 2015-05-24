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
    quint16 TotalLength;	// ���ĳ���	2�ֽ�	�������ݱ��ĵ�ȫ������
    quint16 Reserved;	// ����	2�ֽ�
    qint32 SourceIP;				// ����Դ��ַ	4�ֽ�	���ͷ������IP��ַ
    qint32 DestinationIP;			// ����Ŀ�ص�ַ	4�ֽ�	���շ������IP��ַ
    quint8 cSN;			// ���к�	1�ֽ�	Э�����кţ�˳���1
    quint8 cACKNo;		// ȷ�Ϻ�	1�ֽ�	Э��ȷ�Ϻţ�Ĭ��Ϊ0
    quint8 cFlag;		// ���ı�־	1�ֽ�	Ĭ��Ϊ0
    quint8 cSumofUnits;	// ��Ϣ��Ԫ����	1�ֽ�	ͬ����Ϣ��Ԫ�ĸ�����Ĭ��Ϊ1

}CSMXP_GRAMHEAD;

//���ݱ���Ԫͷ�ṹ
typedef struct
{
    quint8 cUnitSN;		// ��Ϣ��Ԫ���	1�ֽ�	��Ϣ��Ԫ��Ӧ�ò㱨���е���ţ�Ĭ��Ϊ1
    quint8 cUnitID;		// ��Ϣ��Ԫ��ʶ	1�ֽ�	���ı�ʶ���ɱ���������ϵͳ���壺10Ϊchannel 1��11��Ӧchannel 2
    quint16 UnitLength;	// ��Ϣ��Ԫ����	2�ֽ�	��Ч��Ϣ��Ԫ��ʵ�ʳ���
    quint32 TimeStamp;	// ʱ��	4�ֽ�	���ķ���ʱ��
}GRAM_UNITHEAD;

typedef struct
{
    quint16	 pkgNum;//�����,��ʾ���ݰ�֮���ǰ���ϵ��ȡֵ��Χ 0~65535
    AZITYPE	 azi;//��λ,��������ķ�λֵ��ȡֵ��Χ0~4095����Ӧ0~360��
    quint8 *Video;//��Ƶ,�ϲ���������ʾ���״���Ƶ�����������������ٶ���Ϊ�̶�ֵ 1200
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
