#!/usr/bin/python3
# -*- coding: UTF-8 -*-

def getnumber():
    import scanner
    return scanner.getnum()

def loadvar(name):
    import symtab
    return symtab.readvar(name)

def negate(toneg):
    return toneg*(-1)
