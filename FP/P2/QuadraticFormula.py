import math

a = float(input())
b = float(input())
c = float(input())

delta = b**2 - 4*a*c

if delta >= 0 :
    res1 = ((-b + math.sqrt(delta))/ (2*a))
    res2 = ((-b - math.sqrt(delta)) / (2*a))

    res1 = round(res1,2)
    res2 = round(res2,2)

    print(f'The solutions are {res1} and {res2}')
