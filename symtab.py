vartab = {}

def addvar(name, value):
    if (vartab.get(name,'None')=='None'):
        vartab[name] = value
    else:
        import errors
        errors.error('Variable is already defined')

def readvar(name):
    return vartab.get(name, 0)
