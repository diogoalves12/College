from functools import reduce

def generator(intlist):
    return print(reduce(lambda x,y: x + y, map(lambda x: list(range(x[0],x[1]+1)), intlist)))
