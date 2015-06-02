#!/usr/bin/python3
# -*- coding: UTF-8 -*-
import sys

def error(s):
    print('\n\a'+'Error: '+s+'.')
    sys.exit()

def expected(s):
    error(s+' expected');
