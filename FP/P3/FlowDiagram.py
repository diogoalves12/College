L = int(input())
S = int(input())
R = L
if not R > S :
    L = R
    R = S
    S = L 

while True:
    while not S > R :
        R= R-S

    if R == 0: 
        L = R
        R = S
        S = L
        break 

print(S)
