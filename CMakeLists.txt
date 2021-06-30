cmake_minimum_required(VERSION 3.20)

include(pico_sdk_import.cmake)

project(photoresistor_2)

pico_sdk_init()

add_executable(photoresistor  photoresistor.c)

target_link_libraries(photoresistor 
pico_stdlib 
hardware_gpio
hardware_adc
)

pico_add_extra_outputs(photoresistor )