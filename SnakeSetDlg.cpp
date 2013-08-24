// SnakeSetDlg.cpp : implementation file
//

#include "stdafx.h"
#include "Snake.h"
#include "SnakeSetDlg.h"

#include "SnakeCore.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CSnakeSetDlg dialog


CSnakeSetDlg::CSnakeSetDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CSnakeSetDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CSnakeSetDlg)
	m_nLevel = 0;
	m_nPixel = 0;
	m_nMusic = FALSE;
	m_nSound = FALSE;
	//}}AFX_DATA_INIT
}


void CSnakeSetDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CSnakeSetDlg)
	DDX_Control(pDX, IDC_MUSIC_ON, m_chkMusic);
	DDX_Control(pDX, IDC_SOUND_ON, m_chkSound);
	DDX_Control(pDX, IDC_GAME_PIXEL, m_sldPixel);
	DDX_Control(pDX, IDC_GAME_LEVEL_SLIDER, m_sldLevel);
	DDX_Slider(pDX, IDC_GAME_LEVEL_SLIDER, m_nLevel);
	DDX_Slider(pDX, IDC_GAME_PIXEL, m_nPixel);
	DDX_Check(pDX, IDC_MUSIC_ON, m_nMusic);
	DDX_Check(pDX, IDC_SOUND_ON, m_nSound);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CSnakeSetDlg, CDialog)
	//{{AFX_MSG_MAP(CSnakeSetDlg)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CSnakeSetDlg message handlers

BOOL CSnakeSetDlg::OnInitDialog()
{
        CDialog::OnInitDialog();
        m_sldLevel.SetRange(1, 9);
        m_sldLevel.SetTicFreq(1);
        m_sldLevel.SetPos(m_nLevel);
        m_chkMusic.SetCheck(m_nMusic);
        m_chkSound.SetCheck(m_nSound);

        return TRUE;
}

void CSnakeSetDlg::OnOK() 
{
	// TODO: Add extra validation here
        m_nLevel = m_sldLevel.GetPos();
        m_nPixel = m_sldPixel.GetPos();
        m_nMusic = m_chkMusic.GetCheck();
        m_nSound = m_chkSound.GetCheck();

	CDialog::OnOK();
}




