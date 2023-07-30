cmake_minimum_required (VERSION 3.8)

project(03)

include_directories(Leaver)

add_executable(03 "03.cpp" )

add_subdirectory(Leaver)

target_link_libraries(03 leaver)