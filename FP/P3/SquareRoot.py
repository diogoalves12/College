n = float(input())
g = [0, 100000]

while True:
    m = (g[0] + g[1])/2
    s = m * m

    if s > n :
        g[1] = m
    elif s < n :
        g[0] = m 

    if abs(s - n) < 0.00001:
        print(round(m, 5))  # Print the result rounded to 5 decimal places
        break
