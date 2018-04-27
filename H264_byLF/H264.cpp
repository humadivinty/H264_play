// H264.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "H264.h"

// ����Ƶ
HANDLE WINAPI H264_Play(HWND hWnd, LPCSTR szURL)
{
	CGFFX::Initialize();
	CGFFX* gffx = new CGFFX();
	gffx->Play(hWnd, szURL);
	return gffx;
}

// �ر���Ƶ
VOID WINAPI H264_Destroy(HANDLE hPlay)
{
	CGFFX* gffx = (CGFFX *)hPlay;
	if (NULL != gffx)
	{
		delete gffx;
		gffx = NULL;
	}
}

// �����˳���Ƶ�����߳�
VOID WINAPI H264_SetExitStatus(HANDLE hPlay)
{
	CGFFX* gffx = (CGFFX *)hPlay;
	if (NULL != gffx)
	{
        gffx->SetExitStatus();
	}
}