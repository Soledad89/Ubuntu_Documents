#include "udpserver.h"


UDPserver::UDPserver(s_ppi_video_for_disp* pp1,s_ppi_video_for_disp* pp2,QWidget *parent) :
    QWidget(parent),
    trygetgram(NULL),
    p1(pp1),p2(pp2), pkgnum1(5),ch1(10),pkgnum2(5),ch2(11)
{
/*
    if((trygetgram=fopen("save/trysave.txt","wt"))==NULL)
    {
        qDebug("error open save/trysave.txt");
        exit(3);
    }
    /**/
    receiver1 = new QUdpSocket(this);
    receiver1->bind(PORTNUM1,QUdpSocket::DefaultForPlatform);
    connect(receiver1,SIGNAL(readyRead()),this,SLOT(processPendingDatagram1()));
    receiver2 = new QUdpSocket(this);
    receiver2->bind(PORTNUM2,QUdpSocket::DefaultForPlatform);
    connect(receiver2,SIGNAL(readyRead()),this,SLOT(processPendingDatagram2()));
}

void UDPserver::processPendingDatagram1() //处理等待的数据报
{
//    short nHeadLen = sizeof(CSMXP_GRAMHEAD) + sizeof(GRAM_UNITHEAD);
    while(receiver1->hasPendingDatagrams())  //拥有等待的数据报
    {
        if((receiver1->pendingDatagramSize()==0)||(receiver1->pendingDatagramSize()>=GRAM_LENTH))
            continue;
        datagram1.resize(receiver1->pendingDatagramSize());
        //让datagram 的大小为等待处理的数据报的大小，这样才能接收到完整的数据
        receiver1->readDatagram(datagram1.data(),datagram1.size());
        //接收数据报，将其存放到datagram 中

        QDataStream in(&datagram1,QIODevice::ReadOnly);
        in.setVersion( QDataStream::Qt_4_8);

        in>>gramhead1.TotalLength>>gramhead1.Reserved>>gramhead1.SourceIP>>gramhead1.DestinationIP>>gramhead1.cSN>>gramhead1.cACKNo>>gramhead1.cFlag>>gramhead1.cSumofUnits;
        pkgnum1=gramhead1.cSumofUnits;

        for(int i=0;i<pkgnum1;i++)
        {
            in>>unithead1[i].cUnitSN>>unithead1[i].cUnitID>>unithead1[i].UnitLength>>unithead1[i].TimeStamp
             >>radarpkg1[i].pkgNum>>azitmp1[i];//>>(quint8[VIDNUM])p1->videodata
            in.readRawData((char*)(p1+i)->videodata,VIDNUM);
            (p1+i)->znum=1;
            (p1+i)->azicnt[0]=azitmp1[i];
        }
/*        in>>(quint16)gramhead1.TotalLength>>(quint16)gramhead1.Reserved>>(qint32)gramhead1.SourceIP>>(qint32)gramhead1.DestinationIP>>(quint8)gramhead1.cSN>>(quint8)gramhead1.cACKNo>>(quint8)gramhead1.cFlag>>(quint8)gramhead1.cSumofUnits;
        pkgnum1=gramhead1.cSumofUnits;

        for(int i=0;i<pkgnum1;i++)
        {
            in>>(quint8)unithead1[i].cUnitSN>>(quint8)unithead1[i].cUnitID>>(quint16)unithead1[i].UnitLength>>(quint32)unithead1[i].TimeStamp
             >>(quint16)radarpkg1[i].pkgNum>>(AZITYPE)azitmp1[i];//>>(quint8[VIDNUM])p1->videodata
            in.readRawData((char*)(p1+i)->videodata,VIDNUM);
            (p1+i)->znum=1;
            (p1+i)->azicnt[0]=azitmp1[i];
        }
        /**/
        ch1=unithead1[0].cUnitID;

/*
        char *data = datagram1.data();
        pkgnum1=*(data+15);
        ch1=*(data+17);
        azitmp1=*(data+26);

        for(int i=0;i<pkgnum1;i++)
        {
            memcpy((p1+i)->videodata,data+nHeadLen+6+i*(sizeof(GRAM_UNITHEAD)+sizeof(RAD_DATAPKG)),VIDNUM);
            (p1+i)->znum=1;
            (p1+i)->azicnt[0]=*(data+nHeadLen+2+i*(sizeof(GRAM_UNITHEAD)+sizeof(RAD_DATAPKG)));

        }
/*
        for(int i=0;i<1228;i++,data++)
       fprintf(trygetgram,"%c",*data);
 /**/
//      qDebug("ch 1: siezeofhead =%ld\t datagramsize=%ld cSumofUnits=%d",gramhead1.TotalLength,datagram1.size(),gramhead1.cSumofUnits);

    }
    emit receivedfinished1(pkgnum1,ch1);
}

