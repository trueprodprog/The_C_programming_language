cmake_minimum_required(VERSION 4.1)
project(The_C_programming_language C)

set(CMAKE_C_STANDARD 11)

add_executable(main_app main.c)

add_executable(test_app additional_test_file.c)

add_executable(Fahrenheit_app Fahrenheit-Celsius_table.c)

add_executable(additional_Celsius_app additional_Celsius.c)

add_executable(cels_to_fahr_app Cels_to_Fahr.c)
