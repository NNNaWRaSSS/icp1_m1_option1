cmake_minimum_required(VERSION 3.18)
project(MyProject LANGUAGES C CXX)

if (CMAKE_BUILD_TYPE MATCHES "Debug")
    enable_testing()
    add_subdirectory(tests)

    #Static Analysis with CPPCheck
    message(STATUS "Setting cppcheck")
    find_program(CMAKE_C_CPPCHECK NAMES "cppcheck" DOC "Path to cppcheck executable")

    if(NOT CMAKE_C_CPPCHECK)
        message(WARNING "cppcheck not found.")
    else()
        message(STATUS "cppcheck found: ${CMAKE_C_CPPCHECK}")
        set(CMAKE_C_CPPCHECK "${CMAKE_C_CPPCHECK}" --enable=warning,performance,portability,style --error-exitcode=1 --force --quiet)
    endif()

endif()

add_subdirectory(src)