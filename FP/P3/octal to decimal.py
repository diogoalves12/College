n = input()

if not all(x  in "01234567" for x in n) :
    print("Not a valid number.")
else:
    decimal = int(n,8)
    print(decimal)

