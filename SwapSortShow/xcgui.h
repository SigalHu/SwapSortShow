/**************************************************************************\
*
* Copyright (c)  �Ųʽ����. All Rights Reserved.
*
* �Ųʽ���� - �ٷ���վ : http://www.xcgui.com
*
\**************************************************************************/
#pragma once

//v1.9.6
////////////�������///////////////////
#define in_
#define out_
#define in_out_
#define XC_API extern "C"

#define  XC_NAME    _T("name")
#define  XC_NAME2   _T("name2")
#define  XC_NAME3   _T("name3")
#define  XC_NAME4   _T("name4")
#define  XC_NAME5   _T("name5")
#define  XC_NAME6   _T("name6")
#define  XC_NAME7   _T("name7")
#define  XC_NAME8   _T("name8")
#define  XC_NAME9   _T("name9")
#define  XC_NAME10   _T("name10")
/// @defgroup groupObjectType �ӿھ������
/// @ingroup macroDefine
/// @{
/// �Ųʶ�������
enum XC_OBJECT_TYPE  ///<�Ųʶ�������
{
	XC_ERROR =-1,      ///<��������
	XC_WINDOW = 1,     ///<����
	XC_MODALWINDOW ,   ///<ģ̬����
	XC_FRAMEWND    ,   ///<��ܴ���
	XC_FLOATWND     ,  ///<��������
	XC_COMBOBOXWINDOW   =   11,   //comboBoxWindow_        ��Ͽ򵯳������б���
	XC_POPUPMENUWINDOW  ,         //popupMenuWindow_       �����˵�������
	XC_POPUPMENUCHILDWINDOW ,     //popupMenuChildWindow_  �����˵��Ӵ���

	//Ԫ��
	XC_ELE      = 21, ///<����Ԫ��
	XC_BUTTON   ,     ///<��ť
	XC_RICHEDIT   ,   ///<���ı��༭��
	XC_COMBOBOX    ,  ///<������Ͽ�Ԫ��
	XC_SCROLLBAR   ,  ///<������Ԫ��
	XC_SCROLLVIEW  ,  ///<������ͼԪ��
	XC_LIST        ,  ///<�б�Ԫ��
	XC_LISTBOX    ,   ///<�б��Ԫ��
	XC_LISTVIEW   ,   ///<�б���ͼ,��ͼ��
	XC_TREE       ,   ///<��Ԫ��
	XC_MENUBAR    ,   ///<�˵���
	XC_SLIDERBAR     ,  ///<������
	XC_PROGRESSBAR   ,  ///<������
	XC_TOOLBAR       ,  ///<������
	XC_MONTHCAL      ,  ///<����Ԫ��
	XC_DATETIME      ,  ///<ʱ��Ԫ��
	XC_PROPERTYGRID  ,  ///<��������
	XC_RICHEDIT_COLOR   ,  ///<��ɫѡ��Ԫ��
	XC_RICHEDIT_SET,
	XC_TABBAR,          ///<tab��
	XC_TEXTLINK,        ///<�ı����Ӱ�ť

	XC_PANE          ,  ///<���ִ���
	XC_PANE_SPLIT    ,  ///<���ִ����϶��ָ���
	XC_MENUBAR_BUTTON       ,   ///<�˵����ϵİ�ť
	XC_TOOLBAR_BUTTON       ,   ///<�������ϰ�ť
	XC_PROPERTYPAGE_LABEL   ,   ///<����ҳ��ǩ��ť
	XC_PIER                 ,   ///<����ͣ����ͷ
	XC_BUTTON_MENU          ,   ///<�����˵���ť
	XC_VIRTUAL_ELE          ,   ///<����Ԫ��
	XC_RICHEDIT_FILE        ,   ///<RichEditFile �ļ�ѡ��༭��
	XC_RICHEDIT_FOLDER      ,   ///<RichEditFolder  �ļ���ѡ��༭��
	XC_LIST_HEADER          ,   ///<�б�ͷԪ��

	XC_SHAPE       =61,  ///<��״����
	XC_SHAPE_TEXT,       ///<��״����-�ı�
	XC_SHAPE_PICTURE,    ///<��״����-ͼƬ
	XC_SHAPE_RECT,       ///<��״����-����
	XC_SHAPE_ELLIPSE,    ///<��״����-Բ
	XC_SHAPE_LINE,       ///<��״����-ֱ��
	XC_SHAPE_GROUPBOX,   ///<��״����-���
	XC_SHAPE_GIF,        ///<��״����-GIF

	//��������
	XC_MENU       = 81,  ///<�����˵�
	XC_IMAGE         ,   ///<ͼƬ����
	XC_HDRAW         ,   ///<��ͼ����
	XC_FONT          ,   ///<�Ų�����
	XC_FLASH         ,   ///<flash   
	XC_PANE_CELL     ,  
	XC_WEB           ,

	XC_LAYOUT_OBJECT = 101,  ///<���ֶ���LayoutObject
	XC_ADAPTER          ,
	XC_ADAPTER_TABLE    ,    ///<����������AdapterTable
	XC_ADAPTER_TREE     ,    ///<����������AdapterTree
	XC_ADAPTER_LISTVIEW ,    ///<����������AdapterListView
	XC_ADAPTER_MAP,          ///<����������AdapterMap

	//��ʵ�����,ֻ�������жϲ���
	XC_LAYOUT_LISTVIEW     = 111,
	XC_LAYOUT_LIST     ,
	XC_LAYOUT_OBJECT_GROUP ,
	XC_LAYOUT_OBJECT_ITEM  ,
	XC_LAYOUT_PANEL,

	XC_BKINFOM,
	//XC_BUTTON_EX,
};

///@}

//#ifdef _DEBUG
#define DECLARE_HANDLEX(name) struct name##__ { int unused; }; typedef struct name##__ *name
//#else
//#define	DECLARE_HANDLEX(name) typedef void* name
//#endif

/// @defgroup groupHandle ����б�
/// @ingroup macroDefine
/// @{
typedef void*   HXCGUI;   ///<��Դ���
DECLARE_HANDLEX(HWINDOW); ///<������Դ���
DECLARE_HANDLEX(HELE);    ///<Ԫ����Դ���
DECLARE_HANDLEX(HMENUX);  ///<�˵���Դ���
DECLARE_HANDLEX(HDRAW);   ///<ͼ�λ�����Դ���
DECLARE_HANDLEX(HIMAGE);  ///<ͼƬ��Դ���
//DECLARE_HANDLEX(HARRAY_ITERATOR); ///<���������
DECLARE_HANDLEX(HFONTX);    ///<�Ų�������
DECLARE_HANDLEX(HBKINFOM);    ///<�������ݹ��������

///@}

#ifndef _INC_SHELLAPI
DECLARE_HANDLE(HDROP);
#endif

typedef   void  bkInfo_i;  //������Ϣ

struct  RECTF
{
	float  left;
	float  top;
	float  right;
	float  bottom;
};

//������ʽ----------------------------
/// @defgroup groupWindowStyle �Ųʴ�����ʽ
/// @ingroup macroDefine
/// @{
enum  xc_window_style_   
{
	xc_window_style_nothing =  0x00000000,      ///<ʲôҲû��
	xc_window_style_caption=   0x00000001,      ///<top����,���ָ��������,Ĭ��Ϊ�󶨱�����Ԫ��
	xc_window_style_border=    0x00000002,      ///<�߿�,ָ��Ĭ���������Ҳ��ִ�С,���û��ָ��,��ô�߿򲼾ִ�СΪ0
	xc_window_style_center=    0x00000004,      ///<���ھ���
	xc_window_style_drag_border= 0x00000008,    ///<�϶����ڱ߿�
	xc_window_style_drag_window =0x00000010,    ///<�϶�����
	xc_window_style_allow_maxWindow=   0x00000020,   ///���������

	///����Ĭ����ʽ
	xc_window_style_default=(xc_window_style_caption | xc_window_style_border | xc_window_style_center | xc_window_style_drag_border | xc_window_style_allow_maxWindow),
	xc_window_style_default2=(xc_window_style_caption | xc_window_style_border | xc_window_style_drag_border | xc_window_style_allow_maxWindow),

	///ģ̬������ʽ
	xc_window_style_modal=(xc_window_style_caption | xc_window_style_center |  xc_window_style_border),
};

///@}

#ifdef _DEBUG
#define XTRACE   xtrace
#define XTRACEW  xtracew
#define XERROR   XTRACE 
#define XERRORW  XTRACEW
#else
#define XTRACE
#define XTRACEW
#define XERROR 
#define XERRORW
#endif

#define  XC_WINDOW_TOP            1 //��
#define  XC_WINDOW_BOTTOM         2 //��
#define  XC_WINDOW_LEFT           3 //��
#define  XC_WINDOW_RIGHT          4 //��
#define  XC_WINDOW_TOPLEFT        5 //���Ͻ�
#define  XC_WINDOW_TOPRIGHT       6 //���Ͻ�
#define  XC_WINDOW_BOTTOMLEFT     7 //���½�
#define  XC_WINDOW_BOTTOMRIGHT    8 //���½�
#define  XC_WINDOW_CAPTION        9 //�������ƶ���������
#define  XC_WINDOW_BODY           10

/// @defgroup groupWindow_position ����λ��
/// @ingroup macroDefine
/// @{
enum   window_position_
{
	window_position_error=-1,  ///<����
	window_position_top=0,     ///<top
	window_position_bottom,    ///<bottom
	window_position_left,      ///<left
	window_position_right,     ///<right
	window_position_body,      ///<body
	window_position_window,    ///<window �������� 
};

///@}

//͸������
/// @defgroup groupWindowTransparent �Ųʴ���͸����ʶ
/// @ingroup macroDefine
/// @{
enum  window_transparent_
{
	window_transparent_false=0,   ///<Ĭ�ϴ���,��͸��
	window_transparent_shaped,    ///<͸������,��͸��ͨ��,����
	window_transparent_shadow,    ///<��Ӱ����,��͸��ͨ��,�߿���Ӱ,����͸�����͸��,��ǰδ����.
	window_transparent_simple,    ///<͸������,����͸��ͨ��,ָ����͸����,ָ��͸��ɫ.
	window_transparent_win7,      ///<WIN7��������,��ҪWIN7������Ч,��ǰδ����.
};

///@}

/// @defgroup groupID_fixed  ����ID
/// @ingroup macroDefine
/// @{
#define  XC_ID_ROOT            0   ///<���ڵ�
#define  XC_ID_ERROR          -1   ///<ID����
#define  XC_ID_FIRST          -2   ///<���뿪ʼλ��
#define  XC_ID_LAST           -3   ///<����ĩβλ��

/// @}


/// @defgroup groupMenu �����˵�
/// @ingroup macroDefine
/// @{

//�����˵����ʶ
///@name �����˵����ʶ
///@{
enum   menu_item_flags_
{
	menu_item_flags_normal=   0x00,   ///<����
	menu_item_flags_select=   0x01,   ///<ѡ�� 
	menu_item_flags_check=    0x02,   ///<��ѡ
	menu_item_flags_popup=    0x04,   ///<����
	menu_item_flags_separator=0x08,   ///<�ָ��� ID������,ID�ű�����
	menu_item_flags_disable=  0x10,   ///<����
};

///@}

//�����˵�����
///@name �����˵�����
///@{
enum  menu_popup_position_
{
	menu_popup_position_left_top=0,      ///<���Ͻ�
	menu_popup_position_left_bottom,     ///<���½�
	menu_popup_position_right_top,       ///<���Ͻ�
	menu_popup_position_right_bottom,    ///<���½�
	menu_popup_position_center_left,     ///<�����
	menu_popup_position_center_top,      ///<�Ͼ���
	menu_popup_position_center_right,    ///<�Ҿ���
	menu_popup_position_center_bottom,   ///<�¾���
};

///@}

//�˵�ID--------------------------------------
///@name �˵�ID , ��ǰδʹ��
///@{
#define  IDM_CLIP          1000000000    ///<����
#define  IDM_COPY          1000000001    ///<����
#define  IDM_PASTE         1000000002    ///<ճ��
#define  IDM_DELETE        1000000003    ///<ɾ��
#define  IDM_SELECTALL     1000000004    ///<ȫѡ
#define  IDM_DELETEALL     1000000005    ///<���

///@}

///@}

/// @defgroup groupImageDrawType ͼƬ��������
/// @ingroup macroDefine
/// @{
enum  image_draw_type_
{
	image_draw_type_default=0,  ///<Ĭ��
	image_draw_type_stretch,    ///<����
	image_draw_type_adaptive,   ///<����Ӧ,�Ź���
	image_draw_type_tile,       ///<ƽ��
	image_draw_type_fixed_ratio,  ///<�̶�����,��ͼƬ������ʾ��Χʱ,����ԭʼ����ѹ����ʾͼƬ
	image_draw_type_adaptive_border,  ///<�Ź��񲻻����м�����
};

///@}


//״̬--------------------------------------
/// @defgroup groupCommonState3 ��ͨ����״̬
/// @ingroup  macroDefine
/// @{
enum  common_state3_
{
	common_state3_leave=0,  ///<�뿪
	common_state3_stay,     ///<ͣ��
	common_state3_down,     ///<����
};

///@}

/// @defgroup groupButtonStateFlag ��ť״̬
/// @ingroup  macroDefine
/// @{
enum  button_state_
{
	button_state_leave=0,   ///<�뿪״̬
	button_state_stay,      ///<ͣ��״̬
	button_state_down,      ///<����״̬
	button_state_check,     ///<ѡ��״̬
	button_state_disable,   ///<����״̬
};

///@}

/// @defgroup groupButtonType ��ť����(�������ֹ���)
/// @ingroup macroDefine
/// @{
enum button_type_
{
	button_type_default=0, ///<Ĭ������
	button_type_check,     ///<��ѡ��ť
	button_type_radio,     ///<��ѡ��ť
	button_type_close,     ///<���ڹرհ�ť
	button_type_min,       ///<������С����ť
	button_type_max,       ///<������󻯻�ԭ��ť
};

///@}

/// @defgroup groupButtonStyle ��ť��ʽ(�����������)
/// @ingroup macroDefine
/// @{
enum  button_style_
{
	button_style_default         = 0,  ///<Ĭ�Ϸ��
	button_style_check            ,  ///<��ѡ��ť
	button_style_radio            ,  ///<��ѡ��ť
	button_style_scrollbar_up     ,  ///<ˮƽ������,�ϰ�ť
	button_style_scrollbar_down   ,  ///<ˮƽ������,�°�ť
	button_style_scrollbar_left   ,  ///<ˮƽ������,��ť
	button_style_scrollbar_right  ,  ///<ˮƽ������,�Ұ�ť
	button_style_scrollbar_slider ,  ///<������,����
	button_style_tabBar_button    ,  ///<TabBar�ϵİ�ť
	button_style_toolBar_left     ,  ///<ToolBar�������ť
	button_style_toolBar_right    ,  ///<ToolBar�ҹ�����ť
	button_style_toolBar_expand   ,  ///<չ��������ť

	button_style_pane_close     , ///<����رհ�ť
	button_style_pane_lock      , ///<����������ť
	button_style_pane_menu      , ///<���������˵���ť
	button_style_pane_dockH    , ///<��ܴ�����߻��ұ���ͷ�ϰ�ť
	button_style_pane_dockV    , ///<��ܴ����ϱ߻��±���ͷ�ϰ�ť
};

///@}

/// @defgroup   groupComboBoxState ComboBox״̬
/// @ingroup macroDefine
/// @{
enum  comboBox_state_
{
	comboBox_state_leave=0,   ///<����뿪״̬
	comboBox_state_stay=1,    ///<���ͣ��״̬
	comboBox_state_down=2,    ///<����״̬
};

///@}

/// @defgroup groupListItemState List��״̬
/// @ingroup macroDefine
/// @{
enum  list_item_state_
{
	list_item_state_leave=0,   ///<������뿪״̬
	list_item_state_stay=1,    ///<�����ͣ��״̬
	list_item_state_select=2,  ///<��ѡ��״̬
};

///@}


/// @defgroup groupTreeItemState Tree��״̬
/// @ingroup macroDefine
/// @{
enum  tree_item_state_
{
	tree_item_state_leave=0,   ///<������뿪״̬
	tree_item_state_stay=1,    ///<�����ͣ��״̬
	tree_item_state_select=2,  ///<��ѡ��״̬
};

///@}


//��ťͼ����뷽ʽ
/// @defgroup groupButtonIconAlign ��ťͼ����뷽ʽ
/// @ingroup macroDefine
/// @{
enum  button_icon_align_
{
	button_icon_align_left=0,  ///<ͼ�������
	button_icon_align_top,     ///<ͼ���ڶ���
	button_icon_align_right,   ///<ͼ�����ұ�
	button_icon_align_bottom,  ///<ͼ���ڵײ�
};

///@}

/// @defgroup groupLayoutSize ���ִ�С����
/// @ingroup macroDefine
/// @{
enum  layout_size_type_
{
	layout_size_type_fixed=0,   ///<ָ����С
	layout_size_type_fill,      ///<fill ��丸
	layout_size_type_auto,      ///<auto �Զ���С,�������ݼ����С
	layout_size_type_weight,    ///<weight ����,���ձ�������ʣ��ռ�
	layout_size_type_disable,   ///<disable ��ʹ��
};

///@}

/// @defgroup  groupListDrawItemBkFlags  List,ListBox,ListView,Tree,������Ʊ�־λ
/// @ingroup macroDefine
/// @{
enum  list_drawItemBk_flags_
{
	list_drawItemBk_flags_nothing= 0x000,    ///<������
	list_drawItemBk_flags_leave=   0x001,    ///<��������뿪״̬���
	list_drawItemBk_flags_stay=    0x002,    ///<�������ѡ��״̬���
	list_drawItemBk_flags_select=  0x004,    ///<�������ͣ��״̬�����
	list_drawItemBk_flags_group_leave=0x008, ///<��������뿪״̬�鱳��,����Ϊ��ʱ
	list_drawItemBk_flags_group_stay= 0x010  ///<�������ͣ��״̬�鱳��,����Ϊ��ʱ

};

/// @}

//������Ϣ������
/// @defgroup groupMessageBox ������Ϣ��
/// @ingroup macroDefine
/// @{
enum  messageBox_flags_
{
	messageBox_flags_other= 0x00,    ///<����
	messageBox_flags_ok=    0x01,    ///<ȷ����ť
	messageBox_flags_cancel=0x02,    ///<ȡ����ť
};

///@}

///@defgroup GroupPropertyGrid_item_type    ��������������
///@ingroup  macroDefine
///@{
enum  propertyGrid_item_type_
{
	propertyGrid_item_type_text=0,      ///<Ĭ��,�ַ�������
	propertyGrid_item_type_edit,        ///<�༭��
	propertyGrid_item_type_edit_color,  ///<��ɫѡ��Ԫ��
	propertyGrid_item_type_edit_file,   ///<�ļ�ѡ��༭��
	propertyGrid_item_type_edit_set,    ///<����
	propertyGrid_item_type_comboBox,    ///<��Ͽ�
	propertyGrid_item_type_group,       ///<��
};

///@}

///@defgroup  GroupZOrder    Z��λ��
///@ingroup  macroDefine
///@{
enum zorder_
{
	zorder_top,    ///<������
	zorder_bottom, ///<������
	zorder_before, ///<ָ��Ŀ������
	zorder_after,  ///<ָ��Ŀ������
};

///@}

//////////////��ܴ���///////////////////////////////////////////////
//����˵� ��ǰδʹ��
#define  IDM_LOCK          1000000006    ///<����
#define  IDM_DOCK          1000000007    ///<ͣ��
#define  IDM_FLOAT         1000000008    ///<����
#define  IDM_HIDE          1000000009    ///<����

enum  layout_align_
{
	layout_align_left=0,
	layout_align_top,
	layout_align_right,
	layout_align_bottom,
	layout_align_center,
	layout_align_equidistant,
};

enum align_type_
{
	align_error=-1,
	align_left=0,
	align_top,
	align_right,
	align_bottom,
	align_center,
};

enum dock_align_  //ͣ����ͷ����
{
	dock_align_left=0,
	dock_align_top,
	dock_align_right,
	dock_align_bottom,
};

//����״̬
enum pane_state_
{
	pane_state_any=0,
	pane_state_lock,
	pane_state_dock,
	pane_state_float,
};


typedef void (CALLBACK *pFunDebugError)(const char *pInfo); //����ص�
/////////////////////////////////////////////////////////
//////////////����ṹ��/////////////////////////////////
/////////////////////////////////////////////////////////
struct BorderSize_  //4���ߵĴ�С
{
	int  leftSize;
	int  topSize;
	int  rightSize;
	int  bottomSize;
};
typedef  BorderSize_  SpaceSize_ , PaddingSize_;

struct  Position
{
	int  iRow;
	int  iColumn;
};

struct  template_info_i  //ģ����
{
	int  info;
};

struct listBox_item_i
{
	int     nUserData;  ///<�û�������
	int     nHeight;    ///<��Ĭ�ϸ߶�
	int     nSelHeight; ///<��ѡ��ʱ�߶�
	list_item_state_  nState;  ///<״̬
	int     index;      ///<������
	RECT    rcItem;     ///<������
	HXCGUI  hLayout;     ///<���ֶ���
	template_info_i  *pInfo;   ///<ģ����Ϣ
};

struct listBox_item_Info_i
{
	int     nUserData;  //�û�������
	int     nHeight;
	int     nSelHeight;
};

struct  listView_item_id_i
{
	int  iGroup;   ///<������
	int  iItem;    ///<������
};

struct list_item_i
{
	int     index;
	int     iSubItem;
	int     nUserData;
	list_item_state_  nState;
	RECT    rcItem;
	HXCGUI  hLayout;     ///<���ֶ���
	template_info_i  *pInfo;   ///<ģ����Ϣ
};

struct list_header_item_i
{
	int     index;
	int     nUserData;
	common_state3_  nState;
	RECT      rcItem;
	HXCGUI    hLayout;     ///<���ֶ���
	template_info_i  *pInfo;   ///<ģ����Ϣ
};

struct tree_item_i
{
	int     nID;
	int     nDepth;
	tree_item_state_  nState;
	int     nHeight;
	int     nSelHeight;
	int     nUserData;
	BOOL    bExpand;
	RECT    rcItem;
	HXCGUI  hLayout;     ///<���ֶ���
	template_info_i  *pInfo;   ///<ģ����Ϣ
};

struct listView_item_i
{
	int     iGroup;             ///<������������ -1û����
	int     iItem;              ///<����������λ������,�������Ϊ-1,��ôΪ��
	int     nUserData;           ///<�û�������
	list_item_state_  nState;    ///<״̬  
	RECT    rcItem;              ///<��������,�����߿�
	HXCGUI  hLayout;           ///<���ֶ���
	template_info_i  *pInfo;   ///<ģ����Ϣ
};

//������Ϣ
struct layout_info_i
{
	layout_size_type_  widthType;
	layout_size_type_  heightType;
	short  width;    //���
	short  height;   //�߶�
};

struct  menu_popupWnd_i 
{
	HWINDOW hWindow;    //���ھ��
	int     nParentID;  //����ID
};

///�˵������Ի�ṹ
struct menu_drawBackground_i
{
	HMENUX  hMenu;      ///<�˵����
	HWINDOW hWindow;    ///<��ǰ�����˵���Ĵ��ھ��
	int     nParentID;  ///<����ID
};

///�˵����Ի�ṹ
struct  menu_drawItem_i
{
	HMENUX     hMenu;       ///<�˵����
	HWINDOW    hWindow;     ///<��ǰ�����˵���Ĵ��ھ��
	int        nID;         ///<ID
	int        nState;	    ///<״̬ @ref menu_item_flags_
	RECT       rcItem;      ///<����
	HIMAGE     hIcon;       ///<�˵���ͼ��
	const wchar_t    *pText;   ///<�ı�
};

//��UIԪ���϶���
struct tree_drag_item_i
{
	int  nDragItem;  ///< �϶���ID
	int  nDestItem;  ///< Ŀ����ID
	int  nType;      ///< ͣ�����Ŀ��λ��,1:ͣ�ŵ�Ŀ�������,2:ͣ�ŵ�Ŀ�������,3:ͣ�ŵ�Ŀ��ĵ�����
};

//������Ϣ
struct  xc_font_info_i
{
	int   nSize;         ///<�����С,��λ(pt,��).
	BOOL  bBold;         ///<����
	BOOL  bItalic;       ///<б��
	BOOL  bUnderline;    ///<�»���
	BOOL  bStrikeout;    ///<ɾ����
	wchar_t  aName[LF_FACESIZE];  ///<��������
};

#ifndef __IOleControlSite_INTERFACE_DEFINED__
struct POINTF
{
	float x;
	float y;
};
#endif

///������״����
enum  bkInfo_type_  
{
	bkInfo_type_error=0,
	bkInfo_type_fill=1,            ///<���
	bkInfo_type_border=2,          ///<�߿�
	bkInfo_type_image=3,           ///<ͼƬ
	bkInfo_type_triangle=4,        ///<������
	bkInfo_type_rectangle=5,       ///<����

	bkInfo_type_ellipse=6,         ///<Բ��
	bkInfo_type_roundRect=7,       ///<Բ�Ǿ���
};

/// @defgroup group_combo_StateFlags ���״̬
/// @ingroup macroDefine
/// @{
enum  window_state_flag_
{
	window_state_flag_nothing  =0x0000,  ///<��
	window_state_whole_leave   =0x0001,  ///<��������
	window_state_body_leave    =0x0002,  ///<����-body
	window_state_top_leave     =0x0004,  ///<����-top
	window_state_bottom_leave  =0x0008,  ///<����-bottom
	window_state_left_leave    =0x0010,  ///<����-left
	window_state_right_leave   =0x0020,  ///<����-right
};

enum  element_state_flag_  //���״̬
{
	element_state_flag_nothing   =window_state_flag_nothing,  ///<��
	element_state_flag_enable    =0x0001,  ///<����
	element_state_flag_disable   =0x0002,  ///<����
	element_state_flag_focus     =0x0004,  ///<����
	element_state_flag_focus_no  =0x0008,  ///<�޽���

	element_state_flag_leave     =0x0010,  ///<����뿪
	element_state_flag_stay      =0x0020,  ///<Ϊ��չģ�鱣��
	element_state_flag_down      =0x0040,  ///<Ϊ��չģ�鱣��
};

enum  button_state_flag_  //���״̬
{
	button_state_flag_leave     =element_state_flag_leave,  ///<����뿪
	button_state_flag_stay      =element_state_flag_stay,   ///<���ͣ��
	button_state_flag_down      =element_state_flag_down,   ///<��갴��

	button_state_flag_check     =0x0080, ///<ѡ��
	button_state_flag_check_no  =0x0100, ///<δѡ��

	button_state_flag_WindowRestore  =0x0200, //���ڻ�ԭ
	button_state_flag_WindowMaximize =0x0400, //�������
};

enum comboBox_state_flag_
{
	comboBox_state_flag_leave   =element_state_flag_leave, ///<����뿪
	comboBox_state_flag_stay    =element_state_flag_stay,  ///<���ͣ��
	comboBox_state_flag_down    =element_state_flag_down,  ///<��갴��
};

enum listBox_state_flag_
{
	listBox_state_flag_item_leave     =0x0080, ///<������뿪
	listBox_state_flag_item_stay      =0x0100, ///<�����ͣ��

	listBox_state_flag_item_select    =0x0200, ///<��ѡ��
	listBox_state_flag_item_select_no =0x0400, ///<��δѡ��
};

enum list_state_flag_
{
	list_state_flag_item_leave      =0x0080, ///<������뿪
	list_state_flag_item_stay       =0x0100, ///<�����ͣ��

	list_state_flag_item_select     =0x0200, ///<��ѡ��
	list_state_flag_item_select_no  =0x0400, ///<��δѡ��
};

enum listView_state_flag_
{
	listView_state_flag_item_leave     =0x0080, ///<������뿪
	listView_state_flag_item_stay      =0x0100, ///<�����ͣ��

	listView_state_flag_item_select    =0x0200, ///<��ѡ��
	listView_state_flag_item_select_no =0x0400, ///<��δѡ��

	listView_state_flag_group_leave    =0x0800, ///<������뿪
	listView_state_flag_group_stay     =0x1000, ///<�����ͣ��

	listView_state_flag_group_select     =0x2000, ///<��ѡ��
	listView_state_flag_group_select_no  =0x4000, ///<��δѡ��
};

enum tree_state_flag_
{
	tree_state_flag_item_leave      =0x0080, ///<������뿪
	tree_state_flag_item_stay       =0x0100, ///<�����ͣ��,����ֵ, ��δʹ��

	tree_state_flag_item_select     =0x0200, ///<��ѡ��
	tree_state_flag_item_select_no  =0x0400, ///<��δѡ��
};

enum monthCal_state_flag_     
{
	monthCal_state_flag_leave = element_state_flag_leave,  ///<�뿪״̬

	monthCal_state_flag_item_leave      = 0x0080,     ///< ��-�뿪
	monthCal_state_flag_item_stay       = 0x0100,     ///< ��-ͣ��
	monthCal_state_flag_item_down       = 0x0200,     ///< ��-����

	monthCal_state_flag_item_select     = 0x0400,     ///< ��-ѡ��
	monthCal_state_flag_item_select_no  = 0x0800,     ///< ��-δѡ��

	monthCal_state_flag_item_today      = 0x1000,     ///< ��-����
	monthCal_state_flag_item_other      = 0x2000,     ///< ��-���¼�����
	monthCal_state_flag_item_last_month = 0x4000,     ///< ��-����
	monthCal_state_flag_item_cur_month  = 0x8000,     ///< ��-����
	monthCal_state_flag_item_next_month = 0x10000,    ///< ��-����
};

enum propertyGrid_state_flag_     
{
	propertyGrid_state_flag_item_leave     = 0x0080,
	propertyGrid_state_flag_item_stay      = 0x0100,

	propertyGrid_state_flag_item_select    = 0x0200,
	propertyGrid_state_flag_item_select_no = 0x0400,
};


enum pane_state_flag_     
{
	pane_state_flag_leave     = 0x0080,
	pane_state_flag_stay      = 0x0100,

	pane_state_flag_caption   = 0x0200,
	pane_state_flag_body      = 0x0400,
};

///@}

/// @defgroup group_monthCal_button_type_    ����Ԫ���ϵİ�ť����
/// @ingroup macroDefine
/// @{
enum monthCal_button_type_
{
	monthCal_button_type_today = 0,  ///< ���찴ť
	monthCal_button_type_last_year,  ///< ��һ��
	monthCal_button_type_next_year,  ///< ��һ��
	monthCal_button_type_last_month, ///< ��һ��
	monthCal_button_type_next_month, ///< ��һ��
};

