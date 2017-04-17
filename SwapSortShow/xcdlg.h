
#pragma once
#include "xcgui.h"

#define DEBUG_Hu

class CMyWindowDemo
{
public:
	HWINDOW m_hWindow;

	HELE m_SkinView;
	HELE m_SkinTrans;
	HELE m_SortChange;
	HELE m_GetRAND;
	HELE m_SortStart;
	HELE m_CleanRAND;

	CString ProgPath;
	int bkTrans;
	int sortMode;
	int dataExtra[10];
	int dataExtraAddr[10];
	int sortCount;
	int dataAddrRange[2];
	int dataAddrStart;
	bool sortOrder;

	// hu 配置文件参数///////
	CString mainbkPath;
	CString mainbkTrans;
	/////////////////////////

	CMyWindowDemo();
	void Init();
	int BUBSort2(int *P,int n);
	int OnTimer(UINT nIDEvent,BOOL *pbHandled);
	int OnSelectSkin(BOOL *pbHandled);
	int OnChangeSkinMore(int iGroup,BOOL bExpand,BOOL *pbHandled);
	int OnChangeSkin(int iGroup,int iItem,BOOL *pbHandled);
	int OnDoneSkin(UINT nFlags,POINT *pPt,BOOL *pbHandled);
	int OnBKTransChange(int pos,BOOL *pbHandled);
	int OnGetRAND(BOOL *pbHandled);
	int OnCleanRAND(BOOL *pbHandled);
	int OnSortStart(BOOL *pbHandled);
};
