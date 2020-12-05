cmake_minimum_required(VERSION 3.17)

project(HelloDtk)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

find_package(DtkCMake REQUIRED)
find_package(DtkWidget REQUIRED)
find_package(Qt5 COMPONENTS Core Gui Widgets REQUIRED)

add_executable(HelloDtk main.cpp)
target_link_libraries(HelloDtk ${DtkWidget_LIBRARIES} ${Qt5Widgets_LIBRARIES})