#include "game.h"
#include "define.h"

namespace gm
{
    bool running;
    int row, col;
    Tetromino cur;
    void quit()
    {
        running = false;
    }

    void init()
    {
        running = true;
        row = 2;
        col = 15;
        cur = O;
    }

    // 键盘操作函数
    void rotate()
    {
        cur=rotate(cur);
    }

    void left()
    {
        col--;
    }

    void right()
    {
        col++;
    }

    void down()
    {
        row++;
    }

    
}