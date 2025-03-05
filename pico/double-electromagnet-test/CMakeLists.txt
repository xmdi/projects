cmake_minimum_required(VERSION 3.13)


include(pico_sdk_import.cmake)

project(double-electromagnet-test C CXX)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)
pico_sdk_init()

add_executable(double-electromagnet-test
    double-electromagnet-test.c
    )

pico_add_extra_outputs(double-electromagnet-test)

target_link_libraries(double-electromagnet-test pico_stdlib)
