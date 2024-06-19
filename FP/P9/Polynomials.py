from functools import reduce 
def evaluate(a,x):
    return reduce(lambda x, y: x + y, map(lambda a: a[1]*x**a[0], enumerate(a)))

