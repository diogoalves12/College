def count_until(tup):
    count = 0 
    for i in tup:
        if type(i) == tuple :
            return count
        count += 1 
    return -1