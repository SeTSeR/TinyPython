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

def add(value1, value2):
    return (value1+value2)

def substract(value1, value2):
    return (value1-value2)

def multiply(value1, value2):
    return (value1*value2)

def divide(value1, value2):
    return (value1/value2)

def savevar(name, value):
    import symtab
    return symtab.addvar(name, value)
