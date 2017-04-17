#include "stdafx.h"
#include "Shlwapi.h"
#include "xcdlg.h"
#include "xcSourceID.h"
//#include <time.h>

CMyWindowDemo::CMyWindowDemo()
{
	Init();
}

void CMyWindowDemo::Init()
{
	CStdioFile mainbkFile;
	CString mainbkPathtmp;

	::GetModuleFileName( NULL,ProgPath.GetBuffer(MAX_PATH), MAX_PATH);
	ProgPath.ReleaseBuffer();
	ProgPath = ProgPath.Left(ProgPath.ReverseFind(_T('\\')));
	ProgPath += L"\\";

	XC_LoadResource(ProgPath+L"resource.xml");  //加载资源文件
	HXCGUI hXCGUI=XC_LoadLayout(ProgPath+L"layout.xml"); //加载布局文件
	if(XC_IsHWINDOW(hXCGUI))
	{
		m_hWindow=(HWINDOW)hXCGUI;
		if (mainbkFile.Open(ProgPath+L"usercfg.txt",CFile::modeRead))
		{
			mainbkFile.ReadString(mainbkPath);
			mainbkFile.ReadString(mainbkTrans);
			mainbkFile.Close();
			mainbkPathtmp = mainbkPath;
			if (mainbkPathtmp.Find(L"RGB:"))
			{
				mainbkPathtmp.Delete(0,lstrlen(L"mainbkPath:"));
				if (NULL == XImage_LoadFile(mainbkPathtmp,TRUE))
				{
					mainbkPathtmp = ProgPath+L"image\\mainbk0.png";
					mainbkPath = L"mainbkPath:" + mainbkPathtmp;
				}
				XEle_AddBkImage((HELE)XC_GetObjectByID(IDE_ELE_MAINBK),XImage_LoadFile(mainbkPathtmp,TRUE));
			}
			else
			{
				COLORREF bkcolor;
				_stscanf_s(mainbkPath.GetBuffer(0),_T("RGB:%d"),&bkcolor);
				XEle_AddBkFill((HELE)XC_GetObjectByID(IDE_ELE_MAINBK),bkcolor,255);
			}

			if (mainbkTrans.Find(L"mainbkTrans:"))  
			{
				bkTrans = 180;
				mainbkTrans = L"mainbkTrans:180";
			}
			else   _stscanf_s(mainbkTrans.GetBuffer(0),_T("mainbkTrans:%d"),&bkTrans);
			XEle_SetAlpha((HELE)XC_GetObjectByID(IDE_ELE_MAINBK),bkTrans);
		}
		else
		{
			mainbkPathtmp = ProgPath+L"image\\mainbk0.png";
			mainbkPath = L"mainbkPath:" + mainbkPathtmp;
			bkTrans = 180;
			mainbkTrans = L"mainbkTrans:180";
			XEle_AddBkImage((HELE)XC_GetObjectByID(IDE_ELE_MAINBK),XImage_LoadFile(mainbkPathtmp,TRUE));
			XEle_SetAlpha((HELE)XC_GetObjectByID(IDE_ELE_MAINBK),bkTrans);
		}

		XBkInfoM_AddFill(XWnd_GetBkInfoManager(m_hWindow),window_state_top_leave,RGB(255,255,0),100);
		XBkInfoM_AddFill(XWnd_GetBkInfoManager(m_hWindow),window_state_bottom_leave,RGB(255,255,0),100);
		XBkInfoM_AddFill(XWnd_GetBkInfoManager(m_hWindow),window_state_left_leave,RGB(255,255,0),100);
		XBkInfoM_AddFill(XWnd_GetBkInfoManager(m_hWindow),window_state_right_leave,RGB(255,255,0),100);
		// hu XBkInfoM_AddBorder(XWnd_GetBkInfoManager(m_hWindow),window_state_body_leave,RGB(255,255,0),255,2);

		XWnd_SetCursor(m_hWindow,LoadCursorFromFile(ProgPath+L"image\\arrow.cur"));

		HFONTX DefaultFont = XFont_Create2(L"DefaultFont",11,TRUE);
		XC_SetDefaultFont(DefaultFont);

		// hu XBtn_SetIcon((HELE)XC_GetObjectByID(IDE_BTN_CLOSEWIND),XImage_LoadFile(ProgPath+L"image\\close.png",TRUE));
		XBtn_AddBkFill((HELE)XC_GetObjectByID(IDE_BTN_CLOSEWIND),button_state_stay ,RGB(255,255,0),150);
		XBtn_AddBkFill((HELE)XC_GetObjectByID(IDE_BTN_CLOSEWIND),button_state_down  ,RGB(255,255,0),255);
		XEle_SetCursor((HELE)XC_GetObjectByID(IDE_BTN_CLOSEWIND),LoadCursorFromFile(ProgPath+L"image\\arrow.cur"));

		// hu XBtn_SetIcon((HELE)XC_GetObjectByID(IDE_BTN_MINWIND),XImage_LoadFile(ProgPath+L"image\\minimize_window.png",TRUE));
		XBtn_AddBkFill((HELE)XC_GetObjectByID(IDE_BTN_MINWIND),button_state_stay ,RGB(255,255,0),150);
		XBtn_AddBkFill((HELE)XC_GetObjectByID(IDE_BTN_MINWIND),button_state_down ,RGB(255,255,0),255);
		XEle_SetCursor((HELE)XC_GetObjectByID(IDE_BTN_MINWIND),LoadCursorFromFile(ProgPath+L"image\\arrow.cur"));

		// hu XBtn_SetIcon((HELE)XC_GetObjectByID(IDE_BTN_SELECTSKIN),XImage_LoadFile(ProgPath+L"image\\sellectSkin.png",TRUE));
		XBtn_AddBkFill((HELE)XC_GetObjectByID(IDE_BTN_SELECTSKIN),button_state_stay ,RGB(255,255,0),150);
		XBtn_AddBkFill((HELE)XC_GetObjectByID(IDE_BTN_SELECTSKIN),button_state_down ,RGB(255,255,0),255);
		XBtn_AddBkFill((HELE)XC_GetObjectByID(IDE_BTN_SELECTSKIN),button_state_check ,RGB(255,255,0),255);
		XEle_SetCursor((HELE)XC_GetObjectByID(IDE_BTN_SELECTSKIN),LoadCursorFromFile(ProgPath+L"image\\arrow.cur"));

		m_SortChange = (HELE)XC_GetObjectByID(IDE_CBX_SORTCHANGE); //获取指定ID对象
		XComboBox_AddBkFill(m_SortChange,comboBox_state_stay ,RGB(238,173,14),150);
		XComboBox_AddBkFill(m_SortChange,comboBox_state_down,RGB(238,173,14),255);
		XComboBox_AddBkFill(m_SortChange,comboBox_state_leave ,RGB(238,173,14),150);
		XComboBox_SetItemTemplateXML(m_SortChange,ProgPath+L"sortChange.xml");
		HXCGUI hAdapter=XAdapterTable_Create();
		XComboBox_BindApapter(m_SortChange,hAdapter);
		XAdapterTable_AddColumn(hAdapter,(XC_NAME));
		XAdapterTable_AddItemText(hAdapter,L"单向冒泡排序");
		XAdapterTable_AddItemText(hAdapter,L"双向冒泡排序");
		XAdapterTable_AddItemText(hAdapter,L"线性表分割");
		XAdapterTable_AddItemText(hAdapter,L"快速排序");
		XAdapterTable_AddItemText(hAdapter,L"改进快速排序");
		XComboBox_SetSelItem(m_SortChange,0);
 		XComboBox_EnableEdit(m_SortChange,FALSE);
		XEle_SetCursor(m_SortChange,LoadCursorFromFile(ProgPath+L"image\\arrow.cur"));

		m_GetRAND = (HELE)XC_GetObjectByID(IDE_BTN_GETRAND); //获取指定ID对象
		XBtn_AddBkFill(m_GetRAND,button_state_stay,RGB(255,255,0),150);
		XBtn_AddBkFill(m_GetRAND,button_state_down,RGB(255,255,0),255);
		XBtn_AddBkBorder(m_GetRAND,button_state_leave,RGB(255,255,0),150,5);
		XEle_SetCursor(m_GetRAND,LoadCursorFromFile(ProgPath+L"image\\arrow.cur"));

		m_SortStart = (HELE)XC_GetObjectByID(IDE_BTN_SORTSTART); //获取指定ID对象
		XBtn_AddBkFill(m_SortStart,button_state_stay,RGB(78,238,148),150);
		XBtn_AddBkFill(m_SortStart,button_state_down,RGB(78,238,148),255);
		XBtn_AddBkBorder(m_SortStart,button_state_leave,RGB(78,238,148),150,5);
		XEle_SetCursor(m_SortStart,LoadCursorFromFile(ProgPath+L"image\\arrow.cur"));

		m_CleanRAND = (HELE)XC_GetObjectByID(IDE_BTN_CLEANRAND); //获取指定ID对象
		XBtn_AddBkFill(m_CleanRAND,button_state_stay,RGB(0,255,0),150);
		XBtn_AddBkFill(m_CleanRAND,button_state_down,RGB(0,255,0),255);
		XBtn_AddBkBorder(m_CleanRAND,button_state_leave,RGB(0,255,0),150,5);
		XEle_SetCursor(m_CleanRAND,LoadCursorFromFile(ProgPath+L"image\\arrow.cur"));

		for (int ii=IDE_RET_SORTDATA1;ii<=IDE_RET_SORTDATA8;ii++)
		{
			//XEle_AddBkFill((HELE)XC_GetObjectByID(ii),RGB(255,140,0),150);
			XEle_AddBkBorder((HELE)XC_GetObjectByID(ii),RGB(255,140,0),120,5);
			XRichEdit_SetSelectBkColor((HELE)XC_GetObjectByID(ii),RGB(255,255,255),150);
			XEle_SetCursor((HELE)XC_GetObjectByID(ii),LoadCursorFromFile(ProgPath+L"image\\arrow.cur"));
			XRichEdit_SetLimitNum((HELE)XC_GetObjectByID(ii),2);
			XRichEdit_InsertString((HELE)XC_GetObjectByID(ii),L"1");
			XRichEdit_DeleteAll((HELE)XC_GetObjectByID(ii));
		}

		XWnd_RegEventCPP(m_hWindow,WM_TIMER,&CMyWindowDemo::OnTimer);
		XWnd_RegEventCPP(m_hWindow,WM_LBUTTONDOWN,&CMyWindowDemo::OnDoneSkin);
		XEle_RegEventCPP((HELE)XC_GetObjectByID(IDE_BTN_SELECTSKIN),XE_BNCLICK,&CMyWindowDemo::OnSelectSkin);
		XEle_RegEventCPP(m_GetRAND,XE_BNCLICK,&CMyWindowDemo::OnGetRAND);
		XEle_RegEventCPP(m_SortStart,XE_BNCLICK,&CMyWindowDemo::OnSortStart);
		XEle_RegEventCPP(m_CleanRAND,XE_BNCLICK,&CMyWindowDemo::OnCleanRAND);

		// hu XC_ShowLayoutFrame(TRUE); //显示布局边界
		XWnd_AdjustLayout(m_hWindow);
		XWnd_ShowWindow(m_hWindow,SW_SHOW);
	}else
	{
		MessageBox(XWnd_GetHWND(m_hWindow),L"启动界面失败！",L"提示",MB_OK|MB_ICONEXCLAMATION);
	}
}

