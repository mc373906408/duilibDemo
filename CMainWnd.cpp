#include "CMainWnd.h"

CDuiString CMainWnd::GetSkinFile()
{
	return _T("main.xml");
}

LPCTSTR CMainWnd::GetWindowClassName(void) const
{
	return _T("Main");
}

void CMainWnd::Notify(TNotifyUI& msg)
{
	WindowImplBase::Notify(msg);
	if (msg.sType == _T("click")) {
		CDuiString sName = msg.pSender->GetName();
		if (sName == _T("closebtn")) {
			Close(IDOK);
			PostQuitMessage(0);
			return;
		}
	}
}

CMainWnd::CMainWnd(void)
{
}

CMainWnd::~CMainWnd(void)
{
}
