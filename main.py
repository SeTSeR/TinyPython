#!/usr/bin/python3
# -*- coding: UTF-8 -*-
import scanner, parser, sys, errors

def printhelp():
    print('./main.py program\n')
    print('Interprets Tiny program from file program\n')
    print('./main.py --help(or -h)\n')
    print('Prints this help')

if(sys.argv[1][0]=='-'):
    if((sys.argv[1]=="--help") or (sys.argv[1]=='-h')):
        printhelp()
    else:
        errors.error('Unrecognized parameter')
else:
    import input;
    """
    while not (input.Look=='.'):
        if(input.Look=='?'):
            scanner.match('?')
            import semantic
            semantic._input()
        elif(input.Look=='!'):
            scanner.match('!')
            import semantic
            semantic._output()
        else:
            parser.assignment()
        scanner.newline()
    """
    token = ''
    while not (token=='.'):
        token = scanner.scan()
        print(token)
    input.end()