int CMyWindowDemo::OnSelectSkin(BOOL *pbHandled)
{
	RECT pos;
	CString bkpath;

	XEle_GetRect((HELE)XC_GetObjectByID(IDE_BTN_SELECTSKIN),&pos);
	m_SkinView = XListView_Create(pos.right-496,pos.bottom,516,290,m_hWindow);
	XListView_SetItemTemplateXML(m_SkinView,ProgPath+L"selectSkin.xml");

	XEle_EnableBkTransparent(m_SkinView,TRUE);
	XEle_EnableDrawFocus(m_SkinView,FALSE);
	XListView_SetItemSize(m_SkinView,160,120);
	XListView_EnableMultiSel(m_SkinView,FALSE);
	XListView_AddItemBkBorder(m_SkinView,list_item_state_stay,RGB(139,69,19),150,2);
	XListView_AddItemBkBorder(m_SkinView,list_item_state_select,RGB(139,69,19),255,2);
	XEle_SetCursor(m_SkinView,LoadCursorFromFile(ProgPath+L"image\\arrow.cur"));
	XEle_SetCursor(XSView_GetScrollBarV(m_SkinView),LoadCursorFromFile(ProgPath+L"image\\arrow.cur"));
	XBkInfoM_AddBorder(XEle_GetBkInfoManager(m_SkinView),listView_state_flag_group_stay,RGB(139,69,19),150,2);
	XBkInfoM_AddFill(XEle_GetBkInfoManager(m_SkinView),listView_state_flag_group_leave,RGB(205,190,112),150);
	XBkInfoM_AddFill(XEle_GetBkInfoManager(m_SkinView),listView_state_flag_group_stay,RGB(205,190,112),150);

	m_SkinTrans = XSliderBar_Create(pos.right-480,pos.bottom+290,470,20,m_hWindow);
	XSliderBar_SetRange(m_SkinTrans,255);
	XSliderBar_SetPos(m_SkinTrans,bkTrans);
	XEle_EnableFocus(m_SkinTrans,FALSE);
	XEle_EnableBkTransparent(m_SkinTrans,TRUE);
	XEle_SetCursor(m_SkinTrans,LoadCursorFromFile(ProgPath+L"image\\arrow.cur"));

	HXCGUI hAdapter = XAdapterListView_Create();
	XAdapterListView_Group_AddColumn(hAdapter,XC_NAME3);
	XAdapterListView_Item_AddColumn(hAdapter,XC_NAME);

	XListView_BindAdapter(m_SkinView,hAdapter);

	int group = XAdapterListView_Group_AddItemText(hAdapter,NULL);

	int i=0;
	bkpath.Format(L"image\\mainbk%d.png",i);
	while(PathFileExists(ProgPath+bkpath))
	{
		HIMAGE hImage = XImage_LoadFile(ProgPath+bkpath,TRUE);
		XAdapterListView_Item_AddItemImage(hAdapter,group,hImage);
		bkpath.Format(L"image\\mainbk%d.png",++i);
	}

	XEle_RedrawEle(m_SkinView,TRUE);
	XEle_RedrawEle(m_SkinTrans,TRUE);

	XEle_RegEventCPP(m_SkinView,XE_LISTVIEW_SELECT,&CMyWindowDemo::OnChangeSkin);
	XEle_RegEventCPP(m_SkinView,XE_LISTVIEW_EXPAND,&CMyWindowDemo::OnChangeSkinMore);
	XEle_RegEventCPP(m_SkinTrans,XE_SLIDERBAR_CHANGE,&CMyWindowDemo::OnBKTransChange);

	XBtn_SetCheck((HELE)XC_GetObjectByID(IDE_BTN_SELECTSKIN),TRUE);

	*pbHandled=TRUE; //对该事件进行拦截,如果不需要拦截可以去掉该行代码
	return 0;
}

