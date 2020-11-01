// main.cpp : 定义应用程序的入口点。
//

#include "framework.h"
#include "GameBox.h"
#include "CMainWnd.h"

int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
                     _In_opt_ HINSTANCE hPrevInstance,
                     _In_ LPWSTR    lpCmdLine,
                     _In_ int       nCmdShow)
{
    UNREFERENCED_PARAMETER(hPrevInstance);
    UNREFERENCED_PARAMETER(lpCmdLine);

    // 初始化UI管理器
    CPaintManagerUI::SetInstance(hInstance);
    // 配置资源路径
    // 资源类型
    CPaintManagerUI::SetResourceType(UILIB_FILE);
    // 资源路径：执行程序同目录下的Skin文件夹
    CDuiString strResourcePath;
    strResourcePath.Format(_T("%sSkin"), CPaintManagerUI::GetInstancePath());
    CPaintManagerUI::SetResourcePath(strResourcePath);

    // 创建窗口
    CMainWnd* pMainWnd = new CMainWnd();
    pMainWnd->Create(NULL, _T("test"), WS_VISIBLE, 0);
    pMainWnd->CenterWindow();

    // 启动信息循环
    CPaintManagerUI::MessageLoop();
    return 0;
}

