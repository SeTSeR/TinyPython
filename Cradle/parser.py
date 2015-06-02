#!/usr/bin/python3
# -*- coding: UTF-8 -*-
import input, scanner, errors, semantic

def factor():
    return semantic.getnumber()

def signedfactor():
    sign = input.Look;
    if(isAddop(input.Look)):
        input.look = input.getchar()
    result = factor()
    if(sign=='-'):
        result = semantic.negate(result)
    return result
