#!/usr/bin/python3
# -*- coding: UTF-8 -*-

import sys, scanner

Look = ''

def getchar():
    char = filep.read(1)
    print(char)
    print(scanner.isAddop(char))
    return char

def end():
    filep.close()

#filename = sys.argv[1]
#filep = open(filename)
filep = sys.stdin
Look = getchar()
