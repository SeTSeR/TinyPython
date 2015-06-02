#!/usr/bin/python3
# -*- coding: UTF-8 -*-
import scanner, parser, sys, errors

def printhelp():
    print('./main.py program\n')
    print('Interprets Tiny program from file program\n')
    print('./main.py --help(or -h)\n')
    print('Prints this help')

if(len(sys.argv)<2):
    printhelp()
elif((sys.argv[1]=="--help") or (sys.argv[1]=='-h')):
    printhelp()
else:
    import input;
    parser.assignment()
    input.Look = input.getchar()
    print(str(parser.expression()))
    input.end()