///@}

///@defgroup  group_monthCal_item_i_    ����Ԫ��������
///@ingroup   macroDefine
///@{

/// ����Ԫ��������
struct monthCal_item_i
{
	int  nDay;     ///< ����
	int  nType;    ///< 1����,2����,3����
	int  nState;   ///< ���״̬ monthCal_state_flag_
	RECT rcItem;   ///< ������
};

///@}


///////////////////////////////////////////////////////////////////////////////////
/////////////////////������Ϣ//////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////

//������Ϣ
/**
@addtogroup wndMSG

<hr>
<h2>Windows ��׼��Ϣ</h2>
- @ref WM_PAINT ���ڻ�����Ϣ
- @ref WM_CLOSE ���ڹر���Ϣ.
- @ref WM_DESTROY ����������Ϣ.
- @ref WM_NCDESTROY ���ڷǿͻ���������Ϣ.
- @ref WM_MOUSEMOVE ��������ƶ���Ϣ.
- @ref WM_LBUTTONDOWN ����������������Ϣ
- @ref WM_LBUTTONUP ����������������Ϣ.
- @ref WM_RBUTTONDOWN ��������Ҽ�������Ϣ.
- @ref WM_RBUTTONUP ��������Ҽ�������Ϣ.
- @ref WM_LBUTTONDBLCLK ����������˫����Ϣ.
- @ref WM_RBUTTONDBLCLK ��������Ҽ�˫����Ϣ.
- @ref WM_MOUSEWHEEL ���������ֹ�����Ϣ.
- @ref WM_EXITSIZEMOVE �����˳��ƶ��������Сģʽѭ���ģ�����μ�MSDN.
- @ref WM_MOUSEHOVER ������������Ϣ
- @ref WM_MOUSELEAVE ��������뿪��Ϣ.
- @ref WM_SIZE ���ڴ�С�ı���Ϣ.
- @ref WM_TIMER ���ڶ�ʱ����Ϣ.
- @ref WM_SETFOCUS ���ڻ�ý���.
- @ref WM_KILLFOCUS ����ʧȥ����.
- @ref WM_KEYDOWN ���ڼ��̰�����Ϣ.
- @ref WM_CAPTURECHANGED ������겶��ı���Ϣ.
- @ref WM_SETCURSOR  �������������.
- @ref WM_CHAR       �����ַ���Ϣ.
- @ref WM_DROPFILES  �϶��ļ�������.
- @ref other ����Windowsϵͳ��Ϣ,�������Զ����Windows��Ϣ.

<hr>
@anchor WM_PAINT WM_PAINT ���ڻ�����Ϣ
@code   int CALLBACK OnWndDrawWindow(HDRAW hDraw,BOOL *pbHandled); @endcode
@param  hDraw   ͼ�λ��ƾ��.

<hr>
@anchor WM_CLOSE WM_CLOSE ���ڹر���Ϣ.
@code   int CALLBACK OnWndClose(BOOL *pbHandled); @endcode

<hr>
@anchor WM_DESTROY WM_DESTROY ����������Ϣ.
@code   int CALLBACK OnWndDestroy(BOOL *pbHandled);  @endcode

<hr>
@anchor WM_NCDESTROY WM_NCDESTROY ���ڷǿͻ���������Ϣ.
@code   int CALLBACK OnWndNCDestroy(BOOL *pbHandled); @endcode

<hr>
@anchor WM_MOUSEMOVE WM_MOUSEMOVE ��������ƶ���Ϣ.
@code   int CALLBACK OnWndMouseMove(UINT nFlags,POINT *pPt,BOOL *pbHandled);  @endcode
@param  flags   ��μ�MSDN WM_MOUSEMOVE wParam����.
@param  pPt     ��������.

<hr>
@anchor WM_LBUTTONDOWN WM_LBUTTONDOWN ����������������Ϣ
@code   int CALLBACK OnWndLButtonDown(UINT nFlags,POINT *pPt,BOOL *pbHandled); @endcode
@param  flags   ��μ�MSDN WM_LBUTTONDOWN.
@param  pPt     ��������.

<hr>
@anchor WM_LBUTTONUP WM_LBUTTONUP ����������������Ϣ.
@code   int CALLBACK OnWndLButtonUp(UINT nFlags,POINT *pPt,BOOL *pbHandled); @endcode
@param  flags   ��μ�MSDN WM_LBUTTONUP.
@param  pPt     ��������.

<hr>
@anchor WM_RBUTTONDOWN WM_RBUTTONDOWN ��������Ҽ�������Ϣ.
@code   int CALLBACK OnWndRButtonDown(UINT nFlags,POINT *pPt,BOOL *pbHandled); @endcode
@param  flags   ��μ�MSDN WM_RBUTTONDOWN.
@param  pPt     ��������.

<hr>
@anchor WM_RBUTTONUP WM_RBUTTONUP ��������Ҽ�������Ϣ.
@code   int CALLBACK OnWndRButtonUp(UINT nFlags,POINT *pPt,BOOL *pbHandled); @endcode
@param  flags   ��μ�MSDN WM_RBUTTONUP.
@param  pPt     ��������.

<hr>
@anchor WM_LBUTTONDBLCLK WM_LBUTTONDBLCLK ����������˫����Ϣ.
@code   int CALLBACK OnWndLButtonDBClick(UINT nFlags,POINT *pPt,BOOL *pbHandled); @endcode
@param  flags   ��μ�MSDN WM_LBUTTONDBLCLK.
@param  pPt     ��������.

<hr>
@anchor WM_RBUTTONDBLCLK WM_RBUTTONDBLCLK ��������Ҽ�˫����Ϣ.
@code   int CALLBACK OnWndRButtonDBClick(UINT nFlags,POINT *pPt,BOOL *pbHandled); @endcode
@param  flags   ��μ�MSDN WM_RBUTTONDBLCLK.
@param  pPt     ��������.

<hr>
@anchor WM_MOUSEWHEEL WM_MOUSEWHEEL ���������ֹ�����Ϣ.
@code   int CALLBACK OnWndMouseWheel(UINT nFlags,POINT *pPt,BOOL *pbHandled); @endcode
@param  flags   ��μ�MSDN WM_MOUSEWHEEL��ϢwParam����.
@param  pPt     ��������.

<hr>
@anchor WM_EXITSIZEMOVE WM_EXITSIZEMOVE �����˳��ƶ��������Сģʽѭ���ģ�����μ�MSDN.
@code   int CALLBACK OnWndExitSizeMove(BOOL *pbHandled); @endcode

<hr>
@anchor WM_MOUSEHOVER WM_MOUSEHOVER ������������Ϣ.
@code   int CALLBACK OnWndMouseHover(UINT nFlags,POINT *pPt,BOOL *pbHandled); @endcode
@param  flags  ��μ�MSDN WM_MOUSEHOVER��ϢwParam����.
@param  pPt    ���λ��

<hr>
@anchor WM_MOUSELEAVE WM_MOUSELEAVE ��������뿪��Ϣ.
@code   int CALLBACK OnWndMouseLeave(BOOL *pbHandled); @endcode

<hr>
@anchor WM_SIZE WM_SIZE ���ڴ�С�ı���Ϣ.
@code   int CALLBACK OnWndSize(UINT nFlags,SIZE *pSize,BOOL *pbHandled); @endcode
@param  flags   ��μ�MSDN WM_SIZE��ϢwParam����.
@param  pSize   ���ڴ�С.

<hr>
@anchor WM_TIMER WM_TIMER ���ڶ�ʱ����Ϣ.
@code   int CALLBACK OnWndTimer(UINT nIDEvent,BOOL *pbHandled); @endcode
@param  nIDEnent ��ʱ����ʾ��.
@param  uElapse  ָ����������ϵͳ���������ĺ�����,������GetTickCount�����ķ���ֵ.

<hr>
@anchor WM_SETFOCUS WM_SETFOCUS ���ڻ�ý���.
@code   int CALLBACK OnWndSetFocus(BOOL *pbHandled); @endcode

<hr>
@anchor WM_KILLFOCUS WM_KILLFOCUS ����ʧȥ����.
@code   int CALLBACK OnWndKillFocus(BOOL *pbHandled); @endcode

<hr>
@anchor WM_KEYDOWN WM_KEYDOWN ���ڼ��̰�����Ϣ.
@code   int CALLBACK OnWndKeyDown(WPARAM wParam,LPARAM lParam,BOOL *pbHandled); @endcode
@note   wParam,lParam:��μ�MSDN WM_KEYDOWN.

<hr>
@anchor WM_CAPTURECHANGED WM_CAPTURECHANGED ������겶��ı���Ϣ.
@code   int CALLBACK OnWndCaptureChanged(HWND hWnd,BOOL *pbHandled); @endcode
@param  hWnd    �����겶��Ĵ��ھ��.

<hr>
@anchor  WM_SETCURSOR WM_SETCURSOR �������������.
@code    int CALLBACK OnWndSetCursor(WPARAM wParam,LPARAM lParam,BOOL *pbHandled); @endcode
@note    wParam,lParam:��μ�MSDN WM_SETCURSOR.

<hr>
@anchor  WM_CHAR WM_CHAR �����ַ�������Ϣ.
@code    int CALLBACK OnWndChar(WPARAM wParam,LPARAM lParam,BOOL *pbHandled); @endcode
@note    wParam,lParam:��μ�MSDN WM_CHAR.

<hr>
@anchor  WM_DROPFILES WM_DROPFILES �϶��ļ���������Ϣ.
@code    int CALLBACK OnDropFiles(HDROP hDropInfo , BOOL *pbHandled); @endcode
@note    ��μ�MSDN WM_DROPFILES.

<hr>
@anchor other ����Windowsϵͳ��Ϣ,�������Զ����Windows��Ϣ.
@code   int CALLBACK OnWndOther(WPARAM wParam,LPARAM lParam,BOOL *pbHandled); @endcode
@param  wParam  ��Ϣ����.
@param  lParam  ��Ϣ����.
@note   ������Ϣ��μ�MSDN.
@{
*/

//wParam:left-top�������; lParam:right-bottom�������; �����2������Ϊ��,��ô�ػ���������
#define  XWM_REDRAW            WM_APP+1007  //�����ػ���ʱ ----������-----�ڲ��Զ�����Ϣ

//�ػ�Ԫ��,�ڲ�ʹ��
#define  XWM_REDRAW_ELE       0x7000+3 //�ػ�Ԫ�� wParam:Ԫ�ؾ��, lParam:RECT*���ڴ�������

//������Ϣ-����ϵͳ�ǿͻ�����Ϣ
#define  XWM_EVENT_ALL        WM_APP+1000 //�¼�Ͷ�� -------������-------����Ҫע��

///@brief ������Ϣ����
///@code  int CALLBACK OnWndProc(UINT message, WPARAM wParam, LPARAM lParam, BOOL *pbHandled);  @endcode
#define  XWM_WINDPROC         0x7000    //ע�ᴰ�ڴ������

#define  XWM_DRAW_T           0x7000+1  //���ڻ���,�ڲ�ʹ��, wParam:0, lParam:0


///@brief �˵�����
///@code  int CALLBACK OnWndMenuPopup(HMENUX hMenu, BOOL *pbHandled); @endcode
#define  XWM_MENU_POPUP      0x7000+5

///@brief �˵���������
///@code  int CALLBACK OnWndMenuPopupWnd(HMENUX hMenu,menu_popupWnd_i *pInfo,BOOL *pbHandled); @endcode
#define  XWM_MENU_POPUP_WND     0x7000+6    

///@brief �˵�ѡ��
///@code  int CALLBACK OnWndMenuSelect(int nID,BOOL *pbHandled); @endcode
#define  XWM_MENU_SELECT       0x7000+7 //�˵�ѡ�� wParam:�˵���ID, lParam:0

///@brief �˵��˳�
///@code  int CALLBACK OnWndMenuExit(BOOL *pbHandled); @endcode
#define  XWM_MENU_EXIT         0x7000+8 //�˵��˳� wParam:0, lParam:0

///@brief ���Ʋ˵�����, ���øù�����Ҫ����XMenu_EnableDrawBackground().
///@code  int CALLBACK OnWndMenuDrawBackground(HDRAW hDraw,menu_drawBackground_i *pInfo,BOOL *pbHandled); @endcode
#define  XWM_MENU_DRAW_BACKGROUND   0x7000+9 //���Ʋ˵�����

/// @brief ���Ʋ˵����¼�, ���øù�����Ҫ����XMenu_EnableDrawItem().
/// @code  int CALLBACK OnMenuDrawItem(HDRAW hDraw,menu_drawItem_i* pInfo,BOOL *pbHandled); @endcode
#define  XWM_MENU_DRAWITEM    0x7000+10  //���Ʋ˵��� 

#define  XWM_COMBOBOX_POPUP_DROPLIST   0x7000+11  //������������б�,�ڲ�ʹ��

///@brief ��������
///@code  int CALLBACK OnWndFloatPane(HWINDOW hFloatWnd, HELE hPane, BOOL *pbHandled); @endcode
#define  XWM_FLOAT_PANE        0x7000+12 //��������, ����ӿ�ܴ����е���,��ɸ�������


///@}

///////////////////////////////////////////////////////////////////////////////////
/////////////////Ԫ���¼�//////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////
//Ԫ���¼�
/// @addtogroup eleEvents
/// @{


/// @brief Ԫ�ش�������¼�.
/// @code  int CALLBACK OnEventProc(UINT nEvent, WPARAM wParam, LPARAM lParam, BOOL *pbHandled) @endcode
#define  XE_ELEPROCE         1     ///Ԫ���¼��������

/// @brief Ԫ�ػ����¼�
/// @code  int CALLBACK OnDraw(HDRAW hDraw,BOOL *pbHandled);  @endcode
#define  XE_PAINT            2

/// @brief ��Ԫ�ؼ���Ԫ�ػ�������¼�.���øù�����Ҫ����XEle_EnableEvent_XE_PAINT_END();
/// @code  int CALLBACK OnPaintEnd(HDRAW hDraw,BOOL *pbHandled); @endcode
#define  XE_PAINT_END        3     //Ԫ�ؼ���Ԫ�ػ�����ɺ󴥷�,��Ҫ���øù���,XEle_EnableEvent_XE_PAINT_END();

/// @brief ������ͼ�����¼�.
/// @code int CALLBACK OnDrawScrollView(HDRAW hDraw,BOOL *pbHandled); @endcode
#define  XE_PAINT_SCROLLVIEW   4

/// @brief Ԫ������ƶ��¼�.
/// @code  int CALLBACK OnMouseMove(UINT nFlags, POINT *pPt, BOOL *pbHandled);  @endcode
#define  XE_MOUSEMOVE        5

/// @brief Ԫ���������¼�.
/// @code  int CALLBACK OnMouseStay(BOOL *pbHandled); @endcode
#define  XE_MOUSESTAY        6   ///ͣ��

/// @brief Ԫ�������ͣ�¼�.
/// @code  int CALLBACK OnMouseHover(UINT nFlags, POINT *pPt, BOOL *pbHandled); @endcode
#define  XE_MOUSEHOVER       7   ///��ͣ

/// @brief Ԫ������뿪�¼�.
/// @param  nFlags ��������ͣ��״̬��Ԫ��.
/// @code  int CALLBACK OnMouseLeave(HELE hEleStay,BOOL *pbHandled); @endcode
#define  XE_MOUSELEAVE       8   ///�뿪

/// @brief Ԫ�������ֹ����¼�.
/// @code  int CALLBACK OnMouseWheel(UINT nFlags,POINT *pPt,BOOL *pbHandled); @endcode
/// @param flags      ��MSDN��WM_MOUSEWHEEL��ϢwParam����˵��.
#define  XE_MOUSEWHEEL         9  //������  wParam:��ʶ,lParam:POINT����

/// @brief �����������¼�.
/// @code  int CALLBACK OnLButtonDown(UINT nFlags, POINT *pPt,BOOL *pbHandled);  @endcode
#define  XE_LBUTTONDOWN        10

/// @brief �����������¼�.
/// @code  int CALLBACK OnLButtonUp(UINT nFlags, POINT *pPt,BOOL *pbHandled); @endcode
#define  XE_LBUTTONUP          11

/// @brief ����Ҽ������¼�.
/// @code  int CALLBACK OnRButtonDOWN(UINT nFlags, POINT *pPt,BOOL *pbHandled);  @endcode
#define  XE_RBUTTONDOWN        12

/// @brief ����Ҽ������¼�.
/// @code int CALLBACK OnRButtonUp(UINT nFlags, POINT *pPt,BOOL *pbHandled);  @endcode
#define  XE_RBUTTONUP          13

/// @brief ������˫���¼�.
/// @code   int CALLBACK OnLButtonDBClick(UINT nFlags, POINT *pPt,BOOL *pbHandled); @endcode
#define  XE_LBUTTONDBCLICK     14

#define  XE_RBUTTONDBCLICK     15

/// @brief Ԫ�ػ�ý����¼�.
/// @code int CALLBACK OnSetFocus(BOOL *pbHandled); @endcode
#define  XE_SETFOCUS           31

/// @brief Ԫ��ʧȥ�����¼�.
/// @code int CALLBACK OnKillFocus(BOOL *pbHandled); @endcode
#define  XE_KILLFOCUS          32

/// @brief Ԫ�������¼�.
/// @code int CALLBACK OnDestroy(BOOL *pbHandled); @endcode
#define  XE_DESTROY            33   //Ԫ������

/// @brief ��ť����¼�.
/// @code int CALLBACK OnBtnClick(BOOL *pbHandled); @endcode
#define  XE_BNCLICK            34

/// @brief ��ťѡ���¼�.
/// @code int CALLBACK OnButtonCheck(BOOL bCheck,BOOL *pbHandled); @endcode
#define  XE_BUTTON_CHECK       35  //��ťѡ���¼�

/// @brief Ԫ�ش�С�ı��¼�.
/// @code int CALLBACK *OnSize(BOOL *pbHandled); @endcode
#define  XE_SIZE               36

/// @brief Ԫ����ʾ�����¼�.
/// @code  int CALLBACK OnShow(BOOL bShow,BOOL *pbHandled); @endcode
#define  XE_SHOW               37  //wParam:TRUE��FALSE, lParam:0

/// @brief Ԫ�����������¼�.
/// @code  int CALLBACK OnSetFont(BOOL *pbHandled); @endcode
#define  XE_SETFONT           38

/// @brief Ԫ�ذ����¼�.
/// @code  int CALLBACK OnEventKeyDown(WPARAM wParam,LPARAM lParam,BOOL *pbHandled); @endcode
/// @note  wParam,lParam:��μ�MSDN WM_KEYDOWN. 
#define  XE_KEYDOWN            39 //wParam��lParam�������׼��Ϣ��ͬ

/// @brief ͨ��TranslateMessage����������ַ��¼�.
/// @code  int CALLBACK OnEventChar(WPARAM wParam,LPARAM lParam,BOOL *pbHandled); @endcode
/// @note   wParam,lParam:��μ�MSDN WM_KEYDOWN. 
#define  XE_CHAR               40   //wParam��lParam�μ�MSDN

/// @brief Ԫ��������겶��.
/// @code int CALLBACK OnSetCapture(BOOL *pbHandled); @endcode
#define  XE_SETCAPTURE      51

/// @brief Ԫ��ʧȥ��겶��.
/// @code int CALLBACK OnKillCapture(BOOL *pbHandled); @endcode
#define  XE_KILLCAPTURE     52

/// @brief ���������
/// @code int CALLBACK OnSetCursor(WPARAM wParam,LPARAM lParam,BOOL *pbHandled) @endcode
#define  XE_SETCURSOR            53  // SetCursor

/// @brief ������ͼԪ��ˮƽ�����¼�,������ͼ����.
/// @code  int CALLBACK OnScrollViewScrollH(int pos,BOOL *pbHandled); @endcode
/// @param pos         ��ǰ������.
#define  XE_SCROLLVIEW_SCROLL_H    54  //������ͼ �����¼� wParam:������,lParam:0 (������ͼ����,����������ͼ�ѹ������)

/// @brief ������ͼԪ�ش�ֱ�����¼�,������ͼ����.
/// @code  int CALLBACK OnScrollViewScrollV(int pos,BOOL *pbHandled); @endcode
/// @param pos         ��ǰ������.
#define  XE_SCROLLVIEW_SCROLL_V    55  //������ͼ �����¼� wParam:������,lParam:0 (������ͼ����,����������ͼ�ѹ������)

/// @brief ������Ԫ�ع����¼�,����������.
/// @code  int CALLBACK OnSBarScroll(int pos,BOOL *pbHandled); @endcode
/// @param pos   ��ǰ������.
#define  XE_SBAR_SCROLL        56   //�����������¼� wParam:������,lParam:0 (����������)

///@brief �˵�����
///@code  int CALLBACK OnMenuPopup(HMENUX hMenu, BOOL *pbHandled); @endcode
#define  XE_MENU_POPUP       57

///@brief �˵���������
///@code  int CALLBACK OnMenuPopupWnd(HMENUX hMenu,menu_popupWnd_i* pInfo,BOOL *pbHandled); @endcode
#define  XE_MENU_POPUP_WND     58

/// @brief �����˵���ѡ���¼�.
/// @code  int CALLBACK OnMenuSelect(int nItem,BOOL *pbHandled); @endcode
/// @param nItem          �˵���id.
#define  XE_MENU_SELECT      59  //�˵���ѡ�� wParam:�˵�ID,lParam:0

///@brief ���Ʋ˵�����, ���øù�����Ҫ����XMenu_EnableDrawBackground().
///@code  int CALLBACK OnMenuDrawBackground(HDRAW hDraw,menu_drawBackground_i *pInfo,BOOL *pbHandled); @endcode
#define  XE_MENU_DRAW_BACKGROUND   60 //���Ʋ˵�����

/// @brief ���Ʋ˵����¼�, ���øù�����Ҫ����XMenu_EnableDrawItem().
/// @code  int CALLBACK OnMenuDrawItem(HDRAW hDraw,menu_drawItem_i* pInfo,BOOL *pbHandled); @endcode
#define  XE_MENU_DRAWITEM    61  //���Ʋ˵��� 

/// @brief �����˵��˳��¼�.
/// @code  int CALLBACK OnMenuExit(BOOL *pbHandled); @endcode
#define  XE_MENU_EXIT        62 //�˵��˳�

/// @brief ������Ԫ��,����λ�øı��¼�.
/// @code  int CALLBACK OnSliderBarChange(int pos,BOOL *pbHandled); @endcode
#define  XE_SLIDERBAR_CHANGE   63

/// @brief ������Ԫ��,���ȸı��¼�.
/// @code  int CALLBACK OnProgressBarChange(int pos,BOOL *pbHandled); @endcode
#define  XE_PROGRESSBAR_CHANGE  64

/// @brief ��Ͽ������б���ѡ���¼�.
/// @code  int CALLBACK OnComboBoxSelect(int iItem,BOOL *pbHandled);  @endcode
#define  XE_COMBOBOX_SELECT       71   //��Ͽ���ѡ��  

/// @brief ��Ͽ������б����¼�.
/// @code  int CALLBACK OnComboBoxPopupList(HWINDOW hWindow,HELE hListBox,BOOL *pbHandled);  @endcode
#define  XE_COMBOBOX_POPUP_LIST   72

/// @brief ��Ͽ������б��˳��¼�.
/// @code  int CALLBACK OnComboBoxExitList(BOOL *pbHandled);  @endcode
#define  XE_COMBOBOX_EXIT_LIST    73

/// @brief �б��Ԫ��,��ģ�崴��.
/// @code int CALLBACK OnListBoxTemplateCreate(listBox_item_i* pItem,BOOL *pbHandled); @endcode
#define  XE_LISTBOX_TEMP_CREATE     81

/// @brief �б��Ԫ��,��ģ�崴������¼�.
/// @code int CALLBACK OnListBoxTemplateCreateEnd(listBox_item_i* pItem,BOOL *pbHandled); @endcode
#define  XE_LISTBOX_TEMP_CREATE_END     82

/// @brief �б��Ԫ��,��ģ������.
/// @code int CALLBACK OnListBoxTemplateDestroy(listBox_item_i* pItem,BOOL *pbHandled); @endcode
#define  XE_LISTBOX_TEMP_DESTROY    83

/// @brief �б��Ԫ��,��ģ���������.
/// @code  int CALLBACK OnListBoxTemplateAdjustCoordinate(listBox_item_i* pItem,BOOL *pbHandled); @endcode
#define  XE_LISTBOX_TEMP_ADJUST_COORDINATE  84

/// @brief �б��Ԫ��,������¼�.
/// @code  int CALLBACK OnListBoxDrawItem(HDRAW hDraw,listBox_item_i* pItem,BOOL *pbHandled); @endcode
#define  XE_LISTBOX_DRAWITEM     85

/// @brief �б��Ԫ��,��ѡ���¼�.
/// @code  int CALLBACK OnListBoxSelect(int iItem,BOOL *pbHandled);  @endcode
#define  XE_LISTBOX_SELECT       86

/// @brief �б�Ԫ��,��ģ�崴��.
/// @code  int CALLBACK OnListTemplateCreate(list_item_i* pItem,BOOL *pbHandled); @endcode
#define  XE_LIST_TEMP_CREATE     101

/// @brief �б�Ԫ��,��ģ�崴������¼�.
/// @code  int CALLBACK OnListTemplateCreateEnd(list_item_i* pItem,BOOL *pbHandled); @endcode
#define  XE_LIST_TEMP_CREATE_END     102

/// @brief �б�Ԫ��,��ģ������.
/// @code int CALLBACK OnListTemplateDestroy(list_item_i* pItem,BOOL *pbHandled); @endcode
#define  XE_LIST_TEMP_DESTROY    103

/// @brief �б�Ԫ��,��ģ���������.
/// @code  typedef int CALLBACK OnListTemplateAdjustCoordinate(list_item_i* pItem,BOOL *pbHandled); @endcode
#define  XE_LIST_TEMP_ADJUST_COORDINATE  104

/// @brief �б�Ԫ��,������.
/// @code  int CALLBACK OnListDrawItem(HDRAW hDraw,list_item_i* pItem,BOOL *pbHandled); @endcode
#define  XE_LIST_DRAWITEM                105

/// @brief �б�Ԫ��,��ѡ���¼�.
/// @code  int CALLBACK OnListSelect(int iItem,BOOL *pbHandled); @endcode
#define  XE_LIST_SELECT                  106

/// @brief �б�Ԫ�ػ����б�ͷ��.
/// @code  int CALLBACK OnListHeaderDrawItem(HDRAW hDraw, list_header_item_i* pItem, BOOL *pbHandled); @endcode
#define  XE_LIST_HEADER_DRAWITEM         107

/// @brief �б�Ԫ��,�б�ͷ�����¼�.
/// @code  int CALLBACK OnListHeaderClick(int iItem, BOOL *pbHandled); @endcode
#define  XE_LIST_HEADER_CLICK            108

/// @brief �б�Ԫ��,�б�ͷ���ȸı��¼�.
/// @code  int CALLBACK OnListHeaderItemWidthChange(int iItem, int nWidth BOOL *pbHandled); @endcode
#define  XE_LIST_HEADER_WIDTH_CHANGE     109

/// @brief �б�Ԫ��,�б�ͷ��ģ�崴��.
/// @code  int CALLBACK OnListHeaderTemplateCreate(list_header_item_i* pItem,BOOL *pbHandled); @endcode
#define  XE_LIST_HEADER_TEMP_CREATE          110

/// @brief �б�Ԫ��,�б�ͷ��ģ�崴������¼�.
/// @code  int CALLBACK OnListHeaderTemplateCreateEnd(list_header_item_i* pItem,BOOL *pbHandled); @endcode
#define  XE_LIST_HEADER_TEMP_CREATE_END      111

/// @brief �б�Ԫ��,�б�ͷ��ģ������.
/// @code int CALLBACK OnListHeaderTemplateDestroy(list_header_item_i* pItem,BOOL *pbHandled); @endcode
#define  XE_LIST_HEADER_TEMP_DESTROY          112

/// @brief �б�Ԫ��,�б�ͷ��ģ���������.
/// @code  typedef int CALLBACK OnListHeaderTemplateAdjustCoordinate(list_header_item_i* pItem,BOOL *pbHandled); @endcode
#define  XE_LIST_HEADER_TEMP_ADJUST_COORDINATE  113


/// @brief ��Ԫ��,��ģ�崴��.
/// @code  int CALLBACK OnTreeTemplateCreate(tree_item_i* pItem,BOOL *pbHandled); @endcode
#define  XE_TREE_TEMP_CREATE             121  

/// @brief ��Ԫ��,��ģ�崴�����.
/// @code  int CALLBACK OnTreeTemplateCreateEnd(tree_item_i* pItem,BOOL *pbHandled); @endcode
#define  XE_TREE_TEMP_CREATE_END         122

/// @brief ��Ԫ��,��ģ������.
/// @code  int CALLBACK OnTreeTemplateDestroy(tree_item_i* pItem,BOOL *pbHandled); @endcode
#define  XE_TREE_TEMP_DESTROY            123 

/// @brief ��Ԫ��,��ģ��,����������.
/// @code  int CALLBACK OnTreeTemplateAdjustCoordinate(tree_item_i* pItem,BOOL *pbHandled); @endcode
#define  XE_TREE_TEMP_ADJUST_COORDINATE  124  

/// @brief ��Ԫ��,������.
/// @code  int CALLBACK OnTreeDrawItem(HDRAW hDraw,tree_item_i* pItem,BOOL *pbHandled); @endcode
#define  XE_TREE_DRAWITEM                125  

/// @brief ��Ԫ��,��ѡ���¼�.
/// @code  int CALLBACK OnTreeSelect(int nItemID,BOOL *pbHandled); @endcode
/// @param nItemID  ��ID.
#define  XE_TREE_SELECT                 126

/// @brief ��Ԫ��,��չ�������¼�.
/// @code int CALLBACK OnTreeExpand(int id,BOOL bExpand,BOOL *pbHandled); @endcode
#define  XE_TREE_EXPAND                 127

/// @brief ��Ԫ��,�û������϶���, �ɶԲ���ֵ�޸�.
//  @code int CALLBACK OnTreeDragItemIng(tree_drag_item_i* pInfo, BOOL *pbHandled); @endcode 
#define XE_TREE_DRAG_ITEM_ING           128

/// @brief ��Ԫ��,�϶����¼�.
//  @code int CALLBACK OnTreeDragItem(tree_drag_item_i* pInfo, BOOL *pbHandled); @endcode 
#define XE_TREE_DRAG_ITEM               129

