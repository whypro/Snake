#if !defined(AFX_SNAKESETDLG_H__87077494_A390_4E53_8FAB_D77267699ED8__INCLUDED_)
#define AFX_SNAKESETDLG_H__87077494_A390_4E53_8FAB_D77267699ED8__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// SnakeSetDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CSnakeSetDlg dialog

class CSnakeSetDlg : public CDialog
{
// Construction
public:
	BOOL OnInitDialog();
	CSnakeSetDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CSnakeSetDlg)
	enum { IDD = IDD_GAME_SET };
	CButton	m_chkMusic;
	CButton	m_chkSound;
	CSliderCtrl	m_sldPixel;
	CSliderCtrl	m_sldLevel;
	int		m_nLevel;
	int		m_nPixel;
	BOOL	m_nMusic;
	BOOL	m_nSound;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSnakeSetDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CSnakeSetDlg)
	virtual void OnOK();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SNAKESETDLG_H__87077494_A390_4E53_8FAB_D77267699ED8__INCLUDED_)
