#pragma once
#include "framework.h"
/*������*/
class CMainWnd :public WindowImplBase
{
public:
	virtual CDuiString GetSkinFile();
	virtual LPCTSTR GetWindowClassName(void) const;
	virtual void Notify(TNotifyUI& msg);
public:
	CMainWnd(void);
	virtual ~CMainWnd(void);
};