/// @brief �б���Ԫ��,��ģ�崴��.
/// @code  int CALLBACK OnListViewTemplateCreate(listView_item_i* pItem,BOOL *pbHandled); @endcode
#define  XE_LISTVIEW_TEMP_CREATE           141

/// @brief �б���Ԫ��,��ģ�崴������¼�.
/// @code  int CALLBACK OnListViewTemplateCreateEnd(listView_item_i* pItem,BOOL *pbHandled); @endcode
#define  XE_LISTVIEW_TEMP_CREATE_END           142

/// @brief �б���Ԫ��,��ģ������.
/// @code  int CALLBACK OnListViewTemplateDestroy(listView_item_i* pItem,BOOL *pbHandled); @endcode
#define  XE_LISTVIEW_TEMP_DESTROY           143

/// @brief �б���Ԫ��,��ģ���������.
/// @code  int CALLBACK OnListViewTemplateAdjustCoordinate(listView_item_i* pItem,BOOL *pbHandled); @endcode
#define  XE_LISTVIEW_TEMP_ADJUST_COORDINATE   144

/// @brief �б���Ԫ��,�Ի���.
/// @code int CALLBACK OnListViewDrawItem(HDRAW hDraw,listView_item_i* pItem,BOOL *pbHandled);  @endcode
#define  XE_LISTVIEW_DRAWITEM              145

/// @brief �б���Ԫ��,��ѡ���¼�.
/// @code int CALLBACK OnListViewSelect(int iGroup,int iItem,BOOL *pbHandled); @endcode
#define  XE_LISTVIEW_SELECT            146

/// @brief �б���Ԫ��,��չ�������¼�.
/// @code int CALLBACK OnListViewExpand(int iGroup,BOOL bExpand,BOOL *pbHandled); @endcode
#define  XE_LISTVIEW_EXPAND         147


/// @brief ��������Ԫ�� ��ֵ�ı��¼�
/// @code   int CALLBACK OnPGridValueChange(int nItemID,BOOL *pbHandled); @endcode
/// @param  nItemID  ��ID.
#define  XE_PGRID_VALUE_CHANGE     151

//int CALLBACK OnPGridItemSet(int nItemID, BOOL *pbHandled);
#define XE_PGRID_ITEM_SET          152

//int CALLBACK OnPGridItemSelect(int nItemID, BOOL *pbHandled);
#define XE_PGRID_ITEM_SELECT         153  //��ѡ��


/// @brief ���ı�Ԫ�� �û��޸������¼�,ֻ�е��û�����ʱ�Żᴥ��,��Ҫ��������Ч, XRichEdit_EnableEvent_XE_RICHEDIT_CHANGE()��
/// XRichEdit_SetText()��XRichEdit_InsertString()���ᴥ�����¼�
/// @code   int CALLBACK OnRichEditChange(BOOL *pbHandled); @endcode
#define  XE_RICHEDIT_CHANGE       161

//int CALLBACK OnRichEditSet(BOOL *pbHandled);
#define XE_RICHEDIT_SET           162


/// @brief  TabBar��ǩ��ťѡ��ı��¼�
/// @code   int CALLBACK OnTabBarSelect(int iItem, BOOL *pbHandled); @endcode
/// @param  iItem  ��ǩλ������.
#define  XE_TABBAR_SELECT    221

/// @brief  TabBar��ǩ��ťɾ���¼�
/// @code   int CALLBACK OnTabBarDelete(int iItem, BOOL *pbHandled); @endcode
/// @param  iItem  ��ǩλ������.
#define  XE_TABBAR_DELETE    222

/// @brief  ����Ԫ�����ڸı��¼�, δ����
/// @code   int CALLBACK OnCalendarChange(BOOL *pbHandled); @endcode
#define  XE_MONTHCAL_CHANGE   231   //���� ���ڸı��¼�

/// @brief  ����ʱ��Ԫ��,���ݸı��¼�, δ����
/// @code   int CALLBACK OnDateTimeChange(BOOL *pbHandled); @endcode
#define  XE_DATETIME_CHANGE    241   //����ʱ��Ԫ��  �ı��¼�

/// @brief  ����ʱ��Ԫ��,����������Ƭ�¼�, δ����
/// @code   int CALLBACK OnDateTimePopupMonthCal(HWINDOW hMonthCalWnd,HELE hMonthCal,BOOL *pbHandled); @endcode
#define  XE_DATETIME_POPUP_MONTHCAL     242   //����ʱ��Ԫ��  ���������¼�

/// @brief  ����ʱ��Ԫ��,������������Ƭ�˳��¼�, δ����
/// @code   int CALLBACK OnDateTimeExitMonthCal(HWINDOW hMonthCalWnd,HELE hMonthCal,BOOL *pbHandled); @endcode
#define  XE_DATETIME_EXIT_MONTHCAL      243   //����ʱ��Ԫ��  �˳������¼�

/// @brief  �ļ��Ϸ��¼�.
/// @code   int CALLBACK OnDropFiles(HDROP hDropInfo, BOOL *pbHandled); @endcode
#define  XE_DROPFILES                 250  

#define  XE_LISTVIEW_DRAG_INSERT
#define  XE_PANE_LOACK
#define  XE_PANE_DOCK
#define  XE_PANE_FLOAT
#define  XE_EDIT_CHANGE

///@}

///////////////////////////////////////////////////////////////////////////////////
/////////////�¼�ע��//////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////
#define XC_PARAM_int            1
#define XC_PARAM_uint           2
#define XC_PARAM_BOOL           3
#define XC_PARAM_CHAR           4
#define XC_PARAM_BYTE           5
#define XC_PARAM_HXCGUI         6
#define XC_PARAM_HWINDOW        7
#define XC_PARAM_HELE           8
#define XC_PARAM_HMENUX         9
#define XC_PARAM_HIMAGE         10
#define XC_PARAM_HDRAW          11
#define XC_PARAM_P_RECT         12
#define XC_PARAM_P_POINT        13
#define XC_PARAM_P_SIZE         14
#define XC_PARAM_P_BOOL         15
#define XC_PARAM_P_listBox_item_i      16
#define XC_PARAM_P_list_header_item_i  17
#define XC_PARAM_P_list_item_i         18
#define XC_PARAM_P_listView_item_i     19
#define XC_PARAM_P_tree_item_i         20
#define XC_PARAM_P_menu_popupWnd       21
#define XC_PARAM_P_menu_drawBackground 22
#define XC_PARAM_P_menu_drawItem       23
#define XC_PARAM_HDROP   24
#define XC_PARAM_P_tree_dragItem_i     25


typedef int(CALLBACK *pFun_int_uint_uint_uint_bPtr)(UINT, WPARAM, LPARAM, BOOL*);
typedef int(CALLBACK *pFun_int_w_uint_uint_uint_bPtr)(HWINDOW, UINT, WPARAM, LPARAM, BOOL*); //����
typedef int(CALLBACK *pFun_int_e_uint_uint_uint_bPtr)(HELE, UINT, WPARAM, LPARAM, BOOL*); //Ԫ��
typedef int(CALLBACK *pFun_int_e_e_uint_uint_uint_bPtr)(HELE, HELE, UINT, WPARAM, LPARAM, BOOL*); //Ԫ��

typedef int(CALLBACK *pFun_int_uint_ptPtr_bPtr)(UINT, POINT*, BOOL*);
typedef int(CALLBACK *pFun_int_w_uint_ptPtr_bPtr)(HWINDOW, UINT, POINT*, BOOL*);
typedef int(CALLBACK *pFun_int_e_uint_ptPtr_bPtr)(HELE, UINT, POINT*, BOOL*);
typedef int(CALLBACK *pFun_int_e_e_uint_ptPtr_bPtr)(HELE, HELE, UINT, POINT*, BOOL*);

typedef int(CALLBACK *pFun_int_hDraw_bPtr)(HDRAW, BOOL*);
typedef int(CALLBACK *pFun_int_w_hDraw_bPtr)(HWINDOW, HDRAW, BOOL*);
typedef int(CALLBACK *pFun_int_e_hDraw_bPtr)(HELE, HDRAW, BOOL*);
typedef int(CALLBACK *pFun_int_e_e_hDraw_bPtr)(HELE, HELE, HDRAW, BOOL*);

typedef int(CALLBACK *pFun_int_bPtr)(BOOL*);
typedef int(CALLBACK *pFun_int_w_bPtr)(HWINDOW, BOOL*);
typedef int(CALLBACK *pFun_int_e_bPtr)(HELE, BOOL*);
typedef int(CALLBACK *pFun_int_e_e_bPtr)(HELE, HELE, BOOL*);
typedef int(CALLBACK *pFun_int_e_e_e_bPtr)(HELE, HELE, HELE, BOOL*);

typedef int(CALLBACK *pFun_int_w_e_bPtr)(HWINDOW, HELE, BOOL*);
typedef int(CALLBACK *pFun_int_w_w_e_bPtr)(HWINDOW, HWINDOW, HELE, BOOL*);
typedef int(CALLBACK *pFun_int_e_w_e_bPtr)(HELE, HWINDOW, HELE, BOOL*);
typedef int(CALLBACK *pFun_int_e_e_w_e_bPtr)(HELE, HELE, HWINDOW, HELE, BOOL*);

typedef int(CALLBACK *pFun_int_uint_sizePtr_bPtr)(UINT,SIZE*,BOOL*);
typedef int(CALLBACK *pFun_int_w_uint_sizePtr_bPtr)(HWINDOW, UINT,SIZE*,BOOL*);


typedef int(CALLBACK *pFun_int_hMenu_bPtr)(HMENUX, BOOL*);
typedef int(CALLBACK *pFun_int_w_hMenu_bPtr)(HWINDOW, HMENUX, BOOL*);
typedef int(CALLBACK *pFun_int_e_hMenu_bPtr)(HELE, HMENUX, BOOL*);
typedef int(CALLBACK *pFun_int_e_e_hMenu_bPtr)(HELE, HELE, HMENUX, BOOL*);

typedef int(CALLBACK *pFun_int_hMenu_pMenuPopupWnd_bPtr)(HMENUX, menu_popupWnd_i*, BOOL*);
typedef int(CALLBACK *pFun_int_w_hMenu_pMenuPopupWnd_bPtr)(HWINDOW, HMENUX, menu_popupWnd_i*, BOOL*);
typedef int(CALLBACK *pFun_int_e_hMenu_pMenuPopupWnd_bPtr)(HELE, HMENUX, menu_popupWnd_i*, BOOL*);
typedef int(CALLBACK *pFun_int_e_e_hMenu_pMenuPopupWnd_bPtr)(HELE, HELE, HMENUX, menu_popupWnd_i*, BOOL*);

typedef int(CALLBACK *pFun_int_hDraw_pMenuDrawBackground_bPtr)(HDRAW, menu_drawBackground_i*, BOOL*);
typedef int(CALLBACK *pFun_int_w_hDraw_pMenuDrawBackground_bPtr)(HWINDOW, HDRAW, menu_drawBackground_i*, BOOL*);
typedef int(CALLBACK *pFun_int_e_hDraw_pMenuDrawBackground_bPtr)(HELE, HDRAW, menu_drawBackground_i*, BOOL*);
typedef int(CALLBACK *pFun_int_e_e_hDraw_pMenuDrawBackground_bPtr)(HELE, HELE, HDRAW, menu_drawBackground_i*, BOOL*);

typedef int(CALLBACK *pFun_int_hDraw_pMenuDrawItem_bPtr)(HDRAW, menu_drawItem_i*, BOOL*);
typedef int(CALLBACK *pFun_int_w_hDraw_pMenuDrawItem_bPtr)(HWINDOW, HDRAW, menu_drawItem_i*, BOOL*);
typedef int(CALLBACK *pFun_int_e_hDraw_pMenuDrawItem_bPtr)(HELE, HDRAW, menu_drawItem_i*, BOOL*);
typedef int(CALLBACK *pFun_int_e_e_hDraw_pMenuDrawItem_bPtr)(HELE, HELE, HDRAW, menu_drawItem_i*, BOOL*);

typedef int(CALLBACK *pFun_int_uint_uint_bPtr)(WPARAM, LPARAM, BOOL*); //Ԫ��
typedef int(CALLBACK *pFun_int_w_uint_uint_bPtr)(HWINDOW, WPARAM, LPARAM, BOOL*);

typedef int(CALLBACK *pFun_int_uint_bPtr)(UINT, BOOL*);

typedef int(CALLBACK *pFun_int_int_int_bPtr)(int, int, BOOL*);
typedef int(CALLBACK *pFun_int_e_int_int_bPtr)(HELE, int, int, BOOL*);
typedef int(CALLBACK *pFun_int_e_e_int_int_bPtr)(HELE, HELE, int, int, BOOL*);

typedef int(CALLBACK *pFun_int_int_bPtr)(int, BOOL*);
typedef int(CALLBACK *pFun_int_w_int_bPtr)(HWINDOW, int, BOOL*);
typedef int(CALLBACK *pFun_int_e_int_bPtr)(HELE, int, BOOL*);
typedef int(CALLBACK *pFun_int_e_e_int_bPtr)(HELE, HELE, int, BOOL*);

typedef int(CALLBACK *pFun_int_pListBoxItem_bPtr)(listBox_item_i*, BOOL*);
typedef int(CALLBACK *pFun_int_e_pListBoxItem_bPtr)(HELE, listBox_item_i*, BOOL*);
typedef int(CALLBACK *pFun_int_e_e_pListBoxItem_bPtr)(HELE, HELE, listBox_item_i*, BOOL*);

typedef int(CALLBACK *pFun_int_hDraw_pListBoxItem_bPtr)(HDRAW, listBox_item_i*, BOOL*);
typedef int(CALLBACK *pFun_int_e_hDraw_pListBoxItem_bPtr)(HELE, HDRAW, listBox_item_i*, BOOL*);
typedef int(CALLBACK *pFun_int_e_e_hDraw_pListBoxItem_bPtr)(HELE, HELE, HDRAW, listBox_item_i*, BOOL*);

typedef int(CALLBACK *pFun_int_pListItem_bPtr)(list_item_i*, BOOL*);
typedef int(CALLBACK *pFun_int_e_pListItem_bPtr)(HELE, list_item_i*, BOOL*);
typedef int(CALLBACK *pFun_int_e_e_pListItem_bPtr)(HELE, HELE, list_item_i*, BOOL*);

typedef int(CALLBACK *pFun_int_hDraw_pListItem_bPtr)(HDRAW,list_item_i*, BOOL*);
typedef int(CALLBACK *pFun_int_e_hDraw_pListItem_bPtr)(HELE, HDRAW,list_item_i*, BOOL*);
typedef int(CALLBACK *pFun_int_e_e_hDraw_pListItem_bPtr)(HELE, HELE, HDRAW,list_item_i*, BOOL*);

typedef int(CALLBACK *pFun_int_hDraw_pListHeaderItem_bPtr)(HDRAW,list_header_item_i*, BOOL*);
typedef int(CALLBACK *pFun_int_e_hDraw_pListHeaderItem_bPtr)(HELE, HDRAW,list_header_item_i*, BOOL*);
typedef int(CALLBACK *pFun_int_e_e_hDraw_pListHeaderItem_bPtr)(HELE, HELE, HDRAW,list_header_item_i*, BOOL*);

typedef int(CALLBACK *pFun_int_pTreeItem_bPtr)(tree_item_i*, BOOL*);
typedef int(CALLBACK *pFun_int_e_pTreeItem_bPtr)(HELE, tree_item_i*, BOOL*);
typedef int(CALLBACK *pFun_int_e_e_pTreeItem_bPtr)(HELE, HELE, tree_item_i*, BOOL*);

typedef int(CALLBACK *pFun_int_hDraw_pTreeItem_bPtr)(HDRAW,tree_item_i*, BOOL*);
typedef int(CALLBACK *pFun_int_e_hDraw_pTreeItem_bPtr)(HELE, HDRAW,tree_item_i*, BOOL*);
typedef int(CALLBACK *pFun_int_e_e_hDraw_pTreeItem_bPtr)(HELE, HELE, HDRAW,tree_item_i*, BOOL*);

typedef int(CALLBACK *pFun_int_pTreeDragItem_bPtr)(tree_drag_item_i*, BOOL*);
typedef int(CALLBACK *pFun_int_e_pTreeDragItem_bPtr)(HELE, tree_drag_item_i*, BOOL*);
typedef int(CALLBACK *pFun_int_e_e_pTreeDragItem_bPtr)(HELE, HELE, tree_drag_item_i*, BOOL*);

typedef int(CALLBACK *pFun_int_pListViewItem_bPtr)(listView_item_i*, BOOL*);
typedef int(CALLBACK *pFun_int_e_pListViewItem_bPtr)(HELE, listView_item_i*, BOOL*);
typedef int(CALLBACK *pFun_int_e_e_pListViewItem_bPtr)(HELE, HELE, listView_item_i*, BOOL*);

typedef int(CALLBACK *pFun_int_hDraw_pListViewItem_bPtr)(HDRAW,listView_item_i*, BOOL*);
typedef int(CALLBACK *pFun_int_e_hDraw_pListViewItem_bPtr)(HELE, HDRAW, listView_item_i*, BOOL*);
typedef int(CALLBACK *pFun_int_e_e_hDraw_pListViewItem_bPtr)(HELE, HELE, HDRAW, listView_item_i*, BOOL*);

typedef int(CALLBACK *pFun_int_e_uint_uint_bPtr)(HELE, WPARAM, LPARAM, BOOL*);
typedef int(CALLBACK *pFun_int_e_e_uint_uint_bPtr)(HELE, HELE, WPARAM, LPARAM, BOOL*);

typedef int(CALLBACK *pFun_int_hDrop_bPtr)(HDROP, BOOL*);
typedef int(CALLBACK *pFun_int_w_hDrop_bPtr)(HWINDOW, HDROP, BOOL*);
typedef int(CALLBACK *pFun_int_e_hDrop_bPtr)(HELE, HDROP, BOOL*);
typedef int(CALLBACK *pFun_int_e_e_hDrop_bPtr)(HELE, HELE, HDROP, BOOL*);

class CEventBase
{
public:
	CEventBase(){ m_nEvent=XC_ID_ERROR; m_pFunCStyle=NULL; m_regType=XC_ID_ERROR; }
	UINT     m_nEvent;      //�¼�����
	void*    m_pFunCStyle;
	int      m_regType;   //ע������, 0:CPP,1:CPP1,2:CPP2

	virtual  int OnWndProc(HWINDOW hWindow, WPARAM wParam, LPARAM lParam, BOOL *pbHandled, UINT message = 0){ return 0; }
	virtual  int OnEleProc(HELE hEle, HELE hEventEle, WPARAM wParam, LPARAM lParam, BOOL *pbHandled, UINT nEvent = 0){ return 0; }
	virtual  void Release(){ delete this; }
	virtual  void* GetThis(){ return NULL; }
	virtual  char* GetFunName(){ return NULL; }
};

template<typename T_ClassName>
class CEventType
{
public:
	typedef int(T_ClassName::*pFun_int_uint_uint_uint_bPtr)(UINT, WPARAM, LPARAM, BOOL*); //����
	typedef int(T_ClassName::*pFun_int_w_uint_uint_uint_bPtr)(HWINDOW, UINT, WPARAM, LPARAM, BOOL*); //����
	typedef int(T_ClassName::*pFun_int_e_uint_uint_uint_bPtr)(HELE, UINT, WPARAM, LPARAM, BOOL*); //Ԫ��
	typedef int(T_ClassName::*pFun_int_e_e_uint_uint_uint_bPtr)(HELE, HELE, UINT, WPARAM, LPARAM, BOOL*); //Ԫ��

	typedef int(T_ClassName::*pFun_int_uint_ptPtr_bPtr)(UINT, POINT*, BOOL*);
	typedef int(T_ClassName::*pFun_int_w_uint_ptPtr_bPtr)(HWINDOW, UINT, POINT*, BOOL*);

	typedef int(T_ClassName::*pFun_int_hDraw_bPtr)(HDRAW, BOOL*);
	typedef int(T_ClassName::*pFun_int_w_hDraw_bPtr)(HWINDOW, HDRAW, BOOL*);
	typedef int(T_ClassName::*pFun_int_e_hDraw_bPtr)(HELE, HDRAW, BOOL*);
	typedef int(T_ClassName::*pFun_int_e_e_hDraw_bPtr)(HELE, HELE, HDRAW, BOOL*);

	typedef int(T_ClassName::*pFun_int_bPtr)(BOOL*);
	typedef int(T_ClassName::*pFun_int_e_bPtr)(HELE, BOOL*);
	typedef int(T_ClassName::*pFun_int_e_e_bPtr)(HELE, HELE, BOOL*);
	typedef int(T_ClassName::*pFun_int_e_e_e_bPtr)(HELE, HELE, HELE, BOOL*);

	typedef int(T_ClassName::*pFun_intuint_ptPtr_bPtr)(UINT,POINT*,BOOL*);
	typedef int(T_ClassName::*pFun_int_e_uint_ptPtr_bPtr)(HELE, UINT, POINT*, BOOL*);
	typedef int(T_ClassName::*pFun_int_e_e_uint_ptPtr_bPtr)(HELE, HELE, UINT, POINT*, BOOL*);

	typedef int(T_ClassName::*pFun_int_int_bPtr)(int, BOOL*);
	typedef int(T_ClassName::*pFun_int_e_int_bPtr)(HELE, int, BOOL*);
	typedef int(T_ClassName::*pFun_int_e_e_int_bPtr)(HELE, HELE, int, BOOL*);

	typedef int(T_ClassName::*pFun_int_w_e_bPtr)(HWINDOW, HELE, BOOL*);
	typedef int(T_ClassName::*pFun_int_e_w_e_bPtr)(HELE, HWINDOW, HELE, BOOL*);
	typedef int(T_ClassName::*pFun_int_e_e_w_e_bPtr)(HELE, HELE, HWINDOW, HELE, BOOL*);

	typedef int(T_ClassName::*pFun_int_uint_bPtr)(UINT, BOOL*);

	typedef int(T_ClassName::*pFun_int_int_int_bPtr)(int, int, BOOL*);

	typedef int(T_ClassName::*pFun_int_uint_uint_bPtr)(WPARAM, LPARAM, BOOL*);
	typedef int(T_ClassName::*pFun_int_e_uint_uint_bPtr)(HELE, WPARAM, LPARAM, BOOL*);
	typedef int(T_ClassName::*pFun_int_w_uint_uint_bPtr)(HWINDOW, WPARAM, LPARAM, BOOL*);

	typedef int(T_ClassName::*pFun_int_uint_sizePtr_bPtr)(UINT,SIZE*,BOOL*);
	typedef int(T_ClassName::*pFun_int_w_uint_sizePtr_bPtr)(HWINDOW,UINT,SIZE*,BOOL*);

	typedef int(T_ClassName::*pFun_int_pListBoxItem_bPtr)(listBox_item_i*, BOOL*);
	typedef int(T_ClassName::*pFun_int_e_pListBoxItem_bPtr)(HELE, listBox_item_i*, BOOL*);
	typedef int(T_ClassName::*pFun_int_e_e_pListBoxItem_bPtr)(HELE, HELE, listBox_item_i*, BOOL*);

	typedef int(T_ClassName::*pFun_int_hDraw_pListBoxItem_bPtr)(HDRAW, listBox_item_i*, BOOL*);

	typedef int(T_ClassName::*pFun_int_pListItem_bPtr)(list_item_i*, BOOL*);
	typedef int(T_ClassName::*pFun_int_hDraw_pListItem_bPtr)(HDRAW,list_item_i*, BOOL*);

	typedef int(T_ClassName::*pFun_int_hDraw_pListHeaderItem_bPtr)(HDRAW,list_header_item_i*, BOOL*);
	typedef int(T_ClassName::*pFun_int_pListHeaderItem_bPtr)(list_header_item_i*, BOOL*);

	typedef int(T_ClassName::*pFun_int_pListHeaderItem_bPtr)(list_header_item_i*, BOOL*);

	typedef int(T_ClassName::*pFun_int_pTreeItem_bPtr)(tree_item_i*, BOOL*);
	typedef int(T_ClassName::*pFun_int_hDraw_pTreeItem_bPtr)(HDRAW,tree_item_i*, BOOL*);

	typedef int(T_ClassName::*pFun_int_pTreeDragItem_bPtr)(tree_drag_item_i*, BOOL*);
	typedef int(T_ClassName::*pFun_int_e_pTreeDragItem_bPtr)(HELE, tree_drag_item_i*, BOOL*);
	typedef int(T_ClassName::*pFun_int_e_e_pTreeDragItem_bPtr)(HELE, HELE, tree_drag_item_i*, BOOL*);

	typedef int(T_ClassName::*pFun_int_pListViewItem_bPtr)(listView_item_i*, BOOL*);
	typedef int(T_ClassName::*pFun_int_hDraw_pListViewItem_bPtr)(HDRAW,listView_item_i*, BOOL*);

	typedef int(T_ClassName::*pFun_int_hMenu_bPtr)(HMENUX, BOOL*);
	typedef int(T_ClassName::*pFun_int_w_hMenu_bPtr)(HWINDOW, HMENUX, BOOL*);
	typedef int(T_ClassName::*pFun_int_e_hMenu_bPtr)(HELE, HMENUX, BOOL*);

	typedef int(T_ClassName::*pFun_int_hMenu_pMenuPopupWnd_bPtr)(HMENUX, menu_popupWnd_i*, BOOL*);
	typedef int(T_ClassName::*pFun_int_hDraw_pMenuDrawItem_bPtr)(HDRAW,menu_drawItem_i*,BOOL*);
	typedef int(T_ClassName::*pFun_int_hDraw_pMenuDrawBackground_bPtr)(HDRAW,menu_drawBackground_i*, BOOL*);

	typedef int(T_ClassName::*pFun_int_hDrop_bPtr)(HDROP, BOOL*);
	typedef int(T_ClassName::*pFun_int_w_hDrop_bPtr)(HWINDOW, HDROP, BOOL*);
	typedef int(T_ClassName::*pFun_int_e_hDrop_bPtr)(HELE, HDROP, BOOL*);
	typedef int(T_ClassName::*pFun_int_e_e_hDrop_bPtr)(HELE, HELE, HDROP, BOOL*);
};


template<typename T_ClassName>
class CEventHandleWnd : public CEventType < T_ClassName > //�����¼��������¼������Զ�ƥ��
{
public:
	int      m_nRegType;
	HWINDOW  m_hWindow;
	UINT     m_nMessage;
	WPARAM   m_wParam;
	LPARAM   m_lParam;
	BOOL  Handle(BOOL *pbHandled, T_ClassName* pThis, pFun_int_w_hDraw_bPtr pMember){
		return (pThis->*pMember)(m_hWindow, (HDRAW)m_wParam, pbHandled);
	}
	BOOL  Handle(BOOL *pbHandled, T_ClassName* pThis, pFun_int_uint_uint_uint_bPtr pMember){
		return (pThis->*pMember)(m_nMessage, m_wParam, m_lParam, pbHandled);
	}
	BOOL  Handle(BOOL *pbHandled, T_ClassName* pThis, pFun_int_uint_ptPtr_bPtr pMember){
		return (pThis->*pMember)(m_wParam, (POINT*)m_lParam, pbHandled);
	}
	BOOL  Handle(BOOL *pbHandled, T_ClassName* pThis, pFun_int_hDraw_bPtr pMember){
		return (pThis->*pMember)((HDRAW)m_wParam, pbHandled);
	}
	BOOL  Handle(BOOL *pbHandled, T_ClassName* pThis, pFun_int_bPtr pMember){
		return (pThis->*pMember)(pbHandled);
	}
	BOOL  Handle(BOOL *pbHandled, T_ClassName* pThis, pFun_int_uint_sizePtr_bPtr pMember){
		return (pThis->*pMember)(m_wParam,(SIZE*)m_lParam, pbHandled);
	}
	BOOL  Handle(BOOL *pbHandled, T_ClassName* pThis, pFun_int_w_uint_sizePtr_bPtr pMember){
		return (pThis->*pMember)(m_hWindow,m_wParam,(SIZE*)m_lParam, pbHandled);
	}
	BOOL  Handle(BOOL *pbHandled, T_ClassName* pThis, pFun_int_uint_uint_bPtr pMember){
		return (pThis->*pMember)(m_wParam, m_lParam, pbHandled);
	}
	BOOL  Handle(BOOL *pbHandled, T_ClassName* pThis, pFun_int_w_uint_uint_bPtr pMember){
		return (pThis->*pMember)(m_hWindow, m_wParam, m_lParam, pbHandled);
	}
	BOOL  Handle(BOOL *pbHandled, T_ClassName* pThis, pFun_int_uint_bPtr pMember){
		return (pThis->*pMember)(m_wParam, pbHandled);
	}
	BOOL  Handle(BOOL *pbHandled, T_ClassName* pThis, pFun_int_int_bPtr pMember){
		return (pThis->*pMember)((int)m_wParam, pbHandled);
	}
	BOOL  Handle(BOOL *pbHandled, T_ClassName* pThis, pFun_int_hMenu_bPtr pMember){
		return (pThis->*pMember)((HMENUX)m_wParam, pbHandled);
	}
	BOOL  Handle(BOOL *pbHandled, T_ClassName* pThis, pFun_int_w_hMenu_bPtr pMember){
		return (pThis->*pMember)(m_hWindow, (HMENUX)m_wParam, pbHandled);
	}
	BOOL  Handle(BOOL *pbHandled, T_ClassName* pThis, pFun_int_hMenu_pMenuPopupWnd_bPtr pMember){
		return (pThis->*pMember)((HMENUX)m_wParam, (menu_popupWnd_i*)m_lParam, pbHandled);
	}
	BOOL  Handle(BOOL *pbHandled, T_ClassName* pThis, pFun_int_hDraw_pMenuDrawItem_bPtr pMember){
		return (pThis->*pMember)((HDRAW)m_wParam, (menu_drawItem_i*)m_lParam, pbHandled);
	}
	BOOL  Handle(BOOL *pbHandled, T_ClassName* pThis, pFun_int_w_hDraw_pMenuDrawItem_bPtr pMember){
		return (pThis->*pMember)(m_hWindow,(HDRAW)m_wParam, (menu_drawItem_i*)m_lParam, pbHandled);
	}
	BOOL  Handle(BOOL *pbHandled, T_ClassName* pThis, pFun_int_w_uint_ptPtr_bPtr pMember){
		return (pThis->*pMember)(m_hWindow,(int)m_wParam, (POINT*)m_lParam, pbHandled);
	}
	BOOL  Handle(BOOL *pbHandled, T_ClassName* pThis, pFun_int_hDraw_pMenuDrawBackground_bPtr pMember){
		return (pThis->*pMember)((HDRAW)m_wParam, (menu_drawBackground_i*)m_lParam, pbHandled);
	}
	BOOL  Handle(BOOL *pbHandled, T_ClassName* pThis, pFun_int_hDrop_bPtr pMember){
		return (pThis->*pMember)((HDROP)m_wParam, pbHandled);
	}
	BOOL  Handle(BOOL *pbHandled, T_ClassName* pThis, pFun_int_w_hDrop_bPtr pMember){
		return (pThis->*pMember)(m_hWindow,(HDROP)m_wParam, pbHandled);
	}
	BOOL  Handle(BOOL *pbHandled, T_ClassName* pThis, pFun_int_w_e_bPtr pMember){
		if(0==m_nRegType)
			return (pThis->*pMember)((HWINDOW)m_wParam,(HELE)m_lParam, pbHandled);
		if(1==m_nRegType)
			return (pThis->*pMember)(m_hWindow,(HELE)m_wParam, pbHandled);
		return FALSE;
	}
};

