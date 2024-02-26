cmake_minimum_required(VERSION 3.16)
project(tertriz)

set(CXX_STANDARD 20)

# 自动扫描工程文件
aux_source_directory(. SRC_LIST)
add_executable(tertriz ${SRC_LIST})