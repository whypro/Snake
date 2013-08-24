// MainFrm.cpp : implementation of the CMainFrame class
//

#include "stdafx.h"
#include "Snake.h"

#include "MainFrm.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMainFrame

IMPLEMENT_DYNCREATE(CMainFrame, CFrameWnd)

BEGIN_MESSAGE_MAP(CMainFrame, CFrameWnd)
	//{{AFX_MSG_MAP(CMainFrame)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	ON_WM_CREATE()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

static UINT indicators[] =
{
	// ID_SEPARATOR,           // status line indicator
	ID_INDICATOR_LEVEL,
	ID_INDICATOR_SCORE,
	ID_INDICATOR_STATUS,
};

/////////////////////////////////////////////////////////////////////////////
// CMainFrame construction/destruction

CMainFrame::CMainFrame()
{
	// TODO: add member initialization code here
	
}

CMainFrame::~CMainFrame()
{
}

int CMainFrame::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CFrameWnd::OnCreate(lpCreateStruct) == -1)
		return -1;

	if (!m_wndStatusBar.Create(this) ||
		!m_wndStatusBar.SetIndicators(indicators,
		  sizeof(indicators)/sizeof(UINT)))
	{
		TRACE0("Failed to create status bar\n");
		return -1;      // fail to create
	}

        m_wndStatusBar.SetPaneInfo(0, ID_INDICATOR_LEVEL, SBPS_NORMAL, 45);
        m_wndStatusBar.SetPaneInfo(1, ID_INDICATOR_SCORE, SBPS_NORMAL, 80);
        m_wndStatusBar.SetPaneInfo(2, ID_INDICATOR_STATUS, SBPS_NORMAL, 50);

	return 0;
}

BOOL CMainFrame::PreCreateWindow(CREATESTRUCT& cs)
{
	if( !CFrameWnd::PreCreateWindow(cs) )
		return FALSE;
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

        // pixel = 10  x = 1;  y = 1;  width = 50;  height = 40;
        // cx = width * pixel + 1 + 10 = 50 * 10 + 1 + 10= 511
        // cy = height * pixel + 1 = (40 + 1) * 10 + 1 = 411
        cs.cx = 511;            
        cs.cy = 476;
        cs.x = ::GetSystemMetrics(SM_CXSCREEN) / 2 - cs.cx / 2;
        cs.y = ::GetSystemMetrics(SM_CYSCREEN) / 2 - cs.cy / 2;

        cs.style &= ~FWS_ADDTOTITLE;    // 去掉文档标题
        cs.style &= ~WS_MAXIMIZEBOX;    // 禁止最大化 
        cs.style &= ~WS_THICKFRAME;     // 禁止调整窗口大小

	return TRUE;
}

/////////////////////////////////////////////////////////////////////////////
// CMainFrame diagnostics

#ifdef _DEBUG
void CMainFrame::AssertValid() const
{
	CFrameWnd::AssertValid();
}

void CMainFrame::Dump(CDumpContext& dc) const
{
	CFrameWnd::Dump(dc);
}

#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMainFrame message handlers

