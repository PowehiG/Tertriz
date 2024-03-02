#include "draw.h"
#include "terminal.h"
#include <iostream>


namespace dw{

    //  物块位置转化
    inline int block2col(int b)
    {
        return b * 2 - 1;
    }

    void window(int top, int left, int width, int height, std::string title)
    {
        for (int r = 0; r < height; ++r){
            tc::move_cursor(top+r, block2col(left));
            for (int c = 0; c < width; ++c)
            {
                if(r == 0)    //第一行
                {       
                    if(c == 0)   //第一列
                    {
                        std::cout << " ┌";
                    }
                    else if(c == width-1) //最后一列
                    {
                        std::cout << "┐";
                    }
                    else    //中间列
                    {
                        std::cout << "──";
                    }
                }
                else if(r == height-1)    //最后一行
                {   
                    if (c == 0)   //第一列
                    {
                        std::cout << " └";
                    }
                    else if(c==width-1) //最后一列
                    {
                        std::cout << "┘";
                    }
                    else    //中间列
                    {
                        std::cout << "──";
                    }
                }
                else    //中间行
                {           
                    if (c==0)   //第一列
                    {
                        std::cout << " │";
                    }
                    else if(c==width-1) //最后一列
                    {
                        std::cout << "│";
                    }
                    else    //中间列
                    {
                        std::cout << "  ";
                    }
                }
            } 
        }
        tc::move_cursor(top, block2col(left) + (width*2 - title.size())/2);
        std::cout << title;
    }
}