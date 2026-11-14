cmake_minimum_required(VERSION 3.10)
project(OpenCVTest)

set(OpenCV_DIR "C:/opencv/build")
find_package(OpenCV REQUIRED)

add_executable(app main.cpp)
target_link_libraries(app PRIVATE ${OpenCV_LIBS})
