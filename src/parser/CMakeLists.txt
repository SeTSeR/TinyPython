cmake_minimum_required(VERSION 2.8)

project(parser)
set(SOURCE_LIB base.cxx nonterminal.cxx assignment.cxx expression.cxx term.cxx factor.cxx)
add_library(parser SHARED ${SOURCE_LIB})
