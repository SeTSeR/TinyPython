#!/usr/bin/python3
# -*- coding: UTF-8 -*-
import input, scanner, parser, sys, errors

if((sys.argv[1]=="--help") or (sys.argv[1]=='-h')):
    print('./main.py program\n')
    print('Interprets Tiny program from file program\n')
    print('./main.py --help(or -h)\n')
    print('Prints this help')
else:
    if(sys.argv.len()>=2):
        filename = sys.argv[1]
        input.init(filename)
        input.end()
    else:
        errors.expected("Filename")
