cmake_minimum_required(VERSION 2.8)

project(scanner)
set(SOURCE_LIB base.cxx token.cxx number.cxx identifier.cxx operator.cxx)
add_library(scanner SHARED ${SOURCE_LIB})