int CMyWindowDemo::OnChangeSkin(int iGroup,int iItem,BOOL *pbHandled)
{
	CStdioFile bksave;
	CString bkpath;

	if (iItem>=0)
	{
		bkpath.Format(L"image\\mainbk%d.png",iItem);
		XEle_AddBkImage((HELE)XC_GetObjectByID(IDE_ELE_MAINBK),XImage_LoadFile(ProgPath+bkpath,TRUE));
		// hu XBkInfoM_AddBorder(XWnd_GetBkInfoManager(m_hWindow),window_state_body_leave,RGB(255,255,0),150,1);
		XWnd_RedrawWnd(m_hWindow,TRUE);

		mainbkPath = "mainbkPath:"+ProgPath+bkpath;
	}

	*pbHandled=TRUE; //对该事件进行拦截,如果不需要拦截可以去掉该行代码
	return 0;
}

int CMyWindowDemo::OnChangeSkinMore(int iGroup,BOOL bExpand,BOOL *pbHandled)
{
	CStdioFile bksave;
	COLORREF bkcolor;
	CColorDialog m_setClrDlg;

	XListView_ExpandGroup(m_SkinView,iGroup,TRUE);

	m_setClrDlg.m_cc.Flags |= CC_FULLOPEN;   // CC_RGBINIT可以让上次选择的颜色作为初始颜色显示出来
	if(IDOK == m_setClrDlg.DoModal())
	{
		bkcolor = m_setClrDlg.m_cc.rgbResult;            // 保存用户选择的颜色
		XEle_AddBkFill((HELE)XC_GetObjectByID(IDE_ELE_MAINBK),bkcolor,255);
		// hu XBkInfoM_AddBorder(XWnd_GetBkInfoManager(m_hWindow),window_state_body_leave,RGB(255,255,0),150,1);

		mainbkPath.Format(L"RGB:%d",bkcolor);
	}
    
	*pbHandled=TRUE; //对该事件进行拦截,如果不需要拦截可以去掉该行代码
	return 0;
}

int CMyWindowDemo::OnBKTransChange(int pos,BOOL *pbHandled)
{
	bkTrans = pos;
	XEle_SetAlpha((HELE)XC_GetObjectByID(IDE_ELE_MAINBK),bkTrans);
	XEle_RedrawEle((HELE)XC_GetObjectByID(IDE_ELE_MAINBK),TRUE);
	
	mainbkTrans.Format(L"mainbkTrans:%d",bkTrans);

	*pbHandled=TRUE;
	return 0;
}

