from math import floor

def juggler(n, p):
    if p == 0:
        return n 
    elif juggler(n,p-1) % 2 == 1:
        return floor(juggler(n,p-1)**1.5)
    else:
        return floor(juggler(n,p-1)**0.5)

print(juggler(3, 1))