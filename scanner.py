#!/bin/bash
# -*- coding: UTF-8 -*-

def isAlpha(s):
    return s.isalpha()

def isDigit(s):
    return s.isdigit()

def isAlNum(s):
    return s.isalnum()

def isAddop(s):
    return (s in ['+', '-', '|', '~']) 

def isMulop(s):
    return (s in ['*', '/', '&']) 

def isWhite(s):
    return (s in [' ', '\t'])

def isOp(s):
    return (s in ['+', '-', '*', '/', '<', '>', ':', '='])

def match(x):
    import input, errors
    if not (input.Look == x):
        errors.expected(x)
    else:
        input.Look = input.getchar()
        skipwhite()

def getname():
    import input, errors
    str = ''
    if not isAlpha(input.Look):
        errors.expected('Name')
    else:
        while(isAlNum(input.Look)):
            str = str + input.Look
            input.Look = input.getchar()
        skipwhite()
    return str

def getnum():
    import input, errors
    num = 0;
    if not input.Look.isdigit(): 
        errors.expected('Number')
    else:
        while input.Look.isdigit():
            num = num*10 + int(input.Look)
            input.Look = input.getchar()
        skipwhite()
    return num

def getop():
    import input, errors
    op = ''
    if not isOp(input.Look):
        errors.expected('Operator')
    else:
        while(isOp(input.Look)):
            op = op + input.Look
            input.Look = input.getchar()
        skipwhite()
    return op

def skipwhite():
    import input
    while(isWhite(input.Look)):
        input.Look = input.getchar()

def scan():
    import input
    result=''
    if (isAlpha(input.Look)):
        result = getname()
    elif (isDigit(input.Look)):
        result = getnum()
    elif (isOp(input.Look)):
        result = getop()
    elif (input.Look=='\n'):
        result = 'CR'
        input.Look = input.getchar()
    else:
        result = input.Look
        input.Look = input.getchar()
    skipwhite()
    return result
