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
//#include "stdafx.h"
#include "layers.h"

bool CLayerBase::isValid(int x,int y)
{
 if( (x>=0) && (x<MFB_WIDTH) && (y>=0) && (y<MFB_HEIGHT) )
	 //if(maskTable[y][x]==0)return true;
	 return true;

 return false;

}

void CLayerBase::clear(void)
{
  int x,y;
  for(y=0;y<MFB_HEIGHT;y++)
    for(x=0;x<MFB_WIDTH;x++)
      setPixel(x,y,MFB_CLEAR);
}

void CLayerBase::setPixel(int x,int y,DISPMEMTYPE d )
{
  if(isValid(x,y))
  {
    switch(ly)
    {
    case 1:
        if(isd)//»­Í¼
        {
          if(layer[y][x].curlayer<2)
          {
            layer[y][x].nfirst=d;
            layer[y][x].curlayer=1;

			if(layer[y][x].bmap)
				fbp[y][x]=d ^ layer[y][x].nmap;
			else
				fbp[y][x]=d;

          }
          else if(layer[y][x].curlayer>TOP)
          {

          }
          else
          {
            layer[y][x].nfirst=d;
          }
        }
        else//»Ö¸´
        {
          if(layer[y][x].curlayer<2)
          {   
            layer[y][x].nfirst=MFB_CLEAR;

			if(layer[y][x].bmap)
				fbp[y][x]=layer[y][x].nmap;
			else
				fbp[y][x]=MFB_CLEAR;
          }
          else if(layer[y][x].curlayer>TOP)
          {
          }
          else
          {
            layer[y][x].nfirst=MFB_CLEAR;
          }
        }
        
        break;
    case 2:
        if(isd)//»­Í¼
        {
          if(layer[y][x].curlayer<3)
          {
            layer[y][x].nsecond=d;
            layer[y][x].bsecond=true;
            layer[y][x].curlayer=2;
            fbp[y][x]=d;
          }
          else if(layer[y][x].curlayer>TOP)
          {

          }
          else
          {
            layer[y][x].nsecond=d;
            layer[y][x].bsecond=true;
          }
        }
        else//»Ö¸´
        {
          layer[y][x].bsecond=false;
        
          if(layer[y][x].curlayer<3)
          {
            fbp[y][x]=layer[y][x].nfirst;
            layer[y][x].curlayer=1;
          }
        }
        break;
    case 3:
        if(isd)//»­Í¼
        {
          if(layer[y][x].curlayer<4)
          {
            layer[y][x].nthird=d;
            layer[y][x].bthird=true;
            layer[y][x].curlayer=3;
            fbp[y][x]=d;
          }
          else if(layer[y][x].curlayer>TOP)
          {

          }
          else
          {
            layer[y][x].nthird=d;
            layer[y][x].bthird=true;
          }
        }
        else//»Ö¸´
        {
          layer[y][x].bthird=false;

          if(layer[y][x].curlayer<4)
          {
            if(layer[y][x].bsecond)
            {
              fbp[y][x]=layer[y][x].nsecond;
              layer[y][x].curlayer=2;
            }
            else
            {
              fbp[y][x]=layer[y][x].nfirst;
              layer[y][x].curlayer=1;
            }
          }
        }
        break;
    case 4:
        if(isd)//»­Í¼
        {
          if(layer[y][x].curlayer<5)
          {
            layer[y][x].curlayer=4;
            fbp[y][x]=d;
          }
          else
          {
        
          }
        }
        else//»Ö¸´
        {
			if(layer[y][x].curlayer > TOP)
			{
				fbp[y][x]=MFB_CLEAR;
			}
          if(layer[y][x].curlayer<5)
          {
            if(layer[y][x].bthird)
            {
              fbp[y][x]=layer[y][x].nthird;
              layer[y][x].curlayer=3;
            }
            else if(layer[y][x].bsecond)
            {
              fbp[y][x]=layer[y][x].nsecond;
              layer[y][x].curlayer=2;
            }
            else
            {
              fbp[y][x]=layer[y][x].nfirst;
              layer[y][x].curlayer=1;
            }
          }
        }
        break;
        
    case 0:
        break;

	case 0x10:// map layer
		if(isd)//»­Í¼
		{
			if(layer[y][x].curlayer<2)
			{
				layer[y][x].nmap=d;
				layer[y][x].curlayer=1;
				layer[y][x].bmap=true;
				fbp[y][x]=d ^ layer[y][x].nfirst;//ÔÝÊ±ÓÃÒì»ò£¬ÒÔºó¿ÉÓÃ²éÕÒ±í
			}
			else if(layer[y][x].curlayer>TOP)
			{

			}
			else
			{
				layer[y][x].nmap=d;
				layer[y][x].bmap=true;
			}
		}
		else//»Ö¸´
		{
			if(layer[y][x].curlayer<2)
			{   
				layer[y][x].bmap=false;
				fbp[y][x]=layer[y][x].nfirst;
			}
			else if(layer[y][x].curlayer>TOP)
			{
			}
			else
			{
				layer[y][x].bmap=false;
			}
		}

		break;
        
    default:
        if(isd)//»­Í¼
        {
            if(layer[y][x].curlayer > TOP)
            {
                fbp[y][x]=d;
            }
        }
        else//»Ö¸´
        {
            if(layer[y][x].curlayer > TOP)
            {
                fbp[y][x]=MFB_CLEAR;
            }
        }

    }
  }

}
