cmake_minimum_required(VERSION 3.16)
project(tertriz)

set(CXX_STANDARD 20)

# 自动扫描工程文件
aux_source_directory(. SRC_LIST)
add_executable(tertriz ${SRC_LIST})

# 查找依赖库
find_package(Threads REQUIRED)
# 引入依赖库
target_link_libraries(${PROJECT_NAME} Threads::Threads) 