int CMyWindowDemo::OnDoneSkin(UINT nFlags,POINT *pPt,BOOL *pbHandled)
{
	if (XC_IsHELE(m_SkinView) && 
		XWnd_HitChildEle(m_hWindow,pPt)!= m_SkinView && 
		XWnd_HitChildEle(m_hWindow,pPt)!= m_SkinTrans &&
		XWnd_HitChildEle(m_hWindow,pPt)!= XSliderBar_GetButton(m_SkinTrans) &&
		XWnd_HitChildEle(m_hWindow,pPt)!= XSView_GetScrollBarV(m_SkinView) &&
		XWnd_HitChildEle(m_hWindow,pPt)!= XSBar_GetButtonUp(XSView_GetScrollBarV(m_SkinView)) &&
		XWnd_HitChildEle(m_hWindow,pPt)!= XSBar_GetButtonDown(XSView_GetScrollBarV(m_SkinView)) &&
		XWnd_HitChildEle(m_hWindow,pPt)!= XSBar_GetButtonSlider(XSView_GetScrollBarV(m_SkinView)))
	{
		CStdioFile bksave;
		bksave.Open(ProgPath+L"usercfg.txt",CFile::modeWrite|CFile::modeCreate);
		bksave.WriteString(mainbkPath);
		bksave.WriteString(L"\n"+mainbkTrans);
		bksave.Close();

		XEle_Destroy(m_SkinView);
		XEle_Destroy(m_SkinTrans);
		XBtn_SetCheck((HELE)XC_GetObjectByID(IDE_BTN_SELECTSKIN),FALSE);
		XWnd_RedrawWnd(m_hWindow,TRUE);

		*pbHandled=TRUE; //对该事件进行拦截,如果不需要拦截可以去掉该行代码
	}

	//*pbHandled=TRUE; //对该事件进行拦截,如果不需要拦截可以去掉该行代码
	return 0;
}

int CMyWindowDemo::OnGetRAND(BOOL *pbHandled)
{
	srand((unsigned)time(NULL));                // hu srand()函数产生一个以当前时间开始的随机种子
	for (int ii=IDE_RET_SORTDATA1;ii<=IDE_RET_SORTDATA8;ii++)
	{
		XRichEdit_SetTextInt((HELE)XC_GetObjectByID(ii),rand()%100);
	}

	*pbHandled=TRUE; //对该事件进行拦截,如果不需要拦截可以去掉该行代码
	return 0;
}

int CMyWindowDemo::OnCleanRAND(BOOL *pbHandled)
{
	for (int ii=IDE_RET_SORTDATA1;ii<=IDE_RET_SORTDATA8;ii++)
	{
		XRichEdit_DeleteAll((HELE)XC_GetObjectByID(ii));
	}
	XWnd_RedrawWnd(m_hWindow,TRUE);

	*pbHandled=TRUE; //对该事件进行拦截,如果不需要拦截可以去掉该行代码
	return 0;
}

