// SnakeCore.h: interface for the SnakeCore class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_SNAKECORE_H__6A455F74_A37A_4C64_830E_BBB6CEA71F8B__INCLUDED_)
#define AFX_SNAKECORE_H__6A455F74_A37A_4C64_830E_BBB6CEA71F8B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "afxtempl.h"

// 上下左右
const int UP = 1;
const int DOWN = 2;
const int LEFT = 3;
const int RIGHT = 4;

class CSnakeCore  
{
public:
        // 游戏区域
        int x, y;               // 左上角坐标
        int width, height;      // 宽度和高度，单位为方格
        int pixel;              // 每个方格的像素

        // 分数、等级
        int score;
        int level;
        
        bool isPause;
        bool isOver;            // 游戏是否结束

        // 当前移动方向
        int currentDirection;
        bool hasChanged;        // 在一个周期内蛇的方向只能改变一次

        // 蛇身
        CArray<CPoint, CPoint> snakeBody;
        // 食物
        CPoint food;

        // 音乐与音效
        BOOL hasMusic;
        BOOL hasSound;

public:
	CSnakeCore();
	virtual ~CSnakeCore();

public:
        // 初始化
        void initSnake();
        // 产生食物
        void createFood();
};

#endif // !defined(AFX_SNAKECORE_H__6A455F74_A37A_4C64_830E_BBB6CEA71F8B__INCLUDED_)
