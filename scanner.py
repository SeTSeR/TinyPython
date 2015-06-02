#!/bin/bash
# -*- coding: UTF-8 -*-

import input, errors

def isAlpha(s):
    return s.isalpha()

def isDigit(s):
    return s.isdigit()

def isAlNum(s):
    return s.isalnum()

def isAddop(s):
    return (s in ['+', '-']) 

def isMulop(s):
    return (s in ['*', '/']) 

def match(x):
    if not (input.Look == x):
        errors.expected(x)
    else:
        input.Look = input.getchar()

def getname():
    str = ''
    if not isAlpha(input.Look):
        errors.expected('Name')
    else:
        while(isAlNum(input.Look)):
            str = str + input.Look
            input.Look = input.getchar()
    return str

def getnum():
    num = 0;
    if not input.Look.isdigit(): 
        errors.expected('Number')
    else:
        while input.Look.isdigit():
            num = num*10 + int(input.Look)
            input.Look = input.getchar()
    return num
