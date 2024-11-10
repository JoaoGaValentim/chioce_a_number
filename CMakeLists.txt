cmake_minimum_required(VERSION 3.20)

project(vident)

set(CMAKE_CXX_STANDARD_REQUIRED 23)

set(SOURCE
   src/main.cpp
   src/vident.cpp
)

add_executable(vident ${SOURCE})
include_directories(vident PRIVATE ${SOURCE_DIR}/include)
