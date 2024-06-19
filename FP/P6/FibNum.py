def fib(n):
    alist = [0,1]
    if n == 1 :
        return[0]
    else :
        for i in range(2,n):
            next_number = alist[-1] + alist[-2]
            alist.append(next_number)
        return alist