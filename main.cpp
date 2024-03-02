#include "define.h"
#include "terminal.h"
#include "utils.h"
#include "draw.h"
#include "control.h"


void init()
{
    
    tc::hide_cursor();
    gm::start_listener();
    
}

void loop()
{
    
    int i = 0;

    while(true){
        
        tc::clear_screen();
        dw::window(1, 1, 9, 6, "Hold");
        dw::window(1, 10, 12, 22, "Tetriz");
        dw::window(7, 1, 9, 16, "Status");
        dw::window(19, 22, 8, 4, "Info");
        dw::window(1, 22, 8, 18, "Next");       

        // 帧率显示
        tc::move_cursor(10,5);
        std::cout<<"FPS: "<<ut::fps();

        tc::move_cursor(i++%20, 10);
        tc::set_back_color(15);
        std::cout<< "  ";
        tc::reset_colors();

        if (gm::command == 'q') break;
        

        std::cout<<std::flush;
        // 控制帧率
        std::this_thread::sleep_for(500ms);
    }
}

void exit()
{
    tc::show_cursor();
    tc::reset_colors();
    tc::clear_screen();
    tc::move_cursor(1,1);
}

int main()
{
    init();
    loop();
    exit();
    return 0;
}
