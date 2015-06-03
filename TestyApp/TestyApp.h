
// TestyApp.h : main header file for the TestyApp application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CTestyAppApp:
// See TestyApp.cpp for the implementation of this class
//

class CTestyAppApp : public CWinApp
{
public:
	CTestyAppApp();


// Overrides
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// Implementation
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CTestyAppApp theApp;
