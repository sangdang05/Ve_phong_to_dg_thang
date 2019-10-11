
// Bai 22_phong to dg thang.h : main header file for the Bai 22_phong to dg thang application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CBai22phongtodgthangApp:
// See Bai 22_phong to dg thang.cpp for the implementation of this class
//

class CBai22phongtodgthangApp : public CWinApp
{
public:
	CBai22phongtodgthangApp() noexcept;


// Overrides
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// Implementation
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CBai22phongtodgthangApp theApp;
