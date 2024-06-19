def fetch_middle(llists):
    res = []
    for lst in llists:
        if len(lst)  % 2 == 0 :
            i1 = len(lst) //2 - 1
            i2 = len(lst) //2
            a = (lst[i1]+lst[i2])/2
            res.append(a)
        else:
            a = lst[len(lst)//2]
            res.append(a)
    return res


fetch_middle([[1, 2, 3], [4, 5, 6], [7, 8, 9, 10]])