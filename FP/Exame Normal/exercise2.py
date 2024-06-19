def shopping(alist,stock): # return (spent,missing)
    missing = {}
    bill = 0
    for key in alist.keys():
        if key in stock:
            if  alist[key] > stock[key][0] :
                em_falta = int(alist[key] - stock[key][0])
                missing[key] = em_falta
                bill += stock[key][1] *  stock[key][0]
            else:
                bill += stock[key][1] * alist[key]
        else: 
            if key not in stock :
                missing[key] = alist[key]

    a = []
    for x,y in missing.items():
        a.append((x,y))
    return bill,missing



