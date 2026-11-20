cmake_minimum_required(VERSION 3.10)
project(OpenCVTest)

# Fixed to actual path
set(OpenCV_DIR "C:/Users/user/Desktop/opencv/build/x64/vc16/lib")
find_package(OpenCV REQUIRED)

add_executable(app test.cpp)

target_include_directories(app PRIVATE ${OpenCV_INCLUDE_DIRS})

target_link_libraries(app PRIVATE ${OpenCV_LIBS})
