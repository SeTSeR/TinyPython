#!/usr/bin/python3
# -*- coding: UTF-8 -*-
import input, scanner, errors, semantic

def assignment():
    varname = scanner.getname()
    scanner.match('=')
    varvalue = expression()
    semantic.savevar(varname, varvalue)

def term():
    result = notfactor()
    while(scanner.isMulop(input.Look)):
        if(input.Look=='*'):
            scanner.match('*')
            result = semantic.multiply(result, notfactor())
        elif(input.Look=='/'):
            scanner.match('/')
            result = semantic.divide(result, notfactor())
        elif(input.Look=='&'):
            scanner.match('&')
            result = semantic._and(result, notfactor())
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
        elif(input.Look=='|'):
            scanner.match('|')
            result = semantic._or(result, term())
        elif(input.Look=='~'):
            scanner.match('~')
            result = semantic._xor(result, term())
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
        errors.error('Unrecognized character: '+input.Look)

def notfactor():
    result = 0
    if(input.Look=='!'):
        scanner.match('!')
        result = factor()
        result = semantic._not(result)
    else:
        result = factor()
    return result
