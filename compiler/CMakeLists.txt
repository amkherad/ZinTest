cmake_minimum_required(VERSION 3.15)
project(ZinTest VERSION 1.0.0)

set(CMAKE_CXX_STANDARD 20)


set(LIBRARY_NAME "libzintest")

add_library(
        "${LIBRARY_NAME}" SHARED

        src/parser/token_type.hpp

)

add_executable(
        "zintest"
        src/cmd_line/main.cpp
)



target_include_directories(
        "${LIBRARY_NAME}" PUBLIC
        "${CMAKE_CURRENT_SOURCE_DIR}/src"
        "${CMAKE_CURRENT_SOURCE_DIR}/src/parser"
        "${CMAKE_CURRENT_SOURCE_DIR}/src/code_gen"
)


target_link_libraries("CppLibTests" PRIVATE "${PROJECT_NAME}")