template<typename T_ClassName>
class CEventHandleEle : public CEventType < T_ClassName > //�����¼��������¼������Զ�ƥ��
{
public:
	int     m_nRegType;
	HELE    m_hEle; 
	HELE    m_hEventEle; 
	UINT    m_nEvent;
	WPARAM  m_wParam;
	LPARAM  m_lParam;

	BOOL  Handle(BOOL *pbHandled, T_ClassName* pThis, pFun_int_e_uint_uint_uint_bPtr pMember){
		return (pThis->*pMember)(m_hEventEle, m_nEvent, m_wParam, m_lParam, pbHandled);
	}
	BOOL  Handle(BOOL *pbHandled, T_ClassName* pThis, pFun_int_hDraw_bPtr pMember){
		if(0==m_nRegType)
			return (pThis->*pMember)((HDRAW)m_wParam, pbHandled);
		return FALSE;
	}
	BOOL  Handle(BOOL *pbHandled, T_ClassName* pThis, pFun_int_e_hDraw_bPtr pMember){
		if(0==m_nRegType)
			return (pThis->*pMember)((HELE)m_wParam,(HDRAW)m_lParam, pbHandled);
		if(1==m_nRegType)
			return (pThis->*pMember)(m_hEventEle, (HDRAW)m_wParam, pbHandled);
		return FALSE;
	}
	BOOL  Handle(BOOL *pbHandled, T_ClassName* pThis, pFun_int_e_e_hDraw_bPtr pMember){
		if(2==m_nRegType)
			return (pThis->*pMember)(m_hEle, m_hEventEle, (HDRAW)m_wParam, pbHandled);
		return FALSE;
	}
	BOOL  Handle(BOOL *pbHandled, T_ClassName* pThis, pFun_int_bPtr pMember){
		if(0==m_nRegType)
			return (pThis->*pMember)(pbHandled);
		return FALSE;
	}
	BOOL  Handle(BOOL *pbHandled, T_ClassName* pThis, pFun_int_e_bPtr pMember){
		if(0==m_nRegType)
			return (pThis->*pMember)((HELE)m_wParam, pbHandled);
		if(1==m_nRegType)
			return (pThis->*pMember)(m_hEventEle, pbHandled);
		return FALSE;
	}
	BOOL  Handle(BOOL *pbHandled, T_ClassName* pThis, pFun_int_e_e_bPtr pMember){
		if(0==m_nRegType)
			return (pThis->*pMember)((HELE)m_wParam, (HELE)m_lParam, pbHandled);;
		if(1==m_nRegType)
			return (pThis->*pMember)(m_hEventEle, (HELE)m_wParam, pbHandled);
		if(2==m_nRegType)
			return (pThis->*pMember)(m_hEle, m_hEventEle, pbHandled);
		return FALSE;
	}
	BOOL  Handle(BOOL *pbHandled, T_ClassName* pThis, pFun_int_e_e_e_bPtr pMember){
		if(1==m_nRegType)
			return (pThis->*pMember)(m_hEventEle, (HELE)m_wParam, (HELE)m_lParam, pbHandled);
		if(2==m_nRegType)
			return (pThis->*pMember)(m_hEle, m_hEventEle, (HELE)m_wParam, pbHandled);
		return FALSE;
	}
	BOOL  Handle(BOOL *pbHandled, T_ClassName* pThis, pFun_int_uint_ptPtr_bPtr pMember){
		return (pThis->*pMember)(m_wParam, (POINT*)m_lParam, pbHandled);
	}
	BOOL  Handle(BOOL *pbHandled, T_ClassName* pThis, pFun_int_e_uint_ptPtr_bPtr pMember){
		return (pThis->*pMember)(m_hEventEle, m_wParam, (POINT*)m_lParam, pbHandled);
	}
	BOOL  Handle(BOOL *pbHandled, T_ClassName* pThis, pFun_int_e_e_uint_ptPtr_bPtr pMember){
		return (pThis->*pMember)(m_hEle, m_hEventEle, m_wParam, (POINT*)m_lParam, pbHandled);
	}
	BOOL  Handle(BOOL *pbHandled, T_ClassName* pThis, pFun_int_int_int_bPtr pMember){
		return (pThis->*pMember)((int)m_wParam, (int)m_lParam, pbHandled);
	}
	BOOL  Handle(BOOL *pbHandled, T_ClassName* pThis, pFun_int_int_bPtr pMember){
		return (pThis->*pMember)((int)m_wParam, pbHandled);
	}
	BOOL  Handle(BOOL *pbHandled, T_ClassName* pThis, pFun_int_w_e_bPtr pMember){
		return (pThis->*pMember)((HWINDOW)m_wParam, (HELE)m_lParam, pbHandled);
	}
	BOOL  Handle(BOOL *pbHandled, T_ClassName* pThis, pFun_int_e_w_e_bPtr pMember){
		return (pThis->*pMember)(m_hEventEle,(HWINDOW)m_wParam, (HELE)m_lParam, pbHandled);
	}
	BOOL  Handle(BOOL *pbHandled,  T_ClassName* pThis, pFun_int_e_e_w_e_bPtr pMember){
		return (pThis->*pMember)(m_hEle, m_hEventEle,(HWINDOW)m_wParam, (HELE)m_lParam, pbHandled);
	}
	BOOL  Handle(BOOL *pbHandled, T_ClassName* pThis, pFun_int_uint_bPtr pMember){
		return (pThis->*pMember)(m_wParam, pbHandled);
	}
	BOOL  Handle(BOOL *pbHandled, T_ClassName* pThis, pFun_int_uint_uint_bPtr pMember){
		return (pThis->*pMember)(m_wParam, m_lParam, pbHandled);
	}
	BOOL  Handle(BOOL *pbHandled, T_ClassName* pThis, pFun_int_e_uint_uint_bPtr pMember){
		return (pThis->*pMember)(m_hEventEle, m_wParam, m_lParam, pbHandled);
	}
	BOOL  Handle(BOOL *pbHandled, T_ClassName* pThis, pFun_int_pListBoxItem_bPtr pMember){
		return (pThis->*pMember)((listBox_item_i*)m_wParam, pbHandled);
	}
	BOOL  Handle(BOOL *pbHandled, T_ClassName* pThis, pFun_int_e_pListBoxItem_bPtr pMember){
		return (pThis->*pMember)(m_hEventEle,(listBox_item_i*)m_wParam, pbHandled);
	}
	BOOL  Handle(BOOL *pbHandled, T_ClassName* pThis, pFun_int_e_e_pListBoxItem_bPtr pMember){
		return (pThis->*pMember)(m_hEle, m_hEventEle, (listBox_item_i*)m_wParam, pbHandled);
	}
	BOOL  Handle(BOOL *pbHandled, T_ClassName* pThis, pFun_int_hDraw_pListBoxItem_bPtr pMember){
		return (pThis->*pMember)((HDRAW)m_wParam,(listBox_item_i*)m_lParam, pbHandled);
	}
	BOOL  Handle(BOOL *pbHandled, T_ClassName* pThis, pFun_int_pListItem_bPtr pMember){
		return (pThis->*pMember)((list_item_i*)m_wParam, pbHandled);
	}
	BOOL  Handle(BOOL *pbHandled, T_ClassName* pThis, pFun_int_hDraw_pListItem_bPtr pMember){
		return (pThis->*pMember)((HDRAW)m_wParam,(list_item_i*)m_lParam, pbHandled);
	}
	BOOL  Handle(BOOL *pbHandled, T_ClassName* pThis, pFun_int_hDraw_pListHeaderItem_bPtr pMember){
		return (pThis->*pMember)((HDRAW)m_wParam,(list_header_item_i*)m_lParam, pbHandled);
	}
	BOOL  Handle(BOOL *pbHandled, T_ClassName* pThis, pFun_int_pListHeaderItem_bPtr pMember){
		return (pThis->*pMember)((list_header_item_i*)m_wParam, pbHandled);
	}

	BOOL  Handle(BOOL *pbHandled, T_ClassName* pThis, pFun_int_pTreeItem_bPtr pMember){
		return (pThis->*pMember)((tree_item_i*)m_wParam, pbHandled);
	}
	BOOL  Handle(BOOL *pbHandled, T_ClassName* pThis, pFun_int_hDraw_pTreeItem_bPtr pMember){
		return (pThis->*pMember)((HDRAW)m_wParam,(tree_item_i*)m_lParam, pbHandled);
	}
	BOOL  Handle(BOOL *pbHandled, T_ClassName* pThis, pFun_int_pTreeDragItem_bPtr pMember){
		return (pThis->*pMember)((tree_drag_item_i*)m_wParam, pbHandled);
	}
	BOOL  Handle(BOOL *pbHandled, T_ClassName* pThis, pFun_int_e_pTreeDragItem_bPtr pMember){
		return (pThis->*pMember)(m_hEventEle,(tree_drag_item_i*)m_wParam, pbHandled);
	}
	BOOL  Handle(BOOL *pbHandled, T_ClassName* pThis, pFun_int_e_e_pTreeDragItem_bPtr pMember){
		return (pThis->*pMember)(m_hEle,m_hEventEle,(tree_drag_item_i*)m_wParam, pbHandled);
	}
	BOOL  Handle(BOOL *pbHandled, T_ClassName* pThis, pFun_int_pListViewItem_bPtr pMember){
		return (pThis->*pMember)((listView_item_i*)m_wParam, pbHandled);
	}
	BOOL  Handle(BOOL *pbHandled, T_ClassName* pThis, pFun_int_hDraw_pListViewItem_bPtr pMember){
		return (pThis->*pMember)((HDRAW)m_wParam,(listView_item_i*)m_lParam, pbHandled);
	}
	BOOL  Handle(BOOL *pbHandled, T_ClassName* pThis, pFun_int_e_int_bPtr pMember){
		return (pThis->*pMember)(m_hEventEle, m_wParam, pbHandled);
	}
	BOOL  Handle(BOOL *pbHandled, T_ClassName* pThis, pFun_int_e_e_uint_uint_uint_bPtr pMember){
		return (pThis->*pMember)(m_hEle, m_hEventEle, m_nEvent, m_wParam, m_lParam, pbHandled);
	}
	BOOL  Handle(BOOL *pbHandled, T_ClassName* pThis, pFun_int_e_e_int_bPtr pMember){
		return (pThis->*pMember)(m_hEle, m_hEventEle, m_wParam, pbHandled);
	}
	BOOL  Handle(BOOL *pbHandled, T_ClassName* pThis, pFun_int_hDraw_pMenuDrawBackground_bPtr pMember){
		return (pThis->*pMember)((HDRAW)m_wParam,(menu_drawBackground_i*)m_lParam, pbHandled);
	}
	BOOL  Handle(BOOL *pbHandled, T_ClassName* pThis, pFun_int_hDraw_pMenuDrawItem_bPtr pMember){
		return (pThis->*pMember)((HDRAW)m_wParam,(menu_drawItem_i*)m_lParam, pbHandled);
	}
	BOOL  Handle(BOOL *pbHandled, T_ClassName* pThis, pFun_int_hMenu_bPtr pMember){
		return (pThis->*pMember)((HMENUX)m_wParam, pbHandled);
	}
	BOOL  Handle(BOOL *pbHandled, T_ClassName* pThis, pFun_int_e_hMenu_bPtr pMember){
		return (pThis->*pMember)(m_hEventEle,(HMENUX)m_wParam, pbHandled);
	}
	BOOL  Handle(BOOL *pbHandled, T_ClassName* pThis, pFun_int_hMenu_pMenuPopupWnd_bPtr pMember){
		return (pThis->*pMember)((HMENUX)m_wParam, (menu_popupWnd_i*)m_lParam, pbHandled);
	}
	BOOL  Handle(BOOL *pbHandled, T_ClassName* pThis, pFun_int_hDrop_bPtr pMember){
		return (pThis->*pMember)((HDROP)m_wParam, pbHandled);
	}
	BOOL  Handle(BOOL *pbHandled, T_ClassName* pThis, pFun_int_e_hDrop_bPtr pMember){
		return (pThis->*pMember)(m_hEventEle,(HDROP)m_wParam, pbHandled);
	}
	BOOL  Handle(BOOL *pbHandled, T_ClassName* pThis, pFun_int_e_e_hDrop_bPtr pMember){
		return (pThis->*pMember)(m_hEle,m_hEventEle,(HDROP)m_wParam, pbHandled);
	}
};

//ʡ��1������֤
template<typename T_ClassName>
class CEventWndTest : public  CEventType < T_ClassName >
{
public:
	void  Test(UINT nEvent, pFun_int_uint_uint_uint_bPtr,BYTE* pArray){
		pArray[0]=XC_PARAM_uint;
		pArray[1]=XC_PARAM_uint;
		pArray[2]=XC_PARAM_uint;
	}
	void  Test(UINT nEvent, pFun_int_uint_ptPtr_bPtr,BYTE* pArray){
		pArray[0]=XC_PARAM_uint;
		pArray[1]=XC_PARAM_P_POINT;
	}
	void  Test(UINT nEvent, pFun_int_hDraw_bPtr,BYTE* pArray){
		pArray[0]=XC_PARAM_HDRAW;
	}
	void  Test(UINT nEvent, pFun_int_bPtr,BYTE* pArray){
	}
	void  Test(UINT nEvent, pFun_int_uint_sizePtr_bPtr,BYTE* pArray){
		pArray[0]=XC_PARAM_uint;
		pArray[1]=XC_PARAM_P_SIZE;
	}
	void  Test(UINT nEvent, pFun_int_uint_uint_bPtr,BYTE* pArray){
		pArray[0]=XC_PARAM_uint;
		pArray[1]=XC_PARAM_uint;
	}
	void  Test(UINT nEvent, pFun_int_uint_bPtr,BYTE* pArray){
		pArray[0]=XC_PARAM_uint;
	}
	void  Test(UINT nEvent, pFun_int_int_bPtr,BYTE* pArray){
		pArray[0]=XC_PARAM_int;
	}
	void  Test(UINT nEvent, pFun_int_hMenu_bPtr,BYTE* pArray){
		pArray[0]=XC_PARAM_HMENUX;
	}
	void  Test(UINT nEvent, pFun_int_hMenu_pMenuPopupWnd_bPtr,BYTE* pArray){
		pArray[0]=XC_PARAM_HMENUX;
		pArray[1]=XC_PARAM_P_menu_popupWnd;
	}
	void Test(UINT nEvent,pFun_int_hDraw_pMenuDrawBackground_bPtr,BYTE* pArray){
		pArray[0]=XC_PARAM_HDRAW;
		pArray[1]=XC_PARAM_P_menu_drawBackground;
	};
	void Test(UINT nEvent,pFun_int_hDraw_pMenuDrawItem_bPtr,BYTE* pArray){
		pArray[0]=XC_PARAM_HDRAW;
		pArray[1]=XC_PARAM_P_menu_drawItem;
	}
	void Test(UINT nEvent,pFun_int_hDrop_bPtr,BYTE* pArray){
		pArray[0]=XC_PARAM_HDROP;
	}
	void Test(UINT nEvent,pFun_int_w_e_bPtr,BYTE* pArray){
		pArray[0]=XC_PARAM_HWINDOW;
		pArray[1]=XC_PARAM_HELE;
	}
};

template<typename T_ClassName>
class CEventWndTest2 : public  CEventType < T_ClassName >
{
public:
	void  Test(UINT nEvent, pFun_int_w_hDraw_bPtr,BYTE* pArray){
		pArray[0]=XC_PARAM_HDRAW;
	}
	void  Test(UINT nEvent, pFun_int_w_uint_ptPtr_bPtr,BYTE* pArray){
		pArray[0]=XC_PARAM_uint;
		pArray[1]=XC_PARAM_P_POINT;
	}
	void Test(UINT nEvent,pFun_int_w_hDrop_bPtr,BYTE* pArray){
		pArray[0]=XC_PARAM_HDROP;
	}
	void Test(UINT nEvent,pFun_int_w_uint_uint_bPtr,BYTE* pArray){
		pArray[0]=XC_PARAM_uint;
		pArray[1]=XC_PARAM_uint;
	}
	void Test(UINT nEvent,pFun_int_w_hMenu_bPtr,BYTE* pArray){
		pArray[0]=XC_PARAM_HMENUX;
	}
	void Test(UINT nEvent,pFun_int_w_uint_sizePtr_bPtr,BYTE* pArray){
		pArray[0]=XC_PARAM_uint;
		pArray[1]=XC_PARAM_P_SIZE;
	}
};

//ʡ��2������֤
template<typename T_ClassName>
class CEventEleTest : public  CEventType < T_ClassName >
{
public:
	void  Test(UINT nEvent, pFun_int_hDraw_bPtr,BYTE* pArray){
		pArray[0]=XC_PARAM_HDRAW;
	}
	void  Test(UINT nEvent, pFun_int_bPtr,BYTE* pArray){
	}
	void  Test(UINT nEvent, pFun_int_e_bPtr,BYTE* pArray){
		pArray[0]=XC_PARAM_HELE;
	}
	void  Test(UINT nEvent, pFun_int_uint_ptPtr_bPtr,BYTE* pArray){
		pArray[0]=XC_PARAM_uint;
		pArray[1]=XC_PARAM_P_POINT;
	}
	void  Test(UINT nEvent, pFun_int_int_int_bPtr,BYTE* pArray){
		pArray[0]=XC_PARAM_int;
		pArray[1]=XC_PARAM_int;
	}
	void  Test(UINT nEvent, pFun_int_int_bPtr,BYTE* pArray){
		pArray[0]=XC_PARAM_int;
	}
	void  Test(UINT nEvent, pFun_int_uint_bPtr,BYTE* pArray){
		pArray[0]=XC_PARAM_uint;
	}
	void  Test(UINT nEvent, pFun_int_uint_uint_bPtr,BYTE* pArray){
		pArray[0]=XC_PARAM_uint;
		pArray[1]=XC_PARAM_uint;
	}
	void  Test(UINT nEvent, pFun_int_w_e_bPtr,BYTE* pArray){
		pArray[0]=XC_PARAM_HWINDOW;
		pArray[1]=XC_PARAM_HELE;
	}
	void  Test(UINT nEvent, pFun_int_pListBoxItem_bPtr,BYTE* pArray){
		pArray[0]=XC_PARAM_P_listBox_item_i;
	}
	void  Test(UINT nEvent, pFun_int_hDraw_pListBoxItem_bPtr,BYTE* pArray){
		pArray[0]=XC_PARAM_HDRAW;
		pArray[1]=XC_PARAM_P_listBox_item_i;
	}
	void  Test(UINT nEvent, pFun_int_pListItem_bPtr,BYTE* pArray){
		pArray[0]=XC_PARAM_P_list_item_i;
	}
	void  Test(UINT nEvent, pFun_int_hDraw_pListItem_bPtr,BYTE* pArray){
		pArray[0]=XC_PARAM_HDRAW;
		pArray[1]=XC_PARAM_P_list_item_i;
	}
	void  Test(UINT nEvent, pFun_int_hDraw_pListHeaderItem_bPtr,BYTE* pArray){
		pArray[0]=XC_PARAM_HDRAW;
		pArray[1]=XC_PARAM_P_list_header_item_i;
	}
	void  Test(UINT nEvent, pFun_int_pListHeaderItem_bPtr,BYTE* pArray){
		pArray[0]=XC_PARAM_P_list_header_item_i;
	}
	void  Test(UINT nEvent,pFun_int_pTreeItem_bPtr,BYTE* pArray){
		pArray[0]=XC_PARAM_P_tree_item_i;
	}
	void  Test(UINT nEvent,pFun_int_hDraw_pTreeItem_bPtr,BYTE* pArray){
		pArray[0]=XC_PARAM_HDRAW;
		pArray[1]=XC_PARAM_P_tree_item_i;
	}
	void  Test(UINT nEvent,pFun_int_pTreeDragItem_bPtr,BYTE* pArray){
		pArray[0]=XC_PARAM_P_tree_dragItem_i;
	}
	void  Test(UINT nEvent,pFun_int_pListViewItem_bPtr,BYTE* pArray){
		pArray[0]=XC_PARAM_P_listView_item_i;
	}
	void  Test(UINT nEvent,pFun_int_hDraw_pListViewItem_bPtr,BYTE* pArray){
		pArray[0]=XC_PARAM_HDRAW;
		pArray[1]=XC_PARAM_P_listView_item_i;
	}
	void  Test(UINT nEvent,pFun_int_hDraw_pMenuDrawBackground_bPtr,BYTE* pArray){
		pArray[0]=XC_PARAM_HDRAW;
		pArray[1]=XC_PARAM_P_menu_drawBackground;
	}
	void  Test(UINT nEvent,pFun_int_hDraw_pMenuDrawItem_bPtr,BYTE* pArray){
		pArray[0]=XC_PARAM_HDRAW;
		pArray[1]=XC_PARAM_P_menu_drawItem;
	}
	void  Test(UINT nEvent,pFun_int_hMenu_bPtr,BYTE* pArray){
		pArray[0]=XC_PARAM_HMENUX;
	}
	void  Test(UINT nEvent,pFun_int_hMenu_pMenuPopupWnd_bPtr,BYTE* pArray){
		pArray[0]=XC_PARAM_HMENUX;
		pArray[1]=XC_PARAM_P_menu_popupWnd;
	}
	void  Test(UINT nEvent,pFun_int_hDrop_bPtr,BYTE* pArray){
		pArray[0]=XC_PARAM_HDROP;
	}
};

//ʡ��1������֤
template<typename T_ClassName>
class CEventEleTest1 : public  CEventType < T_ClassName >
{
public:
	void  Test(UINT nEvent, pFun_int_e_uint_uint_uint_bPtr,BYTE* pArray){
		pArray[0]=XC_PARAM_uint;
		pArray[1]=XC_PARAM_uint;
		pArray[2]=XC_PARAM_uint;
	}
	void  Test(UINT nEvent, pFun_int_e_int_bPtr,BYTE* pArray){
		pArray[0]=XC_PARAM_int;
	}
	void  Test(UINT nEvent, pFun_int_e_hDraw_bPtr,BYTE* pArray){
		pArray[0]=XC_PARAM_HDRAW;
	}
	void  Test(UINT nEvent, pFun_int_e_bPtr,BYTE* pArray){
	}
	void  Test(UINT nEvent, pFun_int_e_e_bPtr,BYTE* pArray){
		pArray[0]=XC_PARAM_HELE;
	}
	void  Test(UINT nEvent, pFun_int_e_w_e_bPtr,BYTE* pArray){
		pArray[0]=XC_PARAM_HWINDOW;
		pArray[1]=XC_PARAM_HELE;
	}
	void  Test(UINT nEvent, pFun_int_e_uint_ptPtr_bPtr,BYTE* pArray){
		pArray[0]=XC_PARAM_uint;
		pArray[1]=XC_PARAM_P_POINT;
	}
	void  Test(UINT nEvent, pFun_int_e_uint_uint_bPtr,BYTE* pArray){
		pArray[0]=XC_PARAM_uint;
		pArray[1]=XC_PARAM_uint;
	}
	void  Test(UINT nEvent, pFun_int_e_pListBoxItem_bPtr,BYTE* pArray){
		pArray[0]=XC_PARAM_P_listBox_item_i;
	}
	void  Test(UINT nEvent,pFun_int_e_hDrop_bPtr,BYTE* pArray){
		pArray[0]=XC_PARAM_HDROP;
	}
	void  Test(UINT nEvent,pFun_int_e_hMenu_bPtr,BYTE* pArray){
		pArray[0]=XC_PARAM_HMENUX;
	}
	void  Test(UINT nEvent,pFun_int_e_pTreeDragItem_bPtr,BYTE* pArray){
		pArray[0]=XC_PARAM_P_tree_dragItem_i;
	}
};

//ȫ������֤
template<typename T_ClassName>
class CEventEleTest2 : public  CEventType < T_ClassName >
{
public:
	void  Test(UINT nEvent, pFun_int_e_e_uint_uint_uint_bPtr, BYTE* pArray){
		pArray[0]=XC_PARAM_uint;
		pArray[1]=XC_PARAM_uint;
		pArray[2]=XC_PARAM_uint;
	}
	void  Test(UINT nEvent, pFun_int_e_e_hDraw_bPtr, BYTE* pArray){
		pArray[0]=XC_PARAM_HDRAW;
	}
	void  Test(UINT nEvent, pFun_int_e_e_int_bPtr, BYTE* pArray){
		pArray[0]=XC_PARAM_int;
	}
	void  Test(UINT nEvent, pFun_int_e_e_bPtr, BYTE* pArray){
	}
	void  Test(UINT nEvent, pFun_int_e_e_e_bPtr,BYTE* pArray){
		pArray[0]=XC_PARAM_HELE;
		pArray[1]=XC_PARAM_HELE;
		pArray[2]=XC_PARAM_HELE;
	}
	void  Test(UINT nEvent, pFun_int_e_e_w_e_bPtr,BYTE* pArray){
		pArray[0]=XC_PARAM_HWINDOW;
		pArray[1]=XC_PARAM_HELE;
	}
	void  Test(UINT nEvent, pFun_int_e_e_uint_ptPtr_bPtr,BYTE* pArray){
		pArray[0]=XC_PARAM_uint;
		pArray[1]=XC_PARAM_P_POINT;
	}
	void  Test(UINT nEvent, pFun_int_e_e_pListBoxItem_bPtr,BYTE* pArray){
		pArray[0]=XC_PARAM_P_listBox_item_i;
	}
	void  Test(UINT nEvent,pFun_int_e_e_hDrop_bPtr,BYTE* pArray){
		pArray[0]=XC_PARAM_HDROP;
	}
	void  Test(UINT nEvent,pFun_int_e_e_pTreeDragItem_bPtr,BYTE* pArray){
		pArray[0]=XC_PARAM_P_tree_dragItem_i;
	}
};

template<typename T_ClassName, typename T_Member>
class CEventWnd : public  CEventBase
{
public:
	CEventWnd(){
		m_nEvent = 0; m_pThis = NULL; m_pMember = NULL; m_name[0]=NULL;
	}
	BOOL  Bind(char* pName,int nEvent, T_ClassName*  pThis, T_Member pMember){
		CEventWndTest<T_ClassName> EventTest;  //�¼���ʽ��֤
		BYTE array[4]={0};
		EventTest.Test(nEvent, pMember,array);
		if(FALSE==XWnd_RegEventTest(nEvent,array))  return FALSE;

		m_nEvent = nEvent;  m_pThis = pThis;  m_pMember = pMember;
		m_regType=0;
		strcpy_s(m_name,pName);
		return TRUE;
	}
	BOOL  Bind2(char* pName,int nEvent, T_ClassName*  pThis, T_Member pMember){
		CEventWndTest2<T_ClassName> EventTest;  //�¼���ʽ��֤
		BYTE array[4]={0};
		EventTest.Test(nEvent, pMember,array);
		if(FALSE==XWnd_RegEventTest(nEvent,array))  return FALSE;

		m_nEvent = nEvent;  m_pThis = pThis;  m_pMember = pMember;
		m_regType=1;
		strcpy_s(m_name,pName);
		return TRUE;
	}
	BOOL Remove(char* pName,HWINDOW hWindow, int nEvent, T_ClassName*  pThis, T_Member pMember){
		m_nEvent = nEvent;  m_pThis = pThis;  m_pMember = pMember;
		strcpy_s(m_name,pName);
		return XWnd_RemoveEventEx(hWindow,this);
	}
private:
	T_ClassName*   m_pThis;
	T_Member  m_pMember;
	char      m_name[MAX_PATH];
private:
	CEventHandleWnd<T_ClassName>   m_EventHandle;
	virtual void Release(){ delete this; }
	virtual int OnWndProc(HWINDOW hWindow, WPARAM wParam, LPARAM lParam, BOOL *pbHandled, UINT message){
		m_EventHandle.m_nRegType=m_regType;
		m_EventHandle.m_hWindow=hWindow;
		m_EventHandle.m_nMessage=message;
		m_EventHandle.m_wParam=wParam;
		m_EventHandle.m_lParam=lParam;
		return m_EventHandle.Handle(pbHandled, m_pThis, m_pMember);
	}
	virtual  void* GetThis(){ return m_pThis; }
	virtual  char* GetFunName(){ return m_name; }
};

template<typename T_ClassName, typename T_Member>
class CEventEle : public  CEventBase
{
public:
	CEventEle(){
		m_nEvent = 0; m_pThis = NULL; m_pMember = NULL;
		m_name[0]=0;
	}
	BOOL  Bind(char* pName,int nEvent, T_ClassName*  pThis, T_Member pMember){
		CEventEleTest<T_ClassName> EventTest;  //�¼���ʽ��֤
		BYTE array[4]={0};
		EventTest.Test(nEvent, pMember,array);
		if(FALSE==XEle_RegEventTest(nEvent,array))  return FALSE;

		m_nEvent = nEvent;  m_pThis = pThis;  m_pMember = pMember;
		m_regType=0;
		strcpy_s(m_name,pName);
		return TRUE;
	}
	BOOL  Bind2(char* pName,int nEvent, T_ClassName*  pThis, T_Member pMember){
		CEventEleTest1<T_ClassName> EventTest;  //�¼���ʽ��֤
		BYTE array[4]={0};
		EventTest.Test(nEvent, pMember,array);
		if(FALSE==XEle_RegEventTest(nEvent,array))  return FALSE;

		m_nEvent = nEvent;  m_pThis = pThis;  m_pMember = pMember;
		m_regType=1;
		strcpy_s(m_name,pName);
		return TRUE;
	}
	BOOL  Bind3(char* pName,int nEvent, T_ClassName*  pThis, T_Member pMember){
		CEventEleTest2<T_ClassName> EventTest;  //�¼���ʽ��֤
		BYTE array[4]={0};
		EventTest.Test(nEvent, pMember,array);
		if(FALSE==XEle_RegEventTest(nEvent,array))  return FALSE;

		m_nEvent = nEvent;  m_pThis = pThis;  m_pMember = pMember;
		m_regType=2;
		strcpy_s(m_name,pName);
		return TRUE;
	}
	BOOL Remove(char* pName,HELE hEle, int nEvent, T_ClassName*  pThis, T_Member pMember)
	{
		m_nEvent = nEvent;  m_pThis = pThis;  m_pMember = pMember;
		strcpy_s(m_name,pName);
		return XEle_RemoveEventEx(hEle,this);
	}
private:
	T_ClassName*   m_pThis;
	T_Member       m_pMember;
	char           m_name[MAX_PATH];

