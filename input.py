#!/usr/bin/python3
# -*- coding: UTF-8 -*-

import sys

Look = ''

def getchar():
    return filep.read(1)

def end():
    filep.close()

def init(filename):
    filep = open(filename)
    Look = getchar()
