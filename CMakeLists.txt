cmake_minimum_required(VERSION 3.14)
project(leetcode)

set(CMAKE_CXX_STANDARD 17)

add_executable(leetcode main.cpp Solution.cpp Solution.h)
target_link_libraries(leetcode pthread)
target_link_libraries(leetcode gtest)