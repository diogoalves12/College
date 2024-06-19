def nth_lowest(lnum, n):
    alist = sorted(lnum)
    print(alist)
    res = alist[n-1]
    return res

a =[42, 234, 135, 21, 232, 12312, -2343]
b= sorted(a)
print(b)