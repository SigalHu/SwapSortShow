#include "stdafx.h"
#include "xcdlg.h"

int WINAPI wWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPTSTR lpCmdLine, int nCmdShow)
{
	if (!AfxWinInit(hInstance, NULL, lpCmdLine, 0))  
	{    
		MessageBox(NULL,_T("MFC init error!"),_T("Error!"),MB_OK);    
		return 0;  
	} 

	XInitXCGUI();
	CMyWindowDemo  MyWindow;
	XRunXCGUI();
	XExitXCGUI();
	return 0;
}