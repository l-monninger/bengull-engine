cmake_minimum_required(VERSION 3.20.0 FATAL_ERROR)

project(BENGULL)

set(CMAKE_CXX_STANDARD 17)

SET(ENGINE_SOURCE 

    src/engine.h

    src/engine.cpp

)

add_library(engine STATIC ${ENGINE_SOURCE})

set(TEST_SOURCE

    src/tests/testing.cpp

)

add_executable(program ${TEST_SOURCE})

target_link_libraries(program

    engine

)