#!/usr/bin/python3
# -*- coding: UTF-8 -*-
import input, scanner, parser, sys, errors

if(len(sys.argv)<2):
    errors.error('You must give exactly one argument!')
if((sys.argv[1]=="--help") or (sys.argv[1]=='-h')):
    print('./main.py program\n')
    print('Interprets Tiny program from file program\n')
    print('./main.py --help(or -h)\n')
    print('Prints this help')
else:
    filename = sys.argv[1]
    input.init(filename)
    input.end()
