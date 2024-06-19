from math import factorial,sqrt

sum = 0 
for k in range(51):
    sum +=(factorial(4*k)*(1103+26390*k))/(((factorial(k))**4)*(396**(4*k)))
res = 1/(((2*(2**0.5))/9801)*sum)
print(round(res,8))