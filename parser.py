#!/usr/bin/python3
# -*- coding: UTF-8 -*-
import input, scanner, errors, semantic

def term():
    result = factor()
    while(scanner.isMulop(input.Look)):
        if(input.Look=='*'):
            scanner.match('*')
            result = semantic.multiply(result, factor())
        elif(input.Look=='/'):
            scanner.match('/')
            result = semantic.divide(result, factor())
    return result

def signedterm():
    sign = input.Look
    if(scanner.isAddop(input.Look)):
        input.Look = input.getchar()
    result = term()
    if(sign=='-'):
        result = semantic.negate(result)
    return result

def expression():
    result = signedterm()
    while(scanner.isAddop(input.Look)):
        if(input.Look=='+'):
            scanner.match('+')
            result = semantic.add(result, term()) 
        elif(input.Look=='-'):
            scanner.match('-')
            result = semantic.substract(result, term())
    return result

def factor():
    if(input.Look.isdigit()):
        return semantic.getnumber()
    elif(input.Look.isalpha()):
        return semantic.loadvar(scanner.getname())
    elif(input.Look=='('):
        scanner.match('(')
        result = expression()
        scanner.match(')')
        return result
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
