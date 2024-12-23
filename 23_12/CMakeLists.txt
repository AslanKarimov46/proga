cmake_minimum_required(VERSION 3.29)
project(23_12)

set(CMAKE_CXX_STANDARD 17)

FIND_PACKAGE(Boost 1.83 COMPONENTS program_options REQUIRED)

add_executable(main main.cpp)
TARGET_LINK_LIBRARIES(main Boost::program_options)