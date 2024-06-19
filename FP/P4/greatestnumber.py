def greatest(num):
    res = list(map(int,str(num)))
    res.sort(reverse=True)
    return int("".join(map(str,res)))




