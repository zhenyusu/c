cmake_minimum_required(VERSION 2.8)
PROJECT(function_template_test)

SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)  
add_executable(function_template_test function_template_test.cpp)

add_executable(difference_between_template_and_common_function difference_between_template_and_common_function.cpp)

add_executable(class_template class_template.cpp)

