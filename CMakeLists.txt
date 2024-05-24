cmake_minimum_required(VERSION 3.19)
project(opencv_put_chinese)

set(CMAKE_CXX_STANDARD 17)

# Include directories
include_directories(
        ./libs/opencv/include
        ./libs/freetype/include
)

# Libraries
set(LIBS
        -lopencv_core
        -lopencv_imgproc
        -lopencv_highgui
        -lfreetype
)

# Library directories
link_directories(
        ./libs/opencv/libs
        ./libs/freetype/libs
)

add_executable(opencv_put_chinese
        main.cpp
        cvx.cpp)
target_link_libraries(opencv_put_chinese PRIVATE ${LIBS})