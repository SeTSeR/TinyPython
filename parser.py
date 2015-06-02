#!/usr/bin/python3
# -*- coding: UTF-8 -*-
import input, scanner, errors, semantic

def expression():
    result = signedfactor()
    while(scanner.isAddop(input.Look)):
        if(input.Look=='+'):
            scanner.match('+')
            result = result + factor()
        elif(input.Look=='-'):
            scanner.match('-')
            result = result - factor()
    return result

def factor():
    if(input.Look.isdigit()):
        return semantic.getnumber()
    elif(input.Look.isalpha()):
        return semantic.loadvar(scanner.getname())
    else:
        errors.error('Unrecognized character: '+Look)

def signedfactor():
    sign = input.Look;
    if(scanner.isAddop(input.Look)):
        input.Look = input.getchar()
    result = factor()
    if(sign=='-'):
        result = semantic.negate(result)
    return result
