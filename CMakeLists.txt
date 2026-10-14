cmake_minimum_required(VERSION 3.20)
project(
        c_codebase
        VERSION 0.1.0
        LANGUAGES C
)

set(CMAKE_C_STANDARD 17)

add_library(c_codebase
        src/string.c
)

target_include_directories(c_codebase
        PUBLIC
            ${CMAKE_CURRENT_SOURCE_DIR}/include
)

target_compile_features(c_codebase PUBLIC c_std_17)

# Testing
include(CTest)

if(BUILD_TESTING)
    add_executable(test_types
            tests/types.c
    )

    target_link_libraries(test_types
            PRIVATE c_codebase
    )

    add_test(
            NAME types
            COMMAND test_types
    )
endif()