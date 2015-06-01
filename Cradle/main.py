#!/usr/bin/python3
# -*- coding: UTF-8 -*-
import input, scanner
print(scanner.getname())
scanner.match('=')
num1 = scanner.getnum()
scanner.match('+')
num2 = scanner.getnum()
print(str(num1+num2))
input.end()
