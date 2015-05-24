//******************************
//
//  author : lishidan
//
//  create time: 2007-9-5
//
//  last modify time:2007-10-31
//
//  Version: 2.0
//
//******************************

#ifndef _CLayers_h__
#define _CLayers_h__


#include "ppidef.h"
#include "fbinclude.h"

class CLayerBase
{
public:
  CLayerBase(DISPMEMTYPE **  mfbp , s_layer_unit ** mlayer ,  int l, bool d)//int ** mmaskTable,
			{fbp=mfbp;layer=mlayer;ly=l;isd=d;}//maskTable=mmaskTable;
	virtual ~CLayerBase(){}

public:
	DISPMEMTYPE ** fbp;
	s_layer_unit ** layer;
	//int **maskTable;
    int ly;
    bool isd;
    
    inline bool isValid(int x,int y);
    void setPixel(int x,int y,DISPMEMTYPE d );
    void clear(void);
	void setFbp(DISPMEMTYPE ** fbpnew){fbp=fbpnew;}

};

#endif
