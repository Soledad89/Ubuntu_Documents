

//******************************
//
//  author : lishidan
//
//  create time: 2007-10-10
//
//  last modify time:2008-2-19
//
//  Version: 0.2
//
//******************************

#ifndef __ARPAINFO_H__
#define __ARPAINFO_H__

#pragma pack(1)

typedef struct s_arpa_trace
{
unsigned char head;
unsigned char length;
unsigned char pkgNumber;
unsigned char fromAddr;
unsigned char pkgFlag;
unsigned long ctrl;
unsigned short antCycle;
unsigned long dis;
unsigned short azi;
unsigned short moveAzi;
unsigned short speed;
unsigned short batchNum;
unsigned short crc;

}s_arpa_trace;


#endif


