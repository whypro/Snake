// Snake.h : main header file for the SNAKE application
//

#if !defined(AFX_SNAKE_H__4B0BB3EC_AAAF_4757_BBE0_FC64846755EA__INCLUDED_)
#define AFX_SNAKE_H__4B0BB3EC_AAAF_4757_BBE0_FC64846755EA__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CSnakeApp:
// See Snake.cpp for the implementation of this class
//

class CSnakeApp : public CWinApp
{
public:
	CSnakeApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSnakeApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CSnakeApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SNAKE_H__4B0BB3EC_AAAF_4757_BBE0_FC64846755EA__INCLUDED_)
