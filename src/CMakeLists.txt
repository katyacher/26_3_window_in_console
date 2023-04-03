cmake_minimum_required(VERSION 3.0.0)

add_executable(26_3_windows_in_console main.cpp ${MY_INCLUDE_DIR}/window.h window.cpp ${MY_INCLUDE_DIR}/vector.h vector.cpp ${MY_INCLUDE_DIR}/screen.h screen.cpp )

target_include_directories(26_3_windows_in_console PUBLIC ${MY_INCLUDE_DIR})