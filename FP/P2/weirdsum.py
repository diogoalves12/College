a = int(input())
b = int(input())

diferença =  abs(a-b) 
soma = a + b  

product_contribution = (diferença % 2) * (a*b) # se for par = 0 , se for impar = a*b

res = soma * ( 1 + diferença % 2) + product_contribution
res *= 2 - diferença % 2

print(res)


