cmake_minimum_required (VERSION 3.8)

project(leaver)

include_directories(Leaver)

set(LEAVER Leaver.h Leaver.cpp)

add_library(leaver SHARED ${LEAVER})

target_compile_definitions(leaver PRIVATE LVR)