int CMyWindowDemo::OnSortStart(BOOL *pbHandled)
{
	sortMode = XComboBox_GetSelItem(m_SortChange);

	for (int ii=IDE_RET_SORTDATA1;ii<=IDE_RET_SORTDATA8;ii++)
	{
		XRichEdit_SetItemColorEx((HELE)XC_GetObjectByID(ii),0,0,0,1,RGB(0,0,0));
		XRichEdit_SetItemColorEx((HELE)XC_GetObjectByID(ii),0,0,0,2,RGB(0,0,0));
	}

	switch (sortMode)
	{
	case 0:
		{
			dataAddrRange[0] = IDE_RET_SORTDATA1;
			dataAddrRange[1] = IDE_RET_SORTDATA8;
			XEle_AddBkFill((HELE)XC_GetObjectByID(dataAddrRange[0]),RGB(255,140,0),120);

			count_timer = 0;
			XWnd_SetTimer(m_hWindow,IDT_BUBSORT1_TIMER,bubSort1_timer);
			break;
		}
	case 1:
		{
			dataAddrRange[0] = IDE_RET_SORTDATA1;
			dataAddrRange[1] = IDE_RET_SORTDATA8;
			XEle_AddBkFill((HELE)XC_GetObjectByID(dataAddrRange[0]),RGB(255,140,0),120);

			count_timer = 0;
			XWnd_SetTimer(m_hWindow,IDT_BUBSORT1_TIMER,bubSort2_timer);
			break;
		}
	case 2:
		{
			CString DataExtra;

			sortCount = 2;
			for (int ii=0;ii<10;ii++)
			{
				dataExtraAddr[ii] = 0;
				dataExtra[ii] = 0;
			}
			dataExtraAddr[0] = IDE_RET_SORTDATA8+1;
			dataExtraAddr[1] = IDE_RET_SORTDATA1-1;
			dataAddrRange[0] = dataExtraAddr[1];
			dataAddrRange[1] = dataExtraAddr[0];
			dataExtraAddr[sortCount] = dataAddrRange[0] + (dataAddrRange[1]-dataAddrRange[0])/2;
			sortOrder = true;
			XEle_AddBkFill((HELE)XC_GetObjectByID(dataExtraAddr[sortCount]),RGB(255,0,0),120);
			XRichEdit_GetText((HELE)XC_GetObjectByID(dataExtraAddr[sortCount]),DataExtra.GetBuffer(4),4);
			DataExtra.ReleaseBuffer();
			_stscanf_s(DataExtra.GetBuffer(0),_T("%d"),&dataExtra[sortCount]);
			XRichEdit_DeleteAll((HELE)XC_GetObjectByID(dataExtraAddr[sortCount]));
			XShapeText_SetText((HELE)XC_GetObjectByID(IDS_SET_SORTDATAEXTRA),L"T="+DataExtra);
			XShapeText_SetTextColor((HELE)XC_GetObjectByID(IDS_SET_SORTDATAEXTRA),RGB(148,0,211),255);

			count_timer = 0;
			XWnd_SetTimer(m_hWindow,IDT_SEPRLIST_TIMER,seprList_timer);
			break;
		}
	case 3:
		{
			CString DataExtra;

			sortCount = 2;
			for (int ii=0;ii<10;ii++)
			{
				dataExtraAddr[ii] = 0;
				dataExtra[ii] = 0;
			}
			dataExtraAddr[0] = IDE_RET_SORTDATA8+1;
			dataExtraAddr[1] = IDE_RET_SORTDATA1-1;
			dataAddrRange[0] = dataExtraAddr[1];
			dataAddrRange[1] = dataExtraAddr[0];
			dataExtraAddr[sortCount] = dataAddrRange[0] + (dataAddrRange[1]-dataAddrRange[0])/2;
			sortOrder = true;
			XEle_AddBkFill((HELE)XC_GetObjectByID(dataExtraAddr[sortCount]),RGB(255,0,0),120);
			XRichEdit_GetText((HELE)XC_GetObjectByID(dataExtraAddr[sortCount]),DataExtra.GetBuffer(4),4);
			DataExtra.ReleaseBuffer();
			_stscanf_s(DataExtra.GetBuffer(0),_T("%d"),&dataExtra[sortCount]);
			XRichEdit_DeleteAll((HELE)XC_GetObjectByID(dataExtraAddr[sortCount]));
			XShapeText_SetText((HELE)XC_GetObjectByID(IDS_SET_SORTDATAEXTRA),L"T="+DataExtra);
			XShapeText_SetTextColor((HELE)XC_GetObjectByID(IDS_SET_SORTDATAEXTRA),RGB(148,0,211),255);

			count_timer = 0;
			XWnd_SetTimer(m_hWindow,IDT_SEPRLIST_TIMER,quickSort1_timer);
			break;
		}
	case 4:
		{
			CString DataExtra;

			sortCount = 2;
			for (int ii=0;ii<10;ii++)
			{
				dataExtraAddr[ii] = 0;
				dataExtra[ii] = 0;
			}
			dataExtraAddr[0] = IDE_RET_SORTDATA8+1;
			dataExtraAddr[1] = IDE_RET_SORTDATA1-1;
			dataAddrRange[0] = dataExtraAddr[1];
			dataAddrRange[1] = dataExtraAddr[0];
			dataExtraAddr[sortCount] = dataAddrRange[0] + (dataAddrRange[1]-dataAddrRange[0])/2;
			sortOrder = true;
			XEle_AddBkFill((HELE)XC_GetObjectByID(dataExtraAddr[sortCount]),RGB(255,0,0),120);
			XRichEdit_GetText((HELE)XC_GetObjectByID(dataExtraAddr[sortCount]),DataExtra.GetBuffer(4),4);
			DataExtra.ReleaseBuffer();
			_stscanf_s(DataExtra.GetBuffer(0),_T("%d"),&dataExtra[sortCount]);
			XRichEdit_DeleteAll((HELE)XC_GetObjectByID(dataExtraAddr[sortCount]));
			XShapeText_SetText((HELE)XC_GetObjectByID(IDS_SET_SORTDATAEXTRA),L"T="+DataExtra);
			XShapeText_SetTextColor((HELE)XC_GetObjectByID(IDS_SET_SORTDATAEXTRA),RGB(148,0,211),255);

			count_timer = 0;
			XWnd_SetTimer(m_hWindow,IDT_SEPRLIST_TIMER,quickSort2_timer);
			break;
		}
	}
	XWnd_RedrawWnd(m_hWindow,TRUE);

	*pbHandled=TRUE; //对该事件进行拦截,如果不需要拦截可以去掉该行代码
	return 0;
}

