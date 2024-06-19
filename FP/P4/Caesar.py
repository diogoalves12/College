from math import sqrt,pow

def fibonacis(n):
    formula = int(((1+5**0.5)**n-(1-5**0.5)**n)/((2**n)*(5**0.5)))
    return formula

def caesar(message):
    abc = ['A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z']
    new = ""
    
    for i,char in enumerate(message):
        if char.isalpha():
            indice_abc = abc.index(char)
            new += abc[(indice_abc - fibonacis(i)) % 26] 
        else: 
            new += char
    return new

print(caesar('HELLO WORLD!'))