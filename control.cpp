#include "control.h"
#include "define.h"

namespace gm
{
    char command;
    
    // 键盘命令函数
    std::map<char, std::function<void()>> comm_func
    {
        {KEY_Q, command_quit},
        {KEY_W, command_rotate},
        {KEY_A, command_left},
        {KEY_D, command_right},
        {KEY_S, command_down}
    };

    char getch()
    {
        char c;
        struct termios old, cur;
        tcgetattr(0, &cur);
        old = cur;
        cfmakeraw(&cur);
        tcsetattr(0, 0, &cur);
        c = getchar();
        tcsetattr(0, 0, &old);
        return c;
    }

    void key_event()
    {
        while (true)
        {
            command = getch();

            if (command == 'q') break;
            comm_func[command]();
            
        }
    }

    void start_listener()
    {
        std::thread t(key_event);
        t.detach();
    }

    void command_quit()
    {

    }

    void command_rotate()
    {

    }

    void command_left()
    {

    }

    void command_right()
    {

    }

    void command_down()
    {

    }

} // namespace gm
