cmake_minimum_required(VERSION 3.5)
project(first-opencv-prj)

find_package(OpenCV HINTS /usr/local/Cellar/opencv3/3.2.0/share/OpenCV)

message(STATUS "OpenCV library status:")
message(STATUS "    version: ${OpenCV_VERSION}")
message(STATUS "    libraries: ${OpenCV_LIBS}")
message(STATUS "    include path: ${OpenCV_INCLUDE_DIRS}")

set(SRC_FILES src/main.cpp)

add_executable(first-opencv ${SRC_FILES})

target_compile_options(first-opencv PUBLIC -std=c++1y)

target_include_directories(first-opencv PUBLIC ${OpenCV_INCLUDE_DIRS})

target_link_libraries (first-opencv ${OpenCV_LIBS})
