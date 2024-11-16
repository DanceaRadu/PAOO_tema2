cmake_minimum_required(VERSION 3.10)

set(project_name "PAOO_TEMA2")
project(${project_name})

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(include)
set(SOURCES
    src/NonCopyable.cpp
    src/InitializedObject.cpp
    src/ImplicitFunctionsExample.cpp
    src/main.cpp
)

add_executable(${project_name} ${SOURCES})