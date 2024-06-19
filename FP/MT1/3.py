import math 

def approx_euler(n):
    formula = 0
    for i in range(n):
        formula += (i + 1) / math.factorial(i)   
    formula = 0.5 * formula
    return round(formula,10)



print(approx_euler(5))

print(approx_euler(7))

print(approx_euler(8))

print(approx_euler(9))