void UDPserver::processPendingDatagram2(void)
{
//    qDebug("Entering processPendingDatagram()");
//        short nHeadLen = sizeof(CSMXP_GRAMHEAD) + sizeof(GRAM_UNITHEAD);
        while(receiver2->hasPendingDatagrams())  //拥有等待的数据报
        {
            if((receiver2->pendingDatagramSize()==0)||(receiver2->pendingDatagramSize()>=GRAM_LENTH))
                continue;
            datagram2.resize(receiver2->pendingDatagramSize());//让datagram 的大小为等待处理的数据报的大小，这样才能接收到完整的数据
            receiver2->readDatagram(datagram2.data(),datagram2.size());//接收数据报，将其存放到datagram 中

            QDataStream in(&datagram2,QIODevice::ReadOnly);
            in.setVersion( QDataStream::Qt_4_8);

            in>>gramhead2.TotalLength>>gramhead2.Reserved>>gramhead2.SourceIP>>gramhead2.DestinationIP>>gramhead2.cSN>>gramhead2.cACKNo>>gramhead2.cFlag>>gramhead2.cSumofUnits;
            pkgnum2=gramhead2.cSumofUnits;
            for(int i=0;i<pkgnum2;++i)
            {
                in>>unithead2[i].cUnitSN>>unithead2[i].cUnitID>>unithead2[i].UnitLength>>unithead2[i].TimeStamp
                 >>radarpkg2[i].pkgNum>>azitmp2[i];//>>(quint8[VIDNUM])p1->videodata
                in.readRawData((char*)(p2+i)->videodata,VIDNUM);
                (p2+i)->znum=1;
                (p2+i)->azicnt[0]=azitmp2[i];
            }
            /*
            in>>(quint16)gramhead2.TotalLength>>(quint16)gramhead2.Reserved>>(qint32)gramhead2.SourceIP>>(qint32)gramhead2.DestinationIP>>(quint8)gramhead2.cSN>>(quint8)gramhead2.cACKNo>>(quint8)gramhead2.cFlag>>(quint8)gramhead2.cSumofUnits;
            pkgnum2=gramhead2.cSumofUnits;
            for(int i=0;i<pkgnum2;++i)
            {
                in>>(quint8)unithead2[i].cUnitSN>>(quint8)unithead2[i].cUnitID>>(quint16)unithead2[i].UnitLength>>(quint32)unithead2[i].TimeStamp
                 >>(quint16)radarpkg2[i].pkgNum>>(AZITYPE)azitmp2[i];//>>(quint8[VIDNUM])p1->videodata
                in.readRawData((char*)(p2+i)->videodata,VIDNUM);
                (p2+i)->znum=1;
                (p2+i)->azicnt[0]=azitmp2[i];
            }
            ch2=unithead2[0].cUnitID;
            /**/

/*
            char *data = datagram2.data();
            pkgnum2=*(data+15);
            ch2=*(data+17);
            for(int i=0;i<pkgnum2;i++)
            {
                memcpy((p2+i)->videodata,data+nHeadLen+6+i*(sizeof(GRAM_UNITHEAD)+sizeof(RAD_DATAPKG)),VIDNUM);
                (p2+i)->znum=1;
                (p2+i)->azicnt[0]=*(data+nHeadLen+2+i*(sizeof(GRAM_UNITHEAD)+sizeof(RAD_DATAPKG)));

            }

/**/
//            qDebug("ch 2: siezeofhead =%ld",datagram2.size());
        }
        emit receivedfinished2(pkgnum2,ch2);
//        qDebug("emit :have received net data of channen %d ",ch-10);
}

UDPserver::~UDPserver()
{
    delete receiver1;
    delete receiver2;
    if(trygetgram!=NULL)
    fclose(trygetgram);
}
