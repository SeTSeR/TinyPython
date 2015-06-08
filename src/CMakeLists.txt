cmake_minimum_required(VERSION 2.0)

project(interpreter)

set(SOURCE_EXE main.cxx input.cxx errors.cxx)
add_executable(interpreter ${SOURCE_EXE})
add_subdirectory(scanner)
add_subdirectory(parser)
add_subdirectory(semantic)
target_link_libraries(interpreter scanner parser semantic)