int CMyWindowDemo::OnTimer(UINT nIDEvent,BOOL *pbHandled)
{
	switch(nIDEvent)
	{
	case IDT_BUBSORT1_TIMER:
		{
			int dataMax,dataMin,count;
			CString DataMax,DataMin;

			if (dataAddrRange[1] < (dataAddrRange[0]+1+count_timer/2))
			{
				XWnd_KillTimer(m_hWindow,IDT_BUBSORT1_TIMER);

				count_timer = 0;

				for (int ii=dataAddrRange[0];ii<=dataAddrRange[1];ii++)
				{
					XEle_ClearBkInfo((HELE)XC_GetObjectByID(ii));
					XEle_AddBkBorder((HELE)XC_GetObjectByID(ii),RGB(255,140,0),120,5);
				}

				if (1 == sortMode)
				{
					XEle_AddBkFill((HELE)XC_GetObjectByID(dataAddrRange[1]),RGB(255,140,0),120);
					for (int ii=dataAddrRange[0];ii<=dataAddrRange[1];ii++)
					{
						XRichEdit_SetItemColorEx((HELE)XC_GetObjectByID(ii),0,0,0,1,RGB(0,0,0));
						XRichEdit_SetItemColorEx((HELE)XC_GetObjectByID(ii),0,0,0,2,RGB(0,0,0));
					}
					XWnd_SetTimer(m_hWindow,IDT_BUBSORT2_TIMER,bubSort2_timer);
				}
				else if (4 == sortMode)
				{
					XEle_AddBkFill((HELE)XC_GetObjectByID(dataAddrRange[1]),RGB(255,140,0),120);
					for (int ii=dataAddrRange[0];ii<=dataAddrRange[1];ii++)
					{
						XRichEdit_SetItemColorEx((HELE)XC_GetObjectByID(ii),0,0,0,1,RGB(0,0,0));
						XRichEdit_SetItemColorEx((HELE)XC_GetObjectByID(ii),0,0,0,2,RGB(0,0,0));
					}
					XWnd_SetTimer(m_hWindow,IDT_BUBSORT2_TIMER,quickSort2_timer);
				}

				XWnd_RedrawWnd(m_hWindow,TRUE);
			}
			else
			{
				switch (count_timer%2)
				{
				case 0:
					{
						count = count_timer/2;
						XEle_AddBkFill((HELE)XC_GetObjectByID(dataAddrRange[0]+1+count),RGB(255,140,0),120);
						XEle_RedrawEle((HELE)XC_GetObjectByID(dataAddrRange[0]+1+count),TRUE);
						break;
					}
				case 1:
					{
						count = (count_timer-1)/2;
						XRichEdit_GetText((HELE)XC_GetObjectByID(dataAddrRange[0]+count),DataMin.GetBuffer(4),4);
						DataMin.ReleaseBuffer();
						XRichEdit_GetText((HELE)XC_GetObjectByID(dataAddrRange[0]+count+1),DataMax.GetBuffer(4),4);
						DataMax.ReleaseBuffer();
						_stscanf_s(DataMin.GetBuffer(0),_T("%d"),&dataMin);
						_stscanf_s(DataMax.GetBuffer(0),_T("%d"),&dataMax);
						if (dataMin > dataMax)
						{
							XRichEdit_SetTextInt((HELE)XC_GetObjectByID(dataAddrRange[0]+count),dataMax);
							XRichEdit_SetItemColorEx((HELE)XC_GetObjectByID(dataAddrRange[0]+count),0,0,0,1,RGB(255,0,0));
							XRichEdit_SetItemColorEx((HELE)XC_GetObjectByID(dataAddrRange[0]+count),0,0,0,2,RGB(255,0,0));
							XRichEdit_SetTextInt((HELE)XC_GetObjectByID(dataAddrRange[0]+count+1),dataMin);
						}
						break;
					}
				}
				count_timer++;
			}

			return 0;
		}
	case IDT_BUBSORT2_TIMER:
		{
			int dataMax,dataMin,count;
			CString DataMax,DataMin;

			if (dataAddrRange[0] > (dataAddrRange[1]-1-count_timer/2))
			{
				XWnd_KillTimer(m_hWindow,IDT_BUBSORT2_TIMER);

				count_timer = 0;

				for (int ii=dataAddrRange[0];ii<=dataAddrRange[1];ii++)
				{
					XEle_ClearBkInfo((HELE)XC_GetObjectByID(ii));
					XEle_AddBkBorder((HELE)XC_GetObjectByID(ii),RGB(255,140,0),120,5);
				}

				if (4 == sortMode)
				{
					for (int ii=dataAddrRange[0]+1;ii<=dataAddrRange[1];ii+=2)
					{
						sortCount++;
						dataExtraAddr[sortCount] = ii;
					}

					XWnd_SetTimer(m_hWindow,IDT_QUICKSORT2_TIMER,quickSort2_timer);
				}

				XWnd_RedrawWnd(m_hWindow,TRUE);
			}
			else
			{
				switch (count_timer%2)
				{
				case 0:
					{
						count = count_timer/2;
						XEle_AddBkFill((HELE)XC_GetObjectByID(dataAddrRange[1]-1-count),RGB(255,140,0),120);
						XEle_RedrawEle((HELE)XC_GetObjectByID(dataAddrRange[1]-1-count),TRUE);
						break;
					}
				case 1:
					{
						count = (count_timer-1)/2;
						XRichEdit_GetText((HELE)XC_GetObjectByID(dataAddrRange[1]-count),DataMax.GetBuffer(4),4);
						DataMax.ReleaseBuffer();
						XRichEdit_GetText((HELE)XC_GetObjectByID(dataAddrRange[1]-count-1),DataMin.GetBuffer(4),4);
						DataMin.ReleaseBuffer();
						_stscanf_s(DataMin.GetBuffer(0),_T("%d"),&dataMin);
						_stscanf_s(DataMax.GetBuffer(0),_T("%d"),&dataMax);
						if (dataMin > dataMax)
						{
							XRichEdit_SetTextInt((HELE)XC_GetObjectByID(dataAddrRange[1]-count),dataMin);
							XRichEdit_SetItemColorEx((HELE)XC_GetObjectByID(dataAddrRange[1]-count),0,0,0,1,RGB(255,0,0));
							XRichEdit_SetItemColorEx((HELE)XC_GetObjectByID(dataAddrRange[1]-count),0,0,0,2,RGB(255,0,0));
							XRichEdit_SetTextInt((HELE)XC_GetObjectByID(dataAddrRange[1]-count-1),dataMax);
						}
						break;
					}
				}
				count_timer++;
			}
			return 0;
		}
	case IDT_SEPRLIST_TIMER:
		{
			int dataMax,dataMin;
			CString DataMax,DataMin;

			if (dataAddrRange[0] == dataAddrRange[1])
			{
				XWnd_KillTimer(m_hWindow,IDT_SEPRLIST_TIMER);

				count_timer = 0;
				dataExtraAddr[sortCount] = dataAddrRange[0];
				XShapeText_SetText((HELE)XC_GetObjectByID(IDS_SET_SORTDATAEXTRA),L"");

				XRichEdit_SetTextInt((HELE)XC_GetObjectByID(dataExtraAddr[sortCount]),dataExtra[sortCount]);
				XRichEdit_SetItemColorEx((HELE)XC_GetObjectByID(dataExtraAddr[sortCount]),0,0,0,1,RGB(148,0,211));
				XRichEdit_SetItemColorEx((HELE)XC_GetObjectByID(dataExtraAddr[sortCount]),0,0,0,2,RGB(148,0,211));
				for (int ii=IDE_RET_SORTDATA1;ii<=IDE_RET_SORTDATA8;ii++)
				{
					XEle_ClearBkInfo((HELE)XC_GetObjectByID(ii));
					XEle_AddBkBorder((HELE)XC_GetObjectByID(ii),RGB(255,140,0),120,5);
				}
				XWnd_RedrawWnd(m_hWindow,TRUE);

				if (3 == sortMode)
				{
					XWnd_SetTimer(m_hWindow,IDT_QUICKSORT1_TIMER,quickSort1_timer);
				}
				else if (4 == sortMode)
				{
					XWnd_SetTimer(m_hWindow,IDT_QUICKSORT2_TIMER,quickSort2_timer);
				}
			}
			else
			{
				if (0 == count_timer)
				{
					count_timer++;
					sortOrder = false;
					dataAddrRange[0]++;

					XRichEdit_GetText((HELE)XC_GetObjectByID(dataAddrRange[0]),DataMin.GetBuffer(4),4);
					DataMin.ReleaseBuffer();
					_stscanf_s(DataMin.GetBuffer(0),_T("%d"),&dataMin);

					XEle_ClearBkInfo((HELE)XC_GetObjectByID(dataExtraAddr[sortCount]));
					XEle_AddBkBorder((HELE)XC_GetObjectByID(dataExtraAddr[sortCount]),RGB(255,140,0),120,5);
					XRichEdit_SetTextInt((HELE)XC_GetObjectByID(dataExtraAddr[sortCount]),dataMin);
					XRichEdit_SetItemColorEx((HELE)XC_GetObjectByID(dataExtraAddr[sortCount]),0,0,0,1,RGB(255,0,0));
					XRichEdit_SetItemColorEx((HELE)XC_GetObjectByID(dataExtraAddr[sortCount]),0,0,0,2,RGB(255,0,0));

					XRichEdit_DeleteAll((HELE)XC_GetObjectByID(dataAddrRange[0]));
					XEle_AddBkFill((HELE)XC_GetObjectByID(dataAddrRange[0]),RGB(255,0,0),120);
					XWnd_RedrawWnd(m_hWindow,TRUE);
				}
				else
				{
					if (false == sortOrder)
					{
						switch ((count_timer-1)%2)
						{
						case 0:
							{
								dataAddrRange[1]--;
								if (dataAddrRange[1] > dataAddrRange[0])
								{
									count_timer++;
									XEle_AddBkFill((HELE)XC_GetObjectByID(dataAddrRange[1]),RGB(255,140,0),120);
									XEle_RedrawEle((HELE)XC_GetObjectByID(dataAddrRange[1]),TRUE);
								}
								else
								{
									count_timer = 0;
									sortOrder = true;
								}
								break;
							}
						case 1:
							{
								count_timer++;
								dataMin = dataExtra[sortCount];
								XRichEdit_GetText((HELE)XC_GetObjectByID(dataAddrRange[1]),DataMax.GetBuffer(4),4);
								DataMax.ReleaseBuffer();
								_stscanf_s(DataMax.GetBuffer(0),_T("%d"),&dataMax);
								if (dataMin > dataMax)
								{
									count_timer = 1;
									sortOrder = true;

									XEle_ClearBkInfo((HELE)XC_GetObjectByID(dataAddrRange[0]));
									XEle_AddBkBorder((HELE)XC_GetObjectByID(dataAddrRange[0]),RGB(255,140,0),120,5);
									XEle_AddBkFill((HELE)XC_GetObjectByID(dataAddrRange[0]),RGB(255,140,0),120);
									XRichEdit_SetTextInt((HELE)XC_GetObjectByID(dataAddrRange[0]),dataMax);
									XRichEdit_SetItemColorEx((HELE)XC_GetObjectByID(dataAddrRange[0]),0,0,0,1,RGB(255,0,0));
									XRichEdit_SetItemColorEx((HELE)XC_GetObjectByID(dataAddrRange[0]),0,0,0,2,RGB(255,0,0));

									XRichEdit_DeleteAll((HELE)XC_GetObjectByID(dataAddrRange[1]));
									XEle_ClearBkInfo((HELE)XC_GetObjectByID(dataAddrRange[1]));
									XEle_AddBkBorder((HELE)XC_GetObjectByID(dataAddrRange[1]),RGB(255,140,0),120,5);
									XEle_AddBkFill((HELE)XC_GetObjectByID(dataAddrRange[1]),RGB(255,0,0),120);
									XWnd_RedrawWnd(m_hWindow,TRUE);
								}
								break;
							}
						}
					}
					else
					{
						switch ((count_timer-1)%2)
						{
						case 0:
							{
								dataAddrRange[0]++;
								if (dataAddrRange[1] > dataAddrRange[0])
								{
									count_timer++;
									XEle_AddBkFill((HELE)XC_GetObjectByID(dataAddrRange[0]),RGB(255,140,0),120);
									XEle_RedrawEle((HELE)XC_GetObjectByID(dataAddrRange[0]),TRUE);
								}
								else
								{
									count_timer = 0;
									sortOrder = false;
								}
								break;
							}
						case 1:
							{
								count_timer++;
								dataMax = dataExtra[sortCount];
								XRichEdit_GetText((HELE)XC_GetObjectByID(dataAddrRange[0]),DataMin.GetBuffer(4),4);
								DataMin.ReleaseBuffer();
								_stscanf_s(DataMin.GetBuffer(0),_T("%d"),&dataMin);
								if (dataMin >= dataMax)
								{
									count_timer = 1;
									sortOrder = false;

									XEle_ClearBkInfo((HELE)XC_GetObjectByID(dataAddrRange[1]));
									XEle_AddBkBorder((HELE)XC_GetObjectByID(dataAddrRange[1]),RGB(255,140,0),120,5);
									XEle_AddBkFill((HELE)XC_GetObjectByID(dataAddrRange[1]),RGB(255,140,0),120);
									XRichEdit_SetTextInt((HELE)XC_GetObjectByID(dataAddrRange[1]),dataMin);
									XRichEdit_SetItemColorEx((HELE)XC_GetObjectByID(dataAddrRange[1]),0,0,0,1,RGB(255,0,0));
									XRichEdit_SetItemColorEx((HELE)XC_GetObjectByID(dataAddrRange[1]),0,0,0,2,RGB(255,0,0));

									XRichEdit_DeleteAll((HELE)XC_GetObjectByID(dataAddrRange[0]));
									XEle_ClearBkInfo((HELE)XC_GetObjectByID(dataAddrRange[0]));
									XEle_AddBkBorder((HELE)XC_GetObjectByID(dataAddrRange[0]),RGB(255,140,0),120,5);
									XEle_AddBkFill((HELE)XC_GetObjectByID(dataAddrRange[0]),RGB(255,0,0),120);
									XWnd_RedrawWnd(m_hWindow,TRUE);
								}
								break;
							}
						}
					}
				}
			}
			return 0;
		}
	case IDT_QUICKSORT1_TIMER:
		{
			CString DataExtra;
			int ii;

			XWnd_KillTimer(m_hWindow,IDT_QUICKSORT1_TIMER);

			BUBSort2(dataExtraAddr,sortCount+1);
			for (ii = sortCount;ii > 0;ii--)
			{
				if (dataExtraAddr[ii-1]-dataExtraAddr[ii] > 2) break;
			}

			if (0 == ii) count_timer = 0;
			else
			{
				sortCount++;
				dataAddrRange[0] = dataExtraAddr[ii];
				dataAddrRange[1] = dataExtraAddr[ii-1];
				dataExtraAddr[sortCount] = dataAddrRange[0] + (dataAddrRange[1]-dataAddrRange[0])/2;
				sortOrder = true;

				for (int ii=dataAddrRange[0]+1;ii<=dataAddrRange[1]-1;ii++)
				{
					XRichEdit_SetItemColorEx((HELE)XC_GetObjectByID(ii),0,0,0,1,RGB(0,0,0));
					XRichEdit_SetItemColorEx((HELE)XC_GetObjectByID(ii),0,0,0,2,RGB(0,0,0));
				}

				XEle_AddBkFill((HELE)XC_GetObjectByID(dataExtraAddr[sortCount]),RGB(255,0,0),120);
				XRichEdit_GetText((HELE)XC_GetObjectByID(dataExtraAddr[sortCount]),DataExtra.GetBuffer(4),4);
				DataExtra.ReleaseBuffer();
				_stscanf_s(DataExtra.GetBuffer(0),_T("%d"),&dataExtra[sortCount]);
				XRichEdit_DeleteAll((HELE)XC_GetObjectByID(dataExtraAddr[sortCount]));
				XShapeText_SetText((HELE)XC_GetObjectByID(IDS_SET_SORTDATAEXTRA),L"T="+DataExtra);
				XShapeText_SetTextColor((HELE)XC_GetObjectByID(IDS_SET_SORTDATAEXTRA),RGB(148,0,211),255);

				count_timer = 0;
				XWnd_SetTimer(m_hWindow,IDT_SEPRLIST_TIMER,quickSort1_timer);
				XWnd_RedrawWnd(m_hWindow,TRUE);
			}
			return 0;
		}
	case IDT_QUICKSORT2_TIMER:
		{
			CString DataExtra;
			int ii,jj,quickSortFlag=0,bubSortFlag=0;

			XWnd_KillTimer(m_hWindow,IDT_QUICKSORT2_TIMER);

			BUBSort2(dataExtraAddr,sortCount+1);
			for (ii = sortCount;ii > 0;ii--)
			{
				if (dataExtraAddr[ii-1]-dataExtraAddr[ii] > 4) 
				{
					quickSortFlag = 1;
					break;
				}
				else if (dataExtraAddr[ii-1]-dataExtraAddr[ii] > 2)
				{
					bubSortFlag = 1;
					break;
				}
			}

			if (0 == ii) count_timer = 0;
			else
			{
				if (1 == bubSortFlag)
				{
					dataAddrRange[0] = dataExtraAddr[ii]+1;
					dataAddrRange[1] = dataExtraAddr[ii-1]-1;
					XEle_AddBkFill((HELE)XC_GetObjectByID(dataAddrRange[0]),RGB(255,140,0),120);
					XWnd_RedrawWnd(m_hWindow,TRUE);

					count_timer = 0;
					XWnd_SetTimer(m_hWindow,IDT_BUBSORT1_TIMER,quickSort2_timer);
				}
				else if (1 == quickSortFlag)
				{
					sortCount++;
					dataAddrRange[0] = dataExtraAddr[ii];
					dataAddrRange[1] = dataExtraAddr[ii-1];
					dataExtraAddr[sortCount] = dataAddrRange[0] + (dataAddrRange[1]-dataAddrRange[0])/2;
					sortOrder = true;

					for (int ii=dataAddrRange[0]+1;ii<=dataAddrRange[1]-1;ii++)
					{
						XRichEdit_SetItemColorEx((HELE)XC_GetObjectByID(ii),0,0,0,1,RGB(0,0,0));
						XRichEdit_SetItemColorEx((HELE)XC_GetObjectByID(ii),0,0,0,2,RGB(0,0,0));
					}

					XEle_AddBkFill((HELE)XC_GetObjectByID(dataExtraAddr[sortCount]),RGB(255,0,0),120);
					XRichEdit_GetText((HELE)XC_GetObjectByID(dataExtraAddr[sortCount]),DataExtra.GetBuffer(4),4);
					DataExtra.ReleaseBuffer();
					_stscanf_s(DataExtra.GetBuffer(0),_T("%d"),&dataExtra[sortCount]);
					XRichEdit_DeleteAll((HELE)XC_GetObjectByID(dataExtraAddr[sortCount]));
					XShapeText_SetText((HELE)XC_GetObjectByID(IDS_SET_SORTDATAEXTRA),L"T="+DataExtra);
					XShapeText_SetTextColor((HELE)XC_GetObjectByID(IDS_SET_SORTDATAEXTRA),RGB(148,0,211),255);

					count_timer = 0;
					XWnd_SetTimer(m_hWindow,IDT_SEPRLIST_TIMER,quickSort2_timer);
					XWnd_RedrawWnd(m_hWindow,TRUE);
				}
			}

			return 0;
		}
	default:return 0;
	}
}

// hu 双向冒泡排序
int CMyWindowDemo::BUBSort2(int *P,int n)
{
	int flag = 1,T;
	int ii,jj=0;

	while (flag)
	{
		flag = 0;
		for (ii=0;ii<n-1;ii++)
		{
			if (P[ii]<P[ii+1])
			{
				T = P[ii];
				P[ii] = P[ii+1];
				P[ii+1] = T;
				flag = 1;
			}
		}

		if (0 == flag) break;

		flag = 0;
		for (ii=n-1;ii>0;ii--)
		{
			if (P[ii-1]<P[ii])
			{
				T = P[ii];
				P[ii] = P[ii-1];
				P[ii-1] = T;
				flag = 1;
			}
		}
		jj++;
	}
	return jj;
}