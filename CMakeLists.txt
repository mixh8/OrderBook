cmake_minimum_required(VERSION 3.23)
project(OrderBook)

set(CMAKE_CXX_STANDARD 14)
set(SOURCE_FILES main.cpp)
add_executable(OrderBook ${SOURCE_FILES})

include_directories(src)

add_subdirectory(src)
add_subdirectory(tests)

target_link_libraries(OrderBook src tests)