
// FF14CollectTImer.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CFF14CollectTImerApp: 
// �йش����ʵ�֣������ FF14CollectTImer.cpp
//

class CFF14CollectTImerApp : public CWinApp
{
public:
	CFF14CollectTImerApp();

// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CFF14CollectTImerApp theApp;