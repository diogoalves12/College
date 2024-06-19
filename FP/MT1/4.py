def prime_divisors(n):
    d = 2
    numero_de_primos = 0
    while n > 1:
        if n % d == 0:
            n = n//d
            numero_de_primos += 1
        else:
            d += 1
    return numero_de_primos
