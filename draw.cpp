#include "draw.h"
#include "terminal.h"
#include "utils.h"
#include <iostream>


namespace dw{

    void window(int top, int left, int width, int height, std::string title)
    {
        for (int r = 0; r < height; ++r){
            tc::move_cursor(top+r, ut::block2col(left));
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
        tc::move_cursor(top, ut::block2col(left) + (width*2 - title.size())/2);
        std::cout << title;
        
    }
    void draw_tetromino(gm::Tetromino &t, int top, int left)
    {
        tc::move_cursor(top, ut::block2col(left));
        for(int i=0;i<t.size();++i){
            tc::move_cursor(top+i, ut::block2col(left));
            for(int j=0;j<t.size();++j){
                if(t[i][j] > 0){
                    tc::set_back_color((int)gm::tetro_color[t[i][j]]);
                    std::cout<<"  ";
                    tc::reset_colors();
                }
                else{
                    std::cout<<"  ";
                }
            }   
        }
    }
}