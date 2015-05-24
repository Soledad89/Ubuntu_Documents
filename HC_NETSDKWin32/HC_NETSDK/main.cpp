#include <stdio.h>
#include <iostream>
#include "Windows.h"
#include "HCNetSDK.h"
#include <time.h>
using namespace std;

void CALLBACK g_ExceptionCallBack(DWORD dwType, LONG lUserID, LONG lHandle, void *pUser)
{
    char tempbuf[256] = {0};
    switch(dwType) 
    {
		case EXCEPTION_RECONNECT:    //Ԥ��ʱ����
			printf("----------reconnect--------%d\n", time(NULL));
		break;
		default:
		break;
    }
}

void main() {

	  //---------------------------------------
	  // ��ʼ��
	  NET_DVR_Init();
	  //��������ʱ��������ʱ��
	  NET_DVR_SetConnectTime(2000, 1);
	  NET_DVR_SetReconnect(10000, true);

	  //---------------------------------------
	  // ע���豸
	  LONG lUserID;
	  NET_DVR_DEVICEINFO_V30 struDeviceInfo;
	  lUserID = NET_DVR_Login_V30("192.0.0.64", 8000, "admin", "12345", &struDeviceInfo);
	  if (lUserID < 0)
	  {
		   printf("Login error, %d\n", NET_DVR_GetLastError());
		   NET_DVR_Cleanup();
		   return;
		}

	  //---------------------------------------
	  //�����쳣��Ϣ�ص�����
	  NET_DVR_SetExceptionCallBack_V30(0, NULL,g_ExceptionCallBack, NULL);

	  //---------------------------------------
	  //����Ԥ�������ûص�������
	  LONG lRealPlayHandle;
	  HWND hWnd = GetConsoleWindow();     //��ȡ���ھ��
	  NET_DVR_CLIENTINFO ClientInfo = {0};
	  ClientInfo.hPlayWnd = hWnd;         //��ҪSDK����ʱ�����Ϊ��Чֵ����ȡ��������ʱ����Ϊ��
	  ClientInfo.lChannel     = 1;       //Ԥ��ͨ����
	  ClientInfo.lLinkMode    = 0;       //���λ(31)Ϊ0��ʾ��������Ϊ1��ʾ������0��30λ��ʾ���ӷ�ʽ��0��TCP��ʽ��1��UDP��ʽ��2���ಥ��ʽ��3��RTP��ʽ;
	  ClientInfo.sMultiCastIP = NULL;   //�ಥ��ַ����Ҫ�ಥԤ��ʱ����
  
	  BOOL bPreviewBlock = false;       //�������������Ƿ�������0����1����
	  lRealPlayHandle = NET_DVR_RealPlay_V30(lUserID, &ClientInfo, NULL, NULL, 0);
	  if (lRealPlayHandle < 0)
	  {
		  printf("NET_DVR_RealPlay_V30 error\n");
		  NET_DVR_Logout(lUserID);
		  NET_DVR_Cleanup();
		  return;
	  }
  
	  //---------------------------------------
	  //�ر�Ԥ��
	  NET_DVR_StopRealPlay(lRealPlayHandle);
	  //ע���û�
	  NET_DVR_Logout(lUserID);
	  //�ͷ�SDK��Դ
	  NET_DVR_Cleanup();

	  return;
}