	CEventHandleEle<T_ClassName>   m_EventHandle;
	virtual void Release(){ delete this; }
	virtual int OnEleProc(HELE hEle, HELE hEventEle, WPARAM wParam, LPARAM lParam, BOOL *pbHandled, UINT nEvent){
		m_EventHandle.m_nRegType=m_regType;
		m_EventHandle.m_hEle=hEle;
		m_EventHandle.m_hEventEle=hEventEle;
		m_EventHandle.m_nEvent=nEvent;
		m_EventHandle.m_wParam=wParam;
		m_EventHandle.m_lParam=lParam;
		return m_EventHandle.Handle(pbHandled, m_pThis, m_pMember);
	}
	virtual  void* GetThis(){ return m_pThis; }
	virtual  char* GetFunName(){ return m_name; }
};

/////////////����//////////////////////////////////////////////////
template<typename T_ClassName, typename T_Member>
void _XWnd_RegEventCPP1(HWINDOW hWindow, int nEvent, T_ClassName *pThis, T_Member pFun, char* pFunName, char* pFile, int pLine)
{
	CEventWnd< T_ClassName, T_Member > *pEvent = new CEventWnd < T_ClassName, T_Member > ;
	if (pEvent->Bind2(pFunName,nEvent, pThis, pFun)){
		XWnd_RegEventEx(hWindow, pEvent);  return;
	}	delete pEvent;
}

// ע�ᴰ���¼�,�����Ա������Ϊ�¼��ص�����.�ص�������ʡ�Բ���.
#define XWnd_RegEventCPP1(hWindow, nEvent,pFunMember)  _XWnd_RegEventCPP1(hWindow, nEvent, this, pFunMember,#pFunMember,__FILE__,__LINE__);

template<typename T_ClassName, typename T_Member>
void _XWnd_RegEventCPP(HWINDOW hWindow, int nEvent, T_ClassName *pThis, T_Member pFun, char* pFunName, char* pFile, int pLine)
{
	CEventWnd< T_ClassName, T_Member > *pEvent = new CEventWnd < T_ClassName, T_Member > ;
	if (pEvent->Bind(pFunName,nEvent, pThis, pFun)){
		XWnd_RegEventEx(hWindow, pEvent);  return;
	}	delete pEvent;
}

// ע�ᴰ���¼�,�����Ա������Ϊ�¼��ص�����.�ص�����ʡ�Բ�������������hWindow.
#define XWnd_RegEventCPP(hWindow, nEvent,pFunMember)  _XWnd_RegEventCPP(hWindow, nEvent, this, pFunMember,#pFunMember,__FILE__,__LINE__);

template<typename T_ClassName, typename T_Member>
BOOL _Wnd_RemoveEventCPP(HWINDOW hWindow, int nEvent, T_ClassName *pThis, T_Member pFun,char* pFunName)
{
	CEventWnd< T_ClassName, T_Member > Event;
	return Event.Remove(pFunName,hWindow,nEvent, pThis, pFun);
}
//�Ƴ��¼�C++
#define XWnd_RemoveEventCPP(hWindow,nEvent,pFunMember)  _Wnd_RemoveEventCPP(hWindow,nEvent,this,pFunMember,#pFunMember)


////////////////Ԫ��///////////////////////////////////////////////////
template<typename T_ClassName, typename T_Member>
void _XEle_RegEventCPP2(HELE hEle, int nEvent, T_ClassName *pThis, T_Member pFun,char* pFunName)
{
	CEventEle< T_ClassName, T_Member > *pEvent = new CEventEle < T_ClassName, T_Member > ;
	if (pEvent->Bind3(pFunName,nEvent, pThis, pFun)){
		XEle_RegEventEx(hEle, pEvent);  return;
	}  delete pEvent;
}

// ע��Ԫ���¼�,�����Ա������Ϊ�¼��ص�����.�ص�������ʡ�Բ���
#define XEle_RegEventCPP2(hEle, nEvent,pFunMember)  _XEle_RegEventCPP2(hEle, nEvent, this, pFunMember,#pFunMember);

template<typename T_ClassName, typename T_Member>
void _XEle_RegEventCPP1(HELE hEle, int nEvent, T_ClassName *pThis, T_Member pFun,char* pFunName)
{
	CEventEle< T_ClassName, T_Member > *pEvent = new CEventEle < T_ClassName, T_Member > ;
	if (pEvent->Bind2(pFunName,nEvent, pThis, pFun)){
		XEle_RegEventEx(hEle, pEvent);  return;
	}  delete pEvent;
}

// ע��Ԫ���¼�,�����Ա������Ϊ�¼��ص�����.�ص�����ʡ��Ԫ��������hEle,
#define XEle_RegEventCPP1(hEle, nEvent,pFunMember)  _XEle_RegEventCPP1(hEle, nEvent, this, pFunMember,#pFunMember);

template<typename T_ClassName, typename T_Member>
void _XEle_RegEventCPP(HELE hEle, int nEvent, T_ClassName *pThis, T_Member pFun,char* pFunName)
{
	CEventEle< T_ClassName, T_Member > *pEvent = new CEventEle < T_ClassName, T_Member > ;
	if (pEvent->Bind(pFunName,nEvent, pThis, pFun)){

		XEle_RegEventEx(hEle, pEvent);  return;
	}  delete pEvent;
}


// ע��Ԫ���¼�,�����Ա������Ϊ�¼��ص�����.�ص�����ʡ��Ԫ��������hEle,ʡ�Դ����¼�Ԫ�ؾ��hEventEle.
#define XEle_RegEventCPP(hEle, nEvent,pFunMember)  _XEle_RegEventCPP(hEle, nEvent, this, pFunMember, #pFunMember);

template<typename T_ClassName, typename T_Member>
BOOL _XEle_RemoveEventCPP(HELE hEle, int nEvent, T_ClassName *pThis, T_Member pFun,char* pFunName)
{
	CEventEle< T_ClassName, T_Member > Event;
	return Event.Remove(pFunName,hEle,nEvent, pThis, pFun);
}

//�Ƴ��¼�C++
#define XEle_RemoveEventCPP(hEle,nEvent,pFunMember)  _XEle_RemoveEventCPP(hEle,nEvent,this,pFunMember,#pFunMember)

//////////////C��ʽע��///////////////////////////////////////////////
//������ע�ᵽָ����Ϣ,��ʡ�Բ���
template<typename T_Fun>
void XWnd_RegEventCT1(HWINDOW hWindow, int nEvent, T_Fun *pFun)
{
	XWnd_RegEventC1(hWindow, nEvent, pFun);
}

//������ע�ᵽָ����Ϣ,���Ա����ʡ�Դ���������hWindow
template<typename T_Fun>
void XWnd_RegEventCT(HWINDOW hWindow, int nEvent, T_Fun *pFun)
{
	XWnd_RegEventC(hWindow, nEvent, pFun);
}

//������ע�ᵽָ���¼�,��ʡ�Բ���
template<typename T_Fun>
void XEle_RegEventCT2(HELE hEle, int nEvent, T_Fun *pFun)
{
	XEle_RegEventC2(hEle, nEvent, pFun);
}

//������ע�ᵽָ���¼�,���Ա����ʡ��Ԫ��������hEle
template<typename T_Fun>
void XEle_RegEventCT1(HELE hEle, int nEvent, T_Fun *pFun)
{
	XEle_RegEventC1(hEle, nEvent, pFun);
}

//������ע�ᵽָ���¼�,���Ա����ʡ��Ԫ��������hEle,ʡ�Դ����¼�Ԫ�ؾ��hEventEle
template<typename T_Fun>
void XEle_RegEventCT(HELE hEle, int nEvent, T_Fun *pFun)
{
	XEle_RegEventC(hEle, nEvent, pFun);
}

//hEle      �����¼���Ԫ�ؾ��
//hEventEle �����¼���Ԫ�ؾ��
//////////////////////////////////////////////////////////////////////

