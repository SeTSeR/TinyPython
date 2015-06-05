import sys

Look = ''
def getchar():
    return filep.read(1)
def end():
    filep.close()

filename = sys.argv[1]
filep = open(filename)
Look = getchar()
