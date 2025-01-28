cmake_minimum_required(VERSION 3.0)

project(TestOOP VERSION 0.0.1 LANGUAGES CXX)

set(
    CORE
        test-oop/test-oop.cpp

	test-oop/car.h
	test-oop/car.cpp
)

add_executable(TestOOP ${CORE})

target_include_directories(TestOOP
    PRIVATE
    test-oop/
)

set_target_properties(
    TestOOP PROPERTIES
    CXX_STANDARD 14
    CXX_STANDARD_REQUIRED ON
)