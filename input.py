#!/usr/bin/python3
# -*- coding: UTF-8 -*-

import sys

Look = ''

def getchar():
    char = filep.read(1)
    return char

def end():
    filep.close()

#filename = sys.argv[1]
#filep = open(filename)
filep = sys.stdin
Look = getchar()
