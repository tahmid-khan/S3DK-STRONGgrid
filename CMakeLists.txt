cmake_minimum_required(VERSION 3.1)
# `Threads::Threads` and `THREADS_PREFER_PTHREAD_FLAG` were introduced in 3.1

project(StrongridDLL)

set(CMAKE_CXX_STANDARD 11)

set (CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
set (CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
#set (CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})

set(CMAKE_SUPPRESS_REGENERATION true)


option(BUILD_EXAMPLE "Build the example" ON)

set_property(GLOBAL PROPERTY USE_FOLDERS ON)

add_subdirectory(StrongridBase)
add_subdirectory(StrongridClientBase)
add_subdirectory(StrongridDLL)


if(BUILD_EXAMPLE)
	add_subdirectory(StrongridDLLStressTest)
endif(BUILD_EXAMPLE)

