cmake_minimum_required(VERSION 3.27)

project(Ensemble VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Widgets Multimedia)

qt_standard_project_setup()

add_subdirectory(src/app)
add_subdirectory(src/gui)
