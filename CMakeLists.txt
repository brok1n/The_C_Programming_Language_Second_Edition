cmake_minimum_required(VERSION 3.5)
project(TheCProgrammingLanguageSecondEdition)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES 2-5.c)
add_executable(TheCProgrammingLanguageSecondEdition ${SOURCE_FILES})