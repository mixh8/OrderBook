project(src)

add_definitions(-std=c++14)

set(HEADER_FILES OrderBook.h)
set(SOURCE_FILES OrderBook.cpp)

add_library(src STATIC ${SOURCE_FILES} ${HEADER_FILES})