#include<iostream>
#include<thread>
#include<chrono>
#include "terminal.h"

using namespace std::chrono_literals;

int main()
{
    tc::hide_cursor();

    int i = 0;
    while(true){
        tc::clear_screen();
        tc::move_cursor(i++, 10);
        tc::set_back_color(15);
        std::cout<< "  ";
        tc::reset_colors();
        std::cout<<std::flush;
        std::this_thread::sleep_for(500ms);
    }
}
