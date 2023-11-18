cmake_minimum_required(VERSION 3.14)

project(9_1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Core Network Sql)
#find_package(Qt6 REQUIRED COMPONENTS Core)
#find_package();

add_executable(9_1
  main.cpp
)
target_link_libraries(9_1 Qt6::Core Qt6::Network Qt6::Sql)

install(TARGETS 9_1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
