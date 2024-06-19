n=str(input())
b="012345678909876543210"
l="Looping number"
l2="Not a looping number"

c=(n in b)*l +(n not in b)*l2
print(c)

