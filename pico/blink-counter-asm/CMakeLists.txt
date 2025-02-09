cmake_minimum_required(VERSION 3.13)


include(pico_sdk_import.cmake)

project(blink C CXX ASM)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)
pico_sdk_init()

add_executable(io
    blink-counter-asm.c
    blink-counter-asm.s
    )

pico_add_extra_outputs(io)

target_link_libraries(io pico_stdlib)
