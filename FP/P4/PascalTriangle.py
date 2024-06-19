import math

def Pascal(n):
    r = ""
    for i in range(n):
        r += "\n"
        for j in range(i+1):
            r += str(int((math.factorial(i))/(math.factorial(j)*math.factorial(i-j)))) + " "
        r = r[:-1]
    return r


result_n3 = Pascal(3)
print(result_n3)