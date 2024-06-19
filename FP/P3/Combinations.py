def factorial(num):
    resultado = 1
    for i in range(1,num + 1):
        resultado*= i 
    return resultado

def C(n,r):
    return (factorial(n))/(factorial(r)*(factorial(n-r)))