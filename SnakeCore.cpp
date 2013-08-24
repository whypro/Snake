// SnakeCore.cpp: implementation of the SnakeCore class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "Snake.h"
#include "SnakeCore.h"

#include "MainFrm.h"
#include "SnakeDoc.h"
#include "SnakeView.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CSnakeCore::CSnakeCore()
{
        initSnake();
         // 初始化等级和像素大小
        level = 7; 
        pixel = 10;  
        
        // 初始化音乐和音效
        hasMusic = FALSE;
        hasSound = TRUE;
}

CSnakeCore::~CSnakeCore()
{

}
void CSnakeCore::initSnake() {
        // 初始化游戏区域
        x = 1;
        y = 1;
        width = 50;
        height = 40;


        // 初始化游戏分数
        score = 0;

        isPause = false;
        isOver = false;
        
        snakeBody.RemoveAll();
        snakeBody.Add(CPoint(6, 36));    // 蛇头
        snakeBody.Add(CPoint(5, 36));
        snakeBody.Add(CPoint(4, 36));
        snakeBody.Add(CPoint(3, 36));    // 蛇尾
        currentDirection = RIGHT;

        createFood();

        // 初始化随机数发生器
        srand((unsigned) time(NULL));
}

void CSnakeCore::createFood() {
        CPoint t_food;
        bool isDup = false;

        for ( ; ; ) {
                // 产生一个食物
                t_food.x = rand() % width;
                t_food.y = rand() % height;
                
                // 判断是否与蛇身重合
                for (int i = 0; i <= snakeBody.GetUpperBound(); i++) {
                        if (t_food == snakeBody.GetAt(i)) {
                                isDup = true;
                                break;
                        }
                }
                if (!isDup) {
                        break;
                }
        }
        food = t_food;
}

/*
void CSnakeCore::setDirection(int direction) {
        CPoint head = snakeBody.GetAt(0);       // 获取蛇头
        // 设置新蛇头位置
        if (direction != currentDirection && !hasChanged) {
                switch (direction) {
                case UP:
                        if (currentDirection != DOWN) {
                                head.y--;
                                hasChanged = true;
                        }
                        break;
                case DOWN:
                        if (currentDirection != UP) {
                                head.y++;
                                hasChanged = true;
                        }
                        break;
                case LEFT:
                        if (currentDirection != RIGHT) {
                                head.x--;
                                hasChanged = true;
                        }
                        break;
                case RIGHT:
                        if (currentDirection != LEFT) {
                                head.x++;
                                hasChanged = true;
                        }
                        break;
                }
        }
        if (hasChanged) {
                currentDirection = direction;
        }

       // 碰上墙壁
        if (!isOver && (head.x < 0 || head.x >= width || head.y < 0 || head.y >= height)) {
                isOver = true;
        }
        // 碰上自身
        if (!isOver) {
                for (int i = 1; i <= snakeBody.GetUpperBound(); i++) {
                        if (head == snakeBody.GetAt(i)) {
                                isOver = true;
                                break;
                        }
                }
        }

        //CSnakeView *pView = (CSnakeView*) AfxGetMainWnd();
        //pView->GetActiveView();

        if (!isOver) {
                snakeBody.InsertAt(0, head);
                CSnakeView::ReDraw(head);
                if (head != food) {
                        // 删除蛇尾
                        CPoint tmpPoint = snakeBody.GetAt(snakeBody.GetUpperBound());
                        snakeBody.RemoveAt(snakeBody.GetUpperBound());
                        CSnakeView::ReDraw(tmpPoint);
                }
                else {
                        score++;
                }
        }
}
*/