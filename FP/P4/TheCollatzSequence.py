def collatz(n):
    res = []
    res.append(str(n))
    while n != 1 : 
        if n % 2 == 0: # par
            n = n // 2
            res.append(str(n))
        elif n % 2 == 1: #impar
            n = n*3 + 1
            res.append(str(n))
    return ",".join(res)