XC_API HELE WINAPI XDateTime_Create(int x, int y, int cx, int cy, HXCGUI hParent);
XC_API void WINAPI XDateTime_SetStyle(HELE hEle,int nStyle);
XC_API int WINAPI XDateTime_GetStyle(HELE hEle);
XC_API void WINAPI XDateTime_GetTime(HELE hEle, int* pnHour, int* pnMinute, int* pnSecond);
XC_API void WINAPI XDateTime_SetTime(HELE hEle, int nHour, int nMinute, int nSecond);
XC_API void WINAPI XDateTime_GetDate(HELE hEle, int* pnYear, int* pnMonth, int* pnDay);
XC_API void WINAPI XDateTime_SetDate(HELE hEle, int nYear, int nMonth, int nDay);
XC_API COLORREF WINAPI XDateTime_GetSelBkColor(HELE hEle);
XC_API void WINAPI XDateTime_SetSelBkColor(HELE hEle, COLORREF crSelectBk, BYTE alpha = 255);
XC_API HELE WINAPI XDateTime_GetButton(HELE hEle, int nType);
XC_API HELE WINAPI XMonthCal_Create(int x, int y, int cx, int cy, HXCGUI hParent);
XC_API void WINAPI XMonthCal_SetToday(HELE hEle, int nYear, int nMonth, int nDay);
XC_API void WINAPI XMonthCal_GetToday(HELE hEle, int* pnYear, int* pnMonth, int* pnDay);
XC_API void WINAPI XMonthCal_SeSelDate(HELE hEle, int nYear, int nMonth, int nDay);
XC_API void WINAPI XMonthCal_GetSelDate(HELE hEle, int* pnYear, int* pnMonth, int* pnDay);
XC_API HELE WINAPI XMonthCal_GetButton(HELE hEle, monthCal_button_type_ nType);
XC_API int WINAPI XC_UnicodeToAnsi(const wchar_t *pIn, int inLen, char *pOut, int outLen);
XC_API int WINAPI XC_AnsiToUnicode(const char *pIn, int inLen, wchar_t *pOut, int outLen);
XC_API void WINAPI XC_DebugToFileInfo(const char *pInfo);//��ӡ������Ϣ���ļ� xcgui_debug.txt
XC_API BOOL WINAPI XC_IsHELE(HXCGUI hEle); //�����
XC_API BOOL WINAPI XC_IsHWINDOW(HXCGUI hWindow); //�����
XC_API BOOL WINAPI XC_IsShape(HXCGUI hShape); //�����
XC_API BOOL WINAPI XC_IsHXCGUI(HXCGUI hXCGUI,XC_OBJECT_TYPE nType);
XC_API HWINDOW WINAPI XC_hWindowFromHWnd(HWND hWnd);
XC_API BOOL WINAPI XC_RegisterWindowClassName(const wchar_t* pClassName); //ע�ᴰ������
XC_API BOOL WINAPI XC_IsSViewExtend(HELE hEle);  //�ж�Ԫ���Ƿ�ӹ�����ͼԪ����չ����Ԫ��,����������ͼԪ��
XC_API XC_OBJECT_TYPE WINAPI XC_GetObjectType(HXCGUI hXCGUI);
XC_API HXCGUI WINAPI XC_GetObjectByID(int nID); //ͨ��ID��ȡ������
XC_API int  WINAPI XC_GetResIDValue(const wchar_t *pName);  //��ȡ��ԴIDֵ
XC_API void WINAPI XC_SetPaintFrequency(int nMilliseconds); //����UI����Ƶ��
XC_API BOOL WINAPI XC_RectInRect(RECT *pRect1, RECT *pRect2);
XC_API void WINAPI XC_CombineRect(RECT *pDest, RECT *pSrc1, RECT *pSrc2);
XC_API void WINAPI XC_ShowLayoutFrame(BOOL bShow);
XC_API void WINAPI XC_EnableDebugFile(BOOL bEnable);
XC_API void WINAPI XC_SetLayoutFrameColor(COLORREF color);
XC_API void WINAPI XC_EnableErrorMessageBox(BOOL bEnabel);
XC_API HXCGUI WINAPI XC_LoadLayout(const wchar_t *pFileName, HXCGUI hParent=NULL);
XC_API HXCGUI WINAPI XC_LoadLayoutFromString(const char *pStringXML, HXCGUI hParent=NULL);
XC_API BOOL WINAPI XC_LoadResource(const wchar_t *pFileName,const wchar_t *pDir=NULL);
XC_API BOOL WINAPI XC_LoadResourceFromString(const char *pStringXML,const wchar_t *pDir=NULL);
XC_API template_info_i* WINAPI XC_LoadTemplate(XC_OBJECT_TYPE nType,const wchar_t* pFileName);  //����ģ�� ����ģ�����
XC_API template_info_i* WINAPI XC_LoadTemplateFromString(XC_OBJECT_TYPE nType,const char* pStringXML);  //����ģ��,���ڴ�, ����ģ�����
XC_API void WINAPI XC_TemplateDestroy(template_info_i* pInfo);
XC_API void WINAPI XC_GetTextSize(const wchar_t* pString,int length,HFONTX hFontX,out_ SIZE* pOutSize);
XC_API void WINAPI XC_GetTextShowSize(const wchar_t* pString,int length,HFONTX hFontX,out_ SIZE* pOutSize);
XC_API HFONTX WINAPI XC_GetDefaultFont(); //��ȡĬ������
XC_API void   WINAPI XC_SetDefaultFont(HFONTX hFontX); //����Ĭ������
XC_API void  WINAPI XC_InitFont(LOGFONTW *pFont,wchar_t *pName,int size,BOOL bBold=FALSE,BOOL bItalic=FALSE,BOOL bUnderline=FALSE,BOOL bStrikeOut=FALSE);
XC_API  void* WINAPI XC_Malloc(int size);
XC_API  void  WINAPI XC_Free(void *p);
XC_API void WINAPI _XC_SetType(HXCGUI hXCGUI,XC_OBJECT_TYPE nType);
XC_API void WINAPI _XC_AddType(HXCGUI hXCGUI,XC_OBJECT_TYPE nType);
XC_API void WINAPI _XC_BindData(HXCGUI hXCGUI,int data);
XC_API int  WINAPI _XC_GetBindData(HXCGUI hXCGUI);
XC_API BOOL WINAPI XInitXCGUI(wchar_t *pText = NULL);
XC_API void WINAPI XRunXCGUI();
XC_API void WINAPI XExitXCGUI();
XC_API HBKINFOM WINAPI XBkInfoM_Create();   //�����������ݹ�����
XC_API void WINAPI XBkInfoM_Destroy(HBKINFOM hBkInfoM);  //���ٱ������ݹ�����
XC_API int  WINAPI XBkInfoM_SetBkInfo(HBKINFOM hBkInfoM, const wchar_t *pText);  //��ӱ�������
XC_API void WINAPI XBkInfoM_AddBorder(HBKINFOM hBkInfoM, int nState, COLORREF color,BYTE alpha, int width);  //��ӱ������� - �߿�
XC_API void WINAPI XBkInfoM_AddFill(HBKINFOM hBkInfoM, int nState, COLORREF color,BYTE alpha);  //��ӱ������� - ���
XC_API void WINAPI XBkInfoM_AddImage(HBKINFOM hBkInfoM, int nState, HIMAGE hImage); //��ӱ������� - ͼƬ
XC_API int  WINAPI XBkInfoM_GetCount(HBKINFOM hBkInfoM); //��ȡ������������
XC_API void WINAPI XBkInfoM_Clear(HBKINFOM hBkInfoM);  //��ձ�������
XC_API BOOL WINAPI XBkInfoM_Draw(HBKINFOM hBkInfoM, int nState, HDRAW hDraw, RECT* pRect);  //���Ʊ�������
XC_API BOOL WINAPI XBkInfoM_DrawEx(HBKINFOM hBkInfoM, int nState, HDRAW hDraw, RECT* pRect, int nStateFilter);  //���Ʊ�������
XC_API HELE WINAPI XBtn_Create(int x, int y, int cx, int cy,const wchar_t *pName, HXCGUI hParent = NULL);
XC_API BOOL WINAPI XBtn_IsCheck(HELE hEle); //��ť�Ƿ�ѡ��
XC_API BOOL WINAPI XBtn_SetCheck(HELE hEle, BOOL bCheck);
XC_API void WINAPI XBtn_SetState(HELE hEle,common_state3_ nState);
XC_API common_state3_  WINAPI XBtn_GetState(HELE hEle);
XC_API button_state_   WINAPI XBtn_GetStateEx(HELE hEle);
XC_API void WINAPI XBtn_SetStyle(HELE hEle, button_style_  nStyle);
XC_API button_style_  WINAPI XBtn_GetStyle(HELE hEle);
XC_API void WINAPI XBtn_SetType(HELE hEle,button_type_ nType);
XC_API button_type_  WINAPI XBtn_GetType(HELE hEle);
XC_API void WINAPI XBtn_SetGroupID(HELE hEle,int nID);
XC_API int  WINAPI XBtn_GetGroupID(HELE hEle);
XC_API void WINAPI XBtn_SetBindEle(HELE hEle,HELE hBindEle);
XC_API HELE WINAPI XBtn_GetBindEle(HELE hEle);
XC_API void WINAPI XBtn_SetTextAlign(HELE hEle,int nFlags);
XC_API int  WINAPI XBtn_GetTextAlign(HELE hEle);
XC_API void WINAPI XBtn_SetIconAlign(HELE hEle,button_icon_align_ align);
XC_API void WINAPI XBtn_SetOffset(HELE hEle,int x,int y);
XC_API void WINAPI XBtn_SetOffsetIcon(HELE hEle,int x,int y);
XC_API void WINAPI XBtn_SetIconSpace(HELE hEle, int size);
XC_API void WINAPI XBtn_GetText(HELE hEle,out_ wchar_t *pOut,int nOutLen);
XC_API void WINAPI XBtn_SetText(HELE hEle,in_ const wchar_t *pName);
XC_API void WINAPI XBtn_SetIcon(HELE hEle,HIMAGE hImage);
XC_API void WINAPI XBtn_SetIconDisable(HELE hEle,HIMAGE hImage);
XC_API void WINAPI XBtn_AddAnimationFrame(HELE hEle,HIMAGE hImage,UINT uElapse);
XC_API void WINAPI XBtn_EnableAnimation(HELE hEle,BOOL bEnable,BOOL bLoopPlay=FALSE);
XC_API void WINAPI XBtn_AddBkBorder(HELE hEle, button_state_ nState,COLORREF color,BYTE alpha, int width);
XC_API void WINAPI XBtn_AddBkFill(HELE hEle, button_state_ nState,COLORREF color,BYTE alpha);
XC_API void WINAPI XBtn_AddBkImage(HELE hEle, button_state_ nState,HIMAGE hImage);
XC_API int  WINAPI XBtn_GetBkInfoCount(HELE hEle);
XC_API void WINAPI XBtn_ClearBkInfo(HELE hEle);
XC_API HELE WINAPI XComboBox_Create(int x, int y, int cx, int cy, HXCGUI hParent = NULL);
XC_API BOOL  WINAPI XComboBox_SetSelItem(HELE hEle,int iIndex);
XC_API void WINAPI XComboBox_GetButtonRect(HELE hEle,out_ RECT* pRect);
XC_API void WINAPI XComboBox_SetButtonSize(HELE hEle,int size);
XC_API void WINAPI XComboBox_SetDropHeight(HELE hEle,int height); //���������б�߶�
XC_API int  WINAPI XComboBox_GetDropHeight(HELE hEle);
XC_API void WINAPI XComboBox_BindApapter(HELE hEle,HXCGUI hAdapter);
XC_API HXCGUI WINAPI XComboBox_GetApapter(HELE hEle);
XC_API void WINAPI XComboBox_SetItemTemplateXML(HELE hEle,const wchar_t* pXmlFile);
XC_API void WINAPI XComboBox_SetItemTemplateXMLFromString(HELE hEle,const char* pStringXML);
XC_API void WINAPI XComboBox_EnableDrawButton(HELE hEle,BOOL bEnable);
XC_API void WINAPI XComboBox_EnableEdit(HELE hEle,BOOL bEdit);  //�����༭����
XC_API void WINAPI XComboBox_AddBkBorder(HELE hEle,comboBox_state_ nState,COLORREF color,BYTE alpha, int width);
XC_API void WINAPI XComboBox_AddBkFill(HELE hEle,comboBox_state_ nState,COLORREF color,BYTE alpha);
XC_API void WINAPI XComboBox_AddBkImage(HELE hEle,comboBox_state_ nState,HIMAGE hImage);
XC_API int  WINAPI XComboboX_GetBkInfoCount(HELE hEle);
XC_API void WINAPI XComboBox_ClearBkInfo(HELE hEle);
XC_API int WINAPI XComboBox_GetSelItem(HELE hEle);
XC_API comboBox_state_ WINAPI XComboBox_GetState(HELE hEle);
XC_API void WINAPI XAdapter_Destroy(HXCGUI hAdapter);
XC_API HXCGUI WINAPI XAdapterListView_Create();
XC_API int  WINAPI XAdapterListView_Group_AddColumn(HXCGUI hAdapter,const wchar_t *pName);
XC_API int  WINAPI XAdapterListView_Group_AddItemText(HXCGUI hAdapter,const wchar_t *pValue);
XC_API int  WINAPI XAdapterListView_Group_AddItemTextEx(HXCGUI hAdapter,const wchar_t* pName,const wchar_t *pValue);
XC_API int  WINAPI XAdapterListView_Group_AddItemImage(HXCGUI hAdapter,HIMAGE hImage);
XC_API int  WINAPI XAdapterListView_Group_AddItemImageEx(HXCGUI hAdapter,const wchar_t* pName,HIMAGE hImage);
XC_API BOOL WINAPI XAdapterListView_Group_SetText(HXCGUI hAdapter,int iGroup,int iColumn,const wchar_t *pValue);
XC_API BOOL WINAPI XAdapterListView_Group_SetTextEx(HXCGUI hAdapter,int iGroup,const wchar_t *pName,const wchar_t *pValue);
XC_API BOOL WINAPI XAdapterListView_Group_SetImage(HXCGUI hAdapter,int iGroup,int iColumn,HIMAGE hImage);
XC_API BOOL WINAPI XAdapterListView_Group_SetImageEx(HXCGUI hAdapter,int iGroup,const wchar_t *pName,HIMAGE hImage);
XC_API int  WINAPI XAdapterListView_Group_GetCount(HXCGUI hAdapter);
XC_API int  WINAPI XAdapterListView_Item_GetCount(HXCGUI hAdapter, int iGroup);
XC_API int  WINAPI XAdapterListView_Item_AddColumn(HXCGUI hAdapter,const wchar_t *pName);  //������
XC_API int  WINAPI XAdapterListView_Item_AddItemText(HXCGUI hAdapter,int iGroup,const wchar_t *pValue);
XC_API int  WINAPI XAdapterListView_Item_AddItemTextEx(HXCGUI hAdapter,int iGroup,const wchar_t *pName,const wchar_t *pValue);
XC_API int  WINAPI XAdapterListView_Item_AddItemImage(HXCGUI hAdapter,int iGroup,HIMAGE hImage);
XC_API int  WINAPI XAdapterListView_Item_AddItemImageEx(HXCGUI hAdapter,int iGroup,const wchar_t *pName,HIMAGE hImage);
XC_API BOOL WINAPI XAdapterListView_Item_SetText(HXCGUI hAdapter,int iGroup,int iItem,int iColumn,const wchar_t* pValue);
XC_API BOOL WINAPI XAdapterListView_Item_SetTextEx(HXCGUI hAdapter,int iGroup,int iItem,const wchar_t *pName,const wchar_t* pValue);
XC_API BOOL WINAPI XAdapterListView_Item_SetImage(HXCGUI hAdapter,int iGroup,int iItem,int iColumn,HIMAGE hImage);
XC_API BOOL WINAPI XAdapterListView_Item_SetImageEx(HXCGUI hAdapter,int iGroup,int iItem,const wchar_t *pName,HIMAGE hImage);
XC_API BOOL WINAPI XAdapterListView_Group_DeleteItem(HXCGUI hAdapter,int iGroup);
XC_API void WINAPI XAdapterListView_Group_DeleteAllChildItem(HXCGUI hAdapter,int iGroup);
XC_API BOOL WINAPI XAdapterListView_Item_DeleteItem(HXCGUI hAdapter,int iGroup,int iItem);
XC_API void WINAPI XAdapterListView_DeleteAll(HXCGUI hAdapter);
XC_API void WINAPI XAdapterListView_DeleteAllGroup(HXCGUI hAdapter); 
XC_API void WINAPI XAdapterListView_DeleteAllItem(HXCGUI hAdapter);
XC_API void WINAPI XAdapterListView_DeleteColumnGroup(HXCGUI hAdapter,int iColumn);
XC_API void WINAPI XAdapterListView_DeleteColumnItem(HXCGUI hAdapter,int iColumn);
XC_API BOOL WINAPI XAdapterListView_Item_GetTextEx(HXCGUI hAdapter,int iGroup,int iItem,const wchar_t* pName,out_ wchar_t* pOut,int nOutLen);
XC_API HIMAGE WINAPI XAdapterListView_Item_GetImageEx(HXCGUI hAdapter,int iGroup,int iItem,const wchar_t* pName);
XC_API HXCGUI WINAPI XAdapterTable_Create();
XC_API int WINAPI XAdapterTable_AddColumn(HXCGUI hAdapter,const wchar_t* pName);
XC_API int WINAPI XAdapterTable_SetColumn(HXCGUI hAdapter, const wchar_t*  pColName);
XC_API int WINAPI XAdapterTable_AddItemText(HXCGUI hAdapter,const wchar_t* pValue);
XC_API int WINAPI XAdapterTable_AddItemTextEx(HXCGUI hAdapter,const wchar_t* pName,const wchar_t* pValue);
XC_API int WINAPI XAdapterTable_AddItemImage(HXCGUI hAdapter,HIMAGE hImage);
XC_API int WINAPI XAdapterTable_AddItemImageEx(HXCGUI hAdapter,const wchar_t* pName,HIMAGE hImage);
XC_API BOOL WINAPI XAdapterTable_InsertItemText(HXCGUI hAdapter,int iItem,const wchar_t* pValue);
XC_API BOOL WINAPI XAdapterTable_InsertItemTextEx(HXCGUI hAdapter,int iItem,const wchar_t* pName,const wchar_t* pValue);
XC_API BOOL WINAPI XAdapterTable_InsertItemImage(HXCGUI hAdapter,int iItem,HIMAGE hImage);
XC_API BOOL WINAPI XAdapterTable_InsertItemImageEx(HXCGUI hAdapter,int iItem,const wchar_t* pName,HIMAGE hImage);
XC_API BOOL WINAPI XAdapterTable_SetItemText(HXCGUI hAdapter,int iItem,int iColumn,const wchar_t* pValue);
XC_API BOOL WINAPI XAdapterTable_SetItemTextEx(HXCGUI hAdapter,int iItem,const wchar_t* pName,const wchar_t* pValue);
XC_API BOOL WINAPI XAdapterTable_SetItemImage(HXCGUI hAdapter,int iItem,int iColumn,HIMAGE hImage);
XC_API BOOL WINAPI XAdapterTable_SetItemImageEx(HXCGUI hAdapter,int iItem,const wchar_t* pName,HIMAGE hImage);
XC_API BOOL WINAPI XAdapterTable_DeleteItem(HXCGUI hAdapter,int iItem);
XC_API BOOL WINAPI XAdapterTable_DeleteItemEx(HXCGUI hAdapter,int iItem,int nCount);
XC_API void WINAPI XAdapterTable_DeleteItemAll(HXCGUI hAdapter);
XC_API void WINAPI XAdapterTable_DeleteColumnAll(HXCGUI hAdapter);
XC_API int WINAPI XAdapterTable_GetCount(HXCGUI hAdapter);
XC_API int WINAPI XAdapterTable_GetCountColumn(HXCGUI hAdapter);
XC_API BOOL WINAPI XAdapterTable_GetItemText(HXCGUI hAdapter,int iItem,int iColumn,out_ wchar_t* pOut,int nOutLen);
XC_API HIMAGE WINAPI XAdapterTable_GetItemImage(HXCGUI hAdapter,int iItem,int iColumn);
XC_API BOOL WINAPI XAdapterTable_GetItemTextEx(HXCGUI hAdapter,int iItem,const wchar_t* pName,out_ wchar_t* pOut,int nOutLen);
XC_API HIMAGE WINAPI XAdapterTable_GetItemImageEx(HXCGUI hAdapter,int iItem,const wchar_t* pName);
XC_API HXCGUI WINAPI XAdapterTree_Create();
XC_API int WINAPI XAdapterTree_AddColumn(HXCGUI hAdapter,const wchar_t* pName);
XC_API int WINAPI XAdapterTree_SetColumn(HXCGUI hAdapter,const wchar_t* pColName);
XC_API int WINAPI XAdapterTree_InsertItemText(HXCGUI hAdapter,const wchar_t* pValue,int nParentID=XC_ID_ROOT,int insertID=XC_ID_LAST);
XC_API int WINAPI XAdapterTree_InsertItemTextEx(HXCGUI hAdapter,const wchar_t* pName,const wchar_t* pValue,int nParentID=XC_ID_ROOT,int insertID=XC_ID_LAST);
XC_API int WINAPI XAdapterTree_InsertItemImage(HXCGUI hAdapter,HIMAGE hImage,int nParentID=XC_ID_ROOT,int insertID=XC_ID_LAST);
XC_API int WINAPI XAdapterTree_InsertItemImageEx(HXCGUI hAdapter,const wchar_t* pName,HIMAGE hImage,int nParentID=XC_ID_ROOT,int insertID=XC_ID_LAST);
XC_API int WINAPI XAdapterTree_GetCount(HXCGUI hAdapter);
XC_API int WINAPI XAdapterTree_GetCountColumn(HXCGUI hAdapter);
XC_API BOOL WINAPI XAdapterTree_SetItemText(HXCGUI hAdapter,int nID,int iColumn,const wchar_t* pValue);
XC_API BOOL WINAPI XAdapterTree_SetItemTextEx(HXCGUI hAdapter,int nID,const wchar_t* pName,const wchar_t* pValue);
XC_API BOOL WINAPI XAdapterTree_SetItemImage(HXCGUI hAdapter,int nID,int iColumn,HIMAGE hImage);
XC_API BOOL WINAPI XAdapterTree_SetItemImageEx(HXCGUI hAdapter,int nID,const wchar_t* pName,HIMAGE hImage);
XC_API BOOL WINAPI XAdapterTree_GetItemTextEx(HXCGUI hAdapter,int nID,const wchar_t* pName,out_ wchar_t* pOut,int nOutLen);
XC_API HIMAGE WINAPI XAdapterTree_GetItemImageEx(HXCGUI hAdapter,int nID,const wchar_t* pName);
XC_API BOOL WINAPI XAdapterTree_DeleteItem(HXCGUI hAdapter,int nID);
XC_API void WINAPI XAdapterTree_DeleteItemAll(HXCGUI hAdapter);
XC_API void WINAPI XAdapterTree_DeleteColumnAll(HXCGUI hAdapter);
XC_API HXCGUI WINAPI XAdapterMap_Create();
XC_API BOOL WINAPI XAdapterMap_AddItemText(HXCGUI hAdapter,const wchar_t* pName,const wchar_t* pValue);
XC_API BOOL WINAPI XAdapterMap_AddItemImage(HXCGUI hAdapter,const wchar_t* pName,HIMAGE hImage);
XC_API BOOL WINAPI XAdapterMap_DeleteItem(HXCGUI hAdapter,const wchar_t* pName);
XC_API int  WINAPI XAdapterMap_GetCount(HXCGUI hAdapter);
XC_API BOOL WINAPI XAdapterMap_GetItemText(HXCGUI hAdapter,const wchar_t* pName,out_ wchar_t* pOut,int nOutLen);
XC_API HIMAGE WINAPI XAdapterMap_GetItemImage(HXCGUI hAdapter,const wchar_t* pName);
XC_API void WINAPI _XC_DebugPrintf(int  level, const char *pFormat, ...); 
XC_API void WINAPI _XC_DebugPrintfW(int  level, const wchar_t *pFormat, ...);
XC_API void WINAPI xtrace(const char *pFormat, ...);
XC_API void WINAPI xtracew(const wchar_t *pFormat, ...);
XC_API HDRAW WINAPI XDraw_Create(HDC hdc); //����
XC_API void  WINAPI XDraw_Destroy(HDRAW hDraw); //����
XC_API void  WINAPI XDraw_SetOffset(HDRAW hDraw, int x, int y); //��������ƫ����
XC_API void  WINAPI XDraw_GetOffset(HDRAW hDraw, out_ int *pX, out_ int *pY); //��ȡ����ƫ����
XC_API void  WINAPI XDraw_RestoreGDIOBJ(HDRAW hDraw);  //��ԭ״̬,�ͷ��û��󶨵�GDI����
XC_API HDC   WINAPI XDraw_GetHDC(HDRAW hDraw);
XC_API void WINAPI XDraw_SetBrushColor(HDRAW hDraw, COLORREF color,BYTE alpha=255);
XC_API void WINAPI XDraw_SetTextAlign(HDRAW hDraw, int nFlag);
XC_API void WINAPI XDraw_SetTextVertical(HDRAW hDraw, BOOL bVertical);
XC_API void WINAPI XDraw_SetFontX(HDRAW hDraw, HFONTX  hFontx);
XC_API void WINAPI XDraw_SetFont(HDRAW hDraw, int size);
XC_API void WINAPI XDraw_SetFont2(HDRAW hDraw, const wchar_t* pName,int size);
XC_API void WINAPI XDraw_SetFont3(HDRAW hDraw, LOGFONT* pLogFont);
XC_API void WINAPI XDraw_SetLineWidth(HDRAW hDraw, int nWidth);
XC_API int  WINAPI XDraw_SetBkMode(HDRAW hDraw, BOOL bTransparent);
XC_API void WINAPI XDraw_EnableSmoothingMode(HDRAW hDraw, BOOL  bEnable);   //����ƽ��ģʽ
XC_API HBRUSH WINAPI XDraw_CreateSolidBrush(HDRAW hDraw, COLORREF crColor);
XC_API HPEN WINAPI XDraw_CreatePen(HDRAW hDraw, int fnPenStyle, int nWidth, COLORREF crColor);
XC_API HRGN WINAPI XDraw_CreateRectRgn(HDRAW hDraw, int nLeftRect, int nTopRect, int nRightRect, int nBottomRect);
XC_API HRGN WINAPI XDraw_CreateRoundRectRgn(HDRAW hDraw, int nLeftRect, int nTopRect, int nRightRect, int nBottomRect, int nWidthEllipse, int nHeightEllipse);
XC_API HRGN WINAPI XDraw_CreatePolygonRgn(HDRAW hDraw, POINT *pPt, int cPoints, int fnPolyFillMode);
XC_API int WINAPI XDraw_SelectClipRgn(HDRAW hDraw, HRGN hRgn);
XC_API void WINAPI XDraw_FillRect(HDRAW hDraw, RECT *pRect);
XC_API void WINAPI XDraw_FillRectColor(HDRAW hDraw, RECT *pRect,COLORREF color,BYTE alpha=255);
XC_API BOOL WINAPI XDraw_FillRgn(HDRAW hDraw, HRGN hrgn, HBRUSH hbr);
XC_API void WINAPI XDraw_FillEllipse(HDRAW hDraw, RECT *pRect);
XC_API void WINAPI XDraw_DrawEllipse(HDRAW hDraw, RECT *pRect);
XC_API void WINAPI XDraw_FillRoundRect(HDRAW hDraw,RECT *pRect,int nWidth,int nHeight); //���Բ�Ǿ���
XC_API void WINAPI XDraw_DrawRoundRect(HDRAW hDraw,RECT *pRect,int nWidth,int nHeight); //����Բ�Ǿ��α߿�
XC_API BOOL WINAPI XDraw_Rectangle(HDRAW hDraw, int nLeftRect, int nTopRect, int nRightRect, int nBottomRect);
XC_API void WINAPI XDraw_DrawGroupBox_Rect(HDRAW hDraw, RECT *pRect,const wchar_t* pName,COLORREF textColor,BYTE textAlpha,POINT* pOffset);
XC_API void WINAPI XDraw_DrawGroupBox_RoundRect(HDRAW hDraw, RECT *pRect,const wchar_t* pName,COLORREF textColor,BYTE textAlpha,POINT* pOffset,int nWidth,int nHeight);
XC_API void WINAPI XDraw_GradientFill2(HDRAW hDraw, COLORREF color1, BYTE alpha1, COLORREF color2, BYTE alpha2, RECT *pRect, int mode);
XC_API BOOL WINAPI XDraw_GradientFill4(HDRAW hDraw, COLORREF color1, COLORREF color2, COLORREF color3, COLORREF color4, RECT *pRect, int mode);
XC_API BOOL WINAPI XDraw_FrameRgn(HDRAW hDraw, HRGN hrgn, HBRUSH hbr, int nWidth, int nHeight);
XC_API void  WINAPI XDraw_FrameRect(HDRAW hDraw, RECT *pRect);
XC_API void WINAPI XDraw_FocusRect(HDRAW hDraw, RECT *pRect);
XC_API void WINAPI XDraw_DrawLine(HDRAW hDraw,int x1,int y1,int x2,int y2);
XC_API BOOL WINAPI XDraw_MoveToEx(HDRAW hDraw, int X, int Y, LPPOINT lpPoint = NULL);
XC_API BOOL WINAPI XDraw_LineTo(HDRAW hDraw, int nXEnd, int nYEnd);
XC_API BOOL WINAPI XDraw_Polyline(HDRAW hDraw, in_ POINT *pArrayPt, int arrayPtSize);
XC_API void WINAPI XDraw_Dottedline(HDRAW hDraw, int x1, int y1, int x2, int y2);  //��������
XC_API COLORREF WINAPI XDraw_SetPixel(HDRAW hDraw, int X, int Y, COLORREF crColor);
XC_API void WINAPI XDraw_Check(HDRAW hDraw, int x, int y, COLORREF color, BOOL bCheck);
XC_API BOOL WINAPI XDraw_DrawIconEx(HDRAW hDraw, int xLeft, int yTop, HICON hIcon, int cxWidth, int cyWidth, UINT istepIfAniCur, HBRUSH hbrFlickerFreeDraw, UINT diFlags);
XC_API BOOL WINAPI XDraw_BitBlt(HDRAW hDrawDest, int nXDest, int nYDest, int nWidth, int nHeight, HDC hdcSrc, int nXSrc, int nYSrc, DWORD dwRop);
XC_API BOOL WINAPI XDraw_BitBlt2(HDRAW hDrawDest, int nXDest, int nYDest, int nWidth, int nHeight, HDRAW hDrawSrc, int nXSrc, int nYSrc, DWORD dwRop);
XC_API BOOL WINAPI XDraw_AlphaBlend(HDRAW hDraw, int nXOriginDest, int nYOriginDest, int nWidthDest, int nHeightDest, HDC hdcSrc, int nXOriginSrc,int nYOriginSrc, int nWidthSrc, int nHeightSrc, int alpha);
XC_API void WINAPI XDraw_TriangularArrow(HDRAW hDraw, int align, int x, int y, int width, int height);
XC_API void WINAPI XDraw_DrawPolygon(HDRAW hDraw,in_ POINT *points,int nCount);
XC_API void WINAPI XDraw_DrawPolygonF(HDRAW hDraw,in_ POINTF *points,int nCount);
XC_API void WINAPI XDraw_FillPolygon(HDRAW hDraw,in_ POINT *points,int nCount);
XC_API void WINAPI XDraw_FillPolygonF(HDRAW hDraw,in_ POINTF *points,int nCount);
XC_API void WINAPI XDraw_Image(HDRAW hDraw, HIMAGE hImage, int x, int y);
XC_API void WINAPI XDraw_Image2(HDRAW hDraw, HIMAGE hImage, int x, int y, int width, int height);
XC_API void WINAPI XDraw_ImageStretch(HDRAW hDraw, HIMAGE hImage, int x, int y, int width, int height);
XC_API void WINAPI XDraw_ImageAdaptive(HDRAW hDraw, HIMAGE hImage, RECT *pRect, BOOL bOnlyBorder=FALSE);
XC_API void WINAPI XDraw_ImageExTile(HDRAW hDraw, HIMAGE hImage, RECT *pRect, int flag = 0);
XC_API void WINAPI XDraw_ImageSuper(HDRAW hDraw, HIMAGE hImage, RECT *pRect,BOOL bClip=FALSE);
XC_API void WINAPI XDraw_ImageSuper2(HDRAW hDraw, HIMAGE hImage, RECT *pRcDest, RECT *pSrcRect);
XC_API void WINAPI XDraw_DrawText(HDRAW hDraw, const wchar_t * lpString, int nCount, RECT* lpRect);
XC_API void WINAPI XDraw_DrawTextUnderline(HDRAW hDraw, const wchar_t * lpString, int nCount, RECT* lpRect,COLORREF colorLine,BYTE alphaLine=255);
XC_API void WINAPI XDraw_TextOut(HDRAW hDraw, int nXStart, int nYStart, const wchar_t * lpString, int cbString);
XC_API void WINAPI XDraw_TextOutEx(HDRAW hDraw, int nXStart, int nYStart, const wchar_t * lpString);
XC_API void WINAPI XDraw_TextOutA(HDRAW hDraw, int nXStart, int nYStart, const char * lpString);
XC_API void WINAPI XDraw_SetAlpha(HDRAW hDraw,BYTE alpha);  //����͸��ͨ����
XC_API void WINAPI XDraw_SetAlphaEx(HDC hdc,BYTE alpha);  //����͸��ͨ����
XC_API HELE WINAPI XEle_Create(int x, int y, int cx, int cy, HXCGUI hParent = NULL);
XC_API void WINAPI XEle_RegEventEx(HELE hEle, CEventBase* pEvent); //�ڲ�ʹ��
XC_API BOOL WINAPI XEle_RemoveEventEx(HELE hEle, CEventBase *pEvent); //�ڲ�ʹ��
XC_API void WINAPI XEle_RegEventC(HELE hEle, int nEvent, void *pFun); //ע���¼�C��ʽ
XC_API void WINAPI XEle_RegEventC1(HELE hEle, int nEvent, void *pFun); 
XC_API void WINAPI XEle_RegEventC2(HELE hEle, int nEvent, void *pFun); 
XC_API BOOL WINAPI XEle_RemoveEventC(HELE hEle, int nEvent, void *pFun); //�Ƴ��¼�����C��ʽ
XC_API int  WINAPI XEle_SendEvent(HELE hEle, HELE hEventEle, int nEvent, WPARAM wParam, LPARAM lParam);
XC_API BOOL WINAPI XEle_PostEvent(HELE hEle, HELE hEventEle, int nEvent, WPARAM wParam, LPARAM lParam);
XC_API BOOL WINAPI XEle_IsShow(HELE hEle);
XC_API BOOL WINAPI XEle_IsEnable(HELE hEle);
XC_API BOOL WINAPI XEle_IsEnableFocus(HELE hEle);
XC_API BOOL WINAPI XEle_IsDrawFocus(HELE hEle);
XC_API BOOL WINAPI XEle_IsEnableEvent_XE_PAINT_END(HELE hEle);
XC_API BOOL WINAPI XEle_IsMouseThrough(HELE hEle);
XC_API BOOL WINAPI XEle_IsBkTransparent(HELE hEle);
XC_API BOOL WINAPI XEle_IsKeyTab(HELE hEle);
XC_API BOOL WINAPI XEle_IsSwitchFocus(HELE hEle);
XC_API BOOL WINAPI XEle_IsEnable_XE_MOUSEWHEEL(HELE hEle);
XC_API void WINAPI XEle_Enable(HELE hEle, BOOL bEnable);
XC_API void WINAPI XEle_EnableFocus(HELE hEle, BOOL bEnable);
XC_API void WINAPI XEle_EnableDrawFocus(HELE hEle, BOOL bEnable);
XC_API void WINAPI XEle_EnableEvent_XE_PAINT_END(HELE hEle,BOOL bEnable);
XC_API void WINAPI XEle_EnableBkTransparent(HELE hEle,BOOL bEnable);
XC_API void WINAPI XEle_EnableMouseThrough(HELE hEle,BOOL bEnable);
XC_API void WINAPI XEle_EnableKeyTab(HELE hEle,BOOL bEnable);
XC_API void WINAPI XEle_EnableSwitchFocus(HELE hEle,BOOL bEnable);
XC_API void WINAPI XEle_EnableEvent_XE_MOUSEWHEEL(HELE hEle,BOOL bEnable);
XC_API BOOL WINAPI XEle_SetRect(HELE hEle, RECT *pRect,BOOL bRedraw=FALSE);
XC_API BOOL WINAPI XEle_SetRectEx(HELE hEle, int x, int y, int cx, int cy, BOOL bRedraw=FALSE);
XC_API BOOL WINAPI XEle_SetRectLogic(HELE hEle, RECT *pRect, BOOL bRedraw=FALSE); //�߼�ģʽ����
XC_API void WINAPI XEle_GetRect(HELE hEle, RECT *pRect);   //����븸����,���۹۲�ģʽ
XC_API void WINAPI XEle_GetRectLogic(HELE hEle, RECT *pRect); //����븸����,�߼�ģʽ
XC_API void WINAPI XEle_GetClientRect(HELE hEle, RECT *pRect);  //���Ͻ�Ϊ0��0����
XC_API void WINAPI XEle_GetWndClientRect(HELE hEle,out_ RECT *pRect);
XC_API int  WINAPI XEle_GetWidth(HELE hEle);
XC_API int  WINAPI XEle_GetHeight(HELE hEle);
XC_API void WINAPI XEle_RectWndClientToEleClient(HELE hEle, in_out_ RECT *pRect);
XC_API void WINAPI XEle_PointWndClientToEleClient(HELE hEle, in_out_ POINT *pPt); 
XC_API void WINAPI XEle_RectClientToWndClient(HELE hEle,in_out_ RECT *pRect);
XC_API void WINAPI XEle_PointClientToWndClient(HELE hEle, in_out_ POINT *pPt);
XC_API BOOL WINAPI XEle_AddEle(HELE hEle, HELE hChildEle);
XC_API BOOL WINAPI XEle_InsertEle(HELE hEle,HELE hChildEle,int index);  //���뵽ָ��λ��
XC_API void WINAPI XEle_RemoveEle(HELE hEle);
XC_API BOOL WINAPI XEle_AddShape(HELE hEle,HXCGUI hShape);
XC_API BOOL WINAPI XEle_SetZOrder(HELE hEle, int index); 
XC_API BOOL WINAPI XEle_SetZOrderEx(HELE hEle, HELE hDestEle,zorder_ nType);
XC_API int  WINAPI XEle_GetZOrder(HELE hEle); 
XC_API void WINAPI XEle_ShowEle(HELE hEle, BOOL bShow);
XC_API XC_OBJECT_TYPE WINAPI XEle_GetType(HELE hEle);
XC_API HWND WINAPI XEle_GetHWND(HELE hEle);
XC_API HWINDOW WINAPI XEle_GetHWINDOW(HELE hEle);
XC_API void WINAPI XEle_SetCursor(HELE hEle, HCURSOR hCursor);
XC_API HCURSOR WINAPI XEle_GetCursor(HELE hEle);
XC_API void WINAPI XEle_SetID(HELE hEle, int id);
XC_API int  WINAPI XEle_GetID(HELE hEle);
XC_API HELE WINAPI XEle_GetParentEle(HELE hEle);
XC_API HXCGUI WINAPI XEle_GetParent(HELE hEle);
XC_API void WINAPI XEle_SetTextColor(HELE hEle, COLORREF color,BYTE alpha=255);
XC_API COLORREF WINAPI XEle_GetTextColor(HELE hEle);
XC_API void WINAPI XEle_SetFocusBorderColor(HELE hEle, COLORREF color,BYTE alpha=255);
XC_API COLORREF WINAPI XEle_GetFocusBorderColor(HELE hEle);
XC_API void WINAPI XEle_SetFont(HELE hEle,HFONTX hFontx);
XC_API HFONTX WINAPI XEle_GetFont(HELE hEle);
XC_API void WINAPI XEle_SetAlpha(HELE hEle,BYTE alpha);
XC_API int  WINAPI XEle_GetChildCount(HELE hEle);
XC_API HELE WINAPI XEle_GetChildByIndex(HELE hEle,int index);
XC_API HELE WINAPI XEle_GetChildByID(HELE hEle,int id);
XC_API int  WINAPI XEle_GetChildShapeCount(HELE hEle);
XC_API HXCGUI WINAPI XEle_GetChildShapeByIndex(HELE hEle, int index);
XC_API HELE WINAPI XEle_HitChildEle(HELE hEle,in_ POINT  *pPt);  //�ж���������ĸ�Ԫ����
XC_API void WINAPI XEle_BindLayoutObject(HELE hEle,HXCGUI hLayout);
XC_API HXCGUI WINAPI XEle_GetLayoutObject(HELE hEle);
XC_API HXCGUI WINAPI XEle_GetParentLayoutObject(HELE hEle);
XC_API void WINAPI XEle_SetUserData(HELE hEle,int nData);
XC_API int  WINAPI XEle_GetUserData(HELE hEle);
XC_API void WINAPI XEle_GetContentSize(HELE hEle,out_ SIZE* pSize);
XC_API void WINAPI XEle_SetCapture(HELE hEle,BOOL b);
XC_API void WINAPI XEle_SetLayoutWidth(HELE hEle,layout_size_type_ nType,int nWidth);
XC_API void WINAPI XEle_SetLayoutHeight(HELE hEle,layout_size_type_ nType,int nHeight);
XC_API void WINAPI XEle_GetLayoutWidth(HELE hEle, out_ layout_size_type_ *pType,out_ int *pWidth);
XC_API void WINAPI XEle_GetLayoutHeight(HELE hEle, out_ layout_size_type_ *pType,out_ int *pHeight);
XC_API void WINAPI XEle_RedrawEle(HELE hEle,BOOL bImmediate=FALSE);
XC_API void WINAPI XEle_RedrawRect(HELE hEle,RECT *pRect,BOOL bImmediate=FALSE);
XC_API void WINAPI XEle_Destroy(HELE hEle);  //����
XC_API void WINAPI XEle_AddBkBorder(HELE hEle,COLORREF color,BYTE alpha, int width);
XC_API void WINAPI XEle_AddBkFill(HELE hEle,COLORREF color,BYTE alpha);
XC_API void WINAPI XEle_AddBkImage(HELE hEle,HIMAGE hImage);
XC_API int  WINAPI XEle_GetBkInfoCount(HELE hEle);
XC_API void WINAPI XEle_ClearBkInfo(HELE hEle);
XC_API HBKINFOM WINAPI XEle_GetBkInfoManager(HELE hEle);
XC_API int  WINAPI XEle_GetStateFlags(HELE hEle); //��ȡ���״̬
XC_API BOOL WINAPI XEle_DrawFocus(HELE hEle,HDRAW hDraw,RECT* pRect);
XC_API void WINAPI XEle_EnableTransparentChannel(HELE hEle,BOOL bEnable);
XC_API void WINAPI XEle_SetToolTip(HELE hEle, const wchar_t* pText);
XC_API void WINAPI XEle_GetToolTip(HELE hEle, out_ wchar_t  *pOut, int nOutLen);
XC_API void WINAPI XEle_EnableToolTip(HELE hEle, BOOL bEnable);
XC_API void WINAPI XEle_AdjustLayoutObject(HELE hEle);
XC_API void WINAPI XEle_AdjustLayout(HELE hEle);
XC_API BOOL WINAPI XEle_RegEventTest(int nEvent,BYTE* pParamType); //���ص����������Ƿ���ȷ
XC_API HFONTX WINAPI XFont_Create(int size);//��������
XC_API HFONTX WINAPI XFont_Create2(const wchar_t *pName=L"����",int size=12,BOOL bBold=FALSE,BOOL bItalic=FALSE,BOOL bUnderline=FALSE,BOOL bStrikeOut=FALSE);
XC_API HFONTX WINAPI XFont_Create3(const xc_font_info_i*  pInfo);
XC_API HFONTX WINAPI XFont_CreateEx(LOGFONTW *pFontInfo);
XC_API HFONTX WINAPI XFont_CreateFromHFONT(HFONT hFont);
XC_API HFONTX WINAPI XFont_CreateFromFont(void*  pFont);
XC_API void   WINAPI XFont_EnableAutoDestroy(HFONTX hFontX,BOOL bEnable);
XC_API void* WINAPI XFont_GetFont(HFONTX hFontX);
XC_API void  WINAPI XFont_GetFontInfo(HFONTX hFontX,out_ xc_font_info_i*  pInfo);
XC_API void  WINAPI XFont_AddRef(HFONTX hFontX);   //�������ü���
XC_API void  WINAPI XFont_Release(HFONTX hFontX);  //�ͷ����ü���
XC_API int   WINAPI XFont_GetRefCount(HFONTX hFontX); 
XC_API void  WINAPI XFont_Destroy(HFONTX hFontX);  //��������
XC_API HWINDOW WINAPI XFrameWnd_Create(int x, int y, int cx, int cy, wchar_t *pTitle, HWND hWndParent, int XCStyle);  //��������
XC_API HWINDOW WINAPI XFrameWnd_CreateEx(DWORD dwExStyle, wchar_t* lpClassName, wchar_t* lpWindowName, DWORD dwStyle, int x, int y, int cx, int cy, HWND hWndParent, int XCStyle);  //��������
XC_API void WINAPI XFrameWnd_GetLayoutAreaRect(HWINDOW hWindow,out_ RECT *pRect); //��ȡ�ͻ���������������
XC_API void WINAPI XFrameWnd_SetView(HWINDOW hWindow,HELE hEle);
XC_API void WINAPI XFrameWnd_SetPaneSplitBarColor(HWINDOW hWindow, COLORREF color, BYTE alpha=255);
XC_API BOOL WINAPI XFrameWnd_AddPane(HWINDOW hWindow,HELE hPaneDest,HELE hPaneNew,align_type_ align);
XC_API BOOL WINAPI XFrameWnd_MergePane(HWINDOW hWindow,HELE hPaneDest,HELE hPaneNew);
XC_API HIMAGE WINAPI XImage_LoadFile(const wchar_t *pImageName,BOOL bStretch=FALSE);//���ļ��м���ͼƬ
XC_API HIMAGE WINAPI XImage_LoadFileAdaptive(const wchar_t *pImageName,int leftSize,int topSize,int rightSize,int bottomSize);//���ļ��м���ͼƬ
XC_API HIMAGE WINAPI XImage_LoadFileRect(const wchar_t *pImageName,int x,int y,int cx,int cy);  //����ͼƬ,ָ������
XC_API HIMAGE WINAPI XImage_LoadResAdaptive(int id,const wchar_t *pType,int leftSize,int topSize,int rightSize,int bottomSize);//����Դ�м���ͼƬ
XC_API HIMAGE WINAPI XImage_LoadRes(int id,const wchar_t *pType,BOOL bStretch=FALSE);//����Դ�м���ͼƬ
XC_API HIMAGE WINAPI XImage_LoadZip(const wchar_t *pZipFileName,const wchar_t *pImageName,const wchar_t *pPassword=NULL,BOOL bStretch=FALSE);//��ZIP�м���ͼƬ
XC_API HIMAGE WINAPI XImage_LoadZipAdaptive(const wchar_t *pZipFileName,const wchar_t *pImageName,const wchar_t *pPassword,int x1,int x2,int y1,int y2);//��ZIP�м���ͼƬ
XC_API HIMAGE WINAPI XImage_LoadZipRect(const wchar_t *pZipFileName,const wchar_t *pImageName,const wchar_t *pPassword,int x,int y,int cx,int cy);
XC_API HIMAGE WINAPI XImage_LoadMemory(void* pBuffer,int nSize,BOOL bStretch);
XC_API HIMAGE WINAPI XImage_LoadMemoryRect(void* pBuffer,int nSize,int x,int y,int cx,int cy,BOOL bStretch);
XC_API HIMAGE WINAPI XImage_LoadMemoryAdaptive(void* pBuffer,int nSize,int leftSize,int topSize,int rightSize,int bottomSize);
XC_API HIMAGE WINAPI XImage_LoadFromImage(void *pImage);
XC_API HIMAGE WINAPI XImage_LoadFileFromExtractIcon(const wchar_t *pImageName);
XC_API HIMAGE WINAPI XImage_LoadFileFromHICON(HICON hIcon);
XC_API HIMAGE WINAPI XImage_LoadFileFromHBITMAP(HBITMAP hBitmap);
XC_API BOOL WINAPI XImage_IsStretch(HIMAGE hImage);   //�Ƿ�����ͼƬ
XC_API BOOL WINAPI XImage_IsAdaptive(HIMAGE hImage);  //�Ƿ�Ϊ����ӦͼƬ
XC_API BOOL WINAPI XImage_IsTile(HIMAGE hImage);      //�Ƿ�Ϊƽ��ͼƬ
XC_API BOOL WINAPI XImage_SetDrawType(HIMAGE hImage,image_draw_type_ nType);//����ͼƬ��������
XC_API BOOL WINAPI XImage_SetDrawTypeAdaptive(HIMAGE hImage,int leftSize,int topSize,int rightSize,int bottomSize);//����ͼƬ����Ӧ
XC_API void WINAPI XImage_SetTranColor(HIMAGE hImage,COLORREF color); //����͸��ɫ
XC_API void WINAPI XImage_SetTranColorEx(HIMAGE hImage,COLORREF color,BYTE tranColor); //����͸��ɫ
XC_API float WINAPI XImage_SetRotateAngle(HIMAGE hImage,float  fAngle);
XC_API void WINAPI XImage_EnableTranColor(HIMAGE hImage,BOOL bEnable); //����͸��ɫ
XC_API void WINAPI XImage_EnableAutoDestroy(HIMAGE hImage,BOOL bEnable); //���û�ر��Զ�����,����UIԪ�ع���ʱ��Ч
XC_API void WINAPI XImage_EnableCenter(HIMAGE hImage,BOOL bCenter); //bCenter
XC_API BOOL WINAPI XImage_IsCenter(HIMAGE hImage);
XC_API image_draw_type_ WINAPI XImage_GetDrawType(HIMAGE hImage); //��ȡͼƬ��������
XC_API int WINAPI XImage_GetWidth(HIMAGE hImage);
XC_API int WINAPI XImage_GetHeight(HIMAGE hImage);
XC_API void WINAPI XImage_AddRef(HIMAGE hImage);
XC_API void WINAPI XImage_Release(HIMAGE hImage);
XC_API int  WINAPI XImage_GetRefCount(HIMAGE hImage);
XC_API void WINAPI XImage_Destroy(HIMAGE hImage);
XC_API HXCGUI WINAPI XLayout_Create();
XC_API void WINAPI XLayout_Destroy(HXCGUI hLayout);
XC_API void WINAPI XLayout_AddEle(HXCGUI hLayout,HELE hEle);
XC_API void WINAPI XLayout_AddLayoutObject(HXCGUI hLayout,HXCGUI hLayoutObject);
XC_API void WINAPI XLayout_AddShape(HXCGUI hLayout,HXCGUI hShape);
XC_API BOOL WINAPI XLayout_Add(HXCGUI hLayout,HXCGUI hChild);
XC_API BOOL WINAPI XLayout_Insert(HXCGUI hLayout,HXCGUI hChild,int index);
XC_API void WINAPI XLayout_RemoveLayout(HXCGUI hLayout);
XC_API void WINAPI XLayout_RemoveChild(HXCGUI hLayout,HXCGUI hChild);
XC_API int  WINAPI XLayout_GetZOrder(HXCGUI hLayout,HXCGUI hChild); //��ȡ���б��е�Z��λ������
XC_API void WINAPI XLayout_AdjustLayout(HXCGUI hLayout);
XC_API void WINAPI XLayout_SetRectFrame(HXCGUI hLayout,RECT *pRect);
XC_API void WINAPI XLayout_GetRect(HXCGUI hLayout,out_ RECT *pRect);
XC_API void WINAPI XLayout_GetRectFrame(HXCGUI hLayout,out_ RECT *pRect);
XC_API HWINDOW WINAPI XLayout_GetWindow(HXCGUI hLayout);
XC_API HELE WINAPI XLayout_GetEle(HXCGUI hLayout);
XC_API HXCGUI WINAPI XLayout_GetParentLayout(HXCGUI hLayout);
XC_API HXCGUI WINAPI XLayout_GetParent(HXCGUI hLayout);
XC_API void WINAPI XLayout_SetID(HXCGUI hLayout,int nID);
XC_API int  WINAPI XLayout_GetID(HXCGUI hLayout);
XC_API void WINAPI XLayout_SetHorizon(HXCGUI hLayout,BOOL bHorizon);
XC_API void WINAPI XLayout_SetAlignH(HXCGUI hLayout,layout_align_ nAlign);
XC_API void WINAPI XLayout_SetAlignV(HXCGUI hLayout,layout_align_ nAlign);
XC_API void WINAPI XLayout_SetPadding(HXCGUI hLayout,int left,int top,int right,int bottom);
XC_API void WINAPI XLayout_SetSpace(HXCGUI hLayout,int nSpace);
XC_API void WINAPI XLayout_SetLayoutWidth(HXCGUI hLayout,layout_size_type_ nType,int nWidth);
XC_API void WINAPI XLayout_SetLayoutHeight(HXCGUI hLayout,layout_size_type_ nType,int nHeight);
XC_API void WINAPI XLayout_GetLayoutWidth(HXCGUI hLayout,out_ layout_size_type_ *pType,out_ int *pWidth);
XC_API void WINAPI XLayout_GetLayoutHeight(HXCGUI hLayout,out_ layout_size_type_ *pType,out_ int *pHeight);
XC_API int WINAPI XLayout_GetWidth(HXCGUI hLayout);
XC_API int WINAPI XLayout_GetHeight(HXCGUI hLayout);
XC_API int WINAPI XLayout_GetWidthIn(HXCGUI hLayout);
XC_API int WINAPI XLayout_GetHeightIn(HXCGUI hLayout);
XC_API void WINAPI XLayout_GetContentSize(HXCGUI hLayout,out_ SIZE* pSize);
XC_API void WINAPI XLayout_ShowLayout(HXCGUI hLayout,BOOL bShow);
XC_API int WINAPI XLayout_GetChildCount(HXCGUI hLayout);
XC_API XC_OBJECT_TYPE WINAPI XLayout_GetChildType(HXCGUI hLayout,int index);
XC_API HXCGUI WINAPI XLayout_GetChild(HXCGUI hLayout,int index);
XC_API void WINAPI XLayout_Draw(HXCGUI hLayout,HDRAW hDraw);
XC_API void WINAPI Layout_SetEle(HXCGUI hLayout,HELE hParent);
XC_API HELE WINAPI XListBox_Create(int x, int y, int cx, int cy,HXCGUI hParent=NULL);
XC_API void WINAPI XListBox_SetDrawItemBkFlags(HELE hEle, int nFlags);
XC_API BOOL WINAPI XListBox_SetItemData(HELE hEle, int iItem, int nUserData);
XC_API int  WINAPI XListBox_GetItemData(HELE hEle,int iItem);
XC_API BOOL WINAPI XListBox_SetItemInfo(HELE hEle,int iItem,in_ listBox_item_Info_i *pItem);
XC_API BOOL WINAPI XListBox_GetItemInfo(HELE hEle,int iItem,out_ listBox_item_Info_i *pItem);
XC_API void WINAPI XListBox_AddItemBkBorder(HELE hEle,list_item_state_ nState, COLORREF color,BYTE alpha, int width);
XC_API void WINAPI XListBox_AddItemBkFill(HELE hEle,list_item_state_ nState, COLORREF color,BYTE alpha);
XC_API void WINAPI XListBox_AddItemBkImage(HELE hEle,list_item_state_ nState, HIMAGE hImage);
XC_API int  WINAPI XListBox_GetItemBkInfoCount(HELE hEle);
XC_API void WINAPI XListBox_ClearItemBkInfo(HELE hEle);
XC_API BOOL WINAPI XListBox_SetSelectItem(HELE hEle,int iItem);
XC_API int  WINAPI XListBox_GetSelectItem(HELE hEle);
XC_API BOOL WINAPI XListBox_CancelSelectItem(HELE hEle,int iItem);
XC_API BOOL WINAPI XListBox_CancelSelectAll(HELE hEle);
XC_API int  WINAPI XListBox_GetSelectAll(HELE hEle,out_ int *pArray,int nArraySize);
XC_API int  WINAPI XListBox_GetSelectCount(HELE hEle);
XC_API int  WINAPI XListBox_GetItemMouseStay(HELE hEle);
XC_API BOOL WINAPI XListBox_SelectAll(HELE hEle);
XC_API void WINAPI XListBox_SetItemHeightDefault(HELE hEle,int nHeight,int nSelHeight);
XC_API void WINAPI XListBox_GetItemHeightDefault(HELE hEle,out_ int *pHeight,out_ int *pSelHeight);
XC_API int  WINAPI XListBox_GetItemIndexFromHXCGUI(HELE hEle,HXCGUI hXCGUI);
XC_API void WINAPI XListBox_SetRowSpace(HELE hEle,int nSpace);
XC_API int WINAPI  XListBox_GetRowSpace(HELE hEle);
XC_API int  WINAPI XListBox_HitTest(HELE hEle,POINT *pPt);
XC_API int  WINAPI XListBox_HitTestOffset(HELE hEle,POINT *pPt); //�Զ���ӹ�����ͼƫ����
XC_API BOOL WINAPI XListBox_SetItemTemplateXML(HELE hEle,const wchar_t* pXmlFile);
XC_API BOOL WINAPI XListBox_SetItemTemplateXMLFromString(HELE hEle,const char* pStringXML);
XC_API HXCGUI WINAPI XListBox_GetTemplateObject(HELE hEle,int iItem,int nTempItemID);
XC_API void WINAPI XListBox_EnableMultiSel(HELE hEle,BOOL bEnable);
XC_API void WINAPI XListBox_BindAdapter(HELE hEle,HXCGUI hAdapter);
XC_API HXCGUI WINAPI XListBox_GetAdapter(HELE hEle);
XC_API void WINAPI XListBox_RefreshData(HELE hEle);
XC_API HELE WINAPI XList_Create(int x,int y,int cx,int cy,HXCGUI hParent=NULL);
XC_API int WINAPI XList_AddColumn(HELE hEle,int width); //������
XC_API int WINAPI XList_InsertColumn(HELE hEle,int width,int iItem);
XC_API void WINAPI XList_EnableMultiSel(HELE hEle, BOOL bEnable);
XC_API void WINAPI XList_EnableDragChangeColumnWidth(HELE hEle, BOOL bEnable);
XC_API void WINAPI XList_SetDrawItemBkFlags(HELE hEle,int style);
XC_API void WINAPI XList_SetColumnWidth(HELE hEle,int iItem,int width);
XC_API void WINAPI XList_SetColumnMinWidth(HELE hEle,int iItem,int width);
XC_API void WINAPI XList_SetColumnWidthFixed(HELE hEle, int iColumn, BOOL bFixed);
XC_API int  WINAPI XList_GetColumnWidth(HELE hEle, int iColumn);  //��ȡ�п�
XC_API int  WINAPI XList_GetColumnCount(HELE hEle);  //��ȡ������
XC_API BOOL WINAPI XList_DeleteColumn(HELE hEle,int iItem);
XC_API void WINAPI XList_DeleteColumnAll(HELE hEle);
XC_API BOOL WINAPI XList_SetItemData(HELE hEle,int iItem,int iSubItem,int data);
XC_API int  WINAPI XList_GetItemData(HELE hEle,int iItem,int iSubItem);
XC_API BOOL WINAPI XList_SetSelectItem(HELE hEle,int iItem,BOOL bSelect);
XC_API int  WINAPI XList_GetSelectItem(HELE hEle);
XC_API int  WINAPI XList_GetSelectItemCount(HELE hEle);
XC_API void WINAPI XList_SetSelectAll(HELE hEle);
XC_API int  WINAPI XList_GetSelectAll(HELE hEle,out_ int *pArray,int nArraySize);
XC_API BOOL WINAPI XList_CancelSelectItem(HELE hEle, int iItem);
XC_API void WINAPI XList_CancelSelectAll(HELE hEle);
XC_API HELE WINAPI XList_GetHeaderHELE(HELE hEle);
XC_API void WINAPI XList_BindAdapter(HELE hEle,HXCGUI hAdapter);
XC_API void WINAPI XList_BindAdapterHeader(HELE hEle,HXCGUI hAdapter);
XC_API HXCGUI WINAPI XList_GetAdapter(HELE hEle);
XC_API BOOL WINAPI XList_SetItemTemplateXML(HELE hEle, const wchar_t* pXmlFile);
XC_API BOOL WINAPI XList_SetItemTemplateXMLFromString(HELE hEle, const char* pStringXML);
XC_API HXCGUI WINAPI XList_GetTemplateObject(HELE hEle, int iItem,int nTempItemID); //ͨ��ģ����ID,��ȡʵ����ģ����ID��Ӧ�Ķ���.
XC_API int    WINAPI XList_GetItemIndexFromHXCGUI(HELE hEle, HXCGUI hXCGUI);
XC_API HXCGUI WINAPI XList_GetHeaderTemplateObject(HELE hEle, int iItem,int nTempItemID);
XC_API int    WINAPI XList_GetHeaderItemIndexFromHXCGUI(HELE hEle, HXCGUI hXCGUI);
XC_API void WINAPI XList_SetHeaderHeight(HELE hEle, int height);
XC_API int  WINAPI XList_GetHeaderHeight(HELE hEle);
XC_API void WINAPI XList_AddItemBkBorder(HELE hEle, list_item_state_ nState, COLORREF color,BYTE alpha, int width);
XC_API void WINAPI XList_AddItemBkFill(HELE hEle, list_item_state_ nState, COLORREF color,BYTE alpha);
XC_API void WINAPI XList_AddItemBkImage(HELE hEle, list_item_state_ nState, HIMAGE hImage);
XC_API int  WINAPI XList_GetItemBkInfoCount(HELE hEle);
XC_API void WINAPI XList_ClearItemBkInfo(HELE hEle);
XC_API void WINAPI XList_SetItemHeightDefault(HELE hEle,int nHeight,int nSelHeight);
XC_API void WINAPI XList_GetItemHeightDefault(HELE hEle,out_ int *pHeight,out_ int *pSelHeight);
XC_API void WINAPI XList_SetRowSpace(HELE hEle,int nSpace);
XC_API int  WINAPI XList_GetRowSpace(HELE hEle);
XC_API BOOL WINAPI XList_HitTest(HELE hEle,POINT *pPt,out_ int *piItem,out_ int *piSubItem);
XC_API BOOL WINAPI XList_HitTestOffset(HELE hEle,POINT *pPt,out_ int *piItem,out_ int *piSubItem);
XC_API void WINAPI XList_RefreshData(HELE hEle);
XC_API HELE WINAPI XListView_Create(int x, int y, int cx, int cy,HXCGUI hParent=NULL);
XC_API void WINAPI XListView_BindAdapter(HELE hEle,HXCGUI hAdapter);
XC_API HXCGUI WINAPI XListView_GetAdapter(HELE hEle);
XC_API BOOL WINAPI XListView_SetItemTemplateXML(HELE hEle,const wchar_t* pXmlFile);
XC_API BOOL WINAPI XListView_SetItemTemplateXMLFromString(HELE hEle,const char* pStringXML);
XC_API HXCGUI WINAPI XListView_GetTemplateObject(HELE hEle,int iGroup,int iItem,int nTempItemID);
XC_API HXCGUI WINAPI XListView_GetTemplateObjectGroup(HELE hEle,int iGroup,int nTempItemID);
XC_API BOOL WINAPI XListView_GetItemIDFromHXCGUI(HELE hEle, HXCGUI hXCGUI,out_ int* piGroup,out_ int* piItem);
XC_API BOOL WINAPI XListView_HitTest(HELE hEle,in_ POINT* pPt,out_ int* pOutGroup,out_ int* pOutItem);
XC_API int  WINAPI XListView_HitTestOffset(HELE hEle,in_ POINT *pPt,out_ int* pOutGroup,out_ int* pOutItem); //�Զ���ӹ�����ͼƫ����
XC_API void WINAPI XListView_EnableMultiSel(HELE hEle,BOOL bEnable);
XC_API void WINAPI XListView_SetDrawItemBkFlags(HELE hEle, int nFlags);
XC_API BOOL WINAPI XListView_SetSelectItem(HELE hEle,int iGroup,int iItem);
XC_API BOOL WINAPI XListView_GetSelectItem(HELE hEle,int *piGroup,int *piItem);
XC_API int  WINAPI XListView_GetSelectItemCount(HELE hEle);
XC_API int  WINAPI XListView_GetSelectItemAll(HELE hEle,out_ listView_item_id_i *pArray,int nArraySize);
XC_API void WINAPI XListView_SetSelectItemAll(HELE hEle);
XC_API void WINAPI XListView_CancelSelectItemAll(HELE hEle);
XC_API void WINAPI XListView_SetColumnSpace(HELE hEle,int space); //�����м��
XC_API void WINAPI XListView_SetRowSpace(HELE hEle,int space); //�����м��
XC_API void WINAPI XListView_SetAlignSizeLeft(HELE hEle,int size);
XC_API void WINAPI XListView_SetAlignSizeTop(HELE hEle,int size);
XC_API void WINAPI XListView_SetItemSize(HELE hEle,int width,int height);
XC_API void WINAPI XListView_GetItemSize(HELE hEle,SIZE* pSize);
XC_API void WINAPI XListView_SetGroupHeight(HELE hEle,int height);
XC_API int  WINAPI XListView_GetGroupHeight(HELE hEle);
XC_API void WINAPI XListView_SetGroupUserData(HELE hEle,int iGroup, int nData);
XC_API void WINAPI XListView_SetItemUserData(HELE hEle,int iGroup, int iItem, int nData);
XC_API int WINAPI XListView_GetGroupUserData(HELE hEle,int iGroup);
XC_API int WINAPI XListView_GetItemUserData(HELE hEle,int iGroup, int iItem);
XC_API void WINAPI XListView_AddItemBkBorder(HELE hEle,list_item_state_ nState, COLORREF color,BYTE alpha, int width);
XC_API void WINAPI XListView_AddItemBkFill(HELE hEle,list_item_state_ nState, COLORREF color,BYTE alpha);
XC_API void WINAPI XListView_AddItemBkImage(HELE hEle,list_item_state_ nState, HIMAGE hImage);
XC_API int  WINAPI XListView_GetItemBkInfoCount(HELE hEle);
XC_API void WINAPI XListView_ClearItemBkInfo(HELE hEle);
XC_API void WINAPI XListView_RefreshData(HELE hEle);
XC_API BOOL WINAPI XListView_ExpandGroup(HELE hEle,int iGroup,BOOL bExpand);
XC_API HELE WINAPI XMenuBar_Create(int x, int y, int cx, int cy, HXCGUI hParent = NULL);
XC_API int  WINAPI XMenuBar_AddButton(HELE hEle, wchar_t *pText);     //���ӵ����˵���ť
XC_API void WINAPI XMenuBar_SetButtonHeight(HELE hEle,int height);
XC_API HMENUX WINAPI XMenuBar_GetMenu(HELE hEle, int nIndex);
XC_API BOOL WINAPI XMenuBar_DeleteButton(HELE hEle,int nIndex); //ɾ���˵��������,ͬʱ�ð�ť�µĵ����˵�Ҳ������
XC_API HMENUX WINAPI XMenu_Create();
XC_API void WINAPI XMenu_AddItem(HMENUX hMenu, int nID,const wchar_t *pText, int parentId = XC_ID_ROOT, int nFlags = 0); //��Ӳ˵���
XC_API void WINAPI XMenu_AddItemIcon(HMENUX hMenu, int nID,const wchar_t *pText,int nParentID,HIMAGE hImage,int nFlags=0);
XC_API void WINAPI XMenu_InsertItem(HMENUX hMenu, int nID, const wchar_t *pText, int nFlags, int insertID);
XC_API void WINAPI XMenu_InsertItemIcon(HMENUX hMenu, int nID, const wchar_t *pText, HIMAGE hIcon, int nFlags, int insertID);
XC_API void WINAPI XMenu_SetAutoDestroy(HMENUX hMenu, BOOL bAuto); //�Ƿ��Զ����ٶ���,Ĭ�ϵ����˵��رպ��Զ�����
XC_API void WINAPI XMenu_EnableDrawBackground(HMENUX hMenu,BOOL bEnable); //�Ƿ����û����Ʋ˵�����
XC_API void WINAPI XMenu_EnableDrawItem(HMENUX hMenu, BOOL bEnable);
XC_API BOOL WINAPI XMenu_Popup(HMENUX hMenu, HWND hParentWnd, int x, int y, HELE hParentEle=NULL, menu_popup_position_ nPosition=menu_popup_position_left_top); //�����˵�
XC_API void WINAPI XMenu_DestroyMenu(HMENUX hMenu);
XC_API void WINAPI XMenu_CloseMenu(HMENUX hMenu);
XC_API void WINAPI XMenu_SetBkImage(HMENUX hMenu, HIMAGE hImage);
XC_API BOOL WINAPI XMenu_SetItemText(HMENUX hMenu,int nID,const wchar_t *pText); //�������ı�
XC_API BOOL WINAPI XMenu_GetItemText(HMENUX hMenu, int nID,out_ wchar_t *pOut, int nOutLen);
XC_API int  WINAPI XMenu_GetItemTextLength(HMENUX hMenu, int nID);
XC_API BOOL WINAPI XMenu_SetItemIcon(HMENUX hMenu, int nID, HIMAGE hIcon);
XC_API BOOL WINAPI XMenu_SetItemFlags(HMENUX hMenu,int nID,int uFlags);   //����������
XC_API void WINAPI XMenu_SetItemHeight(HMENUX hMenu,int height); //���ò˵���߶�
XC_API int  WINAPI XMenu_GetItemHeight(HMENUX hMenu);
XC_API void WINAPI XMenu_SetBorderColor(HMENUX hMenu, COLORREF crColor,BYTE alpha=255);
XC_API int  WINAPI XMenu_GetLeftWidth(HMENUX hMenu); //��ȡ�����
XC_API int  WINAPI XMenu_GetLeftSpaceText(HMENUX hMenu);  //��ȡ�˵����ı�����
XC_API int  WINAPI XMenu_GetItemCount(HMENUX hMenu); //��ȡ�˵�������,�����Ӳ˵���
XC_API BOOL WINAPI XMenu_SetItemCheck(HMENUX hMenu, int nID,BOOL bCheck);
XC_API BOOL WINAPI XMenu_IsItemCheck(HMENUX hMenu, int nID);
XC_API HWINDOW WINAPI XModalWnd_Create(int nWidth,int nHeight,wchar_t *pTitle,HWND hWndParent,int XCStyle=xc_window_style_modal);
XC_API HWINDOW WINAPI XModalWnd_CreateEx(DWORD dwExStyle, wchar_t* lpClassName, wchar_t* lpWindowName, DWORD dwStyle, int x, int y, int cx, int cy, HWND hWndParent, int XCStyle=xc_window_style_modal);  //��������
XC_API void WINAPI XModalWnd_EnableAutoClose(HWINDOW hWindow,BOOL bEnable);
XC_API int  WINAPI XModalWnd_DoModal(HWINDOW hWindow);     //����ģ̬����
XC_API void WINAPI XModalWnd_EndModal(HWINDOW hWindow,int nResult); //��ֹ
XC_API HELE WINAPI XPane_Create(const wchar_t *pName,int nWidth,int nHeight,HWINDOW hFrameWnd=NULL);
XC_API void WINAPI XPane_SetView(HELE hEle, HELE hView);
XC_API BOOL WINAPI XPane_IsShowPane(HELE hEle); //�жϴ����Ƿ�����
XC_API void WINAPI XPane_SetTitle(HELE hEle, wchar_t* pTitle);
XC_API void WINAPI XPane_GetTitle(HELE hEle, out_ wchar_t* pOut,int nOutLen);
XC_API void WINAPI XPane_SetCaptionHeight(HELE hEle,int nHeight);
XC_API int  WINAPI XPane_GetCaptionHeight(HELE hEle);
XC_API void  WINAPI XPane_HidePane(HELE hEle);     //���ش���
XC_API void  WINAPI XPane_ShowPane(HELE hEle);     //����-��ʾ����
XC_API void  WINAPI XPane_DockPane(HELE hEle);      //ͣ������,�Զ�����
XC_API void  WINAPI XPane_LockPane(HELE hEle);      //��������
XC_API void  WINAPI XPane_FloatPane(HELE hEle);     //��������,������ͷ��
XC_API BOOL WINAPI XFloatWnd_EnableCaptionContent(HWINDOW hWindow, BOOL bEnable);
XC_API HXCGUI WINAPI XFloatWnd_GetCaptionLayout(HWINDOW hWindow);
XC_API HXCGUI WINAPI XFloatWnd_GetCaptionShapeText(HWINDOW hWindow);
XC_API HELE   WINAPI XFloatWnd_GetCaptionButtonClose(HWINDOW hWindow);
XC_API void  WINAPI XFloatWnd_SetTitle(HWINDOW hWindow, const wchar_t*  pTitle);
XC_API void  WINAPI XFloatWnd_GetTitle(HWINDOW hWindow, out_ wchar_t*  pOut, int nOutLen);
XC_API HELE WINAPI XProgBar_Create(int x, int y, int cx, int cy,HXCGUI hParent=NULL);
XC_API void WINAPI XProgBar_SetRange(HELE hEle,int range);
XC_API int WINAPI XProgBar_GetRange(HELE hEle);
XC_API void WINAPI XProgBar_SetSpaceTwo(HELE hEle,int leftSize,int rightSize);
XC_API void WINAPI XProgBar_SetPos(HELE hEle,int pos);
XC_API int  WINAPI XProgBar_GetPos(HELE hEle);
XC_API void WINAPI XProgBar_SetHorizon(HELE hEle,BOOL bHorizon);
XC_API void WINAPI XProgBar_SetImageLoad(HELE hEle,HIMAGE hImage);
XC_API HELE WINAPI XPGrid_Create(int x,int y,int cx,int cy,HXCGUI hParent=NULL);
XC_API int  WINAPI XPGrid_AddItem(HELE hEle,const wchar_t *pName,propertyGrid_item_type_ nType,int nParentID=XC_ID_ROOT); //�����
XC_API int  WINAPI XPGrid_AddItemString(HELE hEle,const wchar_t *pName,const wchar_t *pValue,int nParentID=XC_ID_ROOT);
XC_API void WINAPI XPGrid_DeleteAll(HELE hEle);
XC_API HELE WINAPI XPGrid_GetItemHELE(HELE hEle,int nItemID);
XC_API void WINAPI XPGrid_SetWidth(HELE hEle,int nWidth);
XC_API BOOL WINAPI XPGrid_SetItemValue(HELE hEle,int nItemID,const wchar_t* pValue);
XC_API BOOL WINAPI XPGrid_SetItemValueInt(HELE hEle,int nItemID,int nValue);
XC_API const wchar_t* WINAPI XPGrid_GetItemValue(HELE hEle,int nItemID);
XC_API int  WINAPI XPGrid_HitTest(HELE hEle,POINT *pPt,BOOL *pbExpandButton);
XC_API int  WINAPI XPGrid_HitTestOffset(HELE hEle,POINT *pPt,BOOL *pbExpandButton);
XC_API BOOL WINAPI XPGrid_ExpandItem(HELE hEle,int nItemID,BOOL bExpand);//չ����
XC_API int  WINAPI XPGrid_GetSelItem(HELE hEle);
XC_API BOOL WINAPI XPGrid_SetSelItem(HELE hEle, int nItemID);
XC_API HELE WINAPI XRichEditColor_Create(int x, int y, int cx, int cy, HXCGUI hParent);
XC_API void WINAPI XRichEditColor_SetColor(HELE hEle,COLORREF color);//������ɫ
XC_API COLORREF WINAPI XRichEditColor_GetColor(HELE hEle); //��ȡ��ɫRGBֵ
XC_API HELE WINAPI XRichEditSet_Create(int x, int y, int cx, int cy, HXCGUI hParent);
XC_API HELE WINAPI XRichEditFile_Create(int x, int y, int cx, int cy, HXCGUI hParent = NULL);
XC_API void WINAPI XRichEditFile_SetOpenFileType(HELE hEle,const wchar_t *pType); //���ô��ļ�����
XC_API void WINAPI XRichEditFile_SetDefaultFile(HELE hEle,const wchar_t *pFile); //����Ĭ��Ŀ¼�ļ�
XC_API void WINAPI XRichEditFile_SetRelativeDir(HELE hEle,const wchar_t *pDir); //TODO:�������·��
XC_API HELE WINAPI XRichEditFolder_Create(int x, int y, int cx, int cy, HXCGUI hParent);
XC_API void WINAPI XRichEditFolder_SetDefaultDir(HELE hEle,const wchar_t* pDir);  //����Ĭ��Ŀ¼
XC_API HELE WINAPI XRichEdit_Create(int x, int y, int cx, int cy, HXCGUI hParent = NULL);
XC_API void WINAPI XRichEdit_InsertString(HELE hEle, const wchar_t *pString, const xc_font_info_i *pFont=NULL,COLORREF color=0);
XC_API BOOL WINAPI XRichEdit_InsertImage(HELE hEle, HIMAGE hImage,const wchar_t *pImagePath);
XC_API BOOL WINAPI XRichEdit_InsertGif(HELE hEle, HIMAGE hImage,const wchar_t *pImagePath);
XC_API void WINAPI XRichEdit_InsertStringEx(HELE hEle, int iRow, int iColumn, const wchar_t *pString, const xc_font_info_i *pFont=NULL,COLORREF color=0);
XC_API BOOL WINAPI XRichEdit_InsertImageEx(HELE hEle, int iRow,int iColumn,HIMAGE hImage,const wchar_t *pImagePath);
XC_API BOOL WINAPI XRichEdit_InsertGifEx(HELE hEle, int iRow,int iColumn,HIMAGE hImage,const wchar_t *pImagePath);
XC_API void WINAPI XRichEdit_EnableReadOnly(HELE hEle, BOOL bEnable);
XC_API void WINAPI XRichEdit_EnableMultiLine(HELE hEle, BOOL bEnable);
XC_API void WINAPI XRichEdit_EnablePassword(HELE hEle, BOOL bEnable);
XC_API void WINAPI XRichEdit_EnableEvent_XE_RICHEDIT_CHANGE(HELE hEle,BOOL bEnable);
XC_API void WINAPI XRichEdit_EnableAutoWrap(HELE hEle, BOOL bEnable);
XC_API void WINAPI XRichEdit_EnableAutoCancelSel(HELE hEle, BOOL bEnable);
XC_API void WINAPI XRichEdit_EnableAutoSelAll(HELE hEle, BOOL bEnable);
XC_API void WINAPI XRichEdit_SetLimitNum(HELE hEle, int nNumber);
XC_API void WINAPI XRichEdit_SetText(HELE hEle,const wchar_t* pString);
XC_API void WINAPI XRichEdit_SetTextInt(HELE hEle,int nVaule);
XC_API int  WINAPI XRichEdit_GetText(HELE hEle,out_ wchar_t* pOut,int len);
XC_API void  WINAPI XRichEdit_GetHTMLFormat(HELE hEle, out_ wchar_t* pOut, int len);  //��ȡHTML��ʽ����
XC_API void* WINAPI XRichEdit_GetData(HELE hEle,out_ int *pDataSize=NULL);
XC_API BOOL  WINAPI XRichEdit_InsertData(HELE hEle, void *pData, int iRow, int iColumn);
XC_API int  WINAPI XRichEdit_GetTextLength(HELE hEle);
XC_API void WINAPI XRichEdit_SetRowHeight(HELE hEle,UINT nHeight); //����Ĭ���и�
XC_API void WINAPI XRichEdit_SetDefaultText(HELE hEle,const wchar_t*  pString);
XC_API void WINAPI XRichEdit_SetDefaultTextColor(HELE hEle,COLORREF color, BYTE alpha);
XC_API int WINAPI XRichEdit_GetCurrentRow(HELE hEle);
XC_API int WINAPI XRichEdit_GetCurrentColumn(HELE hEle);
XC_API void WINAPI XRichEdit_SetCurrentPos(HELE hEle,int iRow,int iColumn);
XC_API int WINAPI XRichEdit_GetRowCount(HELE hEle);
XC_API int WINAPI XRichEdit_GetRowLength(HELE hEle,int iRow);
XC_API int WINAPI XRichEdit_GetSelectText(HELE hEle,out_ wchar_t* pOut,int len);
XC_API BOOL WINAPI XRichEdit_GetSelectPosition(HELE hEle,out_ Position *pBegin, out_ Position *pEnd); 
XC_API BOOL WINAPI XRichEdit_SetSelect(HELE hEle,int iStartRow,int iStartCol,int iEndRow,int iEndCol);
XC_API BOOL WINAPI XRichEdit_SetItemFontEx(HELE hEle,int beginRow,int beginColumn,int endRow,int endColumn,xc_font_info_i *pFont);
XC_API BOOL WINAPI XRichEdit_SetItemColorEx(HELE hEle,int beginRow,int beginColumn,int endRow,int endColumn,COLORREF color,BYTE alpha=255);
XC_API void WINAPI XRichEdit_CancelSelect(HELE hEle);
XC_API void WINAPI XRichEdit_SetSelectBkColor(HELE hEle,COLORREF color,BYTE alpha=255);
XC_API BOOL WINAPI XRichEdit_IsEmpty(HELE hEle);
XC_API BOOL WINAPI XRichEdit_SelectAll(HELE hEle);    //ѡ����������
XC_API BOOL WINAPI XRichEdit_DeleteSelect(HELE hEle); //ɾ��ѡ������
XC_API void WINAPI XRichEdit_DeleteAll(HELE hEle);    //ɾ������
XC_API BOOL WINAPI XRichEdit_ClipboardCut(HELE hEle);      //����
XC_API BOOL WINAPI XRichEdit_ClipboardCopy(HELE hEle);     //���� ѡ�������
XC_API BOOL WINAPI XRichEdit_ClipboardPaste(HELE hEle);    //ճ�� ճ������������
XC_API HELE WINAPI XSBar_Create(int x, int y, int cx, int cy, HXCGUI hParent = NULL);
XC_API void WINAPI XSBar_SetRange(HELE hEle, int range);
XC_API int  WINAPI XSBar_GetRange(HELE hEle);
XC_API void  WINAPI XSBar_ShowButton(HELE hEle, BOOL bShow);
XC_API void WINAPI XSBar_SetSliderLength(HELE hEle, int length); //���û��鳤��
XC_API void WINAPI XSBar_SetSliderMinLength(HELE hEle, int minLength); //���û�����С����
XC_API BOOL WINAPI XSBar_SetHorizon(HELE hEle, BOOL bHorizon);  //ˮƽ��ʾ��ֱ
XC_API int  WINAPI XSBar_GetSliderMaxLength(HELE hEle);
XC_API BOOL WINAPI XSBar_ScrollUp(HELE hEle);       //�������
XC_API BOOL WINAPI XSBar_ScrollDown(HELE hEle);     //���ҹ���
XC_API BOOL WINAPI XSBar_ScrollTop(HELE hEle);      //����������
XC_API BOOL WINAPI XSBar_ScrollBottom(HELE hEle);   //�������ײ�
XC_API BOOL WINAPI XSBar_ScrollPos(HELE hEle, int pos); //������ָ����
XC_API HELE WINAPI XSBar_GetButtonUp(HELE hEle);
XC_API HELE WINAPI XSBar_GetButtonDown(HELE hEle);
XC_API HELE WINAPI XSBar_GetButtonSlider(HELE hEle);
XC_API HELE WINAPI XSView_Create(int x, int y, int cx, int cy, HXCGUI hParent = NULL);
XC_API BOOL WINAPI XSView_SetTotalSize(HELE hEle, int cx, int cy); //������ͼ�����ܴ�С(�������߿���)
XC_API void WINAPI XSView_GetTotalSize(HELE hEle, SIZE *pSize);  //��ȡ���õ����ݴ�С
XC_API BOOL WINAPI XSView_SetLineSize(HELE hEle,int nWidth,int nHeight);
XC_API void WINAPI XSView_GetLineSize(HELE hEle,out_ SIZE *pSize);
XC_API int  WINAPI XSView_GetViewPosH(HELE hEle);   //��ȡ�ӿ�ԭ��X����
XC_API int  WINAPI XSView_GetViewPosV(HELE hEle);   //��ȡ�ӿ�ԭ��Y����
XC_API int  WINAPI XSView_GetViewWidth(HELE hEle); 
XC_API int  WINAPI XSView_GetViewHeight(HELE hEle);
XC_API void WINAPI XSView_GetViewRect(HELE hEle, out_ RECT *pRect); //��ȡ�ӿ�����(�����߿���),leftΪ�ӿ�������С,topΪ�ӿ��ϼ����С,��(0,0).
XC_API HELE WINAPI XSView_GetScrollBarH(HELE hEle); //��ȡˮƽ������
XC_API HELE WINAPI XSView_GetScrollBarV(HELE hEle); //��ȡ��ֱ������
XC_API void WINAPI XSView_SetPadding(HELE hEle, int left,int top,int right,int bottom);
XC_API void WINAPI XSView_GetPadding(HELE hEle, out_ PaddingSize_* pPadding);
XC_API BOOL WINAPI XSView_ScrollPosH(HELE hEle, int pos); //������ָ����
XC_API BOOL WINAPI XSView_ScrollPosV(HELE hEle, int pos); //������ָ����
XC_API BOOL WINAPI XSView_ScrollPosXH(HELE hEle, int posX); //������ָ������
XC_API BOOL WINAPI XSView_ScrollPosYV(HELE hEle, int posY); //������ָ������
XC_API void WINAPI XSView_ShowSBarH(HELE hEle,BOOL bShow); //����ˮƽ������
XC_API void WINAPI XSView_ShowSBarV(HELE hEle,BOOL bShow); //���ô�ֱ������
XC_API void WINAPI XSView_EnableAutoShowScrollBar(HELE hEle,BOOL bEnable);	
XC_API BOOL WINAPI XSView_ScrollLeftLine(HELE hEle);    //�������
XC_API BOOL WINAPI XSView_ScrollRightLine(HELE hEle);   //���ҹ���
XC_API BOOL WINAPI XSView_ScrollTopLine(HELE hEle);     //���Ϲ���
XC_API BOOL WINAPI XSView_ScrollBottomLine(HELE hEle);    //���¹���
XC_API BOOL WINAPI XSView_ScrollLeft(HELE hEle);    //ˮƽ���������
XC_API BOOL WINAPI XSView_ScrollRight(HELE hEle);   //ˮƽ�������Ҳ�
XC_API BOOL WINAPI XSView_ScrollTop(HELE hEle);     //����������
XC_API BOOL WINAPI XSView_ScrollBottom(HELE hEle);  //�������ײ�
XC_API HELE WINAPI XShape_GetParentEle(HXCGUI hShape);
XC_API HXCGUI WINAPI XShape_GetParentLayout(HXCGUI hShape);
XC_API HWINDOW WINAPI XShape_GetHWINDOW(HXCGUI hShape);
XC_API HXCGUI  WINAPI XShape_GetParent(HXCGUI hShape);
XC_API void  WINAPI XShape_RemoveShape(HXCGUI hShape);
XC_API void WINAPI XShape_SetID(HXCGUI hShape,int nID);
XC_API int  WINAPI XShape_GetID(HXCGUI hShape);
XC_API void WINAPI XShape_Redraw(HXCGUI hShape);
XC_API int  WINAPI XShape_GetWidth(HXCGUI hShape);
XC_API int  WINAPI XShape_GetHeight(HXCGUI hShape);
XC_API void WINAPI XShape_GetRect(HXCGUI hShape,out_ RECT* pRect);
XC_API void WINAPI XShape_SetRect(HXCGUI hShape,in_  RECT* pRect);
XC_API void WINAPI XShape_GetContentSize(HXCGUI hShape,out_ SIZE* pSize);//��ȡ���ݴ�С
XC_API void WINAPI XShape_ShowLayout(HXCGUI hShape,BOOL bShow);
XC_API void WINAPI XShape_AdjustLayout(HXCGUI hShape);
XC_API void WINAPI XShape_Destroy(HXCGUI hShape);
XC_API HXCGUI WINAPI XShapeText_Create(int x, int y, int cx, int cy, const wchar_t *pName,HXCGUI hParent=NULL);
XC_API void  WINAPI XShapeText_SetText(HXCGUI hTextBlock,const wchar_t *pName);
XC_API void  WINAPI XShapeText_GetText(HXCGUI hTextBlock,out_ wchar_t *pOut,int nOutLen);
XC_API int  WINAPI XShapeText_GetTextLength(HXCGUI hTextBlock);
XC_API void  WINAPI XShapeText_SetFont(HXCGUI hTextBlock,HFONTX hFontx);
XC_API void WINAPI XShapeText_SetTextColor(HXCGUI hTextBlock, COLORREF color,BYTE alpha);
XC_API COLORREF WINAPI XShapeText_GetTextColor(HXCGUI hTextBlock);
XC_API void WINAPI XShapeText_SetTextAlign(HXCGUI hTextBlock,int align);
XC_API void WINAPI XShapeText_SetOffset(HXCGUI hTextBlock,int x,int y);
XC_API void WINAPI XShapeText_SetLayoutWidth(HXCGUI hTextBlock,layout_size_type_ nType,int width);
XC_API void WINAPI XShapeText_SetLayoutHeight(HXCGUI hTextBlock,layout_size_type_ nType,int height);
XC_API void WINAPI XShapeText_GetLayoutWidth(HXCGUI hTextBlock,out_ layout_size_type_ *pType,out_ int *pWidth);
XC_API void WINAPI XShapeText_GetLayoutHeight(HXCGUI hTextBlock,out_ layout_size_type_ *pType,out_ int *pHeight);
XC_API HXCGUI WINAPI XShapePic_Create(int x,int y,int cx,int cy, HXCGUI hParent=NULL);
XC_API void WINAPI   XShapePic_SetImage(HXCGUI hShape,HIMAGE hImage);
XC_API void WINAPI XShapePic_SetLayoutWidth(HXCGUI hShape,layout_size_type_ nType,int width);
XC_API void WINAPI XShapePic_SetLayoutHeight(HXCGUI hShape,layout_size_type_ nType,int height);
XC_API void WINAPI XShapePic_GetLayoutWidth(HXCGUI hShape,out_ layout_size_type_ *pType,out_ int *pWidth);
XC_API void WINAPI XShapePic_GetLayoutHeight(HXCGUI hShape,out_ layout_size_type_ *pType,out_ int *pHeight);
XC_API HXCGUI WINAPI XShapeGif_Create(int x,int y,int cx,int cy, HXCGUI hParent=NULL);
XC_API void WINAPI XShapeGif_SetImage(HXCGUI hShape,HIMAGE hImage);
XC_API void WINAPI XShapeGif_SetLayoutWidth(HXCGUI hShape,layout_size_type_ nType,int width);
XC_API void WINAPI XShapeGif_SetLayoutHeight(HXCGUI hShape,layout_size_type_ nType,int height);
XC_API void WINAPI XShapeGif_GetLayoutWidth(HXCGUI hShape,out_ layout_size_type_ *pType,out_ int *pWidth);
XC_API void WINAPI XShapeGif_GetLayoutHeight(HXCGUI hShape,out_ layout_size_type_ *pType,out_ int *pHeight);
XC_API HXCGUI WINAPI XShapeRect_Create(int x,int y,int cx,int cy, HXCGUI hParent=NULL);
XC_API void WINAPI XShapeRect_SetBorderColor(HXCGUI hShape,COLORREF color,BYTE alpha=255);
XC_API void WINAPI XShapeRect_SetFillColor(HXCGUI hShape,COLORREF color,BYTE alpha=255);
XC_API void WINAPI XShapeRect_SetRoundAngle(HXCGUI hShape,int nWidth, int nHeight);
XC_API void WINAPI XShapeRect_GetRoundAngle(HXCGUI hShape,out_ int *pWidth,out_ int *pHeight);
XC_API void WINAPI XShapeRect_EnableBorder(HXCGUI hShape,BOOL bEnable);
XC_API void WINAPI XShapeRect_EnableFill(HXCGUI hShape,BOOL bEnable);
XC_API void WINAPI XShapeRect_EnableRoundAngle(HXCGUI hShape,BOOL bEnable);
XC_API HXCGUI WINAPI XShapeEllipse_Create(int x,int y,int cx,int cy, HXCGUI hParent=NULL);
XC_API void WINAPI XShapeEllipse_SetBorderColor(HXCGUI hShape,COLORREF color,BYTE alpha=255);
XC_API void WINAPI XShapeEllipse_SetFillColor(HXCGUI hShape,COLORREF color,BYTE alpha=255);
XC_API void WINAPI XShapeEllipse_EnableBorder(HXCGUI hShape,BOOL bEnable);
XC_API void WINAPI XShapeEllipse_EnableFill(HXCGUI hShape,BOOL bEnable);
XC_API HXCGUI WINAPI XShapeGroupBox_Create(int x,int y,int cx,int cy,const wchar_t* pName,HXCGUI hParent=NULL);
XC_API void WINAPI XShapeGroupBox_SetBorderColor(HXCGUI hShape,COLORREF color,BYTE alpha=255);
XC_API void WINAPI XShapeGroupBox_SetTextColor(HXCGUI hShape,COLORREF color,BYTE alpha=255);
XC_API void WINAPI XShapeGroupBox_SetFontX(HXCGUI hShape,HFONTX hFontX);
XC_API void WINAPI XShapeGroupBox_SetTextOffset(HXCGUI hShape,int offsetX,int offsetY);
XC_API void WINAPI XShapeGroupBox_SetRoundAngle(HXCGUI hShape,int nWidth, int nHeight);
XC_API void WINAPI XShapeGroupBox_SetText(HXCGUI hShape,const wchar_t* pText);
XC_API void WINAPI XShapeGroupBox_GetTextOffset(HXCGUI hShape,out_ int *pOffsetX,out_ int *pOffsetY);
XC_API void WINAPI XShapeGroupBox_GetRoundAngle(HXCGUI hShape,out_ int *pWidth,out_ int *pHeight);
XC_API void WINAPI XShapeGroupBox_EnableRoundAngle(HXCGUI hShape,BOOL bEnable);
XC_API HXCGUI WINAPI XShapeLine_Create(int x1,int y1,int x2,int y2, HXCGUI hParent=NULL);
XC_API void WINAPI XShapeLine_SetPosition(HXCGUI hShape,int x1,int y1,int x2,int y2);
XC_API void WINAPI XShapeLine_SetColor(HXCGUI hShape,COLORREF color,BYTE alpha);
XC_API HELE WINAPI XSliderBar_Create(int x, int y, int cx, int cy,HXCGUI hParent=NULL);
XC_API void WINAPI XSliderBar_SetRange(HELE hEle,int range);
XC_API int  WINAPI XSliderBar_GetRange(HELE hEle);
XC_API void WINAPI XSliderBar_SetButtonWidth(HELE hEle,int width);
XC_API void WINAPI XSliderBar_SetButtonHeight(HELE hEle,int height);
XC_API void WINAPI XSliderBar_SetSpaceTwo(HELE hEle,int leftSize,int rightSize);
XC_API void WINAPI XSliderBar_SetPos(HELE hEle,int pos);
XC_API int  WINAPI XSliderBar_GetPos(HELE hEle);
XC_API HELE WINAPI XSliderBar_GetButton(HELE hEle);
XC_API void WINAPI XSliderBar_SetHorizon(HELE hEle,BOOL bHorizon);
XC_API void WINAPI XSliderBar_SetImageLoad(HELE hEle,HIMAGE hImage);
XC_API HELE WINAPI XTabBar_Create(int x, int y, int cx, int cy, HXCGUI hParent = NULL);
XC_API int  WINAPI XTabBar_AddLabel(HELE hEle,const wchar_t *pName); //���һ����ǩ
XC_API int  WINAPI XTabBar_InsertLabel(HELE hEle,int index,wchar_t *pName);
XC_API BOOL WINAPI XTabBar_DeleteLabel(HELE hEle,int index);  //ɾ��
XC_API void WINAPI XTabBar_DeleteLabelAll(HELE hEle);  //ɾ������TAB
XC_API HELE WINAPI XTabBar_GetLabel(HELE hEle,int index);//��ȡ��ǩ��ťButton
XC_API HELE WINAPI XTabBar_GetLabelClose(HELE hEle,int index);
XC_API HELE WINAPI XTabBar_GetButtonLeft(HELE hEle);
XC_API HELE WINAPI XTabBar_GetButtonRight(HELE hEle);
XC_API int  WINAPI XTabBar_GetSelect(HELE hEle);  //��ȡѡ��ı�ǩ
XC_API int  WINAPI XTabBar_GetLabelSpacing(HELE hEle); //��ȡ��ǩ���, 0û�м��
XC_API int  WINAPI XTabBar_GetLabelCount(HELE hEle); //��ȡ��ǩ������
XC_API void WINAPI XTabBar_SetLabelSpacing(HELE hEle,int spacing);//���ñ�ǩ���, 0û�м��
XC_API void WINAPI XTabBar_SetSelect(HELE hEle,int index);   //����ѡ���ǩ
XC_API void WINAPI XTabBar_SetUp(HELE hEle);    //�����
XC_API void WINAPI XTabBar_SetDown(HELE hEle);  //�ҹ���
XC_API void WINAPI XTabBar_EnableTile(HELE hEle, BOOL bTile);  //ƽ�̱�ǩ,ÿ����ǩ��ʾ��ͬ��С
XC_API void WINAPI XTabBar_EnableClose(HELE hEle, BOOL bEnable);
XC_API void WINAPI XTabBar_SetCloseSize(HELE hEle, SIZE *pSize);
XC_API void WINAPI XTabBar_SetTurnButtonSize(HELE hEle, SIZE *pSize);
XC_API BOOL WINAPI XTabBar_ShowLabel(HELE hEle,int index, BOOL bShow); //��ʾ������ָ����
XC_API HELE WINAPI XTextLink_Create(int x, int y, int cx, int cy,const wchar_t* pName, HXCGUI hParent = NULL);
XC_API void WINAPI XTextLink_EnableUnderlineLeave(HELE hEle,BOOL bEnable);
XC_API void WINAPI XTextLink_EnableUnderlineStay(HELE hEle,BOOL bEnable);
XC_API void WINAPI XTextLink_SetTextColorStay(HELE hEle,COLORREF color,BYTE alpha);
XC_API void WINAPI XTextLink_SetUnderlineColorLeave(HELE hEle,COLORREF color,BYTE alpha);
XC_API void WINAPI XTextLink_SetUnderlineColorStay(HELE hEle,COLORREF color,BYTE alpha);
XC_API HELE WINAPI XToolBar_Create(int x, int y, int cx, int cy,HXCGUI hParent=NULL);
XC_API int WINAPI XToolBar_InsertEle(HELE hEle,HELE hNewEle,int index=-1); //���Ԫ�ص�������, -1���뵽ĩβ
XC_API int WINAPI XToolBar_InsertSeparator(HELE hEle,int index=-1); //��ӷָ���, -1���뵽ĩβ
XC_API void WINAPI XToolBar_EnableButtonMenu(HELE hEle,BOOL bEnable);  //��ʾ������˵���ť
XC_API HELE WINAPI XToolBar_GetHEle(HELE hEle,int index);  //��ȡ��������Ԫ�ؾ��
XC_API HELE WINAPI XToolBar_GetButtonLeft(HELE hEle);   //��ȡ�������������ťButton
XC_API HELE WINAPI XToolBar_GetButtonRight(HELE hEle);  //��ȡ�������ҹ�����ťButton
XC_API HELE WINAPI XToolBar_GetButtonMenu(HELE hEle);   //��ȡ�����˵���ť
XC_API void WINAPI XToolBar_SetSpace(HELE hEle,int nSize);
XC_API void WINAPI XToolBar_DeleteEle(HELE hEle,int index); //�Ƴ���������Ԫ�ز�����
XC_API void WINAPI XToolBar_DeleteAllEle(HELE hEle);
XC_API HELE WINAPI XTree_Create(int x,int y,int cx,int cy,HXCGUI hParent=NULL);
XC_API void WINAPI XTree_EnableDragItem(HELE hEle,BOOL bEnable);
XC_API void WINAPI XTree_EnableConnectLine(HELE hEle,BOOL bEnable,BOOL bSolid);
XC_API void WINAPI XTree_SetConnectLineColor(HELE hEle,COLORREF color, BYTE alpha);
XC_API void WINAPI XTree_SetExpandButtonContentSpace(HELE hEle,int nSpace);
XC_API void WINAPI XTree_SetExpandButtonSize(HELE hEle, int nWidth, int nHeight);
XC_API void WINAPI XTree_SetDragInsertPositionColor(HELE hEle,COLORREF color,BYTE alpha);
XC_API BOOL WINAPI XTree_SetItemTemplateXML(HELE hEle,const wchar_t* pXmlFile);
XC_API BOOL WINAPI XTree_SetItemTemplateXMLSel(HELE hEle,const wchar_t* pXmlFile);
XC_API BOOL WINAPI XTree_SetItemTemplateXMLFromString(HELE hEle,const char* pStringXML);
XC_API BOOL WINAPI XTree_SetItemTemplateXMLSelFromString(HELE hEle,const char* pStringXML);
XC_API void WINAPI XTree_SetDrawItemBkFlags(HELE hEle,int nFlags);
XC_API BOOL WINAPI XTree_SetItemData(HELE hEle,int nID,int nUserData);
XC_API int  WINAPI XTree_GetItemData(HELE hEle,int nID);
XC_API BOOL WINAPI XTree_SetSelectItem(HELE hEle,int nID);
XC_API int  WINAPI XTree_GetSelectItem(HELE hEle);
XC_API BOOL WINAPI XTree_IsExpand (HELE hEle,int nID);
XC_API BOOL WINAPI XTree_ExpandItem(HELE hEle,int nID,BOOL bExpand);
XC_API int  WINAPI XTree_HitTest(HELE hEle,POINT *pPt);
XC_API int  WINAPI XTree_HitTestOffset(HELE hEle,POINT *pPt);
XC_API int  WINAPI XTree_GetFirstChildItem(HELE hEle,int nID);
XC_API int  WINAPI XTree_GetEndChildItem(HELE hEle,int nID);
XC_API int  WINAPI XTree_GetPrevSiblingItem(HELE hEle,int nID);
XC_API int  WINAPI XTree_GetNextSiblingItem(HELE hEle,int nID);
XC_API int  WINAPI XTree_GetParentItem(HELE hEle,int nID);
XC_API void WINAPI XTree_SetIndentation(HELE hEle,int nWidth);
XC_API int  WINAPI XTree_GetIndentation(HELE hEle);
XC_API void WINAPI XTree_SetItemHeight(HELE hEle,int nID,int nHeight,int nSelHeight);
XC_API void WINAPI XTree_GetItemHeight(HELE hEle,int nID,out_ int *pHeight,out_ int *pSelHeight);
XC_API void WINAPI XTree_SetRowSpace(HELE hEle,int nSpace);
XC_API int  WINAPI XTree_GetRowSpace(HELE hEle);
XC_API BOOL WINAPI XTree_MoveItem(HELE hEle,int nMoveItem, int nDestItem,int nType);
XC_API void WINAPI XTree_AddItemBkBorder(HELE hEle,tree_item_state_ nState, COLORREF color,BYTE alpha, int width);
XC_API void WINAPI XTree_AddItemBkFill(HELE hEle,tree_item_state_ nState, COLORREF color,BYTE alpha);
XC_API void WINAPI XTree_AddItemBkImage(HELE hEle,tree_item_state_ nState, HIMAGE hImage);
XC_API int  WINAPI XTree_GetItemBkInfoCount(HELE hEle,tree_item_state_ nState);
XC_API void WINAPI XTree_ClearItemBkInfo(HELE hEle,tree_item_state_ nState);
XC_API void WINAPI XTree_SetItemHeightDefault(HELE hEle,int nHeight,int nSelHeight);
XC_API void WINAPI XTree_GetItemHeightDefault(HELE hEle,out_ int *pHeight,out_ int *pSelHeight);
XC_API HXCGUI WINAPI XTree_GetTemplateObject(HELE hEle,int nID,int nTempItemID); //ͨ��ģ����ID,��ȡʵ����ģ����ID��Ӧ�Ķ���.
XC_API int    WINAPI XTree_GetItemIDFromHXCGUI(HELE hEle, HXCGUI hXCGUI);
XC_API void WINAPI XTree_BindAdapter(HELE hEle,HXCGUI hAdapter);
XC_API HXCGUI WINAPI XTree_GetAdapter(HELE hEle);
XC_API void WINAPI XTree_RefreshData(HELE hEle);
XC_API void WINAPI XWnd_RegEventEx(HWINDOW hWindow, CEventBase* pEvent);
XC_API BOOL WINAPI XWnd_RemoveEventEx(HWINDOW hWindow,CEventBase *pEvent);
XC_API void WINAPI XWnd_RegEventC(HWINDOW hWindow, int nEvent, void *pFun);
XC_API void WINAPI XWnd_RegEventC1(HWINDOW hWindow, int nEvent, void *pFun);
XC_API BOOL WINAPI XWnd_RemovegEvent(HWINDOW hWindow, int nEvent, void *pFun);
XC_API HWINDOW WINAPI XWnd_Create(int x, int y, int cx, int cy, const wchar_t *pTitle, HWND hWndParent = NULL, int XCStyle = xc_window_style_default);
XC_API HWINDOW WINAPI XWnd_CreateEx(DWORD dwExStyle, const wchar_t* lpClassName, const wchar_t* lpWindowName, DWORD dwStyle, int x, int y, int cx, int cy, HWND hWndParent=NULL, int XCStyle=xc_window_style_default);
XC_API BOOL WINAPI XWnd_AddEle(HWINDOW hWindow, HELE hEle);
XC_API BOOL WINAPI XWnd_InsertEle(HWINDOW hWindow, HELE hChildEle,int index);
XC_API BOOL WINAPI XWnd_AddShape(HWINDOW hWindow, HXCGUI hShape);
XC_API HWND WINAPI XWnd_GetHWND(HWINDOW hWindow);
XC_API void WINAPI XWnd_EnableDragBorder(HWINDOW hWindow, BOOL bEnable);
XC_API void WINAPI XWnd_EnableDragWindow(HWINDOW hWindow, BOOL bEnable);
XC_API void WINAPI XWnd_EnableDragCaption(HWINDOW hWindow, BOOL bEnable);
XC_API void WINAPI XWnd_EnableDrawBk(HWINDOW hWindow, BOOL bEnable);
XC_API void WINAPI XWnd_EnableAutoFocus(HWINDOW hWindow, BOOL bEnable); //�������������Ƿ��ý���
XC_API void WINAPI XWnd_EnableMaxWindow(HWINDOW hWindow, BOOL bEnable);
XC_API void WINAPI XWnd_RedrawWnd(HWINDOW hWindow,BOOL bImmediate=FALSE);
XC_API void WINAPI XWnd_RedrawWndRect(HWINDOW hWindow, RECT *pRect, BOOL bImmediate = FALSE); //�ػ洰��ָ������
XC_API void WINAPI XWnd_SetFocusEle(HWINDOW hWindow, HELE hFocusEle);
XC_API HELE WINAPI XWnd_GetFocusEle(HWINDOW hWindow);
XC_API HELE WINAPI XWnd_GetStayHELE(HWINDOW hWindow);  //��ȡ��ǰ�����ͣ��Ԫ��
XC_API void WINAPI XWnd_SetCursor(HWINDOW hWindow,HCURSOR hCursor);
XC_API HCURSOR WINAPI XWnd_GetCursor(HWINDOW hWindow);
XC_API HCURSOR WINAPI XWnd_SetCursorSys(HWINDOW hWindow,HCURSOR hCursor);
XC_API void WINAPI XWnd_SetFont(HWINDOW hWindow,HFONTX hFontx);
XC_API void WINAPI XWnd_SetID(HWINDOW hWindow, int nID);
XC_API int  WINAPI XWnd_GetID(HWINDOW hWindow);
XC_API void WINAPI XWnd_SetCaptureEle(HWINDOW hWindow, HELE hEle);
XC_API HELE WINAPI XWnd_GetCaptureEle(HWINDOW hWindow);
XC_API BOOL WINAPI XWnd_BindLayoutEle(HWINDOW hWindow,window_position_ nPosition, HELE hEle);
XC_API HELE WINAPI XWnd_GetLayoutEle(HWINDOW hWindow,window_position_ nPosition);
XC_API void WINAPI XWnd_BindLayoutObject(HWINDOW hWindow,window_position_ nPosition,HXCGUI hLayout);
XC_API HXCGUI WINAPI XWnd_GetLayoutObject(HWINDOW hWindow,window_position_ nPosition);
XC_API void WINAPI XWnd_SetLayoutSize(HWINDOW hWindow,int left, int top, int right, int bottom);
XC_API void WINAPI XWnd_GetLayoutSize(HWINDOW hWindow,out_ BorderSize_  *pBorderSize);
XC_API void WINAPI XWnd_SetDragBorderSize(HWINDOW hWindow,int left, int top, int right, int bottom); //�����϶��߿��С
XC_API void WINAPI XWnd_GetDragBorderSize(HWINDOW hWindow,out_ BorderSize_* pSize);
XC_API void WINAPI XWnd_SetMinimumSize(HWINDOW hWindow,int width,int height);
XC_API HELE WINAPI XWnd_HitChildEle(HWINDOW hWindow,POINT *pPt);
XC_API int  WINAPI XWnd_GetChildCount(HWINDOW hWindow);
XC_API HELE WINAPI XWnd_GetChildByIndex(HWINDOW hWindow,int index);
XC_API HELE WINAPI XWnd_GetChildByID(HWINDOW hWindow,int nID);
XC_API HELE WINAPI XWnd_GetEle(HWINDOW hWindow,int nID);
XC_API int  WINAPI XWnd_GetChildShapeCount(HWINDOW hWindow);
XC_API HXCGUI WINAPI XWnd_GetChildShapeByIndex(HWINDOW hWindow, int index);
XC_API void WINAPI XWnd_GetDrawRect(HWINDOW hWindow,RECT *pRcPaint);
XC_API BOOL WINAPI XWnd_ShowWindow(HWINDOW hWindow, int nCmdShow);
XC_API void WINAPI XWnd_AdjustLayout(HWINDOW hWindow);
XC_API void WINAPI XWnd_AdjustLayoutObject(HWINDOW hWindow);
XC_API void WINAPI XWnd_CloseWindow(HWINDOW hWindow);
XC_API void WINAPI XWnd_CreateCaret(HWINDOW hWindow, HELE hEle, int width, int height);//���������
XC_API void WINAPI XWnd_SetCaretSize(HWINDOW hWindow, int width, int height); //���ò������С
XC_API void WINAPI XWnd_SetCaretPos(HWINDOW hWindow, int x, int y); //���ò����λ��
XC_API void WINAPI XWnd_SetCaretPosEx(HWINDOW hWindow, int x, int y, int width, int height); //���ò����λ��
XC_API void WINAPI XWnd_SetCaretColor(HWINDOW hWindow, COLORREF color); //���ò������ɫ
XC_API void WINAPI XWnd_ShowCaret(HWINDOW hWindow, BOOL bShow);  //��ʾ�����
XC_API void WINAPI XWnd_DestroyCaret(HWINDOW hWindow);    //���ٲ����
XC_API HELE WINAPI XWnd_GetCaretHELE(HWINDOW hWindow);
XC_API BOOL WINAPI XWnd_GetClientRect(HWINDOW hWindow, out_ RECT *pRect); //��ȡ�ͻ�������
XC_API void WINAPI XWnd_GetBodyRect(HWINDOW hWindow, out_ RECT *pRect);  //��ȡ����body����
XC_API UINT WINAPI XWnd_SetTimer(HWINDOW hWindow, UINT nIDEvent, UINT uElapse); //���ö�ʱ��
XC_API BOOL WINAPI XWnd_KillTimer(HWINDOW hWindow, UINT nIDEvent);
XC_API HBKINFOM WINAPI XWnd_GetBkInfoManager(HWINDOW hWindow);
XC_API void WINAPI XWnd_SetTransparentType(HWINDOW hWindow,window_transparent_ nType);  //����͸������
XC_API void WINAPI XWnd_SetTransparentAlpha(HWINDOW hWindow,BYTE alpha); //���ô���͸����
XC_API void WINAPI XWnd_SetTransparentColor(HWINDOW hWindow,COLORREF color); //���ô���͸��ɫ
XC_API BOOL WINAPI XWnd_RegEventTest(int nEvent,BYTE* pParamType);
