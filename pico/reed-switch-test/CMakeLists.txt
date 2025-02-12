cmake_minimum_required(VERSION 3.13)


include(pico_sdk_import.cmake)

project(reed-switch-test C CXX ASM)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)
pico_sdk_init()

add_executable(reed-switch-test
    reed-switch-test.c
    reed-switch-test.s
    )

pico_add_extra_outputs(reed-switch-test)

target_link_libraries(reed-switch-test pico_stdlib)
