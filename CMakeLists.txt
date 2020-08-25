cmake_minimum_required(VERSION 3.15)
project(ZinTest VERSION 1.0.0)

set(CMAKE_CXX_STANDARD 20)


add_subdirectory(compiler)

add_subdirectory(vm)

add_subdirectory(ngen)
