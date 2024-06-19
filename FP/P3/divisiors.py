num1 = int(input())
if num1 < 0 :
    print("Num1 tem que ser positivo")


def sum_of_divisors(num):
    divisor_sum = 0
    for i in range(1, num + 1):
        if num % i == 0:
            divisor_sum += i
    return divisor_sum

print(sum_of_divisors(num1))
