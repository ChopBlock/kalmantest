cmake_minimum_required(VERSION 3.14)

project(kalmantest LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 COMPONENTS Core REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Core REQUIRED)
find_package(Eigen3  REQUIRED)


add_subdirectory(3rdpart/csv-parser)

include_directories(
    CSVtest/
    3rdpart/csv-parser/single_include/
    ${Eigen3_INCLUDE_DIR}
    )
FILE(
    GLOB
    src
    CSVtest/*cpp
    )
add_executable(kalmantest
  main.cpp
  ${src}
)
target_link_libraries(kalmantest
    Qt${QT_VERSION_MAJOR}::Core
    Eigen3::Eigen
    csv

    )
