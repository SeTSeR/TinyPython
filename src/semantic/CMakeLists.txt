cmake_minimum_required(VERSION 2.8)

project(semantic)

set(SOURCE_LIB vartab.cxx)
add_library(semantic SHARED ${SOURCE_LIB})
