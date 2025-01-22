cmake_minimum_required(VERSION 3.13)

include(pico_sdk_import.cmake)

project(serial C CXX ASM)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)
pico_sdk_init()

add_executable(serial
    serial.c
    )

pico_add_extra_outputs(serial)

target_link_libraries(serial pico_stdlib hardware_uart)

pico_enable_stdio_usb(serial 1)
pico_enable_stdio_uart(serial 0)
