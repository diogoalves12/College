def rearrange(l):
    n = [i for i in l if i <= 0]
    p = [i for i in l if i > 0]
    n.extend(p)
    return n