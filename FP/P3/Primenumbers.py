def prime(n):
    if n < 2 :
        return False
    for x in range(2,n):
        if n % x == 0 :
            return False
    return True


lower = int(input())
upper = int(input())

a = []
for x in range(lower, upper + 1):
    if prime(x) : a.append(x)

print(f"Prime numbers between {lower} and {upper} are:", end="")
for x in a:
    print("",x,end="")


