cmake_minimum_required(VERSION 3.13)


include(pico_sdk_import.cmake)

project(electromagnet-test C CXX ASM)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)
pico_sdk_init()

add_executable(electromagnet-test
    electromagnet-test.c
    electromagnet-test.s
    )

pico_add_extra_outputs(electromagnet-test)

target_link_libraries(electromagnet-test pico_stdlib)
