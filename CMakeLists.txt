cmake_minimum_required(VERSION 3.20)
project(
        c_codebase
        VERSION 0.1.0
        LANGUAGES C
)

set(CMAKE_C_STANDARD 17)

add_library(c_codebase
        src/stringc.c
        src/os.c
)

target_include_directories(c_codebase
        PUBLIC
            ${CMAKE_CURRENT_SOURCE_DIR}/include
)

target_compile_features(c_codebase PUBLIC c_std_17)

# Testing
include(CTest)

if(BUILD_TESTING)
    add_executable(main_test
            tests/main.c
    )

    target_link_libraries(main_test
            PRIVATE c_codebase
    )

    add_test(
            NAME main
            COMMAND main_test
    )
endif()