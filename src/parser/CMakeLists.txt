cmake_minimum_required(VERSION 2.8)

project(parser)
set(SOURCE_LIB base.cxx nonterminal.cxx program.cxx relation.cxx assignment.cxx
	expression.cxx term.cxx factor.cxx block.cxx ifstatement.cxx
	elsestatement.cxx inputstatement.cxx printstatement.cxx)
add_library(parser SHARED ${SOURCE_LIB})
