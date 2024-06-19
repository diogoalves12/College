import math 

def solver(a, b, c) :
    delta = b**2 - 4*a*c
    if delta < 0 :
        return[]
    if delta == 0:
        return[-b/(2*a)]
    return sorted( [ ((-b + math.sqrt(delta)) / (2*a)) , ((-b - math.sqrt(delta)) / (2*a))])