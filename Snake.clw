; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CSnakeSetDlg
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "Snake.h"
LastPage=0

ClassCount=6
Class1=CSnakeApp
Class2=CSnakeDoc
Class3=CSnakeView
Class4=CMainFrame

ResourceCount=3
Resource1=IDD_GAME_SET
Class5=CAboutDlg
Resource2=IDD_ABOUTBOX
Class6=CSnakeSetDlg
Resource3=IDR_MAINFRAME

[CLS:CSnakeApp]
Type=0
HeaderFile=Snake.h
ImplementationFile=Snake.cpp
Filter=N

[CLS:CSnakeDoc]
Type=0
HeaderFile=SnakeDoc.h
ImplementationFile=SnakeDoc.cpp
Filter=N
LastObject=CSnakeDoc

[CLS:CSnakeView]
Type=0
HeaderFile=SnakeView.h
ImplementationFile=SnakeView.cpp
Filter=C
BaseClass=CView
VirtualFilter=VWC
LastObject=CSnakeView


[CLS:CMainFrame]
Type=0
HeaderFile=MainFrm.h
ImplementationFile=MainFrm.cpp
Filter=T
LastObject=CMainFrame




[CLS:CAboutDlg]
Type=0
HeaderFile=Snake.cpp
ImplementationFile=Snake.cpp
Filter=D
LastObject=IDOK
BaseClass=CDialog
VirtualFilter=dWC

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=5
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373888
Control5=IDC_CANCEL,button,1342242817

[MNU:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=IDC_GAME_START
Command2=IDC_GAME_SET
Command3=ID_APP_EXIT
Command4=ID_APP_ABOUT
CommandCount=4

[ACL:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_APP_ABOUT
Command2=IDC_GAME_SET
Command3=IDC_GAME_START
Command4=ID_APP_EXIT
CommandCount=4

[DLG:IDD_GAME_SET]
Type=1
Class=CSnakeSetDlg
ControlCount=8
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_GAME_LEVEL_SLIDER,msctls_trackbar32,1342242825
Control4=IDC_STATIC,static,1342308352
Control5=IDC_MUSIC_ON,button,1342242819
Control6=IDC_SOUND_ON,button,1342242819
Control7=IDC_GAME_PIXEL,msctls_trackbar32,1476460553
Control8=IDC_STATIC,static,1342308352

[CLS:CSnakeSetDlg]
Type=0
HeaderFile=SnakeSetDlg.h
ImplementationFile=SnakeSetDlg.cpp
BaseClass=CDialog
Filter=D
LastObject=CSnakeSetDlg
VirtualFilter=dWC

