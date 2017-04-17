/*
 * 界面相关宏定义
 *
 * @author 胡续俊
 * @date 2015/12/30
 */

#pragma once

// hu 定时器
UINT count_timer = 0; // hu 每次启动定时器时置0

#define IDT_BUBSORT1_TIMER           1
const UINT bubSort1_timer = 500; //ms
#define IDT_BUBSORT2_TIMER           2
const UINT bubSort2_timer = 500; //ms
#define IDT_SEPRLIST_TIMER           3
const UINT seprList_timer = 500; //ms
#define IDT_QUICKSORT1_TIMER         4
const UINT quickSort1_timer = 500; //ms
#define IDT_QUICKSORT2_TIMER         5
const UINT quickSort2_timer = 500; //ms

// hu ui元素对象
#define IDE_BTN_CLOSEWIND            1
#define IDE_BTN_MINWIND              2
#define IDE_BTN_SELECTSKIN           3
#define IDE_ELE_MAINBK               4
#define IDE_CBX_SORTCHANGE           5
#define IDE_RET_SORTDATA1            6
#define IDE_RET_SORTDATA2            7
#define IDE_RET_SORTDATA3            8
#define IDE_RET_SORTDATA4            9
#define IDE_RET_SORTDATA5            10
#define IDE_RET_SORTDATA6            11
#define IDE_RET_SORTDATA7            12
#define IDE_RET_SORTDATA8            13
#define IDE_BTN_GETRAND              14
#define IDE_BTN_SORTSTART            15
#define IDE_BTN_CLEANRAND            17

// hu ui形状对象
#define IDS_SET_SORTDATAEXTRA        16