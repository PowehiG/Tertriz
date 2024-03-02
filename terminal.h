#pragma once

namespace tc{
    
    void move_cursor(int row, int col);
    void set_fore_color(int id);
    void set_back_color(int id);
    void clear_screen();
    void reset_colors();
    void hide_cursor();
    void show_cursor();
}