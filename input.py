#!/usr/bin/python3
# -*- coding: UTF-8 -*-

import sys

Look = ''
program = ''
counter = 0

def getchar():
    global counter
    try:
        char = program[counter]
    except IndexError:
        char = '.'
    counter = counter + 1
    return char

def end():
    filep.close()

#filename = sys.argv[1]
#filep = open(filename)
filep = sys.stdin
program = filep.read()
Look = getchar()
while(Look in [' ', '\t']):
    Look = getchar()
