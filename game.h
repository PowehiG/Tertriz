#pragma once
#include "tetromino.h"

namespace gm
{
    // 游戏状态
    extern bool running;

    // 游戏控制函数
    void quit();
    void init();

    // 键盘命令函数
    void rotate();
    void left();
    void right();
    void down();

    // 光标位置
    extern int row, col;

    // 当前方块
    extern Tetromino cur;
}