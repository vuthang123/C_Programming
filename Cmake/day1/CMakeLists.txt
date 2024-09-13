cmake_minimum_required(VERSION 3.30.3)

cmake_policy(VERSION 3.30.3)
set(CMAKE_MFC_FLAG 2)
set (SRCS main.c)
set (CMAKE_CXX_STANDARD 11)
set (CMAKE_CXX_STANDARD_REQUIRED TRUE)

project(DAY1
        VERSION 1.0.0
        DESCRIPTION "hello"
        LANGUAGES C)

add_definitions(-D_AFXDLL)

add_executable(CMakeSetup WIN32 ${SRCS})