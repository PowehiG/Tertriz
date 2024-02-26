#include "terminal.h"
#include <iostream>

#define CSI "\033["

//  移动光标到指定位置
void tc::move_cursor(int row, int col)
{
    std::cout << CSI << row << ";" << col << "H";
}

//  设置前景色
void tc::set_fore_color(int id)
{
    std::cout << CSI << "38;5;" << id << "m";
}

//  设置背景色
void tc::set_back_color(int id)
{
    std::cout << CSI << "48;5;" << id << "m";
}

//  清屏
void tc::clear_screen()
{
    std::cout << CSI << "2J";
}

//  重置颜色 
void tc::reset_colors()
{
    std::cout << CSI << "0m";
}

// 隐藏光标
void tc::hide_cursor()
{
    std::cout << CSI << "?25l";
}

// 显示光标
void tc::show_cursor()
{
    std::cout << CSI << "?25h";
}