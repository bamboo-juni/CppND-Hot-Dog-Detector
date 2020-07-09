cmake_minimum_required(VERSION 3.7)

# add_definitions(-std=c++17)
set(CMAKE_CXX_STANDARD 17)

project(hotdog_detector)

# show all possible warnings
set(CXX_FLAGS "-Wall")
set(CMAKE_CXX_FLAGS, "${CXX_FLAGS}")

find_package(OpenCV 4.1 REQUIRED)

include_directories(${OpenCV_INCLUDE_DIRS})
link_directories(${OpenCV_LIBRARY_DIRS})
add_definitions(${OpenCV_DEFINITIONS})

# Find all executables
file(GLOB project_SRCS src/*.cpp) #src/*.h

# Add project executable
add_executable(hotdog_detector ${project_SRCS})
target_link_libraries(hotdog_detector ${OpenCV_LIBRARIES})
