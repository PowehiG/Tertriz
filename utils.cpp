#include "utils.h"
#include <chrono>

using namespace std::chrono_literals;

int ut::fps()
{
    // 用于计算帧率
    static auto start = std::chrono::system_clock::now();  // 获取当前时间
    auto end = start;
    static int frame_count = 0;
    static int fps = 0;

    end = std::chrono::system_clock::now();
    frame_count++;
    if(end-start>1s){
        fps = frame_count;
        frame_count = 0;
        start = end;
    }
    return fps;